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

// Function LobbyGadgetSelectionDetails.LobbyGadgetSelectionDetails_C.SetData
struct ULobbyGadgetSelectionDetails_C_SetData_Params
{
	struct FText                                       GadgetName;                                               // (CPF_Parm)
	struct FText                                       GadgetDetails;                                            // (CPF_Parm)
};

// Function LobbyGadgetSelectionDetails.LobbyGadgetSelectionDetails_C.PreConstruct
struct ULobbyGadgetSelectionDetails_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyGadgetSelectionDetails.LobbyGadgetSelectionDetails_C.ExecuteUbergraph_LobbyGadgetSelectionDetails
struct ULobbyGadgetSelectionDetails_C_ExecuteUbergraph_LobbyGadgetSelectionDetails_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
