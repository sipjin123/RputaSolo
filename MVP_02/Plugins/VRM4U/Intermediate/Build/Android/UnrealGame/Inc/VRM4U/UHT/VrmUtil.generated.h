// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VrmUtil.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VRM4U_VrmUtil_generated_h
#error "VrmUtil.generated.h already included, missing '#pragma once' in VrmUtil.h"
#endif
#define VRM4U_VrmUtil_generated_h

#define FID_MVP_02_NO_Cam360_Plugins_VRM4U_Source_VRM4U_Public_VrmUtil_h_325_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FImportOptionData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VRM4U_API UScriptStruct* StaticStruct<struct FImportOptionData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MVP_02_NO_Cam360_Plugins_VRM4U_Source_VRM4U_Public_VrmUtil_h


#define FOREACH_ENUM_EVRMIMPORTMATERIALTYPE(op) \
	op(EVRMImportMaterialType::VRMIMT_Auto) \
	op(EVRMImportMaterialType::VRMIMT_MToon) \
	op(EVRMImportMaterialType::VRMIMT_MToonUnlit) \
	op(EVRMImportMaterialType::VRMIMT_SSS) \
	op(EVRMImportMaterialType::VRMIMT_SSSProfile) \
	op(EVRMImportMaterialType::VRMIMT_Unlit) \
	op(EVRMImportMaterialType::VRMIMT_glTF) \
	op(EVRMImportMaterialType::VRMIMT_UEFNLit) \
	op(EVRMImportMaterialType::VRMIMT_UEFNUnlit) \
	op(EVRMImportMaterialType::VRMIMT_UEFNSSSProfile) \
	op(EVRMImportMaterialType::VRMIMT_Custom) 

enum class EVRMImportMaterialType : uint8;
template<> struct TIsUEnumClass<EVRMImportMaterialType> { enum { Value = true }; };
template<> VRM4U_API UEnum* StaticEnum<EVRMImportMaterialType>();

#define FOREACH_ENUM_EVRMIMPORTTEXTURECOMPRESSTYPE(op) \
	op(EVRMImportTextureCompressType::VRMITC_Auto) \
	op(EVRMImportTextureCompressType::VRMITC_DXT1) \
	op(EVRMImportTextureCompressType::VRMITC_BC7) \
	op(EVRMImportTextureCompressType::VRMITC_NoCompression) 

enum class EVRMImportTextureCompressType : uint8;
template<> struct TIsUEnumClass<EVRMImportTextureCompressType> { enum { Value = true }; };
template<> VRM4U_API UEnum* StaticEnum<EVRMImportTextureCompressType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
