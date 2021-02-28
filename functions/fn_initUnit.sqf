params ["_unit"];

waitUntil{alive _unit;};

if(isPlayer _unit) then{
	systemChat str "is player";
	[] remoteExec ["RMS_fnc_initPlayer", _unit];
	[] remoteExec ["RMS_fnc_registerPlayerKilled", _unit];
	[] remoteExec ["RMS_fnc_registerPlayerRespawn", _unit];
	[] remoteExec ["RMS_fnc_friendlyFire", _unit];
	[] remoteExec ["RMS_fnc_checkKeybinds", _unit];
	[] remoteExec ["RMS_fnc_medical", _unit];
}
else{
	systemChat str "is ai";
	_unit allowFleeing 0;
	_unit setskill ["courage",1];
	_unit setskill ["aimingAccuracy",0.05];
	_unit setskill ["commanding",1];
	_unit setskill ["aimingShake",0.95];
	_unit setskill ["aimingSpeed",0.45];
	_unit setskill ["spotDistance",0.4];
	_unit setskill ["spotTime",0.85];
	_unit setskill ["endurance",1];
	_unit setskill ["general",0.25];
	_unit setskill ["reloadSpeed",0.5];
};