// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "renesmee/TileMapSaver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileMapSaver() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PAPER2D_API UClass* Z_Construct_UClass_UPaperTileMap_NoRegister();
RENESMEE_API UClass* Z_Construct_UClass_ATileMapSaver();
RENESMEE_API UClass* Z_Construct_UClass_ATileMapSaver_NoRegister();
UPackage* Z_Construct_UPackage__Script_renesmee();
// End Cross Module References

// Begin Class ATileMapSaver Function SaveTileMap
struct Z_Construct_UFunction_ATileMapSaver_SaveTileMap_Statics
{
	struct TileMapSaver_eventSaveTileMap_Parms
	{
		UPaperTileMap* TileMap;
		FString Path;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TileMap" },
		{ "ModuleRelativePath", "TileMapSaver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TileMap;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATileMapSaver_SaveTileMap_Statics::NewProp_TileMap = { "TileMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TileMapSaver_eventSaveTileMap_Parms, TileMap), Z_Construct_UClass_UPaperTileMap_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ATileMapSaver_SaveTileMap_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TileMapSaver_eventSaveTileMap_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATileMapSaver_SaveTileMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATileMapSaver_SaveTileMap_Statics::NewProp_TileMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATileMapSaver_SaveTileMap_Statics::NewProp_Path,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATileMapSaver_SaveTileMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATileMapSaver_SaveTileMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATileMapSaver, nullptr, "SaveTileMap", nullptr, nullptr, Z_Construct_UFunction_ATileMapSaver_SaveTileMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATileMapSaver_SaveTileMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATileMapSaver_SaveTileMap_Statics::TileMapSaver_eventSaveTileMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATileMapSaver_SaveTileMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATileMapSaver_SaveTileMap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATileMapSaver_SaveTileMap_Statics::TileMapSaver_eventSaveTileMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATileMapSaver_SaveTileMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATileMapSaver_SaveTileMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATileMapSaver::execSaveTileMap)
{
	P_GET_OBJECT(UPaperTileMap,Z_Param_TileMap);
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveTileMap(Z_Param_TileMap,Z_Param_Path);
	P_NATIVE_END;
}
// End Class ATileMapSaver Function SaveTileMap

// Begin Class ATileMapSaver
void ATileMapSaver::StaticRegisterNativesATileMapSaver()
{
	UClass* Class = ATileMapSaver::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SaveTileMap", &ATileMapSaver::execSaveTileMap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATileMapSaver);
UClass* Z_Construct_UClass_ATileMapSaver_NoRegister()
{
	return ATileMapSaver::StaticClass();
}
struct Z_Construct_UClass_ATileMapSaver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TileMapSaver.h" },
		{ "ModuleRelativePath", "TileMapSaver.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATileMapSaver_SaveTileMap, "SaveTileMap" }, // 2480611776
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATileMapSaver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATileMapSaver_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_renesmee,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATileMapSaver_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATileMapSaver_Statics::ClassParams = {
	&ATileMapSaver::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATileMapSaver_Statics::Class_MetaDataParams), Z_Construct_UClass_ATileMapSaver_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATileMapSaver()
{
	if (!Z_Registration_Info_UClass_ATileMapSaver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATileMapSaver.OuterSingleton, Z_Construct_UClass_ATileMapSaver_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATileMapSaver.OuterSingleton;
}
template<> RENESMEE_API UClass* StaticClass<ATileMapSaver>()
{
	return ATileMapSaver::StaticClass();
}
ATileMapSaver::ATileMapSaver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATileMapSaver);
ATileMapSaver::~ATileMapSaver() {}
// End Class ATileMapSaver

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_barba_Projetos_Unreal_renesmee_Source_renesmee_TileMapSaver_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATileMapSaver, ATileMapSaver::StaticClass, TEXT("ATileMapSaver"), &Z_Registration_Info_UClass_ATileMapSaver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATileMapSaver), 1249051864U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_barba_Projetos_Unreal_renesmee_Source_renesmee_TileMapSaver_h_2403972204(TEXT("/Script/renesmee"),
	Z_CompiledInDeferFile_FID_Users_barba_Projetos_Unreal_renesmee_Source_renesmee_TileMapSaver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_barba_Projetos_Unreal_renesmee_Source_renesmee_TileMapSaver_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
