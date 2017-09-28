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

// Function GA_Outlander_ShockTowerFragment.GA_Outlander_ShockTowerFragment_C.ShockTowerFragment
struct UGA_Outlander_ShockTowerFragment_C_ShockTowerFragment_Params
{
};

// Function GA_Outlander_ShockTowerFragment.GA_Outlander_ShockTowerFragment_C.SetupAbility
struct UGA_Outlander_ShockTowerFragment_C_SetupAbility_Params
{
	class UAbilitySystemComponent**                    AbilitySystem;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GA_Outlander_ShockTowerFragment.GA_Outlander_ShockTowerFragment_C.SpawnFragment
struct UGA_Outlander_ShockTowerFragment_C_SpawnFragment_Params
{
};

// Function GA_Outlander_ShockTowerFragment.GA_Outlander_ShockTowerFragment_C.ExecuteUbergraph_GA_Outlander_ShockTowerFragment
struct UGA_Outlander_ShockTowerFragment_C_ExecuteUbergraph_GA_Outlander_ShockTowerFragment_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
