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

// Function LobbyGadgetSelectionChoice.LobbyGadgetSelectionChoice_C.AreGadgetsLocked
struct ULobbyGadgetSelectionChoice_C_AreGadgetsLocked_Params
{
	bool                                               bAreGadgetsLocked;                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyGadgetSelectionChoice.LobbyGadgetSelectionChoice_C.InitializeContextEvents
struct ULobbyGadgetSelectionChoice_C_InitializeContextEvents_Params
{
};

// Function LobbyGadgetSelectionChoice.LobbyGadgetSelectionChoice_C.OnHomebaseInventoryUpdated
struct ULobbyGadgetSelectionChoice_C_OnHomebaseInventoryUpdated_Params
{
};

// Function LobbyGadgetSelectionChoice.LobbyGadgetSelectionChoice_C.OnLobbyStarted
struct ULobbyGadgetSelectionChoice_C_OnLobbyStarted_Params
{
};

// Function LobbyGadgetSelectionChoice.LobbyGadgetSelectionChoice_C.GetHoveredItem
struct ULobbyGadgetSelectionChoice_C_GetHoveredItem_Params
{
	class UFortWorldItem*                              GadgetWorldItem;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyGadgetSelectionChoice.LobbyGadgetSelectionChoice_C.OnLocalAccountInfoChanged
struct ULobbyGadgetSelectionChoice_C_OnLocalAccountInfoChanged_Params
{
	struct FFortPrivateAccountInfo                     PrivateAccountInfo;                                       // (CPF_Parm)
};

// Function LobbyGadgetSelectionChoice.LobbyGadgetSelectionChoice_C.Initialize
struct ULobbyGadgetSelectionChoice_C_Initialize_Params
{
};

// Function LobbyGadgetSelectionChoice.LobbyGadgetSelectionChoice_C.GetSelectedSlotIndex
struct ULobbyGadgetSelectionChoice_C_GetSelectedSlotIndex_Params
{
	int                                                SlotIndex;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bSelected;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyGadgetSelectionChoice.LobbyGadgetSelectionChoice_C.Focus
struct ULobbyGadgetSelectionChoice_C_Focus_Params
{
};

// Function LobbyGadgetSelectionChoice.LobbyGadgetSelectionChoice_C.Refresh
struct ULobbyGadgetSelectionChoice_C_Refresh_Params
{
};

// Function LobbyGadgetSelectionChoice.LobbyGadgetSelectionChoice_C.Construct
struct ULobbyGadgetSelectionChoice_C_Construct_Params
{
};

// Function LobbyGadgetSelectionChoice.LobbyGadgetSelectionChoice_C.BndEvt__ButtonGadget11_K2Node_ComponentBoundEvent_249_OnButtonClicked__DelegateSignature
struct ULobbyGadgetSelectionChoice_C_BndEvt__ButtonGadget11_K2Node_ComponentBoundEvent_249_OnButtonClicked__DelegateSignature_Params
{
	class ULobbyGadgetButton_C*                        GadgetButton;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyGadgetSelectionChoice.LobbyGadgetSelectionChoice_C.BndEvt__ButtonGadget11_K2Node_ComponentBoundEvent_258_OnButtonHovered__DelegateSignature
struct ULobbyGadgetSelectionChoice_C_BndEvt__ButtonGadget11_K2Node_ComponentBoundEvent_258_OnButtonHovered__DelegateSignature_Params
{
	class ULobbyGadgetButton_C*                        GadgetButton;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyGadgetSelectionChoice.LobbyGadgetSelectionChoice_C.BndEvt__ButtonGadget22_K2Node_ComponentBoundEvent_265_OnButtonClicked__DelegateSignature
struct ULobbyGadgetSelectionChoice_C_BndEvt__ButtonGadget22_K2Node_ComponentBoundEvent_265_OnButtonClicked__DelegateSignature_Params
{
	class ULobbyGadgetButton_C*                        GadgetButton;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyGadgetSelectionChoice.LobbyGadgetSelectionChoice_C.BndEvt__ButtonGadget22_K2Node_ComponentBoundEvent_276_OnButtonHovered__DelegateSignature
struct ULobbyGadgetSelectionChoice_C_BndEvt__ButtonGadget22_K2Node_ComponentBoundEvent_276_OnButtonHovered__DelegateSignature_Params
{
	class ULobbyGadgetButton_C*                        GadgetButton;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyGadgetSelectionChoice.LobbyGadgetSelectionChoice_C.ExecuteUbergraph_LobbyGadgetSelectionChoice
struct ULobbyGadgetSelectionChoice_C_ExecuteUbergraph_LobbyGadgetSelectionChoice_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyGadgetSelectionChoice.LobbyGadgetSelectionChoice_C.OnGadgetHovered__DelegateSignature
struct ULobbyGadgetSelectionChoice_C_OnGadgetHovered__DelegateSignature_Params
{
	class UFortWorldItem*                              GadgetItem;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyGadgetSelectionChoice.LobbyGadgetSelectionChoice_C.OnClicked__DelegateSignature
struct ULobbyGadgetSelectionChoice_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
