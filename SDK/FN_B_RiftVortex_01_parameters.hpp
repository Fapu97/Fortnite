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

// Function B_RiftVortex_01.B_RiftVortex_01_C.UserConstructionScript
struct AB_RiftVortex_01_C_UserConstructionScript_Params
{
};

// Function B_RiftVortex_01.B_RiftVortex_01_C.ScaleSplineIn
struct AB_RiftVortex_01_C_ScaleSplineIn_Params
{
};

// Function B_RiftVortex_01.B_RiftVortex_01_C.LightningStrike
struct AB_RiftVortex_01_C_LightningStrike_Params
{
};

// Function B_RiftVortex_01.B_RiftVortex_01_C.ScaleSplineOut
struct AB_RiftVortex_01_C_ScaleSplineOut_Params
{
};

// Function B_RiftVortex_01.B_RiftVortex_01_C.ReceiveBeginPlay
struct AB_RiftVortex_01_C_ReceiveBeginPlay_Params
{
};

// Function B_RiftVortex_01.B_RiftVortex_01_C.OnRiftDied
struct AB_RiftVortex_01_C_OnRiftDied_Params
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

// Function B_RiftVortex_01.B_RiftVortex_01_C.OnRiftDestroyed
struct AB_RiftVortex_01_C_OnRiftDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_RiftVortex_01.B_RiftVortex_01_C.ExecuteUbergraph_B_RiftVortex_01
struct AB_RiftVortex_01_C_ExecuteUbergraph_B_RiftVortex_01_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
