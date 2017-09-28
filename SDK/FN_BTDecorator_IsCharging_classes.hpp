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

// BlueprintGeneratedClass BTDecorator_IsCharging.BTDecorator_IsCharging_C
// 0x0029 (0x00C9 - 0x00A0)
class UBTDecorator_IsCharging_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      OtherActorKey;                                            // 0x00A0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	unsigned char                                      SucceedOnNOTCharging : 1;                                 // 0x00C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTDecorator_IsCharging.BTDecorator_IsCharging_C");
		return ptr;
	}


	bool PerformConditionCheckAI(class AAIController** OwnerController, class APawn** ControlledPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
