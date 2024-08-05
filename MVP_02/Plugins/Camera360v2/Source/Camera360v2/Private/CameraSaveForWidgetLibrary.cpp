// Copyright 2023 IP ELIZAROV IVAN NIKOLAEVICH OGRN 320774600344955 and 
// IP ELIZAROV IVAN NIKOLAEVICH Kyrgyzstan 003-2024-169-168 INN 21205198950087| ElizzaRF.  All Rights Reserved.
#include "CameraSaveForWidgetLibrary.h"
#include "Runtime/Core/Public/HAL/FileManagerGeneric.h"
#include "Runtime/Core/Public/Misc/Paths.h"
#include "Runtime/Core/Public/HAL/Platform.h"
#include "Misc/FileHelper.h"
#include "IImageWrapperModule.h"
#include "MoviePipelineCommandLineEncoderSettings.h"
#include "IImageWrapper.h"
#include "RenderUtils.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "ImageUtils.h"

// Добавьте необходимые заголовочные файлы
#include "Windows/AllowWindowsPlatformTypes.h"
#include <windows.h>
#include "Windows/HideWindowsPlatformTypes.h"

bool UCameraSaveForWidgetLibrary::SaveSettingsShaderWidget(FString Projection, FString FullPath)
{
    FString FileName = FString("RayTracingCommon.ush");
    FString AbsoluteFilePath = FullPath + "/" + FileName;
    return FFileHelper::SaveStringToFile(Projection, *AbsoluteFilePath);
}

bool UCameraSaveForWidgetLibrary::SaveSettingsShaderPrimaryRay(FString Projection, FString FullPath)
{
    FString FileName = FString("RayTracingPrimaryRays.usf");
    FString AbsoluteFilePath = FullPath + "/" + FileName;
    return FFileHelper::SaveStringToFile(Projection, *AbsoluteFilePath);
}

bool UCameraSaveForWidgetLibrary::RemoveFoldersAndFiles(FString FolderPath)
{
    IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
    FString AbsolutePath = FPaths::ConvertRelativePathToFull(FolderPath);

    if (!PlatformFile.DirectoryExists(*AbsolutePath))
    {
        return false;
    }

    if (!PlatformFile.DeleteDirectoryRecursively(*AbsolutePath))
    {
        return false;
    }

    return true;
}

bool UCameraSaveForWidgetLibrary::CreateEmptyMask(int32 SizeX, int32 SizeY, FString FilePath)
{
    int32 Width = SizeX;
    int32 Height = SizeY;

    TArray<FColor> Pixels;
    Pixels.Init(FColor(0, 0, 0, 0), Width * Height);

    TSharedPtr<IImageWrapper> ImageWrapper = FModuleManager::LoadModuleChecked<IImageWrapperModule>("ImageWrapper").CreateImageWrapper(EImageFormat::PNG);

    if (ImageWrapper.IsValid())
    {
        ImageWrapper->SetRaw(Pixels.GetData(), Pixels.Num() * sizeof(FColor), Width, Height, ERGBFormat::BGRA, 8);

        FString AbsoluteFilePath = FPaths::ConvertRelativePathToFull(FilePath);

        if (FFileHelper::SaveArrayToFile(ImageWrapper->GetCompressed(100), *AbsoluteFilePath))
        {
            return true;
        }
    }

    return false;
}

bool UCameraSaveForWidgetLibrary::StitchImages(const TArray<FString>& ImagePaths, const FString& OutputPath, float BlendFactor)
{
    if (ImagePaths.Num() == 0)
    {
        return false;
    }

    IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
    TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule.CreateImageWrapper(EImageFormat::PNG);

    TArray<TArray<FColor>> Bitmaps;
    int MaxHeight = 0;
    int TotalWidth = 0;

    int FirstImageWidth = 0;

    for (const auto& Path : ImagePaths)
    {
        TArray<uint8> RawData;
        if (!FFileHelper::LoadFileToArray(RawData, *Path))
        {
            return false;
        }

        if (!ImageWrapper->SetCompressed(RawData.GetData(), RawData.Num()))
        {
            return false;
        }

        TArray64<uint8> RawData64;
        if (!ImageWrapper->GetRaw(RawData64))
        {
            return false;
        }

        TArray<FColor> Bitmap;
        Bitmap.SetNumUninitialized(RawData64.Num() / sizeof(FColor));
        FMemory::Memcpy(Bitmap.GetData(), RawData64.GetData(), RawData64.Num());

        if (Bitmap.Num() == 0)
        {
            return false;
        }

        if (FirstImageWidth == 0)
        {
            FirstImageWidth = ImageWrapper->GetWidth();
        }

        Bitmaps.Add(Bitmap);
        MaxHeight = FMath::Max(MaxHeight, ImageWrapper->GetHeight());
        TotalWidth += ImageWrapper->GetWidth();
    }

    float Offset = FirstImageWidth * (-0.5f);
    TotalWidth += (Bitmaps.Num() - 1) * FMath::FloorToInt(Offset);

    TArray<FColor> StitchedBitmap;
    StitchedBitmap.SetNumZeroed(MaxHeight * TotalWidth);

    float CurrentX = 0;

    for (int i = 0; i < Bitmaps.Num(); ++i)
    {
        const TArray<FColor>& Bitmap = Bitmaps[i];
        int SourceWidth = ImageWrapper->GetWidth();
        int SourceHeight = ImageWrapper->GetHeight();
        int TargetX = FMath::RoundToInt(CurrentX);

        for (int Y = 0; Y < SourceHeight; ++Y)
        {
            int SourceOffset = Y * SourceWidth;
            int TargetOffset = Y * TotalWidth + TargetX;

            for (int X = 0; X < SourceWidth; ++X)
            {
                FColor SourcePixel = Bitmap[SourceOffset + X];
                FColor& TargetPixel = StitchedBitmap[TargetOffset + X];

                float SourceAlpha = SourcePixel.A / 255.0f;
                float TargetAlpha = TargetPixel.A / 255.0f;

                float LocalBlendFactor = FMath::Min(1.0f, (1.0f - FMath::Abs(CurrentX - TargetX) / FirstImageWidth));
                float BlendFactorCombined = BlendFactor * LocalBlendFactor;

                if (SourcePixel == TargetPixel)
                {
                    TargetPixel.A = 255;
                }
                else
                {
                    TargetPixel.R = FMath::RoundToInt((SourcePixel.R * SourceAlpha + TargetPixel.R * TargetAlpha * (1.0f - BlendFactorCombined)) / (SourceAlpha + TargetAlpha * (1.0f - BlendFactorCombined)));
                    TargetPixel.G = FMath::RoundToInt((SourcePixel.G * SourceAlpha + TargetPixel.G * TargetAlpha * (1.0f - BlendFactorCombined)) / (SourceAlpha + TargetAlpha * (1.0f - BlendFactorCombined)));
                    TargetPixel.B = FMath::RoundToInt((SourcePixel.B * SourceAlpha + TargetPixel.B * TargetAlpha * (1.0f - BlendFactorCombined)) / (SourceAlpha + TargetAlpha * (1.0f - BlendFactorCombined)));
                    TargetPixel.A = 255;
                }
            }
        }

        CurrentX += SourceWidth + Offset;
    }

    TArray<uint8> CompressedData;
    if (!ImageWrapper->SetRaw(StitchedBitmap.GetData(), StitchedBitmap.Num() * sizeof(FColor), TotalWidth, MaxHeight, ERGBFormat::BGRA, 8))
    {
        return false;
    }

    CompressedData = ImageWrapper->GetCompressed();

    return FFileHelper::SaveArrayToFile(CompressedData, *OutputPath);
}

bool UCameraSaveForWidgetLibrary::ApplyCLiEncoder(const FString& NewExecutablePath, const FString& NewVideoCodec, const FString& NewAudioCodec, const FString& NewOutputFileExtension, const FString& NewCommandLineFormat)
{
    UMoviePipelineCommandLineEncoderSettings* Settings = GetMutableDefault<UMoviePipelineCommandLineEncoderSettings>();

    Settings->ExecutablePath = NewExecutablePath;
    Settings->VideoCodec = NewVideoCodec;
    Settings->AudioCodec = NewAudioCodec;
    Settings->OutputFileExtension = NewOutputFileExtension;
    Settings->CommandLineFormat = NewCommandLineFormat;
    Settings->SaveConfig();
    return true;
}

bool bActorSpawned = false;
AActor* SpawnedActor = nullptr;

AActor* UCameraSaveForWidgetLibrary::SpawnActor(UWorld* World)
{

    if (bActorSpawned)
    {

        if (IsValid(SpawnedActor))
        {


            UE_LOG(LogTemp, Warning, TEXT("Actor already spawned!"));
            return SpawnedActor;
        }
        else
        {

            bActorSpawned = false;
            SpawnedActor = nullptr;
        }
    }


    UClass* ActorClass = Cast<UClass>(StaticLoadObject(UClass::StaticClass(), nullptr, TEXT("/Camera360v2/Camera360_v2/Blueprints/Actor/Experimental/NDC_Camera360v2_Mono.NDC_Camera360v2_Mono_C")));

    if (ActorClass && World)
    {

        AActor* NewSpawnedActor = World->SpawnActor<AActor>(ActorClass, FVector::ZeroVector, FRotator::ZeroRotator);

        if (NewSpawnedActor)
        {

            bActorSpawned = true;
            SpawnedActor = NewSpawnedActor;

            FString ActorName = TEXT("NDC_Camera360v2_Mono");
#if WITH_EDITOR
            SpawnedActor->SetActorLabel(*ActorName);
#endif



            UE_LOG(LogTemp, Warning, TEXT("Actor successfully spawned!"));

            return SpawnedActor;
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("Failed to spawn actor!"));
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Failed to load actor class or World is null!"));
    }

    return nullptr;
}

AActor* UCameraSaveForWidgetLibrary::SpawnActorStereo(UWorld* World)
{

    if (bActorSpawned)
    {

        if (IsValid(SpawnedActor))
        {


            UE_LOG(LogTemp, Warning, TEXT("Actor already spawned!"));
            return SpawnedActor;
        }
        else
        {

            bActorSpawned = false;
            SpawnedActor = nullptr;
        }
    }


    UClass* ActorClass = Cast<UClass>(StaticLoadObject(UClass::StaticClass(), nullptr, TEXT("/Camera360v2/Camera360_v2/Blueprints/Actor/Experimental/NDC_Camera360v2_Stereo.NDC_Camera360v2_Stereo_C")));

    if (ActorClass && World)
    {

        AActor* NewSpawnedActor = World->SpawnActor<AActor>(ActorClass, FVector::ZeroVector, FRotator::ZeroRotator);

        if (NewSpawnedActor)
        {

            bActorSpawned = true;
            SpawnedActor = NewSpawnedActor;

            FString ActorName = TEXT("NDC_Camera360v2_Stereo");
#if WITH_EDITOR
            SpawnedActor->SetActorLabel(*ActorName);
#endif


            UE_LOG(LogTemp, Warning, TEXT("Actor successfully spawned!"));

            return SpawnedActor;
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("Failed to spawn actor!"));
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Failed to load actor class or World is null!"));
    }

    return nullptr;
}

bool UCameraSaveForWidgetLibrary::bCommandExecuted = false;
FString UCameraSaveForWidgetLibrary::LastCommand = "";

bool UCameraSaveForWidgetLibrary::ExecuteCmdCommandCustom(const FString& Command)
{
    if (Command.IsEmpty())
    {
        UE_LOG(LogTemp, Error, TEXT("Command is empty!"));
        return false;
    }

    // Проверка на повторное выполнение той же команды
    if (bCommandExecuted && Command == LastCommand)
    {
        UE_LOG(LogTemp, Warning, TEXT("The same command has already been executed!"));
        return false;
    }

    // Convert FString to TCHAR array
    TCHAR CommandTCHAR[32000];  // Увеличим размер массива для длинных команд
    FCString::Strcpy(CommandTCHAR, *Command);

    UE_LOG(LogTemp, Log, TEXT("Executing command: %s"), *Command);

    // Setup process startup info
    STARTUPINFO StartupInfo;
    PROCESS_INFORMATION ProcessInfo;
    FMemory::Memzero(&StartupInfo, sizeof(STARTUPINFO));
    FMemory::Memzero(&ProcessInfo, sizeof(PROCESS_INFORMATION));
    StartupInfo.cb = sizeof(STARTUPINFO);
    StartupInfo.dwFlags = STARTF_USESHOWWINDOW;  // Устанавливаем флаг использования wShowWindow
    StartupInfo.wShowWindow = SW_HIDE;  // Скрыть окно

    // Create the process
    BOOL bCreateProcessResult = CreateProcess(
        NULL,            // No module name (use command line)
        CommandTCHAR,    // Command line
        NULL,            // Process handle not inheritable
        NULL,            // Thread handle not inheritable
        0,           // Set handle inheritance to FALSE
        CREATE_NO_WINDOW, // No creation flags
        NULL,            // Use parent's environment block
        NULL,            // Use parent's starting directory 
        &StartupInfo,    // Pointer to STARTUPINFO structure
        &ProcessInfo);   // Pointer to PROCESS_INFORMATION structure

    if (!bCreateProcessResult)
    {
        DWORD ErrorCode = GetLastError();
        UE_LOG(LogTemp, Error, TEXT("Failed to create process! Error: %d"), ErrorCode);
        return false;
    }

    UE_LOG(LogTemp, Log, TEXT("Process created successfully, waiting for it to complete..."));

    // Wait for the process to complete
    WaitForSingleObject(ProcessInfo.hProcess, INFINITE);

    // Get the exit code
    DWORD ExitCode;
    if (GetExitCodeProcess(ProcessInfo.hProcess, &ExitCode))
    {
        UE_LOG(LogTemp, Log, TEXT("Process exited with code: %d"), ExitCode);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to get process exit code!"));
    }

    UE_LOG(LogTemp, Log, TEXT("Process completed. Closing handles."));

    // Close process and thread handles
    CloseHandle(ProcessInfo.hProcess);
    CloseHandle(ProcessInfo.hThread);

    UE_LOG(LogTemp, Log, TEXT("Handles closed. Command executed successfully."));

    // Устанавливаем флаг, что команда была выполнена, и сохраняем последнюю команду
    bCommandExecuted = true;
    LastCommand = Command;

    return true;
}


bool UCameraSaveForWidgetLibrary::bActorSpawned = false;

bool UCameraSaveForWidgetLibrary::IsActorSpawned()
{
    return bActorSpawned;
}

