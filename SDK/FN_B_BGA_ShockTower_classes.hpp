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

// BlueprintGeneratedClass B_BGA_ShockTower.B_BGA_ShockTower_C
// 0x0198 (0x09D8 - 0x0840)
class AB_BGA_ShockTower_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0840(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UParticleSystemComponent*                    P_Outlander_ShockTower_ChargeUp;                          // 0x0848(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    P_Outlander_ShockTowerSparks;                             // 0x0850(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        ShockTower_Fork;                                          // 0x0858(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        ShockTower_Sphere;                                        // 0x0860(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        ShockTower_Base;                                          // 0x0868(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAudioComponent*                             SoundShockTowerAmbientLoop;                               // 0x0870(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             FX_Location;                                              // 0x0878(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USphereComponent*                            Collision_EnemyTouch;                                     // 0x0880(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    P_Shocktower_Fire;                                        // 0x0888(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPointLightComponent*                        Illumination;                                             // 0x0890(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCapsuleComponent*                           Capsule;                                                  // 0x0898(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x08A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TurnTop_RotatingLerp_ECCCA966487F2D594DED2BA10B695F3B;    // 0x08A8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TurnTop_FacingLerp_ECCCA966487F2D594DED2BA10B695F3B;      // 0x08AC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TurnTop__Direction_ECCCA966487F2D594DED2BA10B695F3B;      // 0x08B0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTimelineComponent*                          TurnTop;                                                  // 0x08B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Intro_RotationWiggleY_108E85BF4FBE853B608BA1A70D3B2B71;   // 0x08C0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Intro_RotationWiggleX_108E85BF4FBE853B608BA1A70D3B2B71;   // 0x08C4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Intro_Progress_108E85BF4FBE853B608BA1A70D3B2B71;          // 0x08C8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Intro_TopRotation_108E85BF4FBE853B608BA1A70D3B2B71;       // 0x08CC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Intro_TopScale_108E85BF4FBE853B608BA1A70D3B2B71;          // 0x08D0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Intro_BasePosition_108E85BF4FBE853B608BA1A70D3B2B71;      // 0x08D4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Intro_BaseRotation_108E85BF4FBE853B608BA1A70D3B2B71;      // 0x08D8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Intro_BaseScale_108E85BF4FBE853B608BA1A70D3B2B71;         // 0x08DC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Intro__Direction_108E85BF4FBE853B608BA1A70D3B2B71;        // 0x08E0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTimelineComponent*                          Intro;                                                    // 0x08E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageRadius;                                             // 0x08F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Duration;                                                 // 0x08F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DelayBeforeFirstFiring;                                   // 0x08F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ShockTowerReFireDelay;                                    // 0x08FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             P_ShockTower_Initial;                                     // 0x0900(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             P_ShockTower_Chain1;                                      // 0x0908(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             P_ShockTower_Chain2;                                      // 0x0910(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      Has_Target : 1;                                           // 0x0918(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTag                                TC_Event_ShockTower_Fire;                                 // 0x0920(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	unsigned char                                      Target_Checking_On : 1;                                   // 0x0928(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      Kill_Tower : 1;                                           // 0x0929(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x092C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                MaxInitialTargets;                                        // 0x0938(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                MaxChainTargets;                                          // 0x093C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LightningMeshLength;                                      // 0x0940(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class UStaticMesh*>                         LightningSpawnMeshOptions;                                // 0x0948(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>                SpawnedLightningMeshes1;                                  // 0x0958(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              LightningThickness;                                       // 0x0968(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class UStaticMeshComponent*>                SpawnedLightningMeshes2;                                  // 0x0970(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>                SpawnedLightningMeshes3;                                  // 0x0980(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class USoundBase*                                  SoundShockTowerDeploy;                                    // 0x0990(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  SoundShockTowerFire;                                      // 0x0998(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  SoundShockTowerImpact;                                    // 0x09A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstance*                           M_LightningMaterial;                                      // 0x09A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FRotator                                    CurrentRotation;                                          // 0x09B0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FRotator                                    CurrentRotationSphere;                                    // 0x09BC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             P_PlacementDust;                                          // 0x09C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      HasSpawnedPlacementDust : 1;                              // 0x09D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PlacementDustTime;                                        // 0x09D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_BGA_ShockTower.B_BGA_ShockTower_C");
		return ptr;
	}


	void OnRep_Target_Location();
	void OnRep_Kill_Tower();
	void Fire_Weapon();
	void Overlap_Enemy_Check();
	void UserConstructionScript();
	void Intro__FinishedFunc();
	void Intro__UpdateFunc();
	void TurnTop__FinishedFunc();
	void TurnTop__UpdateFunc();
	void ShockTowerSetup(float ShockTowerReFireDelay, float DamageRadius, float Duration, int MaxInitialTargets, int MaxChainTargets);
	void GameplayCue_Abilities_Activation_Outlander_ShockTower_Fire(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void Pass_First_Targets_Array(TArray<struct FVector> HitActorLocation);
	void Pass_Second_Targets_Array(TArray<struct FVector> TargetLocation, const struct FVector& SourceLocation);
	void Pass_Third_Targets_Array(TArray<struct FVector> TargetLocation, const struct FVector& SourceLocation);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_BGA_ShockTower(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
