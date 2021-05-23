if (hasInterface) then {
	if(isNil{player getVariable "RMS_unitInitiated"}) then {
		[player] call RMS_fnc_initPlayer;
		player setVariable ["RMS_unitInitiated", true];
	};
};
if (isServer) then {
	call RMS_fnc_initServer;
};