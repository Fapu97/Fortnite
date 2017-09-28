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

// Function LobbyPlayerPanel.LobbyPlayerPanel_C.Cancel
struct ULobbyPlayerPanel_C_Cancel_Params
{
};

// Function LobbyPlayerPanel.LobbyPlayerPanel_C.OnTeamMemberStateChanged
struct ULobbyPlayerPanel_C_OnTeamMemberStateChanged_Params
{
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // (CPF_Parm)
};

// Function LobbyPlayerPanel.LobbyPlayerPanel_C.InitializeContextEvents
struct ULobbyPlayerPanel_C_InitializeContextEvents_Params
{
};

// Function LobbyPlayerPanel.LobbyPlayerPanel_C.Focus
struct ULobbyPlayerPanel_C_Focus_Params
{
};

// Function LobbyPlayerPanel.LobbyPlayerPanel_C.Refresh
struct ULobbyPlayerPanel_C_Refresh_Params
{
};

// Function LobbyPlayerPanel.LobbyPlayerPanel_C.SetTeamMemberInfo
struct ULobbyPlayerPanel_C_SetTeamMemberInfo_Params
{
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // (CPF_Parm)
};

// Function LobbyPlayerPanel.LobbyPlayerPanel_C.Initialize
struct ULobbyPlayerPanel_C_Initialize_Params
{
};

// Function LobbyPlayerPanel.LobbyPlayerPanel_C.BndEvt__Actions_K2Node_ComponentBoundEvent_3_OnGadgetsClicked__DelegateSignature
struct ULobbyPlayerPanel_C_BndEvt__Actions_K2Node_ComponentBoundEvent_3_OnGadgetsClicked__DelegateSignature_Params
{
};

// Function LobbyPlayerPanel.LobbyPlayerPanel_C.ExecuteUbergraph_LobbyPlayerPanel
struct ULobbyPlayerPanel_C_ExecuteUbergraph_LobbyPlayerPanel_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyPlayerPanel.LobbyPlayerPanel_C.OnClosed__DelegateSignature
struct ULobbyPlayerPanel_C_OnClosed__DelegateSignature_Params
{
};

// Function LobbyPlayerPanel.LobbyPlayerPanel_C.OnGadgetsClicked__DelegateSignature
struct ULobbyPlayerPanel_C_OnGadgetsClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
