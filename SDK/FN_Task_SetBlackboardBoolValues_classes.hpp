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

// BlueprintGeneratedClass Task_SetBlackboardBoolValues.Task_SetBlackboardBoolValues_C
// 0x00F9 (0x0199 - 0x00A0)
class UTask_SetBlackboardBoolValues_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	unsigned char                                      Update_1_ : 1;                                            // 0x00A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBlackboardKeySelector                      BoolKey1;                                                 // 0x00B0(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      BoolKey1Value : 1;                                        // 0x00D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Update_2_ : 1;                                            // 0x00D9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBlackboardKeySelector                      BoolKey2;                                                 // 0x00E0(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      BoolKey2Value : 1;                                        // 0x0108(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Update_3_ : 1;                                            // 0x0109(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBlackboardKeySelector                      BoolKey3;                                                 // 0x0110(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      BoolKey3Value : 1;                                        // 0x0138(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Update_4_ : 1;                                            // 0x0139(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBlackboardKeySelector                      BoolKey4;                                                 // 0x0140(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      BoolKey4Value : 1;                                        // 0x0168(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Update_5_ : 1;                                            // 0x0169(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBlackboardKeySelector                      BoolKey5;                                                 // 0x0170(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      BoolKey5Value : 1;                                        // 0x0198(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Task_SetBlackboardBoolValues.Task_SetBlackboardBoolValues_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_Task_SetBlackboardBoolValues(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
