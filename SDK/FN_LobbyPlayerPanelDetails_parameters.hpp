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

// Function LobbyPlayerPanelDetails.LobbyPlayerPanelDetails_C.SetTeamMemberInfo
struct ULobbyPlayerPanelDetails_C_SetTeamMemberInfo_Params
{
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // (CPF_Parm)
};

// Function LobbyPlayerPanelDetails.LobbyPlayerPanelDetails_C.InitializeContextEvents
struct ULobbyPlayerPanelDetails_C_InitializeContextEvents_Params
{
};

// Function LobbyPlayerPanelDetails.LobbyPlayerPanelDetails_C.OnActiveFriendsCountUpdated
struct ULobbyPlayerPanelDetails_C_OnActiveFriendsCountUpdated_Params
{
	int                                                ActiveFriendsCount;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyPlayerPanelDetails.LobbyPlayerPanelDetails_C.OnPartyInvitesCountChanged
struct ULobbyPlayerPanelDetails_C_OnPartyInvitesCountChanged_Params
{
	int                                                InvitesCount;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyPlayerPanelDetails.LobbyPlayerPanelDetails_C.Initialize
struct ULobbyPlayerPanelDetails_C_Initialize_Params
{
};

// Function LobbyPlayerPanelDetails.LobbyPlayerPanelDetails_C.IsInvitationPending
struct ULobbyPlayerPanelDetails_C_IsInvitationPending_Params
{
	bool                                               bIsInvitationPending;                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyPlayerPanelDetails.LobbyPlayerPanelDetails_C.RefreshPendingInvite
struct ULobbyPlayerPanelDetails_C_RefreshPendingInvite_Params
{
};

// Function LobbyPlayerPanelDetails.LobbyPlayerPanelDetails_C.RefreshPlayerName
struct ULobbyPlayerPanelDetails_C_RefreshPlayerName_Params
{
};

// Function LobbyPlayerPanelDetails.LobbyPlayerPanelDetails_C.Refresh
struct ULobbyPlayerPanelDetails_C_Refresh_Params
{
};

// Function LobbyPlayerPanelDetails.LobbyPlayerPanelDetails_C.RefreshHomeBasePower
struct ULobbyPlayerPanelDetails_C_RefreshHomeBasePower_Params
{
};

// Function LobbyPlayerPanelDetails.LobbyPlayerPanelDetails_C.RefreshHomeBaseImage
struct ULobbyPlayerPanelDetails_C_RefreshHomeBaseImage_Params
{
};

// Function LobbyPlayerPanelDetails.LobbyPlayerPanelDetails_C.PreConstruct
struct ULobbyPlayerPanelDetails_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyPlayerPanelDetails.LobbyPlayerPanelDetails_C.ExecuteUbergraph_LobbyPlayerPanelDetails
struct ULobbyPlayerPanelDetails_C_ExecuteUbergraph_LobbyPlayerPanelDetails_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
