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

// Function Throbber_Fullscreen.Throbber_Fullscreen_C.Init
struct UThrobber_Fullscreen_C_Init_Params
{
	struct FText                                       InText;                                                   // (CPF_Parm)
	bool                                               inShowLightbox;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Throbber_Fullscreen.Throbber_Fullscreen_C.OnHandleAction
struct UThrobber_Fullscreen_C_OnHandleAction_Params
{
	struct FEventReply                                 Result;                                                   // (CPF_Parm, CPF_OutParm)
	bool                                               bPassThrough;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Throbber_Fullscreen.Throbber_Fullscreen_C.Construct
struct UThrobber_Fullscreen_C_Construct_Params
{
};

// Function Throbber_Fullscreen.Throbber_Fullscreen_C.ExecuteUbergraph_Throbber_Fullscreen
struct UThrobber_Fullscreen_C_ExecuteUbergraph_Throbber_Fullscreen_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
