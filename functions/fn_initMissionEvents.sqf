diag_log format ["#OP_START#%1#", briefingName];

addMissionEventHandler ["MPEnded", {
	{
		diag_log format ["#PLR_ATTND#%1#", getPlayerUID _x];
		if(count units group _x > 1 && leader group _x == _x) then{
			diag_log format ["#PLR_SL#%1#", getPlayerUID _x];
		};
	} forEach allPlayers;
	diag_log format ["#OP_END#%1#", briefingName];
}];

addMissionEventHandler ["PlayerConnected",
{
	params ["_id", "_uid", "_name", "_jip", "_owner", "_idstr"];
	if(_name != "__SERVER__") then {
		diag_log format ["#PLR_CON#%1#", _uid];
	};
}];

addMissionEventHandler ["HandleDisconnect", {
	params ["_unit", "_id", "_uid", "_name"];
	if(count units group _x > 1 && leader group _unit == _unit) then {
		diag_log format ["#PLR_SL#%1#", _uid];
	};
	diag_log format ["#PLR_DC#%1#", _uid];
	true;
}];