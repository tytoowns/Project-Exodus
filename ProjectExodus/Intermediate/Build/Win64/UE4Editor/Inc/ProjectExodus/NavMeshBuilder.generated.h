// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTEXODUS_NavMeshBuilder_generated_h
#error "NavMeshBuilder.generated.h already included, missing '#pragma once' in NavMeshBuilder.h"
#endif
#define PROJECTEXODUS_NavMeshBuilder_generated_h

#define ProjectExodus_Source_ProjectExodus_NavMeshBuilder_h_12_SPARSE_DATA
#define ProjectExodus_Source_ProjectExodus_NavMeshBuilder_h_12_RPC_WRAPPERS
#define ProjectExodus_Source_ProjectExodus_NavMeshBuilder_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectExodus_Source_ProjectExodus_NavMeshBuilder_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANavMeshBuilder(); \
	friend struct Z_Construct_UClass_ANavMeshBuilder_Statics; \
public: \
	DECLARE_CLASS(ANavMeshBuilder, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectExodus"), NO_API) \
	DECLARE_SERIALIZER(ANavMeshBuilder)


#define ProjectExodus_Source_ProjectExodus_NavMeshBuilder_h_12_INCLASS \
private: \
	static void StaticRegisterNativesANavMeshBuilder(); \
	friend struct Z_Construct_UClass_ANavMeshBuilder_Statics; \
public: \
	DECLARE_CLASS(ANavMeshBuilder, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectExodus"), NO_API) \
	DECLARE_SERIALIZER(ANavMeshBuilder)


#define ProjectExodus_Source_ProjectExodus_NavMeshBuilder_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANavMeshBuilder(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavMeshBuilder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANavMeshBuilder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavMeshBuilder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANavMeshBuilder(ANavMeshBuilder&&); \
	NO_API ANavMeshBuilder(const ANavMeshBuilder&); \
public:


#define ProjectExodus_Source_ProjectExodus_NavMeshBuilder_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANavMeshBuilder(ANavMeshBuilder&&); \
	NO_API ANavMeshBuilder(const ANavMeshBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANavMeshBuilder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavMeshBuilder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANavMeshBuilder)


#define ProjectExodus_Source_ProjectExodus_NavMeshBuilder_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NavBox() { return STRUCT_OFFSET(ANavMeshBuilder, NavBox); } \
	FORCEINLINE static uint32 __PPO__Scene() { return STRUCT_OFFSET(ANavMeshBuilder, Scene); } \
	FORCEINLINE static uint32 __PPO__bDynamicScanning() { return STRUCT_OFFSET(ANavMeshBuilder, bDynamicScanning); } \
	FORCEINLINE static uint32 __PPO__secondsBetweenScans() { return STRUCT_OFFSET(ANavMeshBuilder, secondsBetweenScans); } \
	FORCEINLINE static uint32 __PPO__numberOfFlocks() { return STRUCT_OFFSET(ANavMeshBuilder, numberOfFlocks); }


#define ProjectExodus_Source_ProjectExodus_NavMeshBuilder_h_9_PROLOG
#define ProjectExodus_Source_ProjectExodus_NavMeshBuilder_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectExodus_Source_ProjectExodus_NavMeshBuilder_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectExodus_Source_ProjectExodus_NavMeshBuilder_h_12_SPARSE_DATA \
	ProjectExodus_Source_ProjectExodus_NavMeshBuilder_h_12_RPC_WRAPPERS \
	ProjectExodus_Source_ProjectExodus_NavMeshBuilder_h_12_INCLASS \
	ProjectExodus_Source_ProjectExodus_NavMeshBuilder_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectExodus_Source_ProjectExodus_NavMeshBuilder_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectExodus_Source_ProjectExodus_NavMeshBuilder_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectExodus_Source_ProjectExodus_NavMeshBuilder_h_12_SPARSE_DATA \
	ProjectExodus_Source_ProjectExodus_NavMeshBuilder_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectExodus_Source_ProjectExodus_NavMeshBuilder_h_12_INCLASS_NO_PURE_DECLS \
	ProjectExodus_Source_ProjectExodus_NavMeshBuilder_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTEXODUS_API UClass* StaticClass<class ANavMeshBuilder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectExodus_Source_ProjectExodus_NavMeshBuilder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
