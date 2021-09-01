class CfgPatches
{
	class 37RMSBaseMod
	{
		name = "37RMS Base Mod";
		author = "37RMS";
		url = "https://37rms.cz/";
		requiredVersion = 1.0;
	
		requiredAddons[] = {
			"A3_Characters_F",
			"A3_Functions_F",
			"A3_Modules_F",
			"A3_Characters_F_EPB",
			"A3_Structures_F_Mil",
			"cba_xeh",
			"ace_common",
		};
		units[] = {
			"Flag_37RMS"
		};
		weapons[] = {
			"RMS37_Beret", "RMS37_Beret_Leader", "RMS37_Beret_Granko", "RMS37_Beret_APF", "RMS37_Beret_CAF", "RMS37_Beret_Clawhammer", "RMS37_Beret_RACS", "RMS37_Beret_SLA"
		};
	};
};