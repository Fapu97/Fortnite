#pragma once

// Fortnite (Alpha) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HuskPawn_Beehive.HuskPawn_Beehive_C
// 0x0098 (0x1F70 - 0x1ED8)
class AHuskPawn_Beehive_C : public AHuskPawn_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1ED8(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UParticleSystemComponent*                    HuskHeadBees;                                             // 0x1EE0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCapsuleComponent*                           HiveCollision;                                            // 0x1EE8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        Hive;                                                     // 0x1EF0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAudioComponent*                             BeeSound;                                                 // 0x1EF8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HiveHealth;                                               // 0x1F00(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      HiveBroken : 1;                                           // 0x1F04(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       TC_NPCAbilityAOEBeehive;                                  // 0x1F08(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_AISkillHuskBeehiveHiveOnHead;                          // 0x1F28(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       TagContainerNPCWearingBeehive;                            // 0x1F48(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTag                                GameplayTagNPCWearingBeehive;                             // 0x1F68(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HuskPawn_Beehive.HuskPawn_Beehive_C");
		return ptr;
	}


	void OnRep_HiveBroken();
	void UserConstructionScript();
	void IgnitePropaneTank(class AFortPawn* Pawn, float RemainingFuseTime, bool JustDrop);
	void FSMRemovePropaneTank();
	void FSMFailedToSpawnTank();
	void FSMBeginPropaneTankMelee();
	void BeeCloudDespawned(class AFortProjectileBase* Cloud);
	void ManageBurpEffect(bool Enabled);
	void ReceiveBeginPlay();
	void BeeTrail();
	void OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void OnDamageServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void GameplayCue_Abilities_Activation_NPC_Generic_RangedCooldownFX(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void ExecuteUbergraph_HuskPawn_Beehive(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
