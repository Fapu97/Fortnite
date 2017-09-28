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

// Function MissionDetailsResearch.MissionDetailsResearch_C.Update Bang State
struct UMissionDetailsResearch_C_Update_Bang_State_Params
{
};

// Function MissionDetailsResearch.MissionDetailsResearch_C.SetCurrentResearchText
struct UMissionDetailsResearch_C_SetCurrentResearchText_Params
{
};

// Function MissionDetailsResearch.MissionDetailsResearch_C.ToggleTimer
struct UMissionDetailsResearch_C_ToggleTimer_Params
{
	bool                                               Enable;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionDetailsResearch.MissionDetailsResearch_C.Update UI
struct UMissionDetailsResearch_C_Update_UI_Params
{
};

// Function MissionDetailsResearch.MissionDetailsResearch_C.BindEvents
struct UMissionDetailsResearch_C_BindEvents_Params
{
};

// Function MissionDetailsResearch.MissionDetailsResearch_C.GetValues
struct UMissionDetailsResearch_C_GetValues_Params
{
};

// Function MissionDetailsResearch.MissionDetailsResearch_C.SetUnclaimedResearchProgressBar
struct UMissionDetailsResearch_C_SetUnclaimedResearchProgressBar_Params
{
};

// Function MissionDetailsResearch.MissionDetailsResearch_C.GetUnclaimedResearchValues
struct UMissionDetailsResearch_C_GetUnclaimedResearchValues_Params
{
	bool                                               Success;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionDetailsResearch.MissionDetailsResearch_C.SetUnclaimedResearchText
struct UMissionDetailsResearch_C_SetUnclaimedResearchText_Params
{
};

// Function MissionDetailsResearch.MissionDetailsResearch_C.SetClaimedResearchText
struct UMissionDetailsResearch_C_SetClaimedResearchText_Params
{
};

// Function MissionDetailsResearch.MissionDetailsResearch_C.GetClaimedResearchValues
struct UMissionDetailsResearch_C_GetClaimedResearchValues_Params
{
	bool                                               Successful;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionDetailsResearch.MissionDetailsResearch_C.Construct
struct UMissionDetailsResearch_C_Construct_Params
{
};

// Function MissionDetailsResearch.MissionDetailsResearch_C.ClaimedResearchItemCountChanged
struct UMissionDetailsResearch_C_ClaimedResearchItemCountChanged_Params
{
	class UFortItemDefinition*                         Research_Item_Definition;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Delta;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionDetailsResearch.MissionDetailsResearch_C.BndEvt__CollectButton_K2Node_ComponentBoundEvent_17_CommonButtonClicked__DelegateSignature
struct UMissionDetailsResearch_C_BndEvt__CollectButton_K2Node_ComponentBoundEvent_17_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionDetailsResearch.MissionDetailsResearch_C.OnCollectorsClaimed
struct UMissionDetailsResearch_C_OnCollectorsClaimed_Params
{
	TArray<struct FFortItemInstanceQuantityPair>       Collector_Rewards;                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function MissionDetailsResearch.MissionDetailsResearch_C.Destruct
struct UMissionDetailsResearch_C_Destruct_Params
{
};

// Function MissionDetailsResearch.MissionDetailsResearch_C.UnclaimedResearchRefreshTimerTick
struct UMissionDetailsResearch_C_UnclaimedResearchRefreshTimerTick_Params
{
};

// Function MissionDetailsResearch.MissionDetailsResearch_C.HomebaseChanged
struct UMissionDetailsResearch_C_HomebaseChanged_Params
{
	struct FUniqueNetIdRepl                            UniqueId;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function MissionDetailsResearch.MissionDetailsResearch_C.ExecuteUbergraph_MissionDetailsResearch
struct UMissionDetailsResearch_C_ExecuteUbergraph_MissionDetailsResearch_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
