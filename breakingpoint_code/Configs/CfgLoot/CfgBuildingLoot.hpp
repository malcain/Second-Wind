/*
  Breaking Point Mod for Arma 3

  Released under Arma Public Share Like Licence (APL-SA)
  https://www.bistudio.com/community/licenses/arma-public-license-share-alike

  Alderon Games Pty Ltd
*/

//#include "CfgLoot.hpp"
#include "CfgObjectLoot.hpp"

//Loot Box Class Names (Military Very Small) - BP_AmmoBoxNew - BP_AmmoBoxOld 

//Loot Box Class Names (Military Small) - BP_AmmoCrateNew - BP_AmmoCrateOld

//Loot Box Class Names (Military Universal Weapons Crates) - BP_WeaponCrateNew - BP_WeaponCrateOld

//Loot Box Class Names (Military Too Large For Buildings Weapon/Ammo Crates) - BP_HeavyWeaponCrate - BP_VehicleAmmoCrate - BP_AirDropCrate - BP_AmmoPallet1 - BP_AmmoPallet2 - BP_AmmoPallet3 - BP_AmmoPallet4

//Loot Box Class Names (Civilian Objects) - BP_CardboardBox_1 - BP_CardboardBox_2 - BP_CardboardBox_3 - BP_Bag1 - BP_Bag2 - BP_LuggageBags - BP_Trashcan - BP_Packs

//Loot Box Class Nmes (Industrial Objects) - BP_Dumpster1 - BP_Dumpster2 - BP_Dumpster3 - BP_Dumpster4 - BP_Dumpster5 - BP_Skip1 - BP_Skip2 - BP_Skip3 - BP_Skip4 - BP_Skip5

//Loot Box Class Names (Hospital) - BP_Medicalbox

//Loot Box Class Names (HighEnd) - BP_AmmoPallet4


	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////////////---ALTIS BUILDING LOOT---//////////////////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class CfgBuildingLoot 
{
	class Default {
		zombieChance = 0.2;
		minRoaming = 0;
		maxRoaming = 2;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_RebelImp3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_GuardianImp3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_SurvivalistImp3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_RefugeeImp3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_HunterImp3"};
		lootChance = 0;
		lootPos[] = {};
		itemType[] = {};
		itemChance[] = {};
		hangPos[] = {};
		vehPos[] = {};
		lootMin = 1;
		lootMax = 3;
	};
	class Master {
		weapons[] = {
			"SMAW",
			"Javelin",
			"Stinger"
		};
	};
	class Residential: Default {
		zombieChance = 0.2;
		minRoaming = 0;
		maxRoaming = 1;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_RebelImp3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_GuardianImp3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_SurvivalistImp3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_RefugeeImp3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_HunterImp3"};
		lootChance = 0.05;
		lootPos[] = {};
		itemType[] =	{
			{"BP_WeaponCrate_WWII","object","MilitarySurplusWpn"},
            {"BP_CardboardBox_2","object","Supermarket"},
            {"BP_CardboardBox_3","object","Generic"},
            {"BP_TrashcanHouse","object","Trash"},
			{"BP_Bag1","object","Generic"},
			{"BP_Bag2","object","Trash"},
			{"BP_LuggageCaseBG","object","Residential"},
			{"BP_LuggageCaseRED","object","Residential"},
			{"BP_Bag3","object","Residential"},
			{"ItemCompass","toolbelt"},
			{"ItemMap","toolbelt"},
			{"ItemKnife","magazine"},
			{"BP_Kitbag_cbr","backpack"},
			{"Binocular","weaponNA"},
			{"WaterbotEmpty","magazine"},
			{"ItemTennisBall","magazine"},
			{"ItemDuctTape","magazine"},
			{"ItemWaterTape","magazine"},
			{"BP_Kitbag_sgg","backpack"},
			{"BP_Kitbag_cbr","backpack"},
			{"BP_Kitbag_mcamo","backpack"},
			{"ItemBook1","magazine"},
			{"ItemBook2","magazine"},
			{"ItemBook3","magazine"},
			{"ItemMug","magazine"},
			{"ItemPottery","magazine"},
			{"ItemVideoTape","magazine"},
			{"ItemZipDisk","magazine"},
			{"ItemCards","magazine"},
			{"ItemSoda1","magazine"},
			{"ItemSoda2","magazine"},
			{"ItemCan1","magazine"},
			{"ItemCan2","magazine"},
			{"BlueprintCrate1","magazine"},
			{"BP_Mak_Old","weapon"},
			{"BP_AlarmClock_Black","magazine"},
			{"BP_CZ550_old","weaponA"},
			{"BP_CZ455","weaponA"},
			{"BP_WinCoy","weaponA"},
			{"BP_1866","weapon"},
			{"BP_R300","weaponA"},
			{"V_Rangemaster_belt_BP","vest"},
			{"BP_Benelli","weapon"},
			{"BP_Rem870","weapon"},
			{"BP_7Rnd_45acp","magazine"},
			{"BP_10Rnd_303_Mag","magazine"},
			{"BP_5Rnd_22_Mag","magazine"},
			{"ItemPainkiller","magazine"},
			{"ItemAntibiotic","magazine"},
			{"ItemDuctTape","magazine"},
			{"ItemBandage","magazine"},
			{"MeleeKatana","weaponNA"},
			{"Meleehatchet","weaponNA"},
			{"MeleeShovel","weaponNA"},
			{"MeleeCrowbar","weaponNA"},
			{"MeleeClub","weaponNA"},
			{"BlueprintHavenReinforce","magazine"},
			{"BlueprintStove","magazine"},
			{"BlueprintWaterBarrel","magazine"},
			{"BlueprintTele","magazine"},
			{"BlueprintCrate1","magazine"},
			{"BP_Crossbow","weapon"},
			{"BP_Crossbow_DigitCamo","weaponA"},
			{"BP_Arrow_Mag","magazine"}
		};
		itemChance[] =	{
			0.01,	//BP_Surplus
			0.01,	//BP_CardBoardBox2
			0.10,	//BP_CardBoardBox3
			0.10,	//BP_Trashcan
			0.10,   //BP_Bag1
			0.10,   //BP_Bag2
			0.10,   //BP_LuggageCaseBG
			0.10,   //BP_LuggageCaseRED
			0.10,   //BP_Bag3
			0.02,	//Compass
			0.02,	//Map
			0.02,	//Knife
			0.02,	//Sportbag
			0.02,	//Binocular
			0.01,	//WaterbotEmptyTLE
			0.01,	//TENNISBALL			
			0.02,	//DUCTTAPE
			0.01,	//WATERTAPE
			0.02,	//BACKPACK
			0.02,	//BACKPACK
			0.02,	//BACKPACK
			0.02,	//TRASH
			0.02,	//TRASH
			0.01,	//TRASH
			0.01,	//TRASH
			0.01,	//TRASH
			0.01,	//TRASH
			0.01,	//TRASH
			0.01,	//TRASH
			0.01,	//SODA
			0.01,	//SODA
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//BlueprintCrate
			0.03,	//Makarov
			0.02,	//AlarmClock
			0.01,	//CZ550 Old
			0.01,	//CZ455
			0.01,	//REM7
			0.01,	//1866
			0.01,	//R300
			0.02,	//BANDOLIER OLIVE
			0.01,   //BENELLI
			0.01,   //REM870
			0.02,	//45ACP
			0.02,	//303B
			0.02,	//22LR
			0.02,	//PAINKILLER
			0.01,	//ANTIBIOTIC
			0.02,	//DUCT TAPE
			0.02,	//BANDAGE
			0.01,	//KATANA
			0.01,	//HATCHET
			0.01,   //Shovel
			0.01,	//Crowbar
			0.01,   //Club
			0.01,    //HavenReinforcement BLUEPRINT
			0.01,    //Stove BLUEPRINT
			0.01,    //Barrel Water BLUEPRINT
			0.01,    //television BLUEPRINT
			0.01,    //CRATE BLUEPRINT
			0.02,	//Crossbow
			0.01,	//Crossbow
			0.02	//Crossbow Arrow
		};		
	};
	
	class Residential2: Default {
		zombieChance = 0.2;
		minRoaming = 0;
		maxRoaming = 1;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_RebelImp3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_GuardianImp3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_SurvivalistImp3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_RefugeeImp3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_HunterImp3"};
		lootChance = 0.05;
		lootPos[] = {};
		itemType[] =	{
			{"BP_WeaponCrate_WWII","object","MilitarySurplusWpn"},
            {"BP_CardboardBox_2","object","Supermarket"},
            {"BP_CardboardBox_3","object","Generic"},
            {"BP_TrashcanHouse","object","Trash"},
			{"BP_MedicalBox","object","Hospital"},
			{"BP_Bag1","object","Generic"},
			{"BP_Bag3","object","Residential"},
			{"BP_Bag3","object","Residential2"},
			{"BP_LuggageCaseGR","object","Residential2"},
			{"BP_LuggageCaseGR","object","Residential"},
			{"BP_LuggageCaseBG","object","Residential"},
			{"ItemMorphine","magazine"},
			{"ItemFieldDressing","magazine"},
			{"ItemDuctTape","magazine"},
			{"ItemCompass","toolbelt"},
			{"ItemMap","toolbelt"},
			{"ItemKnife","magazine"},
			{"BP_Garand","weapon"},
			{"BP_GarandK","weapon"},
            {"BP_Kar98","weapon"},
			{"BP_Kar98k","weapon"},
			{"BP_BAR","weapon"},
			{"BP_1911","weapon"},
			{"BP_SVT40","weapon"},
			{"BP_SVT40","weaponA"},
			{"BP_M1903","weaponA"},
			{"BP_M1903K","weaponA"},
			{"Binocular","weaponNA"},
			{"WaterbotEmpty","magazine"},
			{"ItemTennisBall","magazine"},
			{"ItemDuctTape","magazine"},
			{"ItemWaterTape","magazine"},
			{"BP_Kitbag_sgg","backpack"},
			{"BP_Kitbag_cbr","backpack"},
			{"BP_Kitbag_mcamo","backpack"},
			{"ItemBook1","magazine"},
			{"ItemBook2","magazine"},
			{"ItemBook3","magazine"},
			{"ItemMug","magazine"},
			{"ItemPottery","magazine"},
			{"ItemVideoTape","magazine"},
			{"ItemZipDisk","magazine"},
			{"ItemCards","magazine"},
			{"ItemSoda1","magazine"},
			{"ItemSoda2","magazine"},
			{"ItemCan1","magazine"},
			{"ItemCan2","magazine"},
			{"BP_Mak_Old","weapon"},
			{"BP_AlarmClock_Black","magazine"},
			{"BP_CZ550_old","weaponA"},
			{"BP_CZ455","weaponA"},
			{"BP_WinCoy","weaponA"},
			{"BP_1866","weapon"},
			{"BP_R300","weaponA"},
			{"V_Rangemaster_belt_BP","vest"},
			{"MeleeKatana","weaponNA"},
			{"BP_Benelli","weapon"},
			{"BP_Rem870","weapon"},
			{"BP_7Rnd_45acp","magazine"},
			{"BP_10Rnd_303_Mag","magazine"},
			{"BP_5Rnd_22_Mag","magazine"},
			{"ItemPainkiller","magazine"},
			{"ItemAntibiotic","magazine"},
			{"ItemDuctTape","magazine"},
			{"ItemBandage","magazine"},
			{"Meleehatchet","weaponNA"},
			{"MeleeShovel","weaponNA"},
			{"BlueprintFuelBarrel","magazine"},
			{"BP_Crossbow","weapon"},
			{"BP_Crossbow_DigitCamo","weaponA"},
			{"BP_Arrow_Mag","magazine"}
		};
		itemChance[] =	{
			0.01,	//BP_Surplus
			0.01,	//BP_CardBoardBox2
			0.08,	//BP_CardBoardBox3
			0.05,	//BP_Trashcan
			0.08,	//MedicalBox
			0.08,   //BP_Bag1
			0.08,   //BP_Bag3 Residential
			0.01,   //BP_Bag3 Residential2
			0.01,   //BP_LuggageCaseGR
			0.10,   //BP_LuggageCaseGR
			0.10,   //BP_LuggageCaseBG
			0.03,	//Morphine
			0.03,	//FieldDressing
			0.01,	//Duct_Tape
			0.01,	//Compass
			0.01,	//Map
			0.01,	//Knife
			0.01,	//Garand
			0.01,	//GarandK
			0.01,	//Kar98
			0.01,	//Kar98K
			0.01,	//Bar
			0.01,	//1911
			0.01,	//SVT40
			0.01,	//SVT40A
			0.01,	//M1903
			0.01,	//M1903K
			0.01,	//Binocular
			0.01,	//WaterbotEmptyTLE
			0.01,	//TENNISBALL			
			0.01,	//DUCTTAPE
			0.01,	//WATERTAPE
			0.01,	//BACKPACK
			0.01,	//BACKPACK
			0.01,	//BACKPACK
			0.01,	//TRASH
			0.01,	//TRASH
			0.01,	//TRASH
			0.01,	//TRASH
			0.01,	//TRASH
			0.01,	//TRASH
			0.01,	//TRASH
			0.01,	//TRASH
			0.01,	//SODA
			0.01,	//SODA
			0.01,	//FOOD
			0.01,	//FOOD
			0.02,	//Makarov
			0.01,	//AlarmClock
			0.01,	//CZ550 Old
			0.01,	//CZ455
			0.01,	//REM7
			0.01,	//1866
			0.01,	//R300
			0.01,	//BANDOLIER OLIVE
			0.01,	//KATANA
			0.01,   //BENELLI
			0.01,   //REM870
			0.01,	//45ACP
			0.01,	//303B
			0.01,	//22LR
			0.02,	//PAINKILLER
			0.01,	//ANTIBIOTIC
			0.01,	//DUCT TAPE
			0.01,	//BANDAGE
			0.01,	//HATCHET
			0.01,   //Shovel
			0.01,    //barrel Fuel BLUEPRINT
			0.02,	//Crossbow
			0.01,	//Crossbow
			0.01	//Crossbow Arrow
		};		
	};
	
	class Supermarket: Default {
		lootChance = 0.05;
		minRoaming = 0;
		maxRoaming = 2;
		zombieChance = 0.8;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_RebelImp3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_GuardianImp3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_SurvivalistImp3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_RefugeeImp3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_HunterImp3"};
		itemType[] = {
			{"BP_CardboardBox_1","object","Office"},
            {"BP_CardboardBox_2","object","Supermarket"},
            {"BP_CardboardBox_3","object","Supermarket"},
            {"BP_DustbinBlk","object","Trash"},
			{"BP_DustbinGR","object","Trash"},
			{"BP_Bag1","object","Generic"},
			{"BP_Bag2","object","Trash"},
			{"BP_LuggageCaseRED","object","Residential"},
			{"BP_LuggageCaseBG","object","Residential"},
			{"BP_BriefbagPinkSide","object","Residential"},
			{"BP_BriefbagOrangeSide","object","Residential"}
		};
		itemChance[] =	{
			0.15,	//BP_CardBoardBox1
			0.30,	//BP_CardBoardBox2
			0.10,	//BP_CardBoardBox3
			0.05,	//BP_DustbinBlk
			0.05,	//BP_DustbinGR
			0.10,   //BP_Bag1
			0.05,   //BP_Bag2
			0.03,    //BP_LuggageBags
			0.02,    //BP_LuggageBags
			0.03,    //BP_Packs
			0.02    //BP_Packs
		};		
	};	
	class Office: Default {
		minRoaming = 0;
		maxRoaming = 1;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_RebelImp3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_GuardianImp3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_SurvivalistImp3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_RefugeeImp3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_HunterImp3"};
		lootChance = 0.10;
		lootPos[] = {};
		itemType[] =	{
			{"BP_CardboardBox_1","object","Office"},
            {"BP_CardboardBox_2","object","Supermarket"},
            {"BP_DustbinBlkSide","object","Generic"},
            {"BP_DustbinBlk","object","Trash"},
			{"BP_DustbinGR","object","Trash"},
			{"BP_Bag1","object","Generic"},
			{"BP_DustbinGRSide","object","Trash"},
			{"BP_LuggageCaseGR","object","Office"},
			{"BP_Bag3","object","Office"},
			{"BP_BriefbagOrangeSide","object","Residential"},
			{"ItemSoda1","magazine"},
			{"ItemSoda2","magazine"},
			{"ItemWatch","toolbelt"},
			{"ItemCompass","toolbelt"},
			{"ItemMap","toolbelt"},
			{"BP_1911","weapon"},
			{"ItemKnife","magazine"},
			{"ItemMatchbox","magazine"},
			{"ItemRadio","toolbelt"},
			{"BP_sw44","weapon"},
			{"BP_sw45","weapon"},
			{"BP_G17","weapon"},
			{"BP_6Rnd_45JHP_Mag","magazine"},
			{"BP_CZ455","weaponA"},
			{"BP_Ruger","weapon"},
		    {"BP_Kitbag_sgg","backpack"},
			{"BP_Kitbag_cbr","backpack"},
			{"BP_Kitbag_mcamo","backpack"},
			{"BP_LeeEnfield","weapon"},
			{"BP_LeeEnfield2","weaponA"},
			{"Binocular","toolbelt"},
			{"BP_M8","toolbelt"},
			{"Itemcan3","magazine"},
			{"V_Chestrig_khk_BP","vest"},
			{"V_Rangemaster_belt_BP","vest"},
			{"BP_m9","weapon"},
			{"BP_Lupara","weapon"},
			{"ItemGPS","toolbelt"},
			{"BlueprintHaven", "magazine"},
			{"BP_5Rnd_762x51_Mag","magazine"},
			{"BP_7Rnd_45acp","magazine"},
			{"BP_10Rnd_303_Mag","magazine"},
			{"BP_5Rnd_22_Mag","magazine"},
			{"BP_5Rnd_500Mag","magazine"},
			{"BP_10Rnd_303_JSP_Mag","magazine"},
			{"ItemPainkiller","magazine"},
			{"ItemAntibiotic","magazine"},
			{"WaterbotEmpty","magazine"},
			{"ItemTennisBall","magazine"},
			{"ItemBandage","magazine"},
			{"ItemElectronics","magazine"},
			{"ItemElectricalWire","magazine"},
			{"ItemCanvasMaterial","magazine"},
			{"ItemNettingMaterial","magazine"}
		};
		itemChance[] =	{
			0.15,	//BP_CardBoardBox1
			0.01,	//BP_CardBoardBox2
			0.04,	//BP_CardBoardBox3
			0.03,	//BP_DustbinBLK
			0.04,	//BP_DustbinGR
			0.07,   //BP_Bag1
			0.07,   //BP_DustbinGRSide
			0.04,   //BP_LuggageBags
			0.03,   //BP_Bag3
			0.07,   //BP_BriefbagOrangeSide
			0.01,	//Mountain DEW
			0.01,	//Soda
			0.02,	//WATCH
			0.02,	//COMPASS
			0.02,	//MAP
			0.01,	//M1911
			0.02,	//KNIFE
			0.02,	//MATCHES
			0.01,	//RADIO
			0.01,	//SW.500
			0.02,   //COLT 45
			0.02,   //G17
			0.01,   //6RND .45JHP
			0.02,   //CZ455
			0.02,   //CZ455 SUP
			0.01, 	//KIT SAGE
			0.01, 	//KIT CBR
			0.01,   //KIT CAMO
			0.01,   //LEE ENFIELD
			0.01,   //LEE ENFIELD SCOPED
			0.02,	//BINOCULARS
			0.02,	//S&W500 Scope
			0.01,   //CAN 3
			0.01,	//TAC VEST
			0.02,	//BANDOLIER OLIVE
			0.02,	//M9
			0.02,	//LUPARA
			0.01,	//GPS
			0.01,	//HAVEN LOCK
			0.01,   //M24 CLIP
			0.02,	//45ACP
			0.02,	//303B
			0.02,	//22LR
			0.02,	//.500SW
			0.02,	//303_JSP_Mag
			0.02,	//PAINKILLER
			0.01,	//ANTIBIOTIC
			0.01,	//WATER BOTTLE
			0.01,	//TENNIS BALL
			0.02,	//BANDAGE
			0.01,	//ELECTRONICS
			0.01,	//WIRE
			0.01,	//CANVAS MATERIAL
			0.01	//NETTING MATERIAL	
		};		
	};
	class Office2: Default {
		minRoaming = 0;
		maxRoaming = 1;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_RebelImp3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_GuardianImp3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_SurvivalistImp3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_RefugeeImp3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_HunterImp3"};
		lootChance = 0.10;
		lootPos[] = {};
		itemType[] =	{
			{"BP_CardboardBox_1","object","Office"},
            {"BP_CardboardBox_2","object","Supermarket"},
            {"BP_DustbinBlkSide","object","Generic"},
            {"BP_DustbinBlk","object","Trash"},
			{"BP_DustbinGR","object","Trash"},
			{"BP_Bag1","object","Generic"},
			{"BP_DustbinGRSide","object","Trash"},
			{"BP_LuggageCaseGR","object","Office"},
			{"BP_Bag3","object","Office"},
			{"BP_BriefbagOrangeSide","object","Residential"}
		};
		itemChance[] =	{
			0.15,	//BP_CardBoardBox1
			0.01,	//BP_CardBoardBox2
			0.04,	//BP_CardBoardBox3
			0.03,	//BP_DustbinBLK
			0.04,	//BP_DustbinGR
			0.07,   //BP_Bag1
			0.07,   //BP_DustbinGRSide
			0.04,   //BP_LuggageBags
			0.03,   //BP_Bag3
			0.07   //BP_BriefbagOrangeSide
		};		
	};
	class Hospital: Default {
		zombieChance = 0.4;
		minRoaming = 0;
		maxRoaming = 2;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_RebelImp3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_GuardianImp3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_SurvivalistImp3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_RefugeeImp3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_HunterImp3"};
		lootChance = 0.20;
		lootPos[] = {};
		itemType[] =	{
			{"BP_MedicalBox","object","Hospital"},
			{"BP_Medicalbag","object","Hospital"},
			{"BP_FoodBoxIDAP","object","Supermarket"},
			{"BP_WeaponCrateOld","object","Residential2"},
			{"BP_TrashBinGR","object","Trash"},
			{"ItemBandage","magazine"},
			{"ItemPainkiller","magazine"},
			{"ItemMorphine","magazine"},
			{"ItemFieldDressing","magazine"},
			{"ItemAntibiotic","magazine"},
			{"ItemSurgeryKit","toolbelt"},
			{"ItemAdrenaline","magazine"},
			{"ItemKnife","magazine"},
			{"ItemMatchbox","magazine"},
			{"ItemBook1","magazine"},
			{"ItemBook2","magazine"},
			{"ItemBook3","magazine"},
			{"ItemMug","magazine"},
			{"ItemPottery","magazine"},
			{"ItemVideoTape","magazine"},
			{"ItemZipDisk","magazine"},
			{"ItemToiletPaper","magazine"},
			{"ItemGlue","magazine"},
			{"ItemDuctTape","magazine"}
		};
		itemChance[] =	{
			0.15,	//BP_MedicalBox
			0.15,	//BP_MedicalBag
			0.04,   //BP_Bag1
			0.02,   //Weapons
			0.04,   //BP_Bag2
			0.05,	//BANDAGE
			0.05,	//PAINKILLER
			0.05,	//MORPHINE
			0.05,	//FIELD DRESSING
			0.05,	//ANTIBIOTIC
			0.02,   //SURGERY KIT
			0.03,   //Adrenaline
			0.03,	//KNIFE
			0.03,	//MATCHES
			0.01,	//BOOK
			0.01,	//BOOK
			0.01,	//BOOK
			0.02,	//MUG
			0.01,	//POTTERY
			0.01, 	//VIDEO TAPE
			0.01, 	//ZIPDISK
			0.02,	//TOILET PAPER
			0.03,	//GLUE
			0.02	//DUCT TAPE
		};		
	};
	
	class Research: Default {
		zombieChance = 0.4;
		minRoaming = 0;
		maxRoaming = 2;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_RebelImp3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_GuardianImp3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_SurvivalistImp3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_RefugeeImp3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_HunterImp3"};
		lootChance = 0.20;
		lootPos[] = {};
		itemType[] =	{
			{"BP_Medicalbag","object","Hospital"},
			{"BP_Researcherbox","object","Research"},
			{"BP_PlasticBox","object","Trash"},
			{"BP_PlasticBox","object","MilitaryAirfieldAcc"},
			{"ItemBandage","magazine"},
			{"ItemPainkiller","magazine"},
			{"ItemMorphine","magazine"},
			{"ItemFieldDressing","magazine"},
			{"ItemAntibiotic","magazine"},
			{"ItemSurgeryKit","toolbelt"},
			{"ItemAdrenaline","magazine"},
			{"ItemKnife","magazine"},
			{"ItemMatchbox","magazine"},
			{"ItemBook1","magazine"},
			{"ItemBook2","magazine"},
			{"ItemBook3","magazine"},
			{"ItemMug","magazine"},
			{"ItemPottery","magazine"},
			{"ItemVideoTape","magazine"},
			{"ItemZipDisk","magazine"},
			{"ItemToiletPaper","magazine"},
			{"ItemGlue","magazine"},
			{"ItemDuctTape","magazine"}
		};
		itemChance[] =	{
			0.10,	//BP_MedicalBag
			0.15,	//BP_Researcherbox
			0.12,   //BP_PlasticBox
			0.01,   //BP_PlasticBox MilitaryAirfieldAcc
			0.05,	//BANDAGE
			0.05,	//PAINKILLER
			0.05,	//MORPHINE
			0.05,	//FIELD DRESSING
			0.05,	//ANTIBIOTIC
			0.03,   //SURGERY KIT
			0.03,   //Adrenaline
			0.02,	//KNIFE
			0.01,	//MATCHES
			0.01,	//BOOK
			0.01,	//BOOK
			0.01,	//BOOK
			0.01,	//MUG
			0.01,	//POTTERY
			0.01, 	//VIDEO TAPE
			0.01, 	//ZIPDISK
			0.01,	//TOILET PAPER
			0.01,	//GLUE
			0.01	//DUCT TAPE
		};		
	};

	class Windmill: Default {
		zombieChance = 0.5;
		minRoaming = 1;
		maxRoaming = 1;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_RebelImp3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_GuardianImp3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_SurvivalistImp3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_RefugeeImp3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_HunterImp3"};
		lootChance = 0.25;
		lootPos[] = {};
		itemType[] =	{
			{"BP_WreckedBox","object","Trash"},
			{"BP_Bag1","object","Generic"},
			{"BP_Sack","object","Supermarket"},
			{"BP_WeathCrateBigWRN","object","WindmillWpn"},
			{"BP_WeathCrateBigWRN","object","Castle"},
			{"BP_WeaponCrate_WWII","object","MilitarySurplusWpn"},
			{"BP_WeathCrateWRN","object","WindmillAcc"},
			{"BP_WeathCrateSmallWRN","object","WindmillAcc"}
		};
		itemChance[] =	{
			0.10,	//BP_WreckedBox
			0.10,   //BP_Bag1
			0.10,   //BP_Sack
			0.08,   //WINDMILL WPN
			0.07,   //Castle
			0.01,   //SURPLUS WPN
			0.15,   //WINDMILL ACC
			0.15    //WINDMILL ACC
		};		
	};	
	class Farm: Default {
		zombieChance = 0.2;
		minRoaming = 0;
		maxRoaming = 1;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_RebelImp3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_GuardianImp3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_SurvivalistImp3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_RefugeeImp3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_HunterImp3"};
		lootChance = 0.10;
		lootPos[] = {};
		itemType[] =	{
			{"BP_Bag1","object","Generic"},
			{"BP_Sack","object","Generic"},
			{"BP_WreckedBox","object","Trash"},
			{"BP_WeathCrateSmallBRN","object","WindmillAcc"},
			{"BP_WeaponCrate_WWII","object","MilitarySurplusWpn"},
			{"BP_WreckedBox","object","Farm"},
			{"BP_CartonBox","object","Farm"},
			{"ItemFuelcanEmpty","magazine"},
			{"ItemWaterTape","magazine"},
			{"ItemBandage","magazine"},
			{"ItemNails","magazine"},
			{"PartWoodPile","magazine"},
			{"V_Rangemaster_belt_BP","vest"},
			{"PartPalette","magazine"},
			{"PartWheel","magazine"},
			{"ItemCanvasMaterial","magazine"},
			{"ItemNettingMaterial","magazine"},
			{"ItemLubricant","magazine"},
			{"ItemElectronics","magazine"},
			{"ItemElectricalWire","magazine"},
			{"ItemHydraulicCylinder","magazine"},
			{"ItemEngineCoolant","magazine"},
			{"ItemFuelhoseKit","magazine"},
			{"MeleePickaxe","weaponNA"},
			{"MeleeHammer","weaponNA"},
			{"MeleeHammer2","weaponNA"},
			{"BlueprintStove","magazine"},
			{"MeleeShovel","weaponNA"},
			{"MeleeCrowbar","weaponNA"},
			{"MeleeClub","weaponNA"},
			{"ItemStove","magazine"},
			{"ItemToolbox","toolbelt"}
		};
		itemChance[] =	{
			0.06,   //Generic
			0.06,   //Generic
			0.06,   //BP_WreckedBox Trash
			0.08,   //BP_WindmillAcc
			0.01,   //SURPLUS WPN
			0.06,    //BP_WreckedBox Farm
			0.17,    //BP_Farm
			0.01,	//JERRY CAN
			0.01,	//WATER TAPE
			0.01,	//BANDAGE
			0.01,   //NAILS
			0.01,   //Woodpile
			0.01,	//BANDOLIER	
			0.02,   //PALETTE
			0.03,	//WHEEL
			0.02,   //CANVAS MATERIAL
			0.02,   //NETTING MATERIAL
			0.02,   //HYDRAULIC FLUID
			0.02,   //ELECTRONICS
			0.02,   //WIRE
			0.02,   //HYDRAULIC CYLINDER
			0.02,   //ENGINE COOLANT
			0.02,   //FUEL HOSE KIT
			0.01,   //PICKAXE
			0.01,   //HAMMER
			0.01,   //HAMMER2
			0.01,    //SHOVEL
			0.01,    //BAT
			0.01,    //CROWBAR
			0.01,   //Stove BLUEPRINT
			0.01,   //Stove
			0.01	//TOOLBOX
		};		
	};
	
	class Construction: Default {
		zombieChance = 0.2;
		minRoaming = 0;
		maxRoaming = 1;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_RebelImp3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_GuardianImp3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_SurvivalistImp3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_RefugeeImp3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_HunterImp3"};
		lootChance = 0.10;
		lootPos[] = {};
		itemType[] =	{
			{"BP_WreckedBox","object","Generic"},
			{"BP_Bag2","object","Generic"},
			{"BP_WoodboxSmall","object","WindmillAcc"},
			{"BP_WeaponCrate_WWII","object","MilitarySurplusWpn"},
			{"BP_CardboardBox_4","object","Farm"},
			{"BP_CartonBox","object","Farm"},
			{"ItemFuelcanEmpty","magazine"},
			{"ItemWaterTape","magazine"},
			{"ItemBandage","magazine"},
			{"ItemNails","magazine"},
			{"PartPalette","magazine"},
			{"PartWheel","magazine"},
			{"ItemCanvasMaterial","magazine"},
			{"ItemNettingMaterial","magazine"},
			{"ItemLubricant","magazine"},
			{"ItemElectronics","magazine"},
			{"ItemElectricalWire","magazine"},
			{"ItemHydraulicCylinder","magazine"},
			{"ItemEngineCoolant","magazine"},
			{"ItemFuelhoseKit","magazine"},
			{"MeleePickaxe","weaponNA"},
			{"MeleeHammer","weaponNA"},
			{"MeleeHammer2","weaponNA"},
			{"BlueprintStove","magazine"},
			{"MeleeShovel","weaponNA"},
			{"MeleeCrowbar","weaponNA"},
			{"MeleeClub","weaponNA"},
			{"ItemStove","magazine"},
			{"ItemHammer","magazine"},
			{"ItemToolbox","toolbelt"}
		};
		itemChance[] =	{
			0.05,   //BP_WreckedBox
			0.05,   //BP_Bag2
			0.08,   //BP_WindmillAcc
			0.01,   //SURPLUS WPN
			0.10,    //BP_Farm
			0.10,   //BP_CartonBox Farm
			0.01,	//JERRY CAN
			0.01,	//WATER TAPE
			0.01,	//BANDAGE
			0.01,   //NAILS
			0.02,   //PALETTE
			0.03,	//WHEEL
			0.02,   //CANVAS MATERIAL
			0.02,   //NETTING MATERIAL
			0.02,   //HYDRAULIC FLUID
			0.02,   //ELECTRONICS
			0.02,   //WIRE
			0.02,   //HYDRAULIC CYLINDER
			0.02,   //ENGINE COOLANT
			0.02,   //FUEL HOSE KIT
			0.01,   //PICKAXE
			0.01,   //HAMMER
			0.01,   //HAMMER2
			0.01,   //SHOVEL
			0.01,   //BAT
			0.01,   //CROWBAR
			0.01,   //Stove BLUEPRINT
			0.01,   //Stove
			0.01,   //Hammer
			0.02	//TOOLBOX
		};		
	};
	
	class Industrial: Default {
		zombieChance = 0.2;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_RebelImp3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_GuardianImp3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_SurvivalistImp3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_RefugeeImp3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_HunterImp3"};
		minRoaming = 0;
		maxRoaming = 1;
		lootChance = 0.50;
		lootPos[] = {};
		itemType[] =	{
			{"BP_CardboardBox_3","object","Generic"},
            {"BP_Trashcan","object","Trash"},
			{"BP_Bag1","object","Generic"},
			{"BP_Bag2","object","Trash"},
			{"BP_Skip1","object","Industrial"},
			{"BP_Skip2","object","IndustrialVehicle"},
			{"BP_Skip3","object","Industrial"},
			{"BP_Skip4","object","IndustrialVehicle"},
			{"BP_Skip5","object","Industrial"},
			{"BP_Dumpster1","object","IndustrialVehicle"},
			{"BP_Dumpster2","object","Industrial"},
			{"BP_Dumpster3","object","IndustrialVehicle"},
			{"BP_Dumpster4","object","Industrial"},
			{"BP_Dumpster5","object","IndustrialVehicle"},
			{"ItemDuctTape","magazine"},
			{"ItemWaterTape","magazine"},
			{"ItemNails","magazine"},
			{"ItemHammer","magazine"},
			{"ItemBlowtorch","magazine"},
			{"PartPalette","magazine"},
			{"ItemCanvasMaterial","magazine"},
			{"ItemNettingMaterial","magazine"},
			{"ItemWoodenPoles","magazine"},
			{"ItemCementbag","magazine"},
			{"PartWheel","magazine"},
			{"PartEngine","magazine"},
			{"PartGlass","magazine"},
			{"ItemFuelcanEmpty","magazine"},
			{"ItemFuelcanLargeEmpty","magazine"},
			{"ItemKnife","magazine"},
			{"ItemLiquidResin","magazine"},
			{"ItemPunctureKit","magazine"},
			{"ItemBattery","magazine"},
			{"PartFiberGlass","magazine"},
			{"PartSteel","magazine"},
			{"ItemLubricant","magazine"},
			{"ItemElectronics","magazine"},
			{"ItemElectricalWire","magazine"},
			{"ItemHydraulicCylinder","magazine"},
			{"ItemEngineCoolant","magazine"},
			{"ItemFuelhoseKit","magazine"},
			{"ItemToolbox","toolbelt"},
			{"MeleeHammer","weaponNA"},
			{"BlueprintHavenReinforce","magazine"},
			{"ItemStove","magazine"},
			{"MeleeShovel","weaponNA"}, 
			{"MeleeCrowbar","weaponNA"},
			{"ItemSandbag","magazine"},
			{"MeleeHammer2","weaponNA"}
		};
		itemChance[] =	{
			0.03,	//BP_CardBoardBox3
			0.03,	//BP_Trashcan
			0.03,   //BP_Bag1
			0.03,   //BP_Bag2
			0.07,	//BP_Skip1
			0.07,	//BP_Skip2
            0.07,   //BP_Skip3
            0.07,	//BP_Skip4
            0.07,	//BP_Skip5
            0.07,	//BP_Dumpster1
            0.07,	//BP_Dumpster2
            0.07,	//BP_Dumpster3
            0.07,	//BP_Dumpster4
            0.07,	//BP_Dumpster5
			0.01,	//DUCT TAPE
			0.02,	//WATER TAPE
			0.02,   //NAILS
			0.02,   //HAMMER
			0.01,   //BLOWTORCH
			0.03,   //PALETTE
			0.02,   //CANVAS MATERIAL
			0.02,   //NETTING MATERIAL
			0.02,   //WOODEN POLES
			0.02,   //CEMENT BAG
			0.03,	//WHEEL
			0.02,	//ENGINE
			0.02,	//GLASS
			0.02,	//JERRY CAN
			0.01,	//JERRY CAN LARGE
			0.01,	//KNIFE
			0.02,   //LIQUID RESIN
			0.02,   //PUNCTURE KIT
			0.02,   //ITEM BATTERY
			0.02,   //FIBERGLASS
			0.01,   //STEEL
			0.02,   //HYDRAULIC FLUID
			0.02,   //ELECTRONICS
			0.02,   //WIRE
			0.02,   //HYDRAULIC CYLINDER
			0.02,   //ENGINE COOLANT
			0.02,   //FUEL HOSE KIT
			0.02,	//TOOLBOX
			0.02,	//HAMMER
			0.02,   //HavenReinforcement BLUEPRINT
			0.02,   //Stove
			0.01, 	//SHOVEL
			0.02, 	//Crowbar
			0.02,  //SAND BAG
			0.02   //HAMMER MELEE
		};		
	};	
	class IndustrialSmall: Default {
		zombieChance = 0.2;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_RebelImp3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_GuardianImp3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_SurvivalistImp3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_RefugeeImp3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_HunterImp3"};
		minRoaming = 0;
		maxRoaming = 1;
		lootChance = 0.50;
		lootPos[] = {};
		itemType[] =	{
			{"BP_CardboardBox_3","object","Generic"},
            {"BP_Trashcan","object","Trash"},
			{"BP_Bag1","object","Generic"},
			{"BP_Bag2","object","Trash"}	
		};
		itemChance[] =	{
			0.05,	//BP_CardBoardBox3
			0.20,	//BP_Trashcan
			0.30,   //BP_Bag1
			0.30    //BP_Bag2
		};		
	};	
	class MilitaryGeneral: Default {
		zombieChance = 1;
		minRoaming = 0;
		maxRoaming = 1;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_RebelImp3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_GuardianImp3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_SurvivalistImp3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_RefugeeImp3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_HunterImp3"};
		lootChance = 0.05;
		lootPos[] = {};
		itemType[] =	{
            {"BP_AmmoBoxNew","object","MilitaryGeneralAcc"},
			{"BP_AmmoCrateOld","object","MilitaryGeneralAcc"},
		    {"BP_WeaponCrateOld","object","MilitaryGeneralWpn"},
			{"BP_WeaponCrate_WWII","object","MilitarySurplusWpn"},
			{"BP_Trashcan","object","Trash"},
			{"BP_Bag1","object","Generic"},
			{"optic_Aco","toolbelt"},
			{"optic_mrco","toolbelt"},
			{"BP_CPad","toolbelt"},
			{"ItemMorphine","magazine"},
			{"ItemFieldDressing","magazine"},
			{"ItemKnife","magazine"},
			{"ItemMap","toolbelt"},
			{"ItemRadio","toolbelt"},
			{"BP_AFG","toolbelt"},
			{"BP_UGL_FlareWhite","magazine"},
			{"ItemPainkiller","magazine"},
			{"SmokeShell","magazine"},
		    {"BP_Kitbag_sgg","backpack"},
			{"BP_Kitbag_cbr","backpack"},
			{"BP_Kitbag_mcamo","backpack"},
		    {"BP_FieldPack_blk","backpack"},
			{"BP_FieldPack_ocamo","backpack"},
			{"BP_FieldPack_oucamo","backpack"},
			{"BP_FieldPack_cbr","backpack"},			
			{"V_Rangemaster_belt_BP","vest"},
			{"BlueprintCrate1","magazine"},
			{"BlueprintCache1","magazine"},
			{"V_Chestrig_rgr_BP","vest"},
			{"ItemSurgeryKit","toolbelt"},
			{"V_BandollierB_khk_BP","vest"},
			{"BP_m9","weapon"},
			{"BP_G17","weapon"},
            {"BP_M16OLD","weapon"},
			{"BP_AR10","weapon"},
			{"BP_SW45","weapon"},
			{"BP_SUD_AK74M","weapon"},
			{"BP_AK74U","weapon"},
			{"BP_M4Old","weapon"},
			{"BP_M4","weaponA"},
			{"BP_M4K","weapon"},
			{"BP_Benelli","weapon"},
			{"BP_R300","weaponA"},
			{"BP_SVT40","weapon"},
			{"BP_LeeEnfield2","weaponA"},
			{"BP_MP5","weapon"}
		};
		itemChance[] =	{
			0.16,	//BP_AmmoBoxNew
			0.25,   //BP_AmmoCrateOld
			0.17,   //BP_WeaponCrateOld
			0.03,   //BP_WeaponCrate_WWII
			0.07,   //TRASH
			0.04,   //GENERIC
			0.01,	//ACO OPTIC
			0.01,	//HAMR OPTIC
			0.01,	//CHEEKPIECE
			0.01,	//Morphine
			0.01,	//Field Dressing
			0.01,	//KNIFE
			0.01,	//MAPA
			0.01,	//RADIO
			0.01,	//AFG
			0.01,	//PAINKILLERS
			0.01,	//SMOKE
			0.01, 	//KIT SAGE
			0.01, 	//KIT CBR
			0.01,   //KIT CAMO
			0.01, 	//FIELD BLACK
			0.01, 	//FIELD HEX
			0.01,   //FIELD URBAN
            0.01,   //FIELD TAN			
			0.01,	//BANDOLIER OLIVE
			0.01,   //TENT BLUEPRINT
			0.01,   //CRATE BLUEPRINT
			0.01,   //Survival Rig
			0.01,   //SURGERY KIT
			0.01,	//Bandolier Mid
			0.01,	//M9
			0.01,	//G17
			0.01,	//M16
			0.01,	//AR10
			0.01,	//SW45
			0.01,	//AK74m	
			0.01,	//AKS74U	
			0.01,	//OLD M4
			0.01,	//M4
			0.01,	//M4K
			0.01,	//BENELLI
			0.01,	//R300
			0.01,	//SVT40
			0.01,	//ENFIELD SCOPED
			0.01	//Mp5
		};		
	};
	class MilitarySpecial: Default {
		zombieChance = 1;
		minRoaming = 0;
		maxRoaming = 2;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_RebelImp3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_GuardianImp3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_SurvivalistImp3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_RefugeeImp3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_HunterImp3"};
		lootChance = 0.05; 
		lootPos[] = {};
		itemType[] =	{
            {"BP_AmmoBoxNew","object","MilitarySpecialAcc"},
			{"BP_AmmoCrateOld","object","MilitarySpecialAcc"},
		    {"BP_WeaponCrateOld","object","MilitarySpecialWpn"},
			{"BP_WeaponCrateOld","object","MilitaryGeneralWpn"},
			{"BP_WeaponCrate_WWII","object","MilitarySurplusWpn"},
			{"BP_Bag1","object","Generic"},
			{"BP_Trashcan","object","Trash"},
			{"BP_MedicalBox","object","Hospital"},
			{"BP_M4_300MK","weapon"},
			{"BP_m9","weapon"},
			{"BP_G18","weapon"},
			{"BP_G17","weapon"},
			{"BP_1911","weapon"},
			{"BP_SUD_AK74M","weapon"},
			{"BP_SUD_AK107","weapon"},
			{"BP_M4","weaponA"},
			{"BP_M4OLD","weapon"},
			{"BP_Benelli","weapon"},
			{"BP_AKM","weapon"},
			{"BP_AR10","weapon"},
			{"BP_SVT40","weapon"},
			{"BP_1911MDes","weapon"},
			{"BP_M4_300","weaponA"},
			{"BP_M4_300k","weapon"},
			{"BP_AK74U","weapon"},
			{"BP_SVT40","weaponA"},
			{"BP_M16OLD","weapon"},
			{"optic_Aco","toolbelt"},
			{"optic_mrco","toolbelt"},
			{"Binocular","weaponNA"},
			{"BP_CPad","toolbelt"},
			{"BP_AFG","toolbelt"},
			{"ItemKnife","magazine"},
			{"ItemMap","toolbelt"}, 
            {"ItemSoda1","magazine"},
			{"ItemCan1","magazine"},
			{"ItemBandage","magazine"},
			{"ItemPainkiller","magazine"},
			{"HandGrenade","magazine"},
			{"SmokeShellRed","magazine"},
			{"optic_holosight","toolbelt"},
			{"V_Rangemaster_belt_BP","vest"},
			{"V_HarnessOGL_brn_BP","vest"},
			{"BP_gemtech9","toolbelt"}
		};
		itemChance[] =	{
			0.13,	//BP_AmmoBoxNew
			0.13,   //BP_AmmoCrateOld
			0.20,   //BP_WeaponCrateOld
			0.20,   //BP_WeaponCrateOld
			0.04,   //WeaponCrate_WWII
			0.07,   //GENERIC
			0.07,   //Trashcan
			0.01,    //BP_MedicalBox
			0.01,	//M4_300MK
			0.01,	//M9
			0.01,	//G18
			0.01,	//G17
			0.01,	//1911
			0.01,	//AK74m	
			0.01,	//AK107	
			0.01,	//M4A1
			0.01,	//M4A1
			0.01,	//BENELLI
			0.01,	//AKM
			0.01,	//AR10
			0.01,	//SVT40
			0.01,	//1911DES
			0.01,	//M4300
			0.01,   //M4300K
			0.01,	//AKS74U
			0.01,	//SVT40 PSO
			0.01,    //AR15
			0.01,	//ACO OPTIC
			0.01,	//HAMR OPTIC
			0.01,	//BINOCULARS
			0.01,	//CHEEKPIECE
			0.01,	//AFG
			0.01,	//KNIFE
			0.01,	//MAPA
			0.01,   //Soda
			0.01,   //Food
			0.01,	//BANDAGE
			0.01,	//PAINKILLER
			0.01,	//HAND GRENADE
			0.01,	//SMOKE GRENADE RED
			0.01,	//HOLO
			0.01,	//BANDOLIER OLIVE
			0.01,   //TAC VEST
			0.01   //GEMTECH 9MM SUPPR
		};		
	};	
	class MilitaryAirfield: Default {
		zombieChance = 1;
		minroaming = 0;
		maxRoaming = 3;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_RebelImp3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_GuardianImp3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_SurvivalistImp3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_RefugeeImp3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_HunterImp3"};
		lootChance = 0.05;
		lootPos[] = {};
		itemType[] =	{
            {"BP_MilCrateTallBLK","object","MilitaryAirfieldSpc"},
			{"BP_AmmoCrateOld","object","MilitarySpecialAcc"},
            {"BP_MilCrateTallBLK","object","MilitaryAirfieldAcc"},
			{"BP_WeaponCrateNewBLK","object","MilitaryAirfieldWpn"},
		    {"BP_MilCrateMediumBLK","object","MilitarySpecialWpn"},
			{"BP_WeaponCrate_WWII","object","MilitarySurplusWpn"},
			{"BP_TrashBinGR","object","Trash"},
			{"BP_CartonBoxSmall","object","Generic"},
			{"BP_FoodBoxIDAP","object","Supermarket"},
			{"BP_MedicalBox","object","Hospital"}
		};
		itemChance[] =	{
			0.03,	//MilitaryAirfieldSpc
			0.10,	//BP_AmmoCrateOld
			0.10,	//BP_MilCrateTallBLK
			0.17,   //BP_WeaponCrateNewBLK
			0.17,   //BP_MilCrateMediumBLK
			0.02,   //BP_WeaponSurplus
			0.10,   //TRASH
			0.10,   //GENERIC
			0.06,   //CARDBOARD
			0.01	//BP_MedicalBox
		};		
	};
	class MilitaryTower: Default {
		zombieChance = 1;
		minRoaming = 0;
		maxRoaming = 1;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_RebelImp3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_GuardianImp3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_SurvivalistImp3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_RefugeeImp3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_HunterImp3"};
		lootChance = 0.15;
		lootPos[] = {};
		itemType[] =	{
            {"BP_WeathCrateBigGRN","object","MilitaryTower"},
			{"BP_CartonBoxSmall","object","Generic"},
			{"BP_WeaponCrate_WWII","object","MilitarySurplusWpn"},
			{"BP_PlasticBox","object","Office"},
			{"BP_SVD","weaponA"},
			{"BP_AR10","weaponA"},
			{"BP_SA582","weaponA"},
			{"BP_M16OLD","weaponA"},
			{"BP_R700","weaponA"},
			{"BP_M24Des","weaponA"},
			{"BP_5Rnd_762mk316_Mag","magazine"},
			{"BP_10Rnd_762x51_Mag","magazine"},
			{"BP_762x54_SVD","magazine"},
			{"BP_5Rnd_Mauser_Mag","magazine"},
			{"BP_545x39_HP_30rnd","magazine"},
			{"BP_545x39_7N22","magazine"},
			{"BP_10Rnd_303_JSP_Mag","magazine"},
			{"BP_762x54_7N1_10rnd","magazine"},
			{"BP_762x54_7N13_10rnd","magazine"}
		};
		itemChance[] =	{
			0.03,	//BP_WeathCrateBigGRN
			0.07,   //GENERIC
			0.03,   //SURPLUS
			0.07,	//Office
			0.01,	//SVD
			0.01,   //AR10
			0.01,   //AKM RIS
			0.01,   //BP_M16 OLD
			0.01,   //R700
			0.01,   //M24Des
			0.01,	//5RND 7.62 MK316
			0.01,   //10RND 7.62
			0.01,   //SVD Magazine
			0.01,   //MAUSER MAG
			0.01,   //30rnd 5.45x39 Hollow Point magazine
			0.01,   //545x39_7N22
			0.01,   //10Rnd_303_JSP_Mag
			0.01,   //BP_762x54_7N1_10rnd
			0.01    //762x54_7N13_10rnd
		};		
	};
	class MilitaryRanger: Default {
		zombieChance = 1;
		minRoaming = 0;
		maxRoaming = 2;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_RebelImp3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_GuardianImp3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_SurvivalistImp3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_RefugeeImp3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_HunterImp3"};
		lootChance = 0.05;
		lootPos[] = {};
		itemType[] =	{
			{"BP_AmmoBoxNew","object","MilitaryRangerAcc"},
            {"BP_MilCrateTallOLV","object","MilitaryRangerAcc"},
			{"BP_WeaponCrateNew","object","MilitaryRangerWpn"},
			{"BP_WeaponCrate_WWII","object","MilitarySurplusWpn"},
			{"BP_Bag1","object","Generic"},
			{"BP_MedicalBox","object","Hospital"},
			{"V_TacVest_gen_BP","vest"}   //Gendarmerie Vest
		};
		itemChance[] =	{
			0.12,	//BP_AmmoBoxNew "Explosives"
			0.12,	//BP_MilCrateTallOLV
			0.30,   //BP_WeaponCrateNew
			0.04,   //WWII
			0.15,   //GENERIC
			0.05,    //BP_MedicalBox
			0.01     //Gendarmerie Vest
		};		
	};

	class GhostHotelAcc: Default {
		zombieChance = 1;
		minRoaming = 0;
		maxRoaming = 2;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_RebelImp3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_GuardianImp3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_SurvivalistImp3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_RefugeeImp3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_HunterImp3"};
		lootChance = 0.05;
		lootPos[] = {};
		itemType[] =	{
			{"BP_GhostBoxBlk","object","HotelAcc"},
            {"BP_GhostBoxGrn","object","HotelAcc"},
			{"BP_GhostBoxBrn","object","HotelAcc"},
			{"BP_WeathCrateBigBRN","object","HotelWpn"},
			{"BP_WeathCrateBigGRN","object","MilitaryTower"},
			{"BP_LuggageCaseGR","object","Office"},
			{"BP_LuggageCaseGR","object","Generic"},
			{"BP_LuggageCaseGR","object","Hospital"}
		};
		itemChance[] =	{
			0.15,	//BP_GhostBoxBlk
			0.15,	//BP_GhostBoxGrn
			0.15,	//BP_GhostBoxBrn
			0.11,   //HotelWpn
			0.05,   //MilitaryTower
			0.08,   //GENERIC
			0.14,   //GENERIC
			0.02    //BP_MedicalBox
		};		
	};
	
	class GhostHotelWpn: Default {
		zombieChance = 1;
		minRoaming = 0;
		maxRoaming = 2;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_RebelImp3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_GuardianImp3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_SurvivalistImp3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_RefugeeImp3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_HunterImp3"};
		lootChance = 0.05;
		lootPos[] = {};
		itemType[] =	{
			{"BP_GhostBoxBlk","object","HotelAcc"},
            {"BP_GhostBoxGrn","object","HotelAcc"},
			{"BP_GhostBoxBrn","object","HotelAcc"},
			{"BP_WeathCrateBigBRN","object","HotelWpn"},
			{"BP_WeaponCrate_WWII","object","MilitarySurplusWpn"},
			{"BP_WreckedBox","object","Generic"},
			{"BP_WeathCrateBigBRN","object","MilitaryTower"}
		};
		itemChance[] =	{
			0.08,	//BP_GhostBoxBlk
			0.08,	//BP_GhostBoxGrn
			0.08,	//BP_GhostBoxBrn
			0.26,   //HotelWpn
			0.05,   //BP_WeaponSurplus
			0.22,   //GENERIC
			0.11    //MilitaryTower
		};		
	};
	
//HELI CRASH TABLES		
	class MilitarCrash: Default {
		zombieChance = 1;
		minRoaming = 8;
		maxRoaming = 17;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_RebelImp3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_GuardianImp3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_SurvivalistImp3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_RefugeeImp3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_HunterImp3"};
		lootChance = 1;
		lootPos[] = {};
		itemType[] =	{		
			{"ItemSurgeryKit","toolbelt"},
			{"BP_5Rnd_300_Mag","magazine"},
			{"BP_MedicalboxHelicrash","object"},
			{"ItemMorphine","magazine"},
			{"ItemFieldDressing","magazine"},
			{"ItemAntibiotic","magazine"},
			{"ItemAdrenaline","magazine"},
			{"V_TacVest_brn_BP","vest"},
			{"BP_m9tac","weaponA"},
			{"BP_ScarH","weaponA"},
			{"BP_MX_SW","weapon"},
			{"BP_Carryall_blk","backpack"},
			{"BP_Zafir","weapon"},
			{"V_RebreatherB","vest"},
			{"BP_MK20_GL","weapon"},
			{"BP_Survivalist_4_Stone","uniform"},
			{"BP_Survivalist_4_Tree","uniform"},
			{"BP_Survivalist_4_Dirt","uniform"},
			{"BP_Survivalist_4_Snow","uniform"},
			{"BP_Survivalist_4_Corn","uniform"},
			{"BP_Survivalist_4_Night","uniform"},
			{"BP_MXM_black","weaponA"},
			{"BP_MXM","weapon"},
			{"BP_MXC","weapon"},
			{"BP_muzzle_snds_H_MG","toolbelt"},
			{"Rangefinder","weaponNA"},
			{"BP_1Rnd_HE_shell","magazine"},
			{"BP_100Rnd_127x99_box","magazine"},
			{"BP_Minimi_762CCO","weaponA"},
			{"BP_M14RIS","weapon"},
			{"BP_SW44","weaponA"},
			{"BP_M4_300MK","weaponA"},
			{"BP_M25WF","weaponA"},
			{"BP_DMR_Officer","weapon"}
			
		};
		itemChance[] =	{
			0.05,   //SURGERY KIT
			0.05,   //.300 WINMAG
			0.02,	//MED BOX
			0.12,	//Morphine
			0.12,	//FieldDressing
			0.12,	//Antibiotic
			0.06,	//Adrenaline
			0.15,	//V_TacVest_camo
			0.12,	//M9TAC
			0.02,	//SCARH
			0.13,	//MX SW
			0.10,	//CARRYALL
			0.10,	//ZAFIR LMG
			0.12,	//REBREATHER
			0.11,	//MK20 GL
			0.01,	//STONE GHILLIE
			0.01,	//TREE GHILLIE
			0.01,	//DIRT GHILLIE
			0.01,	//Snow GHILLIE
			0.01,	//Corn GHILLIE
			0.01,	//Night GHILLIE
			0.01,   //MXM SpecOps
			0.03,	//MXM
			0.13,	//MXC
			0.02,	//LMG SUPPRESSOR
			0.03,	//RANGEFINDERS
			0.15,   //HE SHELL
			0.01,   //50CAL M2 BOX
			0.07,    //MK48 CCO
			0.01,    //M14 RIS
			0.07,    //BP_SW44
			0.07,    //BP_M4_300MK
			0.01,    //M25WF
			0.01,    //M14 DMR
		};
	};
	class HeliCrash: Default {
		zombieChance = 1;
		minRoaming = 8;
		maxRoaming = 17;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_RebelImp3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_GuardianImp3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_SurvivalistImp3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_RefugeeImp3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_HunterImp3"};
		lootChance = 0.85;
		lootPos[] = {};
		itemType[] =	{		
			{"BP_MX_SW","weapon"},
			{"BP_Minimi_762","weapon"},
			{"BP_Minimi_HG","weapon"},
			{"BP_MedicalboxHelicrash","object"},
			{"ItemMorphine","magazine"},
			{"ItemFieldDressing","magazine"},
			{"ItemAntibiotic","magazine"},
			{"ItemAdrenaline","magazine"},
			{"AmmoBoxSmall_556","object"},
			{"AmmoBoxSmall_762","object"},
			{"V_TacVest_camo_BP","vest"},
			{"BP_Survivalist_4_Stone","uniform"},
			{"BP_Survivalist_4_Tree","uniform"},
			{"BP_Survivalist_4_Dirt","uniform"},
			{"BP_Survivalist_4_Snow","uniform"},
			{"BP_Survivalist_4_Corn","uniform"},
			{"BP_Survivalist_4_Night","uniform"},
			{"BP_M24Spec","weaponA"},
			{"BP_MK20Spec","weaponA"},
			{"BP_M110","weapon"},
			{"BP_SR25","weaponA"},
			{"BP_muzzle_snds_H_MG","toolbelt"},
			{"BP_Zafir","weapon"},
			{"BP_MX_GL","weapon"},
			{"V_Rangemaster_belt_BP","vest"},
			{"BP_muzzle_snds_B","toolbelt"},
			{"BP_muzzle_snds_M","toolbelt"},
			{"BP_M21K","weaponA"},
			{"V_RebreatherB","vest"},
			{"BP_M40A3","weaponA"},
			{"Rangefinder","weaponNA"},
			{"BP_MXM_black","weapon"},
			{"BP_FALM","weaponA"},
			{"BP_M4_300MK","weapon"},
			{"BP_762x51_Box_Tracer","magazine"},
			{"BP_100Rnd_65x39","magazine"},
			{"BP_762Muzzle","toolbelt"},
			{"ItemSurgeryKit","toolbelt"},
			{"V_PlateCarrierIA2_dgtl_BP","vest"},
			{"BP_M14RIS","weapon"},
			{"BP_M25WF","weaponA"},
			{"BP_DMR_Officer","weapon"},
			{"BP_SW44","weaponA"},
			{"BP_M4_300MK","weaponA"}
		};
		itemChance[] =	{
			0.10,	//MX SW
			0.20,	//R3F 7.62
			0.35,	//R3F 5.56
			0.02,	//CAJA MEDICA
			0.17,	//Morphine
			0.17,	//FieldDressing
			0.17,	//Antibiotic
			0.10,	//Adrenaline
			0.10,	//AMMO BOX 5.56
			0.05,	//AMMO BOX 7.62
			0.40,	//TAC VEST
			0.01,	//STONE GHILLIE
			0.01,	//TREE GHILLIE
			0.01,	//DIRT GHILLIE
			0.01,	//Snow GHILLIE
			0.01,	//Corn GHILLIE
			0.01,	//Night GHILLIE
			0.01,	//M24A2 SPECOPS
			0.02,	//MK20 SPEC
			0.02,	//M110WL
			0.02,	//SR-25
			0.10,	//MG SUPPRESSOR
			0.30,	//ZAFIR LMG
			0.15,	//MX GL
			0.50,	//OLIVE BANDOLIER
			0.02,	//7.62 SUPPRESSOR
			0.02,	//5.56 SUPPRESSOR
			0.03,	//M21K
			0.10,	//REBREATHER
			0.10,	//M40A3G
			0.08,	//RANGEFINDERS
			0.03,	//MXM SOS
			0.01,   //FALM
			0.01,   //M4MK
			0.10,	//150 ROUND 7.62 BOX
			0.20,	//200 ROUND 6.5 BOX
			0.03,	//762MUZZLE
			0.06,   //SURGERY KIT
			0.02,    //PlateCarrier Digital
			0.02,    //M14 RIS
			0.01,    //M25 WF
			0.02,	//M14 DMR
			0.07,    //BP_SW44
			0.15   //BP_M4_300MK
		};
	};
	class HeliCrash_No50s: Default {
		zombieChance = 0.4;
		minRoaming = 8;
		maxRoaming = 17;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_RebelImp3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_GuardianImp3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_SurvivalistImp3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_RefugeeImp3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_HunterImp3"};
		lootChance = 0.75;
		lootPos[] = {};
		itemType[] =	{		
			{"BP_SA582","weapon"},
			{"BP_FNFAL","weapon"},
			{"BP_Minimi_762","weapon"},
			{"BP_Minimi_HG","weapon"},
			{"BP_R700","weaponA"},
			{"BP_SR25","weapon"},
			{"BP_1Rnd_HE_shell","magazine"},
			{"BP_m40a3G","weapon"},
			{"BP_MedicalboxHelicrash","object"},
			{"ItemMorphine","magazine"},
			{"ItemFieldDressing","magazine"},
			{"ItemAntibiotic","magazine"},
			{"ItemAdrenaline","magazine"},
			{"V_TacVest_khk_BP","vest"},
			{"V_RebreatherB","vest"},
			{"BP_Mk12mod1Spec","weapon"},
			{"BP_M21K","weaponA"},
			{"BP_M24Des","weaponA"},
			{"BP_muzzle_snds_H","toolbelt"},
			{"BP_20Rnd_65x47_Lapua","magazine"},
			{"BP_150Rnd_762x51_Box","magazine"},
			{"ItemSurgeryKit","toolbelt"}
		};
		itemChance[] =	{
			0.12,   //SA58
			0.25,   //FNFAL
			0.08,	//MINIMI 762
			0.12,	//MINIMI HG
			0.12,   //R700
			0.02,	//SR25
			0.04,	//HE SHELL
			0.05,   //M40A3 GHILLIE
			0.02,	//MED BOX
			0.12,	//Morphine
			0.12,	//FieldDressing
			0.12,	//Antibiotic
			0.08,	//Adrenaline
			0.10,	//TACTICAL VEST
			0.03,	//REBREATHER
			0.05,	//MK12MOD1
			0.02,	//M21K
			0.09,   //M24
			0.01,	//5.56 SUPPRESSOR
			0.07,	//LAPUA 6.5x47MM MAG
			0.03,   //150RND 762.51MM BOX
			0.06   //SURGERY KIT
			
		};
	};
	class Castle: Default {
		zombieChance = 0.4;
		minRoaming = 0;
		maxRoaming = 1;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.75;
		lootPos[] = {};
		itemType[] =	{		
			{"BP_Medicalbox","object"},
			{"AmmoBoxSmall_762","object"},
			{"V_TacVest_camo","vest"},
			{"Rangefinder","weaponNA"},
			{"BP_Bergen_rgr","backpack"}, 
			{"BP_Kitbag_sgg","backpack"}, 
			{"BP_Bergen_rgr","backpack"}, 
			{"BP_FieldPack_ocamo","backpack"}
		};
		itemChance[] =	{
			0.03,	//CAJA MEDICA
			0.03,	//AMMO BOX 7.62
			0.02,	//CAMO CLOTHING
			0.01,	//Telemetro
			0.04, 	//ALICE PACK
			0.04, 	//ASSAULT PACK
			0.03,   //BRITISH BACKPACK
			0.01	//CZECH BACKPACK
			
		};
	};
	class AmmoPallet4: Default {
		zombieChance = 0;
		minRoaming = 0;
		maxRoaming = 0;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.85;
		lootPos[] = {};
		itemType[] =	{		
			{"BP_AmmoPallet4","object","AmmoPallet4"},
			{"BP_AmmoPallet4","object","AmmoPalletTroll"}
		};
		itemChance[] =	{
			0.75,	//Military Pallet
			0.25   //Troll
		};
	};
	class ApexMilBox1: Default {
		zombieChance = 1;
		minRoaming = 0;
		maxRoaming = 2;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_RebelImp3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_GuardianImp3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_SurvivalistImp3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_RefugeeImp3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_HunterImp3"};
		lootChance = 0.50;
		lootPos[] = {};
		itemType[] =	{		
			{"BP_ApexMilBox1","object","ApexMilBox1"}
		};
		itemChance[] =	{
			0.60
		};
	};
	
	class ApexMilBox2: Default {
		zombieChance = 1;
		minRoaming = 0;
		maxRoaming = 2;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_RebelImp3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_GuardianImp3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_SurvivalistImp3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_RefugeeImp3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_HunterImp3"};
		lootChance = 0.50;
		lootPos[] = {};
		itemType[] =	{		
			{"BP_ApexMilBox1","object","ApexMilBox1"},
			{"BP_ApexMilBox2","object","ApexMilBox2"},
			{"BP_AmmoCrateNew","object","HotelAcc"},
			{"BP_WeathCrateBigBRN","object","HotelWpn"},
			{"BP_AmmoCrateNew","object","MilitaryRangerAcc"},
			{"BP_WeaponCrateNew","object","MilitaryRangerWpn"},
			{"BP_WeaponCrate_WWII","object","MilitarySurplusWpn"},
			{"BP_MedicalBox","object","Hospital"},
			{"BP_CardboardBox_3","object","Generic"}
		};
		itemChance[] =	{
			0.10,	//ApexMilBox1
			0.10,	//ApexMilBox2
			0.10,	//GHOST
			0.10,	//GHOST
			0.10,	//RANGER
			0.10,	//RANGER
			0.10,	//WWII
			0.02,    //Hospital
			0.15   //Generic
		};
	};
	
	class Greenhouse: Default {
		zombieChance = 0;
		minRoaming = 0;
		maxRoaming = 0;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.85;
		lootPos[] = {};
		itemType[] =	{		
			{"ItemPlate1","magazine"},   //Plate
			{"ItemPlate2","magazine"},   //Plate2
			{"ItemRock","magazine"},   //Rock
			{"FoodPumpkin","magazine"},
			{"FoodMushroom","magazine"}
		};
		itemChance[] =	{
			0.14,	//Plate
			0.14,	//Plate2
			0.14,	//Rock
			0.38,	//FoodPumpkin
			0.20	//FoodMushroom
		};
	};
	
	class Stalker: Default {
		zombieChance = 0;
		minRoaming = 0;
		maxRoaming = 0;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.85;
		lootPos[] = {};
		itemType[] =	{		
			{"BP_Bag3","object","Stalker"},
			{"BP_WreckedBox","object","Stalker"},
			{"BP_762Muzzle","toolbelt"},
			{"ItemToiletPaper","magazine"},
			{"ItemRock","magazine"}   //Rock
		};
		itemChance[] =	{
			0.48,	//Stalker
			0.48,	//Stalker
			0.01,	//7.62 Muzzle
			0.02,	//ToiletPaper
			0.02	//Rock
		};
	};
	
	class SuicideCrate: Default {
		zombieChance = 0;
		minRoaming = 0;
		maxRoaming = 0;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.85;
		lootPos[] = {};
		itemType[] =	{		
			{"BP_HeavyWeaponCrate","object","SuicideCrate"},
			{"BP_AWSM","weapon"},
			{"BP_SVDK_WDL","weaponA"},
			{"BP_arifle_ARX_ghex_F","weapon"},  //Type 115 Green Hex
			{"BP_arifle_ARX_hex_F","weapon"},  //Type 115 Hex 
			{"V_TacVest_gen_BP","vest"},   //Gendarmerie Vest
			{"BP_762Muzzle","toolbelt"},
			{"ItemToiletPaper","magazine"}
		};
		itemChance[] =	{
			0.90,	//SuicideCrate
			0.01,   //BP_AWSM
			0.01,   //BP_SVDK_WDL
			0.01,	//Type 115 Green Hex
			0.01,	//Type 115 Hex
			0.01,	//Gendarmerie Vest
			0.01,	//7.62 Muzzle
			0.02	//ToiletPaper
		};
	};
	
	class Survivor: Default {
		zombieChance = 0;
		minRoaming = 0;
		maxRoaming = 0;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.85;
		lootPos[] = {};
		itemType[] =	{		
			{"BP_ContrabandBox","object","SurvivorCrate"},
			{"BP_ContrabandBoxEmpty","object","Trash"},
			{"BP_SVD_DES","weapon"},
			{"BP_AWSM","weapon"},
			{"BP_arifle_AKM_FL_F"},
			{"BP_Kar98","weaponA"},
			{"BP_LeeEnfieldK","weaponA"},
			{"BP_CampPack","backpack"},
			{"BP_HCampPack","backpack"},
			{"V_TacVest_camo","vest"},
			{"V_Chestrig_blk_BP","vest"},
			{"BP_R7Sup","toolbelt"},
			{"BP_CZSup_br","toolbelt"},
			{"BP_PPK","weapon"},
			{"BP_SVDK_WDL","weaponA"},
			{"BP_762Muzzle","toolbelt"}
		};
		itemChance[] =	{
			0.70,	//SurvivorCrate
			0.20,	//Empty SurvivorCrate
			0.01,   //SVD_DES
			0.01,   //BP_AWSM
			0.01,   //AKM_FL_F
			0.01,   //Kar98 Scoped
			0.01,   //LeeEnfieldK Scoped
			0.01,	//Camping Pack
			0.01,	//Heavy Camping Pack
			0.01,   //TacVest_camo
			0.01,   //Chestrig_blk
			0.01,   //R7Sup
			0.01,   //CZSup
			0.01,   //Walter PPK suppressed
			0.01,   //BP_SVDK_WDL
			0.01   //762Muzzle
		};
	};
	
	class Smallbox: Default {
		zombieChance = 0;
		minRoaming = 0;
		maxRoaming = 0;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.85;
		lootPos[] = {};
		itemType[] =	{		
			{"BP_WeathCrateSmallGRN","object","WindmillAcc"},
			{"BP_WeathCrateSmallGRN","object","CastleAcc"},
			{"BP_SA58","weaponA"},
			{"BP_BAR","weaponA"},
			{"BP_Bergen_Hero","backpack"}
		};
		itemChance[] =	{
			0.50,	//SurvivorCrate
			0.50,	//Empty SurvivorCrate
			0.01,   //AK
			0.01,   //BAR
			0.01	//Bergen_Hero
		};
	};
	
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////////////////////////////////////---OLD LOOTTABLES---///////////////////////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	class UnderWater: Default {
		zombieChance = 0.0;
		minRoaming = 0;
		maxRoaming = 0;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 1;
		lootPos[] = {};
		itemType[] =	{		
			{"DM_M4Box","vehicle"}
		};
		itemChance[] =	{
			1.00	//WEAPON BOX
			
		};
	};	

	class CivilCrash: Default 
	{
		zombieChance = 1;
		minRoaming = 10;
		maxRoaming = 25;
		zombieClass[] = {"z_soldier_pilot","z_soldier_heavy"};
		lootChance = 1;
		lootPos[] = {};
		itemType[] =	
		{
			{"Binocular","weaponNA"},
			{"ItemKnife","magazine"},
			{"ItemGPS","toolbelt"},
			{"BP_3Rnd_HE_shell","magazine"},					
			{"BP_MXM","weapon"},
			{"BP_MX_GL","weapon"},		
			{"BP_Kitbag_sgg","backpack"},
			{"V_Rangemaster_belt_BP","vest"},
			{"BP_Carryall_mcamo","backpack"},   
			{"ItemMap","toolbelt"},
			{"ItemGPS","toolbelt"},
			{"BP_Bergen_rgr","backpack"}, 
			{"BP_FieldPack_ocamo","backpack"},
			{"V_Chestrig_blk_BP","vest"},
			{"V_RebreatherB","vest"},
			{"BP_Garand","weapon"},
			{"BP_GarandK","weapon"},
			{"BP_GarandU","weaponA"},
            {"BP_Kar98","weapon"},
			{"BP_Kar98k","weapon"},
			{"BP_Kar98z","weaponA"},
			{"BP_BAR","weapon"},
			{"BP_1911","weapon"},
			{"BP_SVT40","weapon"},
			{"BP_SVT40_2","weaponA"},
			{"BP_M1903","weaponA"},
			{"BP_M1903K","weaponA"},
			{"BP_M16OLD","weapon"},
			{"BP_SA58","weapon"},
			{"BP_M21","weaponA"},
			{"BP_FNFAL","weapon"}
		};
		itemChance[] =
		{	
			0.12,	//Binoculars
			0.12,	//Hunting Knife
			0.04,	//GPS		
			0.12,	//HE SHELL 3RND			
			0.12,	//MXM
			0.04,	//MX GL
			0.12, 	//Assault Pack (ACU)
		    0.12, 	//Patrol Pack (coyote)
		    0.06, 	//Backpack (coyote)
			0.10,	//Mapa
			0.15,	//GPS
			0.03,	//British Backpack
			0.02,	//Czech Backpack
			0.02,	//Chestrig_blk
			0.02,   //REBREATHER
			0.04,	//GARAND
			0.02,	//GARAND K
			0.02,	//GARAND SCOPE
			0.02,	//K98
			0.02,	//K98K
			0.01,	//K98 SCOPE
			0.02,	//BAR	
			0.08,	//1911
			0.03,	//SVT40
			0.02,	//SVT40 SCOPE
			0.02,	//M1903
			0.01,	//M1903K
			0.09,	//M16A2
			0.05,	//AK47
			0.01,	//M21
			0.04	//FNFAL
		};
	};
	
#include "CfgBuildingPos.hpp"
};