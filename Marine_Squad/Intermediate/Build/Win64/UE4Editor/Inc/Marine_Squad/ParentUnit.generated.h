// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AParentUnit;
struct FVector;
#ifdef MARINE_SQUAD_ParentUnit_generated_h
#error "ParentUnit.generated.h already included, missing '#pragma once' in ParentUnit.h"
#endif
#define MARINE_SQUAD_ParentUnit_generated_h

#define Marine_Squad_Source_Marine_Squad_ParentUnit_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAttackDamage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAttackDamage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCastAbility) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ability); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CastAbility(Z_Param_ability); \
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
		P_GET_OBJECT(AParentUnit,Z_Param_BasicTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Attack(Z_Param_BasicTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopMoving) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopMoving(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttackMove) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_MoveLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AttackMove(Z_Param_MoveLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMove) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_MoveLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Move(Z_Param_MoveLocation); \
		P_NATIVE_END; \
	}


#define Marine_Squad_Source_Marine_Squad_ParentUnit_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAttackDamage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAttackDamage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCastAbility) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ability); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CastAbility(Z_Param_ability); \
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
		P_GET_OBJECT(AParentUnit,Z_Param_BasicTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Attack(Z_Param_BasicTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopMoving) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopMoving(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttackMove) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_MoveLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AttackMove(Z_Param_MoveLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMove) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_MoveLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Move(Z_Param_MoveLocation); \
		P_NATIVE_END; \
	}


#define Marine_Squad_Source_Marine_Squad_ParentUnit_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAParentUnit(); \
	friend struct Z_Construct_UClass_AParentUnit_Statics; \
public: \
	DECLARE_CLASS(AParentUnit, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Marine_Squad"), NO_API) \
	DECLARE_SERIALIZER(AParentUnit) \
	virtual UObject* _getUObject() const override { return const_cast<AParentUnit*>(this); }


#define Marine_Squad_Source_Marine_Squad_ParentUnit_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAParentUnit(); \
	friend struct Z_Construct_UClass_AParentUnit_Statics; \
public: \
	DECLARE_CLASS(AParentUnit, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Marine_Squad"), NO_API) \
	DECLARE_SERIALIZER(AParentUnit) \
	virtual UObject* _getUObject() const override { return const_cast<AParentUnit*>(this); }


#define Marine_Squad_Source_Marine_Squad_ParentUnit_h_17_STANDARD_CONSTRUCTORS \
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


#define Marine_Squad_Source_Marine_Squad_ParentUnit_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AParentUnit(AParentUnit&&); \
	NO_API AParentUnit(const AParentUnit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParentUnit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParentUnit); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AParentUnit)


#define Marine_Squad_Source_Marine_Squad_ParentUnit_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AbilitySystemComponent() { return STRUCT_OFFSET(AParentUnit, AbilitySystemComponent); } \
	FORCEINLINE static uint32 __PPO__GameplayAbilities() { return STRUCT_OFFSET(AParentUnit, GameplayAbilities); } \
	FORCEINLINE static uint32 __PPO__bAbilitiesInitialized() { return STRUCT_OFFSET(AParentUnit, bAbilitiesInitialized); }


#define Marine_Squad_Source_Marine_Squad_ParentUnit_h_14_PROLOG
#define Marine_Squad_Source_Marine_Squad_ParentUnit_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Marine_Squad_Source_Marine_Squad_ParentUnit_h_17_PRIVATE_PROPERTY_OFFSET \
	Marine_Squad_Source_Marine_Squad_ParentUnit_h_17_RPC_WRAPPERS \
	Marine_Squad_Source_Marine_Squad_ParentUnit_h_17_INCLASS \
	Marine_Squad_Source_Marine_Squad_ParentUnit_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Marine_Squad_Source_Marine_Squad_ParentUnit_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Marine_Squad_Source_Marine_Squad_ParentUnit_h_17_PRIVATE_PROPERTY_OFFSET \
	Marine_Squad_Source_Marine_Squad_ParentUnit_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Marine_Squad_Source_Marine_Squad_ParentUnit_h_17_INCLASS_NO_PURE_DECLS \
	Marine_Squad_Source_Marine_Squad_ParentUnit_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MARINE_SQUAD_API UClass* StaticClass<class AParentUnit>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Marine_Squad_Source_Marine_Squad_ParentUnit_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
