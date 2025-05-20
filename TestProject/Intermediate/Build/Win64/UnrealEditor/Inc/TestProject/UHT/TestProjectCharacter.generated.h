// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TestProjectCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTPROJECT_TestProjectCharacter_generated_h
#error "TestProjectCharacter.generated.h already included, missing '#pragma once' in TestProjectCharacter.h"
#endif
#define TESTPROJECT_TestProjectCharacter_generated_h

#define FID_TestProject_Source_TestProject_TestProjectCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestProjectCharacter(); \
	friend struct Z_Construct_UClass_ATestProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(ATestProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(ATestProjectCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ATestProjectCharacter*>(this); }


#define FID_TestProject_Source_TestProject_TestProjectCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATestProjectCharacter(ATestProjectCharacter&&); \
	ATestProjectCharacter(const ATestProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestProjectCharacter) \
	NO_API virtual ~ATestProjectCharacter();


#define FID_TestProject_Source_TestProject_TestProjectCharacter_h_11_PROLOG
#define FID_TestProject_Source_TestProject_TestProjectCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestProject_Source_TestProject_TestProjectCharacter_h_14_INCLASS_NO_PURE_DECLS \
	FID_TestProject_Source_TestProject_TestProjectCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECT_API UClass* StaticClass<class ATestProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestProject_Source_TestProject_TestProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
