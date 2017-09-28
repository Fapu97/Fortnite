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

// Function SurvivorSquadStatMatchItem.SurvivorSquadStatMatchItem_C.ShouldShowCompact
struct USurvivorSquadStatMatchItem_C_ShouldShowCompact_Params
{
	bool                                               ShouldShow;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SurvivorSquadStatMatchItem.SurvivorSquadStatMatchItem_C.ContractStats
struct USurvivorSquadStatMatchItem_C_ContractStats_Params
{
};

// Function SurvivorSquadStatMatchItem.SurvivorSquadStatMatchItem_C.ExpandStats
struct USurvivorSquadStatMatchItem_C_ExpandStats_Params
{
};

// Function SurvivorSquadStatMatchItem.SurvivorSquadStatMatchItem_C.SetupMatchData
struct USurvivorSquadStatMatchItem_C_SetupMatchData_Params
{
	int                                                NumMembersMeetingCriteria;                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumMembersRequired;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SurvivorSquadStatMatchItem.SurvivorSquadStatMatchItem_C.UpdateStatMatchDisplayData
struct USurvivorSquadStatMatchItem_C_UpdateStatMatchDisplayData_Params
{
	struct FFortUISurvivorSquadStatMatch               StatMatch;                                                // (CPF_Parm)
};

// Function SurvivorSquadStatMatchItem.SurvivorSquadStatMatchItem_C.OnStatMatchUpdated
struct USurvivorSquadStatMatchItem_C_OnStatMatchUpdated_Params
{
	struct FFortUISurvivorSquadStatMatch*              UpdatedMatch;                                             // (CPF_Parm)
};

// Function SurvivorSquadStatMatchItem.SurvivorSquadStatMatchItem_C.ExecuteUbergraph_SurvivorSquadStatMatchItem
struct USurvivorSquadStatMatchItem_C_ExecuteUbergraph_SurvivorSquadStatMatchItem_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
