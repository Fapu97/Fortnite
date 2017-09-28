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

// Function SurvivorSquadStatMatchesWidget.SurvivorSquadStatMatchesWidget_C.PopulateContractedView
struct USurvivorSquadStatMatchesWidget_C_PopulateContractedView_Params
{
};

// Function SurvivorSquadStatMatchesWidget.SurvivorSquadStatMatchesWidget_C.AddStatMatch
struct USurvivorSquadStatMatchesWidget_C_AddStatMatch_Params
{
	class UFortSurvivorSquadStatMatchBase**            SetBonus;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SurvivorSquadStatMatchesWidget.SurvivorSquadStatMatchesWidget_C.ExecuteUbergraph_SurvivorSquadStatMatchesWidget
struct USurvivorSquadStatMatchesWidget_C_ExecuteUbergraph_SurvivorSquadStatMatchesWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
