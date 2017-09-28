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

// Function DefenderSquadsLandingPage.DefenderSquadsLandingPage_C.Refresh Defender Buttons Bang State
struct UDefenderSquadsLandingPage_C_Refresh_Defender_Buttons_Bang_State_Params
{
};

// Function DefenderSquadsLandingPage.DefenderSquadsLandingPage_C.CreateAndAddSquadButton
struct UDefenderSquadsLandingPage_C_CreateAndAddSquadButton_Params
{
	struct FName*                                      SquadId;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	class UFortSquadSelectorButton*                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function DefenderSquadsLandingPage.DefenderSquadsLandingPage_C.Construct
struct UDefenderSquadsLandingPage_C_Construct_Params
{
};

// Function DefenderSquadsLandingPage.DefenderSquadsLandingPage_C.OnActivated
struct UDefenderSquadsLandingPage_C_OnActivated_Params
{
};

// Function DefenderSquadsLandingPage.DefenderSquadsLandingPage_C.ExecuteUbergraph_DefenderSquadsLandingPage
struct UDefenderSquadsLandingPage_C_ExecuteUbergraph_DefenderSquadsLandingPage_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
