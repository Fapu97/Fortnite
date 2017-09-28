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

// Function B_Prj_Llama_Head.B_Prj_Llama_Head_C.SpawnBounceFX
struct AB_Prj_Llama_Head_C_SpawnBounceFX_Params
{
	struct FHitResult                                  Hit;                                                      // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRotator                                    HitResultRotation;                                        // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function B_Prj_Llama_Head.B_Prj_Llama_Head_C.UserConstructionScript
struct AB_Prj_Llama_Head_C_UserConstructionScript_Params
{
};

// Function B_Prj_Llama_Head.B_Prj_Llama_Head_C.OnBounce
struct AB_Prj_Llama_Head_C_OnBounce_Params
{
	struct FHitResult*                                 Hit;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function B_Prj_Llama_Head.B_Prj_Llama_Head_C.ReceiveTick
struct AB_Prj_Llama_Head_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Prj_Llama_Head.B_Prj_Llama_Head_C.OnProjectileStop_Event_1
struct AB_Prj_Llama_Head_C_OnProjectileStop_Event_1_Params
{
	struct FHitResult                                  ImpactResult;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function B_Prj_Llama_Head.B_Prj_Llama_Head_C.ReceiveBeginPlay
struct AB_Prj_Llama_Head_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_Llama_Head.B_Prj_Llama_Head_C.ExecuteUbergraph_B_Prj_Llama_Head
struct AB_Prj_Llama_Head_C_ExecuteUbergraph_B_Prj_Llama_Head_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
