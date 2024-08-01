// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Shooter_CPP : ModuleRules
{
	public Shooter_CPP(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "GameplayTasks", "UMG" });
	}
}
