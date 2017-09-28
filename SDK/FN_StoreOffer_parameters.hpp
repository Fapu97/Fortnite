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

// Function StoreOffer.StoreOffer_C.HandleMainStoreIsAvailable
struct UStoreOffer_C_HandleMainStoreIsAvailable_Params
{
};

// Function StoreOffer.StoreOffer_C.GetTitle
struct UStoreOffer_C_GetTitle_Params
{
	struct FText                                       Item;                                                     // (CPF_Parm, CPF_OutParm)
};

// Function StoreOffer.StoreOffer_C.ShowThrobber
struct UStoreOffer_C_ShowThrobber_Params
{
};

// Function StoreOffer.StoreOffer_C.PlayIntroAnimation
struct UStoreOffer_C_PlayIntroAnimation_Params
{
};

// Function StoreOffer.StoreOffer_C.CenterWidget
struct UStoreOffer_C_CenterWidget_Params
{
};

// Function StoreOffer.StoreOffer_C.PopulateChaseItems
struct UStoreOffer_C_PopulateChaseItems_Params
{
	struct FCardPackOffer                              InCardPackOffer;                                          // (CPF_Parm)
};

// Function StoreOffer.StoreOffer_C.GetMaxAffordPacks
struct UStoreOffer_C_GetMaxAffordPacks_Params
{
	int                                                OutNum;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreOffer.StoreOffer_C.GetCurrencyBalance
struct UStoreOffer_C_GetCurrencyBalance_Params
{
	struct FCardPackOffer                              InCardPackOffer;                                          // (CPF_Parm)
	int                                                OutNum;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreOffer.StoreOffer_C.HasEnoughBasicCurrency
struct UStoreOffer_C_HasEnoughBasicCurrency_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function StoreOffer.StoreOffer_C.DisableTimedOfferPurchase
struct UStoreOffer_C_DisableTimedOfferPurchase_Params
{
};

// Function StoreOffer.StoreOffer_C.Get_BuyMultiplePacks_Button_ToolTipWidget
struct UStoreOffer_C_Get_BuyMultiplePacks_Button_ToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function StoreOffer.StoreOffer_C.CalculateMaxPurchasablePacks
struct UStoreOffer_C_CalculateMaxPurchasablePacks_Params
{
	int                                                NewParam;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreOffer.StoreOffer_C.UpdateTimeLeft
struct UStoreOffer_C_UpdateTimeLeft_Params
{
};

// Function StoreOffer.StoreOffer_C.GetToolTipWidget
struct UStoreOffer_C_GetToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function StoreOffer.StoreOffer_C.Init
struct UStoreOffer_C_Init_Params
{
	struct FCardPackOffer                              inOffer;                                                  // (CPF_Parm)
	int                                                inIndex;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               EnableTempBang;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreOffer.StoreOffer_C.DialogResult_0A6E3EAB4DD555362145349A3AC80C13
struct UStoreOffer_C_DialogResult_0A6E3EAB4DD555362145349A3AC80C13_Params
{
	struct FName                                       ResultName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreOffer.StoreOffer_C.DialogResult_C07E180347716ECFE0010DACCD8ECCB2
struct UStoreOffer_C_DialogResult_C07E180347716ECFE0010DACCD8ECCB2_Params
{
	struct FName                                       ResultName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreOffer.StoreOffer_C.OnMouseLeave
struct UStoreOffer_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function StoreOffer.StoreOffer_C.OnMouseEnter
struct UStoreOffer_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function StoreOffer.StoreOffer_C.Play Hover VO
struct UStoreOffer_C_Play_Hover_VO_Params
{
};

// Function StoreOffer.StoreOffer_C.BndEvt__BuyOnePack_Button_K2Node_ComponentBoundEvent_722_FortEnabledStateChanged__DelegateSignature
struct UStoreOffer_C_BndEvt__BuyOnePack_Button_K2Node_ComponentBoundEvent_722_FortEnabledStateChanged__DelegateSignature_Params
{
	class UFortBaseButton*                             Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Enabled;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreOffer.StoreOffer_C.BndEvt__BuyMultiplePacks_Button_K2Node_ComponentBoundEvent_655_FortEnabledStateChanged__DelegateSignature
struct UStoreOffer_C_BndEvt__BuyMultiplePacks_Button_K2Node_ComponentBoundEvent_655_FortEnabledStateChanged__DelegateSignature_Params
{
	class UFortBaseButton*                             Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Enabled;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreOffer.StoreOffer_C.Construct
struct UStoreOffer_C_Construct_Params
{
};

// Function StoreOffer.StoreOffer_C.Handle On Animation Finished
struct UStoreOffer_C_Handle_On_Animation_Finished_Params
{
};

// Function StoreOffer.StoreOffer_C.BndEvt__IconTextButtonBuyOnePack_K2Node_ComponentBoundEvent_347_CommonButtonClicked__DelegateSignature
struct UStoreOffer_C_BndEvt__IconTextButtonBuyOnePack_K2Node_ComponentBoundEvent_347_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreOffer.StoreOffer_C.BndEvt__ButtonBuyMultiplePacks_K2Node_ComponentBoundEvent_369_CommonButtonClicked__DelegateSignature
struct UStoreOffer_C_BndEvt__ButtonBuyMultiplePacks_K2Node_ComponentBoundEvent_369_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreOffer.StoreOffer_C.ExecuteUbergraph_StoreOffer
struct UStoreOffer_C_ExecuteUbergraph_StoreOffer_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreOffer.StoreOffer_C.OnOfferHighlight__DelegateSignature
struct UStoreOffer_C_OnOfferHighlight__DelegateSignature_Params
{
	struct FText                                       Description;                                              // (CPF_Parm)
};

// Function StoreOffer.StoreOffer_C.AllowInput__DelegateSignature
struct UStoreOffer_C_AllowInput__DelegateSignature_Params
{
};

// Function StoreOffer.StoreOffer_C.BlockInput__DelegateSignature
struct UStoreOffer_C_BlockInput__DelegateSignature_Params
{
};

// Function StoreOffer.StoreOffer_C.HideCardPackDescription__DelegateSignature
struct UStoreOffer_C_HideCardPackDescription__DelegateSignature_Params
{
};

// Function StoreOffer.StoreOffer_C.ShowCardPackDescription__DelegateSignature
struct UStoreOffer_C_ShowCardPackDescription__DelegateSignature_Params
{
	struct FText                                       InText;                                                   // (CPF_Parm)
	struct FFortCatalogMeta                            inFortCatalogMeta;                                        // (CPF_Parm)
};

// Function StoreOffer.StoreOffer_C.DisableCardPackOffersUpdate__DelegateSignature
struct UStoreOffer_C_DisableCardPackOffersUpdate__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
