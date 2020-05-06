// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectExodus/FlockManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlockManager() {}
// Cross Module References
	PROJECTEXODUS_API UClass* Z_Construct_UClass_AFlockManager_NoRegister();
	PROJECTEXODUS_API UClass* Z_Construct_UClass_AFlockManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProjectExodus();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void AFlockManager::StaticRegisterNativesAFlockManager()
	{
	}
	UClass* Z_Construct_UClass_AFlockManager_NoRegister()
	{
		return AFlockManager::StaticClass();
	}
	struct Z_Construct_UClass_AFlockManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlockManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectExodus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FlockManager.h" },
		{ "ModuleRelativePath", "FlockManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockManager_Statics::NewProp_SpawnBox_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FlockManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlockManager_Statics::NewProp_SpawnBox = { "SpawnBox", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlockManager, SpawnBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlockManager_Statics::NewProp_SpawnBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlockManager_Statics::NewProp_SpawnBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlockManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockManager_Statics::NewProp_SpawnBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlockManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlockManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFlockManager_Statics::ClassParams = {
		&AFlockManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFlockManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFlockManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFlockManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFlockManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFlockManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFlockManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFlockManager, 599880599);
	template<> PROJECTEXODUS_API UClass* StaticClass<AFlockManager>()
	{
		return AFlockManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFlockManager(Z_Construct_UClass_AFlockManager, &AFlockManager::StaticClass, TEXT("/Script/ProjectExodus"), TEXT("AFlockManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlockManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
