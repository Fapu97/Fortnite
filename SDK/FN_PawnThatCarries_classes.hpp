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

// BlueprintGeneratedClass PawnThatCarries.PawnThatCarries_C
// 0x0000 (0x0028 - 0x0028)
class UPawnThatCarries_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PawnThatCarries.PawnThatCarries_C");
		return ptr;
	}


	void ObjectRetrieved();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
