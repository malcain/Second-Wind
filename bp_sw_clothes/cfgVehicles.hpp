class cfgVehicles
{
	class Land;
	class Man: Land {
		class Eventhandlers;
	};
	class CAManBase: Man {};
    class SoldierWB: CAManBase {};
    class B_Soldier_base_F: SoldierWB {
	class EventHandlers;
    };
    class B_Soldier_02_f: B_Soldier_base_F {};
    class B_Soldier_03_f: B_Soldier_base_F {};
    class B_Soldier_04_f: B_Soldier_base_F {};
    class B_Soldier_recon_base: B_Soldier_base_F {};
    class B_Soldier_sniper_base_F: B_Soldier_base_F {};

	class B_Soldier_F: B_Soldier_base_F {};
    class B_soldier_LAT_F: B_Soldier_base_F {};
    class B_soldier_repair_F: B_Soldier_base_F {};
    class B_Soldier_TL_F: B_Soldier_03_f {};
    class B_medic_F: B_Soldier_02_f {};
    class B_soldier_M_F: B_Soldier_base_F {};
    class B_Soldier_GL_F: B_Soldier_base_F {};
    class B_Soldier_SL_F: B_Soldier_03_f {};
    class B_recon_TL_F: B_Soldier_recon_base {};
    class B_recon_M_F: B_Soldier_recon_base {};
    class B_recon_medic_F: B_Soldier_recon_base {};
    class B_recon_F: B_Soldier_recon_base {};
    class B_recon_JTAC_F: B_Soldier_recon_base {};
    class B_recon_LAT_F: B_Soldier_recon_base {};
    class B_recon_exp_F: B_Soldier_recon_base {};
    class B_soldier_AR_F: B_Soldier_02_f {};
    class B_Helipilot_F: B_Soldier_04_f {};
    class B_officer_F: B_Soldier_base_F {};
    class B_Soldier_lite_F: B_Soldier_03_f {};
    class B_soldier_AA_F: B_Soldier_base_F {};
    class B_crew_F: B_Soldier_03_f {};
	class B_spotter_F: B_Soldier_sniper_base_F {};
	class B_sniper_F: B_Soldier_sniper_base_F {};

	class Bag_Base;
	class B_supplyCrate_F;
	class B_Kitbag_rgr_Exp;
	class B_Kitbag_rgr;
    class B_Carryall_mcamo;
    class B_Carryall_cbr;
    class B_Kitbag_cbr;
    class B_AssaultPack_rgr;
    class B_AssaultPack_cbr;
	//#include "unit\units_skins.hpp"
	
	class BP_Bag_1: Bag_Base
    {
		displayName = "$STR_BP_Bag_1";
		author = "Sterben_TOP";
		picture = "\bp_sw\bp_sw_clothes\UI\BP_Bag_1.paa"; //ikona
        model = "\bp_sw\bp_sw_clothes\BP_Bag_1.p3d";
        maximumLoad = 320;
        mass = 60;
		scope = 2;
    };
	class BP_Bag_2: Bag_Base
    {
		displayName = "$STR_BP_Bag_2";
		author = "Sterben_TOP";
		picture = "\bp_sw\bp_sw_clothes\UI\BP_Bag_2.paa"; //ikona
        model = "\bp_sw\bp_sw_clothes\BP_Bag_2.p3d";
        maximumLoad = 320;
        mass = 60;
		scope = 2;
    };
};