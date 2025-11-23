// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AITutorial : ModuleRules
{
	public AITutorial(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"AITutorial",
			"AITutorial/Variant_Platforming",
			"AITutorial/Variant_Platforming/Animation",
			"AITutorial/Variant_Combat",
			"AITutorial/Variant_Combat/AI",
			"AITutorial/Variant_Combat/Animation",
			"AITutorial/Variant_Combat/Gameplay",
			"AITutorial/Variant_Combat/Interfaces",
			"AITutorial/Variant_Combat/UI",
			"AITutorial/Variant_SideScrolling",
			"AITutorial/Variant_SideScrolling/AI",
			"AITutorial/Variant_SideScrolling/Gameplay",
			"AITutorial/Variant_SideScrolling/Interfaces",
			"AITutorial/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
