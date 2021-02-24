waitUntil{!isNull findDisplay 46};

private _throwKeybind = actionKeys "throw";
if(count _throwKeybind > 0 && 34 in _throwKeybind) then {
	private _index = ["ACE3 Weapons", "ace_advanced_throwing_prepare"] call cba_fnc_getKeybind;
	private _aceKeybind = _index select 5;

	private _dikKey = _aceKeybind select 0;
	private _additionalKeys = _aceKeybind select 1;
	private _isShift = _additionalKeys select 0;
	private _isCtrl = _additionalKeys select 1;
	private _isAlt = _additionalKeys select 2;

	private _aceKeyName = keyName _dikKey;
	if(_isShift) then {
		_aceKeyName = '"SHIFT" + '+_aceKeyName;
	};
	if(_isCtrl) then {
		_aceKeyName = '"CTRL" + '+_aceKeyName;
	};
	if(_isAlt) then {
		_aceKeyName = '"ALT" + '+_aceKeyName;
	};

	["Máš nastavenou klávesu G na výchozí ArmA 3 házení granátů -> odeber si toto nastavení a používej " + _aceKeyName, "Klávesa na házení granátů", "Rozumím"] spawn BIS_fnc_guiMessage;
};