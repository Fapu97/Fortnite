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

// Function StoreOfferContent.StoreOfferContent_C.HandleTickle
struct UStoreOfferContent_C_HandleTickle_Params
{
};

// Function StoreOfferContent.StoreOfferContent_C.OnMouseButtonDown
struct UStoreOfferContent_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function StoreOfferContent.StoreOfferContent_C.SetContentSoldOutState
struct UStoreOfferContent_C_SetContentSoldOutState_Params
{
	bool                                               inEnabled;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreOfferContent.StoreOfferContent_C.Init
struct UStoreOfferContent_C_Init_Params
{
	class UTexture*                                    InTexture;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                InLinearColor;                                            // (CPF_Parm, CPF_IsPlainOldData)
	int                                                inOfferIndex;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FCardPackOffer                              InCardPackOffer;                                          // (CPF_Parm)
};

// Function StoreOfferContent.StoreOfferContent_C.BndEvt__llama_image_K2Node_ComponentBoundEvent_15_OnLoadingStateChanged__DelegateSignature
struct UStoreOfferContent_C_BndEvt__llama_image_K2Node_ComponentBoundEvent_15_OnLoadingStateChanged__DelegateSignature_Params
{
	bool                                               bIsLoading;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreOfferContent.StoreOfferContent_C.ExecuteUbergraph_StoreOfferContent
struct UStoreOfferContent_C_ExecuteUbergraph_StoreOfferContent_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreOfferContent.StoreOfferContent_C.StoreOfferMouseDown__DelegateSignature
struct UStoreOfferContent_C_StoreOfferMouseDown__DelegateSignature_Params
{
};

// Function StoreOfferContent.StoreOfferContent_C.StoreOfferMouseUp__DelegateSignature
struct UStoreOfferContent_C_StoreOfferMouseUp__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
