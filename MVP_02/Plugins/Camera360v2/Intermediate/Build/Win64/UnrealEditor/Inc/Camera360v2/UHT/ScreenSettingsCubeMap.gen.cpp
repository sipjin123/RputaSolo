// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScreenSettingsCubeMap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScreenSettingsCubeMap() {}
// Cross Module References
	CAMERA360V2_API UClass* Z_Construct_UClass_AScreenSettingsCubeMap();
	CAMERA360V2_API UClass* Z_Construct_UClass_AScreenSettingsCubeMap_NoRegister();
	CAMERA360V2_API UScriptStruct* Z_Construct_UScriptStruct_FScreenDataSettings();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Camera360v2();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScreenDataSettings;
class UScriptStruct* FScreenDataSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScreenDataSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScreenDataSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScreenDataSettings, (UObject*)Z_Construct_UPackage__Script_Camera360v2(), TEXT("ScreenDataSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ScreenDataSettings.OuterSingleton;
}
template<> CAMERA360V2_API UScriptStruct* StaticStruct<FScreenDataSettings>()
{
	return FScreenDataSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FScreenDataSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XPositionS_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_XPositionS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YPositionS_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YPositionS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleSizeS_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleSizeS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YSizeVerticalS_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YSizeVerticalS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XSizeHorizontalS_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_XSizeHorizontalS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameScreenS_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NameScreenS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenIndexS_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ScreenIndexS;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenDataSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ScreenSettingsCubeMap.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScreenDataSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScreenDataSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenDataSettings_Statics::NewProp_XPositionS_MetaData[] = {
		{ "Category", "ScreenPropertiesStruct" },
		{ "ModuleRelativePath", "Public/ScreenSettingsCubeMap.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FScreenDataSettings_Statics::NewProp_XPositionS = { "XPositionS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScreenDataSettings, XPositionS), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenDataSettings_Statics::NewProp_XPositionS_MetaData), Z_Construct_UScriptStruct_FScreenDataSettings_Statics::NewProp_XPositionS_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenDataSettings_Statics::NewProp_YPositionS_MetaData[] = {
		{ "Category", "ScreenPropertiesStruct" },
		{ "ModuleRelativePath", "Public/ScreenSettingsCubeMap.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FScreenDataSettings_Statics::NewProp_YPositionS = { "YPositionS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScreenDataSettings, YPositionS), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenDataSettings_Statics::NewProp_YPositionS_MetaData), Z_Construct_UScriptStruct_FScreenDataSettings_Statics::NewProp_YPositionS_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenDataSettings_Statics::NewProp_ScaleSizeS_MetaData[] = {
		{ "Category", "ScreenPropertiesStruct" },
		{ "ModuleRelativePath", "Public/ScreenSettingsCubeMap.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FScreenDataSettings_Statics::NewProp_ScaleSizeS = { "ScaleSizeS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScreenDataSettings, ScaleSizeS), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenDataSettings_Statics::NewProp_ScaleSizeS_MetaData), Z_Construct_UScriptStruct_FScreenDataSettings_Statics::NewProp_ScaleSizeS_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenDataSettings_Statics::NewProp_YSizeVerticalS_MetaData[] = {
		{ "Category", "ScreenPropertiesStruct" },
		{ "ModuleRelativePath", "Public/ScreenSettingsCubeMap.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FScreenDataSettings_Statics::NewProp_YSizeVerticalS = { "YSizeVerticalS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScreenDataSettings, YSizeVerticalS), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenDataSettings_Statics::NewProp_YSizeVerticalS_MetaData), Z_Construct_UScriptStruct_FScreenDataSettings_Statics::NewProp_YSizeVerticalS_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenDataSettings_Statics::NewProp_XSizeHorizontalS_MetaData[] = {
		{ "Category", "ScreenPropertiesStruct" },
		{ "ModuleRelativePath", "Public/ScreenSettingsCubeMap.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FScreenDataSettings_Statics::NewProp_XSizeHorizontalS = { "XSizeHorizontalS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScreenDataSettings, XSizeHorizontalS), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenDataSettings_Statics::NewProp_XSizeHorizontalS_MetaData), Z_Construct_UScriptStruct_FScreenDataSettings_Statics::NewProp_XSizeHorizontalS_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenDataSettings_Statics::NewProp_NameScreenS_MetaData[] = {
		{ "Category", "ScreenPropertiesStruct" },
		{ "ModuleRelativePath", "Public/ScreenSettingsCubeMap.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScreenDataSettings_Statics::NewProp_NameScreenS = { "NameScreenS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScreenDataSettings, NameScreenS), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenDataSettings_Statics::NewProp_NameScreenS_MetaData), Z_Construct_UScriptStruct_FScreenDataSettings_Statics::NewProp_NameScreenS_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenDataSettings_Statics::NewProp_ScreenIndexS_MetaData[] = {
		{ "Category", "ScreenPropertiesStruct" },
		{ "ModuleRelativePath", "Public/ScreenSettingsCubeMap.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScreenDataSettings_Statics::NewProp_ScreenIndexS = { "ScreenIndexS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScreenDataSettings, ScreenIndexS), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenDataSettings_Statics::NewProp_ScreenIndexS_MetaData), Z_Construct_UScriptStruct_FScreenDataSettings_Statics::NewProp_ScreenIndexS_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScreenDataSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenDataSettings_Statics::NewProp_XPositionS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenDataSettings_Statics::NewProp_YPositionS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenDataSettings_Statics::NewProp_ScaleSizeS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenDataSettings_Statics::NewProp_YSizeVerticalS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenDataSettings_Statics::NewProp_XSizeHorizontalS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenDataSettings_Statics::NewProp_NameScreenS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenDataSettings_Statics::NewProp_ScreenIndexS,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScreenDataSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Camera360v2,
		nullptr,
		&NewStructOps,
		"ScreenDataSettings",
		Z_Construct_UScriptStruct_FScreenDataSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenDataSettings_Statics::PropPointers),
		sizeof(FScreenDataSettings),
		alignof(FScreenDataSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenDataSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScreenDataSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenDataSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FScreenDataSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ScreenDataSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScreenDataSettings.InnerSingleton, Z_Construct_UScriptStruct_FScreenDataSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ScreenDataSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(AScreenSettingsCubeMap::execCubeMapScreen)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxPlayers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CubeMapScreen(Z_Param_MaxPlayers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AScreenSettingsCubeMap::execSaveSettingsToFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_GET_PROPERTY(FStrProperty,Z_Param_FullPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveSettingsToFile(Z_Param_FileName,Z_Param_Text,Z_Param_FullPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AScreenSettingsCubeMap::execLoadSettingsFromFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileNameLoad);
		P_GET_PROPERTY(FStrProperty,Z_Param_FullPath);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_FileText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadSettingsFromFile(Z_Param_FileNameLoad,Z_Param_FullPath,Z_Param_Out_FileText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AScreenSettingsCubeMap::execSaveSettingsShader)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Projection);
		P_GET_PROPERTY(FStrProperty,Z_Param_FullPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveSettingsShader(Z_Param_Projection,Z_Param_FullPath);
		P_NATIVE_END;
	}
	void AScreenSettingsCubeMap::StaticRegisterNativesAScreenSettingsCubeMap()
	{
		UClass* Class = AScreenSettingsCubeMap::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CubeMapScreen", &AScreenSettingsCubeMap::execCubeMapScreen },
			{ "LoadSettingsFromFile", &AScreenSettingsCubeMap::execLoadSettingsFromFile },
			{ "SaveSettingsShader", &AScreenSettingsCubeMap::execSaveSettingsShader },
			{ "SaveSettingsToFile", &AScreenSettingsCubeMap::execSaveSettingsToFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AScreenSettingsCubeMap_CubeMapScreen_Statics
	{
		struct ScreenSettingsCubeMap_eventCubeMapScreen_Parms
		{
			int32 MaxPlayers;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AScreenSettingsCubeMap_CubeMapScreen_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScreenSettingsCubeMap_eventCubeMapScreen_Parms, MaxPlayers), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScreenSettingsCubeMap_CubeMapScreen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScreenSettingsCubeMap_CubeMapScreen_Statics::NewProp_MaxPlayers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScreenSettingsCubeMap_CubeMapScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera360, Camera360v2, Cubemap" },
		{ "ModuleRelativePath", "Public/ScreenSettingsCubeMap.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScreenSettingsCubeMap_CubeMapScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScreenSettingsCubeMap, nullptr, "CubeMapScreen", nullptr, nullptr, Z_Construct_UFunction_AScreenSettingsCubeMap_CubeMapScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AScreenSettingsCubeMap_CubeMapScreen_Statics::PropPointers), sizeof(Z_Construct_UFunction_AScreenSettingsCubeMap_CubeMapScreen_Statics::ScreenSettingsCubeMap_eventCubeMapScreen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScreenSettingsCubeMap_CubeMapScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScreenSettingsCubeMap_CubeMapScreen_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AScreenSettingsCubeMap_CubeMapScreen_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AScreenSettingsCubeMap_CubeMapScreen_Statics::ScreenSettingsCubeMap_eventCubeMapScreen_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AScreenSettingsCubeMap_CubeMapScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScreenSettingsCubeMap_CubeMapScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AScreenSettingsCubeMap_LoadSettingsFromFile_Statics
	{
		struct ScreenSettingsCubeMap_eventLoadSettingsFromFile_Parms
		{
			FString FileNameLoad;
			FString FullPath;
			FString FileText;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileNameLoad;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FullPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AScreenSettingsCubeMap_LoadSettingsFromFile_Statics::NewProp_FileNameLoad = { "FileNameLoad", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScreenSettingsCubeMap_eventLoadSettingsFromFile_Parms, FileNameLoad), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AScreenSettingsCubeMap_LoadSettingsFromFile_Statics::NewProp_FullPath = { "FullPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScreenSettingsCubeMap_eventLoadSettingsFromFile_Parms, FullPath), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AScreenSettingsCubeMap_LoadSettingsFromFile_Statics::NewProp_FileText = { "FileText", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScreenSettingsCubeMap_eventLoadSettingsFromFile_Parms, FileText), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScreenSettingsCubeMap_LoadSettingsFromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScreenSettingsCubeMap_LoadSettingsFromFile_Statics::NewProp_FileNameLoad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScreenSettingsCubeMap_LoadSettingsFromFile_Statics::NewProp_FullPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScreenSettingsCubeMap_LoadSettingsFromFile_Statics::NewProp_FileText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScreenSettingsCubeMap_LoadSettingsFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera360, Camera360v2, Cubemap, Python" },
		{ "ModuleRelativePath", "Public/ScreenSettingsCubeMap.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScreenSettingsCubeMap_LoadSettingsFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScreenSettingsCubeMap, nullptr, "LoadSettingsFromFile", nullptr, nullptr, Z_Construct_UFunction_AScreenSettingsCubeMap_LoadSettingsFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AScreenSettingsCubeMap_LoadSettingsFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_AScreenSettingsCubeMap_LoadSettingsFromFile_Statics::ScreenSettingsCubeMap_eventLoadSettingsFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScreenSettingsCubeMap_LoadSettingsFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScreenSettingsCubeMap_LoadSettingsFromFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AScreenSettingsCubeMap_LoadSettingsFromFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AScreenSettingsCubeMap_LoadSettingsFromFile_Statics::ScreenSettingsCubeMap_eventLoadSettingsFromFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AScreenSettingsCubeMap_LoadSettingsFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScreenSettingsCubeMap_LoadSettingsFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AScreenSettingsCubeMap_SaveSettingsShader_Statics
	{
		struct ScreenSettingsCubeMap_eventSaveSettingsShader_Parms
		{
			FString Projection;
			FString FullPath;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Projection;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FullPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AScreenSettingsCubeMap_SaveSettingsShader_Statics::NewProp_Projection = { "Projection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScreenSettingsCubeMap_eventSaveSettingsShader_Parms, Projection), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AScreenSettingsCubeMap_SaveSettingsShader_Statics::NewProp_FullPath = { "FullPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScreenSettingsCubeMap_eventSaveSettingsShader_Parms, FullPath), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScreenSettingsCubeMap_SaveSettingsShader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScreenSettingsCubeMap_SaveSettingsShader_Statics::NewProp_Projection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScreenSettingsCubeMap_SaveSettingsShader_Statics::NewProp_FullPath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScreenSettingsCubeMap_SaveSettingsShader_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera360, Camera360v2, Cubemap, Python" },
		{ "ModuleRelativePath", "Public/ScreenSettingsCubeMap.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScreenSettingsCubeMap_SaveSettingsShader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScreenSettingsCubeMap, nullptr, "SaveSettingsShader", nullptr, nullptr, Z_Construct_UFunction_AScreenSettingsCubeMap_SaveSettingsShader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AScreenSettingsCubeMap_SaveSettingsShader_Statics::PropPointers), sizeof(Z_Construct_UFunction_AScreenSettingsCubeMap_SaveSettingsShader_Statics::ScreenSettingsCubeMap_eventSaveSettingsShader_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScreenSettingsCubeMap_SaveSettingsShader_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScreenSettingsCubeMap_SaveSettingsShader_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AScreenSettingsCubeMap_SaveSettingsShader_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AScreenSettingsCubeMap_SaveSettingsShader_Statics::ScreenSettingsCubeMap_eventSaveSettingsShader_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AScreenSettingsCubeMap_SaveSettingsShader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScreenSettingsCubeMap_SaveSettingsShader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AScreenSettingsCubeMap_SaveSettingsToFile_Statics
	{
		struct ScreenSettingsCubeMap_eventSaveSettingsToFile_Parms
		{
			FString FileName;
			FString Text;
			FString FullPath;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FullPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AScreenSettingsCubeMap_SaveSettingsToFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScreenSettingsCubeMap_eventSaveSettingsToFile_Parms, FileName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AScreenSettingsCubeMap_SaveSettingsToFile_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScreenSettingsCubeMap_eventSaveSettingsToFile_Parms, Text), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AScreenSettingsCubeMap_SaveSettingsToFile_Statics::NewProp_FullPath = { "FullPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScreenSettingsCubeMap_eventSaveSettingsToFile_Parms, FullPath), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScreenSettingsCubeMap_SaveSettingsToFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScreenSettingsCubeMap_SaveSettingsToFile_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScreenSettingsCubeMap_SaveSettingsToFile_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScreenSettingsCubeMap_SaveSettingsToFile_Statics::NewProp_FullPath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScreenSettingsCubeMap_SaveSettingsToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera360, Camera360v2, Cubemap, Python" },
		{ "ModuleRelativePath", "Public/ScreenSettingsCubeMap.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScreenSettingsCubeMap_SaveSettingsToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScreenSettingsCubeMap, nullptr, "SaveSettingsToFile", nullptr, nullptr, Z_Construct_UFunction_AScreenSettingsCubeMap_SaveSettingsToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AScreenSettingsCubeMap_SaveSettingsToFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_AScreenSettingsCubeMap_SaveSettingsToFile_Statics::ScreenSettingsCubeMap_eventSaveSettingsToFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScreenSettingsCubeMap_SaveSettingsToFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScreenSettingsCubeMap_SaveSettingsToFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AScreenSettingsCubeMap_SaveSettingsToFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AScreenSettingsCubeMap_SaveSettingsToFile_Statics::ScreenSettingsCubeMap_eventSaveSettingsToFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AScreenSettingsCubeMap_SaveSettingsToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScreenSettingsCubeMap_SaveSettingsToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AScreenSettingsCubeMap);
	UClass* Z_Construct_UClass_AScreenSettingsCubeMap_NoRegister()
	{
		return AScreenSettingsCubeMap::StaticClass();
	}
	struct Z_Construct_UClass_AScreenSettingsCubeMap_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StructureScreenData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructureScreenData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StructureScreenData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnabledScreen_MetaData[];
#endif
		static void NewProp_EnabledScreen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnabledScreen;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AScreenSettingsCubeMap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Camera360v2,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AScreenSettingsCubeMap_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AScreenSettingsCubeMap_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AScreenSettingsCubeMap_CubeMapScreen, "CubeMapScreen" }, // 3843217889
		{ &Z_Construct_UFunction_AScreenSettingsCubeMap_LoadSettingsFromFile, "LoadSettingsFromFile" }, // 1437423193
		{ &Z_Construct_UFunction_AScreenSettingsCubeMap_SaveSettingsShader, "SaveSettingsShader" }, // 3197777699
		{ &Z_Construct_UFunction_AScreenSettingsCubeMap_SaveSettingsToFile, "SaveSettingsToFile" }, // 3967866142
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AScreenSettingsCubeMap_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScreenSettingsCubeMap_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ScreenSettingsCubeMap.h" },
		{ "ModuleRelativePath", "Public/ScreenSettingsCubeMap.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AScreenSettingsCubeMap_Statics::NewProp_StructureScreenData_Inner = { "StructureScreenData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FScreenDataSettings, METADATA_PARAMS(0, nullptr) }; // 754271854
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScreenSettingsCubeMap_Statics::NewProp_StructureScreenData_MetaData[] = {
		{ "Category", "ScreenProperties" },
		{ "ModuleRelativePath", "Public/ScreenSettingsCubeMap.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AScreenSettingsCubeMap_Statics::NewProp_StructureScreenData = { "StructureScreenData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScreenSettingsCubeMap, StructureScreenData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AScreenSettingsCubeMap_Statics::NewProp_StructureScreenData_MetaData), Z_Construct_UClass_AScreenSettingsCubeMap_Statics::NewProp_StructureScreenData_MetaData) }; // 754271854
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScreenSettingsCubeMap_Statics::NewProp_EnabledScreen_MetaData[] = {
		{ "Category", "ScreenProperties" },
		{ "ModuleRelativePath", "Public/ScreenSettingsCubeMap.h" },
	};
#endif
	void Z_Construct_UClass_AScreenSettingsCubeMap_Statics::NewProp_EnabledScreen_SetBit(void* Obj)
	{
		((AScreenSettingsCubeMap*)Obj)->EnabledScreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AScreenSettingsCubeMap_Statics::NewProp_EnabledScreen = { "EnabledScreen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AScreenSettingsCubeMap), &Z_Construct_UClass_AScreenSettingsCubeMap_Statics::NewProp_EnabledScreen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AScreenSettingsCubeMap_Statics::NewProp_EnabledScreen_MetaData), Z_Construct_UClass_AScreenSettingsCubeMap_Statics::NewProp_EnabledScreen_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AScreenSettingsCubeMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScreenSettingsCubeMap_Statics::NewProp_StructureScreenData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScreenSettingsCubeMap_Statics::NewProp_StructureScreenData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScreenSettingsCubeMap_Statics::NewProp_EnabledScreen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AScreenSettingsCubeMap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScreenSettingsCubeMap>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AScreenSettingsCubeMap_Statics::ClassParams = {
		&AScreenSettingsCubeMap::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AScreenSettingsCubeMap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AScreenSettingsCubeMap_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AScreenSettingsCubeMap_Statics::Class_MetaDataParams), Z_Construct_UClass_AScreenSettingsCubeMap_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AScreenSettingsCubeMap_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AScreenSettingsCubeMap()
	{
		if (!Z_Registration_Info_UClass_AScreenSettingsCubeMap.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AScreenSettingsCubeMap.OuterSingleton, Z_Construct_UClass_AScreenSettingsCubeMap_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AScreenSettingsCubeMap.OuterSingleton;
	}
	template<> CAMERA360V2_API UClass* StaticClass<AScreenSettingsCubeMap>()
	{
		return AScreenSettingsCubeMap::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AScreenSettingsCubeMap);
	AScreenSettingsCubeMap::~AScreenSettingsCubeMap() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Camera360v2_Source_Camera360v2_Public_ScreenSettingsCubeMap_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Camera360v2_Source_Camera360v2_Public_ScreenSettingsCubeMap_h_Statics::ScriptStructInfo[] = {
		{ FScreenDataSettings::StaticStruct, Z_Construct_UScriptStruct_FScreenDataSettings_Statics::NewStructOps, TEXT("ScreenDataSettings"), &Z_Registration_Info_UScriptStruct_ScreenDataSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScreenDataSettings), 754271854U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Camera360v2_Source_Camera360v2_Public_ScreenSettingsCubeMap_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AScreenSettingsCubeMap, AScreenSettingsCubeMap::StaticClass, TEXT("AScreenSettingsCubeMap"), &Z_Registration_Info_UClass_AScreenSettingsCubeMap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AScreenSettingsCubeMap), 3317359596U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Camera360v2_Source_Camera360v2_Public_ScreenSettingsCubeMap_h_1353709800(TEXT("/Script/Camera360v2"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Camera360v2_Source_Camera360v2_Public_ScreenSettingsCubeMap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Camera360v2_Source_Camera360v2_Public_ScreenSettingsCubeMap_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Camera360v2_Source_Camera360v2_Public_ScreenSettingsCubeMap_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Camera360v2_Source_Camera360v2_Public_ScreenSettingsCubeMap_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
