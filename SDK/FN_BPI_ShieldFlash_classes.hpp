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

// BlueprintGeneratedClass BPI_ShieldFlash.BPI_ShieldFlash_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_ShieldFlash_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_ShieldFlash.BPI_ShieldFlash_C");
		return ptr;
	}


	void FlashShield();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
