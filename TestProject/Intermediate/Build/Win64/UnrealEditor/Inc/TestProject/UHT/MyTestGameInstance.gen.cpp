// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/MyTestGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTestGameInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
TESTPROJECT_API UClass* Z_Construct_UClass_UMyTestGameInstance();
TESTPROJECT_API UClass* Z_Construct_UClass_UMyTestGameInstance_NoRegister();
TESTPROJECT_API UEnum* Z_Construct_UEnum_TestProject_ECharacterClass();
UPackage* Z_Construct_UPackage__Script_TestProject();
// End Cross Module References

// Begin Class UMyTestGameInstance Function GetSelectedClass
struct Z_Construct_UFunction_UMyTestGameInstance_GetSelectedClass_Statics
{
	struct MyTestGameInstance_eventGetSelectedClass_Parms
	{
		ECharacterClass ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "MyTestGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMyTestGameInstance_GetSelectedClass_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMyTestGameInstance_GetSelectedClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyTestGameInstance_eventGetSelectedClass_Parms, ReturnValue), Z_Construct_UEnum_TestProject_ECharacterClass, METADATA_PARAMS(0, nullptr) }; // 1335603180
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyTestGameInstance_GetSelectedClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyTestGameInstance_GetSelectedClass_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyTestGameInstance_GetSelectedClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyTestGameInstance_GetSelectedClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyTestGameInstance_GetSelectedClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyTestGameInstance, nullptr, "GetSelectedClass", nullptr, nullptr, Z_Construct_UFunction_UMyTestGameInstance_GetSelectedClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyTestGameInstance_GetSelectedClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyTestGameInstance_GetSelectedClass_Statics::MyTestGameInstance_eventGetSelectedClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyTestGameInstance_GetSelectedClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyTestGameInstance_GetSelectedClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyTestGameInstance_GetSelectedClass_Statics::MyTestGameInstance_eventGetSelectedClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyTestGameInstance_GetSelectedClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyTestGameInstance_GetSelectedClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyTestGameInstance::execGetSelectedClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ECharacterClass*)Z_Param__Result=P_THIS->GetSelectedClass();
	P_NATIVE_END;
}
// End Class UMyTestGameInstance Function GetSelectedClass

// Begin Class UMyTestGameInstance Function SetSelectedClass
struct Z_Construct_UFunction_UMyTestGameInstance_SetSelectedClass_Statics
{
	struct MyTestGameInstance_eventSetSelectedClass_Parms
	{
		ECharacterClass NewClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "MyTestGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewClass_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMyTestGameInstance_SetSelectedClass_Statics::NewProp_NewClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMyTestGameInstance_SetSelectedClass_Statics::NewProp_NewClass = { "NewClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyTestGameInstance_eventSetSelectedClass_Parms, NewClass), Z_Construct_UEnum_TestProject_ECharacterClass, METADATA_PARAMS(0, nullptr) }; // 1335603180
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyTestGameInstance_SetSelectedClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyTestGameInstance_SetSelectedClass_Statics::NewProp_NewClass_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyTestGameInstance_SetSelectedClass_Statics::NewProp_NewClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyTestGameInstance_SetSelectedClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyTestGameInstance_SetSelectedClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyTestGameInstance, nullptr, "SetSelectedClass", nullptr, nullptr, Z_Construct_UFunction_UMyTestGameInstance_SetSelectedClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyTestGameInstance_SetSelectedClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyTestGameInstance_SetSelectedClass_Statics::MyTestGameInstance_eventSetSelectedClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyTestGameInstance_SetSelectedClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyTestGameInstance_SetSelectedClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyTestGameInstance_SetSelectedClass_Statics::MyTestGameInstance_eventSetSelectedClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyTestGameInstance_SetSelectedClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyTestGameInstance_SetSelectedClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyTestGameInstance::execSetSelectedClass)
{
	P_GET_ENUM(ECharacterClass,Z_Param_NewClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSelectedClass(ECharacterClass(Z_Param_NewClass));
	P_NATIVE_END;
}
// End Class UMyTestGameInstance Function SetSelectedClass

// Begin Class UMyTestGameInstance
void UMyTestGameInstance::StaticRegisterNativesUMyTestGameInstance()
{
	UClass* Class = UMyTestGameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSelectedClass", &UMyTestGameInstance::execGetSelectedClass },
		{ "SetSelectedClass", &UMyTestGameInstance::execSetSelectedClass },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyTestGameInstance);
UClass* Z_Construct_UClass_UMyTestGameInstance_NoRegister()
{
	return UMyTestGameInstance::StaticClass();
}
struct Z_Construct_UClass_UMyTestGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyTestGameInstance.h" },
		{ "ModuleRelativePath", "MyTestGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedClass_MetaData[] = {
		{ "ModuleRelativePath", "MyTestGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectedClass_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectedClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyTestGameInstance_GetSelectedClass, "GetSelectedClass" }, // 313706187
		{ &Z_Construct_UFunction_UMyTestGameInstance_SetSelectedClass, "SetSelectedClass" }, // 200573263
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyTestGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMyTestGameInstance_Statics::NewProp_SelectedClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMyTestGameInstance_Statics::NewProp_SelectedClass = { "SelectedClass", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyTestGameInstance, SelectedClass), Z_Construct_UEnum_TestProject_ECharacterClass, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedClass_MetaData), NewProp_SelectedClass_MetaData) }; // 1335603180
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyTestGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyTestGameInstance_Statics::NewProp_SelectedClass_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyTestGameInstance_Statics::NewProp_SelectedClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyTestGameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyTestGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyTestGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyTestGameInstance_Statics::ClassParams = {
	&UMyTestGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMyTestGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyTestGameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyTestGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyTestGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyTestGameInstance()
{
	if (!Z_Registration_Info_UClass_UMyTestGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyTestGameInstance.OuterSingleton, Z_Construct_UClass_UMyTestGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyTestGameInstance.OuterSingleton;
}
template<> TESTPROJECT_API UClass* StaticClass<UMyTestGameInstance>()
{
	return UMyTestGameInstance::StaticClass();
}
UMyTestGameInstance::UMyTestGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyTestGameInstance);
UMyTestGameInstance::~UMyTestGameInstance() {}
// End Class UMyTestGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_MyTestGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyTestGameInstance, UMyTestGameInstance::StaticClass, TEXT("UMyTestGameInstance"), &Z_Registration_Info_UClass_UMyTestGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyTestGameInstance), 4027406475U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_MyTestGameInstance_h_1581207548(TEXT("/Script/TestProject"),
	Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_MyTestGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_MyTestGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
