params["_caller", "_target", "_selectionName", "_className"];

if (isPlayer _target && alive _target && getPlayerUID _caller != getPlayerUID _target && _className in SuspiciousMedicalItems) then {
	private _medicalName = "";
	if (_className == "ApplyTourniquet") then {
		_medicalName = "Tourniquet";
	} else {
		_medicalName = _className;
	};
	private _outputText = (name _caller) + " ti dal " + _medicalName;
	private _remotePlayerId = (call BIS_fnc_listPlayers) select {getPlayerUID _x isEqualTo getPlayerUID _target};
	[_outputText] remoteExec ["systemChat", _remotePlayerId];
};