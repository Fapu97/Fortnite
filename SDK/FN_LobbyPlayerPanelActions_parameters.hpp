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

// Function LobbyPlayerPanelActions.LobbyPlayerPanelActions_C.IsTeamMemberLocalPlayer
struct ULobbyPlayerPanelActions_C_IsTeamMemberLocalPlayer_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function LobbyPlayerPanelActions.LobbyPlayerPanelActions_C.InitAppearanceOptions
struct ULobbyPlayerPanelActions_C_InitAppearanceOptions_Params
{
};

// Function LobbyPlayerPanelActions.LobbyPlayerPanelActions_C.SetTeamMemberInfo
struct ULobbyPlayerPanelActions_C_SetTeamMemberInfo_Params
{
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // (CPF_Parm)
};

// Function LobbyPlayerPanelActions.LobbyPlayerPanelActions_C.OnActiveFriendsCountUpdated
struct ULobbyPlayerPanelActions_C_OnActiveFriendsCountUpdated_Params
{
	int                                                ActiveFriendsCount;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyPlayerPanelActions.LobbyPlayerPanelActions_C.OnPartyInvitesCountChanged
struct ULobbyPlayerPanelActions_C_OnPartyInvitesCountChanged_Params
{
	int                                                InvitesCount;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyPlayerPanelActions.LobbyPlayerPanelActions_C.InitializeContextEvents
struct ULobbyPlayerPanelActions_C_InitializeContextEvents_Params
{
};

// Function LobbyPlayerPanelActions.LobbyPlayerPanelActions_C.Focus
struct ULobbyPlayerPanelActions_C_Focus_Params
{
};

// Function LobbyPlayerPanelActions.LobbyPlayerPanelActions_C.HasValidActions
struct ULobbyPlayerPanelActions_C_HasValidActions_Params
{
	bool                                               bHasValidActions;                                         // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyPlayerPanelActions.LobbyPlayerPanelActions_C.GetFirstActiveActionButton
struct ULobbyPlayerPanelActions_C_GetFirstActiveActionButton_Params
{
	class UIconTextButton_C*                           IconTextButton;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyPlayerPanelActions.LobbyPlayerPanelActions_C.CanManage
struct ULobbyPlayerPanelActions_C_CanManage_Params
{
	bool                                               bCanManage;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyPlayerPanelActions.LobbyPlayerPanelActions_C.IsInvitationPending
struct ULobbyPlayerPanelActions_C_IsInvitationPending_Params
{
	bool                                               bIsInvitationPending;                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyPlayerPanelActions.LobbyPlayerPanelActions_C.CanInviteToParty
struct ULobbyPlayerPanelActions_C_CanInviteToParty_Params
{
	bool                                               bCanInviteToParty;                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyPlayerPanelActions.LobbyPlayerPanelActions_C.CanFriend
struct ULobbyPlayerPanelActions_C_CanFriend_Params
{
	bool                                               bCanFriend;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyPlayerPanelActions.LobbyPlayerPanelActions_C.IsMissionLocalPlayersOutpost
struct ULobbyPlayerPanelActions_C_IsMissionLocalPlayersOutpost_Params
{
	bool                                               isLocalPlayersOutpost;                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyPlayerPanelActions.LobbyPlayerPanelActions_C.IsLocalPlayer
struct ULobbyPlayerPanelActions_C_IsLocalPlayer_Params
{
	bool                                               bIsLocalPlayer;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyPlayerPanelActions.LobbyPlayerPanelActions_C.Refresh
struct ULobbyPlayerPanelActions_C_Refresh_Params
{
};

// Function LobbyPlayerPanelActions.LobbyPlayerPanelActions_C.Initialize
struct ULobbyPlayerPanelActions_C_Initialize_Params
{
};

// Function LobbyPlayerPanelActions.LobbyPlayerPanelActions_C.OnButtonHovered
struct ULobbyPlayerPanelActions_C_OnButtonHovered_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyPlayerPanelActions.LobbyPlayerPanelActions_C.BndEvt__ButtonHeroSquad_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature
struct ULobbyPlayerPanelActions_C_BndEvt__ButtonHeroSquad_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyPlayerPanelActions.LobbyPlayerPanelActions_C.BndEvt__ButtonGadgets_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature
struct ULobbyPlayerPanelActions_C_BndEvt__ButtonGadgets_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyPlayerPanelActions.LobbyPlayerPanelActions_C.BndEvt__ButtonDefenders_K2Node_ComponentBoundEvent_70_CommonButtonClicked__DelegateSignature
struct ULobbyPlayerPanelActions_C_BndEvt__ButtonDefenders_K2Node_ComponentBoundEvent_70_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyPlayerPanelActions.LobbyPlayerPanelActions_C.BndEvt__ButtonManage_K2Node_ComponentBoundEvent_86_CommonButtonClicked__DelegateSignature
struct ULobbyPlayerPanelActions_C_BndEvt__ButtonManage_K2Node_ComponentBoundEvent_86_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyPlayerPanelActions.LobbyPlayerPanelActions_C.BndEvt__ButtonAddFriend_K2Node_ComponentBoundEvent_103_CommonButtonClicked__DelegateSignature
struct ULobbyPlayerPanelActions_C_BndEvt__ButtonAddFriend_K2Node_ComponentBoundEvent_103_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyPlayerPanelActions.LobbyPlayerPanelActions_C.BndEvt__ButtonInviteParty_K2Node_ComponentBoundEvent_121_CommonButtonClicked__DelegateSignature
struct ULobbyPlayerPanelActions_C_BndEvt__ButtonInviteParty_K2Node_ComponentBoundEvent_121_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyPlayerPanelActions.LobbyPlayerPanelActions_C.BndEvt__ButtonToggleHead2_K2Node_ComponentBoundEvent_548_CommonSelectedStateChanged__DelegateSignature
struct ULobbyPlayerPanelActions_C_BndEvt__ButtonToggleHead2_K2Node_ComponentBoundEvent_548_CommonSelectedStateChanged__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Selected;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyPlayerPanelActions.LobbyPlayerPanelActions_C.BndEvt__ButtonToggleBackpack2_K2Node_ComponentBoundEvent_572_CommonSelectedStateChanged__DelegateSignature
struct ULobbyPlayerPanelActions_C_BndEvt__ButtonToggleBackpack2_K2Node_ComponentBoundEvent_572_CommonSelectedStateChanged__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Selected;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyPlayerPanelActions.LobbyPlayerPanelActions_C.ExecuteUbergraph_LobbyPlayerPanelActions
struct ULobbyPlayerPanelActions_C_ExecuteUbergraph_LobbyPlayerPanelActions_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyPlayerPanelActions.LobbyPlayerPanelActions_C.OnGadgetsClicked__DelegateSignature
struct ULobbyPlayerPanelActions_C_OnGadgetsClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
