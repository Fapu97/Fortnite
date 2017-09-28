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

// Function MtxOffersList.MtxOffersList_C.UpdateMtxCount
struct UMtxOffersList_C_UpdateMtxCount_Params
{
};

// Function MtxOffersList.MtxOffersList_C.ToggleMtxCountUpdateTimer
struct UMtxOffersList_C_ToggleMtxCountUpdateTimer_Params
{
	bool                                               IsEnabled;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MtxOffersList.MtxOffersList_C.AnimateMtxCount
struct UMtxOffersList_C_AnimateMtxCount_Params
{
	float                                              InTargetAmount;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              inCurrentAmount;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              inTimerRate;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MtxOffersList.MtxOffersList_C.UpdateCurrency
struct UMtxOffersList_C_UpdateCurrency_Params
{
	struct FFortPrivateAccountInfo                     inAccountInfo;                                            // (CPF_Parm)
};

// Function MtxOffersList.MtxOffersList_C.PlayMtxOfferAnimation_MouseLeave
struct UMtxOffersList_C_PlayMtxOfferAnimation_MouseLeave_Params
{
};

// Function MtxOffersList.MtxOffersList_C.PlayMtxOfferAnimation_MouseEnter
struct UMtxOffersList_C_PlayMtxOfferAnimation_MouseEnter_Params
{
};

// Function MtxOffersList.MtxOffersList_C.Construct
struct UMtxOffersList_C_Construct_Params
{
};

// Function MtxOffersList.MtxOffersList_C.OnPackagesListed
struct UMtxOffersList_C_OnPackagesListed_Params
{
	TArray<struct FMtxPackage>                         Offers;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function MtxOffersList.MtxOffersList_C.OnBuyItem
struct UMtxOffersList_C_OnBuyItem_Params
{
	struct FString                                     OfferId;                                                  // (CPF_Parm, CPF_ZeroConstructor)
};

// Function MtxOffersList.MtxOffersList_C.OnPurchaseComplete
struct UMtxOffersList_C_OnPurchaseComplete_Params
{
	bool                                               bSuccess;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MtxOffersList.MtxOffersList_C.CustomEvent_1
struct UMtxOffersList_C_CustomEvent_1_Params
{
};

// Function MtxOffersList.MtxOffersList_C.CustomEvent_0_Copy
struct UMtxOffersList_C_CustomEvent_0_Copy_Params
{
};

// Function MtxOffersList.MtxOffersList_C.HandleLocalAccountInfoChanged
struct UMtxOffersList_C_HandleLocalAccountInfoChanged_Params
{
	struct FFortPrivateAccountInfo                     NewInfo;                                                  // (CPF_Parm)
};

// Function MtxOffersList.MtxOffersList_C.ExecuteUbergraph_MtxOffersList
struct UMtxOffersList_C_ExecuteUbergraph_MtxOffersList_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MtxOffersList.MtxOffersList_C.PurchaseComplete__DelegateSignature
struct UMtxOffersList_C_PurchaseComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
