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

// Function SquadLandingPageDefenderSummary.SquadLandingPageDefenderSummary_C.HandleClearDefenderSquadDetailsBP
struct USquadLandingPageDefenderSummary_C_HandleClearDefenderSquadDetailsBP_Params
{
};

// Function SquadLandingPageDefenderSummary.SquadLandingPageDefenderSummary_C.HandleAddDefenderSquadDetailsBP
struct USquadLandingPageDefenderSummary_C_HandleAddDefenderSquadDetailsBP_Params
{
	struct FFortLandingPageDefenderSummaryInfo*        DefenderSummaryInfo;                                      // (CPF_Parm)
};

// Function SquadLandingPageDefenderSummary.SquadLandingPageDefenderSummary_C.HandleAddLockedDefenderSquadDetailsBP
struct USquadLandingPageDefenderSummary_C_HandleAddLockedDefenderSquadDetailsBP_Params
{
	struct FFortLandingPageDefenderSummaryInfo*        DefenderSummaryInfo;                                      // (CPF_Parm)
};

// Function SquadLandingPageDefenderSummary.SquadLandingPageDefenderSummary_C.ExecuteUbergraph_SquadLandingPageDefenderSummary
struct USquadLandingPageDefenderSummary_C_ExecuteUbergraph_SquadLandingPageDefenderSummary_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
