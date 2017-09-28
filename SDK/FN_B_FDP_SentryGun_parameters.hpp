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

// Function B_FDP_SentryGun.B_FDP_SentryGun_C.SetupMIDForMeshComponent
struct AB_FDP_SentryGun_C_SetupMIDForMeshComponent_Params
{
	class UStaticMeshComponent*                        MeshComp;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_FDP_SentryGun.B_FDP_SentryGun_C.UserConstructionScript
struct AB_FDP_SentryGun_C_UserConstructionScript_Params
{
};

// Function B_FDP_SentryGun.B_FDP_SentryGun_C.OnInitializeDecoPreview
struct AB_FDP_SentryGun_C_OnInitializeDecoPreview_Params
{
	class ABuildingActor**                             NewBuildingActor;                                         // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortDecoItemDefinition**                    NewDecoItemDefinition;                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_FDP_SentryGun.B_FDP_SentryGun_C.ExecuteUbergraph_B_FDP_SentryGun
struct AB_FDP_SentryGun_C_ExecuteUbergraph_B_FDP_SentryGun_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
