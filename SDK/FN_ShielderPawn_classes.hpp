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

// BlueprintGeneratedClass ShielderPawn.ShielderPawn_C
// 0x0180 (0x1BF0 - 0x1A70)
class AShielderPawn_C : public AFortAIPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1A70(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class USphereComponent*                            ShielderReAttachRange;                                    // 0x1A78(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPhysicsConstraintComponent*                 PhysicsConstraint;                                        // 0x1A80(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCapsuleComponent*                           WeaponCapsuleCollision;                                   // 0x1A88(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RotateShielder_LerpAlpha_F33B1BA94860E62F431B509EF30FFA64;// 0x1A90(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    RotateShielder__Direction_F33B1BA94860E62F431B509EF30FFA64;// 0x1A94(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTimelineComponent*                          RotateShielder;                                           // 0x1A98(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InterpShielderToNewLocation_LerpAlpha_4C3E0C0B4BF05DD8DEA964BC480F2112;// 0x1AA0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    InterpShielderToNewLocation__Direction_4C3E0C0B4BF05DD8DEA964BC480F2112;// 0x1AA4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTimelineComponent*                          InterpShielderToNewLocation;                              // 0x1AA8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Debug : 1;                                                // 0x1AB0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      AttemptingReAttach : 1;                                   // 0x1AB1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      ShielderVisible : 1;                                      // 0x1AB2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      OrphanForceKill : 1;                                      // 0x1AB3(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      Orphaned : 1;                                             // 0x1AB4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              GameTimeWhenOrphaned;                                     // 0x1AB8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class AFortPawn*                                   AttachPawn;                                               // 0x1AC0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      GE_ShielderShield;                                        // 0x1AC8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class AFortPawn*                                   PotentialAttachPawn;                                      // 0x1AD0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class AFortPawn*>                           PotentialAttachPawns;                                     // 0x1AD8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	class UClass*                                      ShielderSpringArmClass;                                   // 0x1AE8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class AShielderSpringArm_C*                        ShielderSpringArm;                                        // 0x1AF0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FRotator                                    SpringArmTargetRotation;                                  // 0x1AF8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FCurveTableRowHandle                        EnemyScalingSheet;                                        // 0x1B08(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UParticleSystemComponent*                    P_ShielderSphere;                                         // 0x1B18(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FCurveTableRowHandle                        NPCMiscCurvesSheet;                                       // 0x1B20(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              OrphanTimeBeforeReAttachByEncounter;                      // 0x1B30(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              OrphanTimeBeforeReAttachByProximity;                      // 0x1B34(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              OrphanTimeBeforceForceKill;                               // 0x1B38(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxTimeToReAttachByEncounter;                             // 0x1B3C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ShielderVisibilityDelayWhenAttachingToSpawningPawn;       // 0x1B40(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTag                                TC_NPCStatusWearingShielder;                              // 0x1B48(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTag                                TC_NPCAbilityNonAttackTeleportOut;                        // 0x1B50(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTag                                TC_NPCAbilityNonAttackTeleportIn;                         // 0x1B58(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTag                                TC_NPCAbilityNonAttackSummon;                             // 0x1B60(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTag                                TC_NPCAbilityNonAttackDropNPC;                            // 0x1B68(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              SpringArmRotationTimeMin;                                 // 0x1B70(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SpringArmRotationTimeMax;                                 // 0x1B74(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              OrphanDetachZVelocity;                                    // 0x1B78(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FFortAbilitySetHandle                       ShielderAttachPawnAbilitySet;                             // 0x1B80(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTag                                GameplayCueShieldReapplied;                               // 0x1BA8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTag                                GameplayCueShieldDestroyed;                               // 0x1BB0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class USoundBase*                                  Sound_ShieldStart;                                        // 0x1BB8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Sound_ShieldBroken;                                       // 0x1BC0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Sound_ShieldStart_NoLoop;                                 // 0x1BC8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bShieldApplied : 1;                                       // 0x1BD0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTag                                TC_HuskSmasher;                                           // 0x1BD8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTag                                TC_HuskTaker;                                             // 0x1BE0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UClass*                                      GE_HideOnMiniMap;                                         // 0x1BE8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ShielderPawn.ShielderPawn_C");
		return ptr;
	}


	void SetMiniMapIconStatus();
	void OnRep_bShieldApplied();
	void UpdateShieldFXVisibility();
	void ApplyShield();
	void GameTimeString(struct FString* NewParam);
	void OnRep_ShielderSpringArm();
	void DebugLineAndSphere(bool Line, const struct FLinearColor& LineColor, bool Sphere, const struct FLinearColor& SphereColor, float VisibilityOffset);
	void OnRep_ShielderVisible();
	void AttachShielderToSpringArm();
	void AttachSpringArmToAttachPawn();
	void OnRep_SpringArmTargetRotation();
	void UserConstructionScript();
	void InterpShielderToNewLocation__FinishedFunc();
	void InterpShielderToNewLocation__UpdateFunc();
	void RotateShielder__FinishedFunc();
	void RotateShielder__UpdateFunc();
	void OnStunned();
	void OnDamageServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void OnKnockedback();
	void ReceiveBeginPlay();
	void OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void ShielderAttachComplete();
	void OnEncounterEnemySpawned(class UFortAIEncounterInfo* Encounter, class AFortAIPawn* SpawnedEnemy);
	void SetShielderOrphanStatus(bool Orphaned, bool GiveZVelocityOnDetach, const struct FString& Reason);
	void OnComponentBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void VerifyPotentialAttachPawnIsValidAndAttachToIt(class AFortPawn* PotentialAttachPawn, bool HiddenAttach);
	void GrabRandomPotentialAttachPawn(bool HiddenAttach);
	void AttachShielderToPotentialAttachPawn();
	void BindEncounterSpawn();
	void ReApplyShield();
	void UnBindEncounterSpawn();
	void OnComponentEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ShielderShieldBroken();
	void AnimateSpringArm();
	void AttachPawnDead(bool Despawn);
	void OrphanForceKillTimer();
	void BindProxOverlap();
	void UnBindProxOverlap();
	void InterpShielderToSpringArm();
	void RotateShielderForward();
	void AdditiveHitReactDelay();
	void InvisibleOrphanTick();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_ShielderPawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
