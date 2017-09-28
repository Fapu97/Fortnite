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

// Function GA_Outlander_BearFragment.GA_Outlander_BearFragment_C.BearFragment
struct UGA_Outlander_BearFragment_C_BearFragment_Params
{
};

// Function GA_Outlander_BearFragment.GA_Outlander_BearFragment_C.ApplyStatScaling
struct UGA_Outlander_BearFragment_C_ApplyStatScaling_Params
{
	class ABuildingGameplayActor*                      Bear_Reference;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GA_Outlander_BearFragment.GA_Outlander_BearFragment_C.SpawnFragment
struct UGA_Outlander_BearFragment_C_SpawnFragment_Params
{
};

// Function GA_Outlander_BearFragment.GA_Outlander_BearFragment_C.SetupAbility
struct UGA_Outlander_BearFragment_C_SetupAbility_Params
{
	class UAbilitySystemComponent**                    AbilitySystem;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GA_Outlander_BearFragment.GA_Outlander_BearFragment_C.ExecuteUbergraph_GA_Outlander_BearFragment
struct UGA_Outlander_BearFragment_C_ExecuteUbergraph_GA_Outlander_BearFragment_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
