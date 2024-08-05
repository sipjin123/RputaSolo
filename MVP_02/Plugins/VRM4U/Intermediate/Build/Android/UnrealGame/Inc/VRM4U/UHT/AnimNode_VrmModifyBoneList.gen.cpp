// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/AnimNode_VrmModifyBoneList.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_VrmModifyBoneList() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_VrmModifyBoneList>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_VrmModifyBoneList cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyBoneList;
class UScriptStruct* FAnimNode_VrmModifyBoneList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyBoneList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyBoneList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("AnimNode_VrmModifyBoneList"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyBoneList.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FAnimNode_VrmModifyBoneList>()
{
	return FAnimNode_VrmModifyBoneList::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneTrans_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_BoneTrans_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneTrans_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BoneTrans;
		static const UECodeGen_Private::FStrPropertyParams NewProp_UseInputTransBoneList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseInputTransBoneList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UseInputTransBoneList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n*\x09Simple controller that replaces or adds to the translation/rotation of a single bone.\n*/" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneList.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple controller that replaces or adds to the translation/rotation of a single bone." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_VrmModifyBoneList>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::NewProp_BoneTrans_ValueProp = { "BoneTrans", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::NewProp_BoneTrans_Key_KeyProp = { "BoneTrans_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::NewProp_BoneTrans_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneList.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::NewProp_BoneTrans = { "BoneTrans", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_VrmModifyBoneList, BoneTrans), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::NewProp_BoneTrans_MetaData), Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::NewProp_BoneTrans_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::NewProp_UseInputTransBoneList_Inner = { "UseInputTransBoneList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::NewProp_UseInputTransBoneList_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneList.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::NewProp_UseInputTransBoneList = { "UseInputTransBoneList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_VrmModifyBoneList, UseInputTransBoneList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::NewProp_UseInputTransBoneList_MetaData), Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::NewProp_UseInputTransBoneList_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::NewProp_BoneTrans_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::NewProp_BoneTrans_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::NewProp_BoneTrans,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::NewProp_UseInputTransBoneList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::NewProp_UseInputTransBoneList,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_VrmModifyBoneList",
		Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::PropPointers),
		sizeof(FAnimNode_VrmModifyBoneList),
		alignof(FAnimNode_VrmModifyBoneList),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyBoneList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyBoneList.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyBoneList.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MVP_02_NO_Cam360_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmModifyBoneList_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MVP_02_NO_Cam360_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmModifyBoneList_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_VrmModifyBoneList::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::NewStructOps, TEXT("AnimNode_VrmModifyBoneList"), &Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyBoneList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_VrmModifyBoneList), 3258335095U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MVP_02_NO_Cam360_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmModifyBoneList_h_2527995772(TEXT("/Script/VRM4U"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MVP_02_NO_Cam360_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmModifyBoneList_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MVP_02_NO_Cam360_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmModifyBoneList_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
