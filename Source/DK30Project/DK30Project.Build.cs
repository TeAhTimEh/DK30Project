// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DK30Project : ModuleRules
{
	public DK30Project(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
