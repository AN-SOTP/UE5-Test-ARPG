// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/TestMenuGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestMenuGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TESTPROJECT_API UClass* Z_Construct_UClass_ATestMenuGameMode();
TESTPROJECT_API UClass* Z_Construct_UClass_ATestMenuGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TestProject();
// End Cross Module References

// Begin Class ATestMenuGameMode
void ATestMenuGameMode::StaticRegisterNativesATestMenuGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestMenuGameMode);
UClass* Z_Construct_UClass_ATestMenuGameMode_NoRegister()
{
	return ATestMenuGameMode::StaticClass();
}
struct Z_Construct_UClass_ATestMenuGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TestMenuGameMode.h" },
		{ "ModuleRelativePath", "TestMenuGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuCamera_MetaData[] = {
		{ "ModuleRelativePath", "TestMenuGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MenuCamera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestMenuGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestMenuGameMode_Statics::NewProp_MenuCamera = { "MenuCamera", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestMenuGameMode, MenuCamera), Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuCamera_MetaData), NewProp_MenuCamera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATestMenuGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestMenuGameMode_Statics::NewProp_MenuCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestMenuGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATestMenuGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestMenuGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestMenuGameMode_Statics::ClassParams = {
	&ATestMenuGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATestMenuGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATestMenuGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestMenuGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATestMenuGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATestMenuGameMode()
{
	if (!Z_Registration_Info_UClass_ATestMenuGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestMenuGameMode.OuterSingleton, Z_Construct_UClass_ATestMenuGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATestMenuGameMode.OuterSingleton;
}
template<> TESTPROJECT_API UClass* StaticClass<ATestMenuGameMode>()
{
	return ATestMenuGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATestMenuGameMode);
ATestMenuGameMode::~ATestMenuGameMode() {}
// End Class ATestMenuGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TestMenuGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATestMenuGameMode, ATestMenuGameMode::StaticClass, TEXT("ATestMenuGameMode"), &Z_Registration_Info_UClass_ATestMenuGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestMenuGameMode), 1140098989U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TestMenuGameMode_h_1160119264(TEXT("/Script/TestProject"),
	Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TestMenuGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TestMenuGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
