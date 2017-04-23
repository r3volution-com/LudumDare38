// Fill out your copyright notice in the Description page of Project Settings.

#include "LudumDare38.h"
#include "BPFileIO.h"
 
 bool UBPFileIO::FileSaveString(FString SaveTextB, FString FileNameB)
 {
     return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::GameDir() + FileNameB));
 }
 
 bool UBPFileIO::FileLoadString(FString FileNameA, FString& SaveTextA)
 {
     return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::GameDir() + FileNameA));
 }