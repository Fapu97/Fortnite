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

// Function InterfaceAIStates.InterfaceAIStates_C.PortalCollision
struct UInterfaceAIStates_C_PortalCollision_Params
{
	bool                                               Collide_;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InterfaceAIStates.InterfaceAIStates_C.PortalFX
struct UInterfaceAIStates_C_PortalFX_Params
{
};

// Function InterfaceAIStates.InterfaceAIStates_C.PortalGet
struct UInterfaceAIStates_C_PortalGet_Params
{
	class ABuildingActor*                              BuildingActor;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class ABuildingActor*>                      BuildingActorList;                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	class AActor*                                      BT;                                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InterfaceAIStates.InterfaceAIStates_C.TakerSoulSuckInterrupted
struct UInterfaceAIStates_C_TakerSoulSuckInterrupted_Params
{
};

// Function InterfaceAIStates.InterfaceAIStates_C.PortalClear
struct UInterfaceAIStates_C_PortalClear_Params
{
};

// Function InterfaceAIStates.InterfaceAIStates_C.PortalAdd
struct UInterfaceAIStates_C_PortalAdd_Params
{
	class ABuildingActor*                              BuildingActor;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class ABuildingActor*>                      BuildingActorList;                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function InterfaceAIStates.InterfaceAIStates_C.TakerSoulSuckSoundEnd
struct UInterfaceAIStates_C_TakerSoulSuckSoundEnd_Params
{
};

// Function InterfaceAIStates.InterfaceAIStates_C.TakerSoulSuckSoundBegin
struct UInterfaceAIStates_C_TakerSoulSuckSoundBegin_Params
{
	bool                                               Success;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InterfaceAIStates.InterfaceAIStates_C.TakerAttackFSM
struct UInterfaceAIStates_C_TakerAttackFSM_Params
{
	bool                                               SuccessfulHit;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InterfaceAIStates.InterfaceAIStates_C.IsTakerWallPortalAvailable
struct UInterfaceAIStates_C_IsTakerWallPortalAvailable_Params
{
	bool                                               Portal_Available_;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InterfaceAIStates.InterfaceAIStates_C.TakerWallPortalBehavior
struct UInterfaceAIStates_C_TakerWallPortalBehavior_Params
{
	class AActor*                                      BuildingPart;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBTTask_BlueprintBase*                       Task;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     DesiredMoveLocation;                                      // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               Debug;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InterfaceAIStates.InterfaceAIStates_C.EndTakerSwoopAttack
struct UInterfaceAIStates_C_EndTakerSwoopAttack_Params
{
};

// Function InterfaceAIStates.InterfaceAIStates_C.BeginTakerSwoopAttack
struct UInterfaceAIStates_C_BeginTakerSwoopAttack_Params
{
};

// Function InterfaceAIStates.InterfaceAIStates_C.ResetTakerSpecialAttackTimer
struct UInterfaceAIStates_C_ResetTakerSpecialAttackTimer_Params
{
	bool                                               Swoop;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               SoulSuckMelee;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Portal;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InterfaceAIStates.InterfaceAIStates_C.VerifyTakerAttack
struct UInterfaceAIStates_C_VerifyTakerAttack_Params
{
	bool                                               SpecialAttack;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Swoop;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Soul_Suck;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Portal;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InterfaceAIStates.InterfaceAIStates_C.HuskEvadeStart
struct UInterfaceAIStates_C_HuskEvadeStart_Params
{
};

// Function InterfaceAIStates.InterfaceAIStates_C.MantleEnd
struct UInterfaceAIStates_C_MantleEnd_Params
{
};

// Function InterfaceAIStates.InterfaceAIStates_C.MantleStart
struct UInterfaceAIStates_C_MantleStart_Params
{
	struct FVector                                     StartPos;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector                                     MidPos;                                                   // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector                                     EndPos;                                                   // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               LowWall;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               MidWall;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               FullWall;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               WindowWall;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
