/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/

class SmallFire;
class Thing;
class UniformSlotInfo;
class WeaponCloudsMGun;
class ViewPilot;

class CfgVehicles 
{
	class Logic;
	class VirtualMan_F;
	
	class BP_Player_Unit: VirtualMan_F
	{
		scope=2;
		author= "Deathlyrage, Malcain";
		displayName="Breaking Point Player Unit";
		side=3;
		modelSides[]={3};
		faction="CIV_F";
		vehicleClass="Men";
		class EventHandlers
		{
			init = "";
			local = "";
		};
	};
	
	class BP_ServerLogic : Logic {
		displayName = "SERVER";
		
		class EventHandlers {
			init = "";
			local = "";
		};
	};
	
	class BP_PlayerLogic : Logic {
		displayName = "PLAYER";
		
		class EventHandlers {
			init = "";
			local = "";
		};
	};
	
	class BP_HeadlessClient : Logic {
		displayName = "Survivor";
		author = "Deathlyrage";
		
		class EventHandlers {
			init = "";
			local = "";
		};
	};
	
	//class BP_Stronghold : Thing
	//{
	//	scope = public;
	//	displayName = "Stronghold"; 
	//	model="\A3\Weapons_f\dummyweapon.p3d";
	//	vehicleClass = "Survival";
	//	author = "Breaking Point";
	//	destrType = "DestructNo";
	//	side = 0;
	//	accuracy = 5;
	//	armor = 150;
	//	cost = 0;
	//};
	
	class BP_Haven : Thing
	{
		scope = public;
		displayName = "Haven"; 
		model="\A3\Weapons_f\dummyweapon.p3d";
		vehicleClass = "Survival";
		author = "Breaking Point";
		destrType = "DestructNo";
		side = 0;
		accuracy = 5;
		armor = 150;
		cost = 0;
	};
	
	//Container supply custom
	
	class ContainerSupply;
	class Supply65: ContainerSupply
	{
		author="Malcain";
		_generalMacro="Supply65";
		maximumLoad=65;
	};
	
	//Dead Bodies
	//class Dead_base_F;
	class GroundWeaponHolder;
	class BP_DeadBody : GroundWeaponHolder 
	{
		scope = private;
		displayName = "Dead Body";
		model="\A3\Weapons_f\dummyweapon.p3d";
		forceSupply = false;
		maximumLoad = 1000;
		transportMaxMagazines = 400;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 6;
	};
	
	class BP_DeadBodyAI : BP_DeadBody  {};
	
	class BP_SkeletonRemains : BP_DeadBody 
	{
		scope = protected;
		model = "\A3\Structures_F\Civ\Dead\HumanSkeleton_F.p3d";
	};
	
	class BP_SkeletonRemainsAI : BP_DeadBodyAI
	{
		scope = protected;
		model = "\A3\Structures_F\Civ\Dead\HumanSkeleton_F.p3d";
	};
	
	class BP_SkeletonRemains1 : BP_DeadBody 
	{
		scope = protected;
		model = "\bp_sw\bp_sw_box\bp_Skeleton_1.p3d";
	};
	
	class BP_SkeletonRemains2 : BP_DeadBody 
	{
		scope = protected;
		model = "\bp_sw\bp_sw_box\bp_Skeleton_2.p3d";
	};
	
	class BP_SkeletonRemains3 : BP_DeadBody 
	{
		scope = protected;
		model = "\bp_sw\bp_sw_box\bp_Skeleton_3.p3d";
	};
	
	class BP_GraveForest : BP_DeadBody 
	{
		scope = protected;
		model = "\A3\Structures_F_EPB\Civ\Dead\Grave_forest_F.p3d";
	};
	
	class BP_GraveRocks : BP_DeadBody 
	{
		scope = protected;
		model = "\A3\Structures_F_EPB\Civ\Dead\Grave_rocks_F.p3d";
	};
	
	class BP_GraveDirt : BP_DeadBody 
	{
		scope = protected;
		model = "\A3\Structures_F_EPB\Civ\Dead\Grave_dirt_F.p3d";
	};
	
	class BP_GraveDirtAI : BP_DeadBodyAI
	{
		scope = protected;
		model = "\A3\Structures_F_EPB\Civ\Dead\Grave_dirt_F.p3d";
	};
	
	//Chinook
	class B_supplyCrate_F;
	class BP_CarePkg : B_supplyCrate_F
	{
		scope = protected;
		displayName = "Care Package";
        class TransportMagazines {};
        class TransportWeapons {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class B_Heli_Transport_03_unarmed_F;
	class BP_Chinook : B_Heli_Transport_03_unarmed_F {
		displayName = "Chinook";
	};
	
	//Fire Objects
	class test_EmptyObjectForFireBig;
	class BP_Fire : test_EmptyObjectForFireBig 
	{
		scope = protected;
		displayName = "Fire";
		class Eventhandlers {
			init = "(_this select 0) execVM '\breakingpoint_code\effects\fire.sqf';";
		};
	};
	
	class BP_SmallFire : BP_Fire 
	{
		scope = protected;
		displayName = "Small Fire";
		class Eventhandlers {
			init = "(_this select 0) execVM '\breakingpoint_code\effects\smallfire.sqf';";
		};
	};
	
	//Gore effects
	class BP_HeadGore : BP_Fire 
	{
		scope = protected;
		displayName = "Head Gore Effect";
		class Eventhandlers {
			init = "(_this select 0) execVM '\breakingpoint_code\effects\headGore.sqf';";
		};
	};
	
	//Smoke Objects
	class test_EmptyObjectForSmoke;
	class BP_Smoke : test_EmptyObjectForSmoke
	{
		displayName="Smoke";
		class Eventhandlers {
			init="(_this select 0) execVM '\breakingpoint_code\effects\smoke.sqf';";
		};
	};
	
	class BP_SmokeShell : BP_Smoke
	{
		scope = protected;
		displayName="Smoke Shell";
		class Eventhandlers {
			init="(_this select 0) execVM '\breakingpoint_code\effects\smokeshell.sqf';";
		};
	};
	
	class Land_Billboard_F;
	//class Land_Billboard_04_blank_F;
	//class FlagCarrier;
	class FlagPole_F;
	class BP_FlagPole: FlagPole_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\FlagPole_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="BP_FlagPole";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat"
		};
	};
	
	class BP_Sign : Land_Billboard_F
	{
		scope = public;
		displayName="Sign (Empty)";
		model="\A3\Structures_F\Civ\InfoBoards\Billboard_F.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"breakingpoint_ui\signs\sign.paa"};
	};
	
	class BP_Sign_Ranger : Land_Billboard_F
	{
		scope = public;
		displayName="Sign (Ranger)";
		model="\A3\Structures_F\Civ\InfoBoards\Billboard_F.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"breakingpoint_ui\signs\sign_ranger.paa"};
	};
	
	class BP_Sign_Nomad : Land_Billboard_F
	{
		scope = public;
		displayName="Sign (Nomad)";
		model="\A3\Structures_F\Civ\InfoBoards\Billboard_F.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"breakingpoint_ui\signs\sign_nomad.paa"};
	};
	class BP_Sign_Hunter : Land_Billboard_F
	{
		scope = public;
		displayName="Sign (Hunter)";
		model="\A3\Structures_F\Civ\InfoBoards\Billboard_F.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"breakingpoint_ui\signs\sign_hunter.paa"};
	};
	
	class BP_Sign_Outlaw : Land_Billboard_F
	{
		scope = public;
		displayName="Sign (Outlaw)";
		model="\A3\Structures_F\Civ\InfoBoards\Billboard_F.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"breakingpoint_ui\signs\sign_outlaw.paa"};
	};
	
	class BP_Sign_Survivalist : Land_Billboard_F
	{
		scope = public;
		displayName="Sign (Survivalist)";
		model="\A3\Structures_F\Civ\InfoBoards\Billboard_F.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"breakingpoint_ui\signs\sign_survivalist.paa"};
	};
	
	class BP_Sign_Scavenger : Land_Billboard_F
	{
		scope = public;
		displayName="Sign (Scavenger)";
		model="\A3\Structures_F\Civ\InfoBoards\Billboard_F.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"breakingpoint_ui\signs\sign_scavenger.paa"};
	};
	
	class ReammoBox;
	class BP_Bag_Base : ReammoBox
	{
        class TransportMagazines {};
        class TransportWeapons {};
        allowedSlots[]={901};
        class DestructionEffects {};
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[]={"\A3\weapons_f\ammoboxes\bags\data\backpack_small_co.paa"};
        scope=1;
        isbackpack=1;
        reversed=1;
        mapSize=2;
        vehicleClass="Backpacks";
        model="\A3\weapons_f\Ammoboxes\bags\Backpack_Small";
        displayName="Bag";
        picture="\A3\Weapons_F\Ammoboxes\Bags\data\ui\backpack_CA.paa";
        icon="iconBackpack";
        transportMaxWeapons=1;
        transportMaxMagazines=20;
        maximumLoad=0;
		class ItemInfo;
	};
	
	class BP_AssaultPack_Base: BP_Bag_Base {
		scope = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_compact_khk_co.paa"};
		allowedSlots[] = {};
		maximumLoad = 100;
		mass = 60;
	};
	
	
	class BP_Kitbag_Base: BP_Bag_Base {
		scope = 2;
		picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_rgr_co.paa"};
		allowedSlots[] = {};
		maximumLoad = 120;
		mass = 80;
	};
	
	class BP_FieldPack_Base: BP_Bag_Base {
		scope = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Gorod";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_gorod_cbr_co.paa"};
		allowedSlots[] = {};
		maximumLoad = 140;
		mass = 120;
	};
	
	class BP_Bergen_Base: BP_Bag_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_small_co.paa"};
		allowedSlots[] = {};
		maximumLoad = 170;
		mass = 140;
	};
	
	class BP_Carryall_Base: BP_Bag_Base {
		scope = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_khk_co.paa"};
		allowedSlots[] = {};
		maximumLoad = 230;
		mass = 180;
	};
	
	class BP_Coyote_Base: BP_Bag_Base {
		scope = 2;
		model = "\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\UAV_backpack_F.p3d";
		hiddenSelectionsTextures[] = {"\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\data\UAV_backpack_rgr_co.paa"};
		allowedSlots[] = {};
		maximumLoad = 300;
		mass = 260;
	};
	
	class BP_CampPack: BP_Bag_Base {
		scope = 2;
		picture = "\bp_sw\bp_sw_clothes\UI\BP_Bag_2.paa";
		model = "\bp_sw\bp_sw_clothes\BP_Bag_2.p3d";
		allowedSlots[] = {};
		maximumLoad = 130;
		mass = 110;
		displayName = "Camping Pack";
	};
	
	class BP_HCampPack: BP_Bag_Base {
		scope = 2;
		picture = "\bp_sw\bp_sw_clothes\UI\BP_Bag_1.paa";
		model = "\bp_sw\bp_sw_clothes\BP_Bag_1.p3d";
		allowedSlots[] = {};
		maximumLoad = 200;
		mass = 170;
		displayName = "Heavy Camping Pack";
	};
	
	class BP_HPack: BP_Bag_Base {
		scope = 2;
		model = "\breakingpoint_classes\models\BP_HPack.p3d";
		//hiddenSelectionsTextures[] = {"\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\data\UAV_backpack_rgr_co.paa"};
		allowedSlots[] = {};
		maximumLoad = 240;
		mass = 200;
		displayName = "Nomad Alice Pack";
	};
	
	class BP_MPack: BP_Bag_Base {
		scope = 2;
		model = "\breakingpoint_classes\models\BP_MPack.p3d";
		//hiddenSelectionsTextures[] = {"\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\data\UAV_backpack_rgr_co.paa"};
		allowedSlots[] = {};
		maximumLoad = 120;
		mass = 120;
		displayName = "Ranger Medic Pack";
	};
	
	class BP_RadioPack: BP_Bag_Base {
		scope = 2;
		model = "\breakingpoint_classes\models\BP_MPack.p3d";
		allowedSlots[] = {};
		maximumLoad = 200;
		mass = 160;
		displayName = "Outlaw Radio Pack";
	};
	
	class BP_SPack: BP_Bag_Base {
		scope = 2;
		model = "\breakingpoint_classes\models\BP_SPack.p3d";
		//hiddenSelectionsTextures[] = {"\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\data\UAV_backpack_rgr_co.paa"};
		allowedSlots[] = {};
		maximumLoad = 250;
		mass = 240;
		displayName = "Czech Survival Pack";
	};
	
	/*class BP_EPack: BP_Bag_Base {
		scope = 2;
		model = "\breakingpoint_classes\models\BP_EPack.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"breakingpoint\textures\backpack\tacticalvest_engineer_co.paa"};
		allowedSlots[] = {};
		maximumLoad = 300;
		mass = 300;
		displayName = "Engineer Utility Pack";
	};*/
	
	class BP_RPack: BP_Bag_Base {
		scope = 2;
		model = "\breakingpoint_classes\models\BP_RPack.p3d";
		//hiddenSelectionsTextures[] = {"\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\data\UAV_backpack_rgr_co.paa"};
		allowedSlots[] = {};
		maximumLoad = 150;
		mass = 90;
		displayName = "Outlaw Equipment Pack";
	};
	
	class BP_RPack2: BP_Bag_Base {
		scope = 2;
		model = "\breakingpoint_classes\models\BP_RPack2.p3d";
		//hiddenSelectionsTextures[] = {"\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\data\UAV_backpack_rgr_co.paa"};
		allowedSlots[] = {};
		maximumLoad = 180;
		mass = 120;
		displayName = "Outlaw Heavy Pack";
	};
	
	class BP_KPack: BP_Bag_Base {
		scope = 2;
		model = "\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
		//hiddenSelectionsTextures[] = {"\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\data\UAV_backpack_rgr_co.paa"};
		allowedSlots[] = {};
		maximumLoad = 240;
		mass = 120;
		displayName = "Kerry Pack";
	};

	class BP_AssaultPack_khk: BP_AssaultPack_Base {
		scope = 2;
		displayName = "Civilian Bag (Khaki)";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_compact_khk_co.paa"};
	};

	class BP_AssaultPack_dgtl: BP_AssaultPack_Base {
		scope = 2;
		displayName = "Civilian Bag (Digital)";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_compact_digi_co.paa"};
	};

	class BP_AssaultPack_rgr: BP_AssaultPack_Base {
		scope = 2;
		picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_rgr_ca.paa";
		displayName = "Civilian Bag (Green)";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_compact_rgr_co.paa"};
	};

	class BP_AssaultPack_sgg: BP_AssaultPack_Base {
		scope = 2;
		picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_sgg_ca.paa";
		displayName = "Civilian Bag (Sage)";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_compact_sgg_co.paa"};
	};

	class BP_AssaultPack_blk: BP_AssaultPack_Base {
		scope = 2;
		picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_blk_ca.paa";
		displayName = "Civilian Bag (Black)";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_compact_blk_co.paa"};
	};

	class BP_AssaultPack_cbr: BP_AssaultPack_Base {
		scope = 2;
		displayName = "Civilian Bag (Tan)";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_compact_cbr_co.paa"};
	};

	class BP_AssaultPack_mcamo: BP_AssaultPack_Base {
		scope = 2;
		displayName = "Civilian Bag (Camo)";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_compact_mcamo_co.paa"};
	};
	
	//ENVIRO AP
	
	class BP_AssaultPack_drt: BP_AssaultPack_Base {
		scope = 2;
		picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_sgg_ca.paa";
		displayName = "Civilian Bag (Dirt)";
		hiddenSelectionsTextures[] = {"\breakingpoint\textures\backpack\backpack_compact_drt_co.paa"};
	};

	class BP_AssaultPack_grs: BP_AssaultPack_Base {
		scope = 2;
		picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_blk_ca.paa";
		displayName = "Civilian Bag (Grass)";
		hiddenSelectionsTextures[] = {"\breakingpoint\textures\backpack\backpack_compact_grs_co.paa"};
	};

	class BP_AssaultPack_stn: BP_AssaultPack_Base {
		scope = 2;
		displayName = "Civilian Bag (Stone)";
		hiddenSelectionsTextures[] = {"\breakingpoint\textures\backpack\backpack_compact_stn_co.paa"};
	};

	class BP_AssaultPack_tre: BP_AssaultPack_Base {
		scope = 2;
		displayName = "Civilian Bag (Tree)";
		hiddenSelectionsTextures[] = {"\breakingpoint\textures\backpack\backpack_compact_tre_co.paa"};
	};
	
	class BP_AssaultPack_Worn: BP_AssaultPack_Base {
		scope = 2;
		displayName = "Civilian Bag (Worn)";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint\textures\backpack\rvg_assault.paa"};
	};
	
	//

	class BP_Kitbag_mcamo: BP_Kitbag_Base {
		scope = 2;
		picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_mcamo";
		displayName = "Sports Bag (Camo)";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_mcamo_co.paa"};
	};

	class BP_Kitbag_sgg: BP_Kitbag_Base {
		scope = 2;
		picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_sgg";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_sgg_co.paa"};
		displayName = "Sports Bag (Sage)";
	};

	class BP_Kitbag_cbr: BP_Kitbag_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_cbr_co.paa"};
		displayName = "Sports Bag (Tan)";
	};
	
	//ENVIRO KB
	
	class BP_Kitbag_drt: BP_Kitbag_Base {
		scope = 2;
		picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_mcamo";
		displayName = "Sports Bag (Dirt)";
		hiddenSelectionsTextures[] = {"\breakingpoint\textures\backpack\backpack_fast_drt_co.paa"};
	};

	class BP_Kitbag_grs: BP_Kitbag_Base {
		scope = 2;
		picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_sgg";
		hiddenSelectionsTextures[] = {"\breakingpoint\textures\backpack\backpack_fast_grs_co.paa"};
		displayName = "Sports Bag (Grass)";
	};

	class BP_Kitbag_stn: BP_Kitbag_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"\breakingpoint\textures\backpack\backpack_fast_stn_co.paa"};
		displayName = "Sports Bag (Stone)";
	};
	
	class BP_Kitbag_tre: BP_Kitbag_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"\breakingpoint\textures\backpack\backpack_fast_tre_co.paa"};
		displayName = "Sports Bag (Tree)";
	};
	
	//
	
	class BP_Bergen_sgg: BP_Bergen_Base {
		scope = 2;
		picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Small_khk.paa";
		displayName = "British Rucksack (Sage)";
	};

	class BP_Bergen_mcamo: BP_Bergen_Base {
		scope = 2;
		displayName = "British Rucksack (Camo)";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_small_mcamo_co.paa"};
	};

	class BP_Bergen_rgr: BP_Bergen_Base {
		scope = 2;
		displayName = "British Rucksack (Green)";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_small_rgr_co.paa"};
	};

	class BP_Bergen_blk: BP_Bergen_Base {
		scope = 2;
		displayName = "British Rucksack (Black)";
		picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_b_c_small_blk.paa";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_small_blk_co.paa"};
	};
	
	//ENVIRO BERG
	
	class BP_Bergen_drt: BP_Bergen_Base {
		scope = 2;
		picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Small_khk.paa";
		displayName = "British Rucksack (Dirt)";
		hiddenSelectionsTextures[] = {"\breakingpoint\textures\backpack\backpack_small_drt_co.paa"};
	};

	class BP_Bergen_grs: BP_Bergen_Base {
		scope = 2;
		displayName = "British Rucksack (Grass)";
		hiddenSelectionsTextures[] = {"\breakingpoint\textures\backpack\backpack_small_grs_co.paa"};
	};

	class BP_Bergen_stn: BP_Bergen_Base {
		scope = 2;
		displayName = "British Rucksack (Stone)";
		hiddenSelectionsTextures[] = {"\breakingpoint\textures\backpack\backpack_small_stn_co.paa"};
	};

	class BP_Bergen_tre: BP_Bergen_Base {
		scope = 2;
		displayName = "British Rucksack (Tree)";
		hiddenSelectionsTextures[] = {"\breakingpoint\textures\backpack\backpack_small_tre_co.paa"};
	};
	
	class BP_Bergen_Worn: BP_Bergen_Base
	{
		author="EO";
		scope=2;
		displayName = "British Rucksack (Worn)";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint\textures\backpack\rvg_tactical.paa"};
	};
	
	//Field pack

	class BP_FieldPack_blk: BP_FieldPack_Base {
		scope = 2;
		displayName = "Activity Rucksack (Black)";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_gorod_blk_co.paa"};
	};

	class BP_FieldPack_ocamo: BP_FieldPack_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_gorod_hex_co.paa"};
		displayName = "Activity Rucksack (Hex)";
	};

	class BP_FieldPack_oucamo: BP_FieldPack_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_gorod_oucamo_co.paa"};
		displayName = "Activity Rucksack (Urban)";
	};

	class BP_FieldPack_cbr: BP_FieldPack_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_gorod_cbr_co.paa"};
		displayName = "Activity Rucksack (Tan)";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Gorod_cbr_ca.paa";
	};
	
	class BP_FieldPack_Ranger: BP_FieldPack_Base {
		scope = 2;
		displayName = "Activity Rucksack (Ranger)";
		hiddenSelectionsTextures[] = {"\A3\Supplies_F_Enoch\bags\data\backpack_gorod_RUkhk_co.paa"};
	};
	
	//ENVIRO FP
	
	class BP_FieldPack_drt: BP_FieldPack_Base {
		scope = 2;
		displayName = "Activity Rucksack (Dirt)";
		hiddenSelectionsTextures[] = {"\breakingpoint\textures\backpack\backpack_gorod_drt_co.paa"};
	};

	class BP_FieldPack_grs: BP_FieldPack_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"\breakingpoint\textures\backpack\backpack_gorod_grs_co.paa"};
		displayName = "Activity Rucksack (Grass)";
	};

	class BP_FieldPack_stn: BP_FieldPack_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"\breakingpoint\textures\backpack\backpack_gorod_stn_co.paa"};
		displayName = "Activity Rucksack (Stone)";
	};

	class BP_FieldPack_tree: BP_FieldPack_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"\breakingpoint\textures\backpack\backpack_gorod_tre_co.paa"};
		displayName = "Activity Rucksack (Tree)";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Gorod_cbr_ca.paa";
	};
	
	//

	class BP_Carryall_ocamo: BP_Carryall_Base {
		scope = 2;
		displayName = "Survival Backpack (Hex)";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_hex.paa";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_hex_co.paa"};
	};

	class BP_Carryall_oucamo: BP_Carryall_Base {
		scope = 2;
		displayName = "Survival Backpack (Urban)";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_oucamo.paa";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_oucamo_co.paa"};
	};

	class BP_Carryall_mcamo: BP_Carryall_Base {
		scope = 2;
		displayName = "Survival Backpack (Camo)";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_mcamo.paa";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_mcamo_co.paa"};
	};
	
	class BP_Carryall_blk: BP_Carryall_Base {
		scope = 2;
		displayName = "Survival Backpack (Black)";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_hex.paa";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_blk_co.paa"};
	};
	
	//ENVIRO CA
	
	class BP_Carryall_drt: BP_Carryall_Base {
		scope = 2;
		displayName = "Survival Backpack (Dirt)";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_hex.paa";
		hiddenSelectionsTextures[] = {"\breakingpoint\textures\backpack\backpack_tortila_drt_co.paa"};
	};

	class BP_Carryall_grs: BP_Carryall_Base {
		scope = 2;
		displayName = "Survival Backpack (Grass)";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_oucamo.paa";
		hiddenSelectionsTextures[] = {"\breakingpoint\textures\backpack\backpack_tortila_grs_co.paa"};
	};

	class BP_Carryall_stn: BP_Carryall_Base {
		scope = 2;
		displayName = "Survival Backpack (Stone)";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_mcamo.paa";
		hiddenSelectionsTextures[] = {"\breakingpoint\textures\backpack\backpack_tortila_stn_co.paa"};
	};
	
	class BP_Carryall_tre: BP_Carryall_Base {
		scope = 2;
		displayName = "Survival Backpack (Tree)";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_hex.paa";
		hiddenSelectionsTextures[] = {"\breakingpoint\textures\backpack\backpack_tortila_tre_co.paa"};
	};
	
	//
	
	class BP_Coyote_rgr: BP_Coyote_Base {
		scope = 2;
		displayName = "Coyote Backpack (Drab)";
		model = "\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\UAV_backpack_F.p3d";
		picture = "\A3\Drones_F\Weapons_F_Gamma\ammoboxes\bags\data\ui\icon_B_C_UAV_rgr_ca";
		hiddenSelectionsTextures[] = {"\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\data\UAV_backpack_rgr_co.paa"};
		allowedSlots[] = {};
		maximumLoad = 390;
		mass = 120;
	};
	
	class BP_Coyote_oli: BP_Coyote_Base {
		scope = 2;
		displayName = "Coyote Backpack (Olive)";
		model = "\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\UAV_backpack_F.p3d";
		picture = "\A3\Drones_F\Weapons_F_Gamma\ammoboxes\bags\data\ui\icon_B_C_UAV_oli_ca";
		hiddenSelectionsTextures[] = {"\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\data\UAV_backpack_oli_co.paa"};
		allowedSlots[] = {};
		maximumLoad = 390;
		mass = 120;
	};
	
	class BP_Coyote_cbr: BP_Coyote_Base {
		scope = 2;
		displayName = "Coyote Backpack (Brown)";
		model = "\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\UAV_backpack_F.p3d";
		picture = "\A3\Drones_F\Weapons_F_Gamma\ammoboxes\bags\data\ui\icon_B_C_UAV_cbr_ca";
		hiddenSelectionsTextures[] = {"\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\data\UAV_backpack_cbr_co.paa"};
		allowedSlots[] = {};
		maximumLoad = 390;
		mass = 120;
	};
	
	// HERO/BANDIT PACKS
	
	class BP_Bergen_Hero: BP_Bergen_Base {
		scope = 2;
		displayName = "British Military Pack";
		picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_b_c_small_blk.paa";
		hiddenSelectionsTextures[] = {"\breakingpoint\textures\backpack\backpack_herobergen_co.paa"};
		maximumLoad = 170;
	};
	
	class BP_Carryall_Hero: BP_Carryall_Base {
		scope = 2;
		displayName = "Military Survival Pack";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_blk.paa";
		hiddenSelectionsTextures[] = {"\breakingpoint\textures\backpack\BP_backpack_tortila_blk_co.paa"};
		
		class ItemInfo: ItemInfo {
			passThrough = 0.900000;
		};
	};
	
	class BP_Carryall_Bandit: BP_Carryall_Base {
		scope = 2;
		displayName = "Survival pack (Scavenged)";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_cbr.paa";
		hiddenSelectionsTextures[] = {"\breakingpoint\textures\backpack\backpack_tortila_cbr_co.paa"}; 
	};
	
	class BP_Coyote_Bandit: BP_Coyote_Base {
		scope = 2;
		displayName = "Coyote pack (Scavenged)";
		model = "\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\UAV_backpack_F.p3d";
		hiddenSelectionsTextures[] = {"\breakingpoint\textures\backpack\backpack_coyote_bandit_co.paa"};
		allowedSlots[] = {};
		maximumLoad = 300;
		mass = 150;
	};

	class Wreck_base_F;
	class Land_Wreck_Transport_BP : Wreck_base_F
	{
		mapSize=23.97;
		author="Bohemia Interactive";
		scope=2;
		displayName="Blackfoot Wreck";
		model="\A3\air_f_heli\Heli_Transport_03\Heli_Transport_03_wreck_F.p3d";
		icon="iconObject_1x2";
		selectionDamage="DamT_1";
	};
	
	/*

	class BP_Heli_Attack_01 : Heli_Attack_01_base_F
	{
		author="Bohemia Interactive";
		_generalMacro="B_Heli_Attack_01_F";
		scope=2;
		side=1;
		faction="BLU_F";
		crew="B_Helipilot_F";
		typicalCargo[]={"B_pilot_F"};
		accuracy=5;
		displayName="AH-99 Blackfoot";
		
		availableForSupportTypes[]={"CAS_Heli"};
		cost=3e+006;
	};
	*/

	#include "CfgHavens.hpp"
	class BP_LootBox;
	class BP_CampfireBase : BP_LootBox
	{
		scope = private;
		displayName = "Camp Fire";
		author = "Breaking Point Mod";
		model = "\A3\Structures_F\Civ\Camping\Fireplace_F.p3d";
		icon = "iconObject_circle";
		vehicleClass = "Tents";
		destrType = "DestructNo";
		simulation = "fire";
		cost = 0;
		mapSize = 1.030000;
		ladders[] = {};
		transportMaxMagazines = 0; //2
        transportMaxWeapons = 0;
        transportMaxBackpacks = 0;
        
        //class TransportMagazines {
        //    class _xx_PartWoodPile {
        //        magazine = "PartWoodPile";
        //        count = "1";
        //    };
        //};
        
		class EventHandlers
		{
			init = "";
			local = "if (_this select 1) then { deleteVehicle (_this select 0); };";
		};
		
		class Effects: SmallFire 
		{
			class Light1 {
				simulation = "light";
				type = "SmallFireLight";
			};

			class sound {
				simulation = "sound";
				type = "Fire";
			};

			class Smoke1 {
				simulation = "particles";
				type = "SmallFireS";
			};

			class Fire1: Smoke1 {
				simulation = "particles";
				type = "SmallFireBP";
			};

			class Refract1 {
				simulation = "particles";
				type = "SmallFireFRefract";
			};
		};

	};

	class BP_LargeCampFire :  BP_CampfireBase 
	{
		scope = public;
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Campfire_F.jpg";
		model = "\A3\Structures_F\Civ\Camping\Campfire_F.p3d";
		
		class Effects: SmallFire 
		{
			class Light1 {
				simulation = "light";
				type = "SmallFireLight";
			};

			class sound {
				simulation = "sound";
				type = "Fire";
			};

			class Smoke1 {
				simulation = "particles";
				type = "SmallDestructionSmoke";
			};

			class Fire1: Smoke1 {
				simulation = "particles";
				//type = "MediumFireBP";
				type = "SmallFireBarrel";
			};

			class Refract1 {
				simulation = "particles";
				type = "Refract";
			};
		};
	};
	class BP_LargeCampFireEH :  BP_LargeCampFire 
	{
		scope = public;
		
		class EventHandlers
		{
			init = "_this spawn BP_fnc_igniteCampFire;";
			local = "if (_this select 1) then { deleteVehicle (_this select 0); };";
		};
	};
    class BP_SmallCampFire : BP_CampfireBase 
	{
		scope = public;
	};

	class Man
	{
		class Wounds {
			tex[] = {};
			mat[] = {};
		};
	};
	
	
	class CAManBase;
	class BP_Man : CAManBase
	{
		extCameraPosition[] = { 0.280000, -0.100000, -0.770000  };
		//extCameraParams[] = { 0.5, 10, 50, 0.5, 1, 10, 30, 0, 1 };
		class ViewPilot: ViewPilot
        {
            MinFov=0.45;//="tan(atan(0.75) / 1)";  def 0.25;
            MaxFov=0.80;//="tan(atan(0.75) / 1)";  def 1.25;
            InitFov=0.75;//="tan(atan(0.75) / 1)";  def 0.75;
        };
		class HitPoints 
		{
			class HitFace {
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.100000;
				radius = 0.080000;
				explosionShielding = 0.100000;
				minimalHit = 0.010000;
			};

			class HitNeck: HitFace {
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.100000;
				radius = 0.100000;
				explosionShielding = 0.500000;
				minimalHit = 0.010000;
			};

			class HitHead: HitNeck {
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.100000;
				radius = 0.200000;
				explosionShielding = 0.500000;
				minimalHit = 0.010000;
				depends = "HitFace max HitNeck";
			};

			class HitPelvis {
				armor = 1;
				material = -1;
				name = "pelvis";
				passThrough = 0.100000;
				radius = 0.200000;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.010000;
			};

			class HitAbdomen: HitPelvis {
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 0.100000;
				radius = 0.0250000;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.010000;
			};

			class HitDiaphragm: HitAbdomen {
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 0.100000;
				radius = 0.0250000;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.010000;
			};

			class HitChest: HitDiaphragm {
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 0.100000;
				radius = 0.050000;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};

			class HitBody: HitChest {
				armor = 1;
				material = -1;
				name = "body";
				passThrough = 0.100000;
				radius = 0.150000;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.010000;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};

			class HitArms {
				armor = 1;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.100000;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.010000;
			};

			class HitHands: HitArms {
				armor = 1;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.100000;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.010000;
				depends = "HitArms";
			};

			class HitLegs {
				armor = 1;
				material = -1;
				name = "legs";
				passThrough = 0.1;
				radius = 0.090000;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.010000;
			};
		};
		
		class SoundEquipment {
			soldier[] = {{"walk", {"A3\sounds_f\characters\movements\suit_run_01", 0.046234, 1, 30}}, {"walk", {"A3\sounds_f\characters\movements\suit_run_02", 0.046234, 1, 30}}, {"walk", {"A3\sounds_f\characters\movements\suit_run_03", 0.046234, 1, 30}}, {"walk", {"A3\sounds_f\characters\movements\suit_run_04", 0.046234, 1, 30}}, {"walk", {"A3\sounds_f\characters\movements\suit_run_05", 0.046234, 1, 30}}, {"walk", {"A3\sounds_f\characters\movements\suit_run_06", 0.046234, 1, 30}}, {"walk", {"A3\sounds_f\characters\movements\suit_run_07", 0.046234, 1, 30}}, {"walk", {"A3\sounds_f\characters\movements\suit_run_08", 0.046234, 1, 30}}, {"run", {"A3\sounds_f\characters\movements\suit_run_01", 0.053096, 1, 32}}, {"run", {"A3\sounds_f\characters\movements\suit_run_02", 0.053096, 1, 32}}, {"run", {"A3\sounds_f\characters\movements\suit_run_03", 0.053096, 1, 32}}, {"run", {"A3\sounds_f\characters\movements\suit_run_04", 0.053096, 1, 32}}, {"run", {"A3\sounds_f\characters\movements\suit_run_05", 0.053096, 1, 32}}, {"run", {"A3\sounds_f\characters\movements\suit_run_06", 0.053096, 1, 32}}, {"run", {"A3\sounds_f\characters\movements\suit_run_07", 0.053096, 1, 32}}, {"run", {"A3\sounds_f\characters\movements\suit_run_08", 0.053096, 1, 32}}, {"sprint", {"A3\sounds_f\characters\movements\suit_sprint_01", 0.090000, 1, 35}}, {"sprint", {"A3\sounds_f\characters\movements\suit_sprint_02", 0.090000, 1, 35}}, {"sprint", {"A3\sounds_f\characters\movements\suit_sprint_03", 0.090000, 1, 35}}, {"sprint", {"A3\sounds_f\characters\movements\suit_sprint_04", 0.090000, 1, 35}}, {"sprint", {"A3\sounds_f\characters\movements\suit_sprint_05", 0.090000, 1, 35}}, {"sprint", {"A3\sounds_f\characters\movements\suit_sprint_06", 0.090000, 1, 35}}, {"sprint", {"A3\sounds_f\characters\movements\suit_sprint_07", 0.090000, 1, 35}}, {"sprint", {"A3\sounds_f\characters\movements\suit_sprint_08", 0.090000, 1, 35}}};
			civilian[] = {{"walk", {"A3\sounds_f\characters\movements\suit_run_01", 0.046234, 1, 20}}, {"walk", {"A3\sounds_f\characters\movements\suit_run_02", 0.046234, 1, 20}}, {"walk", {"A3\sounds_f\characters\movements\suit_run_03", 0.046234, 1, 20}}, {"walk", {"A3\sounds_f\characters\movements\suit_run_04", 0.046234, 1, 20}}, {"walk", {"A3\sounds_f\characters\movements\suit_run_05", 0.046234, 1, 20}}, {"walk", {"A3\sounds_f\characters\movements\suit_run_06", 0.046234, 1, 20}}, {"walk", {"A3\sounds_f\characters\movements\suit_run_07", 0.046234, 1, 20}}, {"walk", {"A3\sounds_f\characters\movements\suit_run_08", 0.046234, 1, 20}}, {"run", {"A3\sounds_f\characters\movements\suit_run_01", 0.064433, 1, 30}}, {"run", {"A3\sounds_f\characters\movements\suit_run_02", 0.064433, 1, 30}}, {"run", {"A3\sounds_f\characters\movements\suit_run_03", 0.064433, 1, 30}}, {"run", {"A3\sounds_f\characters\movements\suit_run_04", 0.064433, 1, 30}}, {"run", {"A3\sounds_f\characters\movements\suit_run_05", 0.064433, 1, 30}}, {"run", {"A3\sounds_f\characters\movements\suit_run_06", 0.064433, 1, 30}}, {"run", {"A3\sounds_f\characters\movements\suit_run_07", 0.064433, 1, 30}}, {"run", {"A3\sounds_f\characters\movements\suit_run_08", 0.064433, 1, 30}}, {"sprint", {"A3\sounds_f\characters\movements\suit_sprint_01", 0.090000, 1, 40}}, {"sprint", {"A3\sounds_f\characters\movements\suit_sprint_02", 0.090000, 1, 40}}, {"sprint", {"A3\sounds_f\characters\movements\suit_sprint_03", 0.090000, 1, 40}}, {"sprint", {"A3\sounds_f\characters\movements\suit_sprint_04", 0.090000, 1, 40}}, {"sprint", {"A3\sounds_f\characters\movements\suit_sprint_05", 0.090000, 1, 40}}, {"sprint", {"A3\sounds_f\characters\movements\suit_sprint_06", 0.090000, 1, 40}}, {"sprint", {"A3\sounds_f\characters\movements\suit_sprint_07", 0.090000, 1, 40}}, {"sprint", {"A3\sounds_f\characters\movements\suit_sprint_08", 0.090000, 1, 40}}};
		};

		weapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		sensitivity = 10;
		sensitivityEar = 5;
		accuracy = 0.2;
		camouflage = 8;
		threat[] = {1, 0.100000, 0.100000};
	};
	
	class BP_Player : BP_Man
	{
		backpack = "";
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		Items[] = {};
		respawnItems[] = {};
		linkedItems[] = {};
		respawnlinkedItems[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 0;
		class SpeechVariants {

			class Default {
				speechSingular[] = {""};
				speechPlural[] = {""};
			};
		};
		textSingular = "";
		textPlural = "";
		nameSound = "";
	};
	/*class BP_Ranger1 : BP_Player
	{
		class HitPoints 
		{
			class HitPelvis {
				armor = 1;
				material = -1;
				name = "pelvis";
				passThrough = 0.100000;
				radius = 0.200000;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.010000;
			};
			
			class HitAbdomen: HitPelvis {
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 0.100000;
				radius = 0.0250000;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.010000;
			};

			class HitDiaphragm: HitAbdomen {
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 0.100000;
				radius = 0.0250000;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.010000;
			};

			class HitChest: HitDiaphragm {
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 0.100000;
				radius = 0.050000;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
		};
	};
	
	class BP_Ranger2 : BP_Player
	{
		class HitPoints 
		{
			class HitAbdomen: HitPelvis {
				armor = 2;
				material = -1;
				name = "spine1";
				passThrough = 0.10000;
				radius = 0.0250000;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.1;
			};

			class HitDiaphragm: HitAbdomen {
				armor = 2;
				material = -1;
				name = "spine2";
				passThrough = 0.10000;
				radius = 0.0250000;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.1;
			};

			class HitChest: HitDiaphragm {
				armor = 2;
				material = -1;
				name = "spine3";
				passThrough = 0.10000;
				radius = 0.050000;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.1;
			};

			class HitBody: HitChest {
				armor = 2;
				material = -1;
				name = "body";
				passThrough = 0.10000;
				radius = 0.150000;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.1;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};

			class HitLegs {
				armor = 1;
				material = -1;
				name = "legs";
				passThrough = 0.1;
				radius = 0.090000;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.010000;
			};
		};
	};
	
	class BP_Ranger3 : BP_Player
	{
		class HitPoints 
		{
			class HitAbdomen: HitPelvis {
				armor = 2;
				material = -1;
				name = "spine1";
				passThrough = 0.10000;
				radius = 0.0250000;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.1;
			};

			class HitDiaphragm: HitAbdomen {
				armor = 2;
				material = -1;
				name = "spine2";
				passThrough = 0.10000;
				radius = 0.0250000;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.1;
			};

			class HitChest: HitDiaphragm {
				armor = 2;
				material = -1;
				name = "spine3";
				passThrough = 0.10000;
				radius = 0.050000;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.1;
			};

			class HitBody: HitChest {
				armor = 2;
				material = -1;
				name = "body";
				passThrough = 0.10000;
				radius = 0.150000;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.1;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};

			class HitLegs {
				armor = 1;
				material = -1;
				name = "legs";
				passThrough = 0.1;
				radius = 0.090000;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.010000;
			};
		};
	};
	
	class BP_Ranger4 : BP_Player
	{
		class HitPoints 
		{
			class HitPelvis {
				armor = 2;
				material = -1;
				name = "pelvis";
				passThrough = 0.080000;
				radius = 0.200000;
				explosionShielding = 2;
				visual = "injury_body";
				minimalHit = 0.04;
				depends="0";
			};

			class HitAbdomen: HitPelvis {
				armor = 3;
				material = -1;
				name = "spine1";
				passThrough = 0.080000;
				radius = 0.0250000;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.1;
			};

			class HitDiaphragm: HitAbdomen {
				armor = 3;
				material = -1;
				name = "spine2";
				passThrough = 0.080000;
				radius = 0.0250000;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.1;
			};

			class HitChest: HitDiaphragm {
				armor = 3;
				material = -1;
				name = "spine3";
				passThrough = 0.080000;
				radius = 0.050000;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.1;
			};

			class HitBody: HitChest {
				armor = 3;
				material = -1;
				name = "body";
				passThrough = 0.080000;
				radius = 0.150000;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.1;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};

			class HitLegs {
				armor = 2;
				material = -1;
				name = "legs";
				passThrough = 0.08;
				radius = 0.090000;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.020000;
			};
		};
	};*/
	
	// Dogs
	
	
	class Animal;
	class BP_Animal : Man { //Change this from Animal -> Man to fix Arma bullshit, however it creates more config problems then it's worth.
		class Wounds;	// External class reference
	};
	
	class BP_Animal_Base : BP_Animal {
		afMax = 30;
		mfMax = 0;
		mFact = 1;
		tBody = 37;
		side = TCivilian;
		boneHead = "head";
		bonePrimaryWeapon = "head";
		icon = "iconAnimal";
		agentTasks[] = {"AnimalMainTask"};
		moves = "CfgMovesAnimal";
		memoryPointHeadAxis = "head_axis";
		woman = false;
		//faceType = "Default";
		boneLEye = "l_eye";
		boneREye = "r_eye";
		boneLEyelidUp = "eye_upl";
		boneREyelidUp = "eye_upr";
		boneLEyelidDown = "eye_lwl";
		boneREyelidDown = "eye_lwr";
		boneLPupil = "l_pupila";
		boneRPupil = "r_pupila";
		memoryPointAim = "aimPoint";
		memoryPointCameraTarget = "camera";
		
		simulation = "animal";
		features = "";
		isFish = false;
		
		//faceType = "Man_A3";
		
		class Wounds : Wounds {
			tex[] = {};
			mat[] = {};
		};
		
		class VariablesScalar {
			_threatMaxRadius = 50;
			_runDistanceMax = 100;
			_movePrefer = 0.7;
			_formationPrefer = 0.1;
			_scareLimit = 0.2;
			_dangerLimit = 1.0;
		};
		
		class VariablesString {
			_expSafe = "(0.5 * meadow) * (0.5 *  trees) * (1 - forest) * (1 - houses) * (1 - sea)";
			_expDanger = "(trees) * (forest) * (1 - meadow) * (1 - sea)";
		};
	};
	
	
	//class Animal; // External class reference
	class Animal_Base_F; // External class reference
	class BP_Animal_Hunt : Animal_Base_F {};
	//class Dog_Base_F; // External class reference

	class BP_Dog : BP_Animal_Base //Man
	{
		scope = private;
		
		hasGeometry = 1;
		moves = "CfgMovesDog_BP";
		
		agentTasks[] = {};
		extCameraPosition[] = {0,0.5,-2.5};
		
		side = 1;
		
		/*
		class VariablesScalar {
			_threatMaxRadius = 25;
			_runDistanceMax = 50;
			_movePrefer = 0.4;
			_formationPrefer = 0.1;
			_scareLimit = 0.1;
			_dangerLimit = 10.0;
			_walkSpeed = 3.35;
		};
		
		class VariablesString {
			_expSafe = "houses * (1 - forest) * (1 - trees) * (1 - sea)";
			_expDanger = "houses * (1 - forest) * (1 - meadow) * (1 - sea)";
		};
		
		hasGeometry = 1;
		moves = "CfgMovesDog_BP";

		//faceType = "";
		//identityTypes[] = {};
		
		
		triggerAnim = "";
		agentTasks[] = {};
		accuracy = 0.25;
		
		//Formation
		fsmFormation = "";
		fsmDanger = "";
        formationX = 1;
        formationZ = 1;
        precision = 1;
		
		glassesEnabled = 0;
		canHideBodies = 0;
		canDeactivateMines = 0;
		hideUnitInfo = 1;
		enableGPS = 0;
		isMan = false;
		weapons[] = {};
		magazines[] = {};
		respawnWeapons[] = {};
		respawnMagazines[] = {};
		Items[] = {};
		respawnItems[] = {};
		linkedItems[] = {};
		respawnlinkedItems[] = {};
		sensitivity = 4;	// sensor sensitivity
		sensitivityEar = 2;
		
		//Remove Dogs Making Normal Human Sounds on These Effects
        class SoundEquipment {
			civilian[]={};
			soldier[]={};
		};
        class SoundGear {
			primary[]={};
			secondary[]={};
		};
        class SoundBreath {
			breath[]={};
		};
        class SoundDrown {
			breath[]={};
        };
        class SoundInjured {
			breath[]={};
        };
        class SoundBleeding {
			breath[]={};
        };
        class SoundBurning {
			breath[]={};
        };
        class SoundChoke {
			breath[]={};
        };
        class SoundRecovered {
			breath[]={};
        };
		
		*/
	
		class EventHandlers
		{
			init = "_this call BP_fnc_dogInit;";
			local = "_this call BP_fnc_dogLocal;";
			//handledamage = "_this call BP_fnc_dogHandleDamage;";
			killed = "_this call BP_fnc_dogKilled;";
		};
		
		class VariablesScalar {};
		class VariablesString {};
		
		baseClass = "BP_Dog";
	};

	class BP_Dog_Alsatian_Base : BP_Dog {
		scope = private;
		displayName = "$STR_A3_CfgVehicles_Alsatian_Base_F0";
		model = "\A3\animals_f_beta\dog\Pastor_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\animals_f_beta\dog\data\pastor_sand_co.paa"};
	};
	
	class BP_Dog_Fin_Base : BP_Dog {
		scope = private;
		displayName = "$STR_A3_CfgVehicles_Fin_Base_F0";
		model = "\A3\animals_f_beta\dog\Fin_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\animals_f_beta\dog\data\dog_yellow_co.paa"};
	};
	
	//Fin - Sand
	class BP_Dog_1 : BP_Dog_Fin_Base {
		scope = public;
		displayName = "$STR_A3_CfgVehicles_Fin_sand_F0";
	};
	
	//Fin - Black and White
	class BP_Dog_2 : BP_Dog_Fin_Base {
		scope = public;
		displayName = "$STR_A3_CfgVehicles_Fin_blackwhite_F0";
		hiddenSelectionsTextures[] = {"\A3\animals_f_beta\dog\data\Dog_black_white_co.paa"};
	};
	
	//Fin - Ocherwhite
	class BP_Dog_3 : BP_Dog_Fin_Base {
		scope = public;
		displayName = "$STR_A3_CfgVehicles_Fin_ocherwhite_F0";
		hiddenSelectionsTextures[] = {"\A3\animals_f_beta\dog\data\Dog_white_ocher_CO.paa"};
	};
	
	//Fin - tricolour
	class BP_Dog_4 : BP_Dog_Fin_Base {
		scope = public;
		displayName = "$STR_A3_CfgVehicles_Fin_tricolour_F0";
		hiddenSelectionsTextures[] = {"\A3\animals_f_beta\dog\data\Dog_tricolor_CO.paa"};
	};
	
	// Alsatian - Sand
	class BP_Dog_5 : BP_Dog_Alsatian_Base {
		scope = public;
		displayName = "$STR_A3_CfgVehicles_Alsatian_Sand_F0";
	};
	
	//Alsatian - Black
	class BP_Dog_6 : BP_Dog_Alsatian_Base {
		scope = public;
		displayName = "$STR_A3_CfgVehicles_Alsatian_Black_F0";
		hiddenSelectionsTextures[] = {"\A3\animals_f_beta\dog\data\pastor_black_co.paa"};
	};
	
	//Alsatian - Sandblack
	class BP_Dog_7 : BP_Dog_Alsatian_Base {
		scope = public;
		displayName = "$STR_A3_CfgVehicles_Alsatian_Sandblack_F0";
		hiddenSelectionsTextures[] = {"\A3\animals_f_beta\dog\data\pastor_co.paa"};
	};
	
	//Faction Specific Dogs

	//Alsatian - Sandblack
	class BP_Dog_Ranger : BP_Dog_Alsatian_Base {
		scope = public;
		displayName = "Ranger Dog";
		baseClass = "BP_Dog_Ranger";
	};
	
	class BP_Dog_Nomad : BP_Dog_Alsatian_Base {
		scope = public;
		displayName = "Nomad Dog";
		baseClass = "BP_Dog_Nomad";
	};
	
	class BP_Dog_Hunter : BP_Dog_Alsatian_Base {
		scope = public;
		displayName = "Hunter Dog";
		baseClass = "BP_Dog_Hunter";
	};
	
	class BP_Dog_Outlaw : BP_Dog_Alsatian_Base {
		scope = public;
		displayName = "Outlaw Dog";
		baseClass = "BP_Dog_Outlaw";
	};
	
	class BP_Dog_Survivalist : BP_Dog_Alsatian_Base {
		scope = public;
		displayName = "Survivalist Dog";
		baseClass = "BP_Dog_Survivalist";
	};

	/* Breaking Point : Custom Event Handlers */
	class BP_DefaultEventHandlers
	{
		scope = protected;
		init = "";
		killed = "";
		handledamage = "";
		getin = "";
		getout = "";
		fired = "";
		take = "";
		put = "";
	};
	
	class BP_VehicleEventHandlers : BP_DefaultEventHandlers
	{
		scope = protected;
		init = "_this call BP_fnc_vehicleInit;";
		killed = "_this call BP_fnc_vehicleKilled;";
		handledamage = "_this call BP_fnc_damageHandlerVehicle;";
		getin = "_this call BP_fnc_vehicleInteract;";
		getout = "_this call BP_fnc_vehicleInteract;";
	};

	class BP_PlayerEventHandlers : BP_DefaultEventHandlers 
	{
		scope = protected;
		//init = "if (isServer) then { _this call BP_fnc_onPlayerRespawn; };";
		//killed = "if (isServer) then { _this call BP_fnc_onPlayerKilled; };";
	};

	class BP_AnimalEventHandlers : BP_DefaultEventHandlers
	{
		scope = protected;
	};

	// Dynamic Heli Crashes :)
	
	//class Land_Wreck_Heli_Attack_01_F;
	//class Land_Wreck_Heli_Attack_BP : Land_Wreck_Heli_Attack_01_F
	//{
	//	class EventHandlers
	//	{
	//		init = "(_this select 0) execVM '\breakingpoint_code\effects\fire.sqf';";
	//	};
	//};
	
	
	/*
	
	class Helicopter_Base_F {
		class HitPoints {
			class HitHull;	// External class reference
			class HitHRotor;	// External class reference
			class HitGlass1;	// External class reference
			class HitGlass2;	// External class reference
			class HitGlass3;	// External class reference
			class HitGlass4;	// External class reference
		};

		class AnimationSources;	// External class reference
		class Eventhandlers;	// External class reference
		class ViewOptics;	// External class reference
	};
	
	
	class Heli_Attack_01_base_F {
		class Eventhandlers;
	};
	
	class BP_Helicrash_1 : Heli_Attack_01_base_F {
		author = "Deathlyrage";
		_generalMacro = "B_Heli_Attack_01_F";
		scope = protected;
		side = TWest;
		faction = BLU_F;
		crew = "B_Helipilot_F";
		typicalCargo[] = {"B_pilot_F"};
		accuracy = 5;	// accuracy needed to recognize type of this target
		displayName = "$STR_A3_CfgVehicles_B_Heli_Attack_01";
		
		class Library { libTextDesc = "$STR_A3_Heli_Attack_01_lib"; };
		availableForSupportTypes[] = {"CAS_Heli"};
		cost = 3000000;
	
		class Eventhandlers : Eventhandlers {
			local = "_this call BP_fnc_onLocalHelicrash;";
		};
	};
	*/
	
	/*
	
	class BP_Stronghold_AI: BP_Man 
	{
		scope = 2;
		displayName = "Stronghold AI";
		side = 0;
		backpack = "";
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		Items[] = {};
		linkedItems[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		respawnItems[] = {};
		respawnlinkedItems[] = {};
	
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 0;
		class SpeechVariants {
			class Default {
				speechSingular[] = {""};
				speechPlural[] = {""};
			};
		};
		textSingular = "";
		textPlural = "";
		nameSound = "";
		
		class HitPoints: HitPoints 
		{

			class HitHead: HitHead {
				armor = "0.3*2.5";
				passThrough = 1;
			};

			class HitBody: HitBody {
				armor = "0.8*10";
				passThrough = 0.720000;
				minimalHit = 0.1;
			};

			class HitHands: HitHands {
				armor = "0.8*5";
				passThrough = 0.500000;
			};

			class HitLegs: HitLegs {
				armor = "0.8*5";
				passThrough = 0.300000;
			};
		};	
	};
	
	class BP_Stronghold_AI_Ranger: BP_Stronghold_AI
	{
		displayName = "Ranger";
		backpack = "BP_Mpack";
	};
	
	class BP_Stronghold_AI_Ranger_F: BP_Stronghold_AI_Ranger {};
	
	// Stronghold - Rangers
	class BP_Ranger_Assault1: BP_Stronghold_AI_Ranger 
	{
		uniformClass = "BP_Guardian_3";
		model = "\breakingpoint_classes\models\BP_Guardian3.p3d";
	};
	*/

	class BP_Chicken: Animal_Base_F 
	{
		scope = 2;
		displayName = "Chicken";
		model = "\A3\animals_f_beta\chicken\Cock_F.p3d";
		moves = "CfgMovesCock_F";
		baseClass = "BP_Chicken";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\animals_f_beta\Chicken\data\brown_rooster_CO.paa"};
		
		class EventHandlers : BP_AnimalEventHandlers {};

		class Wounds {
			tex[] = {};
			mat[] = {};
		};
		
		class VariablesScalar {
			_threatMaxRadius = 5;
			_runDistanceMax = 30;
			_movePrefer = 0.8;
			_formationPrefer = 0.5;
			_scareLimit = 0.2;
			_dangerLimit = 1.0;
		};
		
		class VariablesString {
			_expSafe = "(1 - trees) * (1 - forest) * (houses) * (1 - sea)";
			_expDanger = "(1 - trees) * (1 - forest) * (houses) * (1 - sea)";
		};
	};

	class BP_Chicken_1: BP_Chicken {
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\animals_f_beta\Chicken\data\brown_rooster_CO.paa"};
	};

	class BP_Chicken_2: BP_Chicken {
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\animals_f_beta\Chicken\data\white_rooster_CO.paa"};
	};

	class BP_Rabbit: Animal_Base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Rabbit_F.jpg";
		_generalMacro="Rabbit_F";
		scope=2;
		displayName="$STR_A3_CfgVehicles_Rabbit_F0";
		model="\A3\Animals_F\rabbit\rabbit_F.p3d";
		side=3;
		moves="CfgMovesRabbit_F";
		fsmFormation="";
		fsmDanger="";
		maxTurnAngularVelocity=30;
		costTurnCoef=9.9999997e-006;
		canBleed=0;
		boneHead="head";
		bonePrimaryWeapon="head";
		weaponBone="head";
		triggerAnim="";
		class VariablesScalar
		{
			_threatMaxRadius=20;
			_runDistanceMax=50;
			_movePrefer=0.69999999;
			_formationPrefer=0.2;
			_scareLimit=0.2;
			_dangerLimit=1;
			_walkSpeed=0.89999998;
		};
		class VariablesString
		{
			_expSafe="(0.5 * meadow) * (0.5 *  trees) * (1 - forest) * (1 - houses) * (1 - sea)";
			_expDanger="(trees) * (forest) * (1 - meadow) * (1 - houses) * (1 - sea)";
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"A3\Animals_F\Rabbit\data\Rabbit.rvmat",
				"A3\Animals_F\Rabbit\data\W1_Rabbit.rvmat",
				"A3\Animals_F\Rabbit\data\W2_Rabbit.rvmat"
			};
		};
	};
	
	class BP_Sheep : Animal_Base_F {
		scope = 2;
		displayName = "Sheep";
		model = "\A3\animals_f_beta\Sheep\Sheep_F.p3d";
		hasGeometry = 1;
		moves = "CfgMovesSheep_F";
		baseClass = "BP_Sheep";
		
		class Wounds {
			tex[] = {};
			mat[] = {"A3\animals_f_beta\sheep\data\sheep.rvmat", "A3\animals_f_beta\sheep\data\W1_sheep.rvmat", "A3\animals_f_beta\sheep\data\W2_sheep.rvmat"};
		};

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\animals_f_beta\Sheep\data\white_sheep_co.paa"};
		
		class EventHandlers : BP_AnimalEventHandlers {};
		
		class VariablesScalar {
			_threatMaxRadius = 10;
			_runDistanceMax = 25;
			_movePrefer = 0.7;
			_formationPrefer = 0.7;
			_scareLimit = 0.2;
			_dangerLimit = 12.0;
		};
		
		class VariablesString {
			_expSafe = "(0.5 * meadow) * (0.5 *  houses) * (1 - forest) * (1 - trees) * (1 - sea)";
			_expDanger = "(0.5 * meadow) * (0.5 *  houses) * (1 - forest) * (1 - trees) * (1 - sea)";
		};
	};
	
	class BP_Sheep_1 : BP_Sheep {
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\animals_f_beta\Sheep\data\white_sheep_co.paa"};
	};
	
	class BP_Sheep_2 : BP_Sheep {
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\animals_f_beta\Sheep\data\blackwhite_sheep_co.paa"};
	};

	class BP_Sheep_3 : BP_Sheep {
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\animals_f_beta\Sheep\data\brown_sheep_co.paa"};
	};

	class BP_Sheep_4 : BP_Sheep {
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\animals_f_beta\Sheep\data\tricolor_sheep_co.paa"};
	};

	//External Class References
	class C_man_polo_1_F;
	class Underwear_F;
	
	class BP_Underwear : Underwear_F
	{
		uniformClass = "BP_BasicBody";
		
		class HitPoints
		{
			class HitFace {
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.100000;
				radius = 0.080000;
				explosionShielding = 0.100000;
				minimalHit = 0.010000;
			};

			class HitNeck: HitFace {
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.100000;
				radius = 0.100000;
				explosionShielding = 0.500000;
				minimalHit = 0.010000;
			};

			class HitHead: HitNeck {
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.100000;
				radius = 0.200000;
				explosionShielding = 0.500000;
				minimalHit = 0.010000;
				depends = "HitFace max HitNeck";
			};

			class HitPelvis {
				armor = 1;
				material = -1;
				name = "pelvis";
				passThrough = 0.100000;
				radius = 0.200000;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.010000;
			};

			class HitAbdomen: HitPelvis {
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 0.100000;
				radius = 0.0250000;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.010000;
			};

			class HitDiaphragm: HitAbdomen {
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 0.100000;
				radius = 0.0250000;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.010000;
			};

			class HitChest: HitDiaphragm {
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 0.100000;
				radius = 0.050000;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};

			class HitBody {
				armor = 1;
				material = -1;
				name = "body";
				passThrough = 0.100000;
				radius = 0.150000;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.010000;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};

			class HitArms {
				armor = 1;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.100000;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.010000;
			};

			class HitHands: HitArms {
				armor = 1;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.100000;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.010000;
				depends = "HitArms";
			};

			class HitLegs {
				armor = 1;
				material = -1;
				name = "legs";
				passThrough = 0.1;
				radius = 0.090000;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.010000;
			};
		};
	};
	
	//Base Class (Not Used In-Game)
	class C_man_polo_BP : C_man_polo_1_F 
	{
		displayName = "Survivor";
		uniformClass = "BP_Poloshirt_blue";
		nakedUniform = "BP_BasicBody";
		side = 3;
		backpack = "";
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		Items[] = {};
		respawnItems[] = {};
		linkedItems[] = {};
		respawnlinkedItems[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 0;
		class EventHandlers : BP_PlayerEventHandlers {};
	};

	class BP_Guarilla_Faded: BP_Player
	{
		scope = 2;
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla3_1.p3d";
		side = 3;
		uniformClass = "BP_Guarilla_Faded";
		identityTypes[] = {};
		class EventHandlers : BP_PlayerEventHandlers {};
	};
	
	class BP_Guarilla_Faded_Z: BP_Guarilla_Faded 
	{
		scope = 2;
		uniformClass = "BP_Guarilla_Faded_Z";
		moves = "CfgMovesZombieSdr";
		canHideBodies = 0;
	};
	
	class BP_Guarilla_Khaki: BP_Player
	{
		scope = 2;
		model = "\A3\Characters_F_Bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
		side = 3;
		uniformClass = "BP_Guarilla_Khaki";
		identityTypes[] = {};
		class EventHandlers : BP_PlayerEventHandlers {};
	};
	
	class BP_Guarilla_Khaki_Z: BP_Guarilla_Khaki 
	{
		scope = 2;
		uniformClass = "BP_Guarilla_Khaki_Z";
		moves = "CfgMovesZombieSdr";
		canHideBodies = 0;
	};
	
	class BP_Guarilla_Leader: BP_Player
	{
		scope = 2;
		model = "\A3\characters_F_gamma\Guerrilla\ig_leader.p3d";
		side = 3;
		uniformClass = "BP_Guarilla_Leader";
		identityTypes[] = {};
		class EventHandlers : BP_PlayerEventHandlers {};
	};

	class BP_Guarilla_Leader_Z: BP_Guarilla_Leader 
	{
		scope = 2;
		uniformClass = "BP_Guarilla_Leader_Z";
		moves = "CfgMovesZombieSdr";
		canHideBodies = 0;
	};

	class BP_Guarilla_Camo: BP_Player
	{
		scope = 2;
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		side = 3;
		uniformClass = "BP_Guarilla_Camo";
		identityTypes[] = {};
		class EventHandlers : BP_PlayerEventHandlers {};
	};
	
	class BP_Guarilla_Camo_Z: BP_Guarilla_Camo 
	{
		scope = 2;
		uniformClass = "BP_Guarilla_Camo_Z";
		moves = "CfgMovesZombieSdr";
		canHideBodies = 0;
	};
	
		class BP_Jungle_Ghillie: BP_Player { //Full Ghillie (Jungle)
		scope = 2;
		displayName = "Jungle Ghillie";
		model = "\A3\Characters_F_Mark\BLUFOR\b_fullghillie_f.p3d";
		hideProxySelections[] = {""};
		canCarryBackPack = 0;
		uniformClass = "BP_JungleGhillie_Uniform";
		side = 37;
		hiddenSelections[] = {"camo","camo3","camo4"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Mark\BLUFOR\Data\ghillie_coverall_nato_co.paa","\A3\Characters_F_Exp\BLUFOR\Data\ghillie_threads_tna_ca.paa","\A3\Characters_F_Exp\BLUFOR\Data\ghillie_threads_5LOD_tna_co.paa"};
		
		class EventHandlers : BP_PlayerEventHandlers {};
	};
	class BP_Paramilitary_Jacket: BP_Player { //Paramilitary Garb (Jacket)
		scope = 2;
		displayName = "Paramilitary Garb (Jacket)";
		model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_2_F.p3d";
		uniformClass = "BP_Paramilitary_Jacket_Uniform";
		side = 3;
		hiddenSelections[] = {"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_2_F_1_co.paa","\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_2_F_2_co.paa"};
		
		class EventHandlers : BP_PlayerEventHandlers {};
	};
	class BP_Paramilitary_Shorts: BP_Player { //Paramilitary Garb (Shorts)
		scope = 2;
		displayName = "Paramilitary Garb (Shorts)";
		model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_5_F.p3d";
		uniformClass = "BP_Paramilitary_Shorts_Uniform";
		side = 3;
		hiddenSelections[] = {"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_5_F_1_co.paa","\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_5_F_2_co.paa"};
		
		class EventHandlers : BP_PlayerEventHandlers {};
	};
	class BP_Paramilitary_Tee: BP_Player { //Paramilitary Garb (Tee)
		scope = 2;
		displayName = "Paramilitary Garb (Tee)";
		model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_1_F.p3d";
		uniformClass = "BP_Paramilitary_Tee_Uniform";
		side = 3;
		hiddenSelections[] = {"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_1_co.paa","\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_2_co.paa"};
		
		class EventHandlers : BP_PlayerEventHandlers {};
	};
	
	class BP_Ghillie_Lush: BP_Player 
	{
        scope = 2;
		model = "\A3\Characters_F_Mark\BLUFOR\b_fullghillie_f.p3d";
		side = 37;
		uniformClass = "BP_Ghillie_Lush";
		hideProxySelections[] = {""};
		canCarryBackPack = 0;
		identityTypes[] = {};
		class EventHandlers : BP_PlayerEventHandlers {};
	};
	
	class BP_Ghillie_Lush_Z: BP_Ghillie_Lush 
	{
		scope = 2;
		uniformClass = "BP_Ghillie_Lush_Z";
		moves = "CfgMovesZombieSdr";
		canHideBodies = 0;
	};
	
	class BP_DirtGhillie: BP_Player 
	{
		scope = 2;
		displayName = "Survivalist Dirt";
		//model = "\breakingpoint_ghillie\models\ghillieDirt.p3d";
		model = "A3\Characters_F\common\ghillie.p3d";
		uniformClass = "BP_DirtGhillie";
		side = 37;
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint_ghillie\textures\ghillie_4_ca.paa"};
		
		class EventHandlers : BP_PlayerEventHandlers {};
	};
	
	class BP_DirtGhillie_Z: BP_DirtGhillie 
	{
		scope = 2;
		uniformClass = "BP_DirtGhillie_Z";
		moves = "CfgMovesZombieSdr";
		canHideBodies = 0;
	};
	
	class BP_GrassGhillie: BP_Player 
	{
		scope = 2;
		displayName = "Survivalist Grass";
		//model = "A3\Characters_F\common\ghillie.p3d";
		model = "\breakingpoint_ghillie\models\ghillieGrass.p3d";
		uniformClass = "BP_GrassGhillie";
		side = 37;
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_ghillie\textures2\ghillie_4_co.paa"};
		
		class EventHandlers : BP_PlayerEventHandlers {};
	};
	
	class BP_GrassGhillie_Z: BP_GrassGhillie 
	{
		scope = 2;
		uniformClass = "BP_GrassGhillie_Z";
		moves = "CfgMovesZombieSdr";
		canHideBodies = 0;
	};
	
	class BP_StoneGhillie: BP_Player 
	{
		scope = 2;
		displayName = "Sniper Stone";
		model = "A3\Characters_F\common\ghillie.p3d";
		//model = "\breakingpoint_ghillie\models\breakingpoint_ghillietone.p3d";
		uniformClass = "BP_StoneGhillie";
		side = 37;
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint_ghillie\textures\ghillie_2_ca.paa", "\breakingpoint_ghillie\textures\ghillie_2_ca.paa"};
		
		class EventHandlers : BP_PlayerEventHandlers {};
	};
	
	class BP_StoneGhillie_Z: BP_StoneGhillie 
	{
		scope = 2;
		moves = "CfgMovesZombieSdr";
		canHideBodies = 0;
		uniformClass = "BP_StoneGhillie_Z";
	};
	
	class BP_TreeGhillie: BP_Player 
	{
		scope = 2;
		displayName = "Sniper Tree";
		model = "A3\Characters_F\common\ghillie.p3d";
		//model = "\breakingpoint_ghillie\models\ghillieTree.p3d";
		uniformClass = "BP_TreeGhillie";
		side = 37;
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint_ghillie\textures\ghillie_3_ca.paa", "\breakingpoint_ghillie\textures\ghillie_3_ca.paa"};
		
		class EventHandlers : BP_PlayerEventHandlers {};
	};
	
	class BP_TreeGhillie_Z: BP_TreeGhillie 
	{
		scope = 2;
		moves = "CfgMovesZombieSdr";
		canHideBodies = 0;
		uniformClass = "BP_TreeGhillie_Z";
	};
	
	class BP_SnowGhillie: BP_Player 
	{
		scope = 2;
		displayName = "Sniper Winter";
		model = "A3\Characters_F\common\ghillie.p3d";
		//model = "\breakingpoint_ghillie\models\breakingpoint_ghillienow.p3d";
		uniformClass = "BP_SnowGhillie";
		side = 37;
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint_ghillie\textures\ghillie_5_ca.paa", "\breakingpoint_ghillie\textures\ghillie_5_ca.paa"};

		class EventHandlers : BP_PlayerEventHandlers {};
	};
	
	class BP_SnowGhillie_Z: BP_SnowGhillie 
	{
		scope = 2;
		moves = "CfgMovesZombieSdr";
		canHideBodies = 0;
		uniformClass = "BP_SnowGhillie_Z";
	};
	
	//	U_O_Wetsuit
	
	class BP_Wetsuit: BP_Player 
	{
        scope = 2;
		model = "\A3\characters_F\Common\diver_slotable";
		side = 3;
		uniformClass = "BP_Wetsuit";
		identityTypes[] = {};
		class EventHandlers : BP_PlayerEventHandlers {};
	};
	
	class BP_Wetsuit_Z: BP_Wetsuit 
	{
		scope = 2;
		uniformClass = "BP_Wetsuit_Z";
		moves = "CfgMovesZombieSdr";
		canHideBodies = 0;
	};
	
	//FACTION CLASSES CLOTHING
	
	class BP_RefugeeF_F: BP_Player 
	{
		scope = 2;
		displayName = "Refugee 1";
		uniformClass = "BP_Refugee_F";
		model = "\breakingpoint_classes\models\BP_RefugeeF.p3d";
		//moves = "CfgMovesPlayerSdr";
		side = 10;
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
	};
	
	class BP_RefugeeF_Z: BP_RefugeeF_F {
		scope = 2;
		displayName = "Refugee 1";
		uniformClass = "BP_Refugee_F_Z";
		model = "\breakingpoint_classes\models\BP_RefugeeF.p3d";
		moves = "CfgMovesZombieSdr";
		canHideBodies = 0;
	};
	
	/*class BP_Refugee1_F: BP_Player {
		scope = 2;
		displayName = "Refugee 1";
		uniformClass = "BP_Refugee_1";
		model = "\breakingpoint_classes\models\BP_Refugee1.p3d";
		//moves = "CfgMovesPlayerSdr";
		side = 10;
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
	};*/
	
	class BP_Refugee1_F: BP_Player {
		scope=2;
		displayName = "Refugee 1";
		uniformClass = "BP_Refugee_1";
		model = "\A3\characters_F\Civil\c_citizen3.p3d";
		//moves = "CfgMovesPlayerSdr";
		side = 10;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\breakingpoint_classes\textures\nomad\nomad1_under.paa",
			"\breakingpoint_classes\textures\nomad\nomad1.paa"
		};
	};
	class BP_Refugee1_Z: BP_Refugee1_F {
		scope = 2;
		displayName = "Refugee 1";
		uniformClass = "BP_Refugee_1_Z";
		model = "\breakingpoint_classes\models\BP_Refugee1.p3d";
		moves = "CfgMovesZombieSdr";
		canHideBodies = 0;
	};
	
	/*class BP_Refugee2_F: BP_Player {
		scope = 2;
		displayName = "Refugee 2";
		uniformClass = "BP_Refugee_2";
		model = "\breakingpoint_classes\models\BP_Refugee2.p3d";
		//moves = "CfgMovesPlayerSdr";
		side = 12;
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};	
	};*/
	
	class BP_Refugee2_F: BP_Player {
		scope = 2;
		displayName = "Refugee 2";
		uniformClass = "BP_Refugee_2";
		model="breakingpoint_classes\models\nomad\hoodie_sp";
		//moves = "CfgMovesPlayerSdr";
		side = 10;
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"breakingpoint_classes\textures\nomad\baker_tan_co.paa",
			"breakingpoint_classes\textures\nomad\trousers_tan_co.paa",
		};
	};
	
	class BP_Refugee2_Z: BP_Refugee2_F {
		scope = 2;
		displayName = "Refugee 2";
		uniformClass = "BP_Refugee_2_Z";
		model = "\breakingpoint_classes\models\BP_Refugee2.p3d";
		moves = "CfgMovesZombieSdr";
		canHideBodies = 0;
	};
	
	class BP_Refugee3_F: BP_Player {
		scope = 2;
		displayName = "Refugee 3";
		uniformClass = "BP_Refugee_3";
		model = "\breakingpoint_classes\models\BP_Refugee3.p3d";
		//moves = "CfgMovesPlayerSdr";
		side = 10;
		//hiddenSelections[] = {"Camo"};
		//hiddenSelectionsTextures[] = {"\a3\characters_f\blufor\data\clothing1_co.paa"};
	};
	
	class BP_Refugee3_Z: BP_Refugee3_F {
		scope = 2;
		displayName = "Refugee 3";
		uniformClass = "BP_Refugee_3_Z";
		model = "\breakingpoint_classes\models\BP_Refugee3.p3d";
		moves = "CfgMovesZombieSdr";
		canHideBodies = 0;
	};
	
	class BP_Refugee4_F: BP_Player {
		scope = 2;
		displayName = "Refugee 4";
		uniformClass = "BP_Refugee_4";
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		hiddenSelections[] = {"camo_1","camo_2","insignia"};
		hiddenSelectionsTextures[] = {"\a3\Characters_F_Enoch\Uniforms\Data\Gorka_01_Khaki_CO.paa"};
		//moves = "CfgMovesPlayerSdr";
		side = 10;
	};
	
	class BP_Refugee4_Z: BP_Refugee4_F {
		scope = 2;
		displayName = "Refugee 4";
		uniformClass = "BP_Refugee_4_Z";
		moves = "CfgMovesZombieSdr";
		canHideBodies = 0;
	};
	
	class BP_GuardianF_F: BP_Player {
		scope = 2;
		displayName = "Guardian 1";
		uniformClass = "BP_Guardian_F";
		model = "\breakingpoint_classes\models\BP_GuardianF.p3d";
		//moves = "CfgMovesPlayerSdr";
		side = 11;
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
	};
	
	class BP_GuardianF_Z: BP_GuardianF_F {
		scope = 2;
		displayName = "Guardian 1";
		uniformClass = "BP_Guardian_F_Z";
		model = "\breakingpoint_classes\models\BP_GuardianF.p3d";
		moves = "CfgMovesZombieSdr";
		canHideBodies = 0;
	};
	
	class BP_Guardian1_F: BP_Player {
		scope = 2;
		displayName = "Guardian 1";
		uniformClass = "BP_Guardian_1";
		model = "\breakingpoint_classes\models\BP_Guardian1.p3d";
		//moves = "CfgMovesPlayerSdr";
		side = 11;
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
	};
	
	class BP_Guardian1_Z: BP_Guardian1_F {
		scope = 2;
		displayName = "Guardian 1";
		uniformClass = "BP_Guardian_1_Z";
		model = "\breakingpoint_classes\models\BP_Guardian1.p3d";
		moves = "CfgMovesZombieSdr";
	};
	
	class BP_Guardian2_F: BP_Player {
		scope = 2;
		displayName = "Guardian 2";
		uniformClass = "BP_Guardian_2";
		model = "\breakingpoint_classes\models\BP_Guardian2.p3d";
		//moves = "CfgMovesPlayerSdr";
		side = 11;
		//hiddenSelections[] = {"Camo"};
		//hiddenSelectionsTextures[] = {"\a3\characters_f\blufor\data\clothing1_co.paa"};
	};
	
	class BP_Guardian2_Z: BP_Guardian2_F {
		scope = 2;
		displayName = "Guardian 2";
		uniformClass = "BP_Guardian_2_Z";
		model = "\breakingpoint_classes\models\BP_Guardian2.p3d";
		moves = "CfgMovesZombieSdr";
		canHideBodies = 0;
	};
	
	class BP_Guardian3_F: BP_Player {
		scope = 2;
		displayName = "Guardian 3";
		uniformClass = "BP_Guardian_3";
		model = "\breakingpoint_classes\models\BP_Guardian3.p3d";
		//moves = "CfgMovesPlayerSdr";
		side = 11;
		//hiddenSelections[] = {"Camo"};
		//hiddenSelectionsTextures[] = {"\a3\characters_f\blufor\data\clothing1_co.paa"};
	};
	
	class BP_Guardian3_Z: BP_Guardian3_F {
		scope = 2;
		displayName = "Guardian 3";
		uniformClass = "BP_Guardian_3_Z";
		model = "\breakingpoint_classes\models\BP_Guardian3.p3d";
		moves = "CfgMovesZombieSdr";
		canHideBodies = 0;
	};
	
	/*class I_E_Uniform_01_shortsleeve_F
{
	author = "Bohemia Interactive";
	_generalMacro = "I_E_Uniform_01_shortsleeve_F";
	scope = 1;
	model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_ShortSleeve_F.p3d";
	hiddenSelections[] = {"camo1","camo2","insignia"};
	hiddenSelectionsTextures[] = {"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_co.paa","a3\characters_f_enoch\uniforms\data\i_e_soldier_01_pants_co.paa"};
	class Wounds
	{
		tex[] = {};
		mat[] = {"a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_injury.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_injury.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_Pants.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_Pants_injury.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_Pants_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
	};
	identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};
	faceType = "Man_A3";
	side = 2;

	modelSides[] = {2,3};
	nakedUniform = "U_BasicBody";
	oxygenCapacity = 80;
	canCarryBackPack = 1;
	grenadeThrowDir[] = {0,0.2,1};
	class PulsationSound
	{
		sample0[] = {[[["A3\sounds_f\characters\human-sfx\other\heart_3",0.0562341,1],1]]};
		sample1[] = {[[["A3\sounds_f\characters\human-sfx\other\heart_3",0.0562341,1],1]]};
		sample2[] = {[[["A3\sounds_f\characters\human-sfx\other\heart_3",0.0562341,1],1]]};
		sample3[] = {[[["A3\sounds_f\characters\human-sfx\other\heart_3",0.0562341,1],1]]};
	};
	class FreefallSound
	{
		sound[] = {"A3\Sounds_F\characters\parachute\freefall2",1,1,40};
	};
	class Wounds
	{
		tex[] = {};
		mat[] = {"a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_injury.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_injury.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_Pants.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_Pants_injury.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_Pants_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
	};
	memoryPointPilot = "pilot";
	memoryPointHandGrenade = "granat";
	selectionPersonality = "osobnost";
	selectionPersonalityHL = "hl";
	selectionGlasses = "brejle";
};*/

	class BP_Guardian4_F: BP_Player {
		scope = 2;
		displayName = "Guardian 4";
		uniformClass = "BP_Guardian_4";
		model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_ShortSleeve_F.p3d";
		//moves = "CfgMovesPlayerSdr";
		side = 11;
		hiddenSelections[] = {"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_co.paa","a3\characters_f_enoch\uniforms\data\i_e_soldier_01_pants_co.paa"};
	};
	
	class BP_Guardian4_Ind_F: BP_Guardian4_F {
		scope = 2;
		displayName = "Guardian 4";
		uniformClass = "BP_Guardian_Ind_4";
		model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_TankTop_F.p3d";
		//moves = "CfgMovesPlayerSdr";
		class Wounds
		{
			tex[] = {};
			mat[] = {"a3\characters_f_exp\syndikat\data\u_i_c_soldier_bandit_5_f_1.rvmat","A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_1_injury.rvmat","A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_1_injury.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_Pants.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_Pants_injury.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_Pants_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
		hiddenSelectionsTextures[] = {"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_tanktop_co.paa","a3\characters_f_enoch\uniforms\data\i_e_soldier_01_pants_co.paa","a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_camo_co.paa"};
		//impactEffectsBlood = "ImpactEffectsBlood";
		//impactEffectsNoBlood = "ImpactPlastic";
	};

	class BP_RebelF_F: BP_Player {
		scope = 2;
		displayName = "Fallen Rebel";
		uniformClass = "BP_Rebel_1";
		model = "\breakingpoint_classes\models\BP_Rebel0.p3d";
		//moves = "CfgMovesPlayerSdr";
		side = 12;
		//hiddenSelections[] = {"Camo"};
		//hiddenSelectionsTextures[] = {"\a3\characters_f\blufor\data\clothing1_co.paa"};
	};
	
	class BP_RebelF_Z: BP_RebelF_F {
		scope = 2;
		displayName = "Fallen Rebel";
		uniformClass = "BP_Rebel_F_Z";
		model = "\breakingpoint_classes\models\BP_Rebel0.p3d";
		moves = "CfgMovesZombieSdr";
		canHideBodies = 0;
	};
	
	/*class BP_Rebel1_F: BP_Man {
		scope = 2;
		displayName = "Rebel 1";
		uniformClass = "BP_Rebel_1";
		model = "\breakingpoint_classes\models\BP_Rebel1.p3d";
		//moves = "CfgMovesPlayerSdr";
		side = 3;
		//hiddenSelections[] = {"Camo"};
		//hiddenSelectionsTextures[] = {"\a3\characters_f\blufor\data\clothing1_co.paa"};
	};
	
	class BP_Rebel1_Z: BP_Rebel1_F {
		scope = 2;
		displayName = "Rebel 1";
		uniformClass = "BP_Rebel_1_Z";
		model = "\breakingpoint_classes\models\BP_Rebel1.p3d";
		moves = "CfgMovesZombieSdr";
		canHideBodies = 0;
	};*/
	
	class BP_Rebel1_F: BP_Player {
		scope = 2;
		displayName = "Rebel 1";
		uniformClass = "BP_Rebel_1";
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		//moves = "CfgMovesPlayerSdr";
		side = 12;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\breakingpoint_classes\textures\outlaw\BP_Outlaw1_shirt.paa",
			"\breakingpoint_classes\textures\outlaw\BP_Outlaw1_pants.paa"
		};
	};
	
	class BP_Rebel1_Z: BP_Rebel1_F {
		scope = 2;
		displayName = "Rebel 1";
		uniformClass = "BP_Rebel_1_Z";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		moves = "CfgMovesZombieSdr";
		canHideBodies = 0;
	};
	
	class BP_Rebel2_F: BP_Player {
		scope = 2;
		displayName = "Rebel 2";
		uniformClass = "BP_Rebel_2";
		model = "\breakingpoint_classes\models\BP_Rebel2.p3d";
		//moves = "CfgMovesPlayerSdr";
		side = 12;
		//hiddenSelections[] = {"Camo"};
		//hiddenSelectionsTextures[] = {"\a3\characters_f\blufor\data\clothing1_co.paa"};
	};
	
	class BP_Rebel2_Z: BP_Rebel2_F {
		scope = 2;
		displayName = "Rebel 2";
		uniformClass = "BP_Rebel_2_Z";
		model = "\breakingpoint_classes\models\BP_Rebel2.p3d";
		moves = "CfgMovesZombieSdr";
		canHideBodies = 0;
	};
	
	class BP_Rebel3_F: BP_Player {
		scope = 2;
		displayName = "Rebel 3";
		uniformClass = "BP_Rebel_3";
		model = "\breakingpoint_classes\models\BP_Rebel3.p3d";
		//moves = "CfgMovesPlayerSdr";
		side = 12;
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
	};
	
	class BP_Rebel3_Z: BP_Rebel3_F {
		scope = 2;
		displayName = "Rebel 3";
		uniformClass = "BP_Rebel_3_Z";
		model = "\breakingpoint_classes\models\BP_Rebel3.p3d";
		moves = "CfgMovesZombieSdr";
		canHideBodies = 0;
	};
 
	class BP_Rebel4_F: BP_Player {
		scope = 2;
		displayName = "Rebel 4";
		uniformClass = "BP_Rebel_4";
		model = "\A3\characters_F_gamma\Guerrilla\ig_leader.p3d";
		//moves = "CfgMovesPlayerSdr";
		side = 12;
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"breakingpoint_classes\textures\outlaw\BP_Outlaw4_co.paa","breakingpoint_classes\textures\outlaw\BP_Outlaw4_scarf.paa"};
	};
 
	class BP_Rebel4_Taki: BP_Rebel4_F
	{
		scope = 2;
		displayName="Rebel 4 Taki";
		uniformClass="BP_Rebel_4_Taki";
		model = "breakingpoint_classes\models\BP_Rebel4_Taki.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {};
	};
	
		//SCAVENGER
	class BP_ScavengerF_F: BP_Player
	{
		scope = 2;
		displayName = "Traitor Scavenger";
		uniformClass = "BP_Scavenger_F";
		model="\A3\characters_F\Common\basicbody.p3d";
		side = 13;
		hiddenSelections[]=
		{
			"camo",
			"hl"
		};
		hiddenSelectionsTextures[]=
		{
			"friths_ruin_cloth\data\frith_ruin_fabpants_co.paa",
			"friths_ruin_cloth\data\frith_ruin_hl_ljnbld_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"friths_ruin_cloth\data\frith_ruin_fabpants.rvmat",
			"friths_ruin_cloth\data\frith_ruin_hl_ljn.rvmat"
		};
	};
	
	class BP_Scavenger1_F: BP_Player
	{
		scope = 2;
		displayName="Scavenger 1";
		uniformClass="BP_Scavenger_1";
		model="\A3\characters_F\civil\c_worker.p3d";
		side = 13;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"hl"
		};
		hiddenSelectionsTextures[]=
		{
			"friths_ruin_cloth\data\frith_ruin_cloth1_wht_dpm_co.paa",
			"friths_ruin_cloth\data\frith_ruin_cloth3_lite_co.paa",
			"friths_ruin_cloth\data\frith_ruin_hl_ljnbld_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"friths_ruin_cloth\data\frith_ruin_cloth1_rags.rvmat",
			"friths_ruin_cloth\data\frith_ruin_cloth3_rags.rvmat",
			"friths_ruin_cloth\data\frith_ruin_hl_ljn.rvmat"
		};
	};
	
	class BP_Scavenger2_F: BP_Player
	{
		scope = 2;
		displayName = "Scavenger 2";
		uniformClass = "BP_Scavenger_2";
		//model = "\A3\characters_F_exp\BLUFOR\B_CTRG_Soldier_03_F.p3d";
		model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		side = 13;
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\breakingpoint_classes\textures\fatigues_Blood_co.paa"};
	};
	
	
	class BP_Scavenger3_F: BP_Player
	{
		scope=2;
		displayName = "Scavenger 3";
		uniformClass = "BP_Scavenger_3";
		model = "\A3\characters_F_beta\indep\ia_sniper.p3d";
		side = 13;
		hiddenSelections[]=
		{
			"camo",
			"camo3",
			"hl"
		};
		hiddenSelectionsTextures[]=
		{
			"friths_ruin_cloth\data\frith_ruin_sdr_ltrdrk_co.paa",
			"\friths_ruin_cloth\data\frith_ruin_ghillie_crow_co.paa",
			"\friths_ruin_cloth\data\frith_ruin_hl_ljnbld_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\friths_ruin_cloth\data\frith_ruin_sdr_ltr.rvmat",
			"\friths_ruin_cloth\data\frith_ruin_ghillie_crow.rvmat",
			"\friths_ruin_cloth\data\frith_ruin_hl_ljn.rvmat"
		};
	};
	
	class BP_Scavenger4_F: BP_Player
	{
		scope=2;
		displayName = "Scavenger 4";
		uniformClass = "BP_Scavenger_4";
		model = "\A3\characters_F_beta\indep\ia_sniper.p3d";
		side = 13;
		hiddenSelections[]=
		{
			"camo",
			"camo3",
			"hl"
		};
		hiddenSelectionsTextures[]=
		{
			"\friths_ruin_cloth\data\frith_ruin_sdr_ltrred_co.paa",
			"friths_ruin_cloth\data\frith_ruin_ghillie_crowbld_co.paa",
			"friths_ruin_cloth\data\frith_ruin_hl_ljnbld_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"friths_ruin_cloth\data\frith_ruin_sdr_ltr.rvmat",
			"friths_ruin_cloth\data\frith_ruin_ghillie_crow.rvmat",
			"friths_ruin_cloth\data\frith_ruin_hl_ljn.rvmat"
		};
	};
	class BP_Scavenger4Hawk_F: BP_Player
	{
		scope=2;
		displayName = "Scavenger 4 (Hawk)";
		uniformClass = "BP_Scavenger4Hawk_F";
		model = "\A3\characters_F_beta\indep\ia_sniper.p3d";
		side = 13;
		hiddenSelections[]=
		{
			"camo",
			"camo3",
			"hl"
		};
		hiddenSelectionsTextures[]=
		{
			"friths_ruin_cloth\data\frith_ruin_sdr_fabtan_co.paa",
			"friths_ruin_cloth\data\frith_ruin_ghillie_hawk_co.paa",
			"friths_ruin_cloth\data\frith_ruin_hl_ljnbld_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"friths_ruin_cloth\data\frith_ruin_sdr_fab.rvmat",
			"friths_ruin_cloth\data\frith_ruin_ghillie_crow.rvmat",
			"friths_ruin_cloth\data\frith_ruin_hl_ljn.rvmat"
		};
	};
	
		//HUNTER
	class BP_Hunter1_F: BP_Player {
		scope = 2;
		displayName = "Hunter 1";
		uniformClass = "BP_Hunter_1";
		model = "\breakingpoint_classes\models\BP_Hunter1.p3d";
		//moves = "CfgMovesPlayerSdr";
		side = 14;
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
	};
	
	class BP_Hunter1_Z: BP_Hunter1_F {
		scope = 2;
		displayName = "Hunter 1";
		uniformClass = "BP_Hunter_1_Z";
		model = "\breakingpoint_classes\models\BP_Hunter1.p3d";
		extCameraPosition[] = {0.220000, 0.020000, -1.200000};
		moves = "CfgMovesZombieSdr";
		canHideBodies = 0;
	};
	
	class BP_Hunter2_F: BP_Player {
		scope = 2;
		displayName = "Hunter 2";
		uniformClass = "BP_Hunter_2";
		model = "\breakingpoint_classes\models\BP_Hunter2.p3d";
		//moves = "CfgMovesPlayerSdr";
		side = 14;
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
	};
	
	class BP_Hunter2_Z: BP_Hunter2_F {
		scope = 2;
		displayName = "Hunter 2";
		uniformClass = "BP_Hunter_2_Z";
		model = "\breakingpoint_classes\models\BP_Hunter2.p3d";
		moves = "CfgMovesZombieSdr";
		canHideBodies = 0;
	};
	
	class BP_Hunter3_F: BP_Player {
		scope = 2;
		displayName = "Hunter 3";
		uniformClass = "BP_Hunter_3";
		model = "\breakingpoint_classes\models\BP_Hunter3.p3d";
		//moves = "CfgMovesMaleSdrHunt3";
		side = 14;
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
	};
	
	class BP_Hunter3_Z: BP_Hunter3_F {
		scope = 2;
		displayName = "Hunter 3";
		uniformClass = "BP_Hunter_3_Z";
		model = "\breakingpoint_classes\models\BP_Hunter3.p3d";
		moves = "CfgMovesZombieSdr";
		canHideBodies = 0;
	};
	
	class FRITH_RUIN_sdr_fabdpm_rs: BP_Player {};
	class BP_Hunter4_F: FRITH_RUIN_sdr_fabdpm_rs {
		scope = 2;
		displayName = "Hunter 4";
		uniformClass = "BP_Hunter_4";
		model="\A3\characters_F_beta\indep\ia_soldier_02.p3d";
		//moves = "CfgMovesPlayerSdr";
		side = 14;
		hiddenSelections[]=
		{
			"camo",
			"hl"
		};
		hiddenSelectionsTextures[]=
		{
			"friths_ruin_cloth\data\frith_ruin_sdr_fabdpm_co.paa",
			"friths_ruin_cloth\data\frith_ruin_hl_ljnltr_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"friths_ruin_cloth\data\frith_ruin_sdr_fab.rvmat",
			"friths_ruin_cloth\data\frith_ruin_hl_ljn.rvmat"
		};
	};
		
		//SURVIVALIST
	class BP_SurvivalistF_F: BP_Player {
		scope = 2;
		displayName = "Fallen Survivalist";
		uniformClass = "BP_Survivalist_F";
		model = "\breakingpoint_classes\models\BP_SurvivalistF.p3d";
		//moves = "CfgMovesPlayerSdr";
		side = 15;
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
	};
	
	class BP_SurvivalistF_Z: BP_SurvivalistF_F {
		scope = 2;
		displayName = "Fallen Survivalist";
		uniformClass = "BP_Survivalist_F_Z";
		model = "\breakingpoint_classes\models\BP_SurvivalistF.p3d";
		moves = "CfgMovesZombieSdr";
	};
	
	
	class BP_Survivalist1_F: BP_Player {
		scope = 2;
		displayName = "Survivalist 1";
		uniformClass = "BP_Survivalist_1";
		model = "\breakingpoint_classes\models\BP_Survivalist1.p3d";
		//moves = "CfgMovesPlayerSdr";
		side = 15;
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
	};
	
	class BP_Survivalist1_Z: BP_Survivalist1_F {
		scope = 2;
		displayName = "Survivalist 1";
		uniformClass = "BP_Survivalist_1_Z";
		model = "\breakingpoint_classes\models\BP_Survivalist1.p3d";
		moves = "CfgMovesZombieSdr";
		canHideBodies = 0;
	};
	
	class BP_Survivalist2_F: BP_Player {
		scope = 2;
		displayName = "Survivalist 2";
		uniformClass = "BP_Survivalist_2";
		model = "\breakingpoint_classes\models\BP_Survivalist2.p3d";
		//moves = "CfgMovesPlayerSdr";
		side = 15;
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint_classes\textures\ghillie_top_desert_co.paa"};
	};
	
	class BP_Survivalist2_Z: BP_Survivalist2_F {
		scope = 2;
		displayName = "Survivalist 2";
		uniformClass = "BP_Survivalist_2_Z";
		model = "\breakingpoint_classes\models\BP_Survivalist2.p3d";
		moves = "CfgMovesZombieSdr";
		canHideBodies = 0;
	};
	
	class BP_Survivalist3_F: BP_Player {
		scope = 2;
		displayName = "Survivalist 3";
		uniformClass = "BP_Survivalist_3";
		model = "\breakingpoint_ghillie\models\ghilliegrass.p3d";
		//moves = "CfgMovesPlayerSdr";
		//model = "A3\Characters_F\common\ghillie.p3d";
		side = 15;
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_ghillie\textures2\ghillie_5_co.paa"};
	};
	
	class BP_Survivalist3_Z: BP_Survivalist3_F {
		scope = 2;
		displayName = "Survivalist 3";
		uniformClass = "BP_Survivalist_3_Z";
		model = "\breakingpoint_ghillie\models\ghilliegrass.p3d";
		moves = "CfgMovesZombieSdr";
		canHideBodies = 0;
	};
	
	class BP_Survivalist4_F: BP_Player {
		scope = 2;
		displayName = "Survivalist 4";
		uniformClass = "BP_Survivalist_4";
		model = "\A3\Characters_F\Common\ghillie.p3d";
		side = 15;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"a3\characters_f_exp\OPFOR\Data\ghillie_tna_CO.paa"};
		/*class EventHandlers
		{
			init="if(local(_this select 0))then{[(_this select 0),"""",[],false] call bis_fnc_initVehicle;};";
		};
		class textureSources
		{
			class mtp {displayname="MTP";textures[]={"\A3\Characters_F\Common\Data\ghillie_mcamo_co.paa"};};
			class woodland {displayname="Woodland";textures[]={"\A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};};
			class tropical {displayname="Tropical";textures[]={"a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};};
			class desert {displayname="Desert";textures[]={"\A3\Characters_F\Common\Data\ghillie_desert_co.paa"};};
			class camonet {displayname="Camonet";textures[]={"\hidden_ghillie\ghillie_camonet.paa"};};
			class night {displayname="Night";textures[]={"\hidden_ghillie\ghillie_night_co.paa"};};
			class fishnet {displayname="Fishnet";textures[]={"\hidden_ghillie\ghillie_fishnet_co.paa"};};
			class grass {displayname="Grass";textures[]={"\hidden_ghillie\ghillie_grass.paa"};};
			class virtual {displayname="Virtual";textures[]={"#(ai,1024,1024,1)perlinNoise(64,32,0.25,0.75)"};};
			class meshtape {displayname="Meshtape";textures[]={"hidden_ghillie\ghillie_mesh_tape.paa"};};
			class tna {displayname="Tropical";textures[]={"a3\characters_f_exp\OPFOR\Data\ghillie_tna_CO.paa"};};
		};
		textureList[]={"tna",1};*/
	};
	
	class BP_DirtSurvivalist4_F: BP_Survivalist4_F 
	{
		scope = 2;
		displayName = "Survivalist 4 (Dirt)";
		model = "\A3\Characters_F\Common\ghillie.p3d";
		uniformClass = "BP_Survivalist_4_Dirt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\ghillie_desert_co.paa"};
		
		class EventHandlers : BP_PlayerEventHandlers {};
	};
	
	class BP_CornSurvivalist4_F: BP_Survivalist4_F 
	{
		scope = 2;
		displayName = "Survivalist 4 (Corn Fields)";
		//model = "\breakingpoint_ghillie\models\ghillieDirt.p3d";
		model = "A3\Characters_F\common\ghillie.p3d";
		uniformClass = "BP_Survivalist_4_Corn";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint_ghillie\textures\ghillie_4_ca.paa"};
		
		class EventHandlers : BP_PlayerEventHandlers {};
	};
	
	class BP_SnowSurvivalist4_F: BP_Survivalist4_F 
	{
		scope = 2;
		displayName = "Survivalist 4 (Snow)";
		model = "A3\Characters_F\common\ghillie.p3d";
		uniformClass = "BP_Survivalist_4_Snow";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint_ghillie\textures\ghillie_5_ca.paa", "\breakingpoint_ghillie\textures\ghillie_5_ca.paa"};
		
		class EventHandlers : BP_PlayerEventHandlers {};
	};
	
	class BP_StoneSurvivalist4_F: BP_Survivalist4_F 
	{
		scope = 2;
		displayName = "Survivalist 4 (Stone)";
		model = "A3\Characters_F\common\ghillie.p3d";
		uniformClass = "BP_Survivalist_4_Stone";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint_ghillie\textures\ghillie_2_ca.paa", "\breakingpoint_ghillie\textures\ghillie_2_ca.paa"};
		
		class EventHandlers : BP_PlayerEventHandlers {};
	};
	
	class BP_TreeSurvivalist4_F: BP_Survivalist4_F 
	{
		scope = 2;
		displayName = "Survivalist 4 (Tree)";
		model = "A3\Characters_F\common\ghillie.p3d";
		uniformClass = "BP_Survivalist_4_Tree";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"a3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa"};
		
		class EventHandlers : BP_PlayerEventHandlers {};
	};
	
	class BP_NightSurvivalist4_F: BP_Survivalist4_F 
	{
		scope = 2;
		displayName = "Survivalist 4 (Night)";
		model = "\A3\Characters_F\Common\ghillie.p3d";
		uniformClass = "BP_Survivalist_4_Night";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\hidden_ghillie\ghillie_night_co.paa"};
		
		class EventHandlers : BP_PlayerEventHandlers {};
	};
	
	//Legacy NoClass
	class BP_Optout_F: BP_Player {
		scope = 2;
		displayName = "Civilian";
		uniformClass = "BP_OptOut";
		model = "\breakingpoint_classes\models\BP_OptOut.p3d";
		//moves = "CfgMovesPlayerSdr";
		side = 3;
		//hiddenSelections[] = {"Camo"};
		//hiddenSelectionsTextures[] = {"\breakingpoint_ghillie\textures\ghillie_1_ca.paa"};
	};
	
	class BP_Optout_Z: BP_Optout_F {
		scope = 2;
		displayName = "Civilian";
		uniformClass = "BP_OptOutF_Z";
		model = "\breakingpoint_classes\models\BP_OptOut.p3d";
		moves = "CfgMovesZombieSdr";
		canHideBodies = 0;
	};
	
	class BP_Optout2_F: BP_Player {
		scope = 2;
		displayName = "Civilian";
		uniformClass = "BP_OptOut2";
		model = "\A3\characters_F\civil\c_poor.p3d";
		//moves = "CfgMovesPlayerSdr";
		side = 3;
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint_classes\textures\c_cloth1_black.paa"};
	};
	
	class BP_Optout2_Z: BP_Optout2_F {
		scope = 2;
		displayName = "Civilian";
		uniformClass = "BP_OptOut2_Z";
		model = "\A3\characters_F\civil\c_poor.p3d";
		moves = "CfgMovesZombieSdr";
		canHideBodies = 0;
	};
	
	class BP_Optout3_F: BP_Player {
		scope = 2;
		displayName = "Civilian";
		uniformClass = "BP_OptOut3";
		model = "\A3\Characters_F_EPB\Guerrilla\ig_guerrilla4_1.p3d";
		//moves = "CfgMovesPlayerSdr";
		side = 3;
		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {""};
	};
	
	class BP_Optout3_Z: BP_Optout3_F {
		scope = 2;
		displayName = "Civilian";
		uniformClass = "BP_OptOut3_Z";
		model = "\A3\Characters_F_EPB\Guerrilla\ig_guerrilla4_1.p3d";
		moves = "CfgMovesZombieSdr";
		canHideBodies = 0;
	};
	
	/*
			Arma 3 Breaking Point
		Vehicles Without Radar/Thermal
	*/
	
	//External Class References
	class B_Heli_Light_01_F
	{};
	class B_Heli_Transport_01_F
	{};
	class O_Heli_Light_02_unarmed_F
	{};
	class I_Heli_Transport_02_F
	{};
	class B_MRAP_01_F;
	class B_MRAP_01_gmg_F;
	class B_MRAP_01_hmg_F;
	class C_Offroad_01_F;
	class C_Offroad_01_comms_F;
	class B_GEN_Offroad_01_gen_F;
	class C_Quadbike_01_F;
    class C_SUV_01_F;
	class C_Hatchback_01_F;
	class C_Hatchback_01_sport_F;
	class C_Van_01_box_F;
	class I_G_Van_01_fuel_F;
	class I_G_Van_01_transport_F;
	class B_Boat_Transport_01_F;
	class C_Boat_Civil_01_police_F;
	class I_MRAP_03_F;
	class O_Truck_02_covered_F;
	class O_Truck_02_transport_F;
	class C_Truck_02_fuel_F;
	class B_G_Offroad_01_armed_F;
	//Apex
	class C_Scooter_Transport_01_F;
	class C_Boat_Transport_02_F;
	class C_Plane_Civil_01_F;
	class O_T_LSV_02_armed_F;
	class O_T_LSV_02_unarmed_F;
	class B_T_LSV_01_armed_F;
	class B_T_LSV_01_unarmed_F;
	class LSV_01_unarmed_base_F;
	class C_Offroad_02_unarmed_F;
	class Offroad_02_unarmed_base_F;
	/*
	{
		class ViewPilot;
		class ViewOptics;
		class NewTurret;
		class GunFire;
		class Turrets
		{
			class M2_Turret;
		};
	};
	*/
	//class EventHandlers;
	
	//Apex Vehicles
	class BP_C_Scooter_Transport_01_F : C_Scooter_Transport_01_F { //Rusty Scooter
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\C_Scooter_Transport_01_F.jpg";
		displayName = "Rusty Scooter";
		_generalMacro = "Rusty Scooter";
		scope = 2;
		scopeCurator = 2;
		DLC = "Expansion";
		side = 3;
		crew = "";
		typicalCargo[] = {};
		maximumLoad = 120;
		//textures[] = {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"};
		//hiddenSelectionsTextures[] = {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"};
		//class TextureSources {};
		class TransportItems {};
		class TransportMagazines{};
		class TransportWeapons{};
		class HitPoints {
			class HitBody {
				armor = 1;
				material = 50;
				name = "hull";
				visual = "zbytek";
				passThrough = 0.1;
			};
			
			class HitEngine {
				armor = 1;
				material = -1;
				name = "Engine";
				visual = "";
				passThrough = 1;
			};
		};
		
		class EventHandlers : BP_VehicleEventHandlers {};
	};
	class BP_C_Boat_Transport_02_F : C_Boat_Transport_02_F { //Rusty RHIB
		author = "Bohemia Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\C_Boat_Transport_02_F.jpg";
		_generalMacro = "Rusty RHIB";
		displayName = "Rusty RHIB";
		maximumLoad = 500;
		transportMaxBackpacks = 5;
		transportMaxMagazines = 100;
		transportMaxWeapons = 10;
		scope = 2;
		scopeCurator = 2;
		DLC = "Expansion";
		side = 3;
		crew = "";
		typicalCargo[] = {};
		textures[] = {"\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_civilian_CO.paa","\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_2_civilian_CO.paa"};
		hiddenSelectionsTextures[] = {"\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_civilian_CO.paa","\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_2_civilian_CO.paa"};
		class TextureSources {};
		class TransportItems {};
		class TransportMagazines{};
		class TransportWeapons{};	
		class HitPoints {
			class HitBody {
				armor = 1;
				material = 50;
				name = "hull";
				visual = "zbytek";
				passThrough = 0.1;
			};
			
			class HitEngine {
				armor = 1;
				material = -1;
				name = "Engine";
				visual = "";
				passThrough = 1;
			};
		};
		
		class EventHandlers : BP_VehicleEventHandlers {};
	};
	class BP_C_Plane_Civil_01_F : C_Plane_Civil_01_F { //Rusted Caesar BTT
		author = "Bohemia Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\C_Plane_Civil_01_F.jpg";
		_generalMacro = "Rusted Caesar BTT";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rusty Caesar BTT";
		DLC = "Expansion";
		side = 3;
		crew = "";
		typicalCargo[] = {""};
		accuracy = 1000;
		textures[] = {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"};
		hiddenSelectionsTextures[] = {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"};
		class TextureSources {};
		class TransportItems {};
		class TransportMagazines{};
		class TransportWeapons{};
		class HitPoints {
			class HitHull {
				armor = 1;
				material = 51;
				name = "NEtrup";
				visual = "trup";
				passThrough = 0.25;
			};
			
			class HitEngine {
				armor = 0.25;
				material = 51;
				name = "motor";
				visual = "motor";
				passThrough = 1;
			};
			
			class HitAvionics {
				armor = 0.25;
				material = 51;
				name = "elektronika";
				visual = "elektronika";
				passThrough = 0.1;
			};
			
			class HitGlass1 {
				armor = 1;
				material = -1;
				name = "glass1";
				visual = "glass1";
				passThrough = 0;
			};
			
			class HitGlass2 {
				armor = 1;
				material = -1;
				name = "glass2";
				visual = "glass2";
				passThrough = 0;
			};
			
			class HitGlass3 {
				armor = 1;
				material = -1;
				name = "glass3";
				visual = "glass3";
				passThrough = 0;
			};
			
			class HitGlass4 {
				armor = 1;
				material = -1;
				name = "glass4";
				visual = "glass4";
				passThrough = 0;
			};
		};
		
		class EventHandlers : BP_VehicleEventHandlers {};
	};
	class BP_O_T_LSV_02_armed_F : O_T_LSV_02_armed_F { //Rusted Qilin (Armed)
		author = "Bohemia Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_LSV_02_armed_F.jpg";
		_generalMacro = "Rusted Qilin (Armed)";
		displayName = "Rusted Qilin (Armed)";
		scope = 2;
		scopeCurator = 2;
		DLC = "Expansion";
		side = 3;
		crew = "";
		typicalCargo[] = {};
		textures[] = {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"};
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"};
		class TextureSources {};
		class TransportItems {};
		class TransportMagazines{};
		class TransportWeapons{};
		//Turrets
		//	{
		//		weapons[] = {"LMG_Minigun_Transport"};
		//		magazines[] = {"100Rnd_127x99_mag_Tracer_Red","500Rnd_65x39_Belt_Tracer_Green_Splash","500Rnd_65x39_Belt_Tracer_Green_Splash","500Rnd_65x39_Belt_Tracer_Green_Splash"};
		//	};
		armor = 50;
		
		class HitPoints  {
			class HitEngine {
				armor = 2;
				material = -1;
				name = "motor";
				visual = "motor";
				passThrough = 0;
			};
			class HitFuel {
				armor = 1;
				material = -1;
				name = "palivo";
				passThrough = 0.5;
			};
			class HitBody {
				armor = 1;
				material = -1;
				name = "karoserie";
				visual = "";
				passThrough = 0;
			};
			class HitLFWheel {
				armor = 0.8;
				material = -1;
				name = "wheel_1_1_steering";
				visual = "LeftFrontWheel";
				passThrough = 0;
			};
			class HitRFWheel {
				armor = 0.8;
				material = -1;
				name = "wheel_2_1_steering";
				visual = "RightFrontWheel";
				passThrough = 0;
			};
			class HitRF2Wheel {
				armor = 0.8;
				material = -1;
				name = "wheel_2_2_steering";
				visual = "RightBackWheel";
				passThrough = 0;
			};
			class HitLF2Wheel {
				armor = 0.8;
				material = -1;
				name = "wheel_1_2_steering";
				visual = "LeftBackWheel";
				passThrough = 0;
			};
		};
		
		class EventHandlers : BP_VehicleEventHandlers {};
	};
	class BP_O_T_LSV_02_unarmed_F : O_T_LSV_02_unarmed_F { //Rusted Qilin
		author = "Bohemia Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_LSV_02_unarmed_F.jpg";
		_generalMacro = "Rusted Qilin";
		displayName = "Rusted Qilin";
		scope = 2;
		scopeCurator = 2;
		DLC = "Expansion";
		side = 3;
		crew = "";
		typicalCargo[] = {};
		textures[] = {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"
		};
		class TextureSources {};
		class TransportItems {};
		class TransportMagazines{};
		class TransportWeapons{};
		armor = 50;
		
		class HitPoints  {
			class HitEngine {
				armor = 2;
				material = -1;
				name = "motor";
				visual = "motor";
				passThrough = 0;
			};
			class HitFuel {
				armor = 1;
				material = -1;
				name = "palivo";
				passThrough = 0.5;
			};
			class HitBody {
				armor = 1;
				material = -1;
				name = "karoserie";
				visual = "";
				passThrough = 0;
			};
			class HitLFWheel {
				armor = 0.8;
				material = -1;
				name = "wheel_1_1_steering";
				visual = "LeftFrontWheel";
				passThrough = 0;
			};
			class HitRFWheel {
				armor = 0.8;
				material = -1;
				name = "wheel_2_1_steering";
				visual = "RightFrontWheel";
				passThrough = 0;
			};
			class HitRF2Wheel {
				armor = 0.8;
				material = -1;
				name = "wheel_2_2_steering";
				visual = "RightBackWheel";
				passThrough = 0;
			};
			class HitLF2Wheel {
				armor = 0.8;
				material = -1;
				name = "wheel_1_2_steering";
				visual = "LeftBackWheel";
				passThrough = 0;
			};
		};
		
		class EventHandlers : BP_VehicleEventHandlers {
			init = "_this call BP_fnc_vehicleInit; if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	class BP_B_T_LSV_01_armed_F : B_T_LSV_01_armed_F { //Rusted Prowler (Armed)
		author = "Bohemia Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_LSV_01_armed_F.jpg";
		_generalMacro = "Rusted Prowler (Armed)";
		displayName = "Rusted Prowler (Armed)";
		scope = 2;
		scopeCurator = 2;
		DLC = "Expansion";
		side = 3;
		crew = "";
		typicalCargo[] = {};
		textures[] = {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"};
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"};
		class TextureSources {};
		class TransportItems {};
		class TransportMagazines{};
		class TransportWeapons{};
		//Turret	weapons[] = {"HMG_127_LSV_01"};
		//			magazines[] = {"100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Red"};
		//CoDriver weapons[] = {"MMG_02_vehicle"};
		//			magazines[] = {"130Rnd_338_Mag","130Rnd_338_Mag","130Rnd_338_Mag"};
		armor = 50;
		
		class HitPoints  {
			class HitEngine {
				armor = 2;
				material = -1;
				name = "motor";
				visual = "motor";
				passThrough = 0;
			};
			class HitFuel {
				armor = 1;
				material = -1;
				name = "palivo";
				passThrough = 0.5;
			};
			class HitBody {
				armor = 1;
				material = -1;
				name = "karoserie";
				visual = "";
				passThrough = 0;
			};
			class HitLFWheel {
				armor = 0.8;
				material = -1;
				name = "wheel_1_1_steering";
				visual = "LeftFrontWheel";
				passThrough = 0;
			};
			class HitRFWheel {
				armor = 0.8;
				material = -1;
				name = "wheel_2_1_steering";
				visual = "RightFrontWheel";
				passThrough = 0;
			};
			class HitRF2Wheel {
				armor = 0.8;
				material = -1;
				name = "wheel_2_2_steering";
				visual = "RightBackWheel";
				passThrough = 0;
			};
			class HitLF2Wheel {
				armor = 0.8;
				material = -1;
				name = "wheel_1_2_steering";
				visual = "LeftBackWheel";
				passThrough = 0;
			};
		};
		
		class EventHandlers : BP_VehicleEventHandlers {};
				
	};
	
	class BP_B_LSV_01_unarmed_F : B_T_LSV_01_unarmed_F {
		displayName = "Rusty Prowler";
		scope = 2;
		side = 3;
		scopeCurator = 2;
		//textures[] = {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"
		};
		armor = 50;
		class HitPoints  {
			class HitEngine {
				armor = 2;
				material = -1;
				name = "motor";
				visual = "motor";
				passThrough = 0;
			};
			class HitFuel {
				armor = 1;
				material = -1;
				name = "palivo";
				passThrough = 0.5;
			};
			class HitBody {
				armor = 1;
				material = -1;
				name = "karoserie";
				visual = "";
				passThrough = 0;
			};
			class HitLFWheel {
				armor = 0.8;
				material = -1;
				name = "wheel_1_1_steering";
				visual = "LeftFrontWheel";
				passThrough = 0;
			};
			class HitRFWheel {
				armor = 0.8;
				material = -1;
				name = "wheel_2_1_steering";
				visual = "RightFrontWheel";
				passThrough = 0;
			};
			class HitRF2Wheel {
				armor = 0.8;
				material = -1;
				name = "wheel_2_2_steering";
				visual = "RightBackWheel";
				passThrough = 0;
			};
			class HitLF2Wheel {
				armor = 0.8;
				material = -1;
				name = "wheel_1_2_steering";
				visual = "LeftBackWheel";
				passThrough = 0;
			};
		};

		class EventHandlers : BP_VehicleEventHandlers {
			init = "_this call BP_fnc_vehicleInit; if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	
	class BP_C_Offroad_02_unarmed_F : C_Offroad_02_unarmed_F { //Rusted MB 4WD
		author = "Bohemia Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\C_Offroad_02_unarmed_F.jpg";
		_generalMacro = "Rusted MB 4WD";
		displayName = "Rusted MB 4WD";
		scope = 2;
		scopeCurator = 2;
		DLC = "Expansion";
		side = 3;
		faction = "CIV_F";
		crew = "";
		typicalCargo[] = {};
		textures[] = {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"};
		materials[] = {"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat","\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat","\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat","\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"};
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"};
		hiddenSelectionsMaterials[] = {"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat","\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat","\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat","\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"};
		class TextureSources {};
		class TransportItems {};
		class TransportMagazines{};
		class TransportWeapons{};
		armor = 50;
		
		class HitPoints  {
			class HitEngine {
				armor = 2;
				material = -1;
				name = "motor";
				visual = "motor";
				passThrough = 0;
			};
			class HitFuel {
				armor = 1;
				material = -1;
				name = "palivo";
				passThrough = 0.5;
			};
			class HitBody {
				armor = 1;
				material = -1;
				name = "karoserie";
				visual = "";
				passThrough = 0;
			};
			class HitLFWheel {
				armor = 0.8;
				material = -1;
				name = "wheel_1_1_steering";
				visual = "LeftFrontWheel";
				passThrough = 0;
			};
			class HitRFWheel {
				armor = 0.8;
				material = -1;
				name = "wheel_2_1_steering";
				visual = "RightFrontWheel";
				passThrough = 0;
			};
			class HitRF2Wheel {
				armor = 0.8;
				material = -1;
				name = "wheel_2_2_steering";
				visual = "RightBackWheel";
				passThrough = 0;
			};
			class HitLF2Wheel {
				armor = 0.8;
				material = -1;
				name = "wheel_1_2_steering";
				visual = "LeftBackWheel";
				passThrough = 0;
			};
		};
		
		class EventHandlers : BP_VehicleEventHandlers {};
		
	};

	class BP_MRAP_01 : B_MRAP_01_F
	{
		scope = 2;
		side = 3;
		displayName = "Rusty Vannad (Armoured)";
		crew = "";
		typicalCargo[] = {};
		hiddenSelections[]= {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[] = {"\breakingpoint_vehicles\textures\MRAP_01_base_CO.paa", "\breakingpoint_vehicles\textures\MRAP_01_adds_CO.paa", "\breakingpoint_vehicles\textures\MRAP_01_int_CO.paa", "\breakingpoint_vehicles\textures\MRAP_01_int_det_CO.paa"};
		hiddenSelectionsMaterials[] = {"\breakingpoint_vehicles\textures\mrap_01_base.rvmat", "\breakingpoint_vehicles\textures\mrap_01_adds.rvmat", "\breakingpoint_vehicles\textures\mrap_01_det_int.rvmat", "\breakingpoint_vehicles\textures\mrap_01_int_destruct.rvmat"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems {};
		commanderCanSee = 2 + 4 + 8;
		gunnerCanSee = 2 + 4 + 8;
		driverCanSee = 2 + 4 + 8;
		maximumLoad = 2000;
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 3;
		armor = 50;
		
		class HitPoints {
			class HitGlass1 {
				armor = 0.8;
				material = -1;
				name = "glass1";
				visual = "glass1";
				passThrough = 0;
			};
			
			class HitGlass2 {
				armor = 0.8;
				material = -1;
				name = "glass2";
				visual = "glass2";
				passThrough = 0;
			};
			
			class HitGlass3 {
				armor = 0.8;
				material = -1;
				name = "glass3";
				visual = "glass3";
				passThrough = 0;
			};
			
			class HitGlass4 {
				armor = 0.8;
				material = -1;
				name = "glass4";
				visual = "glass4";
				passThrough = 0;
			};
			
			class HitGlass5 {
				armor = 0.8;
				material = -1;
				name = "glass5";
				visual = "glass5";
				passThrough = 0;
			};
			
			class HitGlass6 {
				armor = 0.8;
				material = -1;
				name = "glass6";
				visual = "glass6";
				passThrough = 0;
			};
			
			class HitBody {
				armor = 1;
				material = -1;
				name = "karoserie";
				visual = "Hull";
				passThrough = 0.1;
			};
			
			class HitFuel {
				armor = 1;
				material = -1;
				name = "palivo";
				visual = "FuelHose";
				passThrough = 1;
			};
			
			class HitLFWheel {
				armor = 1;
				material = -1;
				name = "wheel_1_1_steering";
				visual = "LeftFrontWheel";
				passThrough = 0;
			};
			
			class HitLF2Wheel {
				armor = 1;
				material = -1;
				name = "wheel_1_2_steering";
				visual = "LeftBackWheel";
				passThrough = 0;
			};
			
			class HitRFWheel {
				armor = 1;
				material = -1;
				name = "wheel_2_1_steering";
				visual = "RightFrontWheel";
				passThrough = 0;
			};
			
			class HitRF2Wheel {
				armor = 1;
				material = -1;
				name = "wheel_2_2_steering";
				visual = "RightBackWheel";
				passThrough = 0;
			};
			
			class HitEngine {
				armor = 1;
				material = -1;
				name = "motor";
				visual = "";
				passThrough = 1;
			};
		};
		
		class EventHandlers : BP_VehicleEventHandlers {};
	};

	class BP_Heli_Light_01 : B_Heli_Light_01_F
	{
		scope = 2;
		side = 3;
		crew = "";
		displayName = "Rusty OH-6A Cayuse";
		typicalCargo[] = {};
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_vehicles\textures\Heli_Light_01_ext_ion_CO.paa", "\breakingpoint_vehicles\textures\Heli_Light_01_detail_CO.paa"};
		hiddenSelectionsMaterials[] = {"\breakingpoint_vehicles\textures\heli_light_01_ext.rvmat", "\breakingpoint_vehicles\textures\heli_light_01_detail.rvmat"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems {};
		commanderCanSee = 2 + 4 + 8;
		gunnerCanSee = 2 + 4 + 8;
		driverCanSee = 2 + 4 + 8;
		maximumLoad = 1000;
		transportMaxMagazines = 50;
		transportMaxWeapons = 3;
		transportMaxBackpacks = 3;
		supplyRadius = 1.2;
		laserScanner = false;
		
		class HitPoints {
			class HitHull {
				armor = 1;
				material = 51;
				name = "NEtrup";
				visual = "trup";
				passThrough = 0.25;
			};
			
			class HitEngine {
				armor = 0.25;
				material = 51;
				name = "motor";
				visual = "motor";
				passThrough = 1;
			};
			
			class HitAvionics {
				armor = 0.25;
				material = 51;
				name = "elektronika";
				visual = "elektronika";
				passThrough = 0.1;
			};
			
			class HitVRotor {
				armor = 0.25;
				material = 51;
				name = "mala vrtule";
				visual = "mala vrtule staticka";
				passThrough = 0.25;
			};
			
			class HitHRotor {
				armor = 0.25;
				material = 51;
				name = "velka vrtule";
				visual = "velka vrtule staticka";
				passThrough = 0.25;
			};
			
			class HitGlass1 {
				armor = 1;
				material = -1;
				name = "glass1";
				visual = "glass1";
				passThrough = 0;
			};
			
			class HitGlass2 {
				armor = 1;
				material = -1;
				name = "glass2";
				visual = "glass2";
				passThrough = 0;
			};
			
			class HitGlass3 {
				armor = 1;
				material = -1;
				name = "glass3";
				visual = "glass3";
				passThrough = 0;
			};
			
			class HitGlass4 {
				armor = 1;
				material = -1;
				name = "glass4";
				visual = "glass4";
				passThrough = 0;
			};
		};
		
		class EventHandlers : BP_VehicleEventHandlers {};
	};

	class BP_Heli_Transport_01 : B_Heli_Transport_01_F
	{
		scope = 2;
		side = 3;
		crew = "";
		displayName = "Rusty UH-60 StealthHawk";
		typicalCargo[] = {};
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_vehicles\textures\Heli_transport_01_ext01_co.paa", "\breakingpoint_vehicles\textures\Heli_transport_01_ext02_co.paa"};
		hiddenSelectionsMaterials[] = {"\breakingpoint_vehicles\textures\Heli_transport_01_ext01.rvmat", "\breakingpoint_vehicles\textures\Heli_transport_01_ext02.rvmat"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems {};
		commanderCanSee = 2 + 4 + 8;
		gunnerCanSee = 2 + 4 + 8;
		driverCanSee = 2 + 4 + 8;
		maximumLoad = 2500;
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 3;
		supplyRadius = 1.2;
		laserScanner = false;
		
		class HitPoints {
			class HitHull {
				armor = 1;
				material = 51;
				name = "NEtrup";
				visual = "trup";
				passThrough = 0.25;
			};
			
			class HitEngine {
				armor = 0.25;
				material = 51;
				name = "motor";
				visual = "motor";
				passThrough = 1;
			};
			
			class HitAvionics {
				armor = 0.25;
				material = 51;
				name = "elektronika";
				visual = "elektronika";
				passThrough = 0.1;
			};
			
			class HitVRotor {
				armor = 0.25;
				material = 51;
				name = "mala vrtule";
				visual = "mala vrtule staticka";
				passThrough = 0.25;
			};
			
			class HitHRotor {
				armor = 0.25;
				material = 51;
				name = "velka vrtule";
				visual = "velka vrtule staticka";
				passThrough = 0.25;
			};
			
			class HitGlass1 {
				armor = 1;
				material = -1;
				name = "glass1";
				visual = "glass1";
				passThrough = 0;
			};
			
			class HitGlass2 {
				armor = 1;
				material = -1;
				name = "glass2";
				visual = "glass2";
				passThrough = 0;
			};
			
			class HitGlass3 {
				armor = 1;
				material = -1;
				name = "glass3";
				visual = "glass3";
				passThrough = 0;
			};
			
			class HitGlass4 {
				armor = 1;
				material = -1;
				name = "glass4";
				visual = "glass4";
				passThrough = 0;
			};
			
		    class HitGlass5 {
				armor = 1;
				material = -1;
				name = "glass5";
				visual = "glass5";
				passThrough = 0;
			};
			
			class HitGlass6 {
				armor = 1;
				material = -1;
				name = "glass6";
				visual = "glass6";
				passThrough = 0;
			};
		};
		
		/*class UserActions : UserActions
		{
			class DoorL1_Open
			{
				displayName = "Open/Close Left Door";
				radius = 2.5;
				available = 1;
				priority = 0.5;
				showWindow = 0;
				onlyForPlayer = 1;
				position = "camera";
				condition = __EVAL("((this doorPhase 'door_L') == 0) AND Alive(this) AND "+COND_SIDE);
				//condition = "((this doorPhase 'door_L') == 0) AND Alive(this) AND (Side this==Side Player OR Side this == Civilian)";
				//condition = "((this doorPhase 'door_L') == 0) AND Alive(this) AND driver this != player AND gunner this != player";
				statement = "this animateDoor ['door_L', 1]";
			};
			class DoorR1_Open : DoorL1_Open
			{
				condition = __EVAL("((this doorPhase 'door_R') == 0) AND Alive(this) AND"+COND_SIDE);
				statement = "this animateDoor ['door_R', 1]";
			};
			class DoorL1_Close : DoorL1_Open
			{
				condition = __EVAL("((this doorPhase 'door_L') > 0) AND Alive(this) AND"+COND_SIDE);
				statement = "this animateDoor ['door_L', 0]";
			};
			class DoorR1_Close : DoorL1_Close
			{
				condition = __EVAL("((this doorPhase 'door_R') > 0) AND Alive(this) AND"+COND_SIDE);
				statement = "this animateDoor ['door_R', 0]";
			};
		};*/
	
		class EventHandlers : BP_VehicleEventHandlers {};
	};


	class BP_Heli_Light_02_unarmed : O_Heli_Light_02_unarmed_F
	{
		scope = 2;
		side = 3;
		crew = "";
		displayName = "Rusty KA-64 SkyHorse";
		typicalCargo[] = {};
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_vehicles\textures\Heli_Light_02_ext_CO.paa", "\breakingpoint_vehicles\textures\heli_light_02_common_co.paa"};
		hiddenSelectionsMaterials[] = {"\breakingpoint_vehicles\textures\heli_light_02_ext.rvmat", "\breakingpoint_vehicles\textures\heli_light_02_common_base.rvmat"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems {};
		commanderCanSee = 2 + 4 + 8;
		gunnerCanSee = 2 + 4 + 8;
		driverCanSee = 2 + 4 + 8;
		maximumLoad = 2500;
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 3;
		supplyRadius = 1.2;
		laserScanner = false;

		class HitPoints {
			class HitHull {
				armor = 1;
				material = 51;
				name = "NEtrup";
				visual = "trup";
				passThrough = 0.2;
			};
			
			class HitEngine {
				armor = 0.25;
				material = 51;
				name = "motor";
				visual = "motor";
				passThrough = 1;
			};
			
			class HitAvionics {
				armor = 0.25;
				material = 51;
				name = "elektronika";
				visual = "elektronika";
				passThrough = 0.1;
			};
			
			class HitVRotor {
				armor = 0.25;
				material = 51;
				name = "mala vrtule";
				visual = "mala vrtule staticka";
				passThrough = 0.25;
			};
			
			class HitHRotor {
				armor = 0.25;
				material = 51;
				name = "velka vrtule";
				visual = "velka vrtule staticka";
				passThrough = 0.25;
			};
			
			class HitGlass1 {
				armor = 1;
				material = -1;
				name = "glass1";
				visual = "glass1";
				passThrough = 0;
			};
			
			class HitGlass2 {
				armor = 1;
				material = -1;
				name = "glass2";
				visual = "glass2";
				passThrough = 0;
			};
			
			class HitGlass3 {
				armor = 1;
				material = -1;
				name = "glass3";
				visual = "glass3";
				passThrough = 0;
			};
			
			class HitGlass4 {
				armor = 1;
				material = -1;
				name = "glass4";
				visual = "glass4";
				passThrough = 0;
			};
			
		    class HitGlass5 {
				armor = 1;
				material = -1;
				name = "glass5";
				visual = "glass5";
				passThrough = 0;
			};
			
			class HitGlass6 {
				armor = 1;
				material = -1;
				name = "glass6";
				visual = "glass6";
				passThrough = 0;
			};
		};
		
		class EventHandlers : BP_VehicleEventHandlers {};
	};

	class BP_Heli_Transport_02 : I_Heli_Transport_02_F
	{
		scope = 2;
		side = 3;
		crew = "";
		displayName = "Rusty HC3 Merlin";
		typicalCargo[] = {};
		hiddenSelections[]= {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\breakingpoint_vehicles\textures\heli_transport_02_1_Indep_co.paa", "\breakingpoint_vehicles\textures\heli_transport_02_2_Indep_co.paa", "\breakingpoint_vehicles\textures\heli_transport_02_3_Indep_co.paa"};
		hiddenSelectionsMaterials[] = {"\breakingpoint_vehicles\textures\heli_transport_02_1.rvmat", "\breakingpoint_vehicles\textures\heli_transport_02_2.rvmat", "\breakingpoint_vehicles\textures\heli_transport_02_3.rvmat"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems {};
		commanderCanSee = 2 + 4 + 8;
		gunnerCanSee = 2 + 4 + 8;
		driverCanSee = 2 + 4 + 8;
		maximumLoad = 3000;
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 3;
		supplyRadius = 1.2;
		laserScanner = false;

		class HitPoints {
			class HitHull {
				armor = 1;
				material = 51;
				name = "NEtrup";
				visual = "trup";
				passThrough = 0.25;
			};
			
			class HitEngine {
				armor = 0.25;
				material = 51;
				name = "motor";
				visual = "motor";
				passThrough = 1;
			};
			
			class HitAvionics {
				armor = 0.25;
				material = 51;
				name = "elektronika";
				visual = "elektronika";
				passThrough = 0.1;
			};
			
			class HitVRotor {
				armor = 0.25;
				material = 51;
				name = "mala vrtule";
				visual = "mala vrtule staticka";
				passThrough = 0.25;
			};
			
			class HitHRotor {
				armor = 0.25;
				material = 51;
				name = "velka vrtule";
				visual = "velka vrtule staticka";
				passThrough = 0.25;
			};
			
			class HitGlass1 {
				armor = 1;
				material = -1;
				name = "glass1";
				visual = "glass1";
				passThrough = 0;
			};
			
			class HitGlass2 {
				armor = 1;
				material = -1;
				name = "glass2";
				visual = "glass2";
				passThrough = 0;
			};
			
			class HitGlass3 {
				armor = 1;
				material = -1;
				name = "glass3";
				visual = "glass3";
				passThrough = 0;
			};
			
			class HitGlass4 {
				armor = 1;
				material = -1;
				name = "glass4";
				visual = "glass4";
				passThrough = 0;
			};
			
		    class HitGlass5 {
				armor = 1;
				material = -1;
				name = "glass5";
				visual = "glass5";
				passThrough = 0;
			};
			
			class HitGlass6 {
				armor = 1;
				material = -1;
				name = "glass6";
				visual = "glass6";
				passThrough = 0;
			};
		};
		
		/*class UserActions : UserActions
		{
			class DoorL1_Open
			{
				displayName = "Open/Close Left Door";
				priority = 1.5;
				radius = 5.0;  //1.5
				available = 1;
				position = "camera";
				showWindow = 0;
				onlyForPlayer = 1;
				condition = __EVAL("this animationPhase ""door_back_L"" < 0.5 AND (Alive this) AND"+COND_SIDE);
				//statement = "this animateDoor ['door_back_L', 1]";
				//condition = __EVAL("(Alive this) AND"+COND_SIDE);
				statement = "if (this animationPhase 'door_back_L' < 1) then { this animateDoor ['door_back_L',1] } else { this animateDoor ['door_back_L',0] };";
			};
			class DoorR1_Open : DoorL1_Open
			{
				displayName = "Open/Close Right Door";
				condition = __EVAL("this animationPhase ""door_back_R"" < 0.5 AND (Alive this) AND"+COND_SIDE);
				//statement = "this animateDoor ['door_back_R', 1]";
				//condition = __EVAL("(Alive this) AND"+COND_SIDE);
				statement = "if (this animationPhase 'door_back_R' < 1) then { this animateDoor ['door_back_R',1] } else { this animateDoor ['door_back_R',0] };";
			};
			class DoorL1_Close : DoorL1_Open
			{
				condition = __EVAL("this animationPhase ""door_back_L"" > 0.5 AND (Alive this) AND"+COND_SIDE);
				statement = "this animateDoor ['door_back_L', 0]";
			};
			class DoorR1_Close : DoorL1_Close
			{
				condition = __EVAL("this animationPhase ""door_back_R"" > 0.5 AND (Alive this) AND"+COND_SIDE);
				statement = "this animateDoor ['door_back_R', 0]";
			};

			class Ramp_Open : DoorL1_Open
			{
				//userActionID = 55;
				available = 1;
				displayName = "Open Ramp";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='1.8'/> Open Ramp";
				textToolTip = "Open Ramp";
				onlyForPlayer = 1;
				position = "cargoramp";
				//priority = 1.5;
				radius = 6.0;
				//radiusView = 0.2;
				//shortcut = "";
				//showIn3D = 17;
				showWindow = 0;
				condition = __EVAL("(this doorPhase 'CargoRamp_Open' < 0.5) && (Alive this) AND (Player In this) AND"+COND_SIDE);
				statement = "this animateDoor ['CargoRamp_Open', 1]";
			};
			class Ramp_Close : Ramp_Open
			{
				//userActionID = 56;
				displayName = "Close Ramp";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='1.8'/> Close Ramp";
				textToolTip = "Close Ramp";
				condition = __EVAL("(this doorPhase 'CargoRamp_Open' > 0.5) && (Alive this) AND"+COND_SIDE);
				statement = "this animateDoor ['CargoRamp_Open', 0]";
			};

			class DoorRamp_GetIn : Ramp_Open
			{
				priority = 5.5;
				//userActionID = 58;
				radius = 4.0;
				showWindow = 1;
				displayName = "Get In Ramp";
				displayNameDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\getout_ca.paa' size='1.8' shadow=2/> Get In Ramp";
				textToolTip = "Get In Ramp";
				condition = __EVAL("(this animationPhase ""CargoRamp_Open"" >= 0.66) AND (Alive this) AND !(Player In this) AND"+COND_SIDE);
				statement = "TitleText['','BLACK OUT']; Player AssignAsCargo this; Player MoveInCargo this; TitleText['','BLACK IN'];";  // Player Action ['GetInCargo',this];
			};
			// move player out back ramp facing away from vehicle, if not pilot/copilot
			class DoorRamp_GetOut : DoorRamp_GetIn
			{
				priority = 6.2;
				//userActionID = 59;
				radius = 6.0;
				showWindow = 0;
				displayName = "Get out - (Ramp)";
				displayNameDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\getout_ca.paa' size='1.8' shadow=2/> Get out - (Ramp)";
				textToolTip = "Get out - (Ramp)";
				shortcut = "eject";
				condition = __EVAL("(this animationPhase ""CargoRamp_Open"" >= 0.66) AND (Alive this) AND (Player In this) AND (Driver this != Player) AND (this TurretUnit[0] != Player) AND"+COND_SIDE);
				statement = "[this,Player] ExecVM '\breakingpoint_code\events\getOutRamp.sqf';";
			};
			// showWindow of action for outside of vehicle so not annoying in vehicle
			class DoorRamp_out : Ramp_Open
			{
				priority = 1.4;
				displayName = "Open Ramp";
				displayNameDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\getout_ca.paa' size='1.8' shadow=2/> Open Ramp";
				textToolTip = "Open Ramp";
				showWindow = 1;
				condition = __EVAL("(this doorPhase 'CargoRamp_Open' < 0.5) AND (Alive this) AND !(Player In this) AND"+COND_SIDE);
				statement = "this animateDoor ['CargoRamp_Open', 1]";
			};
		};*/
		
		class EventHandlers : BP_VehicleEventHandlers {};
	};
	
	class BP_Offroad_01_gen_F: B_GEN_Offroad_01_gen_F 
	{
		scope = 2;
		side = 3;
		crew = "";
		displayName = "Police Truck";
		typicalCargo[] = {};
		_generalMacro="B_GEN_Offroad_01_gen_F";
		//hiddenSelections[]= {"camo", "camo2", "camo3"};
		//hiddenSelectionsTextures[] = {"\breakingpoint_vehicles\textures\Offroad_01_ext_base03_CO.paa", "\breakingpoint_vehicles\textures\Offroad_01_ext_base03_CO.paa", "\breakingpoint_vehicles\textures\Offroad_01_proxy_CO.paa"};
		//hiddenSelectionsMaterials[] = {"\breakingpoint_vehicles\textures\offroad_01_ext.rvmat", "\breakingpoint_vehicles\textures\offroad_01_ext.rvmat", "\breakingpoint_vehicles\textures\offroad_01_proxy.rvmat"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems {};
		commanderCanSee = 2 + 4 + 8;
		gunnerCanSee = 2 + 4 + 8;
		driverCanSee = 2 + 4 + 8;
		maximumLoad = 1500;
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 3;
		
		class HitPoints {
			class HitGlass1 {
				armor = 0.1;
				material = -1;
				name = "glass1";
				visual = "glass1";
				passThrough = 0;
			};
			
			class HitGlass2 {
				armor = 0.1;
				material = -1;
				name = "glass2";
				visual = "glass2";
				passThrough = 0;
			};
		
			class HitBody {
				armor = 1;
				material = -1;
				name = "karoserie";
				visual = "Hull";
				passThrough = 0;
			};
			
			class HitFuel {
				armor = 1;
				material = -1;
				name = "palivo";
				visual = "FuelHose";
				passThrough = 0.5;
			};
			
			class HitLFWheel {
				armor = 0.8;
				material = -1;
				name = "wheel_1_1_steering";
				visual = "LeftFrontWheel";
				passThrough = 0;
			};
			
			class HitLF2Wheel {
				armor = 0.8;
				material = -1;
				name = "wheel_1_2_steering";
				visual = "LeftBackWheel";
				passThrough = 0;
			};
			
			class HitRFWheel {
				armor = 0.8;
				material = -1;
				name = "wheel_2_1_steering";
				visual = "RightFrontWheel";
				passThrough = 0;
			};
			
			class HitRF2Wheel {
				armor = 0.8;
				material = -1;
				name = "wheel_2_2_steering";
				visual = "RightBackWheel";
				passThrough = 0;
			};
			
			class HitEngine {
				armor = 1;
				material = -1;
				name = "motor";
				visual = "";
				passThrough = 0.2;
			};
		};
		
		class EventHandlers : BP_VehicleEventHandlers {
			init = "_this call BP_fnc_vehicleInit; if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
		};
	};
	
	class BP_Offroad_01_comms_F: C_Offroad_01_comms_F 
	{
		scope = 2;
		side = 3;
		crew = "";
		displayName = "Forest Ranger Truck";
		typicalCargo[] = {};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems {};
		commanderCanSee = 2 + 4 + 8;
		gunnerCanSee = 2 + 4 + 8;
		driverCanSee = 2 + 4 + 8;
		maximumLoad = 1500;
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 3;
		hiddenSelections[] = {"Camo","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"a3\soft_f_enoch\offroad_01\data\offroad_01_ext_ranger_co.paa","a3\soft_f_enoch\offroad_01\data\offroad_01_ext_ranger_co.paa","a3\soft_f_enoch\offroad_01\data\offroad_01_cover_ranger_co.paa"};
		class HitPoints {
			class HitGlass1 {
				armor = 0.1;
				material = -1;
				name = "glass1";
				visual = "glass1";
				passThrough = 0;
			};
			
			class HitGlass2 {
				armor = 0.1;
				material = -1;
				name = "glass2";
				visual = "glass2";
				passThrough = 0;
			};
		
			class HitBody {
				armor = 1;
				material = -1;
				name = "karoserie";
				visual = "Hull";
				passThrough = 0;
			};
			
			class HitFuel {
				armor = 1;
				material = -1;
				name = "palivo";
				visual = "FuelHose";
				passThrough = 0.5;
			};
			
			class HitLFWheel {
				armor = 0.8;
				material = -1;
				name = "wheel_1_1_steering";
				visual = "LeftFrontWheel";
				passThrough = 0;
			};
			
			class HitLF2Wheel {
				armor = 0.8;
				material = -1;
				name = "wheel_1_2_steering";
				visual = "LeftBackWheel";
				passThrough = 0;
			};
			
			class HitRFWheel {
				armor = 0.8;
				material = -1;
				name = "wheel_2_1_steering";
				visual = "RightFrontWheel";
				passThrough = 0;
			};
			
			class HitRF2Wheel {
				armor = 0.8;
				material = -1;
				name = "wheel_2_2_steering";
				visual = "RightBackWheel";
				passThrough = 0;
			};
			
			class HitEngine {
				armor = 1;
				material = -1;
				name = "motor";
				visual = "";
				passThrough = 0.2;
			};
		};
		
		class EventHandlers : BP_VehicleEventHandlers {};
	};
	
	class BP_Offroad_01_F: C_Offroad_01_F 
	{
		scope = 2;
		side = 3;
		crew = "";
		displayName = "Rusty Pickup";
		typicalCargo[] = {};
		hiddenSelections[]= {"camo", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\breakingpoint_vehicles\textures\Offroad_01_ext_base03_CO.paa", "\breakingpoint_vehicles\textures\Offroad_01_ext_base03_CO.paa", "\breakingpoint_vehicles\textures\Offroad_01_proxy_CO.paa"};
		hiddenSelectionsMaterials[] = {"\breakingpoint_vehicles\textures\offroad_01_ext.rvmat", "\breakingpoint_vehicles\textures\offroad_01_ext.rvmat", "\breakingpoint_vehicles\textures\offroad_01_proxy.rvmat"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems {};
		commanderCanSee = 2 + 4 + 8;
		gunnerCanSee = 2 + 4 + 8;
		driverCanSee = 2 + 4 + 8;
		maximumLoad = 1500;
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 3;
		
		class HitPoints {
			class HitGlass1 {
				armor = 0.1;
				material = -1;
				name = "glass1";
				visual = "glass1";
				passThrough = 0;
			};
			
			class HitGlass2 {
				armor = 0.1;
				material = -1;
				name = "glass2";
				visual = "glass2";
				passThrough = 0;
			};
		
			class HitBody {
				armor = 1;
				material = -1;
				name = "karoserie";
				visual = "Hull";
				passThrough = 0;
			};
			
			class HitFuel {
				armor = 1;
				material = -1;
				name = "palivo";
				visual = "FuelHose";
				passThrough = 0.5;
			};
			
			class HitLFWheel {
				armor = 0.8;
				material = -1;
				name = "wheel_1_1_steering";
				visual = "LeftFrontWheel";
				passThrough = 0;
			};
			
			class HitLF2Wheel {
				armor = 0.8;
				material = -1;
				name = "wheel_1_2_steering";
				visual = "LeftBackWheel";
				passThrough = 0;
			};
			
			class HitRFWheel {
				armor = 0.8;
				material = -1;
				name = "wheel_2_1_steering";
				visual = "RightFrontWheel";
				passThrough = 0;
			};
			
			class HitRF2Wheel {
				armor = 0.8;
				material = -1;
				name = "wheel_2_2_steering";
				visual = "RightBackWheel";
				passThrough = 0;
			};
			
			class HitEngine {
				armor = 1;
				material = -1;
				name = "motor";
				visual = "";
				passThrough = 0.2;
			};
		};
		
		class EventHandlers : BP_VehicleEventHandlers {};
	};
	
	class BP_Offroad_02_F:  C_Offroad_01_F 
	{
		scope = 2;
		side = 3;
		crew = "";
		displayName = "Rusty Pickup";
		typicalCargo[] = {};
		hiddenSelections[]= {"camo", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\breakingpoint_vehicles\textures\Offroad_02_ext_base04_CO.paa", "\breakingpoint_vehicles\textures\Offroad_02_ext_base04_CO.paa", "\breakingpoint_vehicles\textures\Offroad_01_proxy_CO.paa"};
		hiddenSelectionsMaterials[] = {"\breakingpoint_vehicles\textures\offroad_02_ext.rvmat", "\breakingpoint_vehicles\textures\offroad_02_ext.rvmat", "\breakingpoint_vehicles\textures\offroad_01_proxy.rvmat"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems {};
		commanderCanSee = 2 + 4 + 8;
		gunnerCanSee = 2 + 4 + 8;
		driverCanSee = 2 + 4 + 8;
		maximumLoad = 1500;
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 3;
		
		class HitPoints {
			class HitGlass1 {
				armor = 0.1;
				material = -1;
				name = "glass1";
				visual = "glass1";
				passThrough = 0;
			};
			
			class HitGlass2 {
				armor = 0.1;
				material = -1;
				name = "glass2";
				visual = "glass2";
				passThrough = 0;
			};
			
			class HitBody {
				armor = 1;
				material = -1;
				name = "karoserie";
				visual = "Hull";
				passThrough = 0;
			};
			
			class HitFuel {
				armor = 1;
				material = -1;
				name = "palivo";
				visual = "FuelHose";
				passThrough = 0.5;
			};
			
			class HitLFWheel {
				armor = 0.8;
				material = -1;
				name = "wheel_1_1_steering";
				visual = "LeftFrontWheel";
				passThrough = 0;
			};
			
			class HitLF2Wheel {
				armor = 0.8;
				material = -1;
				name = "wheel_1_2_steering";
				visual = "LeftBackWheel";
				passThrough = 0;
			};
			
			class HitRFWheel {
				armor = 0.8;
				material = -1;
				name = "wheel_2_1_steering";
				visual = "RightFrontWheel";
				passThrough = 0;
			};
			
			class HitRF2Wheel {
				armor = 0.8;
				material = -1;
				name = "wheel_2_2_steering";
				visual = "RightBackWheel";
				passThrough = 0;
			};
			
			class HitEngine {
				armor = 1;
				material = -1;
				name = "motor";
				visual = "";
				passThrough = 0.2;
			};
		};
		
		class EventHandlers : BP_VehicleEventHandlers {};
	};
	
	class BP_Offroad_03_armed_F:  B_G_Offroad_01_armed_F
	{
		scope = 2;
		side = 3;
		crew = "";
		displayName = "Rusty Pickup (.50cal)";
		typicalCargo[] = {};
		hiddenSelections[]= {"camo", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\breakingpoint_vehicles\textures\Offroad_01_ext_base05_CO.paa", "\breakingpoint_vehicles\textures\Offroad_01_ext_base05_CO.paa", "\breakingpoint_vehicles\textures\Offroad_01_proxy_CO.paa"};
		hiddenSelectionsMaterials[] = {"\breakingpoint_vehicles\textures\offroad_02_ext.rvmat", "\breakingpoint_vehicles\textures\offroad_02_ext.rvmat", "\breakingpoint_vehicles\textures\offroad_01_proxy.rvmat"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems {};
		commanderCanSee = 2 + 4 + 8;
		gunnerCanSee = 2 + 4 + 8;
		driverCanSee = 2 + 4 + 8;
		maximumLoad = 1400;
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 3;
		
		/*
		class Turrets : Turrets
		{
			class M2_Turret : M2_Turret
			{
				weapons[]={"HMG_M2"};
				magazines[]={"100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow"};
			};
		};
		*/
		
		class HitPoints {
			class HitGlass1 {
				armor = 0.1;
				material = -1;
				name = "glass1";
				visual = "glass1";
				passThrough = 0;
			};
			
			class HitGlass2 {
				armor = 0.1;
				material = -1;
				name = "glass2";
				visual = "glass2";
				passThrough = 0;
			};
			
			class HitBody {
				armor = 1;
				material = -1;
				name = "karoserie";
				visual = "Hull";
				passThrough = 0;
			};
			
			class HitFuel {
				armor = 1;
				material = -1;
				name = "palivo";
				visual = "FuelHose";
				passThrough = 0.5;
			};
			
			class HitLFWheel {
				armor = 0.8;
				material = -1;
				name = "wheel_1_1_steering";
				visual = "LeftFrontWheel";
				passThrough = 0;
			};
			
			class HitLF2Wheel {
				armor = 0.8;
				material = -1;
				name = "wheel_1_2_steering";
				visual = "LeftBackWheel";
				passThrough = 0;
			};
			
			class HitRFWheel {
				armor = 0.8;
				material = -1;
				name = "wheel_2_1_steering";
				visual = "RightFrontWheel";
				passThrough = 0;
			};
			
			class HitRF2Wheel {
				armor = 0.8;
				material = -1;
				name = "wheel_2_2_steering";
				visual = "RightBackWheel";
				passThrough = 0;
			};
			
			class HitEngine {
				armor = 1;
				material = -1;
				name = "motor";
				visual = "";
				passThrough = 0.2;
			};
		};
		
		class EventHandlers : BP_VehicleEventHandlers {};
	};
	
	class BP_Quadbike_01: C_Quadbike_01_F 
	{
		scope = 2;
		side = 3;
		crew = "";
		displayName = "Rusty ATV";
		typicalCargo[] = {};
		hiddenSelections[]= {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_vehicles\textures\quadbike_01_civ_black_co.paa", "\breakingpoint_vehicles\textures\quadbike_01_wheel_indep_co.paa"};
		hiddenSelectionsMaterials[] = {"\breakingpoint_vehicles\textures\quadbike_01_base.rvmat", "\breakingpoint_vehicles\textures\quadbike_01_wheel.rvmat"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems {};
		commanderCanSee = 2 + 4 + 8;
		gunnerCanSee = 2 + 4 + 8;
		driverCanSee = 2 + 4 + 8;
		maximumLoad = 250;
		transportMaxMagazines = 15;
		transportMaxWeapons = 2;
		transportMaxBackpacks = 1;
		maxSpeed = 80;
	
		class HitPoints  {
			class HitEngine {
				armor = 2;
				material = -1;
				name = "motor";
				visual = "motor";
				passThrough = 0;
			};
			class HitFuel {
				armor = 1;
				material = -1;
				name = "palivo";
				passThrough = 0.5;
			};
			class HitBody {
				armor = 1;
				material = -1;
				name = "karoserie";
				visual = "";
				passThrough = 0;
			};
			class HitLFWheel {
				armor = 0.8;
				material = -1;
				name = "wheel_1_1_steering";
				visual = "";
				passThrough = 0;
			};
			class HitRFWheel {
				armor = 0.8;
				material = -1;
				name = "wheel_2_1_steering";
				visual = "";
				passThrough = 0;
			};
			class HitRF2Wheel {
				armor = 0.8;
				material = -1;
				name = "wheel_2_2_steering";
				visual = "";
				passThrough = 0;
			};
			class HitLF2Wheel {
				armor = 0.8;
				material = -1;
				name = "wheel_1_2_steering";
				visual = "";
				passThrough = 0;
			};
		};
		
		class EventHandlers : BP_VehicleEventHandlers {};
	};
	
	class BP_Quadbike_02_F: C_Quadbike_01_F 
	{
		scope = 2;
		side = 3;
		crew = "";
		displayName = "Rusty ATV";
		typicalCargo[] = {};
		hiddenSelections[]= {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_vehicles\textures\quadbike_01_co.paa", "\breakingpoint_vehicles\textures\quadbike_01_wheel_indep_co.paa"};
		hiddenSelectionsMaterials[] = {"\breakingpoint_vehicles\textures\quadbike_01_base.rvmat", "\breakingpoint_vehicles\textures\quadbike_01_wheel.rvmat"};
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		commanderCanSee = 2 + 4 + 8;
		gunnerCanSee = 2 + 4 + 8;
		driverCanSee = 2 + 4 + 8;
		maximumLoad = 250;
		transportMaxMagazines = 10;
		transportMaxWeapons = 2;
		transportMaxBackpacks = 1;
		maxSpeed = 80;
		
		class HitPoints  {
			class HitEngine {
				armor = 2;
				material = -1;
				name = "motor";
				visual = "motor";
				passThrough = 0;
			};
			class HitFuel {
				armor = 1;
				material = -1;
				name = "palivo";
				passThrough = 0.5;
			};
			class HitBody {
				armor = 1;
				material = -1;
				name = "karoserie";
				visual = "";
				passThrough = 0;
			};
			class HitLFWheel {
				armor = 1;
				material = -1;
				name = "wheel_1_1_steering";
				visual = "";
				passThrough = 0;
			};
			class HitRFWheel {
				armor = 1;
				material = -1;
				name = "wheel_2_1_steering";
				visual = "";
				passThrough = 0;
			};
			class HitRF2Wheel {
				armor = 1;
				material = -1;
				name = "wheel_2_2_steering";
				visual = "";
				passThrough = 0;
			};
			class HitLF2Wheel {
				armor = 1;
				material = -1;
				name = "wheel_1_2_steering";
				visual = "";
				passThrough = 0;
			};
		};
		
		class EventHandlers : BP_VehicleEventHandlers {};
	};
	
	class BP_SUV_01_F: C_SUV_01_F 
	{
		scope = 2;
		side = 3;
		crew = "";
		displayName = "Rusty Luxury Crossover";
		typicalCargo[] = {};
		hiddenSelections[]= {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_vehicles\textures\suv_01_ext_04_co.paa"};
		hiddenSelectionsMaterials[] = {"\breakingpoint_vehicles\textures\suv_01_ext.rvmat"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems {};
		commanderCanSee = 2 + 4 + 8;
		gunnerCanSee = 2 + 4 + 8;
		driverCanSee = 2 + 4 + 8;
		maximumLoad = 1000;
		transportMaxMagazines = 35;
		transportMaxWeapons = 7;
		transportMaxBackpacks = 5;
		
		class HitPoints {
			class HitGlass1 {
				armor = 0;
				material = -1;
				name = "glass1";
				visual = "glass1";
				passThrough = 0;
			};
			
			class HitGlass2 {
				armor = 0;
				material = -1;
				name = "glass2";
				visual = "glass2";
				passThrough = 0;
			};
			
			class HitGlass3 {
				armor = 0;
				material = -1;
				name = "glass3";
				visual = "glass3";
				passThrough = 0;
			};
			
			class HitGlass4 {
				armor = 0;
				material = -1;
				name = "glass4";
				visual = "glass4";
				passThrough = 0;
			};
			
			class HitGlass5 {
				armor = 0.1;
				material = -1;
				name = "glass5";
				visual = "glass5";
				passThrough = 0;
			};
			
			class HitBody {
				armor = 1;
				material = -1;
				name = "karoserie";
				visual = "Hull";
				passThrough = 0;
			};
			
			class HitFuel {
				armor = 1;
				material = -1;
				name = "palivo";
				visual = "FuelHose";
				passThrough = 0.5;
			};
			
			class HitLFWheel {
				armor = 0.8;
				material = -1;
				name = "wheel_1_1_steering";
				visual = "LeftFrontWheel";
				passThrough = 0;
			};
			
			class HitLF2Wheel {
				armor = 0.8;
				material = -1;
				name = "wheel_1_2_steering";
				visual = "LeftBackWheel";
				passThrough = 0;
			};
			
			class HitRFWheel {
				armor = 0.8;
				material = -1;
				name = "wheel_2_1_steering";
				visual = "RightFrontWheel";
				passThrough = 0;
			};
			
			class HitRF2Wheel {
				armor = 0.8;
				material = -1;
				name = "wheel_2_2_steering";
				visual = "RightBackWheel";
				passThrough = 0;
			};
			
			class HitEngine {
				armor = 1;
				material = -1;
				name = "motor";
				visual = "";
				passThrough = 0.2;
			};
		};
		
		class EventHandlers : BP_VehicleEventHandlers {};
	};
	
	class BP_SUV_02_F: C_SUV_01_F 
	{
		scope = 2;
		side = 3;
		crew = "";
		displayName = "Rusty Luxury Crossover";
		typicalCargo[] = {};
		hiddenSelections[]= {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_vehicles\textures\suv_01_ext_02_co.paa"};
		hiddenSelectionsMaterials[] = {"\breakingpoint_vehicles\textures\suv_02_ext.rvmat"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems {};
		commanderCanSee = 2 + 4 + 8;
		gunnerCanSee = 2 + 4 + 8;
		driverCanSee = 2 + 4 + 8;
		maximumLoad = 1000;
		transportMaxMagazines = 50;
		transportMaxWeapons = 7;
		transportMaxBackpacks = 5;
		
		class HitPoints {
			class HitGlass1 {
				armor = 0;
				material = -1;
				name = "glass1";
				visual = "glass1";
				passThrough = 0;
			};
			
			class HitGlass2 {
				armor = 0;
				material = -1;
				name = "glass2";
				visual = "glass2";
				passThrough = 0;
			};
			
			class HitGlass3 {
				armor = 0;
				material = -1;
				name = "glass3";
				visual = "glass3";
				passThrough = 0;
			};
			
			class HitGlass4 {
				armor = 0;
				material = -1;
				name = "glass4";
				visual = "glass4";
				passThrough = 0;
			};
			
			class HitGlass5 {
				armor = 0.1;
				material = -1;
				name = "glass5";
				visual = "glass5";
				passThrough = 0;
			};
			
			class HitBody {
				armor = 1;
				material = -1;
				name = "karoserie";
				visual = "Hull";
				passThrough = 0;
			};
			
			class HitFuel {
				armor = 1;
				material = -1;
				name = "palivo";
				visual = "FuelHose";
				passThrough = 0.5;
			};
			
			class HitLFWheel {
				armor = 0.8;
				material = -1;
				name = "wheel_1_1_steering";
				visual = "LeftFrontWheel";
				passThrough = 0;
			};
			
			class HitLF2Wheel {
				armor = 0.8;
				material = -1;
				name = "wheel_1_2_steering";
				visual = "LeftBackWheel";
				passThrough = 0;
			};
			
			class HitRFWheel {
				armor = 0.8;
				material = -1;
				name = "wheel_2_1_steering";
				visual = "RightFrontWheel";
				passThrough = 0;
			};
			
			class HitRF2Wheel {
				armor = 0.8;
				material = -1;
				name = "wheel_2_2_steering";
				visual = "RightBackWheel";
				passThrough = 0;
			};
			
			class HitEngine {
				armor = 1;
				material = -1;
				name = "motor";
				visual = "";
				passThrough = 0.2;
			};
		};
		
		class EventHandlers : BP_VehicleEventHandlers {};
	};
	
	class BP_Hatchback_01_F: C_Hatchback_01_F 
	{
		scope = 2;
		side = 3;
		crew = "";
		displayName = "Rusty Car";
		typicalCargo[] = {};
		hiddenSelections[]= {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_vehicles\textures\hatchback_01_ext_base02_co.paa"};
		hiddenSelectionsMaterials[] = {"\breakingpoint_vehicles\textures\hatchback_01_paint.rvmat"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems {};
		commanderCanSee = 2 + 4 + 8;
		gunnerCanSee = 2 + 4 + 8;
		driverCanSee = 2 + 4 + 8;
		maximumLoad = 1000;
		transportMaxMagazines = 25;
		transportMaxWeapons = 4;
		transportMaxBackpacks = 3;
		
		class HitPoints {
			class HitGlass1 {
				armor = 0;
				material = -1;
				name = "glass1";
				visual = "glass1";
				passThrough = 0;
			};
			
			class HitGlass2 {
				armor = 0;
				material = -1;
				name = "glass2";
				visual = "glass2";
				passThrough = 0;
			};
			
			class HitGlass3 {
				armor = 0;
				material = -1;
				name = "glass3";
				visual = "glass3";
				passThrough = 0;
			};
			
			class HitGlass4 {
				armor = 0;
				material = -1;
				name = "glass4";
				visual = "glass4";
				passThrough = 0;
			};
			
			class HitBody {
				armor = 1;
				material = -1;
				name = "karoserie";
				visual = "Hull";
				passThrough = 0;
			};
			
			class HitFuel {
				armor = 1;
				material = -1;
				name = "palivo";
				visual = "FuelHose";
				passThrough = 0.5;
			};
			
			class HitLFWheel {
				armor = 0.5;
				material = -1;
				name = "wheel_1_1_steering";
				visual = "LeftFrontWheel";
				passThrough = 0;
			};
			
			class HitLF2Wheel {
				armor = 0.5;
				material = -1;
				name = "wheel_1_2_steering";
				visual = "LeftBackWheel";
				passThrough = 0;
			};
			
			class HitRFWheel {
				armor = 0.5;
				material = -1;
				name = "wheel_2_1_steering";
				visual = "RightFrontWheel";
				passThrough = 0;
			};
			
			class HitRF2Wheel {
				armor = 0.5;
				material = -1;
				name = "wheel_2_2_steering";
				visual = "RightBackWheel";
				passThrough = 0;
			};
			
			class HitEngine {
				armor = 1;
				material = -1;
				name = "motor";
				visual = "";
				passThrough = 0.2;
			};
		};
		
		class EventHandlers : BP_VehicleEventHandlers {};
	};
	
	class BP_Hatchback_02_F: C_Hatchback_01_F 
	{
		scope = 2;
		side = 3;
		crew = "";
		displayName = "Rusty Car";
		typicalCargo[] = {};
		hiddenSelections[]= {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_vehicles\textures\hatchback_01_ext_base01_co.paa"};
		hiddenSelectionsMaterials[] = {"\breakingpoint_vehicles\textures\hatchback_02_paint.rvmat"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems {};
		commanderCanSee = 2 + 4 + 8;
		gunnerCanSee = 2 + 4 + 8;
		driverCanSee = 2 + 4 + 8;
		maximumLoad = 1000;
		transportMaxMagazines = 25;
		transportMaxWeapons = 3;
		transportMaxBackpacks = 3;
		
		class HitPoints {
			class HitGlass1 {
				armor = 0;
				material = -1;
				name = "glass1";
				visual = "glass1";
				passThrough = 0;
			};
			
			class HitGlass2 {
				armor = 0;
				material = -1;
				name = "glass2";
				visual = "glass2";
				passThrough = 0;
			};
			
			class HitGlass3 {
				armor = 0;
				material = -1;
				name = "glass3";
				visual = "glass3";
				passThrough = 0;
			};
			
			class HitGlass4 {
				armor = 0;
				material = -1;
				name = "glass4";
				visual = "glass4";
				passThrough = 0;
			};
			
			class HitBody {
				armor = 1;
				material = -1;
				name = "karoserie";
				visual = "Hull";
				passThrough = 0.2;
			};
			
			class HitFuel {
				armor = 1;
				material = -1;
				name = "palivo";
				visual = "FuelHose";
				passThrough = 0.5;
			};
			
			class HitLFWheel {
				armor = 0.5;
				material = -1;
				name = "wheel_1_1_steering";
				visual = "LeftFrontWheel";
				passThrough = 0;
			};
			
			class HitLF2Wheel {
				armor = 0.5;
				material = -1;
				name = "wheel_1_2_steering";
				visual = "LeftBackWheel";
				passThrough = 0;
			};
			
			class HitRFWheel {
				armor = 0.5;
				material = -1;
				name = "wheel_2_1_steering";
				visual = "RightFrontWheel";
				passThrough = 0;
			};
			
			class HitRF2Wheel {
				armor = 0.5;
				material = -1;
				name = "wheel_2_2_steering";
				visual = "RightBackWheel";
				passThrough = 0;
			};
			
			class HitEngine {
				armor = 1;
				material = -1;
				name = "motor";
				visual = "";
				passThrough = 0.2;
			};
		};
		
		class EventHandlers : BP_VehicleEventHandlers {};
	};
	
	class BP_Hatchback_01_sport_F: C_Hatchback_01_sport_F 
	{
		scope = 2;
		side = 3;
		crew = "";
		displayName = "Rusty Car (Turbo)";
		typicalCargo[] = {};
		hiddenSelections[]= {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_vehicles\textures\hatchback_01_ext_sport01_co.paa"};
		hiddenSelectionsMaterials[] = {"\breakingpoint_vehicles\textures\hatchback_03_paint.rvmat"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems {};
		commanderCanSee = 2 + 4 + 8;
		gunnerCanSee = 2 + 4 + 8;
		driverCanSee = 2 + 4 + 8;
		maximumLoad = 1000;
		transportMaxMagazines = 20;
		transportMaxWeapons = 2;
		transportMaxBackpacks = 2;
		
		class HitPoints {
			class HitGlass1 {
				armor = 0;
				material = -1;
				name = "glass1";
				visual = "glass1";
				passThrough = 0;
			};
			
			class HitGlass2 {
				armor = 0;
				material = -1;
				name = "glass2";
				visual = "glass2";
				passThrough = 0;
			};
			
			class HitGlass3 {
				armor = 0;
				material = -1;
				name = "glass3";
				visual = "glass3";
				passThrough = 0;
			};
			
			class HitGlass4 {
				armor = 0;
				material = -1;
				name = "glass4";
				visual = "glass4";
				passThrough = 0;
			};
			
			class HitBody {
				armor = 1;
				material = -1;
				name = "karoserie";
				visual = "Hull";
				passThrough = 0.2;
			};
			
			class HitFuel {
				armor = 1;
				material = -1;
				name = "palivo";
				visual = "FuelHose";
				passThrough = 0.5;
			};
			
			class HitLFWheel {
				armor = 0.5;
				material = -1;
				name = "wheel_1_1_steering";
				visual = "LeftFrontWheel";
				passThrough = 0;
			};
			
			class HitLF2Wheel {
				armor = 0.5;
				material = -1;
				name = "wheel_1_2_steering";
				visual = "LeftBackWheel";
				passThrough = 0;
			};
			
			class HitRFWheel {
				armor = 0.5;
				material = -1;
				name = "wheel_2_1_steering";
				visual = "RightFrontWheel";
				passThrough = 0;
			};
			
			class HitRF2Wheel {
				armor = 0.5;
				material = -1;
				name = "wheel_2_2_steering";
				visual = "RightBackWheel";
				passThrough = 0;
			};
			
			class HitEngine {
				armor = 1;
				material = -1;
				name = "motor";
				visual = "";
				passThrough = 0.2;
			};
		};
		
		class EventHandlers : BP_VehicleEventHandlers {};
	};
	
	class BP_Hatchback_02_sport_F: C_Hatchback_01_sport_F 
	{
		scope = 2;
		side = 3;
		crew = "";
		displayName = "Rusty Car (Turbo)";
		typicalCargo[] = {};
		hiddenSelections[]= {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_vehicles\textures\hatchback_01_ext_sport06_co.paa"};
		hiddenSelectionsMaterials[] = {"\breakingpoint_vehicles\textures\hatchback_04_paint.rvmat"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems {};
		commanderCanSee = 2 + 4 + 8;
		gunnerCanSee = 2 + 4 + 8;
		driverCanSee = 2 + 4 + 8;
		maximumLoad = 1000;
		transportMaxMagazines = 20;
		transportMaxWeapons = 2;
		transportMaxBackpacks = 2;
		
		class HitPoints {
			class HitGlass1 {
				armor = 0;
				material = -1;
				name = "glass1";
				visual = "glass1";
				passThrough = 0;
			};
			
			class HitGlass2 {
				armor = 0;
				material = -1;
				name = "glass2";
				visual = "glass2";
				passThrough = 0;
			};
			
			class HitGlass3 {
				armor = 0;
				material = -1;
				name = "glass3";
				visual = "glass3";
				passThrough = 0;
			};
			
			class HitGlass4 {
				armor = 0;
				material = -1;
				name = "glass4";
				visual = "glass4";
				passThrough = 0;
			};
			
			class HitBody {
				armor = 1;
				material = -1;
				name = "karoserie";
				visual = "Hull";
				passThrough = 0.2;
			};
			
			class HitFuel {
				armor = 1;
				material = -1;
				name = "palivo";
				visual = "FuelHose";
				passThrough = 0.5;
			};
			
			class HitLFWheel {
				armor = 0.5;
				material = -1;
				name = "wheel_1_1_steering";
				visual = "LeftFrontWheel";
				passThrough = 0;
			};
			
			class HitLF2Wheel {
				armor = 0.5;
				material = -1;
				name = "wheel_1_2_steering";
				visual = "LeftBackWheel";
				passThrough = 0;
			};
			
			class HitRFWheel {
				armor = 0.5;
				material = -1;
				name = "wheel_2_1_steering";
				visual = "RightFrontWheel";
				passThrough = 0;
			};
			
			class HitRF2Wheel {
				armor = 0.5;
				material = -1;
				name = "wheel_2_2_steering";
				visual = "RightBackWheel";
				passThrough = 0;
			};
			
			class HitEngine {
				armor = 1;
				material = -1;
				name = "motor";
				visual = "";
				passThrough = 0.2;
			};
		};
		
		class EventHandlers : BP_VehicleEventHandlers {};
	};
	/*
	class BP_Van_01_Box_F: C_Van_01_box_F 
	{
		scope = 2;
		side = 3;
		crew = "";
		typicalCargo[] = {};
		hiddenSelections[]= {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_vehicles\textures\van_01_ext_CO.paa", "\breakingpoint_vehicles\textures\van_01_ext_CO.paa"};
		hiddenSelectionsMaterials[] = {"\breakingpoint_vehicles\textures\van_01_ext.rvmat", "\breakingpoint_vehicles\textures\van_01_adds.rvmat"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems {};
		commanderCanSee = 2 + 4 + 8;
		gunnerCanSee = 2 + 4 + 8;
		driverCanSee = 2 + 4 + 8;
		maximumLoad = 950;
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 10;
		
		class EventHandlers : BP_VehicleEventHandlers {};
	};
	*/
	class BP_Van_01_Fuel_F:  I_G_Van_01_fuel_F 
	{
		scope = 2;
		side = 3;
		crew = "";
		displayName = "Rusty FuelTruck";
		typicalCargo[] = {};
		hiddenSelections[]= {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_vehicles\textures\van_01_ext_CO.paa", "\breakingpoint_vehicles\textures\van_01_tank_CO.paa"};
		hiddenSelectionsMaterials[] = {"\breakingpoint_vehicles\textures\van_01_ext.rvmat", "\breakingpoint_vehicles\textures\van_01_tank.rvmat"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems {};
		commanderCanSee = 2 + 4 + 8;
		gunnerCanSee = 2 + 4 + 8;
		driverCanSee = 2 + 4 + 8;
		maximumLoad = 450;
		transportMaxMagazines = 50;
		transportMaxWeapons = 5;
		transportMaxBackpacks = 10;
		transportFuel = 1000;
		
		class HitPoints {
			class HitGlass1 {
				armor = 0;
				material = -1;
				name = "glass1";
				visual = "glass1";
				passThrough = 0;
			};
			
			class HitBody {
				armor = 0.5;
				material = -1;
				name = "karoserie";
				visual = "Hull";
				passThrough = 0.2;
			};
			
			class HitFuel {
				armor = 0.5;
				material = -1;
				name = "palivo";
				visual = "FuelHose";
				passThrough = 0.5;
			};
			
			class HitFuel2 {
				armor = 0.5;
				material = -1;
				name = "palivo";
				visual = "FuelHose";
				passThrough = 0.5;
			};
			
			class HitLFWheel {
				armor = 0.5;
				material = -1;
				name = "wheel_1_1_steering";
				visual = "LeftFrontWheel";
				passThrough = 0;
			};
			
			class HitLF2Wheel {
				armor = 0.5;
				material = -1;
				name = "wheel_1_2_steering";
				visual = "LeftBackWheel";
				passThrough = 0;
			};
			
			class HitRFWheel {
				armor = 0.5;
				material = -1;
				name = "wheel_2_1_steering";
				visual = "RightFrontWheel";
				passThrough = 0;
			};
			
			class HitRF2Wheel {
				armor = 0.5;
				material = -1;
				name = "wheel_2_2_steering";
				visual = "RightBackWheel";
				passThrough = 0;
			};
			
			class HitEngine {
				armor = 0.5;
				material = -1;
				name = "motor";
				visual = "";
				passThrough = 0.2;
			};
		};
		
		class EventHandlers : BP_VehicleEventHandlers {};
	};
	
	class BP_Truck_02_fuel_F:  C_Truck_02_fuel_F 
	{
		scope = 2;
		side = 3;
		crew = "";
		displayName = "Kamas (Fuel)";
		typicalCargo[] = {};
		//hiddenSelections[]= {"camo1", "camo2"};
		//hiddenSelectionsTextures[] = {"\breakingpoint_vehicles\textures\truck_02_kab_opfor_co.paa", "\breakingpoint_vehicles\textures\truck_02_kuz_opfor_co.paa"};
		//hiddenSelectionsMaterials[] = {"\breakingpoint_vehicles\textures\truck_02_kab.rvmat", "\breakingpoint_vehicles\textures\truck_02_kuz.rvmat"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems {};
		commanderCanSee = 2 + 4 + 8;
		gunnerCanSee = 2 + 4 + 8;
		driverCanSee = 2 + 4 + 8;
		maximumLoad = 450;
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 10;
		transportFuel = 1200;
		
		class HitPoints {
			class HitGlass1 {
				armor = 0.1;
				material = -1;
				name = "glass1";
				visual = "glass1";
				passThrough = 0;
			};
			
			class HitGlass2 {
				armor = 0.1;
				material = -1;
				name = "glass2";
				visual = "glass2";
				passThrough = 0;
			};
			
			class HitGlass3 {
				armor = 0.1;
				material = -1;
				name = "glass3";
				visual = "glass3";
				passThrough = 0;
			};
			
			class HitGlass4 {
				armor = 0.1;
				material = -1;
				name = "glass4";
				visual = "glass4";
				passThrough = 0;
			};
			
			class HitBody {
				armor = 1;
				material = -1;
				name = "karoserie";
				visual = "Hull";
				passThrough = 0.2;
			};
			
			class HitFuel {
				armor = 1;
				material = -1;
				name = "palivo";
				visual = "FuelHose";
				passThrough = 0.5;
			};
			
			class HitLFWheel {
				armor = 0.7000;
				material = -1;
				name = "wheel_1_1_steering";
				visual = "LeftFrontWheel";
				passThrough = 0;
			};
			
			class HitLF2Wheel {
				armor = 0.7000;
				material = -1;
				name = "wheel_1_2_steering";
				visual = "LeftMiddleWheel";
				passThrough = 0;
			};
			
			class HitRFWheel {
				armor = 0.7000;
				material = -1;
				name = "wheel_2_1_steering";
				visual = "RightFrontWheel";
				passThrough = 0;
			};
			
			class HitRF2Wheel {
				armor = 0.7000;
				material = -1;
				name = "wheel_2_2_steering";
				visual = "RightMiddleWheel";
				passThrough = 0;
			};
			
			class HitEngine {
				armor = 1;
				material = -1;
				name = "motor";
				visual = "Engine";
				passThrough = 0.2;
			};

            class HitLMWheel {
				armor = 0.7000;
				material = -1;
				name = "wheel_1_3_steering";
				visual = "LeftBackWheel";
				passThrough = 0;
			};

            class HitRMWheel {
				armor = 0.7000;
				material = -1;
				name = "wheel_2_3_steering";
				visual = "RightBackWheel";
				passThrough = 0;
			};
		};

		//class EventHandlers : BP_VehicleEventHandlers {};
		class EventHandlers : BP_VehicleEventHandlers {
			init = "_this call BP_fnc_vehicleInit; if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	
	class BP_Van_01_Transport_F:  I_G_Van_01_transport_F 
	{
		scope = 2;
		side = 3;
		crew = "";
		typicalCargo[] = {};
		hiddenSelections[]= {"camo1", "camo2"};
		//hiddenSelectionsTextures[] = {"\breakingpoint_vehicles\textures\van_01_ext_CO.paa", "\breakingpoint_vehicles\textures\van_01_adds_CO.paa"};
		hiddenSelectionsMaterials[] = {"\breakingpoint_vehicles\textures\van_01_ext.rvmat", "\breakingpoint_vehicles\textures\van_01_adds.rvmat"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems {};
		commanderCanSee = 2 + 4 + 8;
		gunnerCanSee = 2 + 4 + 8;
		driverCanSee = 2 + 4 + 8;
		maximumLoad = 1600;
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 10;
		
		class HitPoints {
			class HitGlass1 {
				armor = 0;
				material = -1;
				name = "glass1";
				visual = "glass1";
				passThrough = 0;
			};
			
			class HitBody {
				armor = 0.5;
				material = -1;
				name = "karoserie";
				visual = "Hull";
				passThrough = 0.2;
			};
			
			class HitFuel {
				armor = 0.5;
				material = -1;
				name = "palivo";
				visual = "FuelHose";
				passThrough = 0.5;
			};
			
			class HitLFWheel {
				armor = 0.5;
				material = -1;
				name = "wheel_1_1_steering";
				visual = "LeftFrontWheel";
				passThrough = 0;
			};
			
			class HitLF2Wheel {
				armor = 0.5;
				material = -1;
				name = "wheel_1_2_steering";
				visual = "LeftBackWheel";
				passThrough = 0;
			};
			
			class HitRFWheel {
				armor = 0.5;
				material = -1;
				name = "wheel_2_1_steering";
				visual = "RightFrontWheel";
				passThrough = 0;
			};
			
			class HitRF2Wheel {
				armor = 0.5;
				material = -1;
				name = "wheel_2_2_steering";
				visual = "RightBackWheel";
				passThrough = 0;
			};
			
			class HitEngine {
				armor = 0.5;
				material = -1;
				name = "motor";
				visual = "";
				passThrough = 0.2;
			};
		};
		
		class EventHandlers : BP_VehicleEventHandlers {};
	};
	
	class BP_Truck_02_transport_F:  O_Truck_02_transport_F 
	{
		scope = 2;
		side = 3;
		crew = "";
		displayName = "Rusty Kamas (Open)";
		typicalCargo[] = {};
		hiddenSelections[]= {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_vehicles\textures\truck_02_kab_opfor_co.paa", "\breakingpoint_vehicles\textures\truck_02_kuz_opfor_co.paa"};
		hiddenSelectionsMaterials[] = {"\breakingpoint_vehicles\textures\truck_02_kab.rvmat", "\breakingpoint_vehicles\textures\truck_02_kuz.rvmat"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems {};
		commanderCanSee = 2 + 4 + 8;
		gunnerCanSee = 2 + 4 + 8;
		driverCanSee = 2 + 4 + 8;
		maximumLoad = 3000;
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 10;
		
		class HitPoints {
			class HitGlass1 {
				armor = 0.1;
				material = -1;
				name = "glass1";
				visual = "glass1";
				passThrough = 0;
			};
			
			class HitGlass2 {
				armor = 0.1;
				material = -1;
				name = "glass2";
				visual = "glass2";
				passThrough = 0;
			};
			
			class HitGlass3 {
				armor = 0.1;
				material = -1;
				name = "glass3";
				visual = "glass3";
				passThrough = 0;
			};
			
			class HitGlass4 {
				armor = 0.1;
				material = -1;
				name = "glass4";
				visual = "glass4";
				passThrough = 0;
			};
			
			class HitBody {
				armor = 1;
				material = -1;
				name = "karoserie";
				visual = "Hull";
				passThrough = 0.2;
			};
			
			class HitFuel {
				armor = 1;
				material = -1;
				name = "palivo";
				visual = "FuelHose";
				passThrough = 0.5;
			};
			
			class HitLFWheel {
				armor = 0.7000;
				material = -1;
				name = "wheel_1_1_steering";
				visual = "LeftFrontWheel";
				passThrough = 0;
			};
			
			class HitLF2Wheel {
				armor = 0.7000;
				material = -1;
				name = "wheel_1_2_steering";
				visual = "LeftMiddleWheel";
				passThrough = 0;
			};
			
			class HitRFWheel {
				armor = 0.7000;
				material = -1;
				name = "wheel_2_1_steering";
				visual = "RightFrontWheel";
				passThrough = 0;
			};
			
			class HitRF2Wheel {
				armor = 0.7000;
				material = -1;
				name = "wheel_2_2_steering";
				visual = "RightMiddleWheel";
				passThrough = 0;
			};
			
			class HitEngine {
				armor = 1;
				material = -1;
				name = "motor";
				visual = "Engine";
				passThrough = 0.2;
			};

            class HitLMWheel {
				armor = 0.7000;
				material = -1;
				name = "wheel_1_3_steering";
				visual = "LeftBackWheel";
				passThrough = 0;
			};

            class HitRMWheel {
				armor = 0.7000;
				material = -1;
				name = "wheel_2_3_steering";
				visual = "RightBackWheel";
				passThrough = 0;
			};
		};

		class EventHandlers : BP_VehicleEventHandlers {};
	};
	
	class BP_Truck_02_covered_F:  O_Truck_02_covered_F 
	{
		scope = 2;
		side = 3;
		crew = "";
		displayName = "Rusty Kamas (Enclosed)";
		typicalCargo[] = {};
		hiddenSelections[]= {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_vehicles\textures\truck_02_kab_opfor_co.paa", "\breakingpoint_vehicles\textures\truck_02_kuz_opfor_co.paa"};
		hiddenSelectionsMaterials[] = {"\breakingpoint_vehicles\textures\truck_02_kab.rvmat", "\breakingpoint_vehicles\textures\truck_02_kuz.rvmat"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems {};
		commanderCanSee = 2 + 4 + 8;
		gunnerCanSee = 2 + 4 + 8;
		driverCanSee = 2 + 4 + 8;
		maximumLoad = 3000;
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 10;
		
		class HitPoints {
			class HitGlass1 {
				armor = 0.1;
				material = -1;
				name = "glass1";
				visual = "glass1";
				passThrough = 0;
			};
			
			class HitGlass2 {
				armor = 0.1;
				material = -1;
				name = "glass2";
				visual = "glass2";
				passThrough = 0;
			};
			
			class HitGlass3 {
				armor = 0.1;
				material = -1;
				name = "glass3";
				visual = "glass3";
				passThrough = 0;
			};
			
			class HitGlass4 {
				armor = 0.1;
				material = -1;
				name = "glass4";
				visual = "glass4";
				passThrough = 0;
			};
			
			class HitBody {
				armor = 1;
				material = -1;
				name = "karoserie";
				visual = "Hull";
				passThrough = 0.2;
			};
			
			class HitFuel {
				armor = 1;
				material = -1;
				name = "palivo";
				visual = "FuelHose";
				passThrough = 0.5;
			};
			
			class HitLFWheel {
				armor = 0.7000;
				material = -1;
				name = "wheel_1_1_steering";
				visual = "LeftFrontWheel";
				passThrough = 0;
			};
			
			class HitLF2Wheel {
				armor = 0.7000;
				material = -1;
				name = "wheel_1_2_steering";
				visual = "LeftMiddleWheel";
				passThrough = 0;
			};
			
			class HitRFWheel {
				armor = 0.7000;
				material = -1;
				name = "wheel_2_1_steering";
				visual = "RightFrontWheel";
				passThrough = 0;
			};
			
			class HitRF2Wheel {
				armor = 0.7000;
				material = -1;
				name = "wheel_2_2_steering";
				visual = "RightMiddleWheel";
				passThrough = 0;
			};
			
			class HitEngine {
				armor = 1;
				material = -1;
				name = "motor";
				visual = "Engine";
				passThrough = 0.2;
			};

            class HitLMWheel {
				armor = 1;
				material = -1;
				name = "wheel_1_3_steering";
				visual = "LeftBackWheel";
				passThrough = 0;
			};

            class HitRMWheel {
				armor = 1;
				material = -1;
				name = "wheel_2_3_steering";
				visual = "RightBackWheel";
				passThrough = 0;
			};
		};
		
		class EventHandlers : BP_VehicleEventHandlers {};
	};
	
	class BP_MRAP_03_F:  I_MRAP_03_F 
	{
		scope = 2;
		side = 3;
		crew = "";
		displayName = "Rusty Fennek";
		typicalCargo[] = {};
		hiddenSelections[]= {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_vehicles\textures\mrap_03_ext_co.paa", "\breakingpoint_vehicles\textures\turret_co.paa"};
		hiddenSelectionsMaterials[] = {"\breakingpoint_vehicles\textures\mrap_03_ext.rvmat", "\breakingpoint_vehicles\textures\turret.rvmat"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems {};
		commanderCanSee = 2 + 4 + 8;
		gunnerCanSee = 2 + 4 + 8;
		driverCanSee = 2 + 4 + 8;
		maximumLoad = 1250;
		transportMaxMagazines = 50;
		transportMaxWeapons = 7;
		transportMaxBackpacks = 10;
		
		armor = 50;
		
		//Redefine Render Targets To Remove ThermaL
		class RenderTargets {
			class commander_display {
				renderTarget = "rendertarget0";
				
				class CameraView1 {
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderVisionMode = 0;
					renderQuality = 2;
					fov = 0.5;
				};
			};
			
			class driver_display {
				renderTarget = "rendertarget2";
				
				class CameraView1 {
					pointPosition = "PIP2_pos";
					pointDirection = "PIP2_dir";
					renderVisionMode = 0;
					renderQuality = 2;
					fov = 0.6;
				};
			};
			
			class mirrorL {
				renderTarget = "rendertarget4";
				
				class CameraView1 {
					pointPosition = "PIP4_pos";
					pointDirection = "PIP4_dir";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 0.35;
				};
			};
			
			class mirrorR {
				renderTarget = "rendertarget5";
				
				class CameraView1 {
					pointPosition = "PIP5_pos";
					pointDirection = "PIP5_dir";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 0.35;
				};
			};
		};
		
		class HitPoints {
			class HitGlass1 {
				armor = 0.8;
				material = -1;
				name = "glass1";
				visual = "glass1";
				passThrough = 0;
			};
			
			class HitGlass2 {
				armor = 0.8;
				material = -1;
				name = "glass2";
				visual = "glass2";
				passThrough = 0;
			};
			
			class HitGlass3 {
				armor = 0.8;
				material = -1;
				name = "glass3";
				visual = "glass3";
				passThrough = 0;
			};
			
			class HitGlass4 {
				armor = 0.8;
				material = -1;
				name = "glass4";
				visual = "glass4";
				passThrough = 0;
			};
			
			class HitGlass5 {
				armor = 0.8;
				material = -1;
				name = "glass5";
				visual = "glass5";
				passThrough = 0;
			};
			
			class HitBody {
				armor = 1;
				material = -1;
				name = "karoserie";
				visual = "Hull";
				passThrough = 0.1;
			};
			
			class HitFuel {
				armor = 1;
				material = -1;
				name = "palivo";
				visual = "FuelHose";
				passThrough = 0.5;
			};
			
			class HitLFWheel {
				armor = 0.50000;
				material = -1;
				name = "wheel_1_1_steering";
				visual = "LeftFrontWheel";
				passThrough = 0;
			};
			
			class HitLF2Wheel {
				armor = 0.50000;
				material = -1;
				name = "wheel_1_2_steering";
				visual = "LeftBackWheel";
				passThrough = 0;
			};
			
			class HitRFWheel {
				armor = 0.50000;
				material = -1;
				name = "wheel_2_1_steering";
				visual = "RightFrontWheel";
				passThrough = 0;
			};
			
			class HitRF2Wheel {
				armor = 0.50000;
				material = -1;
				name = "wheel_2_2_steering";
				visual = "RightBackWheel";
				passThrough = 0;
			};
			
			class HitEngine {
				armor = 1;
				material = -1;
				name = "motor";
				visual = "";
				passThrough = 1;
			};
		};
		
		class EventHandlers : BP_VehicleEventHandlers {};
	};
	
	class BP_Boat_Civil_01_police_F:  C_Boat_Civil_01_police_F 
	{
		scope = 2;
		side = 3;
		crew = "";
		displayName = "Rusty SpeedBoat";
		typicalCargo[] = {};
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint_vehicles\textures\boat_civil_01_ext_co.paa"};
		hiddenSelectionsMaterials[] = {"\breakingpoint_vehicles\textures\boat_civil_01_ext.rvmat"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems {};
		commanderCanSee = 2 + 4 + 8;
		gunnerCanSee = 2 + 4 + 8;
		driverCanSee = 2 + 4 + 8;
		maximumLoad = 250;
		transportMaxMagazines = 10;
		transportMaxWeapons = 0;
		transportMaxBackpacks = 0;
		maxSpeed = 85;
		
		class HitPoints {
			class HitEngine {
				armor = 1;
				material = 60;
				name = "engine";
				visual = "";
				passThrough = 1;
				radius = 0.1;
			};
			
			class HitHull {
				armor = 1;
				material = 50;
				name = "karoserie";
				visual = "zbytek";
				passThrough = 0.1;
				explosionShielding = 1;
			};
		};
		
		class EventHandlers : BP_VehicleEventHandlers {};
	};
	
    class BP_Boat_Transport_01_F:  B_Boat_Transport_01_F 
	{
		scope = 2;
		side = 3;
		crew = "";
		displayName = "Rusty PBX";
		typicalCargo[] = {};
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint_vehicles\textures\boat_transport_01_co.paa"};
		hiddenSelectionsMaterials[] = {"\breakingpoint_vehicles\textures\boat_transport_01.rvmat"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems {};
		commanderCanSee = 2 + 4 + 8;
		gunnerCanSee = 2 + 4 + 8;
		driverCanSee = 2 + 4 + 8;
		maximumLoad = 250;
		transportMaxMagazines = 10;
		transportMaxWeapons = 0;
		transportMaxBackpacks = 0;
		maxSpeed = 45;
		
		class HitPoints {
			class HitBody {
				armor = 1;
				material = 50;
				name = "hull";
				visual = "zbytek";
				passThrough = 0.1;
			};
			
			class HitEngine {
				armor = 1;
				material = -1;
				name = "Engine";
				visual = "";
				passThrough = 1;
			};
		};
		
		class EventHandlers : BP_VehicleEventHandlers {};
	};
};
