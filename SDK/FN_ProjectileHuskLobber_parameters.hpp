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

// Function ProjectileHuskLobber.ProjectileHuskLobber_C.ImpactOnHit
struct AProjectileHuskLobber_C_ImpactOnHit_Params
{
	struct FVector                                     HitLocation;                                              // (CPF_Parm, CPF_IsPlainOldData)
};

// Function ProjectileHuskLobber.ProjectileHuskLobber_C.UserConstructionScript
struct AProjectileHuskLobber_C_UserConstructionScript_Params
{
};

// Function ProjectileHuskLobber.ProjectileHuskLobber_C.Timeline_0__FinishedFunc
struct AProjectileHuskLobber_C_Timeline_0__FinishedFunc_Params
{
};

// Function ProjectileHuskLobber.ProjectileHuskLobber_C.Timeline_0__UpdateFunc
struct AProjectileHuskLobber_C_Timeline_0__UpdateFunc_Params
{
};

// Function ProjectileHuskLobber.ProjectileHuskLobber_C.ReceiveHit
struct AProjectileHuskLobber_C_ReceiveHit_Params
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

// Function ProjectileHuskLobber.ProjectileHuskLobber_C.ProjectileShot_Event
struct AProjectileHuskLobber_C_ProjectileShot_Event_Params
{
	struct FVector                                     Location;                                                 // (CPF_Parm, CPF_IsPlainOldData)
};

// Function ProjectileHuskLobber.ProjectileHuskLobber_C.OnShot
struct AProjectileHuskLobber_C_OnShot_Params
{
	struct FHitResult*                                 Hit;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function ProjectileHuskLobber.ProjectileHuskLobber_C.ExecuteUbergraph_ProjectileHuskLobber
struct AProjectileHuskLobber_C_ExecuteUbergraph_ProjectileHuskLobber_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ProjectileHuskLobber.ProjectileHuskLobber_C.ProjectileShot__DelegateSignature
struct AProjectileHuskLobber_C_ProjectileShot__DelegateSignature_Params
{
	struct FVector                                     Location;                                                 // (CPF_Parm, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
