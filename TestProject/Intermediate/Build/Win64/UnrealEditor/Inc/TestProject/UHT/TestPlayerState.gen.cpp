// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/TestPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestPlayerState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
TESTPROJECT_API UClass* Z_Construct_UClass_ATestPlayerState();
TESTPROJECT_API UClass* Z_Construct_UClass_ATestPlayerState_NoRegister();
TESTPROJECT_API UEnum* Z_Construct_UEnum_TestProject_ECharacterClass();
UPackage* Z_Construct_UPackage__Script_TestProject();
// End Cross Module References

// Begin Enum ECharacterClass
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterClass;
static UEnum* ECharacterClass_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECharacterClass.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECharacterClass.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TestProject_ECharacterClass, (UObject*)Z_Construct_UPackage__Script_TestProject(), TEXT("ECharacterClass"));
	}
	return Z_Registration_Info_UEnum_ECharacterClass.OuterSingleton;
}
template<> TESTPROJECT_API UEnum* StaticEnum<ECharacterClass>()
{
	return ECharacterClass_StaticEnum();
}
struct Z_Construct_UEnum_TestProject_ECharacterClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "TestPlayerState.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ECharacterClass::None" },
		{ "Warrior.DisplayName", "Warrior" },
		{ "Warrior.Name", "ECharacterClass::Warrior" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECharacterClass::None", (int64)ECharacterClass::None },
		{ "ECharacterClass::Warrior", (int64)ECharacterClass::Warrior },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TestProject_ECharacterClass_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TestProject,
	nullptr,
	"ECharacterClass",
	"ECharacterClass",
	Z_Construct_UEnum_TestProject_ECharacterClass_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TestProject_ECharacterClass_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TestProject_ECharacterClass_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TestProject_ECharacterClass_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TestProject_ECharacterClass()
{
	if (!Z_Registration_Info_UEnum_ECharacterClass.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterClass.InnerSingleton, Z_Construct_UEnum_TestProject_ECharacterClass_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECharacterClass.InnerSingleton;
}
// End Enum ECharacterClass

// Begin Class ATestPlayerState Function GetCharacterClass
struct Z_Construct_UFunction_ATestPlayerState_GetCharacterClass_Statics
{
	struct TestPlayerState_eventGetCharacterClass_Parms
	{
		ECharacterClass ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Class" },
		{ "ModuleRelativePath", "TestPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATestPlayerState_GetCharacterClass_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATestPlayerState_GetCharacterClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TestPlayerState_eventGetCharacterClass_Parms, ReturnValue), Z_Construct_UEnum_TestProject_ECharacterClass, METADATA_PARAMS(0, nullptr) }; // 1335603180
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestPlayerState_GetCharacterClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestPlayerState_GetCharacterClass_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestPlayerState_GetCharacterClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayerState_GetCharacterClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestPlayerState_GetCharacterClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestPlayerState, nullptr, "GetCharacterClass", nullptr, nullptr, Z_Construct_UFunction_ATestPlayerState_GetCharacterClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayerState_GetCharacterClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATestPlayerState_GetCharacterClass_Statics::TestPlayerState_eventGetCharacterClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayerState_GetCharacterClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestPlayerState_GetCharacterClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATestPlayerState_GetCharacterClass_Statics::TestPlayerState_eventGetCharacterClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATestPlayerState_GetCharacterClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestPlayerState_GetCharacterClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATestPlayerState::execGetCharacterClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ECharacterClass*)Z_Param__Result=P_THIS->GetCharacterClass();
	P_NATIVE_END;
}
// End Class ATestPlayerState Function GetCharacterClass

// Begin Class ATestPlayerState Function SetCharacterClass
struct Z_Construct_UFunction_ATestPlayerState_SetCharacterClass_Statics
{
	struct TestPlayerState_eventSetCharacterClass_Parms
	{
		ECharacterClass NewClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Class" },
		{ "ModuleRelativePath", "TestPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewClass_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATestPlayerState_SetCharacterClass_Statics::NewProp_NewClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATestPlayerState_SetCharacterClass_Statics::NewProp_NewClass = { "NewClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TestPlayerState_eventSetCharacterClass_Parms, NewClass), Z_Construct_UEnum_TestProject_ECharacterClass, METADATA_PARAMS(0, nullptr) }; // 1335603180
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestPlayerState_SetCharacterClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestPlayerState_SetCharacterClass_Statics::NewProp_NewClass_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestPlayerState_SetCharacterClass_Statics::NewProp_NewClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayerState_SetCharacterClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestPlayerState_SetCharacterClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestPlayerState, nullptr, "SetCharacterClass", nullptr, nullptr, Z_Construct_UFunction_ATestPlayerState_SetCharacterClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayerState_SetCharacterClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATestPlayerState_SetCharacterClass_Statics::TestPlayerState_eventSetCharacterClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestPlayerState_SetCharacterClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestPlayerState_SetCharacterClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATestPlayerState_SetCharacterClass_Statics::TestPlayerState_eventSetCharacterClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATestPlayerState_SetCharacterClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestPlayerState_SetCharacterClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATestPlayerState::execSetCharacterClass)
{
	P_GET_ENUM(ECharacterClass,Z_Param_NewClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCharacterClass(ECharacterClass(Z_Param_NewClass));
	P_NATIVE_END;
}
// End Class ATestPlayerState Function SetCharacterClass

// Begin Class ATestPlayerState
void ATestPlayerState::StaticRegisterNativesATestPlayerState()
{
	UClass* Class = ATestPlayerState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCharacterClass", &ATestPlayerState::execGetCharacterClass },
		{ "SetCharacterClass", &ATestPlayerState::execSetCharacterClass },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestPlayerState);
UClass* Z_Construct_UClass_ATestPlayerState_NoRegister()
{
	return ATestPlayerState::StaticClass();
}
struct Z_Construct_UClass_ATestPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TestPlayerState.h" },
		{ "ModuleRelativePath", "TestPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TestPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseAttributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TestPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassAttributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TestPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterClass_MetaData[] = {
		{ "ModuleRelativePath", "TestPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAttributeSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClassAttributeSet;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterClass_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATestPlayerState_GetCharacterClass, "GetCharacterClass" }, // 2808526611
		{ &Z_Construct_UFunction_ATestPlayerState_SetCharacterClass, "SetCharacterClass" }, // 2504100359
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayerState_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayerState, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayerState_Statics::NewProp_BaseAttributeSet = { "BaseAttributeSet", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayerState, BaseAttributeSet), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseAttributeSet_MetaData), NewProp_BaseAttributeSet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestPlayerState_Statics::NewProp_ClassAttributeSet = { "ClassAttributeSet", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayerState, ClassAttributeSet), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassAttributeSet_MetaData), NewProp_ClassAttributeSet_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATestPlayerState_Statics::NewProp_CharacterClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATestPlayerState_Statics::NewProp_CharacterClass = { "CharacterClass", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestPlayerState, CharacterClass), Z_Construct_UEnum_TestProject_ECharacterClass, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterClass_MetaData), NewProp_CharacterClass_MetaData) }; // 1335603180
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATestPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayerState_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayerState_Statics::NewProp_BaseAttributeSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayerState_Statics::NewProp_ClassAttributeSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayerState_Statics::NewProp_CharacterClass_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestPlayerState_Statics::NewProp_CharacterClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATestPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATestPlayerState_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ATestPlayerState, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestPlayerState_Statics::ClassParams = {
	&ATestPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATestPlayerState_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayerState_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ATestPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATestPlayerState()
{
	if (!Z_Registration_Info_UClass_ATestPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestPlayerState.OuterSingleton, Z_Construct_UClass_ATestPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATestPlayerState.OuterSingleton;
}
template<> TESTPROJECT_API UClass* StaticClass<ATestPlayerState>()
{
	return ATestPlayerState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATestPlayerState);
ATestPlayerState::~ATestPlayerState() {}
// End Class ATestPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TestPlayerState_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECharacterClass_StaticEnum, TEXT("ECharacterClass"), &Z_Registration_Info_UEnum_ECharacterClass, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1335603180U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATestPlayerState, ATestPlayerState::StaticClass, TEXT("ATestPlayerState"), &Z_Registration_Info_UClass_ATestPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestPlayerState), 2475933602U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TestPlayerState_h_1683823281(TEXT("/Script/TestProject"),
	Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TestPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TestPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TestPlayerState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TestPlayerState_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
