// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectExodus/NavMeshBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavMeshBuilder() {}
// Cross Module References
	PROJECTEXODUS_API UClass* Z_Construct_UClass_ANavMeshBuilder_NoRegister();
	PROJECTEXODUS_API UClass* Z_Construct_UClass_ANavMeshBuilder();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProjectExodus();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ANavMeshBuilder::StaticRegisterNativesANavMeshBuilder()
	{
	}
	UClass* Z_Construct_UClass_ANavMeshBuilder_NoRegister()
	{
		return ANavMeshBuilder::StaticClass();
	}
	struct Z_Construct_UClass_ANavMeshBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_numberOfFlocks_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_numberOfFlocks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_secondsBetweenScans_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_secondsBetweenScans;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDynamicScanning_MetaData[];
#endif
		static void NewProp_bDynamicScanning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDynamicScanning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Scene;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavMeshBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectExodus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavMeshBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NavMeshBuilder.h" },
		{ "ModuleRelativePath", "NavMeshBuilder.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavMeshBuilder_Statics::NewProp_numberOfFlocks_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "NavMeshBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ANavMeshBuilder_Statics::NewProp_numberOfFlocks = { "numberOfFlocks", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavMeshBuilder, numberOfFlocks), METADATA_PARAMS(Z_Construct_UClass_ANavMeshBuilder_Statics::NewProp_numberOfFlocks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavMeshBuilder_Statics::NewProp_numberOfFlocks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavMeshBuilder_Statics::NewProp_secondsBetweenScans_MetaData[] = {
		{ "Category", "Scanning" },
		{ "ModuleRelativePath", "NavMeshBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavMeshBuilder_Statics::NewProp_secondsBetweenScans = { "secondsBetweenScans", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavMeshBuilder, secondsBetweenScans), METADATA_PARAMS(Z_Construct_UClass_ANavMeshBuilder_Statics::NewProp_secondsBetweenScans_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavMeshBuilder_Statics::NewProp_secondsBetweenScans_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavMeshBuilder_Statics::NewProp_bDynamicScanning_MetaData[] = {
		{ "Category", "Scanning" },
		{ "Comment", "// Scan variables\n" },
		{ "ModuleRelativePath", "NavMeshBuilder.h" },
		{ "ToolTip", "Scan variables" },
	};
#endif
	void Z_Construct_UClass_ANavMeshBuilder_Statics::NewProp_bDynamicScanning_SetBit(void* Obj)
	{
		((ANavMeshBuilder*)Obj)->bDynamicScanning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavMeshBuilder_Statics::NewProp_bDynamicScanning = { "bDynamicScanning", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ANavMeshBuilder), &Z_Construct_UClass_ANavMeshBuilder_Statics::NewProp_bDynamicScanning_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavMeshBuilder_Statics::NewProp_bDynamicScanning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavMeshBuilder_Statics::NewProp_bDynamicScanning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavMeshBuilder_Statics::NewProp_Scene_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NavMeshBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavMeshBuilder_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavMeshBuilder, Scene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavMeshBuilder_Statics::NewProp_Scene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavMeshBuilder_Statics::NewProp_Scene_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavMeshBuilder_Statics::NewProp_NavBox_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NavMeshBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavMeshBuilder_Statics::NewProp_NavBox = { "NavBox", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavMeshBuilder, NavBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavMeshBuilder_Statics::NewProp_NavBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavMeshBuilder_Statics::NewProp_NavBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavMeshBuilder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavMeshBuilder_Statics::NewProp_numberOfFlocks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavMeshBuilder_Statics::NewProp_secondsBetweenScans,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavMeshBuilder_Statics::NewProp_bDynamicScanning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavMeshBuilder_Statics::NewProp_Scene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavMeshBuilder_Statics::NewProp_NavBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavMeshBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavMeshBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANavMeshBuilder_Statics::ClassParams = {
		&ANavMeshBuilder::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANavMeshBuilder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANavMeshBuilder_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANavMeshBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANavMeshBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavMeshBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANavMeshBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANavMeshBuilder, 3320640338);
	template<> PROJECTEXODUS_API UClass* StaticClass<ANavMeshBuilder>()
	{
		return ANavMeshBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANavMeshBuilder(Z_Construct_UClass_ANavMeshBuilder, &ANavMeshBuilder::StaticClass, TEXT("/Script/ProjectExodus"), TEXT("ANavMeshBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavMeshBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
