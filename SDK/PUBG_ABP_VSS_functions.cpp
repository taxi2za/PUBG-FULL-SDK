// PUBG FULL SDK - Generated By Respecter (5.3.4.10 [04/03/2019]) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_VSS_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_VSS.ABP_VSS_C.HandleFireSelect
// ()

void UABP_VSS_C::HandleFireSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_VSS.ABP_VSS_C.HandleFireSelect");

	UABP_VSS_C_HandleFireSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_VSS.ABP_VSS_C.BlueprintInitializeAnimation
// (Event)

void UABP_VSS_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_VSS.ABP_VSS_C.BlueprintInitializeAnimation");

	UABP_VSS_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_VSS.ABP_VSS_C.Reload2_Event_1
// ()

void UABP_VSS_C::Reload2_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_VSS.ABP_VSS_C.Reload2_Event_1");

	UABP_VSS_C_Reload2_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_VSS.ABP_VSS_C.FireSelect_Event_1
// ()

void UABP_VSS_C::FireSelect_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_VSS.ABP_VSS_C.FireSelect_Event_1");

	UABP_VSS_C_FireSelect_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_VSS.ABP_VSS_C.WeaponFire_Event_1
// ()

void UABP_VSS_C::WeaponFire_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_VSS.ABP_VSS_C.WeaponFire_Event_1");

	UABP_VSS_C_WeaponFire_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_VSS.ABP_VSS_C.CancelReload_Event_1
// ()

void UABP_VSS_C::CancelReload_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_VSS.ABP_VSS_C.CancelReload_Event_1");

	UABP_VSS_C_CancelReload_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_VSS.ABP_VSS_C.ExecuteUbergraph_ABP_VSS
// ()
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UABP_VSS_C::ExecuteUbergraph_ABP_VSS(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_VSS.ABP_VSS_C.ExecuteUbergraph_ABP_VSS");

	UABP_VSS_C_ExecuteUbergraph_ABP_VSS_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
