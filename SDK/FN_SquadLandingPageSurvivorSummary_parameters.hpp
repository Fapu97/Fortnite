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

// Function SquadLandingPageSurvivorSummary.SquadLandingPageSurvivorSummary_C.Construct
struct USquadLandingPageSurvivorSummary_C_Construct_Params
{
};

// Function SquadLandingPageSurvivorSummary.SquadLandingPageSurvivorSummary_C.HandleClearSetBonusSummaryLineItemsBP
struct USquadLandingPageSurvivorSummary_C_HandleClearSetBonusSummaryLineItemsBP_Params
{
};

// Function SquadLandingPageSurvivorSummary.SquadLandingPageSurvivorSummary_C.HandleAddSetBonusSummaryLineItemBP
struct USquadLandingPageSurvivorSummary_C_HandleAddSetBonusSummaryLineItemBP_Params
{
	struct FFortAttributeModifierAccumulation*         AttributeModifierAccumulation;                            // (CPF_Parm)
};

// Function SquadLandingPageSurvivorSummary.SquadLandingPageSurvivorSummary_C.ExecuteUbergraph_SquadLandingPageSurvivorSummary
struct USquadLandingPageSurvivorSummary_C_ExecuteUbergraph_SquadLandingPageSurvivorSummary_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
