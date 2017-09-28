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

// Function V2_ItemCardFront.V2_ItemCardFront_C.Get_CardOverlay_ToolTipWidget_2
struct UV2_ItemCardFront_C_Get_CardOverlay_ToolTipWidget_2_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function V2_ItemCardFront.V2_ItemCardFront_C.Draw_Card
struct UV2_ItemCardFront_C_Draw_Card_Params
{
};

// Function V2_ItemCardFront.V2_ItemCardFront_C.Initialize_Card
struct UV2_ItemCardFront_C_Initialize_Card_Params
{
	struct FCard                                       inCard;                                                   // (CPF_Parm)
};

// Function V2_ItemCardFront.V2_ItemCardFront_C.Construct
struct UV2_ItemCardFront_C_Construct_Params
{
};

// Function V2_ItemCardFront.V2_ItemCardFront_C.OnFortStoreStateChanged
struct UV2_ItemCardFront_C_OnFortStoreStateChanged_Params
{
};

// Function V2_ItemCardFront.V2_ItemCardFront_C.InitFromObject
struct UV2_ItemCardFront_C_InitFromObject_Params
{
	class UObject*                                     InitObject;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function V2_ItemCardFront.V2_ItemCardFront_C.ExecuteUbergraph_V2_ItemCardFront
struct UV2_ItemCardFront_C_ExecuteUbergraph_V2_ItemCardFront_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
