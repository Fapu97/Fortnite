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

// Function Gen_RecommendedBuild_StartObjective.Gen_RecommendedBuild_StartObjective_C.BreakParams
struct UGen_RecommendedBuild_StartObjective_C_BreakParams_Params
{
	float                                              ObjectiveStartDelay;                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BuildLimit;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       ObjectiveTextPrefix;                                      // (CPF_Parm, CPF_OutParm)
	float                                              BuildDistance;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       RewardTags;                                               // (CPF_Parm, CPF_OutParm)
	TArray<class AActor*>                              TargetArray;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function Gen_RecommendedBuild_StartObjective.Gen_RecommendedBuild_StartObjective_C.SetParams
struct UGen_RecommendedBuild_StartObjective_C_SetParams_Params
{
	float                                              ObjectiveStartDelay;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BuildLimit;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       ObjectiveTextPrefix;                                      // (CPF_Parm)
	struct FGameplayTagContainer                       RewardTags;                                               // (CPF_Parm)
	float                                              BuildDistanceLimt;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      Target;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class AActor*>                              Targets;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	class UGen_RecommendedBuild_StartObjective_C*      ThisObject;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
