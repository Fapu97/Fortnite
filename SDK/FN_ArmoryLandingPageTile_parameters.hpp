#pragma once

// Fortnite (Alpha) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ArmoryLandingPageTile.ArmoryLandingPageTile_C.IsTileLocked
struct UArmoryLandingPageTile_C_IsTileLocked_Params
{
	bool                                               IsLocked;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ArmoryLandingPageTile.ArmoryLandingPageTile_C.Update Locked State
struct UArmoryLandingPageTile_C_Update_Locked_State_Params
{
	bool                                               InLocked;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ArmoryLandingPageTile.ArmoryLandingPageTile_C.SetContentImage
struct UArmoryLandingPageTile_C_SetContentImage_Params
{
	class UTexture2D*                                  InTexture;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ArmoryLandingPageTile.ArmoryLandingPageTile_C.PreConstruct
struct UArmoryLandingPageTile_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ArmoryLandingPageTile.ArmoryLandingPageTile_C.Construct
struct UArmoryLandingPageTile_C_Construct_Params
{
};

// Function ArmoryLandingPageTile.ArmoryLandingPageTile_C.ExecuteUbergraph_ArmoryLandingPageTile
struct UArmoryLandingPageTile_C_ExecuteUbergraph_ArmoryLandingPageTile_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
