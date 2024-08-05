// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CameraSaveForWidgetLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraSaveForWidgetLibrary() {}
// Cross Module References
	CAMERA360V2_API UClass* Z_Construct_UClass_UCameraSaveForWidgetLibrary();
	CAMERA360V2_API UClass* Z_Construct_UClass_UCameraSaveForWidgetLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Camera360v2();
// End Cross Module References
	DEFINE_FUNCTION(UCameraSaveForWidgetLibrary::execExecuteCmdCommandCustom)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Command);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCameraSaveForWidgetLibrary::ExecuteCmdCommandCustom(Z_Param_Command);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraSaveForWidgetLibrary::execIsActorSpawned)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCameraSaveForWidgetLibrary::IsActorSpawned();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraSaveForWidgetLibrary::execSpawnActorStereo)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UCameraSaveForWidgetLibrary::SpawnActorStereo(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraSaveForWidgetLibrary::execSpawnActor)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UCameraSaveForWidgetLibrary::SpawnActor(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraSaveForWidgetLibrary::execApplyCLiEncoder)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewExecutablePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewVideoCodec);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewAudioCodec);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewOutputFileExtension);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewCommandLineFormat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCameraSaveForWidgetLibrary::ApplyCLiEncoder(Z_Param_NewExecutablePath,Z_Param_NewVideoCodec,Z_Param_NewAudioCodec,Z_Param_NewOutputFileExtension,Z_Param_NewCommandLineFormat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraSaveForWidgetLibrary::execStitchImages)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_ImagePaths);
		P_GET_PROPERTY(FStrProperty,Z_Param_OutputPath);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendFactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCameraSaveForWidgetLibrary::StitchImages(Z_Param_Out_ImagePaths,Z_Param_OutputPath,Z_Param_BlendFactor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraSaveForWidgetLibrary::execCreateEmptyMask)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SizeX);
		P_GET_PROPERTY(FIntProperty,Z_Param_SizeY);
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCameraSaveForWidgetLibrary::CreateEmptyMask(Z_Param_SizeX,Z_Param_SizeY,Z_Param_FilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraSaveForWidgetLibrary::execRemoveFoldersAndFiles)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FolderPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCameraSaveForWidgetLibrary::RemoveFoldersAndFiles(Z_Param_FolderPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraSaveForWidgetLibrary::execSaveSettingsShaderPrimaryRay)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Projection);
		P_GET_PROPERTY(FStrProperty,Z_Param_FullPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCameraSaveForWidgetLibrary::SaveSettingsShaderPrimaryRay(Z_Param_Projection,Z_Param_FullPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraSaveForWidgetLibrary::execSaveSettingsShaderWidget)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Projection);
		P_GET_PROPERTY(FStrProperty,Z_Param_FullPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCameraSaveForWidgetLibrary::SaveSettingsShaderWidget(Z_Param_Projection,Z_Param_FullPath);
		P_NATIVE_END;
	}
	void UCameraSaveForWidgetLibrary::StaticRegisterNativesUCameraSaveForWidgetLibrary()
	{
		UClass* Class = UCameraSaveForWidgetLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyCLiEncoder", &UCameraSaveForWidgetLibrary::execApplyCLiEncoder },
			{ "CreateEmptyMask", &UCameraSaveForWidgetLibrary::execCreateEmptyMask },
			{ "ExecuteCmdCommandCustom", &UCameraSaveForWidgetLibrary::execExecuteCmdCommandCustom },
			{ "IsActorSpawned", &UCameraSaveForWidgetLibrary::execIsActorSpawned },
			{ "RemoveFoldersAndFiles", &UCameraSaveForWidgetLibrary::execRemoveFoldersAndFiles },
			{ "SaveSettingsShaderPrimaryRay", &UCameraSaveForWidgetLibrary::execSaveSettingsShaderPrimaryRay },
			{ "SaveSettingsShaderWidget", &UCameraSaveForWidgetLibrary::execSaveSettingsShaderWidget },
			{ "SpawnActor", &UCameraSaveForWidgetLibrary::execSpawnActor },
			{ "SpawnActorStereo", &UCameraSaveForWidgetLibrary::execSpawnActorStereo },
			{ "StitchImages", &UCameraSaveForWidgetLibrary::execStitchImages },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics
	{
		struct CameraSaveForWidgetLibrary_eventApplyCLiEncoder_Parms
		{
			FString NewExecutablePath;
			FString NewVideoCodec;
			FString NewAudioCodec;
			FString NewOutputFileExtension;
			FString NewCommandLineFormat;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewExecutablePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewExecutablePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewVideoCodec_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewVideoCodec;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewAudioCodec_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewAudioCodec;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewOutputFileExtension_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewOutputFileExtension;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewCommandLineFormat_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewCommandLineFormat;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics::NewProp_NewExecutablePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics::NewProp_NewExecutablePath = { "NewExecutablePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraSaveForWidgetLibrary_eventApplyCLiEncoder_Parms, NewExecutablePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics::NewProp_NewExecutablePath_MetaData), Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics::NewProp_NewExecutablePath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics::NewProp_NewVideoCodec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics::NewProp_NewVideoCodec = { "NewVideoCodec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraSaveForWidgetLibrary_eventApplyCLiEncoder_Parms, NewVideoCodec), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics::NewProp_NewVideoCodec_MetaData), Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics::NewProp_NewVideoCodec_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics::NewProp_NewAudioCodec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics::NewProp_NewAudioCodec = { "NewAudioCodec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraSaveForWidgetLibrary_eventApplyCLiEncoder_Parms, NewAudioCodec), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics::NewProp_NewAudioCodec_MetaData), Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics::NewProp_NewAudioCodec_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics::NewProp_NewOutputFileExtension_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics::NewProp_NewOutputFileExtension = { "NewOutputFileExtension", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraSaveForWidgetLibrary_eventApplyCLiEncoder_Parms, NewOutputFileExtension), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics::NewProp_NewOutputFileExtension_MetaData), Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics::NewProp_NewOutputFileExtension_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics::NewProp_NewCommandLineFormat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics::NewProp_NewCommandLineFormat = { "NewCommandLineFormat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraSaveForWidgetLibrary_eventApplyCLiEncoder_Parms, NewCommandLineFormat), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics::NewProp_NewCommandLineFormat_MetaData), Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics::NewProp_NewCommandLineFormat_MetaData) };
	void Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CameraSaveForWidgetLibrary_eventApplyCLiEncoder_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CameraSaveForWidgetLibrary_eventApplyCLiEncoder_Parms), &Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics::NewProp_NewExecutablePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics::NewProp_NewVideoCodec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics::NewProp_NewAudioCodec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics::NewProp_NewOutputFileExtension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics::NewProp_NewCommandLineFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Apply Encode Settings" },
		{ "ModuleRelativePath", "Public/CameraSaveForWidgetLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraSaveForWidgetLibrary, nullptr, "ApplyCLiEncoder", nullptr, nullptr, Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics::CameraSaveForWidgetLibrary_eventApplyCLiEncoder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics::CameraSaveForWidgetLibrary_eventApplyCLiEncoder_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraSaveForWidgetLibrary_CreateEmptyMask_Statics
	{
		struct CameraSaveForWidgetLibrary_eventCreateEmptyMask_Parms
		{
			int32 SizeX;
			int32 SizeY;
			FString FilePath;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCameraSaveForWidgetLibrary_CreateEmptyMask_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraSaveForWidgetLibrary_eventCreateEmptyMask_Parms, SizeX), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCameraSaveForWidgetLibrary_CreateEmptyMask_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraSaveForWidgetLibrary_eventCreateEmptyMask_Parms, SizeY), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCameraSaveForWidgetLibrary_CreateEmptyMask_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraSaveForWidgetLibrary_eventCreateEmptyMask_Parms, FilePath), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UCameraSaveForWidgetLibrary_CreateEmptyMask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CameraSaveForWidgetLibrary_eventCreateEmptyMask_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraSaveForWidgetLibrary_CreateEmptyMask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CameraSaveForWidgetLibrary_eventCreateEmptyMask_Parms), &Z_Construct_UFunction_UCameraSaveForWidgetLibrary_CreateEmptyMask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraSaveForWidgetLibrary_CreateEmptyMask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraSaveForWidgetLibrary_CreateEmptyMask_Statics::NewProp_SizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraSaveForWidgetLibrary_CreateEmptyMask_Statics::NewProp_SizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraSaveForWidgetLibrary_CreateEmptyMask_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraSaveForWidgetLibrary_CreateEmptyMask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraSaveForWidgetLibrary_CreateEmptyMask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera360v2" },
		{ "Keywords", "Create Empty PNG" },
		{ "ModuleRelativePath", "Public/CameraSaveForWidgetLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraSaveForWidgetLibrary_CreateEmptyMask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraSaveForWidgetLibrary, nullptr, "CreateEmptyMask", nullptr, nullptr, Z_Construct_UFunction_UCameraSaveForWidgetLibrary_CreateEmptyMask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_CreateEmptyMask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_CreateEmptyMask_Statics::CameraSaveForWidgetLibrary_eventCreateEmptyMask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_CreateEmptyMask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraSaveForWidgetLibrary_CreateEmptyMask_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_CreateEmptyMask_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_CreateEmptyMask_Statics::CameraSaveForWidgetLibrary_eventCreateEmptyMask_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCameraSaveForWidgetLibrary_CreateEmptyMask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraSaveForWidgetLibrary_CreateEmptyMask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ExecuteCmdCommandCustom_Statics
	{
		struct CameraSaveForWidgetLibrary_eventExecuteCmdCommandCustom_Parms
		{
			FString Command;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Command;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ExecuteCmdCommandCustom_Statics::NewProp_Command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ExecuteCmdCommandCustom_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraSaveForWidgetLibrary_eventExecuteCmdCommandCustom_Parms, Command), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ExecuteCmdCommandCustom_Statics::NewProp_Command_MetaData), Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ExecuteCmdCommandCustom_Statics::NewProp_Command_MetaData) };
	void Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ExecuteCmdCommandCustom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CameraSaveForWidgetLibrary_eventExecuteCmdCommandCustom_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ExecuteCmdCommandCustom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CameraSaveForWidgetLibrary_eventExecuteCmdCommandCustom_Parms), &Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ExecuteCmdCommandCustom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ExecuteCmdCommandCustom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ExecuteCmdCommandCustom_Statics::NewProp_Command,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ExecuteCmdCommandCustom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ExecuteCmdCommandCustom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom" },
		{ "ModuleRelativePath", "Public/CameraSaveForWidgetLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ExecuteCmdCommandCustom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraSaveForWidgetLibrary, nullptr, "ExecuteCmdCommandCustom", nullptr, nullptr, Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ExecuteCmdCommandCustom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ExecuteCmdCommandCustom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ExecuteCmdCommandCustom_Statics::CameraSaveForWidgetLibrary_eventExecuteCmdCommandCustom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ExecuteCmdCommandCustom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ExecuteCmdCommandCustom_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ExecuteCmdCommandCustom_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ExecuteCmdCommandCustom_Statics::CameraSaveForWidgetLibrary_eventExecuteCmdCommandCustom_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ExecuteCmdCommandCustom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ExecuteCmdCommandCustom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraSaveForWidgetLibrary_IsActorSpawned_Statics
	{
		struct CameraSaveForWidgetLibrary_eventIsActorSpawned_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCameraSaveForWidgetLibrary_IsActorSpawned_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CameraSaveForWidgetLibrary_eventIsActorSpawned_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraSaveForWidgetLibrary_IsActorSpawned_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CameraSaveForWidgetLibrary_eventIsActorSpawned_Parms), &Z_Construct_UFunction_UCameraSaveForWidgetLibrary_IsActorSpawned_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraSaveForWidgetLibrary_IsActorSpawned_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraSaveForWidgetLibrary_IsActorSpawned_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraSaveForWidgetLibrary_IsActorSpawned_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera360v2" },
		{ "Keywords", "Is Actor Spawned" },
		{ "ModuleRelativePath", "Public/CameraSaveForWidgetLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraSaveForWidgetLibrary_IsActorSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraSaveForWidgetLibrary, nullptr, "IsActorSpawned", nullptr, nullptr, Z_Construct_UFunction_UCameraSaveForWidgetLibrary_IsActorSpawned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_IsActorSpawned_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_IsActorSpawned_Statics::CameraSaveForWidgetLibrary_eventIsActorSpawned_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_IsActorSpawned_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraSaveForWidgetLibrary_IsActorSpawned_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_IsActorSpawned_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_IsActorSpawned_Statics::CameraSaveForWidgetLibrary_eventIsActorSpawned_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCameraSaveForWidgetLibrary_IsActorSpawned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraSaveForWidgetLibrary_IsActorSpawned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraSaveForWidgetLibrary_RemoveFoldersAndFiles_Statics
	{
		struct CameraSaveForWidgetLibrary_eventRemoveFoldersAndFiles_Parms
		{
			FString FolderPath;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FolderPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCameraSaveForWidgetLibrary_RemoveFoldersAndFiles_Statics::NewProp_FolderPath = { "FolderPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraSaveForWidgetLibrary_eventRemoveFoldersAndFiles_Parms, FolderPath), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UCameraSaveForWidgetLibrary_RemoveFoldersAndFiles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CameraSaveForWidgetLibrary_eventRemoveFoldersAndFiles_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraSaveForWidgetLibrary_RemoveFoldersAndFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CameraSaveForWidgetLibrary_eventRemoveFoldersAndFiles_Parms), &Z_Construct_UFunction_UCameraSaveForWidgetLibrary_RemoveFoldersAndFiles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraSaveForWidgetLibrary_RemoveFoldersAndFiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraSaveForWidgetLibrary_RemoveFoldersAndFiles_Statics::NewProp_FolderPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraSaveForWidgetLibrary_RemoveFoldersAndFiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraSaveForWidgetLibrary_RemoveFoldersAndFiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera360v2" },
		{ "Keywords", "Remove Folders and Files" },
		{ "ModuleRelativePath", "Public/CameraSaveForWidgetLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraSaveForWidgetLibrary_RemoveFoldersAndFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraSaveForWidgetLibrary, nullptr, "RemoveFoldersAndFiles", nullptr, nullptr, Z_Construct_UFunction_UCameraSaveForWidgetLibrary_RemoveFoldersAndFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_RemoveFoldersAndFiles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_RemoveFoldersAndFiles_Statics::CameraSaveForWidgetLibrary_eventRemoveFoldersAndFiles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_RemoveFoldersAndFiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraSaveForWidgetLibrary_RemoveFoldersAndFiles_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_RemoveFoldersAndFiles_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_RemoveFoldersAndFiles_Statics::CameraSaveForWidgetLibrary_eventRemoveFoldersAndFiles_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCameraSaveForWidgetLibrary_RemoveFoldersAndFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraSaveForWidgetLibrary_RemoveFoldersAndFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderPrimaryRay_Statics
	{
		struct CameraSaveForWidgetLibrary_eventSaveSettingsShaderPrimaryRay_Parms
		{
			FString Projection;
			FString FullPath;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Projection;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FullPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderPrimaryRay_Statics::NewProp_Projection = { "Projection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraSaveForWidgetLibrary_eventSaveSettingsShaderPrimaryRay_Parms, Projection), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderPrimaryRay_Statics::NewProp_FullPath = { "FullPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraSaveForWidgetLibrary_eventSaveSettingsShaderPrimaryRay_Parms, FullPath), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderPrimaryRay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CameraSaveForWidgetLibrary_eventSaveSettingsShaderPrimaryRay_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderPrimaryRay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CameraSaveForWidgetLibrary_eventSaveSettingsShaderPrimaryRay_Parms), &Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderPrimaryRay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderPrimaryRay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderPrimaryRay_Statics::NewProp_Projection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderPrimaryRay_Statics::NewProp_FullPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderPrimaryRay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderPrimaryRay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera360v2" },
		{ "Keywords", "Save Settings Widget, Save, Save Settings" },
		{ "ModuleRelativePath", "Public/CameraSaveForWidgetLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderPrimaryRay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraSaveForWidgetLibrary, nullptr, "SaveSettingsShaderPrimaryRay", nullptr, nullptr, Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderPrimaryRay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderPrimaryRay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderPrimaryRay_Statics::CameraSaveForWidgetLibrary_eventSaveSettingsShaderPrimaryRay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderPrimaryRay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderPrimaryRay_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderPrimaryRay_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderPrimaryRay_Statics::CameraSaveForWidgetLibrary_eventSaveSettingsShaderPrimaryRay_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderPrimaryRay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderPrimaryRay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderWidget_Statics
	{
		struct CameraSaveForWidgetLibrary_eventSaveSettingsShaderWidget_Parms
		{
			FString Projection;
			FString FullPath;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Projection;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FullPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderWidget_Statics::NewProp_Projection = { "Projection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraSaveForWidgetLibrary_eventSaveSettingsShaderWidget_Parms, Projection), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderWidget_Statics::NewProp_FullPath = { "FullPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraSaveForWidgetLibrary_eventSaveSettingsShaderWidget_Parms, FullPath), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderWidget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CameraSaveForWidgetLibrary_eventSaveSettingsShaderWidget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CameraSaveForWidgetLibrary_eventSaveSettingsShaderWidget_Parms), &Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderWidget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderWidget_Statics::NewProp_Projection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderWidget_Statics::NewProp_FullPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera360v2" },
		{ "Keywords", "Save Settings Widget, Save, Save Settings" },
		{ "ModuleRelativePath", "Public/CameraSaveForWidgetLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraSaveForWidgetLibrary, nullptr, "SaveSettingsShaderWidget", nullptr, nullptr, Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderWidget_Statics::CameraSaveForWidgetLibrary_eventSaveSettingsShaderWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderWidget_Statics::CameraSaveForWidgetLibrary_eventSaveSettingsShaderWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SpawnActor_Statics
	{
		struct CameraSaveForWidgetLibrary_eventSpawnActor_Parms
		{
			UWorld* World;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SpawnActor_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraSaveForWidgetLibrary_eventSpawnActor_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SpawnActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraSaveForWidgetLibrary_eventSpawnActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SpawnActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SpawnActor_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SpawnActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SpawnActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera360v2" },
		{ "Keywords", "Spawn Actor Mono" },
		{ "ModuleRelativePath", "Public/CameraSaveForWidgetLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SpawnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraSaveForWidgetLibrary, nullptr, "SpawnActor", nullptr, nullptr, Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SpawnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SpawnActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SpawnActor_Statics::CameraSaveForWidgetLibrary_eventSpawnActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SpawnActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SpawnActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SpawnActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SpawnActor_Statics::CameraSaveForWidgetLibrary_eventSpawnActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SpawnActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SpawnActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SpawnActorStereo_Statics
	{
		struct CameraSaveForWidgetLibrary_eventSpawnActorStereo_Parms
		{
			UWorld* World;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SpawnActorStereo_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraSaveForWidgetLibrary_eventSpawnActorStereo_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SpawnActorStereo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraSaveForWidgetLibrary_eventSpawnActorStereo_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SpawnActorStereo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SpawnActorStereo_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SpawnActorStereo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SpawnActorStereo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera360v2" },
		{ "Keywords", "Spawn Actor Stereo" },
		{ "ModuleRelativePath", "Public/CameraSaveForWidgetLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SpawnActorStereo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraSaveForWidgetLibrary, nullptr, "SpawnActorStereo", nullptr, nullptr, Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SpawnActorStereo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SpawnActorStereo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SpawnActorStereo_Statics::CameraSaveForWidgetLibrary_eventSpawnActorStereo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SpawnActorStereo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SpawnActorStereo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SpawnActorStereo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SpawnActorStereo_Statics::CameraSaveForWidgetLibrary_eventSpawnActorStereo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SpawnActorStereo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SpawnActorStereo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraSaveForWidgetLibrary_StitchImages_Statics
	{
		struct CameraSaveForWidgetLibrary_eventStitchImages_Parms
		{
			TArray<FString> ImagePaths;
			FString OutputPath;
			float BlendFactor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImagePaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImagePaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ImagePaths;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutputPath;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendFactor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCameraSaveForWidgetLibrary_StitchImages_Statics::NewProp_ImagePaths_Inner = { "ImagePaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraSaveForWidgetLibrary_StitchImages_Statics::NewProp_ImagePaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCameraSaveForWidgetLibrary_StitchImages_Statics::NewProp_ImagePaths = { "ImagePaths", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraSaveForWidgetLibrary_eventStitchImages_Parms, ImagePaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_StitchImages_Statics::NewProp_ImagePaths_MetaData), Z_Construct_UFunction_UCameraSaveForWidgetLibrary_StitchImages_Statics::NewProp_ImagePaths_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraSaveForWidgetLibrary_StitchImages_Statics::NewProp_OutputPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCameraSaveForWidgetLibrary_StitchImages_Statics::NewProp_OutputPath = { "OutputPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraSaveForWidgetLibrary_eventStitchImages_Parms, OutputPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_StitchImages_Statics::NewProp_OutputPath_MetaData), Z_Construct_UFunction_UCameraSaveForWidgetLibrary_StitchImages_Statics::NewProp_OutputPath_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraSaveForWidgetLibrary_StitchImages_Statics::NewProp_BlendFactor = { "BlendFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraSaveForWidgetLibrary_eventStitchImages_Parms, BlendFactor), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UCameraSaveForWidgetLibrary_StitchImages_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CameraSaveForWidgetLibrary_eventStitchImages_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraSaveForWidgetLibrary_StitchImages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CameraSaveForWidgetLibrary_eventStitchImages_Parms), &Z_Construct_UFunction_UCameraSaveForWidgetLibrary_StitchImages_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraSaveForWidgetLibrary_StitchImages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraSaveForWidgetLibrary_StitchImages_Statics::NewProp_ImagePaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraSaveForWidgetLibrary_StitchImages_Statics::NewProp_ImagePaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraSaveForWidgetLibrary_StitchImages_Statics::NewProp_OutputPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraSaveForWidgetLibrary_StitchImages_Statics::NewProp_BlendFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraSaveForWidgetLibrary_StitchImages_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraSaveForWidgetLibrary_StitchImages_Statics::Function_MetaDataParams[] = {
		{ "Category", "Image Stitching" },
		{ "ModuleRelativePath", "Public/CameraSaveForWidgetLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraSaveForWidgetLibrary_StitchImages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraSaveForWidgetLibrary, nullptr, "StitchImages", nullptr, nullptr, Z_Construct_UFunction_UCameraSaveForWidgetLibrary_StitchImages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_StitchImages_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_StitchImages_Statics::CameraSaveForWidgetLibrary_eventStitchImages_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_StitchImages_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraSaveForWidgetLibrary_StitchImages_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_StitchImages_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCameraSaveForWidgetLibrary_StitchImages_Statics::CameraSaveForWidgetLibrary_eventStitchImages_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCameraSaveForWidgetLibrary_StitchImages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraSaveForWidgetLibrary_StitchImages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraSaveForWidgetLibrary);
	UClass* Z_Construct_UClass_UCameraSaveForWidgetLibrary_NoRegister()
	{
		return UCameraSaveForWidgetLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCameraSaveForWidgetLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraSaveForWidgetLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Camera360v2,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraSaveForWidgetLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCameraSaveForWidgetLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ApplyCLiEncoder, "ApplyCLiEncoder" }, // 3938143450
		{ &Z_Construct_UFunction_UCameraSaveForWidgetLibrary_CreateEmptyMask, "CreateEmptyMask" }, // 1825320463
		{ &Z_Construct_UFunction_UCameraSaveForWidgetLibrary_ExecuteCmdCommandCustom, "ExecuteCmdCommandCustom" }, // 2298668085
		{ &Z_Construct_UFunction_UCameraSaveForWidgetLibrary_IsActorSpawned, "IsActorSpawned" }, // 2770321611
		{ &Z_Construct_UFunction_UCameraSaveForWidgetLibrary_RemoveFoldersAndFiles, "RemoveFoldersAndFiles" }, // 1839863957
		{ &Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderPrimaryRay, "SaveSettingsShaderPrimaryRay" }, // 1591871676
		{ &Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SaveSettingsShaderWidget, "SaveSettingsShaderWidget" }, // 3488081862
		{ &Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SpawnActor, "SpawnActor" }, // 324168692
		{ &Z_Construct_UFunction_UCameraSaveForWidgetLibrary_SpawnActorStereo, "SpawnActorStereo" }, // 1364733083
		{ &Z_Construct_UFunction_UCameraSaveForWidgetLibrary_StitchImages, "StitchImages" }, // 2652436814
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraSaveForWidgetLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraSaveForWidgetLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CameraSaveForWidgetLibrary.h" },
		{ "ModuleRelativePath", "Public/CameraSaveForWidgetLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraSaveForWidgetLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraSaveForWidgetLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraSaveForWidgetLibrary_Statics::ClassParams = {
		&UCameraSaveForWidgetLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraSaveForWidgetLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraSaveForWidgetLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCameraSaveForWidgetLibrary()
	{
		if (!Z_Registration_Info_UClass_UCameraSaveForWidgetLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraSaveForWidgetLibrary.OuterSingleton, Z_Construct_UClass_UCameraSaveForWidgetLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraSaveForWidgetLibrary.OuterSingleton;
	}
	template<> CAMERA360V2_API UClass* StaticClass<UCameraSaveForWidgetLibrary>()
	{
		return UCameraSaveForWidgetLibrary::StaticClass();
	}
	UCameraSaveForWidgetLibrary::UCameraSaveForWidgetLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraSaveForWidgetLibrary);
	UCameraSaveForWidgetLibrary::~UCameraSaveForWidgetLibrary() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Camera360v2_Source_Camera360v2_Public_CameraSaveForWidgetLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Camera360v2_Source_Camera360v2_Public_CameraSaveForWidgetLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCameraSaveForWidgetLibrary, UCameraSaveForWidgetLibrary::StaticClass, TEXT("UCameraSaveForWidgetLibrary"), &Z_Registration_Info_UClass_UCameraSaveForWidgetLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraSaveForWidgetLibrary), 1339082650U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Camera360v2_Source_Camera360v2_Public_CameraSaveForWidgetLibrary_h_3643294130(TEXT("/Script/Camera360v2"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Camera360v2_Source_Camera360v2_Public_CameraSaveForWidgetLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Camera360v2_Source_Camera360v2_Public_CameraSaveForWidgetLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
