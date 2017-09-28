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

// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.OnRep_MaxPierceTargets
struct AB_Prj_Ninja_ThrowingStars_C_OnRep_MaxPierceTargets_Params
{
};

// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.OnRep_Poison
struct AB_Prj_Ninja_ThrowingStars_C_OnRep_Poison_Params
{
};

// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.OnRep_Piercing
struct AB_Prj_Ninja_ThrowingStars_C_OnRep_Piercing_Params
{
};

// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.OnRep_HitLocation
struct AB_Prj_Ninja_ThrowingStars_C_OnRep_HitLocation_Params
{
};

// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.UserConstructionScript
struct AB_Prj_Ninja_ThrowingStars_C_UserConstructionScript_Params
{
};

// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.OnExploded
struct AB_Prj_Ninja_ThrowingStars_C_OnExploded_Params
{
	TArray<class AActor*>*                             HitActors;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	TArray<struct FHitResult>*                         HitResults;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.ShouldPierce
struct AB_Prj_Ninja_ThrowingStars_C_ShouldPierce_Params
{
	int                                                NumberOfTargets;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.ReceiveHit
struct AB_Prj_Ninja_ThrowingStars_C_ReceiveHit_Params
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

// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.OnTouched
struct AB_Prj_Ninja_ThrowingStars_C_OnTouched_Params
{
	class AActor**                                     OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult*                                 HitResult;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.PoisonStars
struct AB_Prj_Ninja_ThrowingStars_C_PoisonStars_Params
{
};

// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.ExecuteUbergraph_B_Prj_Ninja_ThrowingStars
struct AB_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
