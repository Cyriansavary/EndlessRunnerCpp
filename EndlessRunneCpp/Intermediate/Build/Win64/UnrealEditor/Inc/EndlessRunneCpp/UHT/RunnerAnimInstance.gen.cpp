// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EndlessRunneCpp/RunnerAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRunnerAnimInstance() {}
// Cross Module References
	ENDLESSRUNNECPP_API UClass* Z_Construct_UClass_URunnerAnimInstance();
	ENDLESSRUNNECPP_API UClass* Z_Construct_UClass_URunnerAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EndlessRunneCpp();
// End Cross Module References
	void URunnerAnimInstance::StaticRegisterNativesURunnerAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URunnerAnimInstance);
	UClass* Z_Construct_UClass_URunnerAnimInstance_NoRegister()
	{
		return URunnerAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_URunnerAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInAir_MetaData[];
#endif
		static void NewProp_bIsInAir_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInAir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URunnerAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_EndlessRunneCpp,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URunnerAnimInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URunnerAnimInstance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "RunnerAnimInstance.h" },
		{ "ModuleRelativePath", "RunnerAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URunnerAnimInstance_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "RunnerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URunnerAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URunnerAnimInstance, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URunnerAnimInstance_Statics::NewProp_Speed_MetaData), Z_Construct_UClass_URunnerAnimInstance_Statics::NewProp_Speed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URunnerAnimInstance_Statics::NewProp_bIsInAir_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "RunnerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_URunnerAnimInstance_Statics::NewProp_bIsInAir_SetBit(void* Obj)
	{
		((URunnerAnimInstance*)Obj)->bIsInAir = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URunnerAnimInstance_Statics::NewProp_bIsInAir = { "bIsInAir", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URunnerAnimInstance), &Z_Construct_UClass_URunnerAnimInstance_Statics::NewProp_bIsInAir_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URunnerAnimInstance_Statics::NewProp_bIsInAir_MetaData), Z_Construct_UClass_URunnerAnimInstance_Statics::NewProp_bIsInAir_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URunnerAnimInstance_Statics::NewProp_Pawn_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "RunnerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URunnerAnimInstance_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URunnerAnimInstance, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URunnerAnimInstance_Statics::NewProp_Pawn_MetaData), Z_Construct_UClass_URunnerAnimInstance_Statics::NewProp_Pawn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URunnerAnimInstance_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RunnerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URunnerAnimInstance_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x00100000000a081d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URunnerAnimInstance, MovementComponent), Z_Construct_UClass_UPawnMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URunnerAnimInstance_Statics::NewProp_MovementComponent_MetaData), Z_Construct_UClass_URunnerAnimInstance_Statics::NewProp_MovementComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URunnerAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URunnerAnimInstance_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URunnerAnimInstance_Statics::NewProp_bIsInAir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URunnerAnimInstance_Statics::NewProp_Pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URunnerAnimInstance_Statics::NewProp_MovementComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URunnerAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URunnerAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URunnerAnimInstance_Statics::ClassParams = {
		&URunnerAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URunnerAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URunnerAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URunnerAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_URunnerAnimInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URunnerAnimInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URunnerAnimInstance()
	{
		if (!Z_Registration_Info_UClass_URunnerAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URunnerAnimInstance.OuterSingleton, Z_Construct_UClass_URunnerAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URunnerAnimInstance.OuterSingleton;
	}
	template<> ENDLESSRUNNECPP_API UClass* StaticClass<URunnerAnimInstance>()
	{
		return URunnerAnimInstance::StaticClass();
	}
	URunnerAnimInstance::URunnerAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URunnerAnimInstance);
	URunnerAnimInstance::~URunnerAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_dev_EndlessRunnerCpp_EndlessRunneCpp_Source_EndlessRunneCpp_RunnerAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_EndlessRunnerCpp_EndlessRunneCpp_Source_EndlessRunneCpp_RunnerAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URunnerAnimInstance, URunnerAnimInstance::StaticClass, TEXT("URunnerAnimInstance"), &Z_Registration_Info_UClass_URunnerAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URunnerAnimInstance), 1448575097U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_EndlessRunnerCpp_EndlessRunneCpp_Source_EndlessRunneCpp_RunnerAnimInstance_h_2732824385(TEXT("/Script/EndlessRunneCpp"),
		Z_CompiledInDeferFile_FID_dev_EndlessRunnerCpp_EndlessRunneCpp_Source_EndlessRunneCpp_RunnerAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dev_EndlessRunnerCpp_EndlessRunneCpp_Source_EndlessRunneCpp_RunnerAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
