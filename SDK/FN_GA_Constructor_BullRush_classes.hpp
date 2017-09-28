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

// BlueprintGeneratedClass GA_Constructor_BullRush.GA_Constructor_BullRush_C
// 0x024F (0x0D59 - 0x0B0A)
class UGA_Constructor_BullRush_C : public UGAT_ConstructorActiveAbility_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B10(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FGameplayTag                                Event_Activate;                                           // 0x0B18(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTag                                Event_Complete;                                           // 0x0B20(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UAnimMontage*                                M_BullRush;                                               // 0x0B28(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      GE_BullRushDamage;                                        // 0x0B30(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTag                                EventPush;                                                // 0x0B38(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTag                                EventPushEnd;                                             // 0x0B40(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              RunForwardStartTime;                                      // 0x0B48(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BullRushDistance;                                         // 0x0B4C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RunForwardDuration;                                       // 0x0B50(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BullRushAnimUnitsPerSec;                                  // 0x0B54(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      RiotShieldApplyEndingKnockback : 1;                       // 0x0B58(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      RiotShield : 1;                                           // 0x0B59(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class AActor*>                              HitTargets;                                               // 0x0B60(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	float                                              EndingKnockback;                                          // 0x0B70(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              EndingKnockbackZAngle;                                    // 0x0B74(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       TC_RiotShield;                                            // 0x0B78(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UClass*                                      GE_RiotShieldDamage;                                      // 0x0B98(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             P_MotionLines;                                            // 0x0BA0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    P_MotionLines_Active;                                     // 0x0BA8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              UpgradeDistance;                                          // 0x0BB0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DefaultDistance;                                          // 0x0BB4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PitchInputScale;                                          // 0x0BB8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              YawInputScale;                                            // 0x0BBC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundCue*                                   SoundImpactEnemy;                                         // 0x0BC0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundCue*                                   SoundShieldChargeStart;                                   // 0x0BC8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundCue*                                   SoundChargeKnockback;                                     // 0x0BD0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FFortFeedbackHandle                         BullRushStartFeedback;                                    // 0x0BD8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UClass*                                      ShieldCameraShake;                                        // 0x0BF0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ImpactEnemyCameraShake;                                   // 0x0BF8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ABuildingWall*                               HitBuilding;                                              // 0x0C00(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       TC_LongRush;                                              // 0x0C08(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_AttachedToShield;                                      // 0x0C28(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	unsigned char                                      DashEnded : 1;                                            // 0x0C48(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      LongRush : 1;                                             // 0x0C49(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       TC_EmergencyOverride;                                     // 0x0C50(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	unsigned char                                      EmergencyOverride : 1;                                    // 0x0C70(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       TC_BloodyBull;                                            // 0x0C78(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	unsigned char                                      BloodyBull : 1;                                           // 0x0C98(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      GE_BloodyBullDamage;                                      // 0x0CA0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     DashStartLocation;                                        // 0x0CA8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UForceFeedbackEffect*                        ShieldForceFeedback;                                      // 0x0CB8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UForceFeedbackEffect*                        ImpactEnemyForceFeedback;                                 // 0x0CC0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       TC_ChinaShop;                                             // 0x0CC8(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	unsigned char                                      ChinaShop : 1;                                            // 0x0CE8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bPlayerIsInBullRushAndFalling : 1;                        // 0x0CE9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTimerHandle                                FallingTimerHandle;                                       // 0x0CF0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class USoundBase*                                  HitWallSound;                                             // 0x0CF8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             HitWallFX;                                                // 0x0D00(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              HitWallDotProduct;                                        // 0x0D08(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      GE_Disarm;                                                // 0x0D10(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      GE_StandardDamage;                                        // 0x0D18(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      GE_ChinaShop;                                             // 0x0D20(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                Count;                                                    // 0x0D28(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTimerHandle                                CheckForDistanceHandle;                                   // 0x0D30(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              CurrentRunForwardDuration;                                // 0x0D38(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      GE_Charging;                                              // 0x0D40(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTag                                TC_StopSmasherCharge;                                     // 0x0D48(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class AFortAIPawn*                                 LocalOverlap;                                             // 0x0D50(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EAIType>                               CurrentAIType;                                            // 0x0D58(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Constructor_BullRush.GA_Constructor_BullRush_C");
		return ptr;
	}


	void GetAppliedDamage(class UClass** Applied);
	void GetAIType(class AFortAIPawn* InPawn, TEnumAsByte<EAIType>* OutType);
	void ApplyDamageToTarget(class AActor* Actor, class UClass* Applied);
	void ForceAttachClose();
	bool IsAShielder(class AFortPawn* Actor);
	struct FVector GetCharacterNormalizedVelocity();
	void HideToggledDecoTools();
	void HandleBigMonsterCollide(class UObject* Object, bool* Success);
	void LaunchPawn(class AFortAIPawn* InputPin, bool ApplyDamage);
	void IsBigMonster(const TScriptInterface<class UGameplayTagAssetInterface>& InPawn, bool* IsSmasher);
	void DetachPawn(class AFortAIPawn* InPawn);
	void EndPushingAll();
	void ApplyPushToPawn(class AFortPawn* InPawn);
	float AbilityRemainingTime();
	void IgnoreCollisionWith(class ABuildingActor* InActor, bool* ShouldIgnore);
	bool ShouldForceCollision(class AActor* InActor);
	void GetAnimationNameForHusk(struct FName* AnimName);
	void IncrementAnimCount(int* Output_Get);
	void PrepareAbilityValues();
	void EndPushingAllCollideWall(const struct FVector& HitNormal, const struct FVector& HitLocation);
	void RunChinaShop(class AActor* InOverlap, bool* PassThroughWall);
	void ToggleCapsuleCollision(bool Enable);
	void FX_ImpactEnemy();
	void ToggleSteeringReduction(bool bEnableSteeringReduction);
	void FX_MotionLines_Deactivate();
	void FX_MotionLines_Activate();
	void ApplyEndingDamage();
	void SetupAbility(class UAbilitySystemComponent* AbilitySystem);
	void OnChange_67D8F5D643B13C19C65EEBAC7E806B43(TEnumAsByte<EMovementMode> NewMovementMode);
	void Completed_81268963444013D8ABD8329A74FC2BA7(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_81268963444013D8ABD8329A74FC2BA7(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_81268963444013D8ABD8329A74FC2BA7(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_C1DD435D421925C851371490B466988E(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_C1DD435D421925C851371490B466988E(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_C1DD435D421925C851371490B466988E(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_91555FE04FDFE9F5B7F3CB96A10864D5(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_91555FE04FDFE9F5B7F3CB96A10864D5(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_91555FE04FDFE9F5B7F3CB96A10864D5(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void EventReceived_C1DB76B7444372BAD736AFB207F3A2D2(const struct FGameplayEventData& Payload);
	void K2_OnEndAbility();
	void CheckDashDistance(float InDelta);
	void BeginFallingTimer();
	void OnPawnLanded_Event_1(const struct FHitResult& Hit);
	void BindOnPawnLanded();
	void EndFallingTimer();
	void K2_ActivateAbility();
	void EndAbilitySlide();
	void EndAbilityHitWall();
	void DistanceCheckTimer();
	void HitWall(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BindHitWall();
	void UnBindHitWall();
	void OverlapEnemyCallback(class AFortPawn* InOverlapped);
	void BindShieldOverlaps();
	void ShieldOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void UnbindShieldOverlaps();
	void ForceEndAbility();
	void ConstructorPawnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void Hit();
	void UnbindHit();
	void ForceAttach(class AFortAIPawn* LocalOverlap);
	void ExecuteUbergraph_GA_Constructor_BullRush(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
