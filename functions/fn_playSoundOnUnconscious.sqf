["ace_unconscious", {
    params ["_unit", "_isUnconscious"];

	private _soundArray = [
		"RMS_bodyslam1",
		"RMS_bodyslam2"
	];

    if ((_isUnconscious) && isPlayer _unit) then { 
		[_unit, selectRandom _soundArray] remoteExec ["say3D"];
    };
    
}] call CBA_fnc_addEventHandler;