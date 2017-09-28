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

// Function Gen_Text_StartObjective.Gen_Text_StartObjective_C.BreakParams
struct UGen_Text_StartObjective_C_BreakParams_Params
{
	struct FText                                       ObjectiveText;                                            // (CPF_Parm, CPF_OutParm)
	struct FGameplayTag                                DisplayedRewardTag;                                       // (CPF_Parm, CPF_OutParm)
	struct FSlateBrush                                 DisplayedIcon;                                            // (CPF_Parm, CPF_OutParm)
};

// Function Gen_Text_StartObjective.Gen_Text_StartObjective_C.SetParams
struct UGen_Text_StartObjective_C_SetParams_Params
{
	struct FText                                       ObjectiveText;                                            // (CPF_Parm)
	struct FGameplayTag                                DisplayedRewardTag;                                       // (CPF_Parm)
	struct FSlateBrush                                 DisplayedIcon;                                            // (CPF_Parm)
	class UGen_Text_StartObjective_C*                  ThisObject;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
