// Copyright 2023 ELIZAROV IVAN NIKOLAEVICH (IP) OGRN 320774600344955 | ElizzaRF.  All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MoviePipelineCommandLineEncoderSettings.h"
#include "MoviePipelineCommandLineEncoder.h"
#include "HAL/PlatformProcess.h"
#include "Misc/FileHelper.h"
#include "HAL/IConsoleManager.h"
#include "MovieRenderPipelineCoreModule.h"
#include "GameFramework/Actor.h"
#include "CameraSaveForWidgetLibrary.generated.h"



UCLASS()
class CAMERA360V2_API UCameraSaveForWidgetLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Camera360v2", meta = (Keywords = "Save Settings Widget, Save, Save Settings"))
    static bool SaveSettingsShaderWidget(FString Projection, FString FullPath);

    UFUNCTION(BlueprintCallable, Category = "Camera360v2", meta = (Keywords = "Save Settings Widget, Save, Save Settings"))
    static bool SaveSettingsShaderPrimaryRay(FString Projection, FString FullPath);

    UFUNCTION(BlueprintCallable, Category = "Camera360v2", meta = (Keywords = "Remove Folders and Files"))
    static bool RemoveFoldersAndFiles(FString FolderPath);

    UFUNCTION(BlueprintCallable, Category = "Camera360v2", meta = (Keywords = "Create Empty PNG"))
    static bool CreateEmptyMask(int32 SizeX, int32 SizeY, FString FilePath);

    UFUNCTION(BlueprintCallable, Category = "Image Stitching")
    static bool StitchImages(const TArray<FString>& ImagePaths, const FString& OutputPath, float BlendFactor);

    UFUNCTION(BlueprintCallable, Category = "Apply Encode Settings")
    static bool ApplyCLiEncoder(const FString& NewExecutablePath, const FString& NewVideoCodec, const FString& NewAudioCodec, const FString& NewOutputFileExtension, const FString& NewCommandLineFormat);

public:
    UFUNCTION(BlueprintCallable, Category = "Camera360v2", meta = (Keywords = "Spawn Actor Mono"))
    static AActor* SpawnActor(UWorld* World);

public:
    UFUNCTION(BlueprintCallable, Category = "Camera360v2", meta = (Keywords = "Spawn Actor Stereo"))
    static AActor* SpawnActorStereo(UWorld* World);

private:
    static bool bActorSpawned;

public:
    UFUNCTION(BlueprintCallable, Category = "Camera360v2", meta = (Keywords = "Is Actor Spawned"))
    static bool IsActorSpawned();

public:
    UFUNCTION(BlueprintCallable, Category = "Custom")
    static bool ExecuteCmdCommandCustom(const FString& Command);

private:
    static bool bCommandExecuted; // ƒобавлено дл€ отслеживани€ состо€ни€ выполнени€ команды
    static FString LastCommand;   // ƒл€ хранени€ последней выполненной команды


};

