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

// Function TheaterSelectItem.TheaterSelectItem_C.GetData
struct UTheaterSelectItem_C_GetData_Params
{
	struct FFortTheaterMapData                         TheaterMapData;                                           // (CPF_Parm, CPF_OutParm)
};

// Function TheaterSelectItem.TheaterSelectItem_C.SetData
struct UTheaterSelectItem_C_SetData_Params
{
	struct FFortTheaterMapData                         TheaterMapData;                                           // (CPF_Parm)
	int                                                TheaterIndex;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
