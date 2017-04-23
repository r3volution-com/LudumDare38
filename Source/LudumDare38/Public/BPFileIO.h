// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPFileIO.generated.h"

/**
 * 
 */
UCLASS()
class LUDUMDARE38_API UBPFileIO : public UBlueprintFunctionLibrary {
	 GENERATED_BODY()public:
     
         UFUNCTION(BlueprintCallable, Category = "save")
         static bool FileSaveString(FString SaveTextB, FString FileNameB);
 
		UFUNCTION(BlueprintPure, Category = "save")
         static bool FileLoadString(FString FileNameA, FString& SaveTextA);
	
};
