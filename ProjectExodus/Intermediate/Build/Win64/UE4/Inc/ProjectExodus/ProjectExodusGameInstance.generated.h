// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTEXODUS_ProjectExodusGameInstance_generated_h
#error "ProjectExodusGameInstance.generated.h already included, missing '#pragma once' in ProjectExodusGameInstance.h"
#endif
#define PROJECTEXODUS_ProjectExodusGameInstance_generated_h

#define ProjectExodus_Source_ProjectExodus_ProjectExodusGameInstance_h_15_SPARSE_DATA
#define ProjectExodus_Source_ProjectExodus_ProjectExodusGameInstance_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execJoin) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Address); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Join(Z_Param_Address); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Host(); \
		P_NATIVE_END; \
	}


#define ProjectExodus_Source_ProjectExodus_ProjectExodusGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execJoin) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Address); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Join(Z_Param_Address); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Host(); \
		P_NATIVE_END; \
	}


#define ProjectExodus_Source_ProjectExodus_ProjectExodusGameInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProjectExodusGameInstance(); \
	friend struct Z_Construct_UClass_UProjectExodusGameInstance_Statics; \
public: \
	DECLARE_CLASS(UProjectExodusGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ProjectExodus"), NO_API) \
	DECLARE_SERIALIZER(UProjectExodusGameInstance)


#define ProjectExodus_Source_ProjectExodus_ProjectExodusGameInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUProjectExodusGameInstance(); \
	friend struct Z_Construct_UClass_UProjectExodusGameInstance_Statics; \
public: \
	DECLARE_CLASS(UProjectExodusGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ProjectExodus"), NO_API) \
	DECLARE_SERIALIZER(UProjectExodusGameInstance)


#define ProjectExodus_Source_ProjectExodus_ProjectExodusGameInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProjectExodusGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProjectExodusGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProjectExodusGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProjectExodusGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProjectExodusGameInstance(UProjectExodusGameInstance&&); \
	NO_API UProjectExodusGameInstance(const UProjectExodusGameInstance&); \
public:


#define ProjectExodus_Source_ProjectExodus_ProjectExodusGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProjectExodusGameInstance(UProjectExodusGameInstance&&); \
	NO_API UProjectExodusGameInstance(const UProjectExodusGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProjectExodusGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProjectExodusGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProjectExodusGameInstance)


#define ProjectExodus_Source_ProjectExodus_ProjectExodusGameInstance_h_15_PRIVATE_PROPERTY_OFFSET
#define ProjectExodus_Source_ProjectExodus_ProjectExodusGameInstance_h_12_PROLOG
#define ProjectExodus_Source_ProjectExodus_ProjectExodusGameInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectExodus_Source_ProjectExodus_ProjectExodusGameInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	ProjectExodus_Source_ProjectExodus_ProjectExodusGameInstance_h_15_SPARSE_DATA \
	ProjectExodus_Source_ProjectExodus_ProjectExodusGameInstance_h_15_RPC_WRAPPERS \
	ProjectExodus_Source_ProjectExodus_ProjectExodusGameInstance_h_15_INCLASS \
	ProjectExodus_Source_ProjectExodus_ProjectExodusGameInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectExodus_Source_ProjectExodus_ProjectExodusGameInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectExodus_Source_ProjectExodus_ProjectExodusGameInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	ProjectExodus_Source_ProjectExodus_ProjectExodusGameInstance_h_15_SPARSE_DATA \
	ProjectExodus_Source_ProjectExodus_ProjectExodusGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectExodus_Source_ProjectExodus_ProjectExodusGameInstance_h_15_INCLASS_NO_PURE_DECLS \
	ProjectExodus_Source_ProjectExodus_ProjectExodusGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTEXODUS_API UClass* StaticClass<class UProjectExodusGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectExodus_Source_ProjectExodus_ProjectExodusGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
