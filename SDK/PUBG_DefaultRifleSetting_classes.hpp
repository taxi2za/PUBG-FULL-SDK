#pragma once

// PUBG FULL SDK - Generated By Respecter (5.3.4.10 [04/03/2019]) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_DefaultRifleSetting_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DefaultRifleSetting.DefaultRifleSetting_C
// 0x0090 (0x0E90 - 0x0E00)
class ADefaultRifleSetting_C : public ATslWeapon_Trajectory
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E00(0x0008) (Transient, DuplicateTransient)
	bool                                               bDebugMuzzleVector;                                       // 0x0E08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugRecoil;                                             // 0x0E09(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0E0A(0x0006) MISSED OFFSET
	struct FDebugFloatHistory                          History_RecoilTargetY;                                    // 0x0E10(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDebugFloatHistory                          History_RecoilTargetX;                                    // 0x0E30(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDebugFloatHistory                          History_RecoveryTarget;                                   // 0x0E50(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDebugFloatHistory                          History_RecoilValue;                                      // 0x0E70(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DefaultRifleSetting.DefaultRifleSetting_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_DefaultRifleSetting(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
