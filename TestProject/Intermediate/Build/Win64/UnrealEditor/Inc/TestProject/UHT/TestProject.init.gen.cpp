// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestProject_init() {}
	TESTPROJECT_API UFunction* Z_Construct_UDelegateFunction_TestProject_CSOnCreateSessionComplete__DelegateSignature();
	TESTPROJECT_API UFunction* Z_Construct_UDelegateFunction_TestProject_CSOnDestroySessionComplete__DelegateSignature();
	TESTPROJECT_API UFunction* Z_Construct_UDelegateFunction_TestProject_CSOnEndSessionComplete__DelegateSignature();
	TESTPROJECT_API UFunction* Z_Construct_UDelegateFunction_TestProject_CSOnStartSessionComplete__DelegateSignature();
	TESTPROJECT_API UFunction* Z_Construct_UDelegateFunction_TestProject_CSOnUpdateSessionComplete__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TestProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TestProject()
	{
		if (!Z_Registration_Info_UPackage__Script_TestProject.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_TestProject_CSOnCreateSessionComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TestProject_CSOnDestroySessionComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TestProject_CSOnEndSessionComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TestProject_CSOnStartSessionComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TestProject_CSOnUpdateSessionComplete__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TestProject",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xBBD45465,
				0xE3C11182,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TestProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TestProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TestProject(Z_Construct_UPackage__Script_TestProject, TEXT("/Script/TestProject"), Z_Registration_Info_UPackage__Script_TestProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xBBD45465, 0xE3C11182));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
