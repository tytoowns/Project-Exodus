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
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEngineerRoom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEngineerRoom>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEngineerRoom_Statics::ClassParams = {
		&AEngineerRoom::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(AEngineerRoom, 2002469721);
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
