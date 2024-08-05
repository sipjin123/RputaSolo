// Copyright 2023 ELIZAROV IVAN NIKOLAEVICH (IP) OGRN 320774600344955 | ElizzaRF.  All Rights Reserved.


#include "ScreenSettingsCubeMap.h"
#include "Engine/World.h"
#include "Engine/GameViewportClient.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/LocalPlayer.h"
#include "Runtime/Core/Public/HAL/FileManagerGeneric.h"
#include "Runtime/Core/Public/Misc/Paths.h"
#include "Runtime/Core/Public/HAL/Platform.h"
#include "Misc/FileHelper.h"





AScreenSettingsCubeMap::AScreenSettingsCubeMap()
{

	PrimaryActorTick.bCanEverTick = true;
	StructureScreenData = TArray<FScreenDataSettings>();
}


void AScreenSettingsCubeMap::BeginPlay()
{
	Super::BeginPlay();

}


void AScreenSettingsCubeMap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AScreenSettingsCubeMap::CubeMapScreen(int32 MaxPlayers)
{
	UGameViewportClient* Viewport = GetWorld()->GetGameViewport();
	Viewport->MaxSplitscreenPlayers = MaxPlayers;

	FSplitscreenData ScreenData;


	int ScreenIndex = -1;

	for (int32 i = 0; i < MaxPlayers; i++)
	{
		ScreenIndex = ScreenIndex + 1;
		float W = StructureScreenData[ScreenIndex].ScaleSizeS / StructureScreenData[ScreenIndex].YSizeVerticalS;
		float H = StructureScreenData[ScreenIndex].ScaleSizeS / StructureScreenData[ScreenIndex].XSizeHorizontalS;
		ScreenData.PlayerData.Add(FPerPlayerSplitscreenData(W, H, StructureScreenData[ScreenIndex].XPositionS * W, StructureScreenData[ScreenIndex].YPositionS * H));

	}

	Viewport->SetForceDisableSplitscreen(EnabledScreen);
	Viewport->SplitscreenInfo[ESplitScreenType::None] = ScreenData;

}


void AScreenSettingsCubeMap::SaveSettingsShader(FString Projection, FString FullPath) {

	FString FileName = FString("RayTracingCommon.ush");
	IPlatformFile& FileManager = FPlatformFileManager::Get().GetPlatformFile();
	FString AbsoluteFilePath = FullPath + "/" + FileName;
	FFileHelper::SaveStringToFile(Projection, *AbsoluteFilePath);


}

void AScreenSettingsCubeMap::LoadSettingsFromFile(FString FileNameLoad, FString FullPath, FString& FileText) {

	FString FileName = FileNameLoad;
	IPlatformFile& FileManager = FPlatformFileManager::Get().GetPlatformFile();
	FString AbsoluteFilePath = FullPath + "/" + FileName;
	FFileHelper::LoadFileToString(FileText, *AbsoluteFilePath);


}

void AScreenSettingsCubeMap::SaveSettingsToFile(FString FileName, FString Text,FString FullPath) {

	IPlatformFile& FileManager = FPlatformFileManager::Get().GetPlatformFile();
	FString AbsoluteFilePath = FullPath + "/" + FileName;
	FFileHelper::SaveStringToFile(Text, *AbsoluteFilePath);


}

