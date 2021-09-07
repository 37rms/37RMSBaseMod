//////////////////////////////////////////////////////////////////////////////////
// Config Automatically Generated by ALiVE ORBAT Creator
// Generated with Arma 3 version 202.147284 on Stable branch
// Generated with ALiVE version 1.13.2.2102061
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class LOP_AM_OPF_Infantry_Rifleman;
    class LOP_AM_OPF_Infantry_Rifleman_OCimport_01 : LOP_AM_OPF_Infantry_Rifleman { scope = 0; class EventHandlers; };
    class LOP_AM_OPF_Infantry_Rifleman_OCimport_02 : LOP_AM_OPF_Infantry_Rifleman_OCimport_01 { class EventHandlers; };

    class LOP_AM_OPF_Infantry_AT;
    class LOP_AM_OPF_Infantry_AT_OCimport_01 : LOP_AM_OPF_Infantry_AT { scope = 0; class EventHandlers; };
    class LOP_AM_OPF_Infantry_AT_OCimport_02 : LOP_AM_OPF_Infantry_AT_OCimport_01 { class EventHandlers; };

    class LOP_AM_OPF_Infantry_GL;
    class LOP_AM_OPF_Infantry_GL_OCimport_01 : LOP_AM_OPF_Infantry_GL { scope = 0; class EventHandlers; };
    class LOP_AM_OPF_Infantry_GL_OCimport_02 : LOP_AM_OPF_Infantry_GL_OCimport_01 { class EventHandlers; };

    class LOP_AM_OPF_Infantry_Marksman;
    class LOP_AM_OPF_Infantry_Marksman_OCimport_01 : LOP_AM_OPF_Infantry_Marksman { scope = 0; class EventHandlers; };
    class LOP_AM_OPF_Infantry_Marksman_OCimport_02 : LOP_AM_OPF_Infantry_Marksman_OCimport_01 { class EventHandlers; };

    class LOP_AM_OPF_Infantry_AR;
    class LOP_AM_OPF_Infantry_AR_OCimport_01 : LOP_AM_OPF_Infantry_AR { scope = 0; class EventHandlers; };
    class LOP_AM_OPF_Infantry_AR_OCimport_02 : LOP_AM_OPF_Infantry_AR_OCimport_01 { class EventHandlers; };

    class LOP_AM_OPF_Infantry_Corpsman;
    class LOP_AM_OPF_Infantry_Corpsman_OCimport_01 : LOP_AM_OPF_Infantry_Corpsman { scope = 0; class EventHandlers; };
    class LOP_AM_OPF_Infantry_Corpsman_OCimport_02 : LOP_AM_OPF_Infantry_Corpsman_OCimport_01 { class EventHandlers; };

    class LOP_AM_OPF_Infantry_Engineer;
    class LOP_AM_OPF_Infantry_Engineer_OCimport_01 : LOP_AM_OPF_Infantry_Engineer { scope = 0; class EventHandlers; };
    class LOP_AM_OPF_Infantry_Engineer_OCimport_02 : LOP_AM_OPF_Infantry_Engineer_OCimport_01 { class EventHandlers; };

    class LOP_AM_OPF_Infantry_SL;
    class LOP_AM_OPF_Infantry_SL_OCimport_01 : LOP_AM_OPF_Infantry_SL { scope = 0; class EventHandlers; };
    class LOP_AM_OPF_Infantry_SL_OCimport_02 : LOP_AM_OPF_Infantry_SL_OCimport_01 { class EventHandlers; };


    class B_TLM_Rifleman_M14_BLU_01 : LOP_AM_OPF_Infantry_Rifleman_OCimport_02 {
        author = "Tempestus";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (M14)";
        side = 1;
        faction = "B_TLM_BLU";

        identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

        uniformClass = "CUP_O_TKI_Khet_Partug_08";

        linkedItems[] = {"CUP_V_OI_TKI_Jacket2_05","CUP_H_TKI_Pakol_2_01","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_OI_TKI_Jacket2_05","CUP_H_TKI_Pakol_2_01","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_srifle_M14","Rangefinder"};
        respawnWeapons[] = {"CUP_srifle_M14","Rangefinder"};

        magazines[] = {"CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_M14","","","",{"CUP_20Rnd_762x51_DMR",20},{},""},{},{},{"CUP_O_TKI_Khet_Partug_08",{{"ACE_elasticBandage",10},{"ACE_epinephrine",10},{"ACE_morphine",10},{"ACE_personalAidKit",1}}},{"CUP_V_OI_TKI_Jacket2_05",{{"ACE_tourniquet",4},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"rhs_mag_m67",3,1},{"CUP_20Rnd_762x51_DMR",3,20}}},{},"CUP_H_TKI_Pakol_2_01","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_TLM_Rifleman_AKM_BLU_01 : B_TLM_Rifleman_M14_BLU_01 {
        author = "Tempestus";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AKM)";
        side = 1;
        faction = "B_TLM_BLU";

        identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

        uniformClass = "CUP_O_TKI_Khet_Partug_08";

        linkedItems[] = {"CUP_V_OI_TKI_Jacket2_01","CUP_H_TKI_Pakol_2_06","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_OI_TKI_Jacket2_01","CUP_H_TKI_Pakol_2_06","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM_Early","Rangefinder"};
        respawnWeapons[] = {"CUP_arifle_AKM_Early","Rangefinder"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM_Early","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CUP_O_TKI_Khet_Partug_08",{{"ACE_elasticBandage",10},{"ACE_epinephrine",10},{"ACE_morphine",10},{"ACE_personalAidKit",1}}},{"CUP_V_OI_TKI_Jacket2_01",{{"ACE_tourniquet",4},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"rhs_mag_m67",3,1},{"CUP_30Rnd_762x39_AK47_M",4,30}}},{},"CUP_H_TKI_Pakol_2_06","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_TLM_Rifleman_M16A2_BLU_01 : B_TLM_Rifleman_M14_BLU_01 {
        author = "Tempestus";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (M16A2)";
        side = 1;
        faction = "B_TLM_BLU";

        identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

        uniformClass = "CUP_O_TKI_Khet_Partug_08";

        linkedItems[] = {"CUP_V_OI_TKI_Jacket2_03","CUP_H_TKI_Lungee_Open_06","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_OI_TKI_Jacket2_03","CUP_H_TKI_Lungee_Open_06","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_M16A2","Rangefinder"};
        respawnWeapons[] = {"CUP_arifle_M16A2","Rangefinder"};

        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A2","","","",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_O_TKI_Khet_Partug_08",{{"ACE_elasticBandage",10},{"ACE_epinephrine",10},{"ACE_morphine",10},{"ACE_personalAidKit",1}}},{"CUP_V_OI_TKI_Jacket2_03",{{"ACE_tourniquet",4},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"rhs_mag_m67",3,1},{"CUP_30Rnd_556x45_Stanag",5,30}}},{},"CUP_H_TKI_Lungee_Open_06","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_TLM_Rifleman_RPG_BLU_01 : LOP_AM_OPF_Infantry_AT_OCimport_02 {
        author = "Tempestus";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (RPG)";
        side = 1;
        faction = "B_TLM_BLU";

        identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

        uniformClass = "CUP_O_TKI_Khet_Partug_08";

        linkedItems[] = {"CUP_V_OI_TKI_Jacket2_04","CUP_H_TKI_Lungee_Open_06","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_OI_TKI_Jacket2_04","CUP_H_TKI_Lungee_Open_06","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_srifle_M14","CUP_launch_RPG7V","Rangefinder"};
        respawnWeapons[] = {"CUP_srifle_M14","CUP_launch_RPG7V","Rangefinder"};

        magazines[] = {"CUP_20Rnd_762x51_DMR","CUP_PG7V_M","CUP_20Rnd_762x51_DMR"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_DMR","CUP_PG7V_M","CUP_20Rnd_762x51_DMR"};

        backpack = "CUP_B_RPGPack_Khaki";

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_M14","","","",{"CUP_20Rnd_762x51_DMR",20},{},""},{"CUP_launch_RPG7V","","","",{"CUP_PG7V_M",1},{},""},{},{"CUP_O_TKI_Khet_Partug_08",{{"ACE_elasticBandage",10},{"ACE_epinephrine",10},{"ACE_morphine",10},{"ACE_personalAidKit",1}}},{"CUP_V_OI_TKI_Jacket2_04",{{"ACE_tourniquet",4},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"rhs_mag_m67",3,1},{"CUP_20Rnd_762x51_DMR",3,20}}},{"CUP_B_RPGPack_Khaki",{{"rhs_rpg7_PG7V_mag",5,1}}},"CUP_H_TKI_Lungee_Open_06","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_TLM_Grenadier_GP25_BLU_01 : LOP_AM_OPF_Infantry_GL_OCimport_02 {
        author = "Tempestus";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier (GP25)";
        side = 1;
        faction = "B_TLM_BLU";

        identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

        uniformClass = "CUP_O_TKI_Khet_Partug_08";

        linkedItems[] = {"CUP_V_OI_TKI_Jacket2_02","CUP_H_TKI_Pakol_1_05","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_OI_TKI_Jacket2_02","CUP_H_TKI_Pakol_1_05","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM_GL_Early","Rangefinder"};
        respawnWeapons[] = {"CUP_arifle_AKM_GL_Early","Rangefinder"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM_GL_Early","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CUP_O_TKI_Khet_Partug_08",{{"ACE_elasticBandage",10},{"ACE_epinephrine",10},{"ACE_morphine",10},{"ACE_personalAidKit",1}}},{"CUP_V_OI_TKI_Jacket2_02",{{"ACE_tourniquet",4},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"rhs_mag_m67",3,1},{"CUP_1Rnd_HE_GP25_M",3,1},{"CUP_30Rnd_762x39_AK47_M",3,30}}},{},"CUP_H_TKI_Pakol_1_05","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_TLM_Marksman_M14_wScope_BLU_01 : LOP_AM_OPF_Infantry_Marksman_OCimport_02 {
        author = "Tempestus";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman (M14 w Scope)";
        side = 1;
        faction = "B_TLM_BLU";

        identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

        uniformClass = "CUP_O_TKI_Khet_Partug_08";

        linkedItems[] = {"CUP_V_OI_TKI_Jacket2_04","CUP_H_TKI_Lungee_Open_01","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_OI_TKI_Jacket2_04","CUP_H_TKI_Lungee_Open_01","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_srifle_M14","Rangefinder"};
        respawnWeapons[] = {"CUP_srifle_M14","Rangefinder"};

        magazines[] = {"CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_M14","","","CUP_optic_LeupoldM3LR",{"CUP_20Rnd_762x51_DMR",20},{},""},{},{},{"CUP_O_TKI_Khet_Partug_08",{{"ACE_elasticBandage",10},{"ACE_epinephrine",10},{"ACE_morphine",10},{"ACE_personalAidKit",1}}},{"CUP_V_OI_TKI_Jacket2_04",{{"ACE_tourniquet",4},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"rhs_mag_m67",3,1},{"CUP_20Rnd_762x51_DMR",3,20}}},{},"CUP_H_TKI_Lungee_Open_01","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_TLM_Machine_Gunner_M60E3_BLU_01 : LOP_AM_OPF_Infantry_AR_OCimport_02 {
        author = "Tempestus";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machine Gunner (M60E3)";
        side = 1;
        faction = "B_TLM_BLU";

        identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

        uniformClass = "CUP_O_TKI_Khet_Partug_08";

        linkedItems[] = {"CUP_V_OI_TKI_Jacket3_04","CUP_H_TKI_Pakol_2_03","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_OI_TKI_Jacket3_04","CUP_H_TKI_Pakol_2_03","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_lmg_M60E4_norail","Rangefinder"};
        respawnWeapons[] = {"CUP_lmg_M60E4_norail","Rangefinder"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"};

        backpack = "rhs_assault_umbts";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_M60E4_norail","","","",{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",100},{},""},{},{},{"CUP_O_TKI_Khet_Partug_08",{{"ACE_elasticBandage",10},{"ACE_epinephrine",10},{"ACE_morphine",10},{"ACE_personalAidKit",1}}},{"CUP_V_OI_TKI_Jacket3_04",{{"ACE_tourniquet",4},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"rhs_mag_m67",3,1},{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",1,100}}},{"rhs_assault_umbts",{{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",5,100}}},"CUP_H_TKI_Pakol_2_03","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_TLM_Medic_AKMS_BLU_01 : LOP_AM_OPF_Infantry_Corpsman_OCimport_02 {
        author = "Tempestus";
        scope = 2;
        scopeCurator = 2;
        displayName = "Medic (AKMS)";
        side = 1;
        faction = "B_TLM_BLU";

        identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

        uniformClass = "CUP_O_TKI_Khet_Partug_08";

        linkedItems[] = {"CUP_V_OI_TKI_Jacket2_06","CUP_H_TKI_Pakol_1_01","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_OI_TKI_Jacket2_06","CUP_H_TKI_Pakol_1_01","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKMS_Early","Rangefinder"};
        respawnWeapons[] = {"CUP_arifle_AKMS_Early","Rangefinder"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "rhs_assault_umbts";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKMS_Early","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CUP_O_TKI_Khet_Partug_08",{{"ACE_elasticBandage",10},{"ACE_epinephrine",10},{"ACE_morphine",10},{"ACE_personalAidKit",1}}},{"CUP_V_OI_TKI_Jacket2_06",{{"ACE_tourniquet",4},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"rhs_mag_m67",3,1},{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"rhs_assault_umbts",{{"ACE_elasticBandage",50},{"ACE_epinephrine",50},{"ACE_morphine",50},{"ACE_tourniquet",4},{"ACE_bloodIV_500",10},{"ACE_bloodIV",3},{"ACE_bloodIV_250",2}}},"CUP_H_TKI_Pakol_1_01","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_TLM_Engineer_AKMS_BLU_01 : LOP_AM_OPF_Infantry_Engineer_OCimport_02 {
        author = "Tempestus";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer (AKMS)";
        side = 1;
        faction = "B_TLM_BLU";

        identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

        uniformClass = "CUP_O_TKI_Khet_Partug_08";

        linkedItems[] = {"CUP_V_OI_TKI_Jacket2_05","CUP_H_TKI_SkullCap_04","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_OI_TKI_Jacket2_05","CUP_H_TKI_SkullCap_04","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKMS_Early","Rangefinder"};
        respawnWeapons[] = {"CUP_arifle_AKMS_Early","Rangefinder"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "rhs_assault_umbts_engineer_empty";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKMS_Early","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CUP_O_TKI_Khet_Partug_08",{{"ACE_elasticBandage",10},{"ACE_epinephrine",10},{"ACE_morphine",10},{"ACE_personalAidKit",1}}},{"CUP_V_OI_TKI_Jacket2_05",{{"ACE_tourniquet",4},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"rhs_mag_m67",3,1},{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"rhs_assault_umbts_engineer_empty",{{"ACE_DefusalKit",1},{"ACE_EntrenchingTool",1},{"ACE_Clacker",1},{"MineDetector",1},{"SatchelCharge_Remote_Mag",2,1},{"DemoCharge_Remote_Mag",2,1}}},"CUP_H_TKI_SkullCap_04","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_TLM_Leader_GP25_BLU_01 : LOP_AM_OPF_Infantry_SL_OCimport_02 {
        author = "Tempestus";
        scope = 2;
        scopeCurator = 2;
        displayName = "Leader (GP25)";
        side = 1;
        faction = "B_TLM_BLU";

        identityTypes[] = {"Head_Rangemaster","LanguagePER_F","G_IRAN_default"};

        uniformClass = "CUP_O_TKI_Khet_Partug_06";

        linkedItems[] = {"CUP_V_OI_TKI_Jacket2_06","CUP_H_TKI_Lungee_Open_03","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_OI_TKI_Jacket2_06","CUP_H_TKI_Lungee_Open_03","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM_GL_Early","Rangefinder"};
        respawnWeapons[] = {"CUP_arifle_AKM_GL_Early","Rangefinder"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM_GL_Early","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CUP_O_TKI_Khet_Partug_06",{{"ACE_elasticBandage",10},{"ACE_epinephrine",10},{"ACE_morphine",10},{"ACE_personalAidKit",1}}},{"CUP_V_OI_TKI_Jacket2_06",{{"ACE_tourniquet",4},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"rhs_mag_m67",3,1},{"CUP_1Rnd_HE_GP25_M",3,1},{"CUP_30Rnd_762x39_AK47_M",3,30}}},{},"CUP_H_TKI_Lungee_Open_03","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

};