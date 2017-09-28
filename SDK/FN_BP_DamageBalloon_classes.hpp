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

// BlueprintGeneratedClass BP_DamageBalloon.BP_DamageBalloon_C
// 0x001A (0x0FCA - 0x0FB0)
class ABP_DamageBalloon_C : public ABuildingSMActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0FB0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UParticleSystemComponent*                    ExplosionParticle;                                        // 0x0FB8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortHealthBarComponent*                     FortHealthBar;                                            // 0x0FC0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      DestroyBalloon : 1;                                       // 0x0FC8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      DisableBalloonCollisionOnSeperation : 1;                  // 0x0FC9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DamageBalloon.BP_DamageBalloon_C");
		return ptr;
	}


	void OnRep_DisableBalloonCollisionOnSeperation();
	void OnRep_DestroyBalloon();
	bool ShouldDie(float* Damage, class AController** EventInstigator, class AActor** DamageCauser);
	void UserConstructionScript();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29E3F7E884F();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29E31D8CAB5();
	void OnDamageServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void HandleMissionEvent_BalloonSeperation(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void ExecuteUbergraph_BP_DamageBalloon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
