// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BedHeadGames_Test : ModuleRules
{
	public BedHeadGames_Test(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
