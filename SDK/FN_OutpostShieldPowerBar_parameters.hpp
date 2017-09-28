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

// Function OutpostShieldPowerBar.OutpostShieldPowerBar_C.SetPowerLevel
struct UOutpostShieldPowerBar_C_SetPowerLevel_Params
{
	int                                                Power_Level;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Is_Upgrade_Available;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OutpostShieldPowerBar.OutpostShieldPowerBar_C.PreConstruct
struct UOutpostShieldPowerBar_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OutpostShieldPowerBar.OutpostShieldPowerBar_C.ExecuteUbergraph_OutpostShieldPowerBar
struct UOutpostShieldPowerBar_C_ExecuteUbergraph_OutpostShieldPowerBar_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
