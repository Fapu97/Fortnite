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

// Function Prop_Outlander_Fragment_Llama.Prop_Outlander_Fragment_Llama_C.SplitCraftingDrops
struct AProp_Outlander_Fragment_Llama_C_SplitCraftingDrops_Params
{
	int                                                MaxCraftingDrops;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxNumberCalls;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CurrentCraftingDrops;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CurrentCallNumber;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumberToDrop;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Prop_Outlander_Fragment_Llama.Prop_Outlander_Fragment_Llama_C.SpawnItemsFromLootTable
struct AProp_Outlander_Fragment_Llama_C_SpawnItemsFromLootTable_Params
{
	struct FName                                       TierGroupName;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumberOfCalls;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Prop_Outlander_Fragment_Llama.Prop_Outlander_Fragment_Llama_C.ConvertDamageToResources
struct AProp_Outlander_Fragment_Llama_C_ConvertDamageToResources_Params
{
	float                                              ThresholdMin_Pct;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ThresholdMax_Pct;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortWorldItemDefinition*                    ItemToSpawn;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CurrentStacksSpawned;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumberOfStacksToSpawn;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumberOfItemsPerStack;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumberOfStacksSpawned;                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               AllStacksSpawned;                                         // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Prop_Outlander_Fragment_Llama.Prop_Outlander_Fragment_Llama_C.ShowHideModels
struct AProp_Outlander_Fragment_Llama_C_ShowHideModels_Params
{
	bool                                               Show_SkeletalMesh;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Prop_Outlander_Fragment_Llama.Prop_Outlander_Fragment_Llama_C.LlamaLifespanExpired
struct AProp_Outlander_Fragment_Llama_C_LlamaLifespanExpired_Params
{
};

// Function Prop_Outlander_Fragment_Llama.Prop_Outlander_Fragment_Llama_C.CreateAndAttachEyes
struct AProp_Outlander_Fragment_Llama_C_CreateAndAttachEyes_Params
{
	class USkeletalMeshComponent*                      Skeletal_Mesh;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Prop_Outlander_Fragment_Llama.Prop_Outlander_Fragment_Llama_C.SpawnHeadProjectile
struct AProp_Outlander_Fragment_Llama_C_SpawnHeadProjectile_Params
{
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Prop_Outlander_Fragment_Llama.Prop_Outlander_Fragment_Llama_C.SetupDiamondLlama
struct AProp_Outlander_Fragment_Llama_C_SetupDiamondLlama_Params
{
};

// Function Prop_Outlander_Fragment_Llama.Prop_Outlander_Fragment_Llama_C.SpawnDeathIngredients
struct AProp_Outlander_Fragment_Llama_C_SpawnDeathIngredients_Params
{
};

// Function Prop_Outlander_Fragment_Llama.Prop_Outlander_Fragment_Llama_C.SpawnRareCrystals
struct AProp_Outlander_Fragment_Llama_C_SpawnRareCrystals_Params
{
};

// Function Prop_Outlander_Fragment_Llama.Prop_Outlander_Fragment_Llama_C.UserConstructionScript
struct AProp_Outlander_Fragment_Llama_C_UserConstructionScript_Params
{
};

// Function Prop_Outlander_Fragment_Llama.Prop_Outlander_Fragment_Llama_C.Timeline_0__FinishedFunc
struct AProp_Outlander_Fragment_Llama_C_Timeline_0__FinishedFunc_Params
{
};

// Function Prop_Outlander_Fragment_Llama.Prop_Outlander_Fragment_Llama_C.Timeline_0__UpdateFunc
struct AProp_Outlander_Fragment_Llama_C_Timeline_0__UpdateFunc_Params
{
};

// Function Prop_Outlander_Fragment_Llama.Prop_Outlander_Fragment_Llama_C.ReceiveBeginPlay
struct AProp_Outlander_Fragment_Llama_C_ReceiveBeginPlay_Params
{
};

// Function Prop_Outlander_Fragment_Llama.Prop_Outlander_Fragment_Llama_C.OnDamageServer
struct AProp_Outlander_Fragment_Llama_C_OnDamageServer_Params
{
	float*                                             Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (CPF_Parm)
};

// Function Prop_Outlander_Fragment_Llama.Prop_Outlander_Fragment_Llama_C.OnDeathServer
struct AProp_Outlander_Fragment_Llama_C_OnDeathServer_Params
{
	float*                                             Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (CPF_Parm)
};

// Function Prop_Outlander_Fragment_Llama.Prop_Outlander_Fragment_Llama_C.DefaultLlama
struct AProp_Outlander_Fragment_Llama_C_DefaultLlama_Params
{
};

// Function Prop_Outlander_Fragment_Llama.Prop_Outlander_Fragment_Llama_C.DiamondLlama
struct AProp_Outlander_Fragment_Llama_C_DiamondLlama_Params
{
};

// Function Prop_Outlander_Fragment_Llama.Prop_Outlander_Fragment_Llama_C.OnDamagePlayEffects
struct AProp_Outlander_Fragment_Llama_C_OnDamagePlayEffects_Params
{
	float*                                             Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (CPF_Parm)
};

// Function Prop_Outlander_Fragment_Llama.Prop_Outlander_Fragment_Llama_C.OnDeathPlayEffects
struct AProp_Outlander_Fragment_Llama_C_OnDeathPlayEffects_Params
{
	float*                                             Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (CPF_Parm)
};

// Function Prop_Outlander_Fragment_Llama.Prop_Outlander_Fragment_Llama_C.OnBounceAnimationUpdate
struct AProp_Outlander_Fragment_Llama_C_OnBounceAnimationUpdate_Params
{
	struct FFortBounceData*                            Data;                                                     // (CPF_Parm)
};

// Function Prop_Outlander_Fragment_Llama.Prop_Outlander_Fragment_Llama_C.TheHeadWasSpawnedOnTheServerCallback
struct AProp_Outlander_Fragment_Llama_C_TheHeadWasSpawnedOnTheServerCallback_Params
{
};

// Function Prop_Outlander_Fragment_Llama.Prop_Outlander_Fragment_Llama_C.LlamaDeathMontageIsComplete
struct AProp_Outlander_Fragment_Llama_C_LlamaDeathMontageIsComplete_Params
{
};

// Function Prop_Outlander_Fragment_Llama.Prop_Outlander_Fragment_Llama_C.The First Llama Death Animation is Finished
struct AProp_Outlander_Fragment_Llama_C_The_First_Llama_Death_Animation_is_Finished_Params
{
};

// Function Prop_Outlander_Fragment_Llama.Prop_Outlander_Fragment_Llama_C.Deploy Finished
struct AProp_Outlander_Fragment_Llama_C_Deploy_Finished_Params
{
};

// Function Prop_Outlander_Fragment_Llama.Prop_Outlander_Fragment_Llama_C.TimeoutSetsIsDying
struct AProp_Outlander_Fragment_Llama_C_TimeoutSetsIsDying_Params
{
};

// Function Prop_Outlander_Fragment_Llama.Prop_Outlander_Fragment_Llama_C.ExecuteUbergraph_Prop_Outlander_Fragment_Llama
struct AProp_Outlander_Fragment_Llama_C_ExecuteUbergraph_Prop_Outlander_Fragment_Llama_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
