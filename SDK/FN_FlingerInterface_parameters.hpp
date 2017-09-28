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

// Function FlingerInterface.FlingerInterface_C.FlingerEnemyDied
struct UFlingerInterface_C_FlingerEnemyDied_Params
{
	class APawn*                                       PawnThatDied;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FlingerInterface.FlingerInterface_C.AlertEnemySpawnedByFlinger
struct UFlingerInterface_C_AlertEnemySpawnedByFlinger_Params
{
	struct FVector                                     PushMomentum;                                             // (CPF_Parm, CPF_IsPlainOldData)
	float                                              PushDuration;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class APawn*                                       OwningFlinger;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FlingerInterface.FlingerInterface_C.FlingerEnemyFailedToSpawn
struct UFlingerInterface_C_FlingerEnemyFailedToSpawn_Params
{
	class AFortProjectileBase*                         FailedProjectile;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FlingerInterface.FlingerInterface_C.FlingerThrewAProjectileContainingAnEnemy
struct UFlingerInterface_C_FlingerThrewAProjectileContainingAnEnemy_Params
{
	class AFortProjectileBase*                         Projectile;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FlingerInterface.FlingerInterface_C.FlingerCan'tSpawnAnEnemy
struct UFlingerInterface_C_FlingerCan_tSpawnAnEnemy_Params
{
};

// Function FlingerInterface.FlingerInterface_C.FlingerCanSpawnAnEnemy
struct UFlingerInterface_C_FlingerCanSpawnAnEnemy_Params
{
};

// Function FlingerInterface.FlingerInterface_C.CanFlingerSpawnAnEnemy
struct UFlingerInterface_C_CanFlingerSpawnAnEnemy_Params
{
	class AActor*                                      ActorWhoAsked;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function FlingerInterface.FlingerInterface_C.FlingerSpawnedAnEnemy
struct UFlingerInterface_C_FlingerSpawnedAnEnemy_Params
{
	class AFortAIPawn*                                 EnemySpawned;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AFortProjectileBase*                         ProjectileThatSpawnedThisEnemy;                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
