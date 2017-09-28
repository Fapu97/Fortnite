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

// Function ProjectileHuskPropane.ProjectileHuskPropane_C.SetTankInBT
struct AProjectileHuskPropane_C_SetTankInBT_Params
{
	class UObject*                                     ObjectToPassToBT;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     ObjectPassedToBT;                                         // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ProjectileHuskPropane.ProjectileHuskPropane_C.OnRep_TankOnGround
struct AProjectileHuskPropane_C_OnRep_TankOnGround_Params
{
};

// Function ProjectileHuskPropane.ProjectileHuskPropane_C.OnRep_TankShotsToExplodeProgress
struct AProjectileHuskPropane_C_OnRep_TankShotsToExplodeProgress_Params
{
};

// Function ProjectileHuskPropane.ProjectileHuskPropane_C.OnRep_Dropped
struct AProjectileHuskPropane_C_OnRep_Dropped_Params
{
};

// Function ProjectileHuskPropane.ProjectileHuskPropane_C.OnRep_IsDestroyed
struct AProjectileHuskPropane_C_OnRep_IsDestroyed_Params
{
};

// Function ProjectileHuskPropane.ProjectileHuskPropane_C.UserConstructionScript
struct AProjectileHuskPropane_C_UserConstructionScript_Params
{
};

// Function ProjectileHuskPropane.ProjectileHuskPropane_C.TankWiggle__FinishedFunc
struct AProjectileHuskPropane_C_TankWiggle__FinishedFunc_Params
{
};

// Function ProjectileHuskPropane.ProjectileHuskPropane_C.TankWiggle__UpdateFunc
struct AProjectileHuskPropane_C_TankWiggle__UpdateFunc_Params
{
};

// Function ProjectileHuskPropane.ProjectileHuskPropane_C.ExpandBeforeExplosion__FinishedFunc
struct AProjectileHuskPropane_C_ExpandBeforeExplosion__FinishedFunc_Params
{
};

// Function ProjectileHuskPropane.ProjectileHuskPropane_C.ExpandBeforeExplosion__UpdateFunc
struct AProjectileHuskPropane_C_ExpandBeforeExplosion__UpdateFunc_Params
{
};

// Function ProjectileHuskPropane.ProjectileHuskPropane_C.OnBounce
struct AProjectileHuskPropane_C_OnBounce_Params
{
	struct FHitResult*                                 Hit;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function ProjectileHuskPropane.ProjectileHuskPropane_C.ReceiveAnyDamage
struct AProjectileHuskPropane_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ProjectileHuskPropane.ProjectileHuskPropane_C.OnStop
struct AProjectileHuskPropane_C_OnStop_Params
{
	struct FHitResult*                                 Hit;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function ProjectileHuskPropane.ProjectileHuskPropane_C.BaseTookDamage
struct AProjectileHuskPropane_C_BaseTookDamage_Params
{
	class AActor*                                      DamagedActor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ProjectileHuskPropane.ProjectileHuskPropane_C.DropOrExplodeTank
struct AProjectileHuskPropane_C_DropOrExplodeTank_Params
{
	bool                                               Drop;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               MeleeDrop;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ProjectileHuskPropane.ProjectileHuskPropane_C.RemindAI
struct AProjectileHuskPropane_C_RemindAI_Params
{
};

// Function ProjectileHuskPropane.ProjectileHuskPropane_C.MyBaseDied
struct AProjectileHuskPropane_C_MyBaseDied_Params
{
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ProjectileHuskPropane.ProjectileHuskPropane_C.OnTankTakeDamage
struct AProjectileHuskPropane_C_OnTankTakeDamage_Params
{
};

// Function ProjectileHuskPropane.ProjectileHuskPropane_C.TankForceFXOn
struct AProjectileHuskPropane_C_TankForceFXOn_Params
{
};

// Function ProjectileHuskPropane.ProjectileHuskPropane_C.ShotgunTimeout
struct AProjectileHuskPropane_C_ShotgunTimeout_Params
{
};

// Function ProjectileHuskPropane.ProjectileHuskPropane_C.CheckDamageType
struct AProjectileHuskPropane_C_CheckDamageType_Params
{
};

// Function ProjectileHuskPropane.ProjectileHuskPropane_C.NotMeleeDamage
struct AProjectileHuskPropane_C_NotMeleeDamage_Params
{
};

// Function ProjectileHuskPropane.ProjectileHuskPropane_C.TankBaseDestroyed
struct AProjectileHuskPropane_C_TankBaseDestroyed_Params
{
};

// Function ProjectileHuskPropane.ProjectileHuskPropane_C.DelayExplosion?
struct AProjectileHuskPropane_C_DelayExplosion__Params
{
};

// Function ProjectileHuskPropane.ProjectileHuskPropane_C.ExplodeNow
struct AProjectileHuskPropane_C_ExplodeNow_Params
{
};

// Function ProjectileHuskPropane.ProjectileHuskPropane_C.AIKnowsTankHasDropped
struct AProjectileHuskPropane_C_AIKnowsTankHasDropped_Params
{
};

// Function ProjectileHuskPropane.ProjectileHuskPropane_C.ExpandThenExplode
struct AProjectileHuskPropane_C_ExpandThenExplode_Params
{
};

// Function ProjectileHuskPropane.ProjectileHuskPropane_C.ExecuteUbergraph_ProjectileHuskPropane
struct AProjectileHuskPropane_C_ExecuteUbergraph_ProjectileHuskPropane_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
