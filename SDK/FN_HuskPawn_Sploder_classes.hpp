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

// BlueprintGeneratedClass HuskPawn_Sploder.HuskPawn_Sploder_C
// 0x0050 (0x1F28 - 0x1ED8)
class AHuskPawn_Sploder_C : public AHuskPawn_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1ED8(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	unsigned char                                      TankDropped : 1;                                          // 0x1EE0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      HoldingTank : 1;                                          // 0x1EE1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      MeleeDrop : 1;                                            // 0x1EE2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FActiveGameplayEffectHandle                 CarryingTankGEHandle;                                     // 0x1EE4(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              TankDroppedTime;                                          // 0x1EEC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AB_BGA_SploderPropaneTank_C*                 SploderPropaneTank;                                       // 0x1EF0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       TC_MeleeDamage;                                           // 0x1EF8(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTag                                TC_GameplayEffectInstantDeath;                            // 0x1F18(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class APawn*                                       DamageInstigator;                                         // 0x1F20(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HuskPawn_Sploder.HuskPawn_Sploder_C");
		return ptr;
	}


	void OnRep_SploderPropaneTank();
	void OnRep_HoldingTank();
	void OnRep_PropaneTank();
	void OnRep_TankDropped();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void ObjectRetrieved();
	void SploderThrowsTank();
	void PlayAdditiveHitReacts(struct FVector* HitDirection);
	void OnOutOfControlResistanceServer(float* ImpactDamageDone, struct FGameplayTagContainer* SourceTags, struct FGameplayEffectContextHandle* EffectContext, class AController** EffectInstigator, class AActor** EffectCauser);
	void ExecuteUbergraph_HuskPawn_Sploder(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
