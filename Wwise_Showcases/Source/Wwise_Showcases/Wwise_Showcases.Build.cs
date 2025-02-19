// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Wwise_Showcases : ModuleRules
{
	public Wwise_Showcases(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
