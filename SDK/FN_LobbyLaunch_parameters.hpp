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

// Function LobbyLaunch.LobbyLaunch_C.OnLobbyTimeUpdated
struct ULobbyLaunch_C_OnLobbyTimeUpdated_Params
{
	int                                                SecondsRemaining;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyLaunch.LobbyLaunch_C.Initialize
struct ULobbyLaunch_C_Initialize_Params
{
};

// Function LobbyLaunch.LobbyLaunch_C.HasUnequippedGadgets
struct ULobbyLaunch_C_HasUnequippedGadgets_Params
{
	bool                                               bHasUnequippedGadgets;                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyLaunch.LobbyLaunch_C.DialogResult_3DF98AF8478EB7D6E42FADBD08A86F4B
struct ULobbyLaunch_C_DialogResult_3DF98AF8478EB7D6E42FADBD08A86F4B_Params
{
	struct FName                                       ResultName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyLaunch.LobbyLaunch_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature
struct ULobbyLaunch_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyLaunch.LobbyLaunch_C.Construct
struct ULobbyLaunch_C_Construct_Params
{
};

// Function LobbyLaunch.LobbyLaunch_C.ExecuteUbergraph_LobbyLaunch
struct ULobbyLaunch_C_ExecuteUbergraph_LobbyLaunch_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
