// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EndlessRunneCpp/EndlessRunneCppGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndlessRunneCppGameMode() {}
// Cross Module References
	ENDLESSRUNNECPP_API UClass* Z_Construct_UClass_AEndlessRunneCppGameMode();
	ENDLESSRUNNECPP_API UClass* Z_Construct_UClass_AEndlessRunneCppGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_EndlessRunneCpp();
// End Cross Module References
	void AEndlessRunneCppGameMode::StaticRegisterNativesAEndlessRunneCppGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEndlessRunneCppGameMode);
	UClass* Z_Construct_UClass_AEndlessRunneCppGameMode_NoRegister()
	{
		return AEndlessRunneCppGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AEndlessRunneCppGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEndlessRunneCppGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EndlessRunneCpp,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEndlessRunneCppGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEndlessRunneCppGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "EndlessRunneCppGameMode.h" },
		{ "ModuleRelativePath", "EndlessRunneCppGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEndlessRunneCppGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEndlessRunneCppGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEndlessRunneCppGameMode_Statics::ClassParams = {
		&AEndlessRunneCppGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEndlessRunneCppGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AEndlessRunneCppGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AEndlessRunneCppGameMode()
	{
		if (!Z_Registration_Info_UClass_AEndlessRunneCppGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEndlessRunneCppGameMode.OuterSingleton, Z_Construct_UClass_AEndlessRunneCppGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEndlessRunneCppGameMode.OuterSingleton;
	}
	template<> ENDLESSRUNNECPP_API UClass* StaticClass<AEndlessRunneCppGameMode>()
	{
		return AEndlessRunneCppGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEndlessRunneCppGameMode);
	AEndlessRunneCppGameMode::~AEndlessRunneCppGameMode() {}
	struct Z_CompiledInDeferFile_FID_dev_EndlessRunnerCpp_EndlessRunneCpp_Source_EndlessRunneCpp_EndlessRunneCppGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_EndlessRunnerCpp_EndlessRunneCpp_Source_EndlessRunneCpp_EndlessRunneCppGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEndlessRunneCppGameMode, AEndlessRunneCppGameMode::StaticClass, TEXT("AEndlessRunneCppGameMode"), &Z_Registration_Info_UClass_AEndlessRunneCppGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEndlessRunneCppGameMode), 1917176663U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_EndlessRunnerCpp_EndlessRunneCpp_Source_EndlessRunneCpp_EndlessRunneCppGameMode_h_3488003394(TEXT("/Script/EndlessRunneCpp"),
		Z_CompiledInDeferFile_FID_dev_EndlessRunnerCpp_EndlessRunneCpp_Source_EndlessRunneCpp_EndlessRunneCppGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dev_EndlessRunnerCpp_EndlessRunneCpp_Source_EndlessRunneCpp_EndlessRunneCppGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
