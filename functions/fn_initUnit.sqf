params ["_unit"];

if(isPlayer _unit) then{
	[_unit] call RMS_fnc_initPlayer;

	_unit addEventHandler["Killed", {
		params ["_unit", "_killer", "_instigator", "_useEffects"];
		[_unit, [missionNamespace, "inventory_var"]] call BIS_fnc_saveInventory;
	}];
	
	_unit addEventHandler["Respawn", {
		params["_unit", "_corpse"];
		[_unit] call RMS_fnc_initPlayer;
		[_unit, [missionNamespace, "inventory_var"]] call BIS_fnc_loadInventory;
	}];
	
	[_unit] call RMS_fnc_friendlyFire;

	[] remoteExec ["RMS_fnc_checkKeybinds", _unit];
}
else{
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