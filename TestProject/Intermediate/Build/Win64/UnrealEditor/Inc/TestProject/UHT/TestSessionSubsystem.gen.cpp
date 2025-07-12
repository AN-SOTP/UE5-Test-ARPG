// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/TestSessionSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestSessionSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
TESTPROJECT_API UClass* Z_Construct_UClass_UTestSessionSubsystem();
TESTPROJECT_API UClass* Z_Construct_UClass_UTestSessionSubsystem_NoRegister();
TESTPROJECT_API UFunction* Z_Construct_UDelegateFunction_TestProject_CSOnCreateSessionComplete__DelegateSignature();
TESTPROJECT_API UFunction* Z_Construct_UDelegateFunction_TestProject_CSOnDestroySessionComplete__DelegateSignature();
TESTPROJECT_API UFunction* Z_Construct_UDelegateFunction_TestProject_CSOnEndSessionComplete__DelegateSignature();
TESTPROJECT_API UFunction* Z_Construct_UDelegateFunction_TestProject_CSOnStartSessionComplete__DelegateSignature();
TESTPROJECT_API UFunction* Z_Construct_UDelegateFunction_TestProject_CSOnUpdateSessionComplete__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_TestProject();
// End Cross Module References

// Begin Delegate FCSOnCreateSessionComplete
struct Z_Construct_UDelegateFunction_TestProject_CSOnCreateSessionComplete__DelegateSignature_Statics
{
	struct _Script_TestProject_eventCSOnCreateSessionComplete_Parms
	{
		bool Successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "TestSessionSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Successful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Successful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_TestProject_CSOnCreateSessionComplete__DelegateSignature_Statics::NewProp_Successful_SetBit(void* Obj)
{
	((_Script_TestProject_eventCSOnCreateSessionComplete_Parms*)Obj)->Successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_TestProject_CSOnCreateSessionComplete__DelegateSignature_Statics::NewProp_Successful = { "Successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_TestProject_eventCSOnCreateSessionComplete_Parms), &Z_Construct_UDelegateFunction_TestProject_CSOnCreateSessionComplete__DelegateSignature_Statics::NewProp_Successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TestProject_CSOnCreateSessionComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TestProject_CSOnCreateSessionComplete__DelegateSignature_Statics::NewProp_Successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TestProject_CSOnCreateSessionComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TestProject_CSOnCreateSessionComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TestProject, nullptr, "CSOnCreateSessionComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_TestProject_CSOnCreateSessionComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TestProject_CSOnCreateSessionComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TestProject_CSOnCreateSessionComplete__DelegateSignature_Statics::_Script_TestProject_eventCSOnCreateSessionComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TestProject_CSOnCreateSessionComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TestProject_CSOnCreateSessionComplete__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_TestProject_CSOnCreateSessionComplete__DelegateSignature_Statics::_Script_TestProject_eventCSOnCreateSessionComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TestProject_CSOnCreateSessionComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TestProject_CSOnCreateSessionComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCSOnCreateSessionComplete_DelegateWrapper(const FMulticastScriptDelegate& CSOnCreateSessionComplete, bool Successful)
{
	struct _Script_TestProject_eventCSOnCreateSessionComplete_Parms
	{
		bool Successful;
	};
	_Script_TestProject_eventCSOnCreateSessionComplete_Parms Parms;
	Parms.Successful=Successful ? true : false;
	CSOnCreateSessionComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FCSOnCreateSessionComplete

// Begin Delegate FCSOnUpdateSessionComplete
struct Z_Construct_UDelegateFunction_TestProject_CSOnUpdateSessionComplete__DelegateSignature_Statics
{
	struct _Script_TestProject_eventCSOnUpdateSessionComplete_Parms
	{
		bool Successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TestSessionSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Successful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Successful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_TestProject_CSOnUpdateSessionComplete__DelegateSignature_Statics::NewProp_Successful_SetBit(void* Obj)
{
	((_Script_TestProject_eventCSOnUpdateSessionComplete_Parms*)Obj)->Successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_TestProject_CSOnUpdateSessionComplete__DelegateSignature_Statics::NewProp_Successful = { "Successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_TestProject_eventCSOnUpdateSessionComplete_Parms), &Z_Construct_UDelegateFunction_TestProject_CSOnUpdateSessionComplete__DelegateSignature_Statics::NewProp_Successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TestProject_CSOnUpdateSessionComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TestProject_CSOnUpdateSessionComplete__DelegateSignature_Statics::NewProp_Successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TestProject_CSOnUpdateSessionComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TestProject_CSOnUpdateSessionComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TestProject, nullptr, "CSOnUpdateSessionComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_TestProject_CSOnUpdateSessionComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TestProject_CSOnUpdateSessionComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TestProject_CSOnUpdateSessionComplete__DelegateSignature_Statics::_Script_TestProject_eventCSOnUpdateSessionComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TestProject_CSOnUpdateSessionComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TestProject_CSOnUpdateSessionComplete__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_TestProject_CSOnUpdateSessionComplete__DelegateSignature_Statics::_Script_TestProject_eventCSOnUpdateSessionComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TestProject_CSOnUpdateSessionComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TestProject_CSOnUpdateSessionComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCSOnUpdateSessionComplete_DelegateWrapper(const FMulticastScriptDelegate& CSOnUpdateSessionComplete, bool Successful)
{
	struct _Script_TestProject_eventCSOnUpdateSessionComplete_Parms
	{
		bool Successful;
	};
	_Script_TestProject_eventCSOnUpdateSessionComplete_Parms Parms;
	Parms.Successful=Successful ? true : false;
	CSOnUpdateSessionComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FCSOnUpdateSessionComplete

// Begin Delegate FCSOnStartSessionComplete
struct Z_Construct_UDelegateFunction_TestProject_CSOnStartSessionComplete__DelegateSignature_Statics
{
	struct _Script_TestProject_eventCSOnStartSessionComplete_Parms
	{
		bool Successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TestSessionSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Successful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Successful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_TestProject_CSOnStartSessionComplete__DelegateSignature_Statics::NewProp_Successful_SetBit(void* Obj)
{
	((_Script_TestProject_eventCSOnStartSessionComplete_Parms*)Obj)->Successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_TestProject_CSOnStartSessionComplete__DelegateSignature_Statics::NewProp_Successful = { "Successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_TestProject_eventCSOnStartSessionComplete_Parms), &Z_Construct_UDelegateFunction_TestProject_CSOnStartSessionComplete__DelegateSignature_Statics::NewProp_Successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TestProject_CSOnStartSessionComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TestProject_CSOnStartSessionComplete__DelegateSignature_Statics::NewProp_Successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TestProject_CSOnStartSessionComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TestProject_CSOnStartSessionComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TestProject, nullptr, "CSOnStartSessionComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_TestProject_CSOnStartSessionComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TestProject_CSOnStartSessionComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TestProject_CSOnStartSessionComplete__DelegateSignature_Statics::_Script_TestProject_eventCSOnStartSessionComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TestProject_CSOnStartSessionComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TestProject_CSOnStartSessionComplete__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_TestProject_CSOnStartSessionComplete__DelegateSignature_Statics::_Script_TestProject_eventCSOnStartSessionComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TestProject_CSOnStartSessionComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TestProject_CSOnStartSessionComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCSOnStartSessionComplete_DelegateWrapper(const FMulticastScriptDelegate& CSOnStartSessionComplete, bool Successful)
{
	struct _Script_TestProject_eventCSOnStartSessionComplete_Parms
	{
		bool Successful;
	};
	_Script_TestProject_eventCSOnStartSessionComplete_Parms Parms;
	Parms.Successful=Successful ? true : false;
	CSOnStartSessionComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FCSOnStartSessionComplete

// Begin Delegate FCSOnEndSessionComplete
struct Z_Construct_UDelegateFunction_TestProject_CSOnEndSessionComplete__DelegateSignature_Statics
{
	struct _Script_TestProject_eventCSOnEndSessionComplete_Parms
	{
		bool Successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TestSessionSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Successful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Successful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_TestProject_CSOnEndSessionComplete__DelegateSignature_Statics::NewProp_Successful_SetBit(void* Obj)
{
	((_Script_TestProject_eventCSOnEndSessionComplete_Parms*)Obj)->Successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_TestProject_CSOnEndSessionComplete__DelegateSignature_Statics::NewProp_Successful = { "Successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_TestProject_eventCSOnEndSessionComplete_Parms), &Z_Construct_UDelegateFunction_TestProject_CSOnEndSessionComplete__DelegateSignature_Statics::NewProp_Successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TestProject_CSOnEndSessionComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TestProject_CSOnEndSessionComplete__DelegateSignature_Statics::NewProp_Successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TestProject_CSOnEndSessionComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TestProject_CSOnEndSessionComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TestProject, nullptr, "CSOnEndSessionComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_TestProject_CSOnEndSessionComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TestProject_CSOnEndSessionComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TestProject_CSOnEndSessionComplete__DelegateSignature_Statics::_Script_TestProject_eventCSOnEndSessionComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TestProject_CSOnEndSessionComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TestProject_CSOnEndSessionComplete__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_TestProject_CSOnEndSessionComplete__DelegateSignature_Statics::_Script_TestProject_eventCSOnEndSessionComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TestProject_CSOnEndSessionComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TestProject_CSOnEndSessionComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCSOnEndSessionComplete_DelegateWrapper(const FMulticastScriptDelegate& CSOnEndSessionComplete, bool Successful)
{
	struct _Script_TestProject_eventCSOnEndSessionComplete_Parms
	{
		bool Successful;
	};
	_Script_TestProject_eventCSOnEndSessionComplete_Parms Parms;
	Parms.Successful=Successful ? true : false;
	CSOnEndSessionComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FCSOnEndSessionComplete

// Begin Delegate FCSOnDestroySessionComplete
struct Z_Construct_UDelegateFunction_TestProject_CSOnDestroySessionComplete__DelegateSignature_Statics
{
	struct _Script_TestProject_eventCSOnDestroySessionComplete_Parms
	{
		bool Successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TestSessionSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Successful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Successful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_TestProject_CSOnDestroySessionComplete__DelegateSignature_Statics::NewProp_Successful_SetBit(void* Obj)
{
	((_Script_TestProject_eventCSOnDestroySessionComplete_Parms*)Obj)->Successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_TestProject_CSOnDestroySessionComplete__DelegateSignature_Statics::NewProp_Successful = { "Successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_TestProject_eventCSOnDestroySessionComplete_Parms), &Z_Construct_UDelegateFunction_TestProject_CSOnDestroySessionComplete__DelegateSignature_Statics::NewProp_Successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TestProject_CSOnDestroySessionComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TestProject_CSOnDestroySessionComplete__DelegateSignature_Statics::NewProp_Successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TestProject_CSOnDestroySessionComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TestProject_CSOnDestroySessionComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TestProject, nullptr, "CSOnDestroySessionComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_TestProject_CSOnDestroySessionComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TestProject_CSOnDestroySessionComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TestProject_CSOnDestroySessionComplete__DelegateSignature_Statics::_Script_TestProject_eventCSOnDestroySessionComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TestProject_CSOnDestroySessionComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TestProject_CSOnDestroySessionComplete__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_TestProject_CSOnDestroySessionComplete__DelegateSignature_Statics::_Script_TestProject_eventCSOnDestroySessionComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TestProject_CSOnDestroySessionComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TestProject_CSOnDestroySessionComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCSOnDestroySessionComplete_DelegateWrapper(const FMulticastScriptDelegate& CSOnDestroySessionComplete, bool Successful)
{
	struct _Script_TestProject_eventCSOnDestroySessionComplete_Parms
	{
		bool Successful;
	};
	_Script_TestProject_eventCSOnDestroySessionComplete_Parms Parms;
	Parms.Successful=Successful ? true : false;
	CSOnDestroySessionComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FCSOnDestroySessionComplete

// Begin Class UTestSessionSubsystem Function CreateSession
struct Z_Construct_UFunction_UTestSessionSubsystem_CreateSession_Statics
{
	struct TestSessionSubsystem_eventCreateSession_Parms
	{
		int32 NumPublicConnections;
		bool bIsLANMatch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sessions" },
		{ "ModuleRelativePath", "TestSessionSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumPublicConnections;
	static void NewProp_bIsLANMatch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLANMatch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTestSessionSubsystem_CreateSession_Statics::NewProp_NumPublicConnections = { "NumPublicConnections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TestSessionSubsystem_eventCreateSession_Parms, NumPublicConnections), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTestSessionSubsystem_CreateSession_Statics::NewProp_bIsLANMatch_SetBit(void* Obj)
{
	((TestSessionSubsystem_eventCreateSession_Parms*)Obj)->bIsLANMatch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTestSessionSubsystem_CreateSession_Statics::NewProp_bIsLANMatch = { "bIsLANMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TestSessionSubsystem_eventCreateSession_Parms), &Z_Construct_UFunction_UTestSessionSubsystem_CreateSession_Statics::NewProp_bIsLANMatch_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTestSessionSubsystem_CreateSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestSessionSubsystem_CreateSession_Statics::NewProp_NumPublicConnections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestSessionSubsystem_CreateSession_Statics::NewProp_bIsLANMatch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTestSessionSubsystem_CreateSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestSessionSubsystem_CreateSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestSessionSubsystem, nullptr, "CreateSession", nullptr, nullptr, Z_Construct_UFunction_UTestSessionSubsystem_CreateSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestSessionSubsystem_CreateSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTestSessionSubsystem_CreateSession_Statics::TestSessionSubsystem_eventCreateSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTestSessionSubsystem_CreateSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTestSessionSubsystem_CreateSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTestSessionSubsystem_CreateSession_Statics::TestSessionSubsystem_eventCreateSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTestSessionSubsystem_CreateSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTestSessionSubsystem_CreateSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTestSessionSubsystem::execCreateSession)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NumPublicConnections);
	P_GET_UBOOL(Z_Param_bIsLANMatch);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateSession(Z_Param_NumPublicConnections,Z_Param_bIsLANMatch);
	P_NATIVE_END;
}
// End Class UTestSessionSubsystem Function CreateSession

// Begin Class UTestSessionSubsystem Function DestroySession
struct Z_Construct_UFunction_UTestSessionSubsystem_DestroySession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sessions" },
		{ "ModuleRelativePath", "TestSessionSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestSessionSubsystem_DestroySession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestSessionSubsystem, nullptr, "DestroySession", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTestSessionSubsystem_DestroySession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTestSessionSubsystem_DestroySession_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTestSessionSubsystem_DestroySession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTestSessionSubsystem_DestroySession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTestSessionSubsystem::execDestroySession)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroySession();
	P_NATIVE_END;
}
// End Class UTestSessionSubsystem Function DestroySession

// Begin Class UTestSessionSubsystem Function EndSession
struct Z_Construct_UFunction_UTestSessionSubsystem_EndSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sessions" },
		{ "ModuleRelativePath", "TestSessionSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestSessionSubsystem_EndSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestSessionSubsystem, nullptr, "EndSession", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTestSessionSubsystem_EndSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTestSessionSubsystem_EndSession_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTestSessionSubsystem_EndSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTestSessionSubsystem_EndSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTestSessionSubsystem::execEndSession)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndSession();
	P_NATIVE_END;
}
// End Class UTestSessionSubsystem Function EndSession

// Begin Class UTestSessionSubsystem Function FindSessions
struct Z_Construct_UFunction_UTestSessionSubsystem_FindSessions_Statics
{
	struct TestSessionSubsystem_eventFindSessions_Parms
	{
		int32 MaxSearchResults;
		bool bIsLANQuery;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sessions" },
		{ "ModuleRelativePath", "TestSessionSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSearchResults;
	static void NewProp_bIsLANQuery_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLANQuery;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTestSessionSubsystem_FindSessions_Statics::NewProp_MaxSearchResults = { "MaxSearchResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TestSessionSubsystem_eventFindSessions_Parms, MaxSearchResults), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTestSessionSubsystem_FindSessions_Statics::NewProp_bIsLANQuery_SetBit(void* Obj)
{
	((TestSessionSubsystem_eventFindSessions_Parms*)Obj)->bIsLANQuery = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTestSessionSubsystem_FindSessions_Statics::NewProp_bIsLANQuery = { "bIsLANQuery", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TestSessionSubsystem_eventFindSessions_Parms), &Z_Construct_UFunction_UTestSessionSubsystem_FindSessions_Statics::NewProp_bIsLANQuery_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTestSessionSubsystem_FindSessions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestSessionSubsystem_FindSessions_Statics::NewProp_MaxSearchResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestSessionSubsystem_FindSessions_Statics::NewProp_bIsLANQuery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTestSessionSubsystem_FindSessions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestSessionSubsystem_FindSessions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestSessionSubsystem, nullptr, "FindSessions", nullptr, nullptr, Z_Construct_UFunction_UTestSessionSubsystem_FindSessions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestSessionSubsystem_FindSessions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTestSessionSubsystem_FindSessions_Statics::TestSessionSubsystem_eventFindSessions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTestSessionSubsystem_FindSessions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTestSessionSubsystem_FindSessions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTestSessionSubsystem_FindSessions_Statics::TestSessionSubsystem_eventFindSessions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTestSessionSubsystem_FindSessions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTestSessionSubsystem_FindSessions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTestSessionSubsystem::execFindSessions)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxSearchResults);
	P_GET_UBOOL(Z_Param_bIsLANQuery);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindSessions(Z_Param_MaxSearchResults,Z_Param_bIsLANQuery);
	P_NATIVE_END;
}
// End Class UTestSessionSubsystem Function FindSessions

// Begin Class UTestSessionSubsystem Function StartSession
struct Z_Construct_UFunction_UTestSessionSubsystem_StartSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sessions" },
		{ "ModuleRelativePath", "TestSessionSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestSessionSubsystem_StartSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestSessionSubsystem, nullptr, "StartSession", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTestSessionSubsystem_StartSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTestSessionSubsystem_StartSession_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTestSessionSubsystem_StartSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTestSessionSubsystem_StartSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTestSessionSubsystem::execStartSession)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartSession();
	P_NATIVE_END;
}
// End Class UTestSessionSubsystem Function StartSession

// Begin Class UTestSessionSubsystem Function UpdateSession
struct Z_Construct_UFunction_UTestSessionSubsystem_UpdateSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sessions" },
		{ "ModuleRelativePath", "TestSessionSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestSessionSubsystem_UpdateSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestSessionSubsystem, nullptr, "UpdateSession", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTestSessionSubsystem_UpdateSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTestSessionSubsystem_UpdateSession_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTestSessionSubsystem_UpdateSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTestSessionSubsystem_UpdateSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTestSessionSubsystem::execUpdateSession)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateSession();
	P_NATIVE_END;
}
// End Class UTestSessionSubsystem Function UpdateSession

// Begin Class UTestSessionSubsystem
void UTestSessionSubsystem::StaticRegisterNativesUTestSessionSubsystem()
{
	UClass* Class = UTestSessionSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateSession", &UTestSessionSubsystem::execCreateSession },
		{ "DestroySession", &UTestSessionSubsystem::execDestroySession },
		{ "EndSession", &UTestSessionSubsystem::execEndSession },
		{ "FindSessions", &UTestSessionSubsystem::execFindSessions },
		{ "StartSession", &UTestSessionSubsystem::execStartSession },
		{ "UpdateSession", &UTestSessionSubsystem::execUpdateSession },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestSessionSubsystem);
UClass* Z_Construct_UClass_UTestSessionSubsystem_NoRegister()
{
	return UTestSessionSubsystem::StaticClass();
}
struct Z_Construct_UClass_UTestSessionSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TestSessionSubsystem.h" },
		{ "ModuleRelativePath", "TestSessionSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCreateSessionCompleteEvent_MetaData[] = {
		{ "Category", "Sessions" },
		{ "ModuleRelativePath", "TestSessionSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCreateSessionCompleteEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTestSessionSubsystem_CreateSession, "CreateSession" }, // 2810323668
		{ &Z_Construct_UFunction_UTestSessionSubsystem_DestroySession, "DestroySession" }, // 4272438367
		{ &Z_Construct_UFunction_UTestSessionSubsystem_EndSession, "EndSession" }, // 1272994218
		{ &Z_Construct_UFunction_UTestSessionSubsystem_FindSessions, "FindSessions" }, // 3633487715
		{ &Z_Construct_UFunction_UTestSessionSubsystem_StartSession, "StartSession" }, // 2431778275
		{ &Z_Construct_UFunction_UTestSessionSubsystem_UpdateSession, "UpdateSession" }, // 4161766897
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestSessionSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTestSessionSubsystem_Statics::NewProp_OnCreateSessionCompleteEvent = { "OnCreateSessionCompleteEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestSessionSubsystem, OnCreateSessionCompleteEvent), Z_Construct_UDelegateFunction_TestProject_CSOnCreateSessionComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCreateSessionCompleteEvent_MetaData), NewProp_OnCreateSessionCompleteEvent_MetaData) }; // 2595598521
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestSessionSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestSessionSubsystem_Statics::NewProp_OnCreateSessionCompleteEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestSessionSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTestSessionSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestSessionSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestSessionSubsystem_Statics::ClassParams = {
	&UTestSessionSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTestSessionSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTestSessionSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestSessionSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestSessionSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTestSessionSubsystem()
{
	if (!Z_Registration_Info_UClass_UTestSessionSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestSessionSubsystem.OuterSingleton, Z_Construct_UClass_UTestSessionSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestSessionSubsystem.OuterSingleton;
}
template<> TESTPROJECT_API UClass* StaticClass<UTestSessionSubsystem>()
{
	return UTestSessionSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTestSessionSubsystem);
UTestSessionSubsystem::~UTestSessionSubsystem() {}
// End Class UTestSessionSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TestSessionSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTestSessionSubsystem, UTestSessionSubsystem::StaticClass, TEXT("UTestSessionSubsystem"), &Z_Registration_Info_UClass_UTestSessionSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestSessionSubsystem), 2055391253U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TestSessionSubsystem_h_1320575084(TEXT("/Script/TestProject"),
	Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TestSessionSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TestSessionSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
