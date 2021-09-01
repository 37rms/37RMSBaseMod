//////////////////////////////////////////////////////////////////////////////////
// Config Automatically Generated by ALiVE ORBAT Creator
// Generated with Arma 3 version 202.147284 on Stable branch
// Generated with ALiVE version 1.13.2.2102061
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class rhsgref_tla_rifleman_m14;
    class rhsgref_tla_rifleman_m14_OCimport_01 : rhsgref_tla_rifleman_m14 { scope = 0; class EventHandlers; };
    class rhsgref_tla_rifleman_m14_OCimport_02 : rhsgref_tla_rifleman_m14_OCimport_01 { class EventHandlers; };

    class rhsgref_tla_medic;
    class rhsgref_tla_medic_OCimport_01 : rhsgref_tla_medic { scope = 0; class EventHandlers; };
    class rhsgref_tla_medic_OCimport_02 : rhsgref_tla_medic_OCimport_01 { class EventHandlers; };

    class rhsgref_tla_saboteur;
    class rhsgref_tla_saboteur_OCimport_01 : rhsgref_tla_saboteur { scope = 0; class EventHandlers; };
    class rhsgref_tla_saboteur_OCimport_02 : rhsgref_tla_saboteur_OCimport_01 { class EventHandlers; };

    class rhsgref_tla_warlord;
    class rhsgref_tla_warlord_OCimport_01 : rhsgref_tla_warlord { scope = 0; class EventHandlers; };
    class rhsgref_tla_warlord_OCimport_02 : rhsgref_tla_warlord_OCimport_01 { class EventHandlers; };


    class O_DS_Mercenary_M14_OPF_01 : rhsgref_tla_rifleman_m14_OCimport_02 {
        author = "Tempestus";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mercenary (M14)";
        side = 0;
        faction = "O_DS_OPF";

        identityTypes[] = {"Head_Euro","LanguageFRE_F"};

        uniformClass = "CUP_U_B_BDUv2_roll2_gloves_dirty_OD";

        linkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_Light","H_Bandanna_khk","ItemMap","ItemGPS","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_Light","H_Bandanna_khk","ItemMap","ItemGPS","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_srifle_M14","Rangefinder"};
        respawnWeapons[] = {"CUP_srifle_M14","Rangefinder"};

        magazines[] = {"CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_M14","","","",{"CUP_20Rnd_762x51_DMR",20},{},""},{},{},{"CUP_U_B_BDUv2_roll2_gloves_dirty_OD",{{"ACE_elasticBandage",10},{"ACE_epinephrine",10},{"ACE_morphine",10},{"ACE_personalAidKit",1}}},{"CUP_V_O_Ins_Carrier_Rig_Light",{{"ACE_tourniquet",4},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"HandGrenade",4,1},{"CUP_20Rnd_762x51_DMR",4,20}}},{},"H_Bandanna_khk","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_DS_Mercenary_AKM_OPF_01 : O_DS_Mercenary_M14_OPF_01 {
        author = "Tempestus";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mercenary (AKM)";
        side = 0;
        faction = "O_DS_OPF";

        identityTypes[] = {"Head_NATO","LanguageFRE_F"};

        uniformClass = "CUP_U_B_BDUv2_roll2_gloves_dirty_DPM_OD";

        linkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_Light","H_Booniehat_oli","ItemMap","ItemGPS","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_Light","H_Booniehat_oli","ItemMap","ItemGPS","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM_Early","Rangefinder"};
        respawnWeapons[] = {"CUP_arifle_AKM_Early","Rangefinder"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM_Early","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CUP_U_B_BDUv2_roll2_gloves_dirty_DPM_OD",{{"ACE_elasticBandage",10},{"ACE_epinephrine",10},{"ACE_morphine",10},{"ACE_personalAidKit",1}}},{"CUP_V_O_Ins_Carrier_Rig_Light",{{"ACE_tourniquet",4},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"HandGrenade",4,1},{"CUP_30Rnd_762x39_AK47_M",6,30}}},{},"H_Booniehat_oli","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_DS_Mercenary_AKS_74_OPF_01 : O_DS_Mercenary_M14_OPF_01 {
        author = "Tempestus";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mercenary (AKS-74)";
        side = 0;
        faction = "O_DS_OPF";

        identityTypes[] = {"Head_Euro","LanguageFRE_F"};

        uniformClass = "CUP_U_B_BDUv2_roll2_gloves_dirty_Tigerstripe";

        linkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_Light","CUP_H_PMC_Beanie_Khaki","ItemMap","ItemGPS","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_Light","CUP_H_PMC_Beanie_Khaki","ItemMap","ItemGPS","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74_Early","Rangefinder"};
        respawnWeapons[] = {"CUP_arifle_AKS74_Early","Rangefinder"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74_Early","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CUP_U_B_BDUv2_roll2_gloves_dirty_Tigerstripe",{{"ACE_elasticBandage",10},{"ACE_epinephrine",10},{"ACE_morphine",10},{"ACE_personalAidKit",1}}},{"CUP_V_O_Ins_Carrier_Rig_Light",{{"ACE_tourniquet",4},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"HandGrenade",4,1},{"CUP_30Rnd_545x39_AK_M",7,30}}},{},"CUP_H_PMC_Beanie_Khaki","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_DS_Mercenary_M79_OPF_01 : O_DS_Mercenary_M14_OPF_01 {
        author = "Tempestus";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mercenary (M79)";
        side = 0;
        faction = "O_DS_OPF";

        identityTypes[] = {"Head_NATO","LanguageFRE_F"};

        uniformClass = "LOP_U_AFR_Fatigue_02";

        linkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemGPS","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemGPS","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_glaunch_M79","Rangefinder"};
        respawnWeapons[] = {"CUP_glaunch_M79","Rangefinder"};

        magazines[] = {"CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203"};
        respawnMagazines[] = {"CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_glaunch_M79","","","",{"CUP_1Rnd_HE_M203",1},{},""},{},{},{"LOP_U_AFR_Fatigue_02",{{"ACE_elasticBandage",10},{"ACE_epinephrine",10},{"ACE_morphine",10},{"ACE_personalAidKit",1},{"CUP_1Rnd_HE_M203",2,1}}},{"CUP_V_O_Ins_Carrier_Rig_Light",{{"CUP_1Rnd_HE_M203",27,1}}},{},"","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_DS_Mercenary_M60E4_OPF_01 : O_DS_Mercenary_M14_OPF_01 {
        author = "Tempestus";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mercenary (M60E4)";
        side = 0;
        faction = "O_DS_OPF";

        identityTypes[] = {"Head_Euro","LanguageFRE_F"};

        uniformClass = "LOP_U_AFR_Fatigue_03";

        linkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_MG","H_Cap_oli","ItemMap","ItemGPS","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_MG","H_Cap_oli","ItemMap","ItemGPS","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_lmg_M60E4_norail","Rangefinder"};
        respawnWeapons[] = {"CUP_lmg_M60E4_norail","Rangefinder"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_M60E4_norail","","","",{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",100},{},""},{},{},{"LOP_U_AFR_Fatigue_03",{{"ACE_elasticBandage",15},{"ACE_epinephrine",10},{"ACE_morphine",15},{"ACE_personalAidKit",1}}},{"CUP_V_O_Ins_Carrier_Rig_MG",{{"ACE_tourniquet",4},{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",2,100},{"HandGrenade",1,1}}},{},"H_Cap_oli","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_DS_Mercenary_Pilot_AKS_74_OPF_01 : O_DS_Mercenary_AKS_74_OPF_01 {
        author = "Tempestus";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mercenary Pilot (AKS-74)";
        side = 0;
        faction = "O_DS_OPF";

        identityTypes[] = {"Head_Euro","LanguageFRE_F"};

        uniformClass = "LOP_U_AFR_Fatigue_04";

        linkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_Light","rhsusf_hgu56p_visor","ItemMap","ItemGPS","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_Light","rhsusf_hgu56p_visor","ItemMap","ItemGPS","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74_Early","Rangefinder"};
        respawnWeapons[] = {"CUP_arifle_AKS74_Early","Rangefinder"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74_Early","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"LOP_U_AFR_Fatigue_04",{{"ACE_elasticBandage",15},{"ACE_epinephrine",10},{"ACE_morphine",15},{"ACE_personalAidKit",1}}},{"CUP_V_O_Ins_Carrier_Rig_Light",{{"ACE_tourniquet",4},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"CUP_30Rnd_545x39_AK_M",7,30},{"HandGrenade",4,1}}},{},"rhsusf_hgu56p_visor","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_DS_Mercenary_Medic_AKS_74_OPF_01 : rhsgref_tla_medic_OCimport_02 {
        author = "Tempestus";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mercenary Medic (AKS-74)";
        side = 0;
        faction = "O_DS_OPF";

        identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

        uniformClass = "LOP_U_AFR_Fatigue_04_slv";

        linkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_Light","H_Shemag_olive","ItemMap","ItemGPS","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_Light","H_Shemag_olive","ItemMap","ItemGPS","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74_Early","Rangefinder"};
        respawnWeapons[] = {"CUP_arifle_AKS74_Early","Rangefinder"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "B_Kitbag_rgr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74_Early","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"LOP_U_AFR_Fatigue_04_slv",{{"ACE_elasticBandage",15},{"ACE_epinephrine",10},{"ACE_morphine",15},{"ACE_personalAidKit",1}}},{"CUP_V_O_Ins_Carrier_Rig_Light",{{"ACE_tourniquet",4},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"CUP_30Rnd_545x39_AK_M",7,30},{"HandGrenade",4,1}}},{"B_Kitbag_rgr",{{"ACE_tourniquet",5},{"ACE_morphine",50},{"ACE_epinephrine",50},{"ACE_elasticBandage",50},{"ACE_bloodIV_500",10},{"ACE_bloodIV",7},{"ACE_bloodIV_250",2}}},"H_Shemag_olive","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_DS_Mercenary_Engineer_AKS_74_OPF_01 : rhsgref_tla_saboteur_OCimport_02 {
        author = "Tempestus";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mercenary Engineer (AKS-74)";
        side = 0;
        faction = "O_DS_OPF";

        identityTypes[] = {"Head_Euro","LanguageFRE_F"};

        uniformClass = "LOP_U_AFR_Fatigue_01";

        linkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_Light","CUP_H_USA_Cap_M81","ItemMap","ItemGPS","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_Light","CUP_H_USA_Cap_M81","ItemMap","ItemGPS","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74_Early","Rangefinder"};
        respawnWeapons[] = {"CUP_arifle_AKS74_Early","Rangefinder"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "B_Kitbag_rgr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74_Early","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"LOP_U_AFR_Fatigue_01",{{"ACE_elasticBandage",15},{"ACE_epinephrine",10},{"ACE_morphine",15},{"ACE_personalAidKit",1}}},{"CUP_V_O_Ins_Carrier_Rig_Light",{{"ACE_tourniquet",4},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"CUP_30Rnd_545x39_AK_M",7,30},{"HandGrenade",4,1}}},{"B_Kitbag_rgr",{{"ACE_DefusalKit",1},{"ACE_EntrenchingTool",1},{"ACE_Clacker",1},{"MineDetector",1},{"SatchelCharge_Remote_Mag",2,1},{"DemoCharge_Remote_Mag",4,1}}},"CUP_H_USA_Cap_M81","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_DS_Torturer_AKS_74_OPF_01 : rhsgref_tla_warlord_OCimport_02 {
        author = "Tempestus";
        scope = 2;
        scopeCurator = 2;
        displayName = "Torturer (AKS-74)";
        side = 0;
        faction = "O_DS_OPF";

        identityTypes[] = {"Orange_AAF","LanguageFRE_F"};

        uniformClass = "BRM_EBattleUNITS_Green";

        linkedItems[] = {"CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemGPS","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemGPS","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74_Early","Rangefinder"};
        respawnWeapons[] = {"CUP_arifle_AKS74_Early","Rangefinder"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74_Early","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"BRM_EBattleUNITS_Green",{{"ACE_elasticBandage",10},{"ACE_epinephrine",5},{"ACE_morphine",15},{"ACE_personalAidKit",1}}},{"CUP_V_B_GER_Carrier_Rig_2_Brown",{{"ACE_tourniquet",4},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"CUP_30Rnd_545x39_AK_M",7,30},{"HandGrenade",4,1}}},{},"","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","ItemWatch",""}};


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