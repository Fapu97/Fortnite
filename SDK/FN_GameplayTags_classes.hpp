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

// BlueprintGeneratedClass GameplayTags.GameplayTags_C
// 0x0030 (0x00D0 - 0x00A0)
class UGameplayTags_C : public UBTDecorator_BlueprintBase
{
public:
	struct FGameplayTagContainer                       TC_BTDecoratorGameplayTags;                               // 0x00A0(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      Inverse_Condition : 1;                                    // 0x00C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OwnerActor;                                               // 0x00C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GameplayTags.GameplayTags_C");
		return ptr;
	}


	bool PerformConditionCheckAI(class AAIController** OwnerController, class APawn** ControlledPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
