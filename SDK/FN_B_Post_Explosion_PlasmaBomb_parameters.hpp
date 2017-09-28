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

// Function B_Post_Explosion_PlasmaBomb.B_Post_Explosion_PlasmaBomb_C.UserConstructionScript
struct AB_Post_Explosion_PlasmaBomb_C_UserConstructionScript_Params
{
};

// Function B_Post_Explosion_PlasmaBomb.B_Post_Explosion_PlasmaBomb_C.Timeline_0__FinishedFunc
struct AB_Post_Explosion_PlasmaBomb_C_Timeline_0__FinishedFunc_Params
{
};

// Function B_Post_Explosion_PlasmaBomb.B_Post_Explosion_PlasmaBomb_C.Timeline_0__UpdateFunc
struct AB_Post_Explosion_PlasmaBomb_C_Timeline_0__UpdateFunc_Params
{
};

// Function B_Post_Explosion_PlasmaBomb.B_Post_Explosion_PlasmaBomb_C.SpawnPostFX
struct AB_Post_Explosion_PlasmaBomb_C_SpawnPostFX_Params
{
	float                                              PostFX_BoxScaleDyn;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     PostFX_CamShakeLoc;                                       // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               PostFX_UseCamShake;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PostFX_DeactivateDelay;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               PostFX_UseForceFeedback;                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Post_Explosion_PlasmaBomb.B_Post_Explosion_PlasmaBomb_C.ExecuteUbergraph_B_Post_Explosion_PlasmaBomb
struct AB_Post_Explosion_PlasmaBomb_C_ExecuteUbergraph_B_Post_Explosion_PlasmaBomb_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
