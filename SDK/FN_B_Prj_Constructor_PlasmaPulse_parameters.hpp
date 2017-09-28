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

// Function B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C.OnRep_Explode
struct AB_Prj_Constructor_PlasmaPulse_C_OnRep_Explode_Params
{
};

// Function B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C.UserConstructionScript
struct AB_Prj_Constructor_PlasmaPulse_C_UserConstructionScript_Params
{
};

// Function B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C.FlashShield
struct AB_Prj_Constructor_PlasmaPulse_C_FlashShield_Params
{
};

// Function B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C.OnStop
struct AB_Prj_Constructor_PlasmaPulse_C_OnStop_Params
{
	struct FHitResult*                                 Hit;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C.ReceiveBeginPlay
struct AB_Prj_Constructor_PlasmaPulse_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C.ReceiveEndPlay
struct AB_Prj_Constructor_PlasmaPulse_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C.AttachedObj_Died
struct AB_Prj_Constructor_PlasmaPulse_C_AttachedObj_Died_Params
{
	class AActor*                                      DamagedActor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (CPF_Parm, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         FHitComponent;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (CPF_Parm, CPF_IsPlainOldData)
};

// Function B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C.BaseDestroyed
struct AB_Prj_Constructor_PlasmaPulse_C_BaseDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C.ExecuteUbergraph_B_Prj_Constructor_PlasmaPulse
struct AB_Prj_Constructor_PlasmaPulse_C_ExecuteUbergraph_B_Prj_Constructor_PlasmaPulse_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
