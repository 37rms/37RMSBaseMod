class CfgVehicles
{
	class FlagCarrier;
	class Flag_37RMS: FlagCarrier
	{
		author="Tempestus";
		class SimpleObject
		{
			animate[]=
			{
				
				{
					"animationName1",
					1
				},
				
				{
					"animationName2",
					2
				}
			};
			hide[]=
			{
				"animationSelection1",
				"animationSelection2"
			};
			verticalOffset=0;
		};
		dlc = "rms37pack";
		_generalMacro="Flag_37RMS";
		scope=2;
		scopeCurator=2;
		displayName="Flag (37.RMS)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat"
		};
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\rms37pack\icon\37rms_flag.paa'";
		};
	};
};