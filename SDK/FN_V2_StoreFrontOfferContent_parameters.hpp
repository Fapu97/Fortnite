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

// Function V2_StoreFrontOfferContent.V2_StoreFrontOfferContent_C.OnMouseButtonDown
struct UV2_StoreFrontOfferContent_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function V2_StoreFrontOfferContent.V2_StoreFrontOfferContent_C.SetContentSoldOutState
struct UV2_StoreFrontOfferContent_C_SetContentSoldOutState_Params
{
	bool                                               inEnabled;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function V2_StoreFrontOfferContent.V2_StoreFrontOfferContent_C.Init
struct UV2_StoreFrontOfferContent_C_Init_Params
{
	class UTexture*                                    InTexture;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                InLinearColor;                                            // (CPF_Parm, CPF_IsPlainOldData)
	int                                                inOfferIndex;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function V2_StoreFrontOfferContent.V2_StoreFrontOfferContent_C.StoreOfferMouseDown__DelegateSignature
struct UV2_StoreFrontOfferContent_C_StoreOfferMouseDown__DelegateSignature_Params
{
};

// Function V2_StoreFrontOfferContent.V2_StoreFrontOfferContent_C.StoreOfferMouseUp__DelegateSignature
struct UV2_StoreFrontOfferContent_C_StoreOfferMouseUp__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
