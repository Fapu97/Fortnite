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

// Function MissionDetails.MissionDetails_C.PopulateModifiers
struct UMissionDetails_C_PopulateModifiers_Params
{
	TArray<class UFortGameplayModifierItemDefinition*> inModifiers;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function MissionDetails.MissionDetails_C.Get Reward Items
struct UMissionDetails_C_Get_Reward_Items_Params
{
	TArray<class UFortItemDefinition*>                 Item_Definitions;                                         // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function MissionDetails.MissionDetails_C.TileTypeChanged
struct UMissionDetails_C_TileTypeChanged_Params
{
};

// Function MissionDetails.MissionDetails_C.CacheDifficulty
struct UMissionDetails_C_CacheDifficulty_Params
{
};

// Function MissionDetails.MissionDetails_C.UnbindTheaterRelatedDelegates
struct UMissionDetails_C_UnbindTheaterRelatedDelegates_Params
{
};

// Function MissionDetails.MissionDetails_C.BindTheaterRelatedDelegates
struct UMissionDetails_C_BindTheaterRelatedDelegates_Params
{
};

// Function MissionDetails.MissionDetails_C.Update Tile Information
struct UMissionDetails_C_Update_Tile_Information_Params
{
};

// Function MissionDetails.MissionDetails_C.OnTheaterDataChanged
struct UMissionDetails_C_OnTheaterDataChanged_Params
{
};

// Function MissionDetails.MissionDetails_C.OnTheaterSeleceted
struct UMissionDetails_C_OnTheaterSeleceted_Params
{
	struct FString                                     TheaterId;                                                // (CPF_Parm, CPF_ZeroConstructor)
};

// Function MissionDetails.MissionDetails_C.HandleTheaterTileClicked
struct UMissionDetails_C_HandleTheaterTileClicked_Params
{
};

// Function MissionDetails.MissionDetails_C.PreConstruct
struct UMissionDetails_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionDetails.MissionDetails_C.Construct
struct UMissionDetails_C_Construct_Params
{
};

// Function MissionDetails.MissionDetails_C.ExecuteUbergraph_MissionDetails
struct UMissionDetails_C_ExecuteUbergraph_MissionDetails_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
