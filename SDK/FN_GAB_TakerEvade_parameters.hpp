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

// Function GAB_TakerEvade.GAB_TakerEvade_C.K2_CanActivateAbility
struct UGAB_TakerEvade_C_K2_CanActivateAbility_Params
{
	struct FGameplayAbilityActorInfo*                  ActorInfo;                                                // (CPF_Parm)
	struct FGameplayTagContainer                       RelevantTags;                                             // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GAB_TakerEvade.GAB_TakerEvade_C.K2_ActivateAbility
struct UGAB_TakerEvade_C_K2_ActivateAbility_Params
{
};

// Function GAB_TakerEvade.GAB_TakerEvade_C.K2_OnEndAbility
struct UGAB_TakerEvade_C_K2_OnEndAbility_Params
{
};

// Function GAB_TakerEvade.GAB_TakerEvade_C.EvadeComplete
struct UGAB_TakerEvade_C_EvadeComplete_Params
{
};

// Function GAB_TakerEvade.GAB_TakerEvade_C.OnQueryFinishedEvent
struct UGAB_TakerEvade_C_OnQueryFinishedEvent_Params
{
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EEnvQueryStatus>                       QueryStatus;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GAB_TakerEvade.GAB_TakerEvade_C.ExecuteUbergraph_GAB_TakerEvade
struct UGAB_TakerEvade_C_ExecuteUbergraph_GAB_TakerEvade_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
