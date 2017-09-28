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

// BlueprintGeneratedClass GAB_SmasherCharge.GAB_SmasherCharge_C
// 0x0198 (0x0BD8 - 0x0A40)
class UGAB_SmasherCharge_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A40(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class ASmasherPawn_C*                              SmasherPawn;                                              // 0x0A48(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class AActor*                                      BumpedActor;                                              // 0x0A50(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     BumpedActorNormal;                                        // 0x0A58(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     BumpedActorImpactPoint;                                   // 0x0A64(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BumpedActorImpactBufferHeight;                            // 0x0A70(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     BumpedActorSmasherVelocity;                               // 0x0A74(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BumpedActorExceptionZNormalThreshold;                     // 0x0A80(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      Debug : 1;                                                // 0x0A84(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      ChargingSpeedReached : 1;                                 // 0x0A85(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      LastCheckWasSlow : 1;                                     // 0x0A86(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      SmasherFaceplanted : 1;                                   // 0x0A87(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      WaitingForMeleeSwingTargetSelection : 1;                  // 0x0A88(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      WaitingForChargeDamageTargetSelection : 1;                // 0x0A89(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      ChargeDamageTargetSelectionDamagedSomething : 1;          // 0x0A8A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      AbilityShouldEndASAP : 1;                                 // 0x0A8B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      AbilityEndingNow : 1;                                     // 0x0A8C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class AActor*>                              ActorsDamagedBySmasherCharge;                             // 0x0A90(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	class UClass*                                      GE_SmasherReachedChargeSpeed;                             // 0x0AA0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      GE_SmasherFaceplant;                                      // 0x0AA8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTag                                EC_NPCAbilityAttackMeleeCharge;                           // 0x0AB0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              MinYawAngleToLaunchPawnsFromSmasherCharge;                // 0x0AB8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PitchAngleToLaunchPawnsFromSmasherCharge;                 // 0x0ABC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SmasherChargeLaunchPawnVelocity;                          // 0x0AC0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ChargeTimeoutTime;                                        // 0x0AC4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class AActor*>                              CachedArrayOfHitActors;                                   // 0x0AC8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	unsigned char                                      bTryingToPlayMeleeSwing : 1;                              // 0x0AD8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bCancelledMontage : 1;                                    // 0x0AD9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SmasherChargeRotationRate;                                // 0x0ADC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class AActor*                                      PreviouslyBumpedActor;                                    // 0x0AE0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class AActor*                                      LastDamagedActor;                                         // 0x0AE8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      ChargeMovementReachedGoalActor : 1;                       // 0x0AF0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      ChargeHitGoalActor : 1;                                   // 0x0AF1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FaceplantCheckTime;                                       // 0x0AF4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LastCheckWasSlowTime;                                     // 0x0AF8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SmasherFaceplantedTime;                                   // 0x0AFC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       TC_NPCBehaviorProhibitsAbilityAttackMeleeBump;            // 0x0B00(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_NPCBehaviorProbibitsAbilityAttackAny;                  // 0x0B20(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTag                                GC_GameplayCueNPCSmasherCharge;                           // 0x0B40(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FFortFeedbackHandle                         SmasherChargingFeedback;                                  // 0x0B48(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_NPCBehaviorDBNO;                                       // 0x0B60(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_GameplayStatusDBNO;                                    // 0x0B80(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class AActor*                                      FaceplantActorIAmStandingOn;                              // 0x0BA0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UFortAbilityTask_MoveAI*                     ChargeMoveLocation;                                       // 0x0BA8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UFortAbilityTask_MoveAI*                     ChargeMove;                                               // 0x0BB0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       TC_ConstructorBullrushing;                                // 0x0BB8(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_SmasherCharge.GAB_SmasherCharge_C");
		return ptr;
	}


	void EnableHotspots(bool Enable);
	void DamageThisActor(class AActor* Actor);
	void Slow_Speed_Faceplant_Check(bool* Standing_On_Bumped_Actor_We_Previously_Ignored);
	void UpdateChargingSpeedReached();
	void InitializeAbility();
	void Completed_0B8569504C1E876E723C499B4462A584(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_0B8569504C1E876E723C499B4462A584(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_0B8569504C1E876E723C499B4462A584(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnCancelled_2B1380284EE36AB4C4A04DBDFF3C24C9();
	void OnInterrupted_2B1380284EE36AB4C4A04DBDFF3C24C9();
	void OnComplete_2B1380284EE36AB4C4A04DBDFF3C24C9();
	void OnCancelled_1048ADC34DB8C17033C4B9A1C116D220();
	void OnInterrupted_1048ADC34DB8C17033C4B9A1C116D220();
	void OnComplete_1048ADC34DB8C17033C4B9A1C116D220();
	void Cancelled_9066C547446CB68FD5A3D5BB83B00491(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_9066C547446CB68FD5A3D5BB83B00491(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_26E7DFC34C3008718C4C46A45D67C637(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_26E7DFC34C3008718C4C46A45D67C637(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_C216669A4D935722E29A339C9C0ADB50(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_C216669A4D935722E29A339C9C0ADB50(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_C216669A4D935722E29A339C9C0ADB50(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void EventReceived_51CE074748CA749955FE2CA61620188A(const struct FGameplayEventData& Payload);
	void MoveToLoop();
	void K2_ActivateAbility();
	void SmasherBumpsSomething(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void K2_OnEndAbility();
	void ChargeTimeOut();
	void AttemptEndAbility(const struct FString& From);
	void StopLoopingOverList();
	void EnableCrushBox();
	void DisableCrushBox();
	void CrushBoxOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void EnableSmasherBump();
	void DisableSmasherBump();
	void MeleeSwingComplete();
	void MeleeSwingBoxOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void AttemptToFindActorsToMeleeSwingAt();
	void AttemptChargeDamage();
	void Faceplant();
	void FaceplantCheck();
	void ChargeSpeedCheck();
	void CheckForActorsThatShouldBeDamagedWhenChargeBegins();
	void Attempt_to_Melee_Swing_And_Deal_Charge_Damage(const struct FString& CallerDebugString);
	void ExecuteUbergraph_GAB_SmasherCharge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
