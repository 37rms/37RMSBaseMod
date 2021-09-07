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

    class LOP_AM_OPF_Infantry_Marksman;
    class LOP_AM_OPF_Infantry_Marksman_OCimport_01 : LOP_AM_OPF_Infantry_Marksman { scope = 0; class EventHandlers; };
    class LOP_AM_OPF_Infantry_Marksman_OCimport_02 : LOP_AM_OPF_Infantry_Marksman_OCimport_01 { class EventHandlers; };

    class LOP_AM_OPF_Infantry_Rifleman_5;
    class LOP_AM_OPF_Infantry_Rifleman_5_OCimport_01 : LOP_AM_OPF_Infantry_Rifleman_5 { scope = 0; class EventHandlers; };
    class LOP_AM_OPF_Infantry_Rifleman_5_OCimport_02 : LOP_AM_OPF_Infantry_Rifleman_5_OCimport_01 { class EventHandlers; };

    class LOP_AM_OPF_Infantry_Corpsman;
    class LOP_AM_OPF_Infantry_Corpsman_OCimport_01 : LOP_AM_OPF_Infantry_Corpsman { scope = 0; class EventHandlers; };
    class LOP_AM_OPF_Infantry_Corpsman_OCimport_02 : LOP_AM_OPF_Infantry_Corpsman_OCimport_01 { class EventHandlers; };

    class LOP_AM_OPF_Infantry_Engineer;
    class LOP_AM_OPF_Infantry_Engineer_OCimport_01 : LOP_AM_OPF_Infantry_Engineer { scope = 0; class EventHandlers; };
    class LOP_AM_OPF_Infantry_Engineer_OCimport_02 : LOP_AM_OPF_Infantry_Engineer_OCimport_01 { class EventHandlers; };

    class LOP_AM_OPF_Infantry_SL;
    class LOP_AM_OPF_Infantry_SL_OCimport_01 : LOP_AM_OPF_Infantry_SL { scope = 0; class EventHandlers; };
    class LOP_AM_OPF_Infantry_SL_OCimport_02 : LOP_AM_OPF_Infantry_SL_OCimport_01 { class EventHandlers; };


    class O_QA_Terrorist_AKM_OPF_01 : LOP_AM_OPF_Infantry_Rifleman_OCimport_02 {
        author = "Tempestus";
        scope = 2;
        scopeCurator = 2;
        displayName = "Terrorist (AKM)";
        side = 0;
        faction = "O_QA_OPF";

        identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

        uniformClass = "CUP_O_TKI_Khet_Partug_06";

        linkedItems[] = {"CUP_V_OI_TKI_Jacket2_04","CUP_H_TKI_Lungee_02","ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_OI_TKI_Jacket2_04","CUP_H_TKI_Lungee_02","ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM_Early","Rangefinder"};
        respawnWeapons[] = {"CUP_arifle_AKM_Early","Rangefinder"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM_Early","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CUP_O_TKI_Khet_Partug_06",{{"ACE_personalAidKit",1},{"ACE_morphine",10},{"ACE_epinephrine",10},{"ACE_elasticBandage",10}}},{"CUP_V_OI_TKI_Jacket2_04",{{"ACE_tourniquet",4},{"HandGrenade",3,1},{"CUP_30Rnd_762x39_AK47_M",4,30}}},{},"CUP_H_TKI_Lungee_02","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_QA_Terrorist_AK_74_OPF_01 : O_QA_Terrorist_AKM_OPF_01 {
        author = "Tempestus";
        scope = 2;
        scopeCurator = 2;
        displayName = "Terrorist (AK-74)";
        side = 0;
        faction = "O_QA_OPF";

        identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

        uniformClass = "CUP_O_TKI_Khet_Partug_06";

        linkedItems[] = {"CUP_V_OI_TKI_Jacket2_01","CUP_H_TKI_Lungee_05","ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_OI_TKI_Jacket2_01","CUP_H_TKI_Lungee_05","ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74_Early","Rangefinder"};
        respawnWeapons[] = {"CUP_arifle_AK74_Early","Rangefinder"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74_Early","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CUP_O_TKI_Khet_Partug_06",{{"ACE_personalAidKit",1},{"ACE_morphine",10},{"ACE_epinephrine",10},{"ACE_elasticBandage",10}}},{"CUP_V_OI_TKI_Jacket2_01",{{"ACE_tourniquet",4},{"HandGrenade",3,1},{"CUP_30Rnd_545x39_AK_M",5,30}}},{},"CUP_H_TKI_Lungee_05","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_QA_Terrorist_AKS_74_OPF_01 : O_QA_Terrorist_AKM_OPF_01 {
        author = "Tempestus";
        scope = 2;
        scopeCurator = 2;
        displayName = "Terrorist (AKS-74)";
        side = 0;
        faction = "O_QA_OPF";

        identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

        uniformClass = "CUP_O_TKI_Khet_Partug_06";

        linkedItems[] = {"CUP_V_OI_TKI_Jacket4_03","CUP_H_TKI_Lungee_06","ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_OI_TKI_Jacket4_03","CUP_H_TKI_Lungee_06","ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74_Early","Rangefinder"};
        respawnWeapons[] = {"CUP_arifle_AKS74_Early","Rangefinder"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74_Early","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CUP_O_TKI_Khet_Partug_06",{{"ACE_personalAidKit",1},{"ACE_morphine",10},{"ACE_epinephrine",10},{"ACE_elasticBandage",10}}},{"CUP_V_OI_TKI_Jacket4_03",{{"ACE_tourniquet",4},{"HandGrenade",3,1},{"CUP_30Rnd_545x39_AK_M",5,30}}},{},"CUP_H_TKI_Lungee_06","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_QA_Terrorist_FN_P90_OPF_01 : O_QA_Terrorist_AKM_OPF_01 {
        author = "Tempestus";
        scope = 2;
        scopeCurator = 2;
        displayName = "Terrorist (FN P90)";
        side = 0;
        faction = "O_QA_OPF";

        identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

        uniformClass = "CUP_O_TKI_Khet_Partug_06";

        linkedItems[] = {"CUP_V_OI_TKI_Jacket2_02","CUP_H_TKI_Lungee_Open_05","ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_OI_TKI_Jacket2_02","CUP_H_TKI_Lungee_Open_05","ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch"};

        weapons[] = {"SMG_03C_black","Rangefinder"};
        respawnWeapons[] = {"SMG_03C_black","Rangefinder"};

        magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03"};
        respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03"};

        ALiVE_orbatCreator_loadout[] = {{"SMG_03C_black","","","",{"50Rnd_570x28_SMG_03",50},{},""},{},{},{"CUP_O_TKI_Khet_Partug_06",{{"ACE_personalAidKit",1},{"ACE_morphine",10},{"ACE_epinephrine",10},{"ACE_elasticBandage",10}}},{"CUP_V_OI_TKI_Jacket2_02",{{"ACE_tourniquet",4},{"HandGrenade",3,1},{"50Rnd_570x28_SMG_03",3,50}}},{},"CUP_H_TKI_Lungee_Open_05","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_QA_Terrorist_SVD_OPF_01 : LOP_AM_OPF_Infantry_Marksman_OCimport_02 {
        author = "Tempestus";
        scope = 2;
        scopeCurator = 2;
        displayName = "Terrorist (SVD)";
        side = 0;
        faction = "O_QA_OPF";

        identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

        uniformClass = "CUP_O_TKI_Khet_Partug_06";

        linkedItems[] = {"CUP_V_OI_TKI_Jacket6_02","CUP_H_TKI_Lungee_Open_06","ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_OI_TKI_Jacket6_02","CUP_H_TKI_Lungee_Open_06","ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_srifle_SVD","Rangefinder"};
        respawnWeapons[] = {"CUP_srifle_SVD","Rangefinder"};

        magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};
        respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_SVD","","","CUP_optic_PSO_3",{"CUP_10Rnd_762x54_SVD_M",10},{},""},{},{},{"CUP_O_TKI_Khet_Partug_06",{{"ACE_personalAidKit",1},{"ACE_morphine",10},{"ACE_epinephrine",10},{"ACE_elasticBandage",10}}},{"CUP_V_OI_TKI_Jacket6_02",{{"ACE_tourniquet",4},{"HandGrenade",3,1},{"CUP_10Rnd_762x54_SVD_M",5,10}}},{},"CUP_H_TKI_Lungee_Open_06","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_QA_Terrorist_M40A3_OPF_01 : LOP_AM_OPF_Infantry_Marksman_OCimport_02 {
        author = "Tempestus";
        scope = 2;
        scopeCurator = 2;
        displayName = "Terrorist (M40A3)";
        side = 0;
        faction = "O_QA_OPF";

        identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

        uniformClass = "CUP_O_TKI_Khet_Partug_06";

        linkedItems[] = {"CUP_V_OI_TKI_Jacket5_05","CUP_H_TKI_Lungee_Open_02","ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_OI_TKI_Jacket5_05","CUP_H_TKI_Lungee_Open_02","ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_srifle_M40A3","Rangefinder"};
        respawnWeapons[] = {"CUP_srifle_M40A3","Rangefinder"};

        magazines[] = {"CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24"};
        respawnMagazines[] = {"CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_M40A3","","","CUP_optic_LeupoldM3LR",{"CUP_5Rnd_762x51_M24",5},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"CUP_O_TKI_Khet_Partug_06",{{"ACE_personalAidKit",1},{"ACE_morphine",10},{"ACE_epinephrine",10},{"ACE_elasticBandage",10}}},{"CUP_V_OI_TKI_Jacket5_05",{{"ACE_tourniquet",4},{"HandGrenade",3,1},{"CUP_5Rnd_762x51_M24",5,5}}},{},"CUP_H_TKI_Lungee_Open_02","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_QA_Terrorist_Pilot_Vz61_OPF_01 : LOP_AM_OPF_Infantry_Rifleman_5_OCimport_02 {
        author = "Tempestus";
        scope = 2;
        scopeCurator = 2;
        displayName = "Terrorist Pilot (Vz61)";
        side = 0;
        faction = "O_QA_OPF";

        identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

        uniformClass = "CUP_O_TKI_Khet_Partug_06";

        linkedItems[] = {"CUP_V_OI_TKI_Jacket5_02","rhs_zsh7a_mike_green_alt","ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_OI_TKI_Jacket5_02","rhs_zsh7a_mike_green_alt","ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_savz61","Rangefinder"};
        respawnWeapons[] = {"rhs_weap_savz61","Rangefinder"};

        magazines[] = {"rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61"};
        respawnMagazines[] = {"rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61"};

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_savz61","","","",{"rhsgref_20rnd_765x17_vz61",20},{},""},{},{},{"CUP_O_TKI_Khet_Partug_06",{{"ACE_personalAidKit",1},{"ACE_morphine",10},{"ACE_epinephrine",10},{"ACE_elasticBandage",10}}},{"CUP_V_OI_TKI_Jacket5_02",{{"ACE_tourniquet",4},{"HandGrenade",3,1},{"rhsgref_20rnd_765x17_vz61",8,20}}},{},"rhs_zsh7a_mike_green_alt","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_QA_Terrorist_Medic_AKS_74_OPF_01 : LOP_AM_OPF_Infantry_Corpsman_OCimport_02 {
        author = "Tempestus";
        scope = 2;
        scopeCurator = 2;
        displayName = "Terrorist Medic (AKS-74)";
        side = 0;
        faction = "O_QA_OPF";

        identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

        uniformClass = "CUP_O_TKI_Khet_Partug_06";

        linkedItems[] = {"CUP_V_OI_TKI_Jacket4_05","CUP_H_TKI_Lungee_Open_04","ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_OI_TKI_Jacket4_05","CUP_H_TKI_Lungee_Open_04","ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74_Early","Rangefinder"};
        respawnWeapons[] = {"CUP_arifle_AKS74_Early","Rangefinder"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "rhs_sidor";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74_Early","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CUP_O_TKI_Khet_Partug_06",{{"ACE_personalAidKit",1},{"ACE_morphine",10},{"ACE_epinephrine",10},{"ACE_elasticBandage",10}}},{"CUP_V_OI_TKI_Jacket4_05",{{"ACE_tourniquet",4},{"HandGrenade",3,1},{"CUP_30Rnd_545x39_AK_M",5,30}}},{"rhs_sidor",{{"ACE_elasticBandage",35},{"ACE_epinephrine",35},{"ACE_morphine",35},{"ACE_tourniquet",4},{"ACE_bloodIV_500",4}}},"CUP_H_TKI_Lungee_Open_04","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_QA_Bomber_FN_P90_OPF_01 : LOP_AM_OPF_Infantry_Engineer_OCimport_02 {
        author = "Tempestus";
        scope = 2;
        scopeCurator = 2;
        displayName = "Bomber (FN P90)";
        side = 0;
        faction = "O_QA_OPF";

        identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

        uniformClass = "CUP_O_TKI_Khet_Partug_06";

        linkedItems[] = {"CUP_V_OI_TKI_Jacket4_03","CUP_H_TKI_Lungee_Open_01","ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_OI_TKI_Jacket4_03","CUP_H_TKI_Lungee_Open_01","ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch"};

        weapons[] = {"SMG_03C_black","Rangefinder"};
        respawnWeapons[] = {"SMG_03C_black","Rangefinder"};

        magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03"};
        respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03"};

        backpack = "rhs_assault_umbts_engineer_empty";

        ALiVE_orbatCreator_loadout[] = {{"SMG_03C_black","","","",{"50Rnd_570x28_SMG_03",50},{},""},{},{},{"CUP_O_TKI_Khet_Partug_06",{{"ACE_personalAidKit",1},{"ACE_morphine",10},{"ACE_epinephrine",10},{"ACE_elasticBandage",10}}},{"CUP_V_OI_TKI_Jacket4_03",{{"ACE_tourniquet",4},{"HandGrenade",3,1},{"50Rnd_570x28_SMG_03",3,50}}},{"rhs_assault_umbts_engineer_empty",{{"ACE_EntrenchingTool",1},{"ACE_DefusalKit",1},{"ACE_Clacker",1},{"MineDetector",1},{"SatchelCharge_Remote_Mag",2,1},{"DemoCharge_Remote_Mag",2,1}}},"CUP_H_TKI_Lungee_Open_01","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_QA_Suicider_FN_P90_OPF_01 : O_QA_Bomber_FN_P90_OPF_01 {
        author = "Tempestus";
        scope = 2;
        scopeCurator = 2;
        displayName = "Suicider (FN P90)";
        side = 0;
        faction = "O_QA_OPF";

        identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

        uniformClass = "CUP_O_TKI_Khet_Partug_06";

        linkedItems[] = {"CUP_V_OI_TKI_Jacket4_06","CUP_H_TKI_Lungee_04","ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_OI_TKI_Jacket4_06","CUP_H_TKI_Lungee_04","ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch"};

        weapons[] = {"SMG_03C_black","Rangefinder"};
        respawnWeapons[] = {"SMG_03C_black","Rangefinder"};

        magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03"};
        respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03"};

        backpack = "rhs_assault_umbts_engineer_empty";

        ALiVE_orbatCreator_loadout[] = {{"SMG_03C_black","","","",{"50Rnd_570x28_SMG_03",50},{},""},{},{},{"CUP_O_TKI_Khet_Partug_06",{{"ACE_personalAidKit",1},{"ACE_morphine",10},{"ACE_epinephrine",10},{"ACE_elasticBandage",10}}},{"CUP_V_OI_TKI_Jacket4_06",{{"ACE_tourniquet",4},{"HandGrenade",3,1},{"50Rnd_570x28_SMG_03",3,50}}},{"rhs_assault_umbts_engineer_empty",{{"ACE_DeadManSwitch",1},{"SatchelCharge_Remote_Mag",2,1},{"DemoCharge_Remote_Mag",3,1}}},"CUP_H_TKI_Lungee_04","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_QA_Terrorist_Leader_AKM_OPF_01 : LOP_AM_OPF_Infantry_SL_OCimport_02 {
        author = "Tempestus";
        scope = 2;
        scopeCurator = 2;
        displayName = "Terrorist Leader (AKM)";
        side = 0;
        faction = "O_QA_OPF";

        identityTypes[] = {"Head_Rangemaster","LanguagePER_F","G_IRAN_default"};

        uniformClass = "CUP_O_TKI_Khet_Partug_07";

        linkedItems[] = {"CUP_V_OI_TKI_Jacket4_04","CUP_H_TKI_Lungee_Open_01","ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_OI_TKI_Jacket4_04","CUP_H_TKI_Lungee_Open_01","ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM_Early","Rangefinder"};
        respawnWeapons[] = {"CUP_arifle_AKM_Early","Rangefinder"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM_Early","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CUP_O_TKI_Khet_Partug_07",{{"ACE_personalAidKit",1},{"ACE_morphine",10},{"ACE_epinephrine",10},{"ACE_elasticBandage",10}}},{"CUP_V_OI_TKI_Jacket4_04",{{"ACE_tourniquet",4},{"HandGrenade",3,1},{"CUP_30Rnd_762x39_AK47_M",4,30}}},{},"CUP_H_TKI_Lungee_Open_01","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_QA_Terrorist_Bomb_Maker_AKS_74_OPF_01 : O_QA_Terrorist_Leader_AKM_OPF_01 {
        author = "Tempestus";
        scope = 2;
        scopeCurator = 2;
        displayName = "Terrorist Bomb Maker (AKS-74)";
        side = 0;
        faction = "O_QA_OPF";

        identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

        uniformClass = "CUP_O_TKI_Khet_Partug_06";

        linkedItems[] = {"CUP_V_OI_TKI_Jacket3_05","CUP_H_TKI_Lungee_01","ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_OI_TKI_Jacket3_05","CUP_H_TKI_Lungee_01","ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74_Early","Rangefinder"};
        respawnWeapons[] = {"CUP_arifle_AKS74_Early","Rangefinder"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "rhs_assault_umbts_engineer_empty";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74_Early","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CUP_O_TKI_Khet_Partug_06",{{"ACE_personalAidKit",1},{"ACE_morphine",10},{"ACE_epinephrine",10},{"ACE_elasticBandage",10}}},{"CUP_V_OI_TKI_Jacket3_05",{{"ACE_tourniquet",4},{"HandGrenade",3,1},{"CUP_30Rnd_545x39_AK_M",5,30}}},{"rhs_assault_umbts_engineer_empty",{{"ACE_EntrenchingTool",1},{"ACE_DefusalKit",1},{"ACE_Clacker",1},{"MineDetector",1},{"SatchelCharge_Remote_Mag",2,1},{"DemoCharge_Remote_Mag",2,1}}},"CUP_H_TKI_Lungee_01","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_QA_Terrorist_Provisionist_AKS_74_OPF_01 : O_QA_Terrorist_Bomb_Maker_AKS_74_OPF_01 {
        author = "Tempestus";
        scope = 2;
        scopeCurator = 2;
        displayName = "Terrorist Provisionist (AKS-74)";
        side = 0;
        faction = "O_QA_OPF";

        identityTypes[] = {"Orange_EOD","LanguagePER_F","G_IRAN_default"};

        uniformClass = "U_C_FormalSuit_01_gray_F";

        linkedItems[] = {"CUP_V_O_TK_OfficerBelt","H_WirelessEarpiece_F","ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_O_TK_OfficerBelt","H_WirelessEarpiece_F","ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74_Early","CUP_hgun_M9A1","Rangefinder"};
        respawnWeapons[] = {"CUP_arifle_AKS74_Early","CUP_hgun_M9A1","Rangefinder"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_15Rnd_9x19_M9","CUP_30Rnd_545x39_AK_M","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_15Rnd_9x19_M9","CUP_30Rnd_545x39_AK_M","CUP_15Rnd_9x19_M9"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74_Early","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{"CUP_hgun_M9A1","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"U_C_FormalSuit_01_gray_F",{{"ACE_personalAidKit",1},{"ACE_morphine",10}}},{"CUP_V_O_TK_OfficerBelt",{{"ACE_tourniquet",4},{"HandGrenade",3,1},{"CUP_30Rnd_545x39_AK_M",2,30},{"CUP_15Rnd_9x19_M9",1,15}}},{},"H_WirelessEarpiece_F","G_Aviator",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch",""}};


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