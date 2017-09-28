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

// Function OutpostShieldPowerBarPip.OutpostShieldPowerBarPip_C.SetUpgradeable
struct UOutpostShieldPowerBarPip_C_SetUpgradeable_Params
{
};

// Function OutpostShieldPowerBarPip.OutpostShieldPowerBarPip_C.SetInactive
struct UOutpostShieldPowerBarPip_C_SetInactive_Params
{
};

// Function OutpostShieldPowerBarPip.OutpostShieldPowerBarPip_C.SetActive
struct UOutpostShieldPowerBarPip_C_SetActive_Params
{
};

// Function OutpostShieldPowerBarPip.OutpostShieldPowerBarPip_C.SetState
struct UOutpostShieldPowerBarPip_C_SetState_Params
{
	TEnumAsByte<EOutpostShieldPowerBarPipState>        New_State;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OutpostShieldPowerBarPip.OutpostShieldPowerBarPip_C.PreConstruct
struct UOutpostShieldPowerBarPip_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OutpostShieldPowerBarPip.OutpostShieldPowerBarPip_C.ExecuteUbergraph_OutpostShieldPowerBarPip
struct UOutpostShieldPowerBarPip_C_ExecuteUbergraph_OutpostShieldPowerBarPip_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
