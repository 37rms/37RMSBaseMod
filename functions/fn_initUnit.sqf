params["_unit"];

waitUntil{alive _unit};
if(isPlayer _unit) exitWith{};

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