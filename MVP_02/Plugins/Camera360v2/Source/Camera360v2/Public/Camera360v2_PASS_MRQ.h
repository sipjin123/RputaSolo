// Copyright 2023 ELIZAROV IVAN NIKOLAEVICH (IP) OGRN 320774600344955 | ElizzaRF.  All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "MoviePipelineDeferredPasses.h"
#include "MoviePipelineUtils.h"
#include "MoviePipeline.h"
#include "MoviePipelineRenderPass.h"
#include "GameFramework/Actor.h"

#include "MoviePipelineOutputBase.h"

#include "Camera360v2_PASS_MRQ.generated.h"

// Forward Declares
class UMoviePipelinePrimaryConfig;
class ULevelSequence;
class UMovieSceneSequencePlayer;
class UMoviePipelineCustomTimeStep;
class UEngineCustomTimeStep;
class ALevelSequenceActor;
class UMovieRenderDebugWidget;
class FMovieRenderViewport;
class FMovieRenderViewportClient;
struct FImagePixelPipe;
struct FMoviePipelineTimeController;
class FMoviePipelineOutputMerger;
class IImageWriteQueue;
class UMoviePipelineExecutorJob;
class UMoviePipelineExecutorShot;
class UMoviePipelineSetting;
class UTexture;

UCLASS()
class UCamera360v2_PASS_MRQ : public UMoviePipelineDeferredPassBase
{
    GENERATED_BODY()

public:
#if WITH_EDITOR
    virtual FText GetDisplayText() const override { return NSLOCTEXT("MovieRenderPipeline", "DeferredBasePassSetting_Camera360v2", "Camera360v2_PASS_MRQ"); }
#endif

public:
    virtual UE::MoviePipeline::FImagePassCameraViewData GetCameraInfo(FMoviePipelineRenderPassMetrics& InOutSampleState, IViewCalcPayload* OptPayload) const override;
    virtual void TeardownImpl() override;

private:
    bool bShutdownRequested = false;

 };