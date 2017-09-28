#pragma once

// Fortnite (Alpha) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LobbyHeroSquadSupportEntry.LobbyHeroSquadSupportEntry_C.Refresh
struct ULobbyHeroSquadSupportEntry_C_Refresh_Params
{
};

// Function LobbyHeroSquadSupportEntry.LobbyHeroSquadSupportEntry_C.GetBonusPerk
struct ULobbyHeroSquadSupportEntry_C_GetBonusPerk_Params
{
	class UFortHero*                                   Hero;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bHasBonusPerk;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortUIPerk                                 BonusPerk;                                                // (CPF_Parm, CPF_OutParm)
};

// Function LobbyHeroSquadSupportEntry.LobbyHeroSquadSupportEntry_C.Construct
struct ULobbyHeroSquadSupportEntry_C_Construct_Params
{
};

// Function LobbyHeroSquadSupportEntry.LobbyHeroSquadSupportEntry_C.ExecuteUbergraph_LobbyHeroSquadSupportEntry
struct ULobbyHeroSquadSupportEntry_C_ExecuteUbergraph_LobbyHeroSquadSupportEntry_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
