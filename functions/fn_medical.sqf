params ["_player"];
systemChat str "applied medical";
SuspiciousMedicalItems = ["ApplyTourniquet", "Morphine", "Epinephrine", "Adenosine"];
["ace_treatmentSucceded", RMS_fnc_handleMedicalAction] call CBA_fnc_addEventHandler;