// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MARINE_SQUAD_MarineAttributeSet_generated_h
#error "MarineAttributeSet.generated.h already included, missing '#pragma once' in MarineAttributeSet.h"
#endif
#define MARINE_SQUAD_MarineAttributeSet_generated_h

#define Marine_Squad_Source_Marine_Squad_Abilities_MarineAttributeSet_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_AttackRange) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_AttackRange(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_SightRange) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_SightRange(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_MoveSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_MoveSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_DefensePower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_DefensePower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_AttackPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_AttackPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_MaxMana) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_MaxMana(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Mana) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Mana(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_MaxHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_MaxHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Health) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Health(); \
		P_NATIVE_END; \
	}


#define Marine_Squad_Source_Marine_Squad_Abilities_MarineAttributeSet_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_AttackRange) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_AttackRange(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_SightRange) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_SightRange(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_MoveSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_MoveSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_DefensePower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_DefensePower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_AttackPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_AttackPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_MaxMana) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_MaxMana(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Mana) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Mana(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_MaxHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_MaxHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Health) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Health(); \
		P_NATIVE_END; \
	}


#define Marine_Squad_Source_Marine_Squad_Abilities_MarineAttributeSet_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMarineAttributeSet(); \
	friend struct Z_Construct_UClass_UMarineAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UMarineAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Marine_Squad"), NO_API) \
	DECLARE_SERIALIZER(UMarineAttributeSet)


#define Marine_Squad_Source_Marine_Squad_Abilities_MarineAttributeSet_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUMarineAttributeSet(); \
	friend struct Z_Construct_UClass_UMarineAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UMarineAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Marine_Squad"), NO_API) \
	DECLARE_SERIALIZER(UMarineAttributeSet)


#define Marine_Squad_Source_Marine_Squad_Abilities_MarineAttributeSet_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMarineAttributeSet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMarineAttributeSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMarineAttributeSet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMarineAttributeSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMarineAttributeSet(UMarineAttributeSet&&); \
	NO_API UMarineAttributeSet(const UMarineAttributeSet&); \
public:


#define Marine_Squad_Source_Marine_Squad_Abilities_MarineAttributeSet_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMarineAttributeSet(UMarineAttributeSet&&); \
	NO_API UMarineAttributeSet(const UMarineAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMarineAttributeSet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMarineAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMarineAttributeSet)


#define Marine_Squad_Source_Marine_Squad_Abilities_MarineAttributeSet_h_25_PRIVATE_PROPERTY_OFFSET
#define Marine_Squad_Source_Marine_Squad_Abilities_MarineAttributeSet_h_22_PROLOG
#define Marine_Squad_Source_Marine_Squad_Abilities_MarineAttributeSet_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Marine_Squad_Source_Marine_Squad_Abilities_MarineAttributeSet_h_25_PRIVATE_PROPERTY_OFFSET \
	Marine_Squad_Source_Marine_Squad_Abilities_MarineAttributeSet_h_25_RPC_WRAPPERS \
	Marine_Squad_Source_Marine_Squad_Abilities_MarineAttributeSet_h_25_INCLASS \
	Marine_Squad_Source_Marine_Squad_Abilities_MarineAttributeSet_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Marine_Squad_Source_Marine_Squad_Abilities_MarineAttributeSet_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Marine_Squad_Source_Marine_Squad_Abilities_MarineAttributeSet_h_25_PRIVATE_PROPERTY_OFFSET \
	Marine_Squad_Source_Marine_Squad_Abilities_MarineAttributeSet_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Marine_Squad_Source_Marine_Squad_Abilities_MarineAttributeSet_h_25_INCLASS_NO_PURE_DECLS \
	Marine_Squad_Source_Marine_Squad_Abilities_MarineAttributeSet_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MARINE_SQUAD_API UClass* StaticClass<class UMarineAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Marine_Squad_Source_Marine_Squad_Abilities_MarineAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
