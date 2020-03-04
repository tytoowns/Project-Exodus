// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectExodus/EngineerRoom.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEngineerRoom() {}
// Cross Module References
	PROJECTEXODUS_API UClass* Z_Construct_UClass_AEngineerRoom_NoRegister();
	PROJECTEXODUS_API UClass* Z_Construct_UClass_AEngineerRoom();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProjectExodus();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	void AEngineerRoom::StaticRegisterNativesAEngineerRoom()
	{
	}
	UClass* Z_Construct_UClass_AEngineerRoom_NoRegister()
	{
		return AEngineerRoom::StaticClass();
	}
	struct Z_Construct_UClass_AEngineerRoom_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ship_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Ship;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShipTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShipTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEngineerRoom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectExodus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEngineerRoom_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EngineerRoom.h" },
		{ "ModuleRelativePath", "EngineerRoom.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEngineerRoom_Statics::NewProp_Ship_MetaData[] = {
		{ "Category", "EngineerRoom" },
		{ "ModuleRelativePath", "EngineerRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEngineerRoom_Statics::NewProp_Ship = { "Ship", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEngineerRoom, Ship), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEngineerRoom_Statics::NewProp_Ship_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEngineerRoom_Statics::NewProp_Ship_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEngineerRoom_Statics::NewProp_ShipTransform_MetaData[] = {
		{ "Category", "EngineerRoom" },
		{ "ModuleRelativePath", "EngineerRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEngineerRoom_Statics::NewProp_ShipTransform = { "ShipTransform", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEngineerRoom, ShipTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AEngineerRoom_Statics::NewProp_ShipTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEngineerRoom_Statics::NewProp_ShipTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEngineerRoom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineerRoom_Statics::NewProp_Ship,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineerRoom_Statics::NewProp_ShipTransform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEngineerRoom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEngineerRoom>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEngineerRoom_Statics::ClassParams = {
		&AEngineerRoom::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEngineerRoom_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEngineerRoom_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEngineerRoom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEngineerRoom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEngineerRoom()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEngineerRoom_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEngineerRoom, 366404725);
	template<> PROJECTEXODUS_API UClass* StaticClass<AEngineerRoom>()
	{
		return AEngineerRoom::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEngineerRoom(Z_Construct_UClass_AEngineerRoom, &AEngineerRoom::StaticClass, TEXT("/Script/ProjectExodus"), TEXT("AEngineerRoom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEngineerRoom);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
