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

// Function SurvivorSquadsLandingPage.SurvivorSquadsLandingPage_C.Select Button
struct USurvivorSquadsLandingPage_C_Select_Button_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SurvivorSquadsLandingPage.SurvivorSquadsLandingPage_C.Refresh Survivor Buttons Bang State
struct USurvivorSquadsLandingPage_C_Refresh_Survivor_Buttons_Bang_State_Params
{
};

// Function SurvivorSquadsLandingPage.SurvivorSquadsLandingPage_C.CreateAndAddSquadButton
struct USurvivorSquadsLandingPage_C_CreateAndAddSquadButton_Params
{
	struct FName*                                      SquadId;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	class UFortSquadSelectorButton*                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function SurvivorSquadsLandingPage.SurvivorSquadsLandingPage_C.Construct
struct USurvivorSquadsLandingPage_C_Construct_Params
{
};

// Function SurvivorSquadsLandingPage.SurvivorSquadsLandingPage_C.OnActivated
struct USurvivorSquadsLandingPage_C_OnActivated_Params
{
};

// Function SurvivorSquadsLandingPage.SurvivorSquadsLandingPage_C.OnButtonClicked_Event
struct USurvivorSquadsLandingPage_C_OnButtonClicked_Event_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SurvivorSquadsLandingPage.SurvivorSquadsLandingPage_C.ExecuteUbergraph_SurvivorSquadsLandingPage
struct USurvivorSquadsLandingPage_C_ExecuteUbergraph_SurvivorSquadsLandingPage_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
