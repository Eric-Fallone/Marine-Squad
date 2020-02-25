// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MARINE_SQUAD_MoveIndicator_generated_h
#error "MoveIndicator.generated.h already included, missing '#pragma once' in MoveIndicator.h"
#endif
#define MARINE_SQUAD_MoveIndicator_generated_h

#define Marine_Squad_Source_Marine_Squad_MoveIndicator_h_12_RPC_WRAPPERS
#define Marine_Squad_Source_Marine_Squad_MoveIndicator_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Marine_Squad_Source_Marine_Squad_MoveIndicator_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMoveIndicator(); \
	friend struct Z_Construct_UClass_AMoveIndicator_Statics; \
public: \
	DECLARE_CLASS(AMoveIndicator, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Marine_Squad"), NO_API) \
	DECLARE_SERIALIZER(AMoveIndicator)


#define Marine_Squad_Source_Marine_Squad_MoveIndicator_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMoveIndicator(); \
	friend struct Z_Construct_UClass_AMoveIndicator_Statics; \
public: \
	DECLARE_CLASS(AMoveIndicator, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Marine_Squad"), NO_API) \
	DECLARE_SERIALIZER(AMoveIndicator)


#define Marine_Squad_Source_Marine_Squad_MoveIndicator_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMoveIndicator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMoveIndicator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMoveIndicator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMoveIndicator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMoveIndicator(AMoveIndicator&&); \
	NO_API AMoveIndicator(const AMoveIndicator&); \
public:


#define Marine_Squad_Source_Marine_Squad_MoveIndicator_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMoveIndicator(AMoveIndicator&&); \
	NO_API AMoveIndicator(const AMoveIndicator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMoveIndicator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMoveIndicator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMoveIndicator)


#define Marine_Squad_Source_Marine_Squad_MoveIndicator_h_12_PRIVATE_PROPERTY_OFFSET
#define Marine_Squad_Source_Marine_Squad_MoveIndicator_h_9_PROLOG
#define Marine_Squad_Source_Marine_Squad_MoveIndicator_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Marine_Squad_Source_Marine_Squad_MoveIndicator_h_12_PRIVATE_PROPERTY_OFFSET \
	Marine_Squad_Source_Marine_Squad_MoveIndicator_h_12_RPC_WRAPPERS \
	Marine_Squad_Source_Marine_Squad_MoveIndicator_h_12_INCLASS \
	Marine_Squad_Source_Marine_Squad_MoveIndicator_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Marine_Squad_Source_Marine_Squad_MoveIndicator_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Marine_Squad_Source_Marine_Squad_MoveIndicator_h_12_PRIVATE_PROPERTY_OFFSET \
	Marine_Squad_Source_Marine_Squad_MoveIndicator_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Marine_Squad_Source_Marine_Squad_MoveIndicator_h_12_INCLASS_NO_PURE_DECLS \
	Marine_Squad_Source_Marine_Squad_MoveIndicator_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MARINE_SQUAD_API UClass* StaticClass<class AMoveIndicator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Marine_Squad_Source_Marine_Squad_MoveIndicator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
