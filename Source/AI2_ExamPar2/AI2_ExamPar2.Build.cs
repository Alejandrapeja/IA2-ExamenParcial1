// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AI2_ExamPar2 : ModuleRules
{
	public AI2_ExamPar2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
