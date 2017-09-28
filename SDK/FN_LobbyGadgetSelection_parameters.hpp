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

// Function LobbyGadgetSelection.LobbyGadgetSelection_C.Close
struct ULobbyGadgetSelection_C_Close_Params
{
};

// Function LobbyGadgetSelection.LobbyGadgetSelection_C.RemoveExistingGadgetFromSlot
struct ULobbyGadgetSelection_C_RemoveExistingGadgetFromSlot_Params
{
	int                                                SlotIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortWorldItem*                              WorldItem;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyGadgetSelection.LobbyGadgetSelection_C.SelectGadgetForSlot
struct ULobbyGadgetSelection_C_SelectGadgetForSlot_Params
{
	int                                                InSlotIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortWorldItem*                              InWorldItem;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyGadgetSelection.LobbyGadgetSelection_C.Refresh
struct ULobbyGadgetSelection_C_Refresh_Params
{
};

// Function LobbyGadgetSelection.LobbyGadgetSelection_C.OnHomebaseInventoryUpdated
struct ULobbyGadgetSelection_C_OnHomebaseInventoryUpdated_Params
{
};

// Function LobbyGadgetSelection.LobbyGadgetSelection_C.OnLocalAccountInfoChanged
struct ULobbyGadgetSelection_C_OnLocalAccountInfoChanged_Params
{
	struct FFortPrivateAccountInfo                     PrivateAccountIndo;                                       // (CPF_Parm)
};

// Function LobbyGadgetSelection.LobbyGadgetSelection_C.Initialize
struct ULobbyGadgetSelection_C_Initialize_Params
{
};

// Function LobbyGadgetSelection.LobbyGadgetSelection_C.Cancel
struct ULobbyGadgetSelection_C_Cancel_Params
{
};

// Function LobbyGadgetSelection.LobbyGadgetSelection_C.RefreshDetails
struct ULobbyGadgetSelection_C_RefreshDetails_Params
{
	class UFortWorldItem*                              GadgetItem;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyGadgetSelection.LobbyGadgetSelection_C.Focus
struct ULobbyGadgetSelection_C_Focus_Params
{
};

// Function LobbyGadgetSelection.LobbyGadgetSelection_C.BndEvt__List_K2Node_ComponentBoundEvent_0_OnItemSelected__DelegateSignature
struct ULobbyGadgetSelection_C_BndEvt__List_K2Node_ComponentBoundEvent_0_OnItemSelected__DelegateSignature_Params
{
	class UFortWorldItem*                              GadgetWorldItem;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyGadgetSelection.LobbyGadgetSelection_C.BndEvt__List_K2Node_ComponentBoundEvent_0_OnItemCommitted__DelegateSignature
struct ULobbyGadgetSelection_C_BndEvt__List_K2Node_ComponentBoundEvent_0_OnItemCommitted__DelegateSignature_Params
{
	class UFortWorldItem*                              GadgetWorldItem;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyGadgetSelection.LobbyGadgetSelection_C.BndEvt__Choice_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct ULobbyGadgetSelection_C_BndEvt__Choice_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function LobbyGadgetSelection.LobbyGadgetSelection_C.BndEvt__Choice_K2Node_ComponentBoundEvent_12_OnGadgetHovered__DelegateSignature
struct ULobbyGadgetSelection_C_BndEvt__Choice_K2Node_ComponentBoundEvent_12_OnGadgetHovered__DelegateSignature_Params
{
	class UFortWorldItem*                              GadgetItem;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyGadgetSelection.LobbyGadgetSelection_C.Construct
struct ULobbyGadgetSelection_C_Construct_Params
{
};

// Function LobbyGadgetSelection.LobbyGadgetSelection_C.ExecuteUbergraph_LobbyGadgetSelection
struct ULobbyGadgetSelection_C_ExecuteUbergraph_LobbyGadgetSelection_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyGadgetSelection.LobbyGadgetSelection_C.OnClosed__DelegateSignature
struct ULobbyGadgetSelection_C_OnClosed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
