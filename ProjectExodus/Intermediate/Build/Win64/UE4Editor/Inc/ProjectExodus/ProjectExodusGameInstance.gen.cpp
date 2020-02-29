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
	PROJECTEXODUS_API UFunction* Z_Construct_UFunction_UProjectExodusGameInstance_Host();
	PROJECTEXODUS_API UFunction* Z_Construct_UFunction_UProjectExodusGameInstance_Join();
// End Cross Module References
	void UProjectExodusGameInstance::StaticRegisterNativesUProjectExodusGameInstance()
	{
		UClass* Class = UProjectExodusGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Host", &UProjectExodusGameInstance::execHost },
			{ "Join", &UProjectExodusGameInstance::execJoin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProjectExodusGameInstance_Host_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectExodusGameInstance_Host_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProjectExodusGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectExodusGameInstance_Host_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectExodusGameInstance, nullptr, "Host", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectExodusGameInstance_Host_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectExodusGameInstance_Host_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectExodusGameInstance_Host()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProjectExodusGameInstance_Host_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectExodusGameInstance_Join_Statics
	{
		struct ProjectExodusGameInstance_eventJoin_Parms
		{
			FString Address;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Address;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectExodusGameInstance_Join_Statics::NewProp_Address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectExodusGameInstance_Join_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProjectExodusGameInstance_eventJoin_Parms, Address), METADATA_PARAMS(Z_Construct_UFunction_UProjectExodusGameInstance_Join_Statics::NewProp_Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectExodusGameInstance_Join_Statics::NewProp_Address_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectExodusGameInstance_Join_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectExodusGameInstance_Join_Statics::NewProp_Address,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectExodusGameInstance_Join_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProjectExodusGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectExodusGameInstance_Join_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectExodusGameInstance, nullptr, "Join", nullptr, nullptr, sizeof(ProjectExodusGameInstance_eventJoin_Parms), Z_Construct_UFunction_UProjectExodusGameInstance_Join_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectExodusGameInstance_Join_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectExodusGameInstance_Join_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectExodusGameInstance_Join_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectExodusGameInstance_Join()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProjectExodusGameInstance_Join_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UProjectExodusGameInstance_NoRegister()
	{
		return UProjectExodusGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UProjectExodusGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_UProjectExodusGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProjectExodusGameInstance_Host, "Host" }, // 2020371115
		{ &Z_Construct_UFunction_UProjectExodusGameInstance_Join, "Join" }, // 48971290
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectExodusGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ProjectExodusGameInstance.h" },
		{ "ModuleRelativePath", "ProjectExodusGameInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
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
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UProjectExodusGameInstance, 1354381387);
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
