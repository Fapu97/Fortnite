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

// Function StoreOpeningCardPack.StoreOpeningCardPack_C.StartCardPulse
struct UStoreOpeningCardPack_C_StartCardPulse_Params
{
};

// Function StoreOpeningCardPack.StoreOpeningCardPack_C.UpdateHintPrompt
struct UStoreOpeningCardPack_C_UpdateHintPrompt_Params
{
};

// Function StoreOpeningCardPack.StoreOpeningCardPack_C.Handle Summary State
struct UStoreOpeningCardPack_C_Handle_Summary_State_Params
{
};

// Function StoreOpeningCardPack.StoreOpeningCardPack_C.Handle SummaryAdd State
struct UStoreOpeningCardPack_C_Handle_SummaryAdd_State_Params
{
};

// Function StoreOpeningCardPack.StoreOpeningCardPack_C.Handle PackDestroy State
struct UStoreOpeningCardPack_C_Handle_PackDestroy_State_Params
{
};

// Function StoreOpeningCardPack.StoreOpeningCardPack_C.Handle CardExit State
struct UStoreOpeningCardPack_C_Handle_CardExit_State_Params
{
};

// Function StoreOpeningCardPack.StoreOpeningCardPack_C.Handle CardEnter State
struct UStoreOpeningCardPack_C_Handle_CardEnter_State_Params
{
};

// Function StoreOpeningCardPack.StoreOpeningCardPack_C.Handle Pack Open State
struct UStoreOpeningCardPack_C_Handle_Pack_Open_State_Params
{
};

// Function StoreOpeningCardPack.StoreOpeningCardPack_C.Init
struct UStoreOpeningCardPack_C_Init_Params
{
};

// Function StoreOpeningCardPack.StoreOpeningCardPack_C.AllowInput
struct UStoreOpeningCardPack_C_AllowInput_Params
{
};

// Function StoreOpeningCardPack.StoreOpeningCardPack_C.BlockInput
struct UStoreOpeningCardPack_C_BlockInput_Params
{
};

// Function StoreOpeningCardPack.StoreOpeningCardPack_C.Get_CardCount_SizeBox_ToolTipWidget
struct UStoreOpeningCardPack_C_Get_CardCount_SizeBox_ToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function StoreOpeningCardPack.StoreOpeningCardPack_C.InvertCardArray_MultiplePacks
struct UStoreOpeningCardPack_C_InvertCardArray_MultiplePacks_Params
{
	TArray<class UStoreItemCard_C*>                    outStoreCardArray;                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function StoreOpeningCardPack.StoreOpeningCardPack_C.UnopenedPacksExist
struct UStoreOpeningCardPack_C_UnopenedPacksExist_Params
{
	bool                                               outUnopenedPacksExist;                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreOpeningCardPack.StoreOpeningCardPack_C.UpdateCardCounter
struct UStoreOpeningCardPack_C_UpdateCardCounter_Params
{
};

// Function StoreOpeningCardPack.StoreOpeningCardPack_C.Get_CardPackCount_SizeBox_ToolTipWidget
struct UStoreOpeningCardPack_C_Get_CardPackCount_SizeBox_ToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function StoreOpeningCardPack.StoreOpeningCardPack_C.UpdateUnopenedPackCount
struct UStoreOpeningCardPack_C_UpdateUnopenedPackCount_Params
{
	bool                                               inShow;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreOpeningCardPack.StoreOpeningCardPack_C.Handle Error State
struct UStoreOpeningCardPack_C_Handle_Error_State_Params
{
};

// Function StoreOpeningCardPack.StoreOpeningCardPack_C.SlideCardsToTheRight
struct UStoreOpeningCardPack_C_SlideCardsToTheRight_Params
{
};

// Function StoreOpeningCardPack.StoreOpeningCardPack_C.AnimateCardSlide
struct UStoreOpeningCardPack_C_AnimateCardSlide_Params
{
};

// Function StoreOpeningCardPack.StoreOpeningCardPack_C.AddCardToSummary
struct UStoreOpeningCardPack_C_AddCardToSummary_Params
{
	class UStoreItemCard_C*                            inCurrentCard;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreOpeningCardPack.StoreOpeningCardPack_C.OnStoreStateChanged_CustomEvent
struct UStoreOpeningCardPack_C_OnStoreStateChanged_CustomEvent_Params
{
};

// Function StoreOpeningCardPack.StoreOpeningCardPack_C.BndEvt__PackCounter_Appear_Ani_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UStoreOpeningCardPack_C_BndEvt__PackCounter_Appear_Ani_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function StoreOpeningCardPack.StoreOpeningCardPack_C.OnActivated
struct UStoreOpeningCardPack_C_OnActivated_Params
{
};

// Function StoreOpeningCardPack.StoreOpeningCardPack_C.OnInputMethodChanged_Event_1
struct UStoreOpeningCardPack_C_OnInputMethodChanged_Event_1_Params
{
	bool                                               bUsingGamepad;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreOpeningCardPack.StoreOpeningCardPack_C.Construct
struct UStoreOpeningCardPack_C_Construct_Params
{
};

// Function StoreOpeningCardPack.StoreOpeningCardPack_C.ExecuteUbergraph_StoreOpeningCardPack
struct UStoreOpeningCardPack_C_ExecuteUbergraph_StoreOpeningCardPack_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreOpeningCardPack.StoreOpeningCardPack_C.OnBlockInput__DelegateSignature
struct UStoreOpeningCardPack_C_OnBlockInput__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
