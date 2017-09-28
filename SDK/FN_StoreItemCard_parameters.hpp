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

// Function StoreItemCard.StoreItemCard_C.DoesItemHaveChildren
struct UStoreItemCard_C_DoesItemHaveChildren_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function StoreItemCard.StoreItemCard_C.GetIndentLevel
struct UStoreItemCard_C_GetIndentLevel_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function StoreItemCard.StoreItemCard_C.IsItemExpanded
struct UStoreItemCard_C_IsItemExpanded_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function StoreItemCard.StoreItemCard_C.GetData
struct UStoreItemCard_C_GetData_Params
{
	class UObject*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function StoreItemCard.StoreItemCard_C.Initialize
struct UStoreItemCard_C_Initialize_Params
{
	struct FCard                                       inCard;                                                   // (CPF_Parm)
	bool                                               isOn3DCard;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               isFront;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreItemCard.StoreItemCard_C.RegisterOnClicked
struct UStoreItemCard_C_RegisterOnClicked_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function StoreItemCard.StoreItemCard_C.SetExpanded
struct UStoreItemCard_C_SetExpanded_Params
{
	bool                                               bExpanded;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreItemCard.StoreItemCard_C.SetIndexInList
struct UStoreItemCard_C_SetIndexInList_Params
{
	int                                                InIndexInList;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreItemCard.StoreItemCard_C.ToggleExpansion
struct UStoreItemCard_C_ToggleExpansion_Params
{
};

// Function StoreItemCard.StoreItemCard_C.OnReleaseToPool
struct UStoreItemCard_C_OnReleaseToPool_Params
{
};

// Function StoreItemCard.StoreItemCard_C.Private_OnExpanderArrowShiftClicked
struct UStoreItemCard_C_Private_OnExpanderArrowShiftClicked_Params
{
};

// Function StoreItemCard.StoreItemCard_C.SetData
struct UStoreItemCard_C_SetData_Params
{
	class UObject*                                     InData;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCommonListView*                             OwningList;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreItemCard.StoreItemCard_C.Reset
struct UStoreItemCard_C_Reset_Params
{
};

// Function StoreItemCard.StoreItemCard_C.SetSelected
struct UStoreItemCard_C_SetSelected_Params
{
	bool                                               bSelected;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreItemCard.StoreItemCard_C.OnHovered
struct UStoreItemCard_C_OnHovered_Params
{
};

// Function StoreItemCard.StoreItemCard_C.OnUnhovered
struct UStoreItemCard_C_OnUnhovered_Params
{
};

// Function StoreItemCard.StoreItemCard_C.OnAcquireFromPool
struct UStoreItemCard_C_OnAcquireFromPool_Params
{
};

// Function StoreItemCard.StoreItemCard_C.Flydown
struct UStoreItemCard_C_Flydown_Params
{
};

// Function StoreItemCard.StoreItemCard_C.FlyUp
struct UStoreItemCard_C_FlyUp_Params
{
};

// Function StoreItemCard.StoreItemCard_C.FlyUpAndDown
struct UStoreItemCard_C_FlyUpAndDown_Params
{
};

// Function StoreItemCard.StoreItemCard_C.BndEvt__Anim_FlyUpAndDown_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UStoreItemCard_C_BndEvt__Anim_FlyUpAndDown_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function StoreItemCard.StoreItemCard_C.ExecuteUbergraph_StoreItemCard
struct UStoreItemCard_C_ExecuteUbergraph_StoreItemCard_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreItemCard.StoreItemCard_C.OnFlyUpAndDownFinished__DelegateSignature
struct UStoreItemCard_C_OnFlyUpAndDownFinished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
