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

// BlueprintGeneratedClass ProjectileHuskPropane.ProjectileHuskPropane_C
// 0x00C8 (0x08C8 - 0x0800)
class AProjectileHuskPropane_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0800(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UAudioComponent*                             PropaneHiss;                                              // 0x0808(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    ProjectileParticleSystem;                                 // 0x0810(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        PropaneTank;                                              // 0x0818(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ExpandBeforeExplosion_Scale_D8D32F5C461720AD3E80E0AFA0C35A66;// 0x0820(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ExpandBeforeExplosion__Direction_D8D32F5C461720AD3E80E0AFA0C35A66;// 0x0824(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTimelineComponent*                          ExpandBeforeExplosion;                                    // 0x0828(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TankWiggle_Scale_D15B7C104FC1BC0812E244B2C6229DE6;        // 0x0830(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TankWiggle__Direction_D15B7C104FC1BC0812E244B2C6229DE6;   // 0x0834(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTimelineComponent*                          TankWiggle;                                               // 0x0838(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    Trail_Material;                                           // 0x0840(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ABuildingSMActor*                            MyBaseMesh;                                               // 0x0848(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      Dropped : 1;                                              // 0x0850(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      IsDestroyed : 1;                                          // 0x0851(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     VelocityWhenDropped;                                      // 0x0854(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      MeleeDrop : 1;                                            // 0x0860(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     MeleeDropVector;                                          // 0x0864(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  ExplosionSound;                                           // 0x0870(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                TankShotsToExplode;                                       // 0x0878(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DamageDealt;                                              // 0x087C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class AController*                                 DamageInstigatedBy;                                       // 0x0880(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                TankShotsToExplodeProgress;                               // 0x0888(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      TankOnGround : 1;                                         // 0x088C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      MeleeThrowsTank : 1;                                      // 0x088D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // 0x0890(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EFortTeam>                             DamageInstigatorTeam;                                     // 0x0898(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             ExplosionEffect;                                          // 0x08A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     ExplosionEffectScale;                                     // 0x08A8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  BounceSound;                                              // 0x08B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  SoundBeforeExplode;                                       // 0x08C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjectileHuskPropane.ProjectileHuskPropane_C");
		return ptr;
	}


	void SetTankInBT(class UObject* ObjectToPassToBT, class UObject** ObjectPassedToBT);
	void OnRep_TankOnGround();
	void OnRep_TankShotsToExplodeProgress();
	void OnRep_Dropped();
	void OnRep_IsDestroyed();
	void UserConstructionScript();
	void TankWiggle__FinishedFunc();
	void TankWiggle__UpdateFunc();
	void ExpandBeforeExplosion__FinishedFunc();
	void ExpandBeforeExplosion__UpdateFunc();
	void OnBounce(struct FHitResult* Hit);
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void OnStop(struct FHitResult* Hit);
	void BaseTookDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void DropOrExplodeTank(bool Drop, bool MeleeDrop, class AActor* DamageCauser);
	void RemindAI();
	void MyBaseDied(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnTankTakeDamage();
	void TankForceFXOn();
	void ShotgunTimeout();
	void CheckDamageType();
	void NotMeleeDamage();
	void TankBaseDestroyed();
	void DelayExplosion_();
	void ExplodeNow();
	void AIKnowsTankHasDropped();
	void ExpandThenExplode();
	void ExecuteUbergraph_ProjectileHuskPropane(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
