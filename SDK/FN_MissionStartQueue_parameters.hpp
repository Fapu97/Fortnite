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

// Function MissionStartQueue.MissionStartQueue_C.IsCriticalMission
struct UMissionStartQueue_C_IsCriticalMission_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MissionStartQueue.MissionStartQueue_C.DisplayCheckForUpdateMessage
struct UMissionStartQueue_C_DisplayCheckForUpdateMessage_Params
{
};

// Function MissionStartQueue.MissionStartQueue_C.OnDifficultySelected
struct UMissionStartQueue_C_OnDifficultySelected_Params
{
	int                                                Difficulty_Index;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Min_Difficulty_Index;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               UseQuestPlayIfAvailable;                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionStartQueue.MissionStartQueue_C.UpdateIsUserMatchmakingOnLobbyStarted
struct UMissionStartQueue_C_UpdateIsUserMatchmakingOnLobbyStarted_Params
{
};

// Function MissionStartQueue.MissionStartQueue_C.UpdateIsUserMatchmakingOnMatchmakingCompleteCancelled
struct UMissionStartQueue_C_UpdateIsUserMatchmakingOnMatchmakingCompleteCancelled_Params
{
};

// Function MissionStartQueue.MissionStartQueue_C.UpdateIsUserMatchmakingForPartyState
struct UMissionStartQueue_C_UpdateIsUserMatchmakingForPartyState_Params
{
};

// Function MissionStartQueue.MissionStartQueue_C.GetIsUserMatchmaking
struct UMissionStartQueue_C_GetIsUserMatchmaking_Params
{
	bool                                               IsUserMatchmaking;                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionStartQueue.MissionStartQueue_C.CalculateQueueState
struct UMissionStartQueue_C_CalculateQueueState_Params
{
	TEnumAsByte<EMissionStartQueueState>               State;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionStartQueue.MissionStartQueue_C.UpdateMatchmakingHeaderText
struct UMissionStartQueue_C_UpdateMatchmakingHeaderText_Params
{
	TEnumAsByte<EMatchmakingState>                     MatchmakingState;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionStartQueue.MissionStartQueue_C.ConstructStreamingInstallProgressBar
struct UMissionStartQueue_C_ConstructStreamingInstallProgressBar_Params
{
};

// Function MissionStartQueue.MissionStartQueue_C.IsAllContentInstalled
struct UMissionStartQueue_C_IsAllContentInstalled_Params
{
	bool                                               NewParam;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionStartQueue.MissionStartQueue_C.BindEvents
struct UMissionStartQueue_C_BindEvents_Params
{
};

// Function MissionStartQueue.MissionStartQueue_C.UpdateMatchmakingMessageText
struct UMissionStartQueue_C_UpdateMatchmakingMessageText_Params
{
};

// Function MissionStartQueue.MissionStartQueue_C.CancelMatchmaking
struct UMissionStartQueue_C_CancelMatchmaking_Params
{
	bool                                               Play_Sound;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionStartQueue.MissionStartQueue_C.IsActiveTileOutpost
struct UMissionStartQueue_C_IsActiveTileOutpost_Params
{
	bool                                               Result;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionStartQueue.MissionStartQueue_C.OnCancelButtonClicked
struct UMissionStartQueue_C_OnCancelButtonClicked_Params
{
};

// Function MissionStartQueue.MissionStartQueue_C.OnTheaterTileClicked
struct UMissionStartQueue_C_OnTheaterTileClicked_Params
{
};

// Function MissionStartQueue.MissionStartQueue_C.IsActiveTilePlayable
struct UMissionStartQueue_C_IsActiveTilePlayable_Params
{
	bool                                               IsPlayable;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionStartQueue.MissionStartQueue_C.StartOutpost
struct UMissionStartQueue_C_StartOutpost_Params
{
};

// Function MissionStartQueue.MissionStartQueue_C.OnMatchmakingStarted
struct UMissionStartQueue_C_OnMatchmakingStarted_Params
{
};

// Function MissionStartQueue.MissionStartQueue_C.CanInteract
struct UMissionStartQueue_C_CanInteract_Params
{
	bool                                               Result;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionStartQueue.MissionStartQueue_C.StartMatchmaking
struct UMissionStartQueue_C_StartMatchmaking_Params
{
};

// Function MissionStartQueue.MissionStartQueue_C.IsActiveTilePlayWithOthers
struct UMissionStartQueue_C_IsActiveTilePlayWithOthers_Params
{
	bool                                               Result;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionStartQueue.MissionStartQueue_C.FetchDifficulties
struct UMissionStartQueue_C_FetchDifficulties_Params
{
};

// Function MissionStartQueue.MissionStartQueue_C.ConstructDifficultyModal
struct UMissionStartQueue_C_ConstructDifficultyModal_Params
{
};

// Function MissionStartQueue.MissionStartQueue_C.ShowDifficulty
struct UMissionStartQueue_C_ShowDifficulty_Params
{
};

// Function MissionStartQueue.MissionStartQueue_C.FocusButton
struct UMissionStartQueue_C_FocusButton_Params
{
};

// Function MissionStartQueue.MissionStartQueue_C.IsStormShieldMission
struct UMissionStartQueue_C_IsStormShieldMission_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MissionStartQueue.MissionStartQueue_C.GetSelectedTheaterType
struct UMissionStartQueue_C_GetSelectedTheaterType_Params
{
};

// Function MissionStartQueue.MissionStartQueue_C.UpdateWidget
struct UMissionStartQueue_C_UpdateWidget_Params
{
};

// Function MissionStartQueue.MissionStartQueue_C.OnUpdateRequired_EF84C1ED48E6979CDA5CD0B2331007C2
struct UMissionStartQueue_C_OnUpdateRequired_EF84C1ED48E6979CDA5CD0B2331007C2_Params
{
};

// Function MissionStartQueue.MissionStartQueue_C.OnUpToDate_EF84C1ED48E6979CDA5CD0B2331007C2
struct UMissionStartQueue_C_OnUpToDate_EF84C1ED48E6979CDA5CD0B2331007C2_Params
{
};

// Function MissionStartQueue.MissionStartQueue_C.DialogResult_E5F25B25448365AD119A27B50D6A25AE
struct UMissionStartQueue_C_DialogResult_E5F25B25448365AD119A27B50D6A25AE_Params
{
	struct FName                                       ResultName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionStartQueue.MissionStartQueue_C.Theater Selected
struct UMissionStartQueue_C_Theater_Selected_Params
{
	struct FString                                     TheaterId;                                                // (CPF_Parm, CPF_ZeroConstructor)
};

// Function MissionStartQueue.MissionStartQueue_C.HandleClientPartyStateChanged
struct UMissionStartQueue_C_HandleClientPartyStateChanged_Params
{
};

// Function MissionStartQueue.MissionStartQueue_C.MatchmakingStateChange
struct UMissionStartQueue_C_MatchmakingStateChange_Params
{
	TEnumAsByte<EMatchmakingState>                     OldState;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EMatchmakingState>                     NewState;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionStartQueue.MissionStartQueue_C.MatchmakingComplete
struct UMissionStartQueue_C_MatchmakingComplete_Params
{
};

// Function MissionStartQueue.MissionStartQueue_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UMissionStartQueue_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionStartQueue.MissionStartQueue_C.Construct
struct UMissionStartQueue_C_Construct_Params
{
};

// Function MissionStartQueue.MissionStartQueue_C.BndEvt__StartButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UMissionStartQueue_C_BndEvt__StartButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionStartQueue.MissionStartQueue_C.OnPlayWithOthersDifficultySelected
struct UMissionStartQueue_C_OnPlayWithOthersDifficultySelected_Params
{
};

// Function MissionStartQueue.MissionStartQueue_C.LobbyStarted
struct UMissionStartQueue_C_LobbyStarted_Params
{
};

// Function MissionStartQueue.MissionStartQueue_C.OnLobbyConnectAttemptStarted
struct UMissionStartQueue_C_OnLobbyConnectAttemptStarted_Params
{
};

// Function MissionStartQueue.MissionStartQueue_C.OnLobbyConnectionAttemptFailed
struct UMissionStartQueue_C_OnLobbyConnectionAttemptFailed_Params
{
};

// Function MissionStartQueue.MissionStartQueue_C.OnLobbyConnectionAttemptProceedToLobby
struct UMissionStartQueue_C_OnLobbyConnectionAttemptProceedToLobby_Params
{
};

// Function MissionStartQueue.MissionStartQueue_C.ExecuteUbergraph_MissionStartQueue
struct UMissionStartQueue_C_ExecuteUbergraph_MissionStartQueue_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionStartQueue.MissionStartQueue_C.OnCheckingPatch__DelegateSignature
struct UMissionStartQueue_C_OnCheckingPatch__DelegateSignature_Params
{
	bool                                               bStarted;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionStartQueue.MissionStartQueue_C.OnTravellingToLobby__DelegateSignature
struct UMissionStartQueue_C_OnTravellingToLobby__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
