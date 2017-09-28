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

// Function LobbyPlayerPanelGadgets.LobbyPlayerPanelGadgets_C.AreLocalPlayerGadgetsAvailable
struct ULobbyPlayerPanelGadgets_C_AreLocalPlayerGadgetsAvailable_Params
{
	bool                                               bAreGadgetsAvailable;                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyPlayerPanelGadgets.LobbyPlayerPanelGadgets_C.IsLocalPlayer
struct ULobbyPlayerPanelGadgets_C_IsLocalPlayer_Params
{
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // (CPF_Parm)
	bool                                               bIsLocalPlayer;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyPlayerPanelGadgets.LobbyPlayerPanelGadgets_C.Refresh
struct ULobbyPlayerPanelGadgets_C_Refresh_Params
{
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // (CPF_Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
