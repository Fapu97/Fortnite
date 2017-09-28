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

// Function B_Prj_Constructor_MiniPulse.B_Prj_Constructor_MiniPulse_C.UserConstructionScript
struct AB_Prj_Constructor_MiniPulse_C_UserConstructionScript_Params
{
};

// Function B_Prj_Constructor_MiniPulse.B_Prj_Constructor_MiniPulse_C.ReceiveBeginPlay
struct AB_Prj_Constructor_MiniPulse_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_Constructor_MiniPulse.B_Prj_Constructor_MiniPulse_C.OnBounce
struct AB_Prj_Constructor_MiniPulse_C_OnBounce_Params
{
	struct FHitResult*                                 Hit;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function B_Prj_Constructor_MiniPulse.B_Prj_Constructor_MiniPulse_C.OnExploded
struct AB_Prj_Constructor_MiniPulse_C_OnExploded_Params
{
	TArray<class AActor*>*                             HitActors;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	TArray<struct FHitResult>*                         HitResults;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function B_Prj_Constructor_MiniPulse.B_Prj_Constructor_MiniPulse_C.Explode
struct AB_Prj_Constructor_MiniPulse_C_Explode_Params
{
};

// Function B_Prj_Constructor_MiniPulse.B_Prj_Constructor_MiniPulse_C.ExecuteUbergraph_B_Prj_Constructor_MiniPulse
struct AB_Prj_Constructor_MiniPulse_C_ExecuteUbergraph_B_Prj_Constructor_MiniPulse_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
