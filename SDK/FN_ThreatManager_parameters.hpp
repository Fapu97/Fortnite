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

// Function ThreatManager.ThreatManager_C.UserConstructionScript
struct AThreatManager_C_UserConstructionScript_Params
{
};

// Function ThreatManager.ThreatManager_C.OnBeginThreatVisualsPrecursor
struct AThreatManager_C_OnBeginThreatVisualsPrecursor_Params
{
	class AActor**                                     SourceActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector*                                    EndLocation;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function ThreatManager.ThreatManager_C.OnWorldReady
struct AThreatManager_C_OnWorldReady_Params
{
};

// Function ThreatManager.ThreatManager_C.ReceiveBeginPlay
struct AThreatManager_C_ReceiveBeginPlay_Params
{
};

// Function ThreatManager.ThreatManager_C.ExecuteUbergraph_ThreatManager
struct AThreatManager_C_ExecuteUbergraph_ThreatManager_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
