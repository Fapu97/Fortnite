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

// Function IMeleeWhileMoving.IMeleeWhileMoving_C.GetCollisionPredictionComponent
struct UIMeleeWhileMoving_C_GetCollisionPredictionComponent_Params
{
	class UShapeComponent*                             Collision_Prediction_Shape_Component;                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
