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

// AnimBlueprintGeneratedClass LlamaAnim_BP.LlamaAnim_BP_C
// 0x0140 (0x0498 - 0x0358)
class ULlamaAnim_BP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_8ADDC02643B32A1F7CC89BB11903C1F2;      // 0x0360(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C6CBF2C14D7E2661FA836083EBC21EC6;      // 0x03A8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E380EEC3438D7B982F70B1B965A9BC1B;// 0x0408(0x0070)
	unsigned char                                      readyToPop : 1;                                           // 0x0478(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class AProp_Outlander_Fragment_Llama_C*            Owning_Llama_Fragment;                                    // 0x0480(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                LlamaMontage;                                             // 0x0488(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                LlamaMontage1;                                            // 0x0490(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass LlamaAnim_BP.LlamaAnim_BP_C");
		return ptr;
	}


	void AnimNotify_LlamaDeathAnimationCompleted();
	void Play_First_Explosion_Animation();
	void TheHeadProjectileHasSpawned();
	void AnimNotify_LlamasHeadIsReadyToBurst();
	void BlueprintInitializeAnimation();
	void Play_Deploy_Animiaton();
	void AnimNotify_DeployFinished();
	void ExecuteUbergraph_LlamaAnim_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
