// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TestSessionSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTPROJECT_TestSessionSubsystem_generated_h
#error "TestSessionSubsystem.generated.h already included, missing '#pragma once' in TestSessionSubsystem.h"
#endif
#define TESTPROJECT_TestSessionSubsystem_generated_h

#define FID_TestProject_Source_TestProject_TestSessionSubsystem_h_15_DELEGATE \
TESTPROJECT_API void FCSOnCreateSessionComplete_DelegateWrapper(const FMulticastScriptDelegate& CSOnCreateSessionComplete, bool Successful);


#define FID_TestProject_Source_TestProject_TestSessionSubsystem_h_16_DELEGATE \
TESTPROJECT_API void FCSOnUpdateSessionComplete_DelegateWrapper(const FMulticastScriptDelegate& CSOnUpdateSessionComplete, bool Successful);


#define FID_TestProject_Source_TestProject_TestSessionSubsystem_h_17_DELEGATE \
TESTPROJECT_API void FCSOnStartSessionComplete_DelegateWrapper(const FMulticastScriptDelegate& CSOnStartSessionComplete, bool Successful);


#define FID_TestProject_Source_TestProject_TestSessionSubsystem_h_18_DELEGATE \
TESTPROJECT_API void FCSOnEndSessionComplete_DelegateWrapper(const FMulticastScriptDelegate& CSOnEndSessionComplete, bool Successful);


#define FID_TestProject_Source_TestProject_TestSessionSubsystem_h_19_DELEGATE \
TESTPROJECT_API void FCSOnDestroySessionComplete_DelegateWrapper(const FMulticastScriptDelegate& CSOnDestroySessionComplete, bool Successful);


#define FID_TestProject_Source_TestProject_TestSessionSubsystem_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindSessions); \
	DECLARE_FUNCTION(execDestroySession); \
	DECLARE_FUNCTION(execEndSession); \
	DECLARE_FUNCTION(execStartSession); \
	DECLARE_FUNCTION(execUpdateSession); \
	DECLARE_FUNCTION(execCreateSession);


#define FID_TestProject_Source_TestProject_TestSessionSubsystem_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestSessionSubsystem(); \
	friend struct Z_Construct_UClass_UTestSessionSubsystem_Statics; \
public: \
	DECLARE_CLASS(UTestSessionSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(UTestSessionSubsystem)


#define FID_TestProject_Source_TestProject_TestSessionSubsystem_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTestSessionSubsystem(UTestSessionSubsystem&&); \
	UTestSessionSubsystem(const UTestSessionSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestSessionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestSessionSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTestSessionSubsystem) \
	NO_API virtual ~UTestSessionSubsystem();


#define FID_TestProject_Source_TestProject_TestSessionSubsystem_h_24_PROLOG
#define FID_TestProject_Source_TestProject_TestSessionSubsystem_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestProject_Source_TestProject_TestSessionSubsystem_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TestProject_Source_TestProject_TestSessionSubsystem_h_27_INCLASS_NO_PURE_DECLS \
	FID_TestProject_Source_TestProject_TestSessionSubsystem_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECT_API UClass* StaticClass<class UTestSessionSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestProject_Source_TestProject_TestSessionSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
