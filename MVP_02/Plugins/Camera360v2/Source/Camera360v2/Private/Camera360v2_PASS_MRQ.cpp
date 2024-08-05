// Copyright 2023 ELIZAROV IVAN NIKOLAEVICH (IP) OGRN 320774600344955 | ElizzaRF.  All Rights Reserved.
#include "Camera360v2_PASS_MRQ.h"
#include "MoviePipelineDeferredPasses.h"

#include "SceneManagement.h"
#include "GameFramework/PlayerController.h"
#include "Interfaces/Interface_PostProcessVolume.h"
#include "WorldPartition/DataLayer/DataLayerAsset.h"
#include "TextureResource.h"
#include "GameFramework/SpringArmComponent.h" 
#include "Engine/GameViewportClient.h"
#include "MoviePipelineOutputBase.h"
#include "Engine/TextureRenderTarget2D.h"
#include "SceneView.h"
#include "MovieRenderPipelineDataTypes.h"
#include "MoviePipelineRenderPass.h"
#include "EngineModule.h"
#include "Engine/TextureRenderTarget.h"
#include "MoviePipeline.h"
#include "Misc/FrameRate.h"
#include "MoviePipelineShotConfig.h"
#include "MovieRenderOverlappedImage.h"
#include "ImagePixelData.h"
#include "MoviePipelineOutputBuilder.h"
#include "BufferVisualizationData.h"
#include "Containers/Array.h"
#include "FinalPostProcessSettings.h"
#include "Materials/Material.h"
#include "MoviePipelineCameraSetting.h"
#include "MoviePipelineHighResSetting.h"
#include "MoviePipelineQueue.h"
#include "MoviePipelineAntiAliasingSetting.h"
#include "MoviePipelineOutputSetting.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "CineCameraComponent.h"
#include "MoviePipelineUtils.h"
#include "MoviePipelineBlueprintLibrary.h"
#include "MovieRenderPipelineCoreModule.h"
#include "Components/PrimitiveComponent.h"
#include "EngineUtils.h"
#include "Engine/RendererSettings.h"
#include "Camera/CameraComponent.h"
#include "CineCameraComponent.h"
#include "Interfaces/Interface_PostProcessVolume.h"
#include "WorldPartition/DataLayer/DataLayerAsset.h"
#include "Kismet/GameplayStatics.h"
#include "MoviePipelineLinearExecutor.h"
#include "TextureResource.h"


UE::MoviePipeline::FImagePassCameraViewData UCamera360v2_PASS_MRQ::GetCameraInfo(FMoviePipelineRenderPassMetrics& InOutSampleState, IViewCalcPayload* OptPayload) const
{
    UE::MoviePipeline::FImagePassCameraViewData OutCameraData;

    const int32 NumCameras = GetNumCamerasToRender();

    UMoviePipelineExecutorShot* CurrentShot = GetPipeline()->GetActiveShotList()[GetPipeline()->GetCurrentShotIndex()];
    UCameraComponent* OutCamera = nullptr;
  

   
    APlayerController* PlayerController = GEngine->GetFirstLocalPlayerController(GetWorld());
    if (PlayerController)
    {
        APlayerCameraManager* PlayerCameraManager = PlayerController->PlayerCameraManager;
        if (PlayerCameraManager)
        {
          
            OutCameraData.ViewInfo.Location = PlayerCameraManager->GetCameraLocation();
            OutCameraData.ViewInfo.Rotation = PlayerCameraManager->GetCameraRotation();
            OutCameraData.ViewActor = PlayerCameraManager->GetViewTarget();

     

          
            UE_LOG(LogTemp, Warning, TEXT("Camera Rotation(%f)"), OutCameraData.ViewInfo.Rotation.Yaw);
            UE_LOG(LogTemp, Warning, TEXT("Frame %d successfully saved!"), InOutSampleState.FrameIndex);
           

        }
    }

    return OutCameraData;
}

void UCamera360v2_PASS_MRQ::TeardownImpl()
{
  

   
    Super::TeardownImpl();
    UE_LOG(LogTemp, Warning, TEXT("RENDERING FINISH"));
 
    

}