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

// AnimBlueprintGeneratedClass BP_ThrowingStars.BP_ThrowingStars_C
// 0x0120 (0x0478 - 0x0358)
class UBP_ThrowingStars_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F158BC6B4673845A7715E691872A0234;      // 0x0360(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D5FB2793446711F8DA21128B1AA7F175;      // 0x03A8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7F53C6CE458F33D9335E89BFB4787FB6;// 0x0408(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_ThrowingStars.BP_ThrowingStars_C");
		return ptr;
	}


	void ExecuteUbergraph_BP_ThrowingStars(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
