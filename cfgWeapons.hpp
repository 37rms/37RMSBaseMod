class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class H_HelmetB: ItemCore 
    { 
        class ItemInfo; 
    }; 

	class Item_RMS37_generic: ItemCore
	{
		author="Nicer";
		dlc="rms37pack";
		scope=1;
		access=3;
		displayName="Generic Item (Nepouzivat)";
		picture="\rms37pack\items\rms37_icon_item_paper";
		descriptionShort="";
		detectRange=-1;
		simulation="ItemMineDetector";
		useAsBinocular=0;
		type=4096;
		class ItemInfo: InventoryItem_Base_F
		{
			mass=2;
		};
	};
	class Item_RMS37_license_firearm: Item_RMS37_generic
	{
		scope=2;
		displayName="Zbrojni licence";
	};
	class Item_RMS37_license_pyrotechnic: Item_RMS37_generic
	{
		scope=2;
		displayName="Pyrotechnicka licence";
	};
	class Item_RMS37_license_idcard: Item_RMS37_generic
	{
		scope=2;
		displayName="Obcansky prukaz";
		picture="\rms37pack\items\rms37_icon_item_idcard";
	};
	class Item_RMS37_license_passthrough: Item_RMS37_generic
	{
		scope=2;
		displayName="Povoleni k prujezdu";
	};
	class Item_RMS37_drug_coke: Item_RMS37_generic
	{
		scope=2;
		displayName="Cocaine";
		picture="\rms37pack\items\rms37_icon_item_cocoaine";
	};
	class Item_RMS37_drug_weed: Item_RMS37_generic
	{
		scope=2;
		displayName="Weed";
		picture="\rms37pack\items\rms37_icon_item_weed";
	};
	class Item_RMS37_drug_dildo: Item_RMS37_generic
	{
		scope=2;
		displayName="Dildo";
		picture="\rms37pack\items\rms37_icon_item_dildo";
	};
	class Item_RMS37_drug_heart: Item_RMS37_generic
	{
		scope=2;
		displayName="Human organ";
		picture="\rms37pack\items\rms37_icon_item_heartorgan";
	};
	
	class RMS37_Beret: H_HelmetB
	{
			dlc = "rms37pack";
			displayName="Beret (37RMS)";
			picture="\A3\characters_f_EPB\BLUFOR\Data\UI\icon_H_beret02_ca.paa";
			model="\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[]=
			{
				"\rms37pack\icon\37rms_beret.paa"
			};
			class ItemInfo: ItemInfo
			{
				mass=6;
				allowedSlots[] = {901,605};
				uniformModel="\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
				modelSides[]={6};
				hiddenSelections[] = {"Camo"};
				armor = "3*0.3";
				passThrough = 0.75;
			};
	};
		
	class RMS37_Beret_Leader: H_HelmetB
	{
			dlc = "rms37pack";
			displayName="Beret (37RMS Officer)";
			picture="\A3\characters_f_EPB\BLUFOR\Data\UI\icon_H_beret02_ca.paa";
			model="\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[]=
			{
				"\rms37pack\icon\37rms_beret_leader.paa"
			};
			class ItemInfo: ItemInfo
			{
				mass=6;
				allowedSlots[] = {901,605};
				uniformModel="\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
				modelSides[]={6};
				hiddenSelections[] = {"Camo"};
				armor = "3*0.3";
				passThrough = 0.75;
			};
	};
	
	class RMS37_Beret_Granko: H_HelmetB
	{
			dlc = "rms37pack";
			displayName="Beret (37RMS Granko)";
			picture="\A3\characters_f_EPB\BLUFOR\Data\UI\icon_H_beret02_ca.paa";
			model="\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[]=
			{
				"\rms37pack\icon\37rms_beret_granko.paa"
			};
			class ItemInfo: ItemInfo
			{
				mass=6;
				allowedSlots[] = {901,605};
				uniformModel="\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
				modelSides[]={6};
				hiddenSelections[] = {"Camo"};
				armor = "3*0.3";
				passThrough = 0.75;
			};
	};
	
		class RMS37_Beret_APF: H_HelmetB
	{
			dlc = "rms37pack";
			displayName="Beret (APF)";
			picture="\A3\characters_f_EPB\BLUFOR\Data\UI\icon_H_beret02_ca.paa";
			model="\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[]=
			{
				"\rms37pack\icon\37rms_beret_apf.paa"
			};
			class ItemInfo: ItemInfo
			{
				mass=6;
				allowedSlots[] = {901,605};
				uniformModel="\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
				modelSides[]={6};
				hiddenSelections[] = {"Camo"};
				armor = "3*0.3";
				passThrough = 0.75;
			};
	};
	
		class RMS37_Beret_CAF: H_HelmetB
	{
			dlc = "rms37pack";
			displayName="Beret (CAF)";
			picture="\A3\characters_f_EPB\BLUFOR\Data\UI\icon_H_beret02_ca.paa";
			model="\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[]=
			{
				"\rms37pack\icon\37rms_beret_caf.paa"
			};
			class ItemInfo: ItemInfo
			{
				mass=6;
				allowedSlots[] = {901,605};
				uniformModel="\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
				modelSides[]={6};
				hiddenSelections[] = {"Camo"};
				armor = "3*0.3";
				passThrough = 0.75;
			};
	};
	
		class RMS37_Beret_Clawhammer: H_HelmetB
	{
			dlc = "rms37pack";
			displayName="Beret (Clawhammer)";
			picture="\A3\characters_f_EPB\BLUFOR\Data\UI\icon_H_beret02_ca.paa";
			model="\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[]=
			{
				"\rms37pack\icon\37rms_beret_claw.paa"
			};
			class ItemInfo: ItemInfo
			{
				mass=6;
				allowedSlots[] = {901,605};
				uniformModel="\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
				modelSides[]={6};
				hiddenSelections[] = {"Camo"};
				armor = "3*0.3";
				passThrough = 0.75;
			};
	};
	
		class RMS37_Beret_RACS: H_HelmetB
	{
			dlc = "rms37pack";
			displayName="Beret (RACS)";
			picture="\A3\characters_f_EPB\BLUFOR\Data\UI\icon_H_beret02_ca.paa";
			model="\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[]=
			{
				"\rms37pack\icon\37rms_beret_racs.paa"
			};
			class ItemInfo: ItemInfo
			{
				mass=6;
				allowedSlots[] = {901,605};
				uniformModel="\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
				modelSides[]={6};
				hiddenSelections[] = {"Camo"};
				armor = "3*0.3";
				passThrough = 0.75;
			};
	};
	
		class RMS37_Beret_SLA: H_HelmetB
	{
			dlc = "rms37pack";
			displayName="Beret (SLA)";
			picture="\A3\characters_f_EPB\BLUFOR\Data\UI\icon_H_beret02_ca.paa";
			model="\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[]=
			{
				"\rms37pack\icon\37rms_beret_sla.paa"
			};
			class ItemInfo: ItemInfo
			{
				mass=6;
				allowedSlots[] = {901,605};
				uniformModel="\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
				modelSides[]={6};
				hiddenSelections[] = {"Camo"};
				armor = "3*0.3";
				passThrough = 0.75;
			};
	};
	
	class RMS37_Crew_Turtle: H_HelmetB
	{
			dlc = "rms37pack";
			displayName="Crew Helmet (Turtle)";
			picture="\A3\characters_F_Beta\Data\UI\icon_H_I_Helmet_crew_ca.paa";
			model="\A3\Characters_F_Beta\INDEP\headgear_ia_helmet_crew";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[]=
			{
				"\rms37pack\icon\crew_helmet_turtle.paa"
			};
			class ItemInfo: ItemInfo
			{
				mass=6;
				allowedSlots[] = {901,605};
				uniformModel="\A3\Characters_F_Beta\INDEP\headgear_ia_helmet_crew";
				modelSides[]={6};
				hiddenSelections[] = {"Camo"};
				armor = "3*0.3";
				passThrough = 0.75;
			};
	};
	
	class RMS37_Cap_Maga: H_HelmetB
	{
			dlc = "rms37pack";
			displayName="Cap (MAGA)";
			picture="\A3\Characters_F_Bootcamp\Data\UI\icon_H_Cap_usblack_ca.paa";
			model="\A3\Characters_F\common\capb";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[]=
			{
				"\rms37pack\icon\cap_maga.paa"
			};
			class ItemInfo: ItemInfo
			{
				mass=6;
				allowedSlots[] = {901,605};
				uniformModel="\A3\Characters_F\common\capb";
				modelSides[]={6};
				hiddenSelections[] = {"Camo"};
				armor = "3*0.3";
				passThrough = 0.75;
			};
	};
	
	class RMS37_Cap_Autism: H_HelmetB
	{
			dlc = "rms37pack";
			displayName="Cap (Autism)";
			picture="\A3\Characters_F_Bootcamp\Data\UI\icon_H_Cap_usblack_ca.paa";
			model="\A3\Characters_F\common\capb";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[]=
			{
				"\rms37pack\icon\cap_autism.paa"
			};
			class ItemInfo: ItemInfo
			{
				mass=6;
				allowedSlots[] = {901,605};
				uniformModel="\A3\Characters_F\common\capb";
				modelSides[]={6};
				hiddenSelections[] = {"Camo"};
				armor = "3*0.3";
				passThrough = 0.75;
			};
	};
	
	class RMS37_Cap_Unicorn: H_HelmetB
	{
			dlc = "rms37pack";
			displayName="Cap (Unicorn)";
			picture="\A3\Characters_F_Bootcamp\Data\UI\icon_H_Cap_usblack_ca.paa";
			model="\A3\Characters_F\common\capb";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[]=
			{
				"\rms37pack\icon\cap_unicorn.paa"
			};
			class ItemInfo: ItemInfo
			{
				mass=6;
				allowedSlots[] = {901,605};
				uniformModel="\A3\Characters_F\common\capb";
				modelSides[]={6};
				hiddenSelections[] = {"Camo"};
				armor = "3*0.3";
				passThrough = 0.75;
			};
	};
	
	class RMS37_Pink_Fedora: H_HelmetB
	{
			dlc = "rms37pack";
			displayName="Hat (Pink Camo)";
			picture="\A3\Characters_F_Bootcamp\Data\UI\icon_H_Hat_grey_ca.paa";
			model="\A3\Characters_F\Civil\hat";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[]=
			{
				"\rms37pack\icon\pink_fedora.paa"
			};
			class ItemInfo: ItemInfo
			{
				mass=6;
				allowedSlots[] = {901,605};
				uniformModel="\A3\Characters_F\Civil\hat";
				modelSides[]={6};
				hiddenSelections[] = {"Camo"};
				armor = "3*0.3";
				passThrough = 0.75;
			};
	};
	
	class RMS37_Bandana_Ricardo: H_HelmetB
	{
			dlc = "rms37pack";
			displayName="Bandana (Ricardo)";
			picture="\A3\characters_f\Data\UI\icon_H_Bandanna_gry_CA.paa";
			model="\A3\Characters_F\Civil\headgear_c_bandana1";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[]=
			{
				"\rms37pack\icon\ricardo_bandana.paa"
			};
			class ItemInfo: ItemInfo
			{
				mass=6;
				allowedSlots[] = {901,605};
				uniformModel="\A3\Characters_F\Civil\headgear_c_bandana1";
				modelSides[]={6};
				hiddenSelections[] = {"Camo"};
				armor = "3*0.3";
				passThrough = 0.75;
			};
	};
	
	class RMS37_UwU_Helmet: H_HelmetB
	{
			dlc = "rms37pack";
			displayName="Heli Crew Helmet UwU";
			picture="\A3\Characters_F\data\ui\icon_H_Crew_Helmet_Heli_B_CA.paa";
			model="A3\Characters_F\Common\headgear_helmet_heli_shield";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[]=
			{
				"\rms37pack\icon\uwu_helmet.paa"
			};
			class ItemInfo: ItemInfo
			{
				mass=6;
				allowedSlots[] = {901,605};
				uniformModel="A3\Characters_F\Common\headgear_helmet_heli_shield";
				modelSides[]={6};
				hiddenSelections[] = {"Camo"};
				armor = "3*0.3";
				passThrough = 0.75;
			};
	};
};