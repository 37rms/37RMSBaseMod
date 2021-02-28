if(!hasInterface) exitWith{};

systemChat str "adding respawn handler";
player addEventHandler["Respawn", {
	params["_unit", "_corpse"];
	systemChat str "player respawned";
	[] remoteExec ["RMS_fnc_initPlayer", player];
	[player, [missionNamespace, "inventory_var"]] call BIS_fnc_loadInventory;
}];