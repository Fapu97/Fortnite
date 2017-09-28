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

// BlueprintGeneratedClass GE_HuskAOE1TouchDamagePoison.GE_HuskAOE1TouchDamagePoison_C
// 0x0000 (0x0660 - 0x0660)
class UGE_HuskAOE1TouchDamagePoison_C : public UGET_DirectCreatureDamage_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GE_HuskAOE1TouchDamagePoison.GE_HuskAOE1TouchDamagePoison_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
