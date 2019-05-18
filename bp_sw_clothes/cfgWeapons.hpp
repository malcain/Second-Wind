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
};