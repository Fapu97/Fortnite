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

// Function SquadLandingPageDefenderSquadDetails.SquadLandingPageDefenderSquadDetails_C.HandleDefenderSquadInfoSetBP
struct USquadLandingPageDefenderSquadDetails_C_HandleDefenderSquadInfoSetBP_Params
{
	struct FFortLandingPageDefenderSummaryInfo*        DefenderSummaryInfo;                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function SquadLandingPageDefenderSquadDetails.SquadLandingPageDefenderSquadDetails_C.HandleAddDefenderSquadMemberBP
struct USquadLandingPageDefenderSquadDetails_C_HandleAddDefenderSquadMemberBP_Params
{
	struct FName*                                      SquadId;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	int*                                               Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SquadLandingPageDefenderSquadDetails.SquadLandingPageDefenderSquadDetails_C.ExecuteUbergraph_SquadLandingPageDefenderSquadDetails
struct USquadLandingPageDefenderSquadDetails_C_ExecuteUbergraph_SquadLandingPageDefenderSquadDetails_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
