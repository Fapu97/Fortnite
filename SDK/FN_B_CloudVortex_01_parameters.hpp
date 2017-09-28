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

// Function B_CloudVortex_01.B_CloudVortex_01_C.CleanupInstanceVariables
struct AB_CloudVortex_01_C_CleanupInstanceVariables_Params
{
};

// Function B_CloudVortex_01.B_CloudVortex_01_C.FinishVortex
struct AB_CloudVortex_01_C_FinishVortex_Params
{
};

// Function B_CloudVortex_01.B_CloudVortex_01_C.VortexRingFXParams
struct AB_CloudVortex_01_C_VortexRingFXParams_Params
{
	bool                                               Active_;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_CloudVortex_01.B_CloudVortex_01_C.VortexBaseFXParams
struct AB_CloudVortex_01_C_VortexBaseFXParams_Params
{
	bool                                               Active_;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_CloudVortex_01.B_CloudVortex_01_C.TickQualityCheck
struct AB_CloudVortex_01_C_TickQualityCheck_Params
{
	bool                                               Disable_Tick;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_CloudVortex_01.B_CloudVortex_01_C.ShowHideVortex
struct AB_CloudVortex_01_C_ShowHideVortex_Params
{
	bool                                               Visible;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_CloudVortex_01.B_CloudVortex_01_C.UserConstructionScript
struct AB_CloudVortex_01_C_UserConstructionScript_Params
{
};

// Function B_CloudVortex_01.B_CloudVortex_01_C.ReceiveBeginPlay
struct AB_CloudVortex_01_C_ReceiveBeginPlay_Params
{
};

// Function B_CloudVortex_01.B_CloudVortex_01_C.AnimateLoop
struct AB_CloudVortex_01_C_AnimateLoop_Params
{
};

// Function B_CloudVortex_01.B_CloudVortex_01_C.DebugLoop
struct AB_CloudVortex_01_C_DebugLoop_Params
{
};

// Function B_CloudVortex_01.B_CloudVortex_01_C.ScaleSplineIn
struct AB_CloudVortex_01_C_ScaleSplineIn_Params
{
	bool                                               Pooled;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_CloudVortex_01.B_CloudVortex_01_C.ReceiveTick
struct AB_CloudVortex_01_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_CloudVortex_01.B_CloudVortex_01_C.ScaleSplineOut
struct AB_CloudVortex_01_C_ScaleSplineOut_Params
{
};

// Function B_CloudVortex_01.B_CloudVortex_01_C.RandomLightning
struct AB_CloudVortex_01_C_RandomLightning_Params
{
};

// Function B_CloudVortex_01.B_CloudVortex_01_C.LightningStrike
struct AB_CloudVortex_01_C_LightningStrike_Params
{
};

// Function B_CloudVortex_01.B_CloudVortex_01_C.StartVortexPostSetup
struct AB_CloudVortex_01_C_StartVortexPostSetup_Params
{
};

// Function B_CloudVortex_01.B_CloudVortex_01_C.PIE
struct AB_CloudVortex_01_C_PIE_Params
{
};

// Function B_CloudVortex_01.B_CloudVortex_01_C.ExecuteUbergraph_B_CloudVortex_01
struct AB_CloudVortex_01_C_ExecuteUbergraph_B_CloudVortex_01_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_CloudVortex_01.B_CloudVortex_01_C.VortexReturnedToPool__DelegateSignature
struct AB_CloudVortex_01_C_VortexReturnedToPool__DelegateSignature_Params
{
	class AB_CloudVortex_01_C*                         Vortex;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
