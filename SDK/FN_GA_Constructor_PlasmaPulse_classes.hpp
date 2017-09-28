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

// BlueprintGeneratedClass GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C
// 0x018E (0x0C98 - 0x0B0A)
class UGA_Constructor_PlasmaPulse_C : public UGAT_ConstructorActiveAbility_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B10(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	float                                              Pulse_Duration;                                           // 0x0B18(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      Prj_PlasmaPulse;                                          // 0x0B20(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PlasmaSpeed;                                              // 0x0B28(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PlasmaGravity;                                            // 0x0B2C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTag                                EventActivation;                                          // 0x0B30(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTag                                EventComplete;                                            // 0x0B38(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class USoundBase*                                  MiniPulseCue;                                             // 0x0B40(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      Prj_MiniPulse;                                            // 0x0B48(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MiniPulseSpeed;                                           // 0x0B50(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MiniPulseGravity;                                         // 0x0B54(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTag                                EC_PlasmaPulse;                                           // 0x0B58(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTag                                EC_MiniPulse;                                             // 0x0B60(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UAnimMontage*                                M_ThrowDown;                                              // 0x0B68(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DefaultSpawnTime;                                         // 0x0B70(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SpeedMultiplier;                                          // 0x0B74(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DefaultMinSpawn;                                          // 0x0B78(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       TC_IFFCoding;                                             // 0x0B80(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	unsigned char                                      IFFCoding : 1;                                            // 0x0BA0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       TC_PlasmaOverdrive;                                       // 0x0BA8(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              PlasmaOverdriveSpeedMult;                                 // 0x0BC8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       TC_BiometricResonance;                                    // 0x0BD0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	unsigned char                                      BiometricResonance : 1;                                   // 0x0BF0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      GE_BiometricResonance;                                    // 0x0BF8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              IFFCodePercent;                                           // 0x0C00(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              IFFCodeDuration;                                          // 0x0C04(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      PlasmaOverdrive : 1;                                      // 0x0C08(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       TC_OneHotMinute;                                          // 0x0C10(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	unsigned char                                      OneHotMinute : 1;                                         // 0x0C30(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       TC_PowerPulse;                                            // 0x0C38(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	unsigned char                                      PowerPulse : 1;                                           // 0x0C58(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       TC_BeatDown;                                              // 0x0C60(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	unsigned char                                      BeatDown : 1;                                             // 0x0C80(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FRotator                                    SpawnDirection;                                           // 0x0C84(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTimerHandle                                PulseProjectileTimerHandle;                               // 0x0C90(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C");
		return ptr;
	}


	void GetPlasmaPulseTargetLocation(class UObject* Object, struct FVector* Loc);
	void GetPlasmaPulseSocketLocation(class UObject* Object, struct FVector* Loc);
	void SpawnMiniPulses(class AActor* ParentPulse, const struct FVector& HitLocation, const struct FFortGameplayEffectContainerSpec& EffectContainerSpec);
	void SetupAbility(class UAbilitySystemComponent* AbilitySystem);
	void Destroyed_76104D9B4F6C3F61303653918697EC35(const struct FProjectileEventData& ProjectileData);
	void Exploded_76104D9B4F6C3F61303653918697EC35(const struct FProjectileEventData& ProjectileData);
	void Stopped_76104D9B4F6C3F61303653918697EC35(const struct FProjectileEventData& ProjectileData);
	void Bounced_76104D9B4F6C3F61303653918697EC35(const struct FProjectileEventData& ProjectileData);
	void Touched_76104D9B4F6C3F61303653918697EC35(const struct FProjectileEventData& ProjectileData);
	void Created_76104D9B4F6C3F61303653918697EC35(const struct FProjectileEventData& ProjectileData);
	void Completed_6AC3F9A4491B91FDE0457DAC0E8B468B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_6AC3F9A4491B91FDE0457DAC0E8B468B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_6AC3F9A4491B91FDE0457DAC0E8B468B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void SpawnPulseProjectiles();
	void BindSpawnPulseProjectiles();
	void UnbindSpawnPulseProjectiles();
	void K2_OnEndAbility();
	void ExecuteUbergraph_GA_Constructor_PlasmaPulse(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
