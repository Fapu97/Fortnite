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

// Function Prj_HuskDwarfLeap.Prj_HuskDwarfLeap_C.ImpactOnHit
struct APrj_HuskDwarfLeap_C_ImpactOnHit_Params
{
	struct FVector                                     HitLocation;                                              // (CPF_Parm, CPF_IsPlainOldData)
};

// Function Prj_HuskDwarfLeap.Prj_HuskDwarfLeap_C.UserConstructionScript
struct APrj_HuskDwarfLeap_C_UserConstructionScript_Params
{
};

// Function Prj_HuskDwarfLeap.Prj_HuskDwarfLeap_C.OnShot
struct APrj_HuskDwarfLeap_C_OnShot_Params
{
	struct FHitResult*                                 Hit;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function Prj_HuskDwarfLeap.Prj_HuskDwarfLeap_C.ReceiveHit
struct APrj_HuskDwarfLeap_C_ReceiveHit_Params
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

// Function Prj_HuskDwarfLeap.Prj_HuskDwarfLeap_C.ExecuteUbergraph_Prj_HuskDwarfLeap
struct APrj_HuskDwarfLeap_C_ExecuteUbergraph_Prj_HuskDwarfLeap_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
