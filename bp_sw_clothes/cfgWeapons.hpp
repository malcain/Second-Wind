class UniformSlotInfo;
class cfgWeapons {
	class ItemCore;
    class V_PlateCarrier1_rgr;
    class V_PlateCarrier2_rgr;
	class HeadGearItem;
    class UniformItem;
    class Uniform_Base;
    class U_B_CombatUniform_mcam;
    class U_B_CombatUniform_mcam_tshirt;
    class U_B_CombatUniform_mcam_vest;
	class VestItem;
	class BagItem;
	class H_HelmetB;
	class U_B_GhillieSuit;

    //#include "equip\headgear.hpp"
	//#include "unit\uniforms.hpp"

    class arifle_SPAR_03_blk_F;
    class acr_a3_arifle_SPAR_03_blk_F: arifle_SPAR_03_blk_F
    {
        class LinkedItems
        {
            class LinkedItemsOptic
            {
				slot = "CowsSlot";
				item = "optic_AMS";
            };
            class LinkedItemsAcc
            {
				slot = "PointerSlot";
				item = "acc_pointer_IR";
            };
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "bipod_01_F_blk";
			};
        };
    };
	
	//NVG slots
	class NVGoggles;
	class Outlaw_BandanaRED: NVGoggles
	{
		displayName = "Red Bandana";
		descriptionShort = "Outlaw";
		picture="\bp_sw\bp_sw_clothes\Facewear\UI\icon_Bandana_clean.paa";
		model = "bp_sw\bp_sw_clothes\Facewear\Shemagh_faceRed.p3d";
		modelOptics = "-";
		visionMode[] = {"Normal"};
		class ItemInfo
		{
			type = 616;
			hmdType = 16;
			uniformModel = "bp_sw\bp_sw_clothes\Facewear\Shemagh_faceRed.p3d";
			modelOff = "bp_sw\bp_sw_clothes\Facewear\Shemagh_faceRed.p3d";
			mass = 1;
		};
	};
	
	class HelmetBase: ItemCore
	{
		weaponPoolAvailable=1;
		scope=0;
		displayName="$STR_A3_H_HelmetB0";
		picture="\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\BLUFOR\Data\equip1_co.paa"
		};
		descriptionShort="$STR_A3_SP_NOARMOR";
		class ItemInfo: HeadgearItem
		{
			mass=0;
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			modelSides[]={3,1};
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=1;
				};
			};
		};
	};
class BP_Woolhat_blk: HelmetBase
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="BP_Woolhat_blk";
		scope=2;
		displayName="Woolhat black";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_beanie_CA.paa";
		model="\bp_sw\bp_sw_clothes\Headgear\headgear_beaniehat01.p3d";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\common\data\woolhat_black_co.paa"
		};
		allowedFacewear[]=
		{
			"",
			6,
			"G_Aviator",
			1,
			"G_Bandanna_aviator",
			1,
			"G_Bandanna_beast",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
		class ItemInfo: ItemInfo
		{
			mass=6;
			allowedSlots[]={801,901,701,605};
			uniformModel="\bp_sw\bp_sw_clothes\Headgear\headgear_beaniehat01";
			modelSides[]={6};
		};
	};
	class BP_Woolcap_brn: BP_Woolhat_blk
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="BP_Woolcap_brn";
		displayName="Woolhat brown";
		picture="\A3\Characters_F_Bootcamp\Data\UI\icon_H_Watchcap_cbr_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Bootcamp\Civil\Data\woolhat_brown_co.paa"
		};
		allowedFacewear[]=
		{
			"",
			6.5,
			"G_Aviator",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
	class BP_Woolcap_khk: BP_Woolhat_blk
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="BP_Woolcap_khk";
		displayName="Woolhat khaki";
		picture="\A3\Characters_F_Bootcamp\Data\UI\icon_H_Watchcap_khk_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Bootcamp\Civil\Data\woolhat_khk_co.paa"
		};
		allowedFacewear[]=
		{
			"",
			6.5,
			"G_Aviator",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
	class BP_Woolcap_grn: BP_Woolhat_blk
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="BP_Woolcap_grn";
		displayName="Woolhat green";
		picture="\A3\Characters_F_Bootcamp\Data\UI\icon_H_Watchcap_camo_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Bootcamp\Civil\Data\woolhat_green_co.paa"
		};
		allowedFacewear[]=
		{
			"",
			6,
			"G_Aviator",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
};

	class CfgGlasses
{
	class None;
	class BP_Facewear: None
	{
		identityTypes[]=
		{
			"NoGlasses",
			0,
			"G_NATO_default",
			0,
			"G_NATO_casual",
			0,
			"G_NATO_pilot",
			0,
			"G_NATO_recon",
			0,
			"G_NATO_SF",
			0,
			"G_NATO_sniper",
			0,
			"G_NATO_diver",
			0,
			"G_IRAN_default",
			0,
			"G_IRAN_diver",
			0,
			"G_GUERIL_default",
			0,
			"G_HAF_default",
			0,
			"G_CIVIL_female",
			0,
			"G_CIVIL_male",
			0
		};
	};
	class TightScarf_Tan: BP_Facewear
	{
		displayname="Tight Scarf";
		model="bp_sw\bp_sw_clothes\Facewear\NeckTight_Tan.p3d";
		descriptionShort = "Tight Scarf";
	};
};