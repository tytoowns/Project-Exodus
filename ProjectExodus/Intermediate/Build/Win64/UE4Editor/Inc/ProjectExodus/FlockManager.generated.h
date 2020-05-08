// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTEXODUS_FlockManager_generated_h
#error "FlockManager.generated.h already included, missing '#pragma once' in FlockManager.h"
#endif
#define PROJECTEXODUS_FlockManager_generated_h

#define ProjectExodus_Source_ProjectExodus_FlockManager_h_12_SPARSE_DATA
#define ProjectExodus_Source_ProjectExodus_FlockManager_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnBoids) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnBoids(); \
		P_NATIVE_END; \
	}


#define ProjectExodus_Source_ProjectExodus_FlockManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnBoids) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnBoids(); \
		P_NATIVE_END; \
	}


#define ProjectExodus_Source_ProjectExodus_FlockManager_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFlockManager(); \
	friend struct Z_Construct_UClass_AFlockManager_Statics; \
public: \
	DECLARE_CLASS(AFlockManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectExodus"), NO_API) \
	DECLARE_SERIALIZER(AFlockManager)


#define ProjectExodus_Source_ProjectExodus_FlockManager_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFlockManager(); \
	friend struct Z_Construct_UClass_AFlockManager_Statics; \
public: \
	DECLARE_CLASS(AFlockManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectExodus"), NO_API) \
	DECLARE_SERIALIZER(AFlockManager)


#define ProjectExodus_Source_ProjectExodus_FlockManager_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFlockManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFlockManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlockManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlockManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlockManager(AFlockManager&&); \
	NO_API AFlockManager(const AFlockManager&); \
public:


#define ProjectExodus_Source_ProjectExodus_FlockManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlockManager(AFlockManager&&); \
	NO_API AFlockManager(const AFlockManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlockManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlockManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFlockManager)


#define ProjectExodus_Source_ProjectExodus_FlockManager_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpawnBox() { return STRUCT_OFFSET(AFlockManager, SpawnBox); } \
	FORCEINLINE static uint32 __PPO__Scene() { return STRUCT_OFFSET(AFlockManager, Scene); }


#define ProjectExodus_Source_ProjectExodus_FlockManager_h_9_PROLOG
#define ProjectExodus_Source_ProjectExodus_FlockManager_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectExodus_Source_ProjectExodus_FlockManager_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectExodus_Source_ProjectExodus_FlockManager_h_12_SPARSE_DATA \
	ProjectExodus_Source_ProjectExodus_FlockManager_h_12_RPC_WRAPPERS \
	ProjectExodus_Source_ProjectExodus_FlockManager_h_12_INCLASS \
	ProjectExodus_Source_ProjectExodus_FlockManager_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectExodus_Source_ProjectExodus_FlockManager_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectExodus_Source_ProjectExodus_FlockManager_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectExodus_Source_ProjectExodus_FlockManager_h_12_SPARSE_DATA \
	ProjectExodus_Source_ProjectExodus_FlockManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectExodus_Source_ProjectExodus_FlockManager_h_12_INCLASS_NO_PURE_DECLS \
	ProjectExodus_Source_ProjectExodus_FlockManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTEXODUS_API UClass* StaticClass<class AFlockManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectExodus_Source_ProjectExodus_FlockManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
