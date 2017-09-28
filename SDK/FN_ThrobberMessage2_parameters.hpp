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

// Function ThrobberMessage2.ThrobberMessage2_C.Init
struct UThrobberMessage2_C_Init_Params
{
	struct FText                                       InText;                                                   // (CPF_Parm)
	bool                                               inShowLightbox;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ThrobberMessage2.ThrobberMessage2_C.Update
struct UThrobberMessage2_C_Update_Params
{
};

// Function ThrobberMessage2.ThrobberMessage2_C.Construct
struct UThrobberMessage2_C_Construct_Params
{
};

// Function ThrobberMessage2.ThrobberMessage2_C.ExecuteUbergraph_ThrobberMessage2
struct UThrobberMessage2_C_ExecuteUbergraph_ThrobberMessage2_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
