// Copyright 2023 ELIZAROV IVAN NIKOLAEVICH (IP) OGRN 320774600344955 | ElizzaRF.  All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ScreenSettingsCubeMap.generated.h"


USTRUCT(BlueprintType)
struct FScreenDataSettings
{
	GENERATED_USTRUCT_BODY()


		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ScreenPropertiesStruct")
		float XPositionS;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ScreenPropertiesStruct")
		float YPositionS;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ScreenPropertiesStruct")
		float ScaleSizeS;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ScreenPropertiesStruct")
		float YSizeVerticalS;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ScreenPropertiesStruct")
		float XSizeHorizontalS;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ScreenPropertiesStruct")
		FString NameScreenS;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ScreenPropertiesStruct")
		int32 ScreenIndexS;

};


UCLASS()
class CAMERA360V2_API AScreenSettingsCubeMap : public AActor
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, Category = "Camera360, Camera360v2, Cubemap, Python")
		void SaveSettingsShader(FString Projection, FString FullPath);

	UFUNCTION(BlueprintCallable, Category = "Camera360, Camera360v2, Cubemap, Python")
		void LoadSettingsFromFile(FString FileNameLoad, FString FullPath, FString& FileText);

	UFUNCTION(BlueprintCallable, Category = "Camera360, Camera360v2, Cubemap, Python")
		void SaveSettingsToFile(FString FileName, FString Text, FString FullPath);


public:
	AScreenSettingsCubeMap();

protected:

	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;


	UFUNCTION(BlueprintCallable, Category = "Camera360, Camera360v2, Cubemap")
		void CubeMapScreen(int32 MaxPlayers);

	


public:
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "ScreenProperties")
		TArray<FScreenDataSettings> StructureScreenData;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "ScreenProperties")
		bool EnabledScreen;


};


