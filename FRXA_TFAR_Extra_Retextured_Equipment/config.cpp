class CfgMods
{
	class Mod_Base; // External Class Reference
	class FRXAs_TFAR_Extra_Retextured_Equipment_DLC : Mod_Base
	{
		logo = "FRXA_TFAR_Extra_Retextured_Equipment\data\ui\FRXAs_TFAR_Extra_Retextured_Equipment_logo.paa";
	};
};

class CfgPatches // Addon Dependants
{
	class FRXA_TFAR_Extra_Retextured_Equipment
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"task_force_radio_items"};
		authors[] = {"freexavier", "dedmen"};
	};
};

class CfgVehicles // Item config
{
	class tf_rt1523g;
	class tf_rt1523g_big;

	class FRXA_tf_rt1523g_UCP: tf_rt1523g // UCP, Small
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "Raspu, Gandi, Nkey, freexavier(FRXA)";
		displayName = "RT-1523G (ASIP) [UCP]";
		descriptionShort = "RT-1523G (ASIP) long range radio 20km";
		DLC = "FRXAs_TFAR_Extra_Retextured_Equipment_DLC";
		maximumLoad = 50;
		mass = 80;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\FRXA_TFAR_Extra_Retextured_Equipment\data\clf_prc117g_UCP_co.paa"};
		model = "\task_force_radio_items\models\clf_prc117g_ap";
	};
	
	class FRXA_tf_rt1523g_big_UCP: tf_rt1523g_big // UCP,Big
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "Raspu, Gandi, Nkey, freexavier(FRXA)";
		displayName = "RT-1523G (ASIP) Big [UCP]";
		descriptionShort = "RT-1523G (ASIP) Big long range radio 20km";
		DLC = "FRXAs_TFAR_Extra_Retextured_Equipment_DLC";
		maximumLoad = 160;
		mass = 160;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\FRXA_TFAR_Extra_Retextured_Equipment\data\clf_nicecomm2_UCP_co.paa"};
		model = "\task_force_radio_items\models\clf_nicecomm2";
	};
	
	class FRXA_tf_rt1523g_CTRG: FRXA_tf_rt1523g_UCP // CTRG Grey, Small
	{
		author = "Raspu, Gandi, Nkey, freexavier(FRXA)";
		displayName = "RT-1523G (ASIP) [CTRG]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\FRXA_TFAR_Extra_Retextured_Equipment\data\clf_prc117g_CTRG_co.paa"};
		model = "\task_force_radio_items\models\clf_prc117g_ap";
	};
	
	class FRXA_tf_rt1523g_big_CTRG: FRXA_tf_rt1523g_big_UCP // CTRG Grey, Big
	{
		author = "Raspu, Gandi, Nkey, freexavier(FRXA)";
		displayName = "RT-1523G (ASIP) Big [CTRG]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\FRXA_TFAR_Extra_Retextured_Equipment\data\clf_nicecomm2_CTRG_co.paa"};
		model = "\task_force_radio_items\models\clf_nicecomm2";
	};
	
	class FRXA_tf_rt1523g_CTRG_Green: FRXA_tf_rt1523g_UCP // CTRG Green, Small
	{
		author = "Raspu, Gandi, Nkey, freexavier(FRXA)";
		displayName = "RT-1523G (ASIP) [CTRG Green]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\FRXA_TFAR_Extra_Retextured_Equipment\data\clf_prc117g_CTRG_Green_co.paa"};
		model = "\task_force_radio_items\models\clf_prc117g_ap";
	};
	
	class FRXA_tf_rt1523g_big_CTRG_Green: FRXA_tf_rt1523g_big_UCP // CTRG Green, Big
	{
		author = "Raspu, Gandi, Nkey, freexavier(FRXA)";
		displayName = "RT-1523G (ASIP) Big [CTRG Green]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\FRXA_TFAR_Extra_Retextured_Equipment\data\clf_nicecomm2_CTRG_Green_co.paa"};
		model = "\task_force_radio_items\models\clf_nicecomm2";
	};
	
	class FRXA_tf_rt1523g_MARPAT_Woodland: FRXA_tf_rt1523g_UCP // MARPAT Woodland, Small
	{
		author = "Raspu, Gandi, Nkey, freexavier(FRXA)";
		displayName = "RT-1523G (ASIP) [MARPAT Woodland]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\FRXA_TFAR_Extra_Retextured_Equipment\data\clf_prc117g_MARPAT_Woodland_co.paa"};
		model = "\task_force_radio_items\models\clf_prc117g_ap";
	};
	
	class FRXA_tf_rt1523g_big_MARPAT_Woodlaand: FRXA_tf_rt1523g_big_UCP //  MARPAT Woodland, Big
	{
		author = "Raspu, Gandi, Nkey, freexavier(FRXA)";
		displayName = "RT-1523G (ASIP) Big [MARPAT Woodland]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\FRXA_TFAR_Extra_Retextured_Equipment\data\clf_nicecomm2_MARPAT_Woodland_co.paa"};
		model = "\task_force_radio_items\models\clf_nicecomm2";
	};
	
	class FRXA_tf_rt1523g_MARPAT_Desert: FRXA_tf_rt1523g_UCP // MARPAT Desert, Small
	{
		author = "Raspu, Gandi, Nkey, freexavier(FRXA)";
		displayName = "RT-1523G (ASIP) [MARPAT Desert]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\FRXA_TFAR_Extra_Retextured_Equipment\data\clf_prc117g_MARPAT_Desert_co.paa"};
		model = "\task_force_radio_items\models\clf_prc117g_ap";
	};
	
	class FRXA_tf_rt1523g_big_MARPAT_Desert: FRXA_tf_rt1523g_big_UCP //  MARPAT Desert, Big
	{
		author = "Raspu, Gandi, Nkey, freexavier(FRXA)";
		displayName = "RT-1523G (ASIP) Big [MARPAT Desert]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\FRXA_TFAR_Extra_Retextured_Equipment\data\clf_nicecomm2_MARPAT_Desert_co.paa"};
		model = "\task_force_radio_items\models\clf_nicecomm2";
	};
	
	class FRXA_tf_rt1523g_Black: FRXA_tf_rt1523g_UCP// Black, Small
	{
		author = "Raspu, Gandi, Nkey, freexavier(FRXA)";
		displayName = "RT-1523G (ASIP) [Black]";
		DLC = "FRXAs_TFAR_Extra_Retextured_Equipment_DLC";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\FRXA_TFAR_Extra_Retextured_Equipment\data\clf_prc117g_Black_co.paa"};
		model = "\task_force_radio_items\models\clf_prc117g_ap";
	};
	
	class FRXA_tf_rt1523g_big_Black: FRXA_tf_rt1523g_big_UCP //  Black, Big
	{
		author = "Raspu, Gandi, Nkey, freexavier(FRXA)";
		displayName = "RT-1523G (ASIP) Big [Black]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\FRXA_TFAR_Extra_Retextured_Equipment\data\clf_nicecomm2_Black_co.paa"};
		model = "\task_force_radio_items\models\clf_nicecomm2";
	};
	
	class FRXA_tf_rt1523g_M81: FRXA_tf_rt1523g_UCP// M81, Small
	{
		author = "Raspu, Gandi, Nkey, freexavier(FRXA)";
		displayName = "RT-1523G (ASIP) [M81]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\FRXA_TFAR_Extra_Retextured_Equipment\data\clf_prc117g_M81_co.paa"};
		model = "\task_force_radio_items\models\clf_prc117g_ap";
	};
	
	class FRXA_tf_rt1523g_big_M81: FRXA_tf_rt1523g_big_UCP //  M81, Big
	{
		author = "Raspu, Gandi, Nkey, freexavier(FRXA)";
		displayName = "RT-1523G (ASIP) Big [M81]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\FRXA_TFAR_Extra_Retextured_Equipment\data\clf_nicecomm2_M81_co.paa"};
		model = "\task_force_radio_items\models\clf_nicecomm2";
	};
	
	class FRXA_tf_rt1523g_Ranger_Green: FRXA_tf_rt1523g_UCP// Ranger Green, Small
	{
		author = "Raspu, Gandi, Nkey, freexavier(FRXA)";
		displayName = "RT-1523G (ASIP) [Ranger Green]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\FRXA_TFAR_Extra_Retextured_Equipment\data\clf_prc117g_Ranger_Green_co.paa"};
		model = "\task_force_radio_items\models\clf_prc117g_ap";
	};
	
	class FRXA_tf_rt1523g_big_Ranger_Green: FRXA_tf_rt1523g_big_UCP //  Ranger Green, Big
	{
		author = "Raspu, Gandi, Nkey, freexavier(FRXA)";
		displayName = "RT-1523G (ASIP) Big [Ranger Green]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\FRXA_TFAR_Extra_Retextured_Equipment\data\clf_nicecomm2_Ranger_Green_co.paa"};
		model = "\task_force_radio_items\models\clf_nicecomm2";
	};
};
