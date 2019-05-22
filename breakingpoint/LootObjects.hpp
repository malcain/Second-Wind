/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/

//Base Class
class BP_LootBox : Thing 
{
	scope = public;
	displayName = "Loot Box";
	mapSize = 0.7;
	accuracy = 0.2;
	vehicleClass = "Survival";
	maximumLoad = 750;
	transportMaxMagazines = 50;
	transportMaxWeapons = 10;
	transportMaxBackpacks = 3;
	destrType = "DestructNo";
	hideDistance = 100;
	class EventHandlers {
		init = "_this call BP_fnc_onLootInit;";
		local = "_this call BP_fnc_onLootLocal;";
	};
};
	
/* Medic Boxes*/
class BP_MedicalBox: BP_LootBox
{
	scope = public;
	displayName = "Medical Box";
	model = "\breakingpoint\models\bp_medicalbox.p3d";
};

class BP_ResearcherBox: BP_LootBox
{
	scope = public;
	displayName = "Medical Research Box";
	model = "plp_containers\StcMultiboxes\plp_cts_MultiboxSmallWhite.p3d";
};

class BP_MedicalBag: BP_LootBox
{
	scope = public;
	displayName = "Medical Bag";
	model = "\A3\Props_F_Orange\Humanitarian\Camps\FirstAidKit_01_closed_F.p3d";
};

class BP_MedicalbagOpen: BP_LootBox
{
	scope = public;
	displayName = "Medical Bag (Open)";
	model = "\A3\Props_F_Orange\Humanitarian\Camps\FirstAidKit_01_open_F.p3d";
};

class BP_MedicalboxHelicrash: BP_LootBox
{
	scope = public;
	displayName = "Medical Box (Helicrash)";
	model = "\breakingpoint\models\bp_medicalbox.p3d";
};

/* 3.0 Crates*/

class BP_ContrabandBox : BP_LootBox {
    displayName = "Contraband Crate";
	model = "\plp_beachobjects\plp_bo_CrateLaRosa.p3d";
};

class BP_ContrabandBoxEmpty : BP_LootBox {
    displayName = "Empty Contraband Crate";
	model = "\plp_beachobjects\plp_bo_CrateLaRosaOpen.p3d";
};

/* Apex Mil Boxes*/	

class BP_ApexMilBox1 : BP_LootBox {
    displayName = "Apex Gun Crate";
	model="\plp_containers\plp_ct_WoodBoxLong.p3d";
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"\plp_containers\StcWoodBoxes\plp_ct_WoodBoxDarkLong.paa"
	};
};	

class BP_ApexMilBox2 : BP_LootBox {
    displayName = "Apex Gear Crate";
	model="\plp_containers\plp_ct_WoodBoxSmall.p3d";
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"\plp_containers\StcWoodBoxes\plp_ct_WoodBoxDarkSmall.paa"
	};
};

class BP_OldDMRWeaponBox : BP_LootBox {
    displayName = "Old Dmr Crate";
	model = "\A3\Weapons_F\Ammoboxes\Proxy_UsLouncherBox.p3d";
};

class BP_WeaponCratePacific : BP_LootBox {
    displayName = "Weapon Crate Pacific";
	model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F.p3d";
	hiddenSelections[]=
		{
			"Camo_Signs",
			"Camo"
		};
	hiddenSelectionsTextures[]=
	{
		"\A3\Supplies_F_Exp\Ammoboxes\Data\AmmoBox_signs_OPFOR_CA.paa",
		"\A3\Supplies_F_Exp\Ammoboxes\Data\Box_T_East_Wps_F_co.paa"
	};
};

	
/* Military Boxes Very Small (Small Magazine Supply Boxes)*/	

class BP_AmmoBoxNew : BP_LootBox { //"Explosives"
    displayName = "Explosive Box";
	model = "\A3\Weapons_F\Ammoboxes\Proxy_UsBasicWeaponBox.p3d";
};	
class BP_AmmoBoxOld : BP_LootBox {
    displayName = "Small Old Ammo Box";
	model = "\A3\weapons_F\AmmoBoxes\Proxy_UsBasicAmmoBoxSmall.p3d";
};

/* Military Boxes Small (Regular Sized Ammo/SideArm Crates)*/	
class BP_AmmoCrateNew : BP_LootBox {
    displayName = "Small Ammo Crate";
	model = "\A3\weapons_F\AmmoBoxes\AmmoBox_F.p3d";
};
class BP_AmmoCrateOld : BP_LootBox {
    displayName = "Small Old Ammo Crate";
	model = "\A3\weapons_F\AmmoBoxes\Proxy_UsBasicAmmoBoxBig.p3d";
};

/* Military Boxes Medium (Universal Weapons Boxes)*/ 
class BP_WeaponCrateNew : BP_LootBox {
    model="\a3\weapons_f\ammoboxes\WpnsBox_large_F.p3d";
	hiddenSelections[]=
	{
		"Camo_Signs",
		"Camo"
	};
	hiddenSelectionsTextures[]=
	{
		"plp_containers\data\empty.paa",
		"plp_containers\data\plasticOlive.paa"
	};
};
class BP_WeaponCrateNewBLK : BP_LootBox {
    model="\a3\weapons_f\ammoboxes\WpnsBox_large_F.p3d";
	hiddenSelections[]=
	{
		"Camo_Signs",
		"Camo"
	};
	hiddenSelectionsTextures[]=
	{
		"plp_containers\data\empty.paa",
		"plp_containers\data\plasticBlack.paa"
	};
};

class BP_MilCrateMediumBLK: BP_LootBox {
	displayName="Military Box (Medium, Black)";
	model="\a3\weapons_f\ammoboxes\WpnsBox_F.p3d";
	hiddenSelections[]=
	{
		"Camo_Signs",
		"Camo"
	};
	hiddenSelectionsTextures[]=
	{
		"plp_containers\data\empty.paa",
		"plp_containers\data\plasticBlack.paa"
	};
};
class BP_MilCrateMediumOLV: BP_LootBox {
	displayName="Military Box (Medium, Olive)";
	model="\a3\weapons_f\ammoboxes\WpnsBox_F.p3d";
	hiddenSelections[]=
	{
		"Camo_Signs",
		"Camo"
	};
	hiddenSelectionsTextures[]=
	{
		"plp_containers\data\empty.paa",
		"plp_containers\data\plasticOlive.paa"
	};
};

class BP_MilCrateTallOLV: BP_LootBox {
	displayName="Military Box (Medium, Olive)";
	model="\a3\weapons_f\ammoboxes\AmmoBox_F.p3d";
	hiddenSelections[]=
	{
		"Camo_Signs",
		"Camo"
	};
	hiddenSelectionsTextures[]=
	{
		"plp_containers\data\empty.paa",
		"plp_containers\data\plasticOlive.paa"
	};
};
class BP_MilCrateTallBLK: BP_LootBox {
	displayName="Military Box (Medium, Black)";
	model="\a3\weapons_f\ammoboxes\AmmoBox_F.p3d";
	hiddenSelections[]=
	{
		"Camo_Signs",
		"Camo"
	};
	hiddenSelectionsTextures[]=
	{
		"plp_containers\data\empty.paa",
		"plp_containers\data\plasticBlack.paa"
	};
};

class BP_WeaponCrateOld : BP_LootBox {
    displayName = "Old Weapon Crate";
	model = "\A3\weapons_F\AmmoBoxes\USBasicAmmo.p3d";
};
class BP_WeaponCrate_WWII : BP_LootBox {
	displayName = "Surplus Weapon Crate";
	model = "\A3\Weapons_F\Ammoboxes\Proxy_UsLouncherBox.p3d";
};
/*class BP_WeaponCrate_WWII : BP_LootBox {
	displayName = "Surplus Weapon Crate";
	model = "\breakingpoint\models\bp_crate1b.p3d";
};*/
	
/* Military Boxes Large (Helicrash/Underwater)*/	
class BP_HeavyWeaponCrate : BP_LootBox {
    model = "\A3\weapons_F\AmmoBoxes\AmmoBox.p3d";
};
class BP_VehicleAmmoCrate : BP_LootBox {
    model = "\A3\weapons_F\AmmoBoxes\AmmoVeh_F.p3d";
};
class BP_AirDropCrate : BP_LootBox {
    model = "\A3\Weapons_F\Ammoboxes\Supplydrop.p3d";
};
class BP_AmmoPallet1 : BP_LootBox {
    model = "\A3\structures_f_epa\Mil\Scrapyard\PaperBox_closed_F.p3d";
};		
class BP_AmmoPallet2 : BP_LootBox {
    model = "\A3\structures_f_epa\Mil\Scrapyard\PaperBox_open_empty_F.p3d";
};	
class BP_AmmoPallet3 : BP_LootBox {
    model = "\A3\structures_f_epa\Mil\Scrapyard\PaperBox_open_full_F.p3d";
};	
class BP_AmmoPallet4 : BP_LootBox {
    model = "\A3\structures_f_epa\Mil\Scrapyard\Pallet_MilBoxes_F.p3d";
};	

/* Woodboxes & Woodcrates */

class BP_WoodboxSmall : BP_LootBox {
    model="plp_containers\StcWoodBoxes\plp_cts_WoodBoxDarkTiny.p3d";
};

class BP_WeathCrateBigBRN : BP_LootBox {
	model="\plp_containers\plp_ct_WeathCrateBig.p3d";
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"plp_containers\StcWeatheredCrates\plp_ct_WeathCrateBrown.paa"
	};
};
class BP_WeathCrateBigGRN : BP_LootBox {
	model="\plp_containers\plp_ct_WeathCrateBig.p3d";
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"plp_containers\StcWeatheredCrates\plp_ct_WeathCrateGreen.paa"
	};
};
class BP_WeathCrateBigWRN : BP_LootBox {
	model="\plp_containers\plp_ct_WeathCrateBig.p3d";
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"plp_containers\StcWeatheredCrates\plp_ct_WeathCrateWorn.paa"
	};
};


class BP_WeathCrateWRN : BP_LootBox {
	model = "\plp_containers\plp_ct_WeathCrateMedium.p3d";
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"plp_containers\StcWeatheredCrates\plp_ct_WeathCrateWorn.paa"
	};
};
class BP_WeathCrateBRN : BP_LootBox {
	
	model = "\plp_containers\plp_ct_WeathCrateMedium.p3d";
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"plp_containers\StcWeatheredCrates\plp_ct_WeathCrateBrown.paa"
	};
};
class BP_WeathCrateGRN : BP_LootBox {
	model = "\plp_containers\plp_ct_WeathCrateMedium.p3d";
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"plp_containers\StcWeatheredCrates\plp_ct_WeathCrateGreen.paa"
	};
};

class BP_WeathCrateSmallWRN : BP_LootBox {
	model="plp_containers\StcWeatheredCrates\plp_cts_WeathCrateSmallWorn.p3d";
};
class BP_WeathCrateSmallBRN : BP_LootBox {
	model="plp_containers\StcWeatheredCrates\plp_cts_WeathCrateSmallBrown.p3d";
};
class BP_WeathCrateSmallGRN : BP_LootBox {
	model="plp_containers\StcWeatheredCrates\plp_cts_WeathCrateSmallGreen.p3d";
};

/* Ghost Hotel */

class BP_GhostBoxGrn : BP_LootBox {
    model = "plp_containers\StcCaskets\plp_cts_CasketLeatherGreen.p3d";
};
class BP_GhostBoxBlk : BP_LootBox {
    model = "plp_containers\StcCaskets\plp_cts_CasketLeatherBlack.p3d";
};
class BP_GhostBoxBrn : BP_LootBox {
    model = "plp_containers\StcCaskets\plp_cts_CasketLeatherBrown.p3d";
};

/* Cardboard Boxes */
class BP_CardboardBox_1: BP_LootBox {
	model = "\breakingpoint\models\bp_box1.p3d";
	displayName = "Cardboard Box";
	hiddenSelections[] = {"base"};
	hiddenSelectionsTextures[] = {"breakingpoint\textures\items\box1_co.paa"};
};
class BP_CardboardBox_2: BP_CardboardBox_1 {
	hiddenSelectionsTextures[] = {"breakingpoint\textures\items\box2_co.paa"};
};
class BP_CardboardBox_3: BP_LootBox {
	model = "\breakingpoint\models\bp_cardboardbox.p3d";
	hiddenSelectionsTextures[] = {"breakingpoint\textures\objects\cardboardbox1_co.paa"};
};
class BP_CardboardBox_4: BP_CardboardBox_1 {
	hiddenSelectionsTextures[] = {"breakingpoint\textures\items\box4_co.paa"};
};

class BP_CartonBoxSmall: BP_LootBox {
	model = "plp_containers\StcCartons\plp_cts_CartonRottenSmall.p3d";
};

class BP_CartonBox: BP_LootBox {
	model = "plp_containers\StcCartons\plp_cts_CartonRottenMedium.p3d";
};

class BP_FoodBoxIDAP: BP_LootBox {
	model="\A3\Props_F_Orange\Humanitarian\Supplies\PaperBox_01_small_closed_F.p3d";
	hiddenSelections[]=
	{
		"Camo"
	};
	hiddenSelectionsTextures[]=
	{
		"\A3\Props_F_Orange\Humanitarian\Supplies\Data\PaperBox_01_small_brown_food_CO.paa"
	};
};

class BP_WreckedBox: BP_LootBox {
	model = "\A3\Props_F_Orange\Humanitarian\Supplies\PaperBox_01_small_destroyed_F.p3d";
	hiddenSelections[]=
	{
		"Camo"
	};
	hiddenSelectionsTextures[]=
	{
		"\A3\Props_F_Orange\Humanitarian\Supplies\Data\PaperBox_01_small_brown_destroyed_CO.paa"
	};
	waterLeakiness=0.1;
};

class BP_PlasticBox: BP_LootBox {
	model = "\plp_containers\plp_ct_PlasticBox.p3d";
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"\plp_containers\StcPlasticBoxes\plp_ct_PlasticBoxBlack_co.paa"
	};
};
/* Trashcans */
class BP_Trashcan : BP_LootBox 
{
	model = "\breakingpoint\models\bp_trashcan.p3d"; 
};
class BP_TrashcanHouse : BP_LootBox 
{
	model = "plp_containers\StcTrashcans\plp_cts_TrashcanHouseGenericOpen.p3d";
};
class BP_TrashBinGR : BP_LootBox 
{
	model = "plp_containers\StcTrashcans\plp_cts_PlasticBinGrey.p3d";
};
class BP_DustbinBlk : BP_LootBox 
{
	model = "plp_containers\StcTrashcans\plp_cts_DustbinBlack.p3d";
};
class BP_DustbinGR : BP_LootBox 
{
	model="plp_containers\StcTrashcans\plp_cts_DustbinGrey.p3d";
};
class BP_DustbinGRSide : BP_LootBox 
{
model="plp_containers\StcTrashcans\plp_cts_DustbinGreySide.p3d";
};
class BP_DustbinBlkSide : BP_LootBox 
{
model="plp_containers\StcTrashcans\plp_cts_DustbinBlackSide.p3d";
};
/* Farm */
class BP_Bag1 : BP_LootBox { model = "\breakingpoint\models\bp_bag1.p3d"; };
class BP_Bag2 : BP_LootBox { model = "\breakingpoint\models\bp_bag2.p3d"; };
class BP_Sack : BP_LootBox { model = "\plp_containers\plp_ct_Sack.p3d"; };

/* Civilian Luggage */
class BP_LuggageBags : BP_LootBox { 
model = "\A3\structures_f_epb\Items\Luggage\LuggageHeap_01_F.p3d"; 
};
class BP_LuggageCaseGR : BP_LootBox {
	model="plp_containers\StcSuitcases\plp_cts_SuitcaseFabricGreenSide.p3d";
};
class BP_LuggageCaseRED : BP_LootBox {
	model="plp_containers\StcSuitcases\plp_cts_SuitcaseFabricRedSide.p3d";
};
class BP_LuggageCaseBG : BP_LootBox {
	model="\plp_containers\plp_ct_SuitcaseFabricSide.p3d";
	hiddenSelections[]=
	{
	"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"\plp_containers\StcSuitcases\plp_ct_SuitcaseFabricBeige.paa"
	};
};

class BP_Bag3 : BP_LootBox { 
model = "\bp_sw\bp_sw_box\bp_bag3.p3d"; 
};

class BP_Packs : BP_LootBox { 
model = "\A3\structures_f_epb\Items\Luggage\LuggageHeap_02_F.p3d"; 
};

class BP_BriefbagOrange : BP_LootBox { 
model="plp_beachobjects\plp_bo_BeachBagBackOrange.p3d";
};
class BP_BriefbagOrangeSide : BP_LootBox { 
model="plp_beachobjects\plp_bo_BeachBagBackOrangeSide.p3d";
};
class BP_BriefbagPink : BP_LootBox { 
model="plp_beachobjects\plp_bo_BeachBagBackPink.p3d";
};
class BP_BriefbagPinkSide : BP_LootBox { 
model="plp_beachobjects\plp_bo_BeachBagBackPinkSide.p3d";
};

/* Dumpster */
class BP_Dumpster1 : BP_LootBox {
	model = "\breakingpoint\models\bp_dumpster.p3d";
	hiddenSelections[] = {"base"};
	hiddenSelectionsTextures[] = {"breakingpoint\textures\objects\dumpster1_co.paa"};
};
class BP_Dumpster2 : BP_Dumpster1 { hiddenSelectionsTextures[] = {"breakingpoint\textures\objects\dumpster2_co.paa"}; };
class BP_Dumpster3 : BP_Dumpster1 { hiddenSelectionsTextures[] = {"breakingpoint\textures\objects\dumpster3_co.paa"}; };
class BP_Dumpster4 : BP_Dumpster1 { hiddenSelectionsTextures[] = {"breakingpoint\textures\objects\dumpster4_co.paa"}; };
class BP_Dumpster5 : BP_Dumpster1 { hiddenSelectionsTextures[] = {"breakingpoint\textures\objects\dumpster5_co.paa"}; };
class BP_Dumpster6 : BP_Dumpster1 {
	model="\plp_containers\plp_ct_TrashContColoredClosed.p3d";
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"\plp_containers\StcTrashcans\plp_ct_TrashContColGlass.paa"
	};
};
/* Skip */
class BP_Skip1 : BP_LootBox {
	model = "\breakingpoint\models\bp_skip.p3d";
	hiddenSelections[] = {"base"};
	hiddenSelectionsTextures[] = {"breakingpoint\textures\objects\skip1_co.paa"};
	hideDistance = 800;
};
class BP_Skip2 : BP_Skip1 { hiddenSelectionsTextures[] = {"breakingpoint\textures\objects\skip2_co.paa"}; };
class BP_Skip3 : BP_Skip1 { hiddenSelectionsTextures[] = {"breakingpoint\textures\objects\skip1_co.paa"}; };
class BP_Skip4 : BP_Skip1 { hiddenSelectionsTextures[] = {"breakingpoint\textures\objects\skip1_co.paa"}; };
class BP_Skip5 : BP_Skip1 { hiddenSelectionsTextures[] = {"breakingpoint\textures\objects\skip1_co.paa"}; };
	
