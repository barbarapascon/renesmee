// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TileMapSaver.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPaperTileMap;
#ifdef RENESMEE_TileMapSaver_generated_h
#error "TileMapSaver.generated.h already included, missing '#pragma once' in TileMapSaver.h"
#endif
#define RENESMEE_TileMapSaver_generated_h

#define FID_Users_barba_Projetos_Unreal_renesmee_Source_renesmee_TileMapSaver_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSaveTileMap);


#define FID_Users_barba_Projetos_Unreal_renesmee_Source_renesmee_TileMapSaver_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATileMapSaver(); \
	friend struct Z_Construct_UClass_ATileMapSaver_Statics; \
public: \
	DECLARE_CLASS(ATileMapSaver, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/renesmee"), NO_API) \
	DECLARE_SERIALIZER(ATileMapSaver)


#define FID_Users_barba_Projetos_Unreal_renesmee_Source_renesmee_TileMapSaver_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATileMapSaver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATileMapSaver(ATileMapSaver&&); \
	ATileMapSaver(const ATileMapSaver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATileMapSaver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATileMapSaver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATileMapSaver) \
	NO_API virtual ~ATileMapSaver();


#define FID_Users_barba_Projetos_Unreal_renesmee_Source_renesmee_TileMapSaver_h_11_PROLOG
#define FID_Users_barba_Projetos_Unreal_renesmee_Source_renesmee_TileMapSaver_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_barba_Projetos_Unreal_renesmee_Source_renesmee_TileMapSaver_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_barba_Projetos_Unreal_renesmee_Source_renesmee_TileMapSaver_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_barba_Projetos_Unreal_renesmee_Source_renesmee_TileMapSaver_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RENESMEE_API UClass* StaticClass<class ATileMapSaver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_barba_Projetos_Unreal_renesmee_Source_renesmee_TileMapSaver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
