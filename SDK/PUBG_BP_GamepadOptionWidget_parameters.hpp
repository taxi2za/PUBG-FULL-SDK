#pragma once

// PUBG FULL SDK - Generated By Respecter (5.3.4.10 [04/03/2019]) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_GamepadOptionWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.UpdateCrosshairPreviewColor
struct UBP_GamepadOptionWidget_C_UpdateCrosshairPreviewColor_Params
{
	struct FLinearColor                                InColor;                                                  // (Parm, IsPlainOldData)
};

// Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.IsChanged
struct UBP_GamepadOptionWidget_C_IsChanged_Params
{
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.ApplyOptions
struct UBP_GamepadOptionWidget_C_ApplyOptions_Params
{
	bool                                               ApplyResult;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.ExitOption
struct UBP_GamepadOptionWidget_C_ExitOption_Params
{
};

// Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.OnFocusReceived
struct UBP_GamepadOptionWidget_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FFocusEvent                                 InFocusEvent;                                             // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.Construct
struct UBP_GamepadOptionWidget_C_Construct_Params
{
};

// Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.BndEvt__TabSelector_K2Node_ComponentBoundEvent_19_OnTabRotated__DelegateSignature
struct UBP_GamepadOptionWidget_C_BndEvt__TabSelector_K2Node_ComponentBoundEvent_19_OnTabRotated__DelegateSignature_Params
{
	int                                                SelectedIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.CustomEvent_1
struct UBP_GamepadOptionWidget_C_CustomEvent_1_Params
{
};

// Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.CustomEvent_2
struct UBP_GamepadOptionWidget_C_CustomEvent_2_Params
{
};

// Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.CustomEvent_3
struct UBP_GamepadOptionWidget_C_CustomEvent_3_Params
{
};

// Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.CustomEvent_4
struct UBP_GamepadOptionWidget_C_CustomEvent_4_Params
{
};

// Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.CustomEvent_5
struct UBP_GamepadOptionWidget_C_CustomEvent_5_Params
{
};

// Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.BndEvt__BP_GamepadOptionGraphic_K2Node_ComponentBoundEvent_2_OnOptionContentButtonFocused__DelegateSignature
struct UBP_GamepadOptionWidget_C_BndEvt__BP_GamepadOptionGraphic_K2Node_ComponentBoundEvent_2_OnOptionContentButtonFocused__DelegateSignature_Params
{
	class UTslBaseOptionButtonWidget**                 Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.BndEvt__BP_GamepadOptionSound_K2Node_ComponentBoundEvent_4_OnOptionContentButtonFocused__DelegateSignature
struct UBP_GamepadOptionWidget_C_BndEvt__BP_GamepadOptionSound_K2Node_ComponentBoundEvent_4_OnOptionContentButtonFocused__DelegateSignature_Params
{
	class UTslBaseOptionButtonWidget**                 Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.BndEvt__BP_GamepadOptionControl_K2Node_ComponentBoundEvent_8_OnOptionContentButtonFocused__DelegateSignature
struct UBP_GamepadOptionWidget_C_BndEvt__BP_GamepadOptionControl_K2Node_ComponentBoundEvent_8_OnOptionContentButtonFocused__DelegateSignature_Params
{
	class UTslBaseOptionButtonWidget**                 Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.BndEvt__BP_GamepadOptionGameplay_K2Node_ComponentBoundEvent_12_OnOptionContentButtonFocused__DelegateSignature
struct UBP_GamepadOptionWidget_C_BndEvt__BP_GamepadOptionGameplay_K2Node_ComponentBoundEvent_12_OnOptionContentButtonFocused__DelegateSignature_Params
{
	class UTslBaseOptionButtonWidget**                 Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.Tick
struct UBP_GamepadOptionWidget_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.Custom Event_1
struct UBP_GamepadOptionWidget_C_Custom_Event_1_Params
{
};

// Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.ExecuteUbergraph_BP_GamepadOptionWidget
struct UBP_GamepadOptionWidget_C_ExecuteUbergraph_BP_GamepadOptionWidget_Params
{
	int*                                               EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
