params ["_player"];

systemChat str "adding friendly fire";
player addEventHandler ["HandleDamage", {
    params ["_victim", "_selection", "_damage", "_attacker", "_projectile", "_hitIndex", "_instigator", "_hitPoint"];

    systemChat str "damage event fired";
    if (isNil {_victim getVariable "lastDamageTime"}) then {
        _victim setVariable ["lastDamageTime", 0];
    };
    
    private _lastDamageTime = _victim getVariable "lastDamageTime";
    _currentTime = diag_tickTime;
    if(_currentTime - _lastDamageTime > 0.05 && alive _victim && side _victim == side _attacker && name _attacker != name _victim) then {
        _victim setVariable ["lastDamageTime", _currentTime];
        format["%1 shot %2 - Střelba do vlastních řad!", name _attacker, name _victim] remoteExec ["systemChat", 0];
    };
}];