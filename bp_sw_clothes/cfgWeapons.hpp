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