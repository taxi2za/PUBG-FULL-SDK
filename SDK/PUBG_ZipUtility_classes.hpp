#pragma once

// PUBG FULL SDK - Generated By Respecter (5.3.4.10 [04/03/2019]) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ZipUtility_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ZipUtility.ZipUtilityInterface
// 0x0000 (0x0030 - 0x0030)
class UZipUtilityInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ZipUtility.ZipUtilityInterface");
		return ptr;
	}


	void OnStartProcess(const class FString& archive, int bytes);
	void OnProgress(const class FString& archive, float Percentage, int bytes);
	void OnFileFound(const class FString& archive, const class FString& file, int Size);
	void OnFileDone(const class FString& archive, const class FString& file);
	void OnDone(const class FString& archive, TEnumAsByte<EZipUtilityCompletionState> CompletionState);
};


// Class ZipUtility.ZipFileFunctionInternalCallback
// 0x0048 (0x0078 - 0x0030)
class UZipFileFunctionInternalCallback : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	TEnumAsByte<EZipUtilityCompressionFormat>          CompressionFormat;                                        // 0x0038(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	class FString                                      file;                                                     // 0x0040(0x0010) (ZeroConstructor, Transient)
	class FString                                      DestinationFolder;                                        // 0x0050(0x0010) (ZeroConstructor, Transient)
	int                                                FileIndex;                                                // 0x0060(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	class UObject*                                     Callback;                                                 // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bSingleFile;                                              // 0x0070(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bFileFound;                                               // 0x0071(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bUnzipto;                                                 // 0x0072(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x0073(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ZipUtility.ZipFileFunctionInternalCallback");
		return ptr;
	}

};


// Class ZipUtility.ZipFileFunctionLibrary
// 0x0000 (0x0030 - 0x0030)
class UZipFileFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ZipUtility.ZipFileFunctionLibrary");
		return ptr;
	}


	bool STATIC_Zip(class FString* FileOrFolderPath, class UObject** ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat>* Format, TEnumAsByte<EZipUtilityCompressionLevel>* Level);
	bool STATIC_UnzipTo(class FString* ArchivePath, class FString* destinationPath, class UObject** ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat>* Format);
	bool STATIC_UnzipFilesTo(TArray<int>* fileIndices, class FString* ArchivePath, class FString* destinationPath, class UObject** ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat>* Format);
	bool STATIC_UnzipFiles(TArray<int>* fileIndices, class FString* ArchivePath, class UObject** ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat>* Format);
	bool STATIC_UnzipFileNamedTo(class FString* ArchivePath, class FString* Name, class FString* destinationPath, class UObject** ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat>* Format);
	bool STATIC_UnzipFileNamed(class FString* ArchivePath, class FString* Name, class UObject** ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat>* Format);
	bool STATIC_Unzip(class FString* ArchivePath, class UObject** ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat>* Format);
	bool STATIC_ListFilesInArchive(class FString* ArchivePath, class UObject** ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat>* Format);
};


// Class ZipUtility.ZULambdaDelegate
// 0x00B0 (0x00E0 - 0x0030)
class UZULambdaDelegate : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0030(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ZipUtility.ZULambdaDelegate");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
