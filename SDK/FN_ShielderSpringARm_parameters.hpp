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

// Function ShielderSpringARm.ShielderSpringArm_C.UserConstructionScript
struct AShielderSpringArm_C_UserConstructionScript_Params
{
};

// Function ShielderSpringARm.ShielderSpringArm_C.ReceiveTick
struct AShielderSpringArm_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ShielderSpringARm.ShielderSpringArm_C.ReceiveBeginPlay
struct AShielderSpringArm_C_ReceiveBeginPlay_Params
{
};

// Function ShielderSpringARm.ShielderSpringArm_C.HitFlashFX
struct AShielderSpringArm_C_HitFlashFX_Params
{
};

// Function ShielderSpringARm.ShielderSpringArm_C.ExecuteUbergraph_ShielderSpringArm
struct AShielderSpringArm_C_ExecuteUbergraph_ShielderSpringArm_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
