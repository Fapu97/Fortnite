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

// Function MtxPopup.MtxPopup_C.ClosePopup
struct UMtxPopup_C_ClosePopup_Params
{
};

// Function MtxPopup.MtxPopup_C.OnHandleAction
struct UMtxPopup_C_OnHandleAction_Params
{
	struct FEventReply                                 Result;                                                   // (CPF_Parm, CPF_OutParm)
	bool                                               bPassThrough;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MtxPopup.MtxPopup_C.BndEvt__MtxOffersList_K2Node_ComponentBoundEvent_291_PurchaseComplete__DelegateSignature
struct UMtxPopup_C_BndEvt__MtxOffersList_K2Node_ComponentBoundEvent_291_PurchaseComplete__DelegateSignature_Params
{
};

// Function MtxPopup.MtxPopup_C.BndEvt__ModalContainerDefaultTop_K2Node_ComponentBoundEvent_543_Closed__DelegateSignature
struct UMtxPopup_C_BndEvt__ModalContainerDefaultTop_K2Node_ComponentBoundEvent_543_Closed__DelegateSignature_Params
{
};

// Function MtxPopup.MtxPopup_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_260_OnButtonClickedEvent__DelegateSignature
struct UMtxPopup_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_260_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MtxPopup.MtxPopup_C.Construct
struct UMtxPopup_C_Construct_Params
{
};

// Function MtxPopup.MtxPopup_C.ExecuteUbergraph_MtxPopup
struct UMtxPopup_C_ExecuteUbergraph_MtxPopup_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
