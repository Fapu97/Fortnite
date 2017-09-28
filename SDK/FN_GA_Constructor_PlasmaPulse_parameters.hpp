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

// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.GetPlasmaPulseTargetLocation
struct UGA_Constructor_PlasmaPulse_C_GetPlasmaPulseTargetLocation_Params
{
	class UObject*                                     Object;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Loc;                                                      // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.GetPlasmaPulseSocketLocation
struct UGA_Constructor_PlasmaPulse_C_GetPlasmaPulseSocketLocation_Params
{
	class UObject*                                     Object;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Loc;                                                      // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.SpawnMiniPulses
struct UGA_Constructor_PlasmaPulse_C_SpawnMiniPulses_Params
{
	class AActor*                                      ParentPulse;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (CPF_Parm, CPF_IsPlainOldData)
	struct FFortGameplayEffectContainerSpec            EffectContainerSpec;                                      // (CPF_Parm)
};

// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.SetupAbility
struct UGA_Constructor_PlasmaPulse_C_SetupAbility_Params
{
	class UAbilitySystemComponent*                     AbilitySystem;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.Destroyed_76104D9B4F6C3F61303653918697EC35
struct UGA_Constructor_PlasmaPulse_C_Destroyed_76104D9B4F6C3F61303653918697EC35_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.Exploded_76104D9B4F6C3F61303653918697EC35
struct UGA_Constructor_PlasmaPulse_C_Exploded_76104D9B4F6C3F61303653918697EC35_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.Stopped_76104D9B4F6C3F61303653918697EC35
struct UGA_Constructor_PlasmaPulse_C_Stopped_76104D9B4F6C3F61303653918697EC35_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.Bounced_76104D9B4F6C3F61303653918697EC35
struct UGA_Constructor_PlasmaPulse_C_Bounced_76104D9B4F6C3F61303653918697EC35_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.Touched_76104D9B4F6C3F61303653918697EC35
struct UGA_Constructor_PlasmaPulse_C_Touched_76104D9B4F6C3F61303653918697EC35_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.Created_76104D9B4F6C3F61303653918697EC35
struct UGA_Constructor_PlasmaPulse_C_Created_76104D9B4F6C3F61303653918697EC35_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.Completed_6AC3F9A4491B91FDE0457DAC0E8B468B
struct UGA_Constructor_PlasmaPulse_C_Completed_6AC3F9A4491B91FDE0457DAC0E8B468B_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.Cancelled_6AC3F9A4491B91FDE0457DAC0E8B468B
struct UGA_Constructor_PlasmaPulse_C_Cancelled_6AC3F9A4491B91FDE0457DAC0E8B468B_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.Triggered_6AC3F9A4491B91FDE0457DAC0E8B468B
struct UGA_Constructor_PlasmaPulse_C_Triggered_6AC3F9A4491B91FDE0457DAC0E8B468B_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.K2_ActivateAbility
struct UGA_Constructor_PlasmaPulse_C_K2_ActivateAbility_Params
{
};

// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.SpawnPulseProjectiles
struct UGA_Constructor_PlasmaPulse_C_SpawnPulseProjectiles_Params
{
};

// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.BindSpawnPulseProjectiles
struct UGA_Constructor_PlasmaPulse_C_BindSpawnPulseProjectiles_Params
{
};

// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.UnbindSpawnPulseProjectiles
struct UGA_Constructor_PlasmaPulse_C_UnbindSpawnPulseProjectiles_Params
{
};

// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.K2_OnEndAbility
struct UGA_Constructor_PlasmaPulse_C_K2_OnEndAbility_Params
{
};

// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.ExecuteUbergraph_GA_Constructor_PlasmaPulse
struct UGA_Constructor_PlasmaPulse_C_ExecuteUbergraph_GA_Constructor_PlasmaPulse_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
