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

// BlueprintGeneratedClass ActivateAbilityByTag.ActivateAbilityByTag_C
// 0x0050 (0x00E8 - 0x0098)
class UActivateAbilityByTag_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FGameplayTagContainer                       TC_AbilityToActivate;                                     // 0x00A0(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      PawnTargetsOnly : 1;                                      // 0x00C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       ProhibitedTargetTags;                                     // 0x00C8(0x0020) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ActivateAbilityByTag.ActivateAbilityByTag_C");
		return ptr;
	}


	void ReceiveActivation(class AActor** OwnerActor);
	void ReceiveDeactivation(class AActor** OwnerActor);
	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ExecuteUbergraph_ActivateAbilityByTag(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
