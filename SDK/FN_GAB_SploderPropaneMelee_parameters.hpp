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

// Function GAB_SploderPropaneMelee.GAB_SploderPropaneMelee_C.Completed_B859A3FB4799A1D447031885B89A89CE
struct UGAB_SploderPropaneMelee_C_Completed_B859A3FB4799A1D447031885B89A89CE_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GAB_SploderPropaneMelee.GAB_SploderPropaneMelee_C.Cancelled_B859A3FB4799A1D447031885B89A89CE
struct UGAB_SploderPropaneMelee_C_Cancelled_B859A3FB4799A1D447031885B89A89CE_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GAB_SploderPropaneMelee.GAB_SploderPropaneMelee_C.Triggered_B859A3FB4799A1D447031885B89A89CE
struct UGAB_SploderPropaneMelee_C_Triggered_B859A3FB4799A1D447031885B89A89CE_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GAB_SploderPropaneMelee.GAB_SploderPropaneMelee_C.K2_ActivateAbility
struct UGAB_SploderPropaneMelee_C_K2_ActivateAbility_Params
{
};

// Function GAB_SploderPropaneMelee.GAB_SploderPropaneMelee_C.ExecuteUbergraph_GAB_SploderPropaneMelee
struct UGAB_SploderPropaneMelee_C_ExecuteUbergraph_GAB_SploderPropaneMelee_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
