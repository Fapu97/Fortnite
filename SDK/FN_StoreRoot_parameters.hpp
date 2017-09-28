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

// Function StoreRoot.StoreRoot_C.HandleFeatureStateChanged
struct UStoreRoot_C_HandleFeatureStateChanged_Params
{
};

// Function StoreRoot.StoreRoot_C.CheckHighestPriorityOffer
struct UStoreRoot_C_CheckHighestPriorityOffer_Params
{
	TArray<struct FCardPackOffer>                      inOfferArray;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	struct FCardPackOffer                              outPriorityOffer;                                         // (CPF_Parm, CPF_OutParm)
	bool                                               FoundOffer;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreRoot.StoreRoot_C.GetCustomStoreOfferCost
struct UStoreRoot_C_GetCustomStoreOfferCost_Params
{
	struct FCardPackOffer                              InCardPackOffer;                                          // (CPF_Parm)
	TEnumAsByte<EStoreOfferCosts>                      OutCustomStoreOfferCost;                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreRoot.StoreRoot_C.CheckDisplayCriteria
struct UStoreRoot_C_CheckDisplayCriteria_Params
{
	TEnumAsByte<EStoreOfferCosts>                      InCustomStoreOfferCost;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FCardPackOffer                              InCardPackOffer;                                          // (CPF_Parm)
	bool                                               bPassedDisplayCriteria;                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreRoot.StoreRoot_C.UnregisterEvents
struct UStoreRoot_C_UnregisterEvents_Params
{
};

// Function StoreRoot.StoreRoot_C.TickleSelectedOffer
struct UStoreRoot_C_TickleSelectedOffer_Params
{
	bool                                               bPassThrough;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreRoot.StoreRoot_C.Focus
struct UStoreRoot_C_Focus_Params
{
};

// Function StoreRoot.StoreRoot_C.RegisterEvents
struct UStoreRoot_C_RegisterEvents_Params
{
};

// Function StoreRoot.StoreRoot_C.RefreshInput
struct UStoreRoot_C_RefreshInput_Params
{
};

// Function StoreRoot.StoreRoot_C.Handle Summary State
struct UStoreRoot_C_Handle_Summary_State_Params
{
};

// Function StoreRoot.StoreRoot_C.ClearIntroAnimationTimers
struct UStoreRoot_C_ClearIntroAnimationTimers_Params
{
};

// Function StoreRoot.StoreRoot_C.OnInputAddVBucks
struct UStoreRoot_C_OnInputAddVBucks_Params
{
	bool                                               bPassThrough;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreRoot.StoreRoot_C.Show Card Pack Opening UI
struct UStoreRoot_C_Show_Card_Pack_Opening_UI_Params
{
};

// Function StoreRoot.StoreRoot_C.Handle Pack Open State
struct UStoreRoot_C_Handle_Pack_Open_State_Params
{
};

// Function StoreRoot.StoreRoot_C.Handle CurrencyStore State
struct UStoreRoot_C_Handle_CurrencyStore_State_Params
{
};

// Function StoreRoot.StoreRoot_C.Handle CardPackStore State
struct UStoreRoot_C_Handle_CardPackStore_State_Params
{
};

// Function StoreRoot.StoreRoot_C.HandleOnFocus
struct UStoreRoot_C_HandleOnFocus_Params
{
	struct FText                                       Description;                                              // (CPF_Parm)
};

// Function StoreRoot.StoreRoot_C.Handle Closed State
struct UStoreRoot_C_Handle_Closed_State_Params
{
};

// Function StoreRoot.StoreRoot_C.AllowInput
struct UStoreRoot_C_AllowInput_Params
{
};

// Function StoreRoot.StoreRoot_C.BlockInput
struct UStoreRoot_C_BlockInput_Params
{
};

// Function StoreRoot.StoreRoot_C.ShouldShowOffer
struct UStoreRoot_C_ShouldShowOffer_Params
{
	struct FCardPackOffer                              CardPackOffer;                                            // (CPF_Parm)
	bool                                               ShouldShow;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreRoot.StoreRoot_C.Get_CardCount_SizeBox_ToolTipWidget
struct UStoreRoot_C_Get_CardCount_SizeBox_ToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function StoreRoot.StoreRoot_C.InvertCardArray_MultiplePacks
struct UStoreRoot_C_InvertCardArray_MultiplePacks_Params
{
	TArray<class UV2_Item_Card_C*>                     outV2CardArray;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function StoreRoot.StoreRoot_C.UnopenedPacksExist
struct UStoreRoot_C_UnopenedPacksExist_Params
{
	bool                                               outUnopenedPacksExist;                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreRoot.StoreRoot_C.ToggleCardPackExpirationTimer
struct UStoreRoot_C_ToggleCardPackExpirationTimer_Params
{
	bool                                               IsEnabled;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreRoot.StoreRoot_C.Get_CardPackCount_SizeBox_ToolTipWidget
struct UStoreRoot_C_Get_CardPackCount_SizeBox_ToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function StoreRoot.StoreRoot_C.UpdateUnopenedPackCount
struct UStoreRoot_C_UpdateUnopenedPackCount_Params
{
	bool                                               inShow;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreRoot.StoreRoot_C.FreshenCache
struct UStoreRoot_C_FreshenCache_Params
{
};

// Function StoreRoot.StoreRoot_C.ToggleFreshenCacheTimer
struct UStoreRoot_C_ToggleFreshenCacheTimer_Params
{
	bool                                               IsEnabled;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreRoot.StoreRoot_C.CloseMtxStore
struct UStoreRoot_C_CloseMtxStore_Params
{
};

// Function StoreRoot.StoreRoot_C.ResetToMtxStoreAfterError
struct UStoreRoot_C_ResetToMtxStoreAfterError_Params
{
};

// Function StoreRoot.StoreRoot_C.ResetToCardPackStoreFrontAfterError
struct UStoreRoot_C_ResetToCardPackStoreFrontAfterError_Params
{
};

// Function StoreRoot.StoreRoot_C.Handle Error State
struct UStoreRoot_C_Handle_Error_State_Params
{
};

// Function StoreRoot.StoreRoot_C.UpdateTimeLeft
struct UStoreRoot_C_UpdateTimeLeft_Params
{
};

// Function StoreRoot.StoreRoot_C.TransitionBackToStoreFront
struct UStoreRoot_C_TransitionBackToStoreFront_Params
{
};

// Function StoreRoot.StoreRoot_C.TransitionToPackOpening
struct UStoreRoot_C_TransitionToPackOpening_Params
{
};

// Function StoreRoot.StoreRoot_C.ShowCurrencyStore
struct UStoreRoot_C_ShowCurrencyStore_Params
{
};

// Function StoreRoot.StoreRoot_C.DisableCardPackOffersUpdate
struct UStoreRoot_C_DisableCardPackOffersUpdate_Params
{
};

// Function StoreRoot.StoreRoot_C.UpdateOffers
struct UStoreRoot_C_UpdateOffers_Params
{
};

// Function StoreRoot.StoreRoot_C.Destruct
struct UStoreRoot_C_Destruct_Params
{
};

// Function StoreRoot.StoreRoot_C.OnActivated
struct UStoreRoot_C_OnActivated_Params
{
};

// Function StoreRoot.StoreRoot_C.HandleClientEvent_StoreShowOnlyRewardLlama
struct UStoreRoot_C_HandleClientEvent_StoreShowOnlyRewardLlama_Params
{
	class UObject*                                     EventSource;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortClientEvent                            ClientEvent;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function StoreRoot.StoreRoot_C.HandleClientEvent_StoreShowOnlyBasic
struct UStoreRoot_C_HandleClientEvent_StoreShowOnlyBasic_Params
{
	class UObject*                                     EventSource;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortClientEvent                            ClientEvent;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function StoreRoot.StoreRoot_C.HandleClientEvent_StoreShowAll
struct UStoreRoot_C_HandleClientEvent_StoreShowAll_Params
{
	class UObject*                                     EventSource;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortClientEvent                            ClientEvent;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function StoreRoot.StoreRoot_C.OnLocalAccountInfoChanged
struct UStoreRoot_C_OnLocalAccountInfoChanged_Params
{
	struct FFortPrivateAccountInfo                     PrivateAccountInfo;                                       // (CPF_Parm)
};

// Function StoreRoot.StoreRoot_C.OnCardPackOffersChanged
struct UStoreRoot_C_OnCardPackOffersChanged_Params
{
};

// Function StoreRoot.StoreRoot_C.OnStoreStateChange
struct UStoreRoot_C_OnStoreStateChange_Params
{
};

// Function StoreRoot.StoreRoot_C.OnDeactivated
struct UStoreRoot_C_OnDeactivated_Params
{
};

// Function StoreRoot.StoreRoot_C.Construct
struct UStoreRoot_C_Construct_Params
{
};

// Function StoreRoot.StoreRoot_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UStoreRoot_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreRoot.StoreRoot_C.HandleClientEvent_StoreShowOnlyEvent
struct UStoreRoot_C_HandleClientEvent_StoreShowOnlyEvent_Params
{
	class UObject*                                     EventSource;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortClientEvent                            ClientEvent;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function StoreRoot.StoreRoot_C.ExecuteUbergraph_StoreRoot
struct UStoreRoot_C_ExecuteUbergraph_StoreRoot_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreRoot.StoreRoot_C.OnBlockInput__DelegateSignature
struct UStoreRoot_C_OnBlockInput__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
