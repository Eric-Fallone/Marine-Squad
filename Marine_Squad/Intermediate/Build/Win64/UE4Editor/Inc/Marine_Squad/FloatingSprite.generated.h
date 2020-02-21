// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MARINE_SQUAD_FloatingSprite_generated_h
#error "FloatingSprite.generated.h already included, missing '#pragma once' in FloatingSprite.h"
#endif
#define MARINE_SQUAD_FloatingSprite_generated_h

#define Marine_Squad_Source_Marine_Squad_FloatingSprite_h_15_RPC_WRAPPERS
#define Marine_Squad_Source_Marine_Squad_FloatingSprite_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Marine_Squad_Source_Marine_Squad_FloatingSprite_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFloatingSprite(); \
	friend struct Z_Construct_UClass_UFloatingSprite_Statics; \
public: \
	DECLARE_CLASS(UFloatingSprite, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Marine_Squad"), NO_API) \
	DECLARE_SERIALIZER(UFloatingSprite)


#define Marine_Squad_Source_Marine_Squad_FloatingSprite_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUFloatingSprite(); \
	friend struct Z_Construct_UClass_UFloatingSprite_Statics; \
public: \
	DECLARE_CLASS(UFloatingSprite, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Marine_Squad"), NO_API) \
	DECLARE_SERIALIZER(UFloatingSprite)


#define Marine_Squad_Source_Marine_Squad_FloatingSprite_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFloatingSprite(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFloatingSprite) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFloatingSprite); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFloatingSprite); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFloatingSprite(UFloatingSprite&&); \
	NO_API UFloatingSprite(const UFloatingSprite&); \
public:


#define Marine_Squad_Source_Marine_Squad_FloatingSprite_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFloatingSprite(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFloatingSprite(UFloatingSprite&&); \
	NO_API UFloatingSprite(const UFloatingSprite&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFloatingSprite); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFloatingSprite); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFloatingSprite)


#define Marine_Squad_Source_Marine_Squad_FloatingSprite_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Sprite() { return STRUCT_OFFSET(UFloatingSprite, Sprite); }


#define Marine_Squad_Source_Marine_Squad_FloatingSprite_h_12_PROLOG
#define Marine_Squad_Source_Marine_Squad_FloatingSprite_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Marine_Squad_Source_Marine_Squad_FloatingSprite_h_15_PRIVATE_PROPERTY_OFFSET \
	Marine_Squad_Source_Marine_Squad_FloatingSprite_h_15_RPC_WRAPPERS \
	Marine_Squad_Source_Marine_Squad_FloatingSprite_h_15_INCLASS \
	Marine_Squad_Source_Marine_Squad_FloatingSprite_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Marine_Squad_Source_Marine_Squad_FloatingSprite_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Marine_Squad_Source_Marine_Squad_FloatingSprite_h_15_PRIVATE_PROPERTY_OFFSET \
	Marine_Squad_Source_Marine_Squad_FloatingSprite_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Marine_Squad_Source_Marine_Squad_FloatingSprite_h_15_INCLASS_NO_PURE_DECLS \
	Marine_Squad_Source_Marine_Squad_FloatingSprite_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MARINE_SQUAD_API UClass* StaticClass<class UFloatingSprite>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Marine_Squad_Source_Marine_Squad_FloatingSprite_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
