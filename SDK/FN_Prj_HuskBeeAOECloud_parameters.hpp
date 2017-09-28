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

// Function Prj_HuskBeeAOECloud.Prj_HuskBeeAOECloud_C.UserConstructionScript
struct APrj_HuskBeeAOECloud_C_UserConstructionScript_Params
{
};

// Function Prj_HuskBeeAOECloud.Prj_HuskBeeAOECloud_C.Projectile Decelerate__FinishedFunc
struct APrj_HuskBeeAOECloud_C_Projectile_Decelerate__FinishedFunc_Params
{
};

// Function Prj_HuskBeeAOECloud.Prj_HuskBeeAOECloud_C.Projectile Decelerate__UpdateFunc
struct APrj_HuskBeeAOECloud_C_Projectile_Decelerate__UpdateFunc_Params
{
};

// Function Prj_HuskBeeAOECloud.Prj_HuskBeeAOECloud_C.Projectile Decelerate Quickly__FinishedFunc
struct APrj_HuskBeeAOECloud_C_Projectile_Decelerate_Quickly__FinishedFunc_Params
{
};

// Function Prj_HuskBeeAOECloud.Prj_HuskBeeAOECloud_C.Projectile Decelerate Quickly__UpdateFunc
struct APrj_HuskBeeAOECloud_C_Projectile_Decelerate_Quickly__UpdateFunc_Params
{
};

// Function Prj_HuskBeeAOECloud.Prj_HuskBeeAOECloud_C.ReceiveBeginPlay
struct APrj_HuskBeeAOECloud_C_ReceiveBeginPlay_Params
{
};

// Function Prj_HuskBeeAOECloud.Prj_HuskBeeAOECloud_C.OnTouched
struct APrj_HuskBeeAOECloud_C_OnTouched_Params
{
	class AActor**                                     OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult*                                 HitResult;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function Prj_HuskBeeAOECloud.Prj_HuskBeeAOECloud_C.StopProjectileSimulation
struct APrj_HuskBeeAOECloud_C_StopProjectileSimulation_Params
{
};

// Function Prj_HuskBeeAOECloud.Prj_HuskBeeAOECloud_C.GraduallySlowProjectile
struct APrj_HuskBeeAOECloud_C_GraduallySlowProjectile_Params
{
};

// Function Prj_HuskBeeAOECloud.Prj_HuskBeeAOECloud_C.EndAOE
struct APrj_HuskBeeAOECloud_C_EndAOE_Params
{
};

// Function Prj_HuskBeeAOECloud.Prj_HuskBeeAOECloud_C.BndEvt__BeeArea_K2Node_ComponentBoundEvent_73_ComponentEndOverlapSignature__DelegateSignature
struct APrj_HuskBeeAOECloud_C_BndEvt__BeeArea_K2Node_ComponentBoundEvent_73_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Prj_HuskBeeAOECloud.Prj_HuskBeeAOECloud_C.BndEvt__BeeAntiOverlapArea_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature
struct APrj_HuskBeeAOECloud_C_BndEvt__BeeAntiOverlapArea_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bFromSweep;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function Prj_HuskBeeAOECloud.Prj_HuskBeeAOECloud_C.BndEvt__BeeAntiOverlapArea_K2Node_ComponentBoundEvent_70_ComponentEndOverlapSignature__DelegateSignature
struct APrj_HuskBeeAOECloud_C_BndEvt__BeeAntiOverlapArea_K2Node_ComponentBoundEvent_70_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Prj_HuskBeeAOECloud.Prj_HuskBeeAOECloud_C.CancelGradualSlowing
struct APrj_HuskBeeAOECloud_C_CancelGradualSlowing_Params
{
};

// Function Prj_HuskBeeAOECloud.Prj_HuskBeeAOECloud_C.ExecuteUbergraph_Prj_HuskBeeAOECloud
struct APrj_HuskBeeAOECloud_C_ExecuteUbergraph_Prj_HuskBeeAOECloud_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
