// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "renesmee/TileActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
RENESMEE_API UClass* Z_Construct_UClass_ATileActor();
RENESMEE_API UClass* Z_Construct_UClass_ATileActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_renesmee();
// End Cross Module References

// Begin Class ATileActor
void ATileActor::StaticRegisterNativesATileActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATileActor);
UClass* Z_Construct_UClass_ATileActor_NoRegister()
{
	return ATileActor::StaticClass();
}
struct Z_Construct_UClass_ATileActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TileActor.h" },
		{ "ModuleRelativePath", "TileActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileMesh_MetaData[] = {
		{ "Category", "Tile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TileActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TileMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATileActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATileActor_Statics::NewProp_TileMesh = { "TileMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATileActor, TileMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileMesh_MetaData), NewProp_TileMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATileActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileActor_Statics::NewProp_TileMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATileActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATileActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_renesmee,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATileActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATileActor_Statics::ClassParams = {
	&ATileActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATileActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATileActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATileActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ATileActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATileActor()
{
	if (!Z_Registration_Info_UClass_ATileActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATileActor.OuterSingleton, Z_Construct_UClass_ATileActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATileActor.OuterSingleton;
}
template<> RENESMEE_API UClass* StaticClass<ATileActor>()
{
	return ATileActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATileActor);
ATileActor::~ATileActor() {}
// End Class ATileActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_barba_Projetos_Unreal_renesmee_Source_renesmee_TileActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATileActor, ATileActor::StaticClass, TEXT("ATileActor"), &Z_Registration_Info_UClass_ATileActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATileActor), 380140512U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_barba_Projetos_Unreal_renesmee_Source_renesmee_TileActor_h_3930891965(TEXT("/Script/renesmee"),
	Z_CompiledInDeferFile_FID_Users_barba_Projetos_Unreal_renesmee_Source_renesmee_TileActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_barba_Projetos_Unreal_renesmee_Source_renesmee_TileActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
