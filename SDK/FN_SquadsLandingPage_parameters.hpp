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

// Function SquadsLandingPage.SquadsLandingPage_C.Update Defender Squad Bang State
struct USquadsLandingPage_C_Update_Defender_Squad_Bang_State_Params
{
};

// Function SquadsLandingPage.SquadsLandingPage_C.Update Survivor Squad Bang State
struct USquadsLandingPage_C_Update_Survivor_Squad_Bang_State_Params
{
};

// Function SquadsLandingPage.SquadsLandingPage_C.Get_LockedExpeditionsTile_ToolTipWidget
struct USquadsLandingPage_C_Get_LockedExpeditionsTile_ToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function SquadsLandingPage.SquadsLandingPage_C.Get_ExpeditionSquadsTile_ToolTipWidget
struct USquadsLandingPage_C_Get_ExpeditionSquadsTile_ToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function SquadsLandingPage.SquadsLandingPage_C.Get_OutpostSquadsTile_ToolTipWidget
struct USquadsLandingPage_C_Get_OutpostSquadsTile_ToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function SquadsLandingPage.SquadsLandingPage_C.Get_SurvivorSquadsTile_ToolTipWidget
struct USquadsLandingPage_C_Get_SurvivorSquadsTile_ToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function SquadsLandingPage.SquadsLandingPage_C.Refresh Expedition Squad Tile
struct USquadsLandingPage_C_Refresh_Expedition_Squad_Tile_Params
{
	struct FUniqueNetIdRepl                            UniqueId;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function SquadsLandingPage.SquadsLandingPage_C.HandleSquadSlotOp
struct USquadsLandingPage_C_HandleSquadSlotOp_Params
{
	struct FName                                       SquadId;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SlotIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SquadsLandingPage.SquadsLandingPage_C.UnbindNavigationDelegates
struct USquadsLandingPage_C_UnbindNavigationDelegates_Params
{
};

// Function SquadsLandingPage.SquadsLandingPage_C.BindNavigationDelegates
struct USquadsLandingPage_C_BindNavigationDelegates_Params
{
};

// Function SquadsLandingPage.SquadsLandingPage_C.Update Expedition Squad Bang State
struct USquadsLandingPage_C_Update_Expedition_Squad_Bang_State_Params
{
};

// Function SquadsLandingPage.SquadsLandingPage_C.Construct
struct USquadsLandingPage_C_Construct_Params
{
};

// Function SquadsLandingPage.SquadsLandingPage_C.OnActivated
struct USquadsLandingPage_C_OnActivated_Params
{
};

// Function SquadsLandingPage.SquadsLandingPage_C.HandleOnRefreshSummary
struct USquadsLandingPage_C_HandleOnRefreshSummary_Params
{
};

// Function SquadsLandingPage.SquadsLandingPage_C.OnDeactivated
struct USquadsLandingPage_C_OnDeactivated_Params
{
};

// Function SquadsLandingPage.SquadsLandingPage_C.OnExpeditionNavigationOp
struct USquadsLandingPage_C_OnExpeditionNavigationOp_Params
{
};

// Function SquadsLandingPage.SquadsLandingPage_C.HandleOnPlayerInfoChanged
struct USquadsLandingPage_C_HandleOnPlayerInfoChanged_Params
{
	struct FUniqueNetIdRepl                            UniqueId;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function SquadsLandingPage.SquadsLandingPage_C.ExecuteUbergraph_SquadsLandingPage
struct USquadsLandingPage_C_ExecuteUbergraph_SquadsLandingPage_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
