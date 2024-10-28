using UnrealBuildTool;
using System.Collections.Generic;

public class PongEditorTarget : TargetRules
{
	public PongEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "Pong" } );
	}
}
