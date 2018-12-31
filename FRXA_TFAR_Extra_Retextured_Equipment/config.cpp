class CfgMods
{
	class Mod_Base;
	class FRXAs_TFAR_Extra_Retextured_Equipment_DLC: Mod_Base
	{
		logo = "FRXA_TFAR_Extra_Retextured_Equipment\data\ui\FRXAs_TFAR_Extra_Retextured_Equipment_logo.paa";
	};
};

class CfgPatches
{
	class FRXA_TFAR_Extra_Retextured_Equipment
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"task_force_radio_items"};
		authors[] = {"freexavier","dedmen"};
	};
};

class CfgVehicles
{
	class tf_rt1523g;
	class tf_rt1523g_big;
	class FRXA_tf_rt1523g_UCP: tf_rt1523g
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "Raspu, Gandi, Nkey, freexavier(FRXA)";
		displayName = "RT-1523G (ASIP) [UCP]";
		DLC = "FRXAs_TFAR_Extra_Retextured_Equipment_DLC";
		hiddenSelectionsTextures[] = {"\FRXA_TFAR_Extra_Retextured_Equipment\data\clf_prc117g_UCP_co.paa"};
	};
	class FRXA_tf_rt1523g_big_UCP: tf_rt1523g_big
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "Raspu, Gandi, Nkey, freexavier(FRXA)";
		displayName = "RT-1523G (ASIP) Big [UCP]";
		DLC = "FRXAs_TFAR_Extra_Retextured_Equipment_DLC";
		hiddenSelectionsTextures[] = {"\FRXA_TFAR_Extra_Retextured_Equipment\data\clf_nicecomm2_UCP_co.paa"};
	};
	class FRXA_tf_rt1523g_CTRG: FRXA_tf_rt1523g_UCP
	{
		author = "Raspu, Gandi, Nkey, freexavier(FRXA)";
		displayName = "RT-1523G (ASIP) [CTRG]";
		hiddenSelectionsTextures[] = {"\FRXA_TFAR_Extra_Retextured_Equipment\data\clf_prc117g_CTRG_co.paa"};
	};
	class FRXA_tf_rt1523g_big_CTRG: FRXA_tf_rt1523g_big_UCP
	{
		author = "Raspu, Gandi, Nkey, freexavier(FRXA)";
		displayName = "RT-1523G (ASIP) Big [CTRG]";
		hiddenSelectionsTextures[] = {"\FRXA_TFAR_Extra_Retextured_Equipment\data\clf_nicecomm2_CTRG_co.paa"};
	};
	class FRXA_tf_rt1523g_CTRG_Green: FRXA_tf_rt1523g_UCP
	{
		author = "Raspu, Gandi, Nkey, freexavier(FRXA)";
		displayName = "RT-1523G (ASIP) [CTRG Green]";
		hiddenSelectionsTextures[] = {"\FRXA_TFAR_Extra_Retextured_Equipment\data\clf_prc117g_CTRG_Green_co.paa"};
	};
	class FRXA_tf_rt1523g_big_CTRG_Green: FRXA_tf_rt1523g_big_UCP
	{
		author = "Raspu, Gandi, Nkey, freexavier(FRXA)";
		displayName = "RT-1523G (ASIP) Big [CTRG Green]";
		hiddenSelectionsTextures[] = {"\FRXA_TFAR_Extra_Retextured_Equipment\data\clf_nicecomm2_CTRG_Green_co.paa"};
	};
	class FRXA_tf_rt1523g_MARPAT_Woodland: FRXA_tf_rt1523g_UCP
	{
		author = "Raspu, Gandi, Nkey, freexavier(FRXA)";
		displayName = "RT-1523G (ASIP) [MARPAT Woodland]";
		hiddenSelectionsTextures[] = {"\FRXA_TFAR_Extra_Retextured_Equipment\data\clf_prc117g_MARPAT_Woodland_co.paa"};
	};
	class FRXA_tf_rt1523g_big_MARPAT_Woodlaand: FRXA_tf_rt1523g_big_UCP
	{
		author = "Raspu, Gandi, Nkey, freexavier(FRXA)";
		displayName = "RT-1523G (ASIP) Big [MARPAT Woodland]";
		hiddenSelectionsTextures[] = {"\FRXA_TFAR_Extra_Retextured_Equipment\data\clf_nicecomm2_MARPAT_Woodland_co.paa"};
	};
	class FRXA_tf_rt1523g_MARPAT_Desert: FRXA_tf_rt1523g_UCP
	{
		author = "Raspu, Gandi, Nkey, freexavier(FRXA)";
		displayName = "RT-1523G (ASIP) [MARPAT Desert]";
		hiddenSelectionsTextures[] = {"\FRXA_TFAR_Extra_Retextured_Equipment\data\clf_prc117g_MARPAT_Desert_co.paa"};
	};
	class FRXA_tf_rt1523g_big_MARPAT_Desert: FRXA_tf_rt1523g_big_UCP
	{
		author = "Raspu, Gandi, Nkey, freexavier(FRXA)";
		displayName = "RT-1523G (ASIP) Big [MARPAT Desert]";
		hiddenSelectionsTextures[] = {"\FRXA_TFAR_Extra_Retextured_Equipment\data\clf_nicecomm2_MARPAT_Desert_co.paa"};
	};
	class FRXA_tf_rt1523g_Black: FRXA_tf_rt1523g_UCP
	{
		author = "Raspu, Gandi, Nkey, freexavier(FRXA)";
		displayName = "RT-1523G (ASIP) [Black]";
		hiddenSelectionsTextures[] = {"\FRXA_TFAR_Extra_Retextured_Equipment\data\clf_prc117g_Black_co.paa"};
	};
	class FRXA_tf_rt1523g_big_Black: FRXA_tf_rt1523g_big_UCP
	{
		author = "Raspu, Gandi, Nkey, freexavier(FRXA)";
		displayName = "RT-1523G (ASIP) Big [Black]";
		hiddenSelectionsTextures[] = {"\FRXA_TFAR_Extra_Retextured_Equipment\data\clf_nicecomm2_Black_co.paa"};
	};
	class FRXA_tf_rt1523g_M81: FRXA_tf_rt1523g_UCP
	{
		author = "Raspu, Gandi, Nkey, freexavier(FRXA)";
		displayName = "RT-1523G (ASIP) [M81]";
		hiddenSelectionsTextures[] = {"\FRXA_TFAR_Extra_Retextured_Equipment\data\clf_prc117g_M81_co.paa"};
	};
	class FRXA_tf_rt1523g_big_M81: FRXA_tf_rt1523g_big_UCP
	{
		author = "Raspu, Gandi, Nkey, freexavier(FRXA)";
		displayName = "RT-1523G (ASIP) Big [M81]";
		hiddenSelectionsTextures[] = {"\FRXA_TFAR_Extra_Retextured_Equipment\data\clf_nicecomm2_M81_co.paa"};
	};
	class FRXA_tf_rt1523g_Ranger_Green: FRXA_tf_rt1523g_UCP
	{
		author = "Raspu, Gandi, Nkey, freexavier(FRXA)";
		displayName = "RT-1523G (ASIP) [Ranger Green]";
		hiddenSelectionsTextures[] = {"\FRXA_TFAR_Extra_Retextured_Equipment\data\clf_prc117g_Ranger_Green_co.paa"};
	};
	class FRXA_tf_rt1523g_big_Ranger_Green: FRXA_tf_rt1523g_big_UCP
	{
		author = "Raspu, Gandi, Nkey, freexavier(FRXA)";
		displayName = "RT-1523G (ASIP) Big [Ranger Green]";
		hiddenSelectionsTextures[] = {"\FRXA_TFAR_Extra_Retextured_Equipment\data\clf_nicecomm2_Ranger_Green_co.paa"};
	};
};
