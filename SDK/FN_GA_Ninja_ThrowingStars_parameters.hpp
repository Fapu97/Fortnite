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

// Function GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C.GetProjectileDirection
struct UGA_Ninja_ThrowingStars_C_GetProjectileDirection_Params
{
	struct FVector                                     ShootLocation;                                            // (CPF_Parm, CPF_IsPlainOldData)
	float                                              ProjectileOffset;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRotator                                    Output_Get;                                               // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C.GetCameraLocationAndRotation
struct UGA_Ninja_ThrowingStars_C_GetCameraLocationAndRotation_Params
{
	struct FVector                                     OutLocation;                                              // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	struct FRotator                                    OutRotation;                                              // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C.SetupAbility
struct UGA_Ninja_ThrowingStars_C_SetupAbility_Params
{
	class UAbilitySystemComponent*                     AbilitySystem;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C.ThrowLeftRightStars
struct UGA_Ninja_ThrowingStars_C_ThrowLeftRightStars_Params
{
	struct FVector                                     SpawnLocation;                                            // (CPF_Parm, CPF_IsPlainOldData)
};

// Function GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C.ThrowCenterStar
struct UGA_Ninja_ThrowingStars_C_ThrowCenterStar_Params
{
	struct FVector                                     SpawnLocation;                                            // (CPF_Parm, CPF_IsPlainOldData)
};

// Function GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C.SpawnThrowingStar
struct UGA_Ninja_ThrowingStars_C_SpawnThrowingStar_Params
{
	struct FVector                                     Transform_Offset;                                         // (CPF_Parm, CPF_IsPlainOldData)
	float                                              Horizontal_Spread;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     SpawnLocation;                                            // (CPF_Parm, CPF_IsPlainOldData)
};

// Function GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C.Completed_20F4552B47AEFEE227BE49B45FEAFF93
struct UGA_Ninja_ThrowingStars_C_Completed_20F4552B47AEFEE227BE49B45FEAFF93_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C.Cancelled_20F4552B47AEFEE227BE49B45FEAFF93
struct UGA_Ninja_ThrowingStars_C_Cancelled_20F4552B47AEFEE227BE49B45FEAFF93_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C.Triggered_20F4552B47AEFEE227BE49B45FEAFF93
struct UGA_Ninja_ThrowingStars_C_Triggered_20F4552B47AEFEE227BE49B45FEAFF93_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C.K2_ActivateAbility
struct UGA_Ninja_ThrowingStars_C_K2_ActivateAbility_Params
{
};

// Function GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C.ServerThrowStars
struct UGA_Ninja_ThrowingStars_C_ServerThrowStars_Params
{
	struct FVector                                     SpawnLocation;                                            // (CPF_Parm, CPF_IsPlainOldData)
};

// Function GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C.ExecuteUbergraph_GA_Ninja_ThrowingStars
struct UGA_Ninja_ThrowingStars_C_ExecuteUbergraph_GA_Ninja_ThrowingStars_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
