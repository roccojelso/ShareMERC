// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "M3RC/CPP_GM_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_GM_Base() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	M3RC_API UClass* Z_Construct_UClass_ACPP_GM_Base();
	M3RC_API UClass* Z_Construct_UClass_ACPP_GM_Base_NoRegister();
	UPackage* Z_Construct_UPackage__Script_M3RC();
// End Cross Module References
	void ACPP_GM_Base::StaticRegisterNativesACPP_GM_Base()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_GM_Base);
	UClass* Z_Construct_UClass_ACPP_GM_Base_NoRegister()
	{
		return ACPP_GM_Base::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_GM_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_GM_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_M3RC,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_GM_Base_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_GM_Base_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CPP_GM_Base.h" },
		{ "ModuleRelativePath", "CPP_GM_Base.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_GM_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_GM_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_GM_Base_Statics::ClassParams = {
		&ACPP_GM_Base::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_GM_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_GM_Base_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACPP_GM_Base()
	{
		if (!Z_Registration_Info_UClass_ACPP_GM_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_GM_Base.OuterSingleton, Z_Construct_UClass_ACPP_GM_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_GM_Base.OuterSingleton;
	}
	template<> M3RC_API UClass* StaticClass<ACPP_GM_Base>()
	{
		return ACPP_GM_Base::StaticClass();
	}
	ACPP_GM_Base::ACPP_GM_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_GM_Base);
	ACPP_GM_Base::~ACPP_GM_Base() {}
	struct Z_CompiledInDeferFile_FID_M3RC_Source_M3RC_CPP_GM_Base_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_M3RC_Source_M3RC_CPP_GM_Base_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_GM_Base, ACPP_GM_Base::StaticClass, TEXT("ACPP_GM_Base"), &Z_Registration_Info_UClass_ACPP_GM_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_GM_Base), 318779727U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_M3RC_Source_M3RC_CPP_GM_Base_h_1510263727(TEXT("/Script/M3RC"),
		Z_CompiledInDeferFile_FID_M3RC_Source_M3RC_CPP_GM_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_M3RC_Source_M3RC_CPP_GM_Base_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
