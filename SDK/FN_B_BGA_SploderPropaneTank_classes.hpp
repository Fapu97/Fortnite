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

// BlueprintGeneratedClass B_BGA_SploderPropaneTank.B_BGA_SploderPropaneTank_C
// 0x0131 (0x0971 - 0x0840)
class AB_BGA_SploderPropaneTank_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0840(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UAudioComponent*                             PropaneExplosionWarningAudio;                             // 0x0848(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    PropaneExplosionWarningFX;                                // 0x0850(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        PropaneTankMesh;                                          // 0x0858(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCapsuleComponent*                           PropaneTankCapsule;                                       // 0x0860(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UProjectileMovementComponent*                ProjectileMovement;                                       // 0x0868(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ExpandBeforeExplode_Scale_5E732A8540AAB66FDC4945A2B3198A85;// 0x0870(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ExpandBeforeExplode__Direction_5E732A8540AAB66FDC4945A2B3198A85;// 0x0874(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTimelineComponent*                          ExpandBeforeExplode;                                      // 0x0878(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TankWiggle_Scale_F38F2A8E4B18D4E64B869A903452F890;        // 0x0880(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TankWiggle__Direction_F38F2A8E4B18D4E64B869A903452F890;   // 0x0884(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTimelineComponent*                          TankWiggle;                                               // 0x0888(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsLevelProp : 1;                                          // 0x0890(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Thrown : 1;                                               // 0x0891(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Dropped : 1;                                              // 0x0892(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsDestroyed : 1;                                          // 0x0893(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      MeleeDrop : 1;                                            // 0x0894(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     MeleeDropVector;                                          // 0x0898(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      TankOnGround : 1;                                         // 0x08A4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      TankWarningFXEnabled : 1;                                 // 0x08A5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ExplosionImminent : 1;                                    // 0x08A6(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      DelayedShouldDie : 1;                                     // 0x08A7(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  BounceSound;                                              // 0x08A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  SoundBeforeExplode;                                       // 0x08B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  ExplosionSound;                                           // 0x08B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             ExplosionEffect;                                          // 0x08C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     ExplosionEffectScale;                                     // 0x08C8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class APawn*                                       ExplosionInstigatingPawn;                                 // 0x08D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	class AController*                                 ExplosionInstigatingController;                           // 0x08E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	class AActor*                                      LastDamageCausingActor;                                   // 0x08E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class APawn*                                       LastDamageCausingPawn;                                    // 0x08F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       TC_MeleeDamage;                                           // 0x08F8(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class ABuildingSMActor*                            MyBaseMesh;                                               // 0x0918(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     VelocityWhenDropped;                                      // 0x0920(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTag                                Event_NPCAbilityAttackAOEExplosion;                       // 0x0930(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              TankReminderTimeMin;                                      // 0x0938(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TankReminderTimeMax;                                      // 0x093C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EFortTeamAffiliation>                  TeamAffiliationBetweenDamageInstigatorAndTankOwner;       // 0x0940(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortTeam>                             ExplosionInstigatingPawnTeam;                             // 0x0941(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortTeam>                             TankOwnerTeam;                                            // 0x0942(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      AIAbilityTargetOfTankOwner;                               // 0x0948(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	float                                              XYVelocityMultWhenBouncingOffOfAbilityTarget;             // 0x0950(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      MeleeLaunch : 1;                                          // 0x0954(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      EnablePropanePiecesInExplosionVFX : 1;                    // 0x0955(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     LastDamageCausingPawnVector;                              // 0x0958(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAudioComponent*                             SpawnedSoundBeforeExplode;                                // 0x0968(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      TankHitTargetThatShouldStopVelocity : 1;                  // 0x0970(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_BGA_SploderPropaneTank.B_BGA_SploderPropaneTank_C");
		return ptr;
	}


	bool ShouldDie(float* Damage, class AController** EventInstigator, class AActor** DamageCauser);
	void OnRep_TankWarningFXEnabled();
	void Propane_Tank_Warning_FX_and_Audio_Status(bool Enabled);
	void OnRep_Thrown();
	void SetTankInBT(class UObject* ObjectToPassToBT);
	void OnRep_TankOnGround();
	void OnRep_Dropped();
	void OnRep_IsDestroyed();
	void UserConstructionScript();
	void TankWiggle__FinishedFunc();
	void TankWiggle__UpdateFunc();
	void ExpandBeforeExplode__FinishedFunc();
	void ExpandBeforeExplode__UpdateFunc();
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_29_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult);
	void BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_32_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	void OnDamageServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void ReceiveDestroyed();
	void OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void BounceOrImpactSound();
	void BounceOrImpactTankWiggle();
	void ExpandThenExplode();
	void ExplodeNow();
	void DropOrExplodeTank(bool MeleeDrop, class APawn* DamageInstigator, bool Drop);
	void DelayExplosion_();
	void MeleeDamageLaunchesTank();
	void TankBaseDestroyed();
	void MyBaseDiedOrWasReconfigured(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	void AIKnowsTankHasDropped();
	void RemindAI();
	void MyBaseTookDamage(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void ReceiveBeginPlay();
	void UpdateTankPhysics(float ProjectileGravityScale, float InitialSpeed, const struct FVector& Velocity);
	void BndEvt__PropaneTankCapsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void FauxBounceOffOfPawn();
	void DampenVelocityNearImportantTarget();
	void HastenExplosion();
	void ExecuteUbergraph_B_BGA_SploderPropaneTank(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
