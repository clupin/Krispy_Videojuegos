// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KRISPY_Player_Krispy_generated_h
#error "Player_Krispy.generated.h already included, missing '#pragma once' in Player_Krispy.h"
#endif
#define KRISPY_Player_Krispy_generated_h

#define Krispy_Source_Krispy_Player_Krispy_h_14_RPC_WRAPPERS
#define Krispy_Source_Krispy_Player_Krispy_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Krispy_Source_Krispy_Player_Krispy_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayer_Krispy(); \
	friend KRISPY_API class UClass* Z_Construct_UClass_APlayer_Krispy(); \
public: \
	DECLARE_CLASS(APlayer_Krispy, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Krispy"), NO_API) \
	DECLARE_SERIALIZER(APlayer_Krispy) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Krispy_Source_Krispy_Player_Krispy_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPlayer_Krispy(); \
	friend KRISPY_API class UClass* Z_Construct_UClass_APlayer_Krispy(); \
public: \
	DECLARE_CLASS(APlayer_Krispy, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Krispy"), NO_API) \
	DECLARE_SERIALIZER(APlayer_Krispy) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Krispy_Source_Krispy_Player_Krispy_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayer_Krispy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayer_Krispy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayer_Krispy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayer_Krispy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayer_Krispy(APlayer_Krispy&&); \
	NO_API APlayer_Krispy(const APlayer_Krispy&); \
public:


#define Krispy_Source_Krispy_Player_Krispy_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayer_Krispy(APlayer_Krispy&&); \
	NO_API APlayer_Krispy(const APlayer_Krispy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayer_Krispy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayer_Krispy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayer_Krispy)


#define Krispy_Source_Krispy_Player_Krispy_h_14_PRIVATE_PROPERTY_OFFSET
#define Krispy_Source_Krispy_Player_Krispy_h_11_PROLOG
#define Krispy_Source_Krispy_Player_Krispy_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Krispy_Source_Krispy_Player_Krispy_h_14_PRIVATE_PROPERTY_OFFSET \
	Krispy_Source_Krispy_Player_Krispy_h_14_RPC_WRAPPERS \
	Krispy_Source_Krispy_Player_Krispy_h_14_INCLASS \
	Krispy_Source_Krispy_Player_Krispy_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Krispy_Source_Krispy_Player_Krispy_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Krispy_Source_Krispy_Player_Krispy_h_14_PRIVATE_PROPERTY_OFFSET \
	Krispy_Source_Krispy_Player_Krispy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Krispy_Source_Krispy_Player_Krispy_h_14_INCLASS_NO_PURE_DECLS \
	Krispy_Source_Krispy_Player_Krispy_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Krispy_Source_Krispy_Player_Krispy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
