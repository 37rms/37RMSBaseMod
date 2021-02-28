if(!hasInterface) exitWith{};

systemChat str "adding killed event";
player addEventHandler["Killed", {
	params ["_unit", "_killer", "_instigator", "_useEffects"];
	systemChat str "player died";
	[player, [missionNamespace, "inventory_var"]] call BIS_fnc_saveInventory;
}];