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

// Function B_Prj_Ninja_SmokeBomb.B_Prj_Ninja_SmokeBomb_C.UserConstructionScript
struct AB_Prj_Ninja_SmokeBomb_C_UserConstructionScript_Params
{
};

// Function B_Prj_Ninja_SmokeBomb.B_Prj_Ninja_SmokeBomb_C.ReceiveHit
struct AB_Prj_Ninja_SmokeBomb_C_ReceiveHit_Params
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

// Function B_Prj_Ninja_SmokeBomb.B_Prj_Ninja_SmokeBomb_C.OnExploded
struct AB_Prj_Ninja_SmokeBomb_C_OnExploded_Params
{
	TArray<class AActor*>*                             HitActors;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	TArray<struct FHitResult>*                         HitResults;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function B_Prj_Ninja_SmokeBomb.B_Prj_Ninja_SmokeBomb_C.ReceiveBeginPlay
struct AB_Prj_Ninja_SmokeBomb_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_Ninja_SmokeBomb.B_Prj_Ninja_SmokeBomb_C.VelocityCheck
struct AB_Prj_Ninja_SmokeBomb_C_VelocityCheck_Params
{
};

// Function B_Prj_Ninja_SmokeBomb.B_Prj_Ninja_SmokeBomb_C.ExecuteUbergraph_B_Prj_Ninja_SmokeBomb
struct AB_Prj_Ninja_SmokeBomb_C_ExecuteUbergraph_B_Prj_Ninja_SmokeBomb_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
