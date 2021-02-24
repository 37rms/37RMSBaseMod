waitUntil{!isNull findDisplay 46};

private _throwKeybind = actionKeys "throw";
if(count _throwKeybind > 0 && 34 in _throwKeybind) then {
	["Máš nastavenou klávesu G na výchozí ArmA 3 házení granátů -> odeber si toto nastavení a používej SHIFT + G", "Klávesa na házení granátů", "Rozumím"] spawn BIS_fnc_guiMessage;
};