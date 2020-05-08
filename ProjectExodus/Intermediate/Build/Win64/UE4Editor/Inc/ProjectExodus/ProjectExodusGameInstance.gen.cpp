// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectExodus/ProjectExodusGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectExodusGameInstance() {}
// Cross Module References
	PROJECTEXODUS_API UClass* Z_Construct_UClass_UProjectExodusGameInstance_NoRegister();
	PROJECTEXODUS_API UClass* Z_Construct_UClass_UProjectExodusGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_ProjectExodus();
// End Cross Module References
	void UProjectExodusGameInstance::StaticRegisterNativesUProjectExodusGameInstance()
	{
	}
	UClass* Z_Construct_UClass_UProjectExodusGameInstance_NoRegister()
	{
		return UProjectExodusGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UProjectExodusGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProjectExodusGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectExodus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectExodusGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ProjectExodusGameInstance.h" },
		{ "ModuleRelativePath", "ProjectExodusGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProjectExodusGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectExodusGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProjectExodusGameInstance_Statics::ClassParams = {
		&UProjectExodusGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UProjectExodusGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectExodusGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProjectExodusGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProjectExodusGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProjectExodusGameInstance, 1019491014);
	template<> PROJECTEXODUS_API UClass* StaticClass<UProjectExodusGameInstance>()
	{
		return UProjectExodusGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProjectExodusGameInstance(Z_Construct_UClass_UProjectExodusGameInstance, &UProjectExodusGameInstance::StaticClass, TEXT("/Script/ProjectExodus"), TEXT("UProjectExodusGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProjectExodusGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
