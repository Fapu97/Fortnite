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

// Function HuskBeeAOECloud.HuskBeeAOECloud_C.UserConstructionScript
struct AHuskBeeAOECloud_C_UserConstructionScript_Params
{
};

// Function HuskBeeAOECloud.HuskBeeAOECloud_C.ReceiveBeginPlay
struct AHuskBeeAOECloud_C_ReceiveBeginPlay_Params
{
};

// Function HuskBeeAOECloud.HuskBeeAOECloud_C.EndAOE
struct AHuskBeeAOECloud_C_EndAOE_Params
{
};

// Function HuskBeeAOECloud.HuskBeeAOECloud_C.BndEvt__BeeArea_K2Node_ComponentBoundEvent_249_ComponentEndOverlapSignature__DelegateSignature
struct AHuskBeeAOECloud_C_BndEvt__BeeArea_K2Node_ComponentBoundEvent_249_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HuskBeeAOECloud.HuskBeeAOECloud_C.BndEvt__BeeAntiOverlapArea_K2Node_ComponentBoundEvent_76_ComponentBeginOverlapSignature__DelegateSignature
struct AHuskBeeAOECloud_C_BndEvt__BeeAntiOverlapArea_K2Node_ComponentBoundEvent_76_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bFromSweep;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function HuskBeeAOECloud.HuskBeeAOECloud_C.BndEvt__BeeAntiOverlapArea_K2Node_ComponentBoundEvent_80_ComponentEndOverlapSignature__DelegateSignature
struct AHuskBeeAOECloud_C_BndEvt__BeeAntiOverlapArea_K2Node_ComponentBoundEvent_80_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HuskBeeAOECloud.HuskBeeAOECloud_C.ExecuteUbergraph_HuskBeeAOECloud
struct AHuskBeeAOECloud_C_ExecuteUbergraph_HuskBeeAOECloud_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
