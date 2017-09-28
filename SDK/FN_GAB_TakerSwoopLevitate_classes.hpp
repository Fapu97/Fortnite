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

// BlueprintGeneratedClass GAB_TakerSwoopLevitate.GAB_TakerSwoopLevitate_C
// 0x0050 (0x0A90 - 0x0A40)
class UGAB_TakerSwoopLevitate_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A40(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FVector                                     Pawn_Destination;                                         // 0x0A48(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     Pawn_Location;                                            // 0x0A54(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      Debug : 1;                                                // 0x0A60(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ATakerPawn_C*                                Taker;                                                    // 0x0A68(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FarAngleForTakerToLevitateTo;                             // 0x0A70(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FarDistance;                                              // 0x0A74(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CloseAngleForTakerToLevitateTo;                           // 0x0A78(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CloseDistance;                                            // 0x0A7C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       TakerCollisionProfileWhenSwooping;                        // 0x0A80(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UFortAbilityTask_MoveAI*                     LevitateMove;                                             // 0x0A88(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_TakerSwoopLevitate.GAB_TakerSwoopLevitate_C");
		return ptr;
	}


	void OnCancelled_9B43404542CB2EB77AF6B3817A7F6A61();
	void OnInterrupted_9B43404542CB2EB77AF6B3817A7F6A61();
	void OnBlendOut_9B43404542CB2EB77AF6B3817A7F6A61();
	void OnCompleted_9B43404542CB2EB77AF6B3817A7F6A61();
	void OnCancelled_9D1D99C84551B2F9011E5E8CB464E2D5();
	void OnInterrupted_9D1D99C84551B2F9011E5E8CB464E2D5();
	void OnComplete_9D1D99C84551B2F9011E5E8CB464E2D5();
	void EventReceived_9815869441DE62BDFB6A3794B3593B2E(const struct FGameplayEventData& Payload);
	void K2_ActivateAbility();
	void K2_OnEndAbility();
	void ExecuteUbergraph_GAB_TakerSwoopLevitate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
