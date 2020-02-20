using UnrealBuildTool;

public class ProjectExodusTarget : TargetRules
{
	public ProjectExodusTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("ProjectExodus");
	}
}
