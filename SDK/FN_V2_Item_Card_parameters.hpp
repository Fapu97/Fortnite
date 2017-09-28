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

// Function V2_Item_Card.V2_Item_Card_C.Draw_Card
struct UV2_Item_Card_C_Draw_Card_Params
{
};

// Function V2_Item_Card.V2_Item_Card_C.Get_CardOverlay_ToolTipWidget_2
struct UV2_Item_Card_C_Get_CardOverlay_ToolTipWidget_2_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function V2_Item_Card.V2_Item_Card_C.ShowCardBack
struct UV2_Item_Card_C_ShowCardBack_Params
{
};

// Function V2_Item_Card.V2_Item_Card_C.ShowCardFront
struct UV2_Item_Card_C_ShowCardFront_Params
{
};

// Function V2_Item_Card.V2_Item_Card_C.Initialize_Card
struct UV2_Item_Card_C_Initialize_Card_Params
{
	struct FCard                                       inCard;                                                   // (CPF_Parm)
	bool                                               isOn3DCard;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               isFront;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function V2_Item_Card.V2_Item_Card_C.OnFortStoreStateChanged
struct UV2_Item_Card_C_OnFortStoreStateChanged_Params
{
};

// Function V2_Item_Card.V2_Item_Card_C.Construct
struct UV2_Item_Card_C_Construct_Params
{
};

// Function V2_Item_Card.V2_Item_Card_C.OnMouseEnter
struct UV2_Item_Card_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function V2_Item_Card.V2_Item_Card_C.OnMouseLeave
struct UV2_Item_Card_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function V2_Item_Card.V2_Item_Card_C.ExecuteUbergraph_V2_Item_Card
struct UV2_Item_Card_C_ExecuteUbergraph_V2_Item_Card_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
