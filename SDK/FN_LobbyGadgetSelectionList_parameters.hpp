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

// Function LobbyGadgetSelectionList.LobbyGadgetSelectionList_C.InitializeEvents
struct ULobbyGadgetSelectionList_C_InitializeEvents_Params
{
};

// Function LobbyGadgetSelectionList.LobbyGadgetSelectionList_C.OnSelectionCommitted
struct ULobbyGadgetSelectionList_C_OnSelectionCommitted_Params
{
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyGadgetSelectionList.LobbyGadgetSelectionList_C.OnSelectionChanged
struct ULobbyGadgetSelectionList_C_OnSelectionChanged_Params
{
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyGadgetSelectionList.LobbyGadgetSelectionList_C.Focus
struct ULobbyGadgetSelectionList_C_Focus_Params
{
};

// Function LobbyGadgetSelectionList.LobbyGadgetSelectionList_C.Refresh
struct ULobbyGadgetSelectionList_C_Refresh_Params
{
};

// Function LobbyGadgetSelectionList.LobbyGadgetSelectionList_C.Construct
struct ULobbyGadgetSelectionList_C_Construct_Params
{
};

// Function LobbyGadgetSelectionList.LobbyGadgetSelectionList_C.ExecuteUbergraph_LobbyGadgetSelectionList
struct ULobbyGadgetSelectionList_C_ExecuteUbergraph_LobbyGadgetSelectionList_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyGadgetSelectionList.LobbyGadgetSelectionList_C.OnItemCommitted__DelegateSignature
struct ULobbyGadgetSelectionList_C_OnItemCommitted__DelegateSignature_Params
{
	class UFortWorldItem*                              GadgetWorldItem;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyGadgetSelectionList.LobbyGadgetSelectionList_C.OnItemSelected__DelegateSignature
struct ULobbyGadgetSelectionList_C_OnItemSelected__DelegateSignature_Params
{
	class UFortWorldItem*                              GadgetWorldItem;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
