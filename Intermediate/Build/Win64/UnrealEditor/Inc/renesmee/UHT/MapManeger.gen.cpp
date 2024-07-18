// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "renesmee/MapManeger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapManeger() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
RENESMEE_API UClass* Z_Construct_UClass_AMapManeger();
RENESMEE_API UClass* Z_Construct_UClass_AMapManeger_NoRegister();
RENESMEE_API UClass* Z_Construct_UClass_ATileActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_renesmee();
// End Cross Module References

// Begin Class AMapManeger Function CreateMap
struct Z_Construct_UFunction_AMapManeger_CreateMap_Statics
{
	struct MapManeger_eventCreateMap_Parms
	{
		int32 NumTilesX;
		int32 NumTilesY;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "MapManeger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumTilesX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumTilesY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapManeger_CreateMap_Statics::NewProp_NumTilesX = { "NumTilesX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapManeger_eventCreateMap_Parms, NumTilesX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapManeger_CreateMap_Statics::NewProp_NumTilesY = { "NumTilesY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapManeger_eventCreateMap_Parms, NumTilesY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapManeger_CreateMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapManeger_CreateMap_Statics::NewProp_NumTilesX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapManeger_CreateMap_Statics::NewProp_NumTilesY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapManeger_CreateMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapManeger_CreateMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapManeger, nullptr, "CreateMap", nullptr, nullptr, Z_Construct_UFunction_AMapManeger_CreateMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapManeger_CreateMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapManeger_CreateMap_Statics::MapManeger_eventCreateMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapManeger_CreateMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapManeger_CreateMap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapManeger_CreateMap_Statics::MapManeger_eventCreateMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapManeger_CreateMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapManeger_CreateMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapManeger::execCreateMap)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NumTilesX);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumTilesY);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateMap(Z_Param_NumTilesX,Z_Param_NumTilesY);
	P_NATIVE_END;
}
// End Class AMapManeger Function CreateMap

// Begin Class AMapManeger
void AMapManeger::StaticRegisterNativesAMapManeger()
{
	UClass* Class = AMapManeger::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateMap", &AMapManeger::execCreateMap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMapManeger);
UClass* Z_Construct_UClass_AMapManeger_NoRegister()
{
	return AMapManeger::StaticClass();
}
struct Z_Construct_UClass_AMapManeger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MapManeger.h" },
		{ "ModuleRelativePath", "MapManeger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileClass_MetaData[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "MapManeger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "MapManeger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_TileClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TileSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMapManeger_CreateMap, "CreateMap" }, // 3915266790
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapManeger>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMapManeger_Statics::NewProp_TileClass = { "TileClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapManeger, TileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ATileActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileClass_MetaData), NewProp_TileClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapManeger_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapManeger, TileSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSize_MetaData), NewProp_TileSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMapManeger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapManeger_Statics::NewProp_TileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapManeger_Statics::NewProp_TileSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapManeger_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMapManeger_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_renesmee,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapManeger_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMapManeger_Statics::ClassParams = {
	&AMapManeger::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMapManeger_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMapManeger_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMapManeger_Statics::Class_MetaDataParams), Z_Construct_UClass_AMapManeger_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMapManeger()
{
	if (!Z_Registration_Info_UClass_AMapManeger.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMapManeger.OuterSingleton, Z_Construct_UClass_AMapManeger_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMapManeger.OuterSingleton;
}
template<> RENESMEE_API UClass* StaticClass<AMapManeger>()
{
	return AMapManeger::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMapManeger);
AMapManeger::~AMapManeger() {}
// End Class AMapManeger

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_barba_Projetos_Unreal_renesmee_Source_renesmee_MapManeger_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMapManeger, AMapManeger::StaticClass, TEXT("AMapManeger"), &Z_Registration_Info_UClass_AMapManeger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMapManeger), 987807608U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_barba_Projetos_Unreal_renesmee_Source_renesmee_MapManeger_h_3470063468(TEXT("/Script/renesmee"),
	Z_CompiledInDeferFile_FID_Users_barba_Projetos_Unreal_renesmee_Source_renesmee_MapManeger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_barba_Projetos_Unreal_renesmee_Source_renesmee_MapManeger_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
