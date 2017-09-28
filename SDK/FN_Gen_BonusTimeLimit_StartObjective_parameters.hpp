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

// Function Gen_BonusTimeLimit_StartObjective.Gen_BonusTimeLimit_StartObjective_C.BreakParams
struct UGen_BonusTimeLimit_StartObjective_C_BreakParams_Params
{
	float                                              ObjectiveStartDelay;                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TimerLength;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       ObjectiveText;                                            // (CPF_Parm, CPF_OutParm)
	struct FGameplayTagContainer                       RewardTags;                                               // (CPF_Parm, CPF_OutParm)
	bool                                               bReuseableBonusObjective;                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Gen_BonusTimeLimit_StartObjective.Gen_BonusTimeLimit_StartObjective_C.SetParams
struct UGen_BonusTimeLimit_StartObjective_C_SetParams_Params
{
	float                                              ObjectiveStartDelay;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TimerLength;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       ObjectiveText;                                            // (CPF_Parm)
	struct FGameplayTagContainer                       RewardTags;                                               // (CPF_Parm)
	bool                                               bReuseableBonusObjective;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UGen_BonusTimeLimit_StartObjective_C*        ThisObject;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
