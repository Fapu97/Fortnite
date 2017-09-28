#pragma once

// Fortnite (Alpha) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct StopLight_Struct.StopLight_Struct
// 0x0029
struct FStopLight_Struct
{
	class ULightComponent*                             Red_6_3729E3834F25C8A951860C97D0945944;                   // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ULightComponent*                             Yellow_7_6C58D2A34918F0E215C9F682FF3A57B6;                // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ULightComponent*                             Green_8_2BE045D44F0054B0640F1F82B34BA858;                 // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     DirectionalVector_11_A423D2724C4D4270A2271A856C3CF768;    // 0x0018(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              TimeOffset_14_74C4DDF5400E11B2170DA58470B261F0;           // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      PairingOffset_20_57900148418F6DBF13AE35902B285F27 : 1;    // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
