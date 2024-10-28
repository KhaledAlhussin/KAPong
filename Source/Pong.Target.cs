using UnrealBuildTool;
using System.Collections.Generic;

public class PongTarget : TargetRules
{
	public PongTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "Pong" } );
	}
}
