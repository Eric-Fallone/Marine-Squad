// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MARINE_SQUAD_Unit_Parent_Class_generated_h
#error "Unit_Parent_Class.generated.h already included, missing '#pragma once' in Unit_Parent_Class.h"
#endif
#define MARINE_SQUAD_Unit_Parent_Class_generated_h

#define Marine_Squad_Source_Marine_Squad_Units_Unit_Parent_Class_h_12_RPC_WRAPPERS
#define Marine_Squad_Source_Marine_Squad_Units_Unit_Parent_Class_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Marine_Squad_Source_Marine_Squad_Units_Unit_Parent_Class_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnit_Parent_Class(); \
	friend struct Z_Construct_UClass_AUnit_Parent_Class_Statics; \
public: \
	DECLARE_CLASS(AUnit_Parent_Class, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Marine_Squad"), NO_API) \
	DECLARE_SERIALIZER(AUnit_Parent_Class)


#define Marine_Squad_Source_Marine_Squad_Units_Unit_Parent_Class_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAUnit_Parent_Class(); \
	friend struct Z_Construct_UClass_AUnit_Parent_Class_Statics; \
public: \
	DECLARE_CLASS(AUnit_Parent_Class, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Marine_Squad"), NO_API) \
	DECLARE_SERIALIZER(AUnit_Parent_Class)


#define Marine_Squad_Source_Marine_Squad_Units_Unit_Parent_Class_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUnit_Parent_Class(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUnit_Parent_Class) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnit_Parent_Class); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnit_Parent_Class); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnit_Parent_Class(AUnit_Parent_Class&&); \
	NO_API AUnit_Parent_Class(const AUnit_Parent_Class&); \
public:


#define Marine_Squad_Source_Marine_Squad_Units_Unit_Parent_Class_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnit_Parent_Class(AUnit_Parent_Class&&); \
	NO_API AUnit_Parent_Class(const AUnit_Parent_Class&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnit_Parent_Class); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnit_Parent_Class); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUnit_Parent_Class)


#define Marine_Squad_Source_Marine_Squad_Units_Unit_Parent_Class_h_12_PRIVATE_PROPERTY_OFFSET
#define Marine_Squad_Source_Marine_Squad_Units_Unit_Parent_Class_h_9_PROLOG
#define Marine_Squad_Source_Marine_Squad_Units_Unit_Parent_Class_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Marine_Squad_Source_Marine_Squad_Units_Unit_Parent_Class_h_12_PRIVATE_PROPERTY_OFFSET \
	Marine_Squad_Source_Marine_Squad_Units_Unit_Parent_Class_h_12_RPC_WRAPPERS \
	Marine_Squad_Source_Marine_Squad_Units_Unit_Parent_Class_h_12_INCLASS \
	Marine_Squad_Source_Marine_Squad_Units_Unit_Parent_Class_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Marine_Squad_Source_Marine_Squad_Units_Unit_Parent_Class_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Marine_Squad_Source_Marine_Squad_Units_Unit_Parent_Class_h_12_PRIVATE_PROPERTY_OFFSET \
	Marine_Squad_Source_Marine_Squad_Units_Unit_Parent_Class_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Marine_Squad_Source_Marine_Squad_Units_Unit_Parent_Class_h_12_INCLASS_NO_PURE_DECLS \
	Marine_Squad_Source_Marine_Squad_Units_Unit_Parent_Class_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MARINE_SQUAD_API UClass* StaticClass<class AUnit_Parent_Class>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Marine_Squad_Source_Marine_Squad_Units_Unit_Parent_Class_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
