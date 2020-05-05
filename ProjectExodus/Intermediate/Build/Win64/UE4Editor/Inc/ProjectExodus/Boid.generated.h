// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef PROJECTEXODUS_Boid_generated_h
#error "Boid.generated.h already included, missing '#pragma once' in Boid.h"
#endif
#define PROJECTEXODUS_Boid_generated_h

#define ProjectExodus_Source_ProjectExodus_Boid_h_12_SPARSE_DATA
#define ProjectExodus_Source_ProjectExodus_Boid_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnShot) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnShot(Z_Param_damage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define ProjectExodus_Source_ProjectExodus_Boid_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnShot) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnShot(Z_Param_damage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define ProjectExodus_Source_ProjectExodus_Boid_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoid(); \
	friend struct Z_Construct_UClass_ABoid_Statics; \
public: \
	DECLARE_CLASS(ABoid, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectExodus"), NO_API) \
	DECLARE_SERIALIZER(ABoid)


#define ProjectExodus_Source_ProjectExodus_Boid_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABoid(); \
	friend struct Z_Construct_UClass_ABoid_Statics; \
public: \
	DECLARE_CLASS(ABoid, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectExodus"), NO_API) \
	DECLARE_SERIALIZER(ABoid)


#define ProjectExodus_Source_ProjectExodus_Boid_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABoid(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoid) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoid); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoid(ABoid&&); \
	NO_API ABoid(const ABoid&); \
public:


#define ProjectExodus_Source_ProjectExodus_Boid_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoid(ABoid&&); \
	NO_API ABoid(const ABoid&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoid); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABoid)


#define ProjectExodus_Source_ProjectExodus_Boid_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BoidMesh() { return STRUCT_OFFSET(ABoid, BoidMesh); } \
	FORCEINLINE static uint32 __PPO__CollisionSphere() { return STRUCT_OFFSET(ABoid, CollisionSphere); } \
	FORCEINLINE static uint32 __PPO__Arrow() { return STRUCT_OFFSET(ABoid, Arrow); } \
	FORCEINLINE static uint32 __PPO__Material() { return STRUCT_OFFSET(ABoid, Material); } \
	FORCEINLINE static uint32 __PPO__ExplosionParticle() { return STRUCT_OFFSET(ABoid, ExplosionParticle); } \
	FORCEINLINE static uint32 __PPO__FieldParticle() { return STRUCT_OFFSET(ABoid, FieldParticle); } \
	FORCEINLINE static uint32 __PPO__FrontLight() { return STRUCT_OFFSET(ABoid, FrontLight); } \
	FORCEINLINE static uint32 __PPO__RearLight() { return STRUCT_OFFSET(ABoid, RearLight); } \
	FORCEINLINE static uint32 __PPO__deltaTime() { return STRUCT_OFFSET(ABoid, deltaTime); } \
	FORCEINLINE static uint32 __PPO__hp() { return STRUCT_OFFSET(ABoid, hp); } \
	FORCEINLINE static uint32 __PPO__bIsDead() { return STRUCT_OFFSET(ABoid, bIsDead); }


#define ProjectExodus_Source_ProjectExodus_Boid_h_9_PROLOG
#define ProjectExodus_Source_ProjectExodus_Boid_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectExodus_Source_ProjectExodus_Boid_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectExodus_Source_ProjectExodus_Boid_h_12_SPARSE_DATA \
	ProjectExodus_Source_ProjectExodus_Boid_h_12_RPC_WRAPPERS \
	ProjectExodus_Source_ProjectExodus_Boid_h_12_INCLASS \
	ProjectExodus_Source_ProjectExodus_Boid_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectExodus_Source_ProjectExodus_Boid_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectExodus_Source_ProjectExodus_Boid_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectExodus_Source_ProjectExodus_Boid_h_12_SPARSE_DATA \
	ProjectExodus_Source_ProjectExodus_Boid_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectExodus_Source_ProjectExodus_Boid_h_12_INCLASS_NO_PURE_DECLS \
	ProjectExodus_Source_ProjectExodus_Boid_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTEXODUS_API UClass* StaticClass<class ABoid>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectExodus_Source_ProjectExodus_Boid_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
