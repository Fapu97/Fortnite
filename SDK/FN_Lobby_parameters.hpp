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

// Function Lobby.Lobby_C.InitializeInput
struct ULobby_C_InitializeInput_Params
{
};

// Function Lobby.Lobby_C.OnLobbyPlayerPadUnhovered
struct ULobby_C_OnLobbyPlayerPadUnhovered_Params
{
	int                                                PlayerIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Lobby.Lobby_C.OnLobbyPlayerPadHovered
struct ULobby_C_OnLobbyPlayerPadHovered_Params
{
	int                                                PlayerIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Lobby.Lobby_C.OnLobbyPlayerGadgetsClicked
struct ULobby_C_OnLobbyPlayerGadgetsClicked_Params
{
	int                                                PlayerIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Lobby.Lobby_C.OnLobbyEmptyPlayerClicked
struct ULobby_C_OnLobbyEmptyPlayerClicked_Params
{
	int                                                PlayerIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Lobby.Lobby_C.SetHoveredPlayer
struct ULobby_C_SetHoveredPlayer_Params
{
	int                                                PlayerIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Lobby.Lobby_C.OnLobbyDisconnected
struct ULobby_C_OnLobbyDisconnected_Params
{
};

// Function Lobby.Lobby_C.OnSelect
struct ULobby_C_OnSelect_Params
{
	int                                                PlayerIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Lobby.Lobby_C.CanNavigatePlayers
struct ULobby_C_CanNavigatePlayers_Params
{
	bool                                               bCanNavigatePlayers;                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Lobby.Lobby_C.HoverNextPlayer
struct ULobby_C_HoverNextPlayer_Params
{
};

// Function Lobby.Lobby_C.HoverPreviousPlayer
struct ULobby_C_HoverPreviousPlayer_Params
{
};

// Function Lobby.Lobby_C.RefreshLaunch
struct ULobby_C_RefreshLaunch_Params
{
};

// Function Lobby.Lobby_C.OnMouseButtonDown
struct ULobby_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Lobby.Lobby_C.ShouldAddScroll
struct ULobby_C_ShouldAddScroll_Params
{
	bool                                               bShouldAdd;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Lobby.Lobby_C.ShouldAddAbandon
struct ULobby_C_ShouldAddAbandon_Params
{
	bool                                               bShouldAdd;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Lobby.Lobby_C.ShouldAddCancel
struct ULobby_C_ShouldAddCancel_Params
{
	bool                                               bShouldAdd;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Lobby.Lobby_C.ShouldAddMissionDetails
struct ULobby_C_ShouldAddMissionDetails_Params
{
	bool                                               bShouldAdd;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Lobby.Lobby_C.ShouldAddSquadInfo
struct ULobby_C_ShouldAddSquadInfo_Params
{
	bool                                               bShouldAdd;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Lobby.Lobby_C.OnInputMissionDetails
struct ULobby_C_OnInputMissionDetails_Params
{
	bool                                               bCommited;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Lobby.Lobby_C.RefreshInput
struct ULobby_C_RefreshInput_Params
{
};

// Function Lobby.Lobby_C.OnInputAbandon
struct ULobby_C_OnInputAbandon_Params
{
	bool                                               bCommited;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Lobby.Lobby_C.InitializeContextEvents
struct ULobby_C_InitializeContextEvents_Params
{
};

// Function Lobby.Lobby_C.Focus
struct ULobby_C_Focus_Params
{
};

// Function Lobby.Lobby_C.OnInputCancel
struct ULobby_C_OnInputCancel_Params
{
	bool                                               bCommited;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Lobby.Lobby_C.RefreshPlayerHeroes
struct ULobby_C_RefreshPlayerHeroes_Params
{
};

// Function Lobby.Lobby_C.OnTeamMemberStateChanged
struct ULobby_C_OnTeamMemberStateChanged_Params
{
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // (CPF_Parm)
};

// Function Lobby.Lobby_C.OnTeamMemberRemoved
struct ULobby_C_OnTeamMemberRemoved_Params
{
	int                                                EmptySlot;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Lobby.Lobby_C.OnTeamMemberAdded
struct ULobby_C_OnTeamMemberAdded_Params
{
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // (CPF_Parm)
};

// Function Lobby.Lobby_C.Refresh
struct ULobby_C_Refresh_Params
{
};

// Function Lobby.Lobby_C.OnInputSquadInfo
struct ULobby_C_OnInputSquadInfo_Params
{
	bool                                               bCommited;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Lobby.Lobby_C.Initialize
struct ULobby_C_Initialize_Params
{
};

// Function Lobby.Lobby_C.DialogResult_2CDEC78B48786F5C4E254C9F2DCA5695
struct ULobby_C_DialogResult_2CDEC78B48786F5C4E254C9F2DCA5695_Params
{
	struct FName                                       ResultName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Lobby.Lobby_C.BndEvt__PlayerPanelMain_K2Node_ComponentBoundEvent_0_OnGadgetsClicked__DelegateSignature
struct ULobby_C_BndEvt__PlayerPanelMain_K2Node_ComponentBoundEvent_0_OnGadgetsClicked__DelegateSignature_Params
{
};

// Function Lobby.Lobby_C.BndEvt__PlayerPanel_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
struct ULobby_C_BndEvt__PlayerPanel_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params
{
};

// Function Lobby.Lobby_C.OnActivated
struct ULobby_C_OnActivated_Params
{
};

// Function Lobby.Lobby_C.Construct
struct ULobby_C_Construct_Params
{
};

// Function Lobby.Lobby_C.Event Abandon
struct ULobby_C_Event_Abandon_Params
{
};

// Function Lobby.Lobby_C.BndEvt__SwitcherDetails_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature
struct ULobby_C_BndEvt__SwitcherDetails_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature_Params
{
	class UWidget*                                     ActiveWidget;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ActiveWidgetIndex;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Lobby.Lobby_C.OnNavigationLeft
struct ULobby_C_OnNavigationLeft_Params
{
};

// Function Lobby.Lobby_C.OnNavigationRight
struct ULobby_C_OnNavigationRight_Params
{
};

// Function Lobby.Lobby_C.BndEvt__ButtonTMPTEST_K2Node_ComponentBoundEvent_198_CommonButtonClicked__DelegateSignature
struct ULobby_C_BndEvt__ButtonTMPTEST_K2Node_ComponentBoundEvent_198_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Lobby.Lobby_C.OnEndCursorOverPlayer
struct ULobby_C_OnEndCursorOverPlayer_Params
{
	int*                                               PlayerIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Lobby.Lobby_C.OnBeginCursorOverPlayer
struct ULobby_C_OnBeginCursorOverPlayer_Params
{
	int*                                               PlayerIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Lobby.Lobby_C.BndEvt__GadgetSelection_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature
struct ULobby_C_BndEvt__GadgetSelection_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature_Params
{
};

// Function Lobby.Lobby_C.OnPlayerClicked
struct ULobby_C_OnPlayerClicked_Params
{
	int*                                               PlayerIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Lobby.Lobby_C.ExecuteUbergraph_Lobby
struct ULobby_C_ExecuteUbergraph_Lobby_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
