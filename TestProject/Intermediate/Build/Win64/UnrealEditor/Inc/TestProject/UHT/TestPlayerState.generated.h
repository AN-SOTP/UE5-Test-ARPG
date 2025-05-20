// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TestPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECharacterClass : uint8;
#ifdef TESTPROJECT_TestPlayerState_generated_h
#error "TestPlayerState.generated.h already included, missing '#pragma once' in TestPlayerState.h"
#endif
#define TESTPROJECT_TestPlayerState_generated_h

#define FID_TestProject_Source_TestProject_TestPlayerState_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCharacterClass); \
	DECLARE_FUNCTION(execSetCharacterClass);


#define FID_TestProject_Source_TestProject_TestPlayerState_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestPlayerState(); \
	friend struct Z_Construct_UClass_ATestPlayerState_Statics; \
public: \
	DECLARE_CLASS(ATestPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(ATestPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<ATestPlayerState*>(this); }


#define FID_TestProject_Source_TestProject_TestPlayerState_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATestPlayerState(ATestPlayerState&&); \
	ATestPlayerState(const ATestPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestPlayerState) \
	NO_API virtual ~ATestPlayerState();


#define FID_TestProject_Source_TestProject_TestPlayerState_h_24_PROLOG
#define FID_TestProject_Source_TestProject_TestPlayerState_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestProject_Source_TestProject_TestPlayerState_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TestProject_Source_TestProject_TestPlayerState_h_27_INCLASS_NO_PURE_DECLS \
	FID_TestProject_Source_TestProject_TestPlayerState_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECT_API UClass* StaticClass<class ATestPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestProject_Source_TestProject_TestPlayerState_h


#define FOREACH_ENUM_ECHARACTERCLASS(op) \
	op(ECharacterClass::None) \
	op(ECharacterClass::Warrior) 

enum class ECharacterClass : uint8;
template<> struct TIsUEnumClass<ECharacterClass> { enum { Value = true }; };
template<> TESTPROJECT_API UEnum* StaticEnum<ECharacterClass>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
