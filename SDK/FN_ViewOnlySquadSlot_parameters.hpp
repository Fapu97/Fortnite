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

// Function ViewOnlySquadSlot.ViewOnlySquadSlot_C.SetPersonalityIcon
struct UViewOnlySquadSlot_C_SetPersonalityIcon_Params
{
	struct FName                                       SquadId;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SquadSlotIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       PersonalityToMatch;                                       // (CPF_Parm)
};

// Function ViewOnlySquadSlot.ViewOnlySquadSlot_C.SetSquadID
struct UViewOnlySquadSlot_C_SetSquadID_Params
{
	struct FName                                       SquadId;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SlotIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ViewOnlySquadSlot.ViewOnlySquadSlot_C.Construct
struct UViewOnlySquadSlot_C_Construct_Params
{
};

// Function ViewOnlySquadSlot.ViewOnlySquadSlot_C.ExecuteUbergraph_ViewOnlySquadSlot
struct UViewOnlySquadSlot_C_ExecuteUbergraph_ViewOnlySquadSlot_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
