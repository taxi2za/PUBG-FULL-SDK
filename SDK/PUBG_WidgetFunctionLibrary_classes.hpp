#pragma once

// PUBG FULL SDK - Generated By Respecter (5.3.4.10 [04/03/2019]) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_WidgetFunctionLibrary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WidgetFunctionLibrary.WidgetFunctionLibrary_C
// 0x0000 (0x0030 - 0x0030)
class UWidgetFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WidgetFunctionLibrary.WidgetFunctionLibrary_C");
		return ptr;
	}


	void STATIC_GetOwningShooterCharacter(class UUserWidget** UserWidget, class UObject** __WorldContext, class ATslCharacter** ShooterCharacter);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
