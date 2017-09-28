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

// Function HuskInterface.HuskInterface_C.ManageBurpEffect
struct UHuskInterface_C_ManageBurpEffect_Params
{
	bool                                               Enabled;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HuskInterface.HuskInterface_C.BeeCloudDespawned
struct UHuskInterface_C_BeeCloudDespawned_Params
{
	class AFortProjectileBase*                         Cloud;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HuskInterface.HuskInterface_C.FSMBeginPropaneTankMelee
struct UHuskInterface_C_FSMBeginPropaneTankMelee_Params
{
};

// Function HuskInterface.HuskInterface_C.FSMFailedToSpawnTank
struct UHuskInterface_C_FSMFailedToSpawnTank_Params
{
};

// Function HuskInterface.HuskInterface_C.FSMRemovePropaneTank
struct UHuskInterface_C_FSMRemovePropaneTank_Params
{
};

// Function HuskInterface.HuskInterface_C.IgnitePropaneTank
struct UHuskInterface_C_IgnitePropaneTank_Params
{
	class AFortPawn*                                   Pawn;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RemainingFuseTime;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               JustDrop;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
