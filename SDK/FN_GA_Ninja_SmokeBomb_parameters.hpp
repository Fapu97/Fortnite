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

// Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.SetupAbility
struct UGA_Ninja_SmokeBomb_C_SetupAbility_Params
{
	class UAbilitySystemComponent*                     AbilitySystem;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.ThrowSmokeBomb
struct UGA_Ninja_SmokeBomb_C_ThrowSmokeBomb_Params
{
	class APlayerPawn_Ninja_C*                         Requestor;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Location;                                                 // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	struct FFortGameplayEffectContainerSpec            EffectSpec;                                               // (CPF_Parm, CPF_OutParm)
};

// Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.Completed_3644944049E84BE80D314DBC53F664CB
struct UGA_Ninja_SmokeBomb_C_Completed_3644944049E84BE80D314DBC53F664CB_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.Cancelled_3644944049E84BE80D314DBC53F664CB
struct UGA_Ninja_SmokeBomb_C_Cancelled_3644944049E84BE80D314DBC53F664CB_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.Triggered_3644944049E84BE80D314DBC53F664CB
struct UGA_Ninja_SmokeBomb_C_Triggered_3644944049E84BE80D314DBC53F664CB_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.Destroyed_4C7C12404F5C962CA59DD49973166CB9
struct UGA_Ninja_SmokeBomb_C_Destroyed_4C7C12404F5C962CA59DD49973166CB9_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.Exploded_4C7C12404F5C962CA59DD49973166CB9
struct UGA_Ninja_SmokeBomb_C_Exploded_4C7C12404F5C962CA59DD49973166CB9_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.Stopped_4C7C12404F5C962CA59DD49973166CB9
struct UGA_Ninja_SmokeBomb_C_Stopped_4C7C12404F5C962CA59DD49973166CB9_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.Bounced_4C7C12404F5C962CA59DD49973166CB9
struct UGA_Ninja_SmokeBomb_C_Bounced_4C7C12404F5C962CA59DD49973166CB9_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.Touched_4C7C12404F5C962CA59DD49973166CB9
struct UGA_Ninja_SmokeBomb_C_Touched_4C7C12404F5C962CA59DD49973166CB9_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.Created_4C7C12404F5C962CA59DD49973166CB9
struct UGA_Ninja_SmokeBomb_C_Created_4C7C12404F5C962CA59DD49973166CB9_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.K2_ActivateAbility
struct UGA_Ninja_SmokeBomb_C_K2_ActivateAbility_Params
{
};

// Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.ExecuteUbergraph_GA_Ninja_SmokeBomb
struct UGA_Ninja_SmokeBomb_C_ExecuteUbergraph_GA_Ninja_SmokeBomb_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
