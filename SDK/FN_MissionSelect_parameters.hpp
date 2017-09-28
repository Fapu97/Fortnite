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

// Function MissionSelect.MissionSelect_C.HandleCheckingUpdate
struct UMissionSelect_C_HandleCheckingUpdate_Params
{
	bool                                               bStarted;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionSelect.MissionSelect_C.UpdateBackButtonState
struct UMissionSelect_C_UpdateBackButtonState_Params
{
};

// Function MissionSelect.MissionSelect_C.SetConning
struct UMissionSelect_C_SetConning_Params
{
};

// Function MissionSelect.MissionSelect_C.OnLobbyStarted
struct UMissionSelect_C_OnLobbyStarted_Params
{
};

// Function MissionSelect.MissionSelect_C.HandleBack
struct UMissionSelect_C_HandleBack_Params
{
	bool                                               bCancelMatchmaking;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionSelect.MissionSelect_C.OnPanCamera
struct UMissionSelect_C_OnPanCamera_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionSelect.MissionSelect_C.OnInputMethodChanged
struct UMissionSelect_C_OnInputMethodChanged_Params
{
	bool                                               IsUsingGamepad;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionSelect.MissionSelect_C.UpdateActionDisplayState
struct UMissionSelect_C_UpdateActionDisplayState_Params
{
};

// Function MissionSelect.MissionSelect_C.OnPinnedQuestsChanged
struct UMissionSelect_C_OnPinnedQuestsChanged_Params
{
};

// Function MissionSelect.MissionSelect_C.OnInputRewardsInfo
struct UMissionSelect_C_OnInputRewardsInfo_Params
{
	bool                                               Commited;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionSelect.MissionSelect_C.ShowRewardsInfo
struct UMissionSelect_C_ShowRewardsInfo_Params
{
};

// Function MissionSelect.MissionSelect_C.ConstructMissionInfoModal
struct UMissionSelect_C_ConstructMissionInfoModal_Params
{
};

// Function MissionSelect.MissionSelect_C.Handle_OnNavigation
struct UMissionSelect_C_Handle_OnNavigation_Params
{
};

// Function MissionSelect.MissionSelect_C.GetCurrentQuest
struct UMissionSelect_C_GetCurrentQuest_Params
{
	class UFortQuestItem*                              Current_Quest;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionSelect.MissionSelect_C.PopulateQuests
struct UMissionSelect_C_PopulateQuests_Params
{
};

// Function MissionSelect.MissionSelect_C.IterateCurrentQuest
struct UMissionSelect_C_IterateCurrentQuest_Params
{
};

// Function MissionSelect.MissionSelect_C.OnQuestsUpdated
struct UMissionSelect_C_OnQuestsUpdated_Params
{
};

// Function MissionSelect.MissionSelect_C.RegisterEvents
struct UMissionSelect_C_RegisterEvents_Params
{
};

// Function MissionSelect.MissionSelect_C.OnFindPinnedQuest
struct UMissionSelect_C_OnFindPinnedQuest_Params
{
	bool                                               Commited;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionSelect.MissionSelect_C.CanGotoQuest
struct UMissionSelect_C_CanGotoQuest_Params
{
	class UFortQuestItem*                              Quest;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bCanGotoQuest;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionSelect.MissionSelect_C.ShowMissionInfo
struct UMissionSelect_C_ShowMissionInfo_Params
{
};

// Function MissionSelect.MissionSelect_C.OnInputInfo
struct UMissionSelect_C_OnInputInfo_Params
{
	bool                                               Commited;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionSelect.MissionSelect_C.OnInputCancel
struct UMissionSelect_C_OnInputCancel_Params
{
	bool                                               Commited;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionSelect.MissionSelect_C.InitializeInput
struct UMissionSelect_C_InitializeInput_Params
{
};

// Function MissionSelect.MissionSelect_C.DialogResult_FF250087417217093F39B69B50E4ACC0
struct UMissionSelect_C_DialogResult_FF250087417217093F39B69B50E4ACC0_Params
{
	struct FName                                       ResultName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionSelect.MissionSelect_C.OnActivated
struct UMissionSelect_C_OnActivated_Params
{
};

// Function MissionSelect.MissionSelect_C.Construct
struct UMissionSelect_C_Construct_Params
{
};

// Function MissionSelect.MissionSelect_C.OnDeactivated
struct UMissionSelect_C_OnDeactivated_Params
{
};

// Function MissionSelect.MissionSelect_C.OnShowCancelConfirmationPrompt
struct UMissionSelect_C_OnShowCancelConfirmationPrompt_Params
{
};

// Function MissionSelect.MissionSelect_C.SelectedMissionChanged
struct UMissionSelect_C_SelectedMissionChanged_Params
{
};

// Function MissionSelect.MissionSelect_C.OnTravellingToLobby
struct UMissionSelect_C_OnTravellingToLobby_Params
{
};

// Function MissionSelect.MissionSelect_C.ExecuteUbergraph_MissionSelect
struct UMissionSelect_C_ExecuteUbergraph_MissionSelect_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
