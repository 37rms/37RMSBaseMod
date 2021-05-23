addMissionEventHandler ["MPEnded", {
	{
		diag_log format ["#PLR_ATTND#%1#", getPlayerUID _x];
		if(leader group _x == leader _x) then{
			diag_log format ["#PLR_SL#%1#", getPlayerUID _x];
		};
	} forEach allPlayers;
}];

addMissionEventHandler ["PlayerConnected",
{
	params ["_id", "_uid", "_name", "_jip", "_owner", "_idstr"];
	diag_log format ["#PLR_CON#%1#", _uid];
}];

addMissionEventHandler ["HandleDisconnect", {
	params ["_unit", "_id", "_uid", "_name"];
	diag_log format ["#PLR_DC#%1#", _uid];
	true;
}];