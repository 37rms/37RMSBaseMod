class CfgFunctions
{
	class RMS
	{
		class InitFunctions
		{
			file = "rms37pack\functions";
			class initUnit{};
			class initPlayer{};
			class initMissionEvents{};
		}
		class HelperFunctions
		{
			file = "rms37pack\functions";
			class addArsenal{};
			class friendlyFire{};
			class checkKeybinds{};
			class setStamina{};
		}
		class MedicalFunctions
		{
			file = "rms37pack\functions";
			class handleMedicalAction{};
			class medical{};
			class playSoundOnUnconscious{};
		}
		class startup{
			file = "rms37pack\functions";
			class initMod{
				postInit = 1;
			};
			class initServer{
				postInit = 1;
			};
		}
	}
};