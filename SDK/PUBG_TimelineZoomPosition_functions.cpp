// PUBG FULL SDK - Generated By Respecter (5.3.4.10 [04/03/2019]) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_TimelineZoomPosition_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TimelineZoomPosition.TimelineZoomPosition_C.SetCenterPos
// ()
// Parameters:
// float*                         Pos                            (Parm, ZeroConstructor, IsPlainOldData)

void UTimelineZoomPosition_C::SetCenterPos(float* Pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimelineZoomPosition.TimelineZoomPosition_C.SetCenterPos");

	UTimelineZoomPosition_C_SetCenterPos_Params params;
	params.Pos = Pos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
