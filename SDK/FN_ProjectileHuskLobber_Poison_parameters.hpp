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

// Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.Is Valid Damage Target
struct AProjectileHuskLobber_Poison_C_Is_Valid_Damage_Target_Params
{
	class AActor*                                      CollidingActor;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Is_Valid_Damage_Target;                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AFortPawn*                                   Valid_Pawn;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.UserConstructionScript
struct AProjectileHuskLobber_Poison_C_UserConstructionScript_Params
{
};

// Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.Timeline_0__FinishedFunc
struct AProjectileHuskLobber_Poison_C_Timeline_0__FinishedFunc_Params
{
};

// Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.Timeline_0__UpdateFunc
struct AProjectileHuskLobber_Poison_C_Timeline_0__UpdateFunc_Params
{
};

// Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.ReceiveHit
struct AProjectileHuskLobber_Poison_C_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     Other;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.EndCloud
struct AProjectileHuskLobber_Poison_C_EndCloud_Params
{
};

// Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.BndEvt__PoisonArea_K2Node_ComponentBoundEvent_97_ComponentEndOverlapSignature__DelegateSignature
struct AProjectileHuskLobber_Poison_C_BndEvt__PoisonArea_K2Node_ComponentBoundEvent_97_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.EndCloudEffect
struct AProjectileHuskLobber_Poison_C_EndCloudEffect_Params
{
};

// Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.OnShot
struct AProjectileHuskLobber_Poison_C_OnShot_Params
{
	struct FHitResult*                                 Hit;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.ProjectileShot_Event
struct AProjectileHuskLobber_Poison_C_ProjectileShot_Event_Params
{
	struct FHitResult                                  Hit;                                                      // (CPF_Parm, CPF_IsPlainOldData)
};

// Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.ExecuteUbergraph_ProjectileHuskLobber_Poison
struct AProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.ProjectileShot__DelegateSignature
struct AProjectileHuskLobber_Poison_C_ProjectileShot__DelegateSignature_Params
{
	struct FHitResult                                  Hit;                                                      // (CPF_Parm, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
