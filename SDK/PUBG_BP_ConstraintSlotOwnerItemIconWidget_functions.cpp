// PUBG FULL SDK - Generated By Respecter (5.3.4.10 [04/03/2019]) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_ConstraintSlotOwnerItemIconWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ConstraintSlotOwnerItemIconWidget.BP_ConstraintSlotOwnerItemIconWidget_C.UpdateIcon
// ()
// Parameters:
// class UItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UBP_ConstraintSlotOwnerItemIconWidget_C::UpdateIcon(class UItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConstraintSlotOwnerItemIconWidget.BP_ConstraintSlotOwnerItemIconWidget_C.UpdateIcon");

	UBP_ConstraintSlotOwnerItemIconWidget_C_UpdateIcon_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConstraintSlotOwnerItemIconWidget.BP_ConstraintSlotOwnerItemIconWidget_C.Construct
// (BlueprintCosmetic, Event)

void UBP_ConstraintSlotOwnerItemIconWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConstraintSlotOwnerItemIconWidget.BP_ConstraintSlotOwnerItemIconWidget_C.Construct");

	UBP_ConstraintSlotOwnerItemIconWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConstraintSlotOwnerItemIconWidget.BP_ConstraintSlotOwnerItemIconWidget_C.ExecuteUbergraph_BP_ConstraintSlotOwnerItemIconWidget
// ()
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_ConstraintSlotOwnerItemIconWidget_C::ExecuteUbergraph_BP_ConstraintSlotOwnerItemIconWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConstraintSlotOwnerItemIconWidget.BP_ConstraintSlotOwnerItemIconWidget_C.ExecuteUbergraph_BP_ConstraintSlotOwnerItemIconWidget");

	UBP_ConstraintSlotOwnerItemIconWidget_C_ExecuteUbergraph_BP_ConstraintSlotOwnerItemIconWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
