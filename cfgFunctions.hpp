class CfgFunctions
{
	class RMS
	{
		class InitFunctions
		{
			file = "37RMSBaseMod\functions";
			class initUnit{};
			class initPlayer{};
		}
		class HelperFunctions
		{
			file = "37RMSBaseMod\functions";
			class addArsenal{};
			class friendlyFire{};
			class checkKeybinds{};
		}
		class MedicalFunctions
		{
			file = "37RMSBaseMod\functions";
			class handleMedicalAction{};
			class medical{};
		}
		class startup{
			file = "37RMSBaseMod\functions";
			class initMod{
				postInit = 1;
			};
		}
	}
};