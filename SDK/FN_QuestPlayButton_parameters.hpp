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

// Function QuestPlayButton.QuestPlayButton_C.OnLobbyDisconnected
struct UQuestPlayButton_C_OnLobbyDisconnected_Params
{
};

// Function QuestPlayButton.QuestPlayButton_C.UpdateQuestStatus
struct UQuestPlayButton_C_UpdateQuestStatus_Params
{
};

// Function QuestPlayButton.QuestPlayButton_C.GetActiveTileType
struct UQuestPlayButton_C_GetActiveTileType_Params
{
};

// Function QuestPlayButton.QuestPlayButton_C.CalculateCritMissionDifficulty
struct UQuestPlayButton_C_CalculateCritMissionDifficulty_Params
{
	float                                              OverrideMin;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OverrideMax;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OutDifficultyMin;                                         // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OutDifficultyMax;                                         // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestPlayButton.QuestPlayButton_C.SetPlayButtonEnable
struct UQuestPlayButton_C_SetPlayButtonEnable_Params
{
	bool                                               Enable;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestPlayButton.QuestPlayButton_C.CanPlayQuest
struct UQuestPlayButton_C_CanPlayQuest_Params
{
	bool                                               CanPlay;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestPlayButton.QuestPlayButton_C.CanNavigateToQuestObjective
struct UQuestPlayButton_C_CanNavigateToQuestObjective_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function QuestPlayButton.QuestPlayButton_C.AttemptPlayQuest
struct UQuestPlayButton_C_AttemptPlayQuest_Params
{
};

// Function QuestPlayButton.QuestPlayButton_C.AttemptNavigationToQuestObjective
struct UQuestPlayButton_C_AttemptNavigationToQuestObjective_Params
{
};

// Function QuestPlayButton.QuestPlayButton_C.SetQuest
struct UQuestPlayButton_C_SetQuest_Params
{
	class UFortQuestItem*                              Quest;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestPlayButton.QuestPlayButton_C.Construct
struct UQuestPlayButton_C_Construct_Params
{
};

// Function QuestPlayButton.QuestPlayButton_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature
struct UQuestPlayButton_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestPlayButton.QuestPlayButton_C.ForceClick
struct UQuestPlayButton_C_ForceClick_Params
{
};

// Function QuestPlayButton.QuestPlayButton_C.OnMatchmakingStarted
struct UQuestPlayButton_C_OnMatchmakingStarted_Params
{
};

// Function QuestPlayButton.QuestPlayButton_C.OnMatchmakingCompleted
struct UQuestPlayButton_C_OnMatchmakingCompleted_Params
{
};

// Function QuestPlayButton.QuestPlayButton_C.OnPlayerStateChanged
struct UQuestPlayButton_C_OnPlayerStateChanged_Params
{
	struct FFortTeamMemberInfo                         PlayerInfo;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function QuestPlayButton.QuestPlayButton_C.Destruct
struct UQuestPlayButton_C_Destruct_Params
{
};

// Function QuestPlayButton.QuestPlayButton_C.Tick
struct UQuestPlayButton_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestPlayButton.QuestPlayButton_C.ExecuteUbergraph_QuestPlayButton
struct UQuestPlayButton_C_ExecuteUbergraph_QuestPlayButton_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
