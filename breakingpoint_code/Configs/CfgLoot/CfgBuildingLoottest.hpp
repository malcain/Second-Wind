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
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_Rebel3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_Guardian3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_Survivalist3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_Refugee3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_Hunter3"};
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
		zombieClass[] = {"BPZombie_RebelImp1","BPZombie_RebelImp2","BPZombie_RebelImp3","BPZombie_GuardianImp1","BPZombie_GuardianImp2","BPZombie_GuardianImp3","BPZombie_SurvivalistImp1","BPZombie_SurvivalistImp2","BPZombie_SurvivalistImp3","BPZombie_RefugeeImp1","BPZombie_RefugeeImp2","BPZombie_RefugeeImp3","BPZombie_HunterImp1","BPZombie_HunterImp2","BPZombie_HunterImp3"};
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
			{"BP_BriefbagOrangeSide","object","Residential"},
			{"BP_BriefbagPink","object","Residential"},
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
			{"BP_15Rnd_9x21_Rubber","magazine"},
			{"BlueprintHavenReinforce","magazine"},
			{"BlueprintStove","magazine"},
			{"BlueprintWaterBarrel","magazine"},
			{"BlueprintFuelBarrel","magazine"},
			{"BlueprintTele","magazine"},
			{"BlueprintCrate1","magazine"},
			{"BP_Crossbow","weapon"},
			{"BP_Crossbow_DigitCamo","weaponA"},
			{"BP_Arrow_Mag","magazine"},
			{"BP_1866C","weapon"}
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
			0.05,   //BP_Briefbags
			0.05,   //BP_Briefbags
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
			0.01,	//9MM RUBBER
			0.01,    //HavenReinforcement BLUEPRINT
			0.01,    //Stove BLUEPRINT
			0.01,    //Barrel Water BLUEPRINT
			0.01,    //barrel Fuel BLUEPRINT
			0.01,    //television BLUEPRINT
			0.01,    //CRATE BLUEPRINT
			0.02,	//Crossbow
			0.01,	//Crossbow
			0.02,	//Crossbow Arrow
			0.01	//1886 collector
		};		
	};
	class Residential2: Default {
		zombieChance = 0.2;
		minRoaming = 0;
		maxRoaming = 1;
		zombieClass[] = {"BPZombie_RebelImp1","BPZombie_RebelImp2","BPZombie_RebelImp3","BPZombie_GuardianImp1","BPZombie_GuardianImp2","BPZombie_GuardianImp3","BPZombie_SurvivalistImp1","BPZombie_SurvivalistImp2","BPZombie_SurvivalistImp3","BPZombie_RefugeeImp1","BPZombie_RefugeeImp2","BPZombie_RefugeeImp3","BPZombie_HunterImp1","BPZombie_HunterImp2","BPZombie_HunterImp3"};
		lootChance = 0.05;
		lootPos[] = {};
		itemType[] =	{
			{"BP_WeaponCrate_WWII","object","MilitarySurplusWpn"},
            {"BP_CardboardBox_2","object","Supermarket"},
            {"BP_CardboardBox_3","object","Generic"},
            {"BP_TrashcanHouse","object","Trash"},
			{"BP_Bag1","object","Generic"},
			{"BP_WeaponCrateOld","object","Residential2"},
			{"BP_LuggageCaseGR","object","Residential2"},
			{"BP_LuggageCaseGR","object","Residential"},
			{"BP_LuggageCaseBG","object","Residential"},
			{"BP_BriefbagOrange","object","Residential"},
			{"BP_BriefbagPinkSide","object","Residential"},
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
			{"BP_15Rnd_9x21_Rubber","magazine"},
			{"BlueprintHavenReinforce","magazine"},
			{"BlueprintStove","magazine"},
			{"BlueprintWaterBarrel","magazine"},
			{"BlueprintFuelBarrel","magazine"},
			{"BlueprintTele","magazine"},
			{"BlueprintCrate1","magazine"},
			{"BP_Crossbow","weapon"},
			{"BP_Crossbow_DigitCamo","weaponA"},
			{"BP_Arrow_Mag","magazine"},
			{"BP_1866C","weapon"}
		};
		itemChance[] =	{
			0.01,	//BP_Surplus
			0.01,	//BP_CardBoardBox2
			0.08,	//BP_CardBoardBox3
			0.08,	//BP_Trashcan
			0.08,   //BP_Bag1
			0.01,   //BP_WeaponCrateOld
			0.01,   //BP_LuggageCaseGR
			0.10,   //BP_LuggageCaseGR
			0.10,   //BP_LuggageCaseBG
			0.06,   //BP_Briefbags
			0.06,   //BP_Briefbags
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
			0.02,	//CZ550 Old
			0.02,	//CZ455
			0.02,	//REM7
			0.02,	//1866
			0.02,	//R300
			0.02,	//BANDOLIER OLIVE
			0.02,	//KATANA
			0.02,   //BENELLI
			0.02,   //REM870
			0.02,	//45ACP
			0.02,	//303B
			0.02,	//22LR
			0.02,	//PAINKILLER
			0.01,	//ANTIBIOTIC
			0.02,	//DUCT TAPE
			0.02,	//BANDAGE
			0.01,	//HATCHET
			0.01,   //Showel
			0.01,	//9MM RUBBER
			0.01,    //HavenReinforcement BLUEPRINT
			0.01,    //Stove BLUEPRINT
			0.01,    //Barrel Water BLUEPRINT
			0.01,    //barrel Fuel BLUEPRINT
			0.01,    //television BLUEPRINT
			0.01,    //CRATE BLUEPRINT
			0.02,	//Crossbow
			0.01,	//Crossbow
			0.02,	//Crossbow Arrow
			0.01	//1886 collector
		};		
	};
	
	class Supermarket: Default {
		lootChance = 0.05;
		minRoaming = 0;
		maxRoaming = 2;
		zombieChance = 0.8;
		zombieClass[] = {"BPZombie_RebelImp1","BPZombie_RebelImp2","BPZombie_RebelImp3","BPZombie_GuardianImp1","BPZombie_GuardianImp2","BPZombie_GuardianImp3","BPZombie_SurvivalistImp1","BPZombie_SurvivalistImp2","BPZombie_SurvivalistImp3","BPZombie_RefugeeImp1","BPZombie_RefugeeImp2","BPZombie_RefugeeImp3","BPZombie_HunterImp1","BPZombie_HunterImp2","BPZombie_HunterImp3"};
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
			{"BP_BriefbagPink","object","Residential"},
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
		zombieClass[] = {"BPZombie_RebelImp1","BPZombie_RebelImp2","BPZombie_RebelImp3","BPZombie_GuardianImp1","BPZombie_GuardianImp2","BPZombie_GuardianImp3","BPZombie_SurvivalistImp1","BPZombie_SurvivalistImp2","BPZombie_SurvivalistImp3","BPZombie_RefugeeImp1","BPZombie_RefugeeImp2","BPZombie_RefugeeImp3","BPZombie_HunterImp1","BPZombie_HunterImp2","BPZombie_HunterImp3"};
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
			{"BP_LuggageCaseGR","object","Office2"},
			{"BP_BriefbagOrange","object","Residential"},
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
			0.07,   //BP_Bag2
			0.07,    //BP_LuggageBags
			0.07,    //BP_Packs
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
	class Hospital: Default {
		zombieChance = 0.4;
		minRoaming = 0;
		maxRoaming = 2;
		zombieClass[] = {"BPZombie_RebelImp1","BPZombie_RebelImp2","BPZombie_RebelImp3","BPZombie_GuardianImp1","BPZombie_GuardianImp2","BPZombie_GuardianImp3","BPZombie_SurvivalistImp1","BPZombie_SurvivalistImp2","BPZombie_SurvivalistImp3","BPZombie_RefugeeImp1","BPZombie_RefugeeImp2","BPZombie_RefugeeImp3","BPZombie_HunterImp1","BPZombie_HunterImp2","BPZombie_HunterImp3"};
		lootChance = 0.20;
		lootPos[] = {};
		itemType[] =	{
			{"BP_MedicalBox","object","Hospital"},
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
			0.30,	//BP_MedicalBox
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
		zombieClass[] = {"BPZombie_RebelImp1","BPZombie_RebelImp2","BPZombie_RebelImp3","BPZombie_GuardianImp1","BPZombie_GuardianImp2","BPZombie_GuardianImp3","BPZombie_SurvivalistImp1","BPZombie_SurvivalistImp2","BPZombie_SurvivalistImp3","BPZombie_RefugeeImp1","BPZombie_RefugeeImp2","BPZombie_RefugeeImp3","BPZombie_HunterImp1","BPZombie_HunterImp2","BPZombie_HunterImp3"};
		lootChance = 0.20;
		lootPos[] = {};
		itemType[] =	{
			{"BP_MedicalBox","object","Hospital"},
			{"BP_MedicalMultibox","object","Research"},
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
			0.08,	//BP_MedicalBox
			0.17,	//BP_MedicalMultibox
			0.12,   //BP_PlasticBox
			0.01,   //BP_PlasticBox MilitaryAirfieldAcc
			0.05,	//BANDAGE
			0.05,	//PAINKILLER
			0.05,	//MORPHINE
			0.05,	//FIELD DRESSING
			0.05,	//ANTIBIOTIC
			0.03,   //SURGERY KIT
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
	class Windmill: Default {
		zombieChance = 0.5;
		minRoaming = 1;
		maxRoaming = 1;
		zombieClass[] = {"BPZombie_RebelImp1","BPZombie_RebelImp2","BPZombie_RebelImp3","BPZombie_GuardianImp1","BPZombie_GuardianImp2","BPZombie_GuardianImp3","BPZombie_SurvivalistImp1","BPZombie_SurvivalistImp2","BPZombie_SurvivalistImp3","BPZombie_RefugeeImp1","BPZombie_RefugeeImp2","BPZombie_RefugeeImp3","BPZombie_HunterImp1","BPZombie_HunterImp2","BPZombie_HunterImp3"};
		lootChance = 0.25;
		lootPos[] = {};
		itemType[] =	{
			{"BP_WreckedBox","object","Trash"},
			{"BP_Bag1","object","Generic"},
			{"BP_Sack","object","Supermarket"},
			{"BP_WeathCrateBigWRN","object","WindmillWpn"},
			{"BP_WeathCrateWRN","object","Castle"},
			{"BP_WeaponCrate_WWII","object","MilitarySurplusWpn"},
			{"BP_WeathCrateSmallWRN","object","WindmillAcc"}
		};
		itemChance[] =	{
			0.10,	//BP_WreckedBox
			0.10,   //BP_Bag1
			0.10,   //BP_Sack
			0.08,   //WINDMILL WPN
			0.07,   //Castle
			0.01,   //SURPLUS WPN
			0.30    //WINDMILL ACC 
		};		
	};
	class Farm: Default {
		zombieChance = 0.2;
		minRoaming = 0;
		maxRoaming = 1;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_Rebel3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_Guardian3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_Survivalist3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_Refugee3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_Hunter3"};
		lootChance = 0.10;
		lootPos[] = {};
		itemType[] =	{
			{"BP_Bag1","object","Generic"},
			{"BP_Bag2","object","Generic"},
			{"BP_AmmoBoxOld","object","WindmillAcc"},
			{"BP_WeaponCrate_WWII","object","MilitarySurplusWpn"},
			{"BP_CardboardBox_4","object","Farm"}
		};
		itemChance[] =	{
			0.15,   //BP_Bag1
			0.15,   //BP_Bag2
			0.15,   //BP_WindmillAcc
			0.01,   //SURPLUS WPN
			0.50    //BP_Farm
		};		
	};
	class Industrial: Default {
		zombieChance = 0.2;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_Rebel3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_Guardian3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_Survivalist3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_Refugee3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_Hunter3"};
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
			{"BP_Dumpster5","object","IndustrialVehicle"}	
		};
		itemChance[] =	{
			0.05,	//BP_CardBoardBox3
			0.20,	//BP_Trashcan
			0.30,   //BP_Bag1
			0.10,	//BP_Skip1
			0.10,	//BP_Skip2
            0.10,   //BP_Skip3
            0.10,	//BP_Skip4
            0.10,	//BP_Skip5
            0.10,	//BP_Dumpster1
            0.10,	//BP_Dumpster2
            0.10,	//BP_Dumpster3
            0.10,	//BP_Dumpster4
            0.10	//BP_Dumpster5
		};		
	};	
	class IndustrialSmall: Default {
		zombieChance = 0.2;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_Rebel3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_Guardian3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_Survivalist3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_Refugee3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_Hunter3"};
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
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_Rebel3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_Guardian3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_Survivalist3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_Refugee3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_Hunter3"};
		lootChance = 0.05;
		lootPos[] = {};
		itemType[] =	{
            {"BP_AmmoBoxOld","object","MilitaryGeneralAcc"},
			{"BP_AmmoCrateOld","object","MilitaryGeneralAcc"},
		    {"BP_WeaponCrateOld","object","MilitaryGeneralWpn"},
			{"BP_WeaponCrate_WWII","object","MilitarySurplusWpn"},
			{"BP_Trashcan","object","Trash"},
			{"BP_Bag1","object","Generic"},
			{"BP_MedicalBox","object","Hospital"}
		};
		itemChance[] =	{
			0.10,	//BP_AmmoBoxOld
			0.20,   //BP_AmmoCrateOld
			0.35,   //BP_WeaponCrateOld
			0.02,   //BP_WeaponCrateOld
			0.10,   //TRASH
			0.10,   //GENERIC
			0.10    //BP_MedicalBox
		};		
	};
	class MilitarySpecial: Default {
		zombieChance = 1;
		minRoaming = 0;
		maxRoaming = 2;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_Rebel3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_Guardian3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_Survivalist3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_Refugee3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_Hunter3"};
		lootChance = 0.05; 
		lootPos[] = {};
		itemType[] =	{
            {"BP_AmmoBoxOld","object","MilitarySpecialAcc"},
			{"BP_AmmoCrateOld","object","MilitarySpecialAcc"},
		    {"BP_WeaponCrateOld","object","MilitarySpecialWpn"},
			{"BP_WeaponCrateOld","object","MilitaryGeneralWpn"},
			{"BP_WeaponCrate_WWII","object","MilitarySurplusWpn"},
			{"BP_Trashcan","object","Trash"},
			{"BP_Bag1","object","Generic"},
			{"BP_MedicalBox","object","Hospital"}
		};
		itemChance[] =	{
			0.10,	//BP_AmmoBoxOld
			0.10,   //BP_AmmoCrateOld
			0.20,   //BP_WeaponCrateOld
			0.20,   //BP_WeaponCrateOld
			0.02,   //BP_WeaponCrateOld
			0.10,   //TRASH
			0.10,   //GENERIC
			0.10    //BP_MedicalBox
		};		
	};	
	class MilitaryAirfield: Default {
		zombieChance = 1;
		minroaming = 5;
		maxRoaming = 7;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_Rebel3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_Guardian3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_Survivalist3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_Refugee3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_Hunter3"};
		lootChance = 0.05;
		lootPos[] = {};
		itemType[] =	{
            {"BP_AmmoBoxNew","object","MilitaryAirfieldSpc"},
			{"BP_AmmoCrateOld","object","MilitarySpecialAcc"},
            {"BP_AmmoCrateNew","object","MilitaryAirfieldAcc"},
			{"BP_WeaponCrateNew","object","MilitaryAirfieldWpn"},
		    {"BP_WeaponCrateOld","object","MilitarySpecialWpn"},
			{"BP_WeaponCrate_WWII","object","MilitarySurplusWpn"},
			{"BP_Trashcan","object","Trash"},
			{"BP_Bag1","object","Generic"},
			{"BP_CardboardBox_3","object","Generic"},
			{"BP_MedicalBox","object","Hospital"}
		};
		itemChance[] =	{
			0.03,	//BP_AmmoBoxNew
			0.10,	//BP_AmmoBoxOld
			0.10,	//BP_AmmoCrateNew
			0.20,   //BP_WeaponCrateNew
			0.20,   //BP_WeaponCrateOld
			0.02,   //BP_WeaponSurplus
			0.10,   //TRASH
			0.10,   //GENERIC
			0.10,   //CARDBOARD
			0.10	//BP_MedicalBox
		};		
	};
	class MilitaryTower: Default {
		zombieChance = 1;
		minRoaming = 0;
		maxRoaming = 1;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_Rebel3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_Guardian3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_Survivalist3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_Refugee3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_Hunter3"};
		lootChance = 0.15;
		lootPos[] = {};
		itemType[] =	{
            {"BP_AmmoCrateNew","object","MilitaryTower"},
			{"BP_Bag1","object","Generic"},
			{"BP_WeaponCrate_WWII","object","MilitarySurplusWpn"},
			{"BP_CardboardBox_1","object","Office"}
		};
		itemChance[] =	{
			0.10,	//BP_AmmoBoxNew
			0.10,   //GENERIC
			0.02,   //SURPLUS
			0.10	//BP_AmmoBoxOld
		};		
	};
	class MilitaryRanger: Default {
		zombieChance = 1;
		minRoaming = 5;
		maxRoaming = 7;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_Rebel3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_Guardian3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_Survivalist3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_Refugee3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_Hunter3"};
		lootChance = 0.05;
		lootPos[] = {};
		itemType[] =	{
			{"BP_AmmoBoxNew","object","MilitaryRangerAcc"},
            {"BP_AmmoCrateNew","object","MilitaryRangerAcc"},
			{"BP_WeaponCrateNew","object","MilitaryRangerWpn"},
			{"BP_WeaponCrate_WWII","object","MilitarySurplusWpn"},
			{"BP_CardboardBox_3","object","Generic"},
			{"BP_MedicalBox","object","Hospital"}
		};
		itemChance[] =	{
			0.12,	//BP_AmmoBoxNew
			0.12,	//BP_AmmoCrateNew
			0.30,   //BP_WeaponCrateNew
			0.04,   //BP_WeaponCrateNew
			0.15,   //GENERIC
			0.10    //BP_MedicalBox
		};		
	};

	class GhostHotelAcc: Default {
		zombieChance = 1;
		minRoaming = 5;
		maxRoaming = 7;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_Rebel3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_Guardian3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_Survivalist3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_Refugee3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_Hunter3"};
		lootChance = 0.05;
		lootPos[] = {};
		itemType[] =	{
			{"BP_AmmoBoxNew","object","HotelAcc"},
            {"BP_AmmoCrateNew","object","HotelAcc"},
			{"BP_WeaponCrateNew","object","HotelWpn"},
			{"BP_CardboardBox_3","object","Generic"},
			{"BP_MedicalBox","object","Hospital"}
		};
		itemChance[] =	{
			0.25,	//BP_AmmoBoxNew
			0.25,	//BP_AmmoCrateNew
			0.02,   //BP_WeaponCrateNew
			0.25,   //GENERIC
			0.03    //BP_MedicalBox
		};		
	};
	
	class GhostHotelWpn: Default {
		zombieChance = 1;
		minRoaming = 5;
		maxRoaming = 7;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_Rebel3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_Guardian3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_Survivalist3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_Refugee3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_Hunter3"};
		lootChance = 0.05;
		lootPos[] = {};
		itemType[] =	{
			{"BP_AmmoBoxNew","object","HotelAcc"},
            {"BP_AmmoCrateNew","object","HotelAcc"},
			{"BP_WeaponCrateNew","object","HotelWpn"},
			{"BP_WeaponCrate_WWII","object","MilitarySurplusWpn"},
			{"BP_CardboardBox_3","object","Generic"},
			{"BP_MedicalBox","object","Hospital"}
		};
		itemChance[] =	{
			0.10,	//BP_AmmoBoxNew
			0.10,	//BP_AmmoCrateNew
			0.20,   //BP_WeaponCrateNew
			0.03,   //BP_WeaponSurplus
			0.20,   //GENERIC
			0.10    //BP_MedicalBox
		};		
	};
	
//HELI CRASH TABLES		
	class MilitarCrash: Default {
		zombieChance = 1;
		minRoaming = 8;
		maxRoaming = 17;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_Rebel3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_Guardian3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_Survivalist3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_Refugee3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_Hunter3"};
		lootChance = 1;
		lootPos[] = {};
		itemType[] =	{		
			{"ItemSurgeryKit","toolbelt"},
			{"BP_5Rnd_300_Mag","magazine"},
			{"BP_MedicalboxHelicrash","object"},
			{"V_TacVest_brn_BP","vest"},
			{"BP_TreeGhillie","uniform"},
			{"BP_m9tac","weaponA"},
			{"BP_ScarH","weaponA"},
			{"BP_MX_SW","weapon"},
			{"BP_Carryall_blk","backpack"},
			{"BP_Zafir","weapon"},
			{"V_RebreatherB","vest"},
			{"BP_AWSM_338","weapon"},
			{"BP_MK20_GL","weapon"},
			{"BP_StoneGhillie","uniform"},
			{"BP_Wetsuit","uniform"},
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
			{"BP_M4_300MK","weaponA"}
			
		};
		itemChance[] =	{
			0.13,   //SURGERY KIT
			0.05,   //.300 WINMAG
			0.23,	//MED BOX
			0.15,	//V_TacVest_camo
			0.12,	//TREE GHILLIE
			0.12,	//M9TAC
			0.06,	//SCARH
			0.15,	//MX SW
			0.12,	//CARRYALL
			0.12,	//ZAFIR LMG
			0.14,	//REBREATHER
			0.02,	//AWSM
			0.13,	//MK20 GL
			0.11,	//STONE GHILLIE
			0.18,	//WETSUIT
			0.12,   //MXM SpecOps
			0.12,	//MXM
			0.14,	//MXC
			0.02,	//LMG SUPPRESSOR
			0.03,	//RANGEFINDERS
			0.15,   //HE SHELL
			0.01,   //50CAL M2 BOX
			0.07,    //MK48 CCO
			0.07,    //M14 RIS
			0.07,    //BP_SW44
			0.07    //BP_M4_300MK
		};
	};
	class HeliCrash: Default {
		zombieChance = 1;
		minRoaming = 8;
		maxRoaming = 17;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_Rebel3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_Guardian3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_Survivalist3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_Refugee3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_Hunter3"};
		lootChance = 0.85;
		lootPos[] = {};
		itemType[] =	{		
			{"BP_MX_SW","weapon"},
			{"BP_Minimi_762","weapon"},
			{"BP_Minimi_HG","weapon"},
			{"BP_MedicalboxHelicrash","object"},
			//{"AmmoBoxSmall_556","object"},
			//{"AmmoBoxSmall_762","object"},
			{"V_TacVest_camo_BP","vest"},
			{"BP_DirtGhillie","uniform"},
			{"BP_M24Spec","weaponA"},
			{"BP_MK20Spec","weaponA"},
			{"BP_M110","weapon"},
			//{"BP_HK417M_DES","weapon"},	
			//{"BP_EBR_MRCO","weapon"},
			//{"BP_p226Tac","weaponA"},
			{"BP_muzzle_snds_H_MG","toolbelt"},
			{"BP_Zafir","weapon"},
			{"BP_7Rnd_408Chey_Mag","magazine"},
			//{"BP_HK417_DES","weapon"},
			{"BP_MX_GL","weapon"},
			//{"H_HelmetIA","headgear"},
			{"V_Rangemaster_belt_BP","vest"},
			{"BP_muzzle_snds_B","toolbelt"},
			{"BP_muzzle_snds_M","toolbelt"},
			{"BP_M21K","weaponA"},
			{"V_RebreatherB","vest"},
			{"BP_M40A3G","weaponA"},
			{"Rangefinder","weaponNA"},
			//{"BP_SUD_RPK107","weapon"},
			{"BP_MXM_black","weaponA"},
			{"BP_FALM","weaponA"},
			{"BP_M4_300MK","weapon"},
			{"BP_300Sup","toolbelt"},
			{"BP_762x51_Box_Tracer","magazine"},
			{"BP_100Rnd_65x39","magazine"},
			{"BP_762Muzzle","toolbelt"},
			{"ItemSurgeryKit","toolbelt"},
			{"V_PlateCarrierIA2_dgtl_BP","vest"},
			{"BP_M14RIS","weapon"},
			{"BP_SW44","weaponA"},
			{"BP_M4_300MK","weaponA"},
			{"BP_Ghillie_Lush","uniform"}
		};
		itemChance[] =	{
			0.10,	//MX SW
			0.30,	//R3F 7.62
			0.50,	//R3F 5.56
			0.10,	//CAJA MEDICA
			//0.1,	//AMMO BOX 5.56
			//0.05,	//AMMO BOX 7.62
			0.70,	//TAC VEST
			0.01,	//DIRT GHILLIE
			0.01,	//M24A2 SPECOPS
			0.02,	//MK20 SPEC
			0.05,	//M110WL
			//0.50,	//HK417M 16
			//0.50,	//MK18 ADR MRCO
			//0.09,	//P226 TACTICAL
			0.20,	//MG SUPPRESSOR
			0.30,	//ZAFIR LMG
			0.02, 	//408 CHEETAH
			//0.50,	//HK417L DES
			0.20,	//MX GL
			//0.50,	//HELMET
			0.70,	//OLIVE BANDOLIER
			0.01,	//7.62 SUPPRESSOR
			0.07,	//5.56 SUPPRESSOR
			0.01,	//M21K
			0.10,	//REBREATHER
			0.02,	//M40A3G
			0.10,	//RANGEFINDERS
			//0.50,	//RPK107
			0.20,	//MXM SOS
			0.02,   //FALM
			0.01,   //M4MK
			0.01,   //300SUP
			0.10,	//150 ROUND 7.62 BOX
			0.20,	//200 ROUND 6.5 BOX
			0.01,	//762MUZZLE
			0.06,   //SURGERY KIT
			0.03,    //HARNESS BROWN	
			0.07,    //M14 RIS
			0.07,    //BP_SW44
			0.07,    //BP_M4_300MK
			0.03	//Marksmen Ghillie
		};
	};
	class HeliCrash_No50s: Default {
		zombieChance = 0.4;
		minRoaming = 8;
		maxRoaming = 17;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_Rebel3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_Guardian3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_Survivalist3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_Refugee3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_Hunter3"};
		lootChance = 0.75;
		lootPos[] = {};
		itemType[] =	{		
			{"BP_SA582","weapon"},
			{"BP_FNFAL","weapon"},
			//{"BP_EBR_MRCO","weapon"},
			//{"BP_Mk200","weapon"},
			{"BP_Minimi_762","weapon"},
			{"BP_Minimi_HG","weapon"},
			{"BP_R700","weaponA"},
			{"BP_SR25","weaponA"},
			{"BP_1Rnd_HE_shell","magazine"},
			//{"BP_m40a3G","weapon"},
			{"BP_MedicalboxHelicrash","object"},
			//{"AmmoBoxSmall_556","object"},
			//{"AmmoBoxSmall_762","object"},
			{"V_TacVest_khk_BP","vest"},
			{"BP_GrassGhillie","uniform"},
			//{"BP_p226Tac","weaponA"},
			{"V_RebreatherB","vest"},
			{"BP_Mk12mod1Spec","weaponA"},
			{"BP_M21K","weaponA"},
			{"BP_M24DesG","weaponA"},
			{"BP_muzzle_snds_H","toolbelt"},
			{"BP_20Rnd_65x47_Lapua","magazine"},
			{"BP_150Rnd_762x51_Box","magazine"},
			//{"BP_G18Tac","weaponA"},
			//{"BP_deagles","weapon"},
			{"ItemSurgeryKit","toolbelt"},
			{"BP_Ghillie_Lush","uniform"}
		};
		itemChance[] =	{
			0.12,   //SA58
			0.35,   //FNFAL
			//0.15,	//EBR MRCO
			//0.12,	//MK200
			0.08,	//MINIMI 762
			0.15,	//MINIMI HG
			0.09,   //R700
			0.03,	//SR25
			0.04,	//HE SHELL
			//0.01,   //M40A3 GHILLIE
			0.10,	//MED BOX
			//0.1,	//AmmoBoxSmall_556
			//0.1,	//AmmoBoxSmall_762
			0.16,	//TACTICAL VEST
			0.01,	//GRASS GHILLIE
			//0.02,	//P226 TACTICAL
			0.03,	//REBREATHER
			0.07,	//MK12MOD1
			0.13,	//M21K
			0.09,   //M24
			0.03,	//5.56 SUPPRESSOR
			0.05,	//LAPUA 6.5x47MM MAG
			0.02,   //150RND 762.51MM BOX
			//0.03,   //G18 TACTICAL
			//0.01,   //DEAGLE GOLD
			0.15,   //SURGERY KIT
			0.03	//Marksmen Ghillie
			
		};
	};
	class Castle: Default {
		zombieChance = 0.4;
		minRoaming = 1;
		maxRoaming = 4;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.75;
		lootPos[] = {};
		itemType[] =	{		
			{"BP_Medicalbox","object"},
			{"AmmoBoxSmall_762","object"},
			{"V_TacVest_camo","vest"},
			{"Rangefinder","weaponNA"},
			//{"BP_G18","weapon"},
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
			//0.01,	//G18
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
		minRoaming = 5;
		maxRoaming = 7;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_Rebel3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_Guardian3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_Survivalist3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_Refugee3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_Hunter3"};
		lootChance = 0.50;
		lootPos[] = {};
		itemType[] =	{		
			{"BP_ApexMilBox1","object","ApexMilBox1"},
			{"BP_ApexMilBox2","object","ApexMilBox2"},
			{"BP_WeaponCrate_WWII","object","MilitarySurplusWpn"},
			{"BP_CardboardBox_3","object","Generic"},
			{"BP_MedicalBox","object","Hospital"}
		};
		itemChance[] =	{
			0.01,	//ApexMilBox1
			0.01,	//ApexMilBox2
			0.10,	//WWII
			0.10,   //Generic
			0.10    //Hospital
		};
	};
	
	class ApexMilBox2: Default {
		zombieChance = 1;
		minRoaming = 20;
		maxRoaming = 20;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_Rebel3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_Guardian3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_Survivalist3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_Refugee3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_Hunter3"};
		lootChance = 0.50;
		lootPos[] = {};
		itemType[] =	{		
			{"BP_ApexMilBox1","object","ApexMilBox1"},
			{"BP_ApexMilBox2","object","ApexMilBox2"},
			{"BP_AmmoCrateNew","object","HotelAcc"},
			{"BP_WeaponCrateNew","object","HotelWpn"},
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
			0.15,    //Hospital
			0.15   //Generic
		};
	};
	

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
			//{"U_B_CombatUniform_mcam_worn_BP","uniform"},
			//{"U_Competitor_BP","uniform"},
			//{"U_I_CombatUniform_BP","uniform"},
			//{"U_O_OfficerUniform_ocamo_BP","uniform"},
			{"BP_Wetsuit","uniform"},
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
			//0.01,	//TERRORIST CLOTHING
			//0.02,	//URBAN SOLDIER CLOTHING
			//0.02,	//URBAN SPEC-OPS CLOTHING
			//0.02,	//SPEC-OPS CLOTHING
			0.02,	//RUSSIAN CLOTHING
			0.02,	//FRENCH CLOTHING
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
	
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////////////////////////////////////---A2 BUILDING LOOT---///////////////////////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//A2 RESIDENTIAL	
	class A2Residential: Default {
		zombieChance = 0.2;
		minRoaming = 0;
		maxRoaming = 2;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_Rebel3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_Guardian3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_Survivalist3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_Refugee3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_Hunter3"};
		lootChance = 0.05;
		lootPos[] = {};
		itemType[] =	{
			{"BP_CardboardBox_1","object","Residential"},
            {"BP_CardboardBox_2","object","Residential"},
            {"BP_CardboardBox_3","object","Residential"},
            {"BP_Trashcan","object","Trash"},
			{"BP_Bag1","object","Generic"},
			{"BP_Bag2","object","Generic"},
			{"BP_LuggageBags","object","Residential"},
			{"BP_Packs","object","Residential"}					
		};
		itemChance[] =	{
			0.20,	//BP_CardBoardBox1
			0.07,	//BP_CardBoardBox2
			0.10,	//BP_CardBoardBox3
			0.20,	//BP_Trashcan
			0.10,   //BP_Bag1
			0.10,   //BP_Bag2
			0.10,    //BP_LuggageBags
			0.15    //BP_Packs
		};		
	};
//A2 SUPERMARKET	
	class A2Supermarket: Default {
		lootChance = 0.05;
		minRoaming = 0;
		maxRoaming = 1;
		zombieChance = 0.4;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_Rebel3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_Guardian3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_Survivalist3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_Refugee3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_Hunter3"};
		itemType[] = {
			{"BP_CardboardBox_1","object","Supermarket"},
            {"BP_CardboardBox_2","object","Supermarket"},
            {"BP_CardboardBox_3","object","Supermarket"},
            {"BP_Trashcan","object","Trash"},
			{"BP_Bag1","object","Generic"},
			{"BP_Bag2","object","Generic"},
			{"BP_Packs","object","Residential"}
		};
		itemChance[] =	{
			0.10,	//BP_CardBoardBox1
			0.35,	//BP_CardBoardBox2
			0.05,	//BP_CardBoardBox3
			0.20,	//BP_Trashcan
			0.10,   //BP_Bag1
			0.10,    //BP_Bag2
			0.10    //BP_Packs
		};		
	};
//A2 MEDICAL	
	class A2Medical: Default {
		zombieChance = 0.4;
		minRoaming = 0;
		maxRoaming = 2;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_Rebel3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_Guardian3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_Survivalist3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_Refugee3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_Hunter3"};
		lootChance = 0.20;
		lootPos[] = {};
		itemType[] =	{
			{"BP_MedicalBox","object","Hospital"},
			{"BP_Trashcan","object","Trash"},
			{"BP_Bag1","object","Generic"},
			{"BP_Bag2","object","Generic"}	
		};
		itemChance[] =	{
			0.50,	//BP_MedicalBox
            0.20,	//BP_Trashcan
			0.10,   //BP_Bag1
			0.10    //BP_Bag2			
		};		
	};
//A2 INDUSTRIAL	
	class A2Industrial: Default {
		zombieChance = 0.2;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_Rebel3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_Guardian3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_Survivalist3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_Refugee3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_Hunter3"};
		minRoaming = 0;
		maxRoaming = 1;
		lootChance = 0.50;
		lootPos[] = {};
		itemType[] =	{
			{"BP_Skip1","object","Industrial"},
			{"BP_Skip2","object","IndustrialVehicle"},
			{"BP_Skip3","object","Industrial"},
			{"BP_Skip4","object","IndustrialVehicle"},
			{"BP_Skip5","object","Industrial"},
			{"BP_Dumpster1","object","IndustrialVehicle"},
			{"BP_Dumpster2","object","Industrial"},
			{"BP_Dumpster3","object","IndustrialVehicle"},
			{"BP_Dumpster4","object","Industrial"},
			{"BP_Dumpster5","object","IndustrialVehicle"}	
		};
		itemChance[] =	{
			0.10,	//BP_Skip1
			0.10,	//BP_Skip2
            0.10,   //BP_Skip3
            0.10,	//BP_Skip4
            0.10,	//BP_Skip5
            0.10,	//BP_Dumpster1
            0.10,	//BP_Dumpster2
            0.10,	//BP_Dumpster3
            0.10,	//BP_Dumpster4
            0.10	//BP_Dumpster5
		};		
	};
//A2 INDUSTRIAL SMALL	
	class A2IndustrialSmall: Default {
		zombieChance = 0.2;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_Rebel3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_Guardian3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_Survivalist3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_Refugee3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_Hunter3"};
		minRoaming = 0;
		maxRoaming = 1;
		lootChance = 0.50;
		lootPos[] = {};
		itemType[] =	{
			{"BP_CardboardBox_3","object","Generic"},
			{"BP_CardboardBox_3","object","Industrial"},
            {"BP_Trashcan","object","Trash"}	
		};
		itemChance[] =	{
			0.10,	//BP_CardBoardBox3
			0.10,	//BP_CardBoardBox3
			0.20	//BP_Trashcan
		};		
	};
//A2 FARM	
	class A2Farm: Default {
		zombieChance = 0.2;
		minRoaming = 0;
		maxRoaming = 1;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_Rebel3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_Guardian3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_Survivalist3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_Refugee3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_Hunter3"};
		lootChance = 0.10;
		lootPos[] = {};
		itemType[] =	{
			{"BP_Bag1","object","Generic"},			
			{"BP_Bag2","object","Generic"},			
			{"BP_CardboardBox_4","object","Farm"},
			{"BP_CardboardBox_4","object","Industrial"}					
		};
		itemChance[] =	{
			0.15,   //BP_Bag1	
			0.15,   //BP_Bag2		
			0.10,	//BP_CardBoardBox4
			0.10	//BP_CardBoardBox4					
		};		
	};
//A2 MILITARY CIVILIAN	
	class A2MilitaryCivilian: Default {
		zombieChance = 0.2;
		minRoaming = 0;
		maxRoaming = 2;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_Rebel3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_Guardian3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_Survivalist3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_Refugee3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_Hunter3"};
		lootChance = 0.05;
		lootPos[] = {};
		itemType[] =	{
            {"BP_AmmoPallet1","object","Supermarket"},
            {"BP_AmmoPallet1","object","Residential"},
            {"BP_AmmoPallet2","object","Generic"},
            {"BP_AmmoPallet2","object","Trash"},			
			{"BP_AmmoPallet3","object","CivilianWpn"},
			{"BP_AmmoPallet3","object","CivilianAcc"}		
		};
		itemChance[] =	{
			0.10,	//BP_AmmoPallet1
			0.10,	//BP_AmmoPallet1
			0.20,	//BP_AmmoPallet2
			0.20,   //BP_AmmoPallet2
			0.10,   //BP_AmmoPallet3		
			0.10    //BP_AmmoPallet3
		};		
	};	
	
//A2 MILITARY CASTLE	
	class A2MilitaryCastle: Default {
		zombieChance = 0.5;
		minRoaming = 2;
		maxRoaming = 5;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_Rebel3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_Guardian3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_Survivalist3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_Refugee3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_Hunter3"};
		lootChance = 0.25;
		lootPos[] = {};
		itemType[] =	{
			{"BP_Bag1","object","Generic"},
			{"BP_Bag2","object","Generic"},
			{"BP_WeaponCrateOld","object","CastleWpn"},
			{"BP_AmmoBoxOld","object","CastleAcc"}
		};
		itemChance[] =	{
			0.10,   //BP_Bag1
			0.10,   //BP_Bag2
			0.10,   //WINDMILL WPN
			0.25    //WINDMILL ACC 
		};		
	};	
//A2 MILITARY DEERSTAND	
	class A2MilitaryDeerstand: Default {
		zombieChance = 0.5;
		minRoaming = 2;
		maxRoaming = 5;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_Rebel3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_Guardian3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_Survivalist3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_Refugee3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_Hunter3"};
		lootChance = 0.25;
		lootPos[] = {};
		itemType[] =	{
			{"BP_Bag1","object","Generic"},
			{"BP_Bag2","object","Generic"},
			{"BP_WeaponCrateOld","object","DeerstandWpn"},
			{"BP_AmmoBoxOld","object","DeerstandAcc"}
		};
		itemChance[] =	{
			0.10,   //BP_Bag1
			0.10,   //BP_Bag2
			0.10,   //WINDMILL WPN
			0.25    //WINDMILL ACC 
		};		
	};

//A2 MILITARY CAMP
	class A2MilitaryCamp: Default {
		zombieChance = 0.2;
		minRoaming = 0;
		maxRoaming = 5;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_Rebel3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_Guardian3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_Survivalist3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_Refugee3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_Hunter3"};
		lootChance = 0.05;
		lootPos[] = {};
		itemType[] =	{
			{"BP_AmmoBoxNew","object","CampAcc"},
            {"BP_AmmoCrateNew","object","CampAcc"},
			{"BP_WeaponCrateNew","object","CampWpn"},
			{"BP_CardboardBox_4","object","Generic"},
			{"BP_MedicalBox","object","Hospital"}
		};
		itemChance[] =	{
			0.15,	//BP_AmmoBoxNew
			0.15,	//BP_AmmoCrateNew
			0.30,   //BP_WeaponCrateNew
			0.20,   //BP_CardboardBox_4
			0.10    //BP_MedicalBox
		};		
	};	
	class A2MilitaryVanWreck: Default {
		zombieChance = 0.5;
		minRoaming = 1;
		maxRoaming = 5;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_Rebel3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_Guardian3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_Survivalist3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_Refugee3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_Hunter3"};
		lootChance = 0.20;
		lootPos[] = {};
		itemType[] =	{
            {"BP_AmmoPallet1","object","Supermarket"},
            {"BP_AmmoPallet1","object","Residential"},
            {"BP_AmmoPallet2","object","Generic"},
            {"BP_AmmoPallet2","object","Trash"},			
			{"BP_AmmoPallet3","object","MilitaryGeneralWpn"},
			{"BP_AmmoPallet3","object","Residential2"}		
		};
		itemChance[] =	{
			0.10,	//BP_AmmoPallet1
			0.10,	//BP_AmmoPallet1
			0.20,	//BP_AmmoPallet2
			0.20,   //BP_AmmoPallet2
			0.05,   //BP_AmmoPallet3		
			0.05    //BP_AmmoPallet3
		};		
	};		
	class A2MilitaryBarracks: Default {
		zombieChance = 0.5;
		minRoaming = 10;
		maxRoaming = 20;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_Rebel3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_Guardian3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_Survivalist3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_Refugee3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_Hunter3"};
		lootChance = 0.20;
		lootPos[] = {};
		itemType[] =	{
            {"BP_AmmoBoxOld","object","MilitarySpecialAcc"},
			{"BP_AmmoCrateOld","object","MilitarySpecialAcc"},
		    {"BP_WeaponCrateOld","object","MilitarySpecialWpn"},
			{"BP_WeaponCrateOld","object","MilitaryGeneralWpn"},
			{"BP_Trashcan","object","Trash"},
			{"BP_Bag1","object","Generic"},
			{"BP_MedicalBox","object","Hospital"}
		};
		itemChance[] =	{
			0.10,	//BP_AmmoBoxOld
			0.10,   //BP_AmmoCrateOld
			0.20,   //BP_WeaponCrateOld
			0.20,   //BP_WeaponCrateOld
			0.10,   //BP_Trashcan
			0.10,   //BP_Bag1
			0.01    //BP_MedicalBox
		};		
	};
	class A2MilitaryATC: Default {
		zombieChance = 0.5;
		minRoaming = 6;
		maxRoaming = 12;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_Rebel3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_Guardian3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_Survivalist3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_Refugee3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_Hunter3"};
		lootChance = 0.20;
		lootPos[] = {};
		itemType[] =	{
            {"BP_AmmoBoxNew","object","MilitaryAirfieldSpc"},
			{"BP_AmmoCrateOld","object","MilitarySpecialAcc"},
            {"BP_AmmoCrateNew","object","MilitaryAirfieldAcc"},
			{"BP_WeaponCrateNew","object","MilitaryAirfieldWpn"},
		    {"BP_WeaponCrateOld","object","MilitarySpecialWpn"},
			{"BP_Trashcan","object","Trash"},
			{"BP_Bag1","object","Generic"},
			{"BP_CardboardBox_3","object","Generic"},
			{"BP_MedicalBox","object","Hospital"}
		};
		itemChance[] =	{
			0.05,	//BP_AmmoBoxNew
			0.10,	//BP_AmmoBoxOld
			0.10,	//BP_AmmoCrateNew
			0.20,   //BP_WeaponCrateNew
			0.20,   //BP_WeaponCrateOld
			0.10,   //BP_Trashcan
			0.10,   //BP_Bag1
			0.10,   //BP_CardboardBox_3
			0.02    //BP_MedicalBox
		};		
	};	
	class A2MilitaryRadioTower: Default {
		zombieChance = 0.5;
		minRoaming = 5;
		maxRoaming = 10;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_Rebel3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_Guardian3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_Survivalist3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_Refugee3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_Hunter3"};
		lootChance = 0.20;
		lootPos[] = {};
		itemType[] =	{
            {"BP_AmmoCrateNew","object","MilitaryTower"},
			{"BP_Bag1","object","Generic"},
			{"BP_CardboardBox_1","object","Office"}
		};
		itemChance[] =	{
			0.10,	//BP_AmmoBoxNew
			0.10,   //BP_Bag1
			0.10	//BP_AmmoBoxOld
		};		
	};
	class A2MilitaryPlaneWreck: Default {
		zombieChance = 0.5;
		minRoaming = 6;
		maxRoaming = 12;
		zombieClass[] = {"BPZombie_Rebel1","BPZombie_Rebel2","BPZombie_Rebel3","BPZombie_Guardian1","BPZombie_Guardian2","BPZombie_Guardian3","BPZombie_Survivalist1","BPZombie_Survivalist2","BPZombie_Survivalist3","BPZombie_Refugee1","BPZombie_Refugee2","BPZombie_Refugee3","BPZombie_Hunter1","BPZombie_Hunter2","BPZombie_Hunter3"};
		lootChance = 0.20;
		lootPos[] = {};
		itemType[] =	{
			{"BP_AirDropCrate","object","MilitaryRangerAcc"},
			{"BP_HeavyWeaponCrate","object","MilitaryRangerWpn"}

		};
		itemChance[] =	{
			0.15,	//BP_AirDropCrate
			0.07	//BP_HeavyWeaponCrate
		};		
	};	
#include "CfgBuildingPos.hpp"
};
