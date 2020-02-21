// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AParentUnit;
#ifdef MARINE_SQUAD_ParentUnit_generated_h
#error "ParentUnit.generated.h already included, missing '#pragma once' in ParentUnit.h"
#endif
#define MARINE_SQUAD_ParentUnit_generated_h

#define Marine_Squad_Source_Marine_Squad_ParentUnit_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopSelect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopSelect(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartSelect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartSelect(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKillSelf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->KillSelf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTakeDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageTaken); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TakeDamage(Z_Param_DamageTaken); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttack) \
	{ \
		P_GET_OBJECT(AParentUnit,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Attack(Z_Param_target); \
		P_NATIVE_END; \
	}


#define Marine_Squad_Source_Marine_Squad_ParentUnit_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopSelect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopSelect(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartSelect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartSelect(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKillSelf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->KillSelf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTakeDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageTaken); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TakeDamage(Z_Param_DamageTaken); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttack) \
	{ \
		P_GET_OBJECT(AParentUnit,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Attack(Z_Param_target); \
		P_NATIVE_END; \
	}


#define Marine_Squad_Source_Marine_Squad_ParentUnit_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAParentUnit(); \
	friend struct Z_Construct_UClass_AParentUnit_Statics; \
public: \
	DECLARE_CLASS(AParentUnit, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Marine_Squad"), NO_API) \
	DECLARE_SERIALIZER(AParentUnit)


#define Marine_Squad_Source_Marine_Squad_ParentUnit_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAParentUnit(); \
	friend struct Z_Construct_UClass_AParentUnit_Statics; \
public: \
	DECLARE_CLASS(AParentUnit, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Marine_Squad"), NO_API) \
	DECLARE_SERIALIZER(AParentUnit)


#define Marine_Squad_Source_Marine_Squad_ParentUnit_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AParentUnit(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AParentUnit) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParentUnit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParentUnit); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AParentUnit(AParentUnit&&); \
	NO_API AParentUnit(const AParentUnit&); \
public:


#define Marine_Squad_Source_Marine_Squad_ParentUnit_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AParentUnit(AParentUnit&&); \
	NO_API AParentUnit(const AParentUnit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParentUnit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParentUnit); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AParentUnit)


#define Marine_Squad_Source_Marine_Squad_ParentUnit_h_14_PRIVATE_PROPERTY_OFFSET
#define Marine_Squad_Source_Marine_Squad_ParentUnit_h_11_PROLOG
#define Marine_Squad_Source_Marine_Squad_ParentUnit_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Marine_Squad_Source_Marine_Squad_ParentUnit_h_14_PRIVATE_PROPERTY_OFFSET \
	Marine_Squad_Source_Marine_Squad_ParentUnit_h_14_RPC_WRAPPERS \
	Marine_Squad_Source_Marine_Squad_ParentUnit_h_14_INCLASS \
	Marine_Squad_Source_Marine_Squad_ParentUnit_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Marine_Squad_Source_Marine_Squad_ParentUnit_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Marine_Squad_Source_Marine_Squad_ParentUnit_h_14_PRIVATE_PROPERTY_OFFSET \
	Marine_Squad_Source_Marine_Squad_ParentUnit_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Marine_Squad_Source_Marine_Squad_ParentUnit_h_14_INCLASS_NO_PURE_DECLS \
	Marine_Squad_Source_Marine_Squad_ParentUnit_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MARINE_SQUAD_API UClass* StaticClass<class AParentUnit>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Marine_Squad_Source_Marine_Squad_ParentUnit_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
