// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EndlessRunneCpp/GameModeRunner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameModeRunner() {}
// Cross Module References
	ENDLESSRUNNECPP_API UClass* Z_Construct_UClass_AGameModeRunner();
	ENDLESSRUNNECPP_API UClass* Z_Construct_UClass_AGameModeRunner_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_EndlessRunneCpp();
// End Cross Module References
	void AGameModeRunner::StaticRegisterNativesAGameModeRunner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameModeRunner);
	UClass* Z_Construct_UClass_AGameModeRunner_NoRegister()
	{
		return AGameModeRunner::StaticClass();
	}
	struct Z_Construct_UClass_AGameModeRunner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameModeRunner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EndlessRunneCpp,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameModeRunner_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeRunner_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModeRunner.h" },
		{ "ModuleRelativePath", "GameModeRunner.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameModeRunner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameModeRunner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameModeRunner_Statics::ClassParams = {
		&AGameModeRunner::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameModeRunner_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameModeRunner_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AGameModeRunner()
	{
		if (!Z_Registration_Info_UClass_AGameModeRunner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameModeRunner.OuterSingleton, Z_Construct_UClass_AGameModeRunner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameModeRunner.OuterSingleton;
	}
	template<> ENDLESSRUNNECPP_API UClass* StaticClass<AGameModeRunner>()
	{
		return AGameModeRunner::StaticClass();
	}
	AGameModeRunner::AGameModeRunner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameModeRunner);
	AGameModeRunner::~AGameModeRunner() {}
	struct Z_CompiledInDeferFile_FID_dev_EndlessRunnerCpp_EndlessRunneCpp_Source_EndlessRunneCpp_GameModeRunner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_EndlessRunnerCpp_EndlessRunneCpp_Source_EndlessRunneCpp_GameModeRunner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameModeRunner, AGameModeRunner::StaticClass, TEXT("AGameModeRunner"), &Z_Registration_Info_UClass_AGameModeRunner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameModeRunner), 967799876U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_EndlessRunnerCpp_EndlessRunneCpp_Source_EndlessRunneCpp_GameModeRunner_h_3491747905(TEXT("/Script/EndlessRunneCpp"),
		Z_CompiledInDeferFile_FID_dev_EndlessRunnerCpp_EndlessRunneCpp_Source_EndlessRunneCpp_GameModeRunner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dev_EndlessRunnerCpp_EndlessRunneCpp_Source_EndlessRunneCpp_GameModeRunner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
