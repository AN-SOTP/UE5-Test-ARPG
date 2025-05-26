// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TestMenuGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTPROJECT_TestMenuGameMode_generated_h
#error "TestMenuGameMode.generated.h already included, missing '#pragma once' in TestMenuGameMode.h"
#endif
#define TESTPROJECT_TestMenuGameMode_generated_h

#define FID_TestProject_Source_TestProject_TestMenuGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestMenuGameMode(); \
	friend struct Z_Construct_UClass_ATestMenuGameMode_Statics; \
public: \
	DECLARE_CLASS(ATestMenuGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(ATestMenuGameMode)


#define FID_TestProject_Source_TestProject_TestMenuGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATestMenuGameMode(ATestMenuGameMode&&); \
	ATestMenuGameMode(const ATestMenuGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestMenuGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestMenuGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestMenuGameMode) \
	NO_API virtual ~ATestMenuGameMode();


#define FID_TestProject_Source_TestProject_TestMenuGameMode_h_12_PROLOG
#define FID_TestProject_Source_TestProject_TestMenuGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestProject_Source_TestProject_TestMenuGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_TestProject_Source_TestProject_TestMenuGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECT_API UClass* StaticClass<class ATestMenuGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestProject_Source_TestProject_TestMenuGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
