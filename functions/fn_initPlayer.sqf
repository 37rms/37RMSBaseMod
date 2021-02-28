params["_unit"];
if(!hasInterface) exitWith{};

waitUntil{alive _unit};

removeStamina = {
	params["_unit"];
	_unit setCustomAimCoef 0.1;
	_unit enableFatigue false;
	_unit enableStamina false;
};

systemChat str "initializing player";
[_unit] call removeStamina;

systemChat str "adding killed event";
_unit addEventHandler["Killed", {
	params ["_unit", "_killer", "_instigator", "_useEffects"];
	systemChat str "player died";
	[_unit, [missionNamespace, "inventory_var"]] call BIS_fnc_saveInventory;
}];

_unit addEventHandler["Respawn", {
	params["_unit", "_corpse"];
	systemChat str "player respawned";
	[_unit] call removeStamina;
	[_unit, [missionNamespace, "inventory_var"]] call BIS_fnc_loadInventory;
}];

[_unit] call RMS_fnc_friendlyFire;
[_unit] call RMS_fnc_medical;
[] remoteExec ["RMS_fnc_checkKeybinds", _unit];