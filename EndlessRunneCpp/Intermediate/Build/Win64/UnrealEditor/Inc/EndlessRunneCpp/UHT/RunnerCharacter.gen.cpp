// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EndlessRunneCpp/RunnerCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRunnerCharacter() {}
// Cross Module References
	ENDLESSRUNNECPP_API UClass* Z_Construct_UClass_ARunnerCharacter();
	ENDLESSRUNNECPP_API UClass* Z_Construct_UClass_ARunnerCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EndlessRunneCpp();
// End Cross Module References
	DEFINE_FUNCTION(ARunnerCharacter::execMoveDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARunnerCharacter::execMoveRight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARunnerCharacter::execMoveLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveLeft();
		P_NATIVE_END;
	}
	void ARunnerCharacter::StaticRegisterNativesARunnerCharacter()
	{
		UClass* Class = ARunnerCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveDown", &ARunnerCharacter::execMoveDown },
			{ "MoveLeft", &ARunnerCharacter::execMoveLeft },
			{ "MoveRight", &ARunnerCharacter::execMoveRight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARunnerCharacter_MoveDown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunnerCharacter_MoveDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RunnerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunnerCharacter_MoveDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunnerCharacter, nullptr, "MoveDown", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARunnerCharacter_MoveDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARunnerCharacter_MoveDown_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ARunnerCharacter_MoveDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARunnerCharacter_MoveDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARunnerCharacter_MoveLeft_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunnerCharacter_MoveLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RunnerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunnerCharacter_MoveLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunnerCharacter, nullptr, "MoveLeft", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARunnerCharacter_MoveLeft_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARunnerCharacter_MoveLeft_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ARunnerCharacter_MoveLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARunnerCharacter_MoveLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARunnerCharacter_MoveRight_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunnerCharacter_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RunnerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunnerCharacter_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunnerCharacter, nullptr, "MoveRight", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARunnerCharacter_MoveRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARunnerCharacter_MoveRight_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ARunnerCharacter_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARunnerCharacter_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARunnerCharacter);
	UClass* Z_Construct_UClass_ARunnerCharacter_NoRegister()
	{
		return ARunnerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ARunnerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARunnerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_EndlessRunneCpp,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARunnerCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ARunnerCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARunnerCharacter_MoveDown, "MoveDown" }, // 1579443865
		{ &Z_Construct_UFunction_ARunnerCharacter_MoveLeft, "MoveLeft" }, // 2035306446
		{ &Z_Construct_UFunction_ARunnerCharacter_MoveRight, "MoveRight" }, // 2603570194
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARunnerCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunnerCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RunnerCharacter.h" },
		{ "ModuleRelativePath", "RunnerCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunnerCharacter_Statics::NewProp_CameraArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RunnerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARunnerCharacter_Statics::NewProp_CameraArm = { "CameraArm", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARunnerCharacter, CameraArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARunnerCharacter_Statics::NewProp_CameraArm_MetaData), Z_Construct_UClass_ARunnerCharacter_Statics::NewProp_CameraArm_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunnerCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RunnerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARunnerCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARunnerCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARunnerCharacter_Statics::NewProp_Camera_MetaData), Z_Construct_UClass_ARunnerCharacter_Statics::NewProp_Camera_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARunnerCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunnerCharacter_Statics::NewProp_CameraArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunnerCharacter_Statics::NewProp_Camera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARunnerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARunnerCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARunnerCharacter_Statics::ClassParams = {
		&ARunnerCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARunnerCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARunnerCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARunnerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ARunnerCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARunnerCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ARunnerCharacter()
	{
		if (!Z_Registration_Info_UClass_ARunnerCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARunnerCharacter.OuterSingleton, Z_Construct_UClass_ARunnerCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARunnerCharacter.OuterSingleton;
	}
	template<> ENDLESSRUNNECPP_API UClass* StaticClass<ARunnerCharacter>()
	{
		return ARunnerCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARunnerCharacter);
	ARunnerCharacter::~ARunnerCharacter() {}
	struct Z_CompiledInDeferFile_FID_dev_EndlessRunnerCpp_EndlessRunneCpp_Source_EndlessRunneCpp_RunnerCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_EndlessRunnerCpp_EndlessRunneCpp_Source_EndlessRunneCpp_RunnerCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARunnerCharacter, ARunnerCharacter::StaticClass, TEXT("ARunnerCharacter"), &Z_Registration_Info_UClass_ARunnerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARunnerCharacter), 1001319641U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_EndlessRunnerCpp_EndlessRunneCpp_Source_EndlessRunneCpp_RunnerCharacter_h_2282476190(TEXT("/Script/EndlessRunneCpp"),
		Z_CompiledInDeferFile_FID_dev_EndlessRunnerCpp_EndlessRunneCpp_Source_EndlessRunneCpp_RunnerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dev_EndlessRunnerCpp_EndlessRunneCpp_Source_EndlessRunneCpp_RunnerCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
