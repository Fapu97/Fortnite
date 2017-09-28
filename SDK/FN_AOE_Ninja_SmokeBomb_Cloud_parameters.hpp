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

// Function AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C.OnRep_AOELifespan
struct AAOE_Ninja_SmokeBomb_Cloud_C_OnRep_AOELifespan_Params
{
};

// Function AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C.OnRep_Lifespan
struct AAOE_Ninja_SmokeBomb_Cloud_C_OnRep_Lifespan_Params
{
};

// Function AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C.UserConstructionScript
struct AAOE_Ninja_SmokeBomb_Cloud_C_UserConstructionScript_Params
{
};

// Function AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C.FadeIn__FinishedFunc
struct AAOE_Ninja_SmokeBomb_Cloud_C_FadeIn__FinishedFunc_Params
{
};

// Function AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C.FadeIn__UpdateFunc
struct AAOE_Ninja_SmokeBomb_Cloud_C_FadeIn__UpdateFunc_Params
{
};

// Function AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C.PPFade__FinishedFunc
struct AAOE_Ninja_SmokeBomb_Cloud_C_PPFade__FinishedFunc_Params
{
};

// Function AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C.PPFade__UpdateFunc
struct AAOE_Ninja_SmokeBomb_Cloud_C_PPFade__UpdateFunc_Params
{
};

// Function AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C.ReceiveBeginPlay
struct AAOE_Ninja_SmokeBomb_Cloud_C_ReceiveBeginPlay_Params
{
};

// Function AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C.BndEvt__Capsule1_K2Node_ComponentBoundEvent_425_ComponentBeginOverlapSignature__DelegateSignature
struct AAOE_Ninja_SmokeBomb_Cloud_C_BndEvt__Capsule1_K2Node_ComponentBoundEvent_425_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bFromSweep;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C.BndEvt__Capsule1_K2Node_ComponentBoundEvent_445_ComponentEndOverlapSignature__DelegateSignature
struct AAOE_Ninja_SmokeBomb_Cloud_C_BndEvt__Capsule1_K2Node_ComponentBoundEvent_445_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C.ExtraLifespan
struct AAOE_Ninja_SmokeBomb_Cloud_C_ExtraLifespan_Params
{
	float                                              AOELifespan;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C.ExecuteUbergraph_AOE_Ninja_SmokeBomb_Cloud
struct AAOE_Ninja_SmokeBomb_Cloud_C_ExecuteUbergraph_AOE_Ninja_SmokeBomb_Cloud_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
