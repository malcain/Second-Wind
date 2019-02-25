class CfgObjectLoot {
	class Default {
		lootPos[] = {};
		itemType[] = {};
		itemChance[] = {};
		hangPos[] = {};
		vehPos[] = {};
	};
	class MilitaryGeneral : Default {};
	class MilitarySpecial : Default {};
	class MilitaryAirfield : Default {};
	class MilitaryRanger : Default {};
	class BystricaMilitaryCastle : Default {};
	class BystricaMilitaryDeerstand : Default {};
	class BystricaMilitaryCivilian : Default {};
	class BystricaMilitaryCamp : Default {};
	
	class Brick: Default {
		lootChance = 1;
		lootPos[] = {};
		itemType[] =	{
			{"ItemBrick1","magazine"},
			{"ItemBrick2","magazine"},
			{"ItemKnife","magazine"},
			{"ItemSoda1","magazine"},
			{"ItemSoda2","magazine"},
			{"ItemSoda3","magazine"},
			{"ItemSoda4","magazine"},
			{"ItemSoda5","magazine"},
			{"ItemCereal1","magazine"},
			{"ItemCereal2","magazine"},
			{"ItemCereal3","magazine"},
			{"ItemCereal4","magazine"},
			{"ItemCereal5","magazine"},
			{"ItemCereal6","magazine"},
			{"ItemCan1","magazine"},
			{"ItemCan2","magazine"},
			{"ItemCan3","magazine"},
			{"ItemCan4","magazine"},
			{"ItemCan5","magazine"},
			{"MeleeKatana","weapon"},
			{"MeleePickaxe","weapon"},
			{"Meleehatchet","weapon"},
			{"MeleeShovel","weapon"},
			{"MeleeCrowbar","weapon"},
			{"MeleeClub","weapon"},			
			{"ItemBandage","magazine"},
			{"ItemPainkiller","magazine"},
			{"ItemMorphine","magazine"},
			{"ItemFieldDressing","magazine"},
			{"ItemAntibiotic","magazine"},
			{"ItemSurgeryKit","toolbelt"},
			{"Waterbot","magazine"},
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
			{"HandGrenade","magazine"},
			{"BP_AlarmClock_Black","magazine"}

		};
		itemChance[] =	{
			0.10,	//Brick 1
			0.10,	//Brick 2
			0.10,	//KNIFE
			0.01,	//Water
			0.01,	//Water
			0.01,	//Water
			0.01,	//Water
			0.01,	//Water
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.10,	//KATANA
			0.10,	//PICKAXE
			0.10,	//HATCHET
			0.10,	//SHOVEL
			0.10,	//CROWBAR
			0.10,	//BAT
			0.05,	//BANDAGE
			0.05,	//PAINKILLER
			0.01,	//MORPHINE
			0.01,	//FIELDDRESSING
			0.05,	//ANTIBIOTIC
			0.01,	//SURGERYKIT
			0.15,	//WATERBOTTLE
			0.10,	//TENNISBALL			
			0.05,	//DUCTTAPE
			0.05,	//WATERTAPE
			0.03,	//BACKPACK
			0.03,	//BACKPACK
			0.03,	//BACKPACK
			0.10,	//TRASH
			0.10,	//TRASH
			0.10,	//TRASH
			0.10,	//TRASH
			0.10,	//TRASH
			0.10,	//TRASH
			0.10,	//TRASH
			0.10,	//TRASH
			0.01,	//NADE
			0.05	//AlarmClock
		};		
	};
	
	class ApexMilBox1: Default {
		lootChance = 0.50;
		lootPos[] = {};
		itemType[] =	{
			{"BP_arifle_AKS_F","weapon"},  //AKS-74U 
			{"BP_arifle_AKM_F","weapon"},  //AKM
			{"BP_arifle_AKM_FL_F","weapon"},  //AKM Flashlight ( Not an attachment, custom model ) 
			{"BP_arifle_AK12_F","weapon"},  //AK-12
			{"BP_arifle_AK12_GL_F","weapon"},  //AK-12 UGL 
			{"BP_LMG_03_F","weapon"},  //LIM-85 
			{"BP_hgun_Pistol_01_F","weapon"},  //PM 9mm Pistol 
			{"BP_arifle_SPAR_01_blk_F","weapon"},  //SPAR-16 Black
			{"BP_arifle_SPAR_01_khk_F","weapon"},  //SPAR-16 Khaki
			{"BP_arifle_SPAR_01_snd_F","weapon"},  //SPAR-16 Sand 
			{"BP_arifle_SPAR_01_GL_blk_F","weapon"},  //SPAR-16 UGL Black
			{"BP_arifle_SPAR_01_GL_khk_F","weapon"},  //SPAR-16 UGL Khaki
			{"BP_arifle_SPAR_01_GL_snd_F","weapon"},  //SPAR-16 UGL Sand 
			{"BP_arifle_SPAR_02_blk_F","weapon"},  //SPAR-16S Black
			{"BP_arifle_SPAR_02_khk_F","weapon"},  //SPAR-16S Khaki
			{"BP_arifle_SPAR_02_snd_F","weapon"},  //SPAR-16S Sand 
			{"BP_arifle_SPAR_03_blk_F","weapon"},  //SPAR-17 Black
			{"BP_arifle_SPAR_03_blk_F","weapon"},  //SPAR-17 Black
			{"BP_arifle_SPAR_03_snd_F","weapon"},  //SPAR-17 Sand 
			{"BP_arifle_CTAR_blk_F","weapon"},  //CAR-95
			{"BP_arifle_CTAR_GL_blk_F","weapon"},  //CAR-95 GL
			{"BP_arifle_CTARS_blk_F","weapon"},  //CAR-95-1
			{"BP_arifle_ARX_blk_F","weapon"},  //Type 115 Black
			{"BP_srifle_DMR_07_blk_F","weapon"},  //CMR-76 Black
			{"BP_srifle_DMR_07_ghex_F","weapon"},  //CMR-76 Green Hex
			{"BP_srifle_DMR_07_hex_F","weapon"},  //CMR-76 Hex 
			{"BP_SMG_05_F","weapon"},  //Protector
			{"BP_JungleGhillie_Uniform","uniform"},  //Full Ghillie (Jungle)
			{"BP_Paramilitary_Jacket_Uniform","uniform"},  //Paramilitary Garb (Jacket)
			{"BP_Paramilitary_Shorts_Uniform","uniform"},  //Paramilitary Garb (Shorts)
			{"BP_Paramilitary_Tee_Uniform","uniform"}, //Paramilitary Garb (Tee)
			{"V_PlateCarrierGL_tna_BP","vest"},  //Carrier GL Rig (Tropic)
			{"V_TacVest_gen_BP","vest"},   //Gendarmerie Vest
			{"V_HarnessO_gry_BP","vest"},   //LBV Harness (Grey)
			{"V_HarnessO_ghex_BP","vest"},   //LBV Harness (Green Hex)
			{"V_BandollierB_ghex_BP","vest"},   //Slash Bandolier (Green Hex)
			{"V_TacChestrig_grn_BP","vest"},    //Tactical Chest Rig (Green)
			{"V_TacChestrig_cbr_BP","vest"},  //Tactical Chest Rig (Coyote)
			{"optic_Aco","toolbelt"},
			{"optic_Hamr","toolbelt"},
			{"BP_Bergen_blk","backpack"},
			{"BP_Carryall_oucamo","backpack"},
			{"BP_Carryall_blk","backpack"},		
			{"BP_Bergen_mcamo","backpack"},
			{"BP_Bergen_sgg","backpack"},
			{"BP_Bergen_rgr","backpack"},	
			{"BP_optic_ACOG","toolbelt"},
			{"BP_CPad","toolbelt"},
			{"BP_AFG","toolbelt"},
			{"BP_M3A2","toolbelt"},
			{"BP_5Rnd_762m80a1_Mag","magazine"},
			{"HandGrenade","magazine"},
			{"BP_1Rnd_HE_shell","magazine"},
			{"BP_UGL_FlareGreen","magazine"},
			{"BP_100Rnd_127x99_box","magazine"},
			{"BP_30Rnd_545x39_Mag_F","magazine"},
			{"BP_30Rnd_545x39_Mag_Green_F","magazine"},
			{"BP_30Rnd_545x39_Mag_Tracer_F","magazine"},
			{"BP_30Rnd_545x39_Mag_Tracer_Green_F","magazine"}, 
			{"BP_30Rnd_762x39_Mag_F","magazine"},
			{"BP_30Rnd_762x39_Mag_Green_F","magazine"},
			{"BP_30Rnd_762x39_Mag_Tracer_F","magazine"},
			{"BP_30Rnd_762x39_Mag_Tracer_Green_F","magazine"}, 
			{"BP_200Rnd_556x45_LIM_Box_F","magazine"},
			{"BP_200Rnd_556x45_LIM_Box_Red_F","magazine"},
			{"BP_200Rnd_556x45_LIM_Box_Tracer_F","magazine"},
			{"BP_200Rnd_556x45_LIM_Box_Tracer_Red_F","magazine"},
			{"BP_556x45_Stanag","magazine"},
			{"BP_556x45_Stanag_Tracer","magazine"},
			{"BP_150Rnd_556x45_Drum_Mag_F","magazine"},
			{"BP_150Rnd_556x45_Drum_Mag_Tracer_F","magazine"},
			{"BP_20Rnd_762x51_BPMag","magazine"},
			{"BP_30Rnd_580x42_Mag_F","magazine"},
			{"BP_30Rnd_580x42_Mag_Tracer_F","magazine"},
			{"BP_100Rnd_580x42_Mag_F","magazine"},
			{"BP_100Rnd_580x42_Mag_Tracer_F","magazine"},
			{"BP_30Rnd_65x39","magazine"},
			{"BP_10Rnd_50BW_Mag_F","magazine"},
			{"BP_20Rnd_650x39_Cased_Mag_F","magazine"}
		};
		itemChance[] =	{
			0.08,	//AKS-74U
			0.08,	//AKM
			0.05,	//AKM Flashlight
			0.04,	//AK-12
			0.04,	//AK-12 UGL
			0.04,	//LIM-85
			0.07,	//PM 9mm Pistol
			0.04,   //SPAR-16 Black
			0.03,   //SPAR-16 Khaki
			0.03,   //SPAR-16 Sand
			0.02,	//SPAR-16 UGL Black
			0.02,	//SPAR-16 UGL Khaki
			0.02,	//SPAR-16 UGL Sand
			0.02,	//SPAR-16S Black
			0.02,	//SPAR-16S Khaki
			0.02,	//SPAR-16S Sand
			0.01,	//SPAR-17 Black
			0.01,   //SPAR-17 Black
			0.01,   //SPAR-17 Sand
			0.01,   //CAR-95
			0.01,	//CAR-95 GL
			0.01,	//CAR-95-1
			0.01,	//Type 115 Black
			0.01,	//CMR-76 Black
			0.01,	//CMR-76 Green Hex
			0.01,   //CMR-76 Hex
			0.02,   //Protector
			0.01,	//Full Ghillie (Jungle)
			0.01,	//Paramilitary Garb (Jacket)
			0.02,	//Paramilitary Garb (Shorts)
			0.02,	//Paramilitary Garb (Tee)
			0.01,	//Carrier GL Rig (Tropic)
			0.01,	//Gendarmerie Vest
			0.02,	//LBV Harness (Grey)
			0.02,   //LBV Harness (Green Hex)
			0.05,   //Slash Bandolier (Green Hex)
			0.01,   //Tactical Chest Rig (Green)
			0.01,	//Tactical Chest Rig (Coyote)
			0.05,	//OPTIC ACO
			0.03,	//HAMR OPTIC
            0.02,   //BERGEN BLACK
			0.02, 	//CARRYALL URBAN
            0.02,   //CARRYALL BLACK	
			0.02,   //BERGEN 
			0.02,   //BERGEN 
			0.02,   //BERGEN
			0.02,	//ACOG
			0.02,	//CHEEKPIECE
			0.03,	//AFG
			0.02,	//M3A2
			0.02,	//5RND 762M80A1
			0.02,	//HAND GRENADE
			0.02,	//HE GRENADE M203
			0.05,	//Flare green
			0.01,	//100Rnd_127x99_box
			0.07,	//BP_30Rnd_545x39_Mag_F
			0.07,	//BP_30Rnd_545x39_Mag_Green_F
			0.05,	//BP_30Rnd_545x39_Mag_Tracer_F
			0.05,	//BP_30Rnd_545x39_Mag_Tracer_Green_F
			0.04,	//BP_30Rnd_762x39_Mag_F
			0.04,	//BP_30Rnd_762x39_Mag_Green_F
			0.04,	//BP_30Rnd_762x39_Mag_Tracer_F
			0.04,   //BP_30Rnd_762x39_Mag_Tracer_Green_F
			0.03,   //BP_200Rnd_556x45_LIM_Box_F
			0.03,   //BP_200Rnd_556x45_LIM_Box_Red_F
			0.03,	//BP_200Rnd_556x45_LIM_Box_Tracer_F			
			0.03,	//BP_200Rnd_556x45_LIM_Box_Tracer_Red_F			
			0.07,	//BP_556x45_Stanag
			0.07,	//BP_556x45_Stanag_Tracer
			0.05,	//BP_150Rnd_556x45_Drum_Mag_F
			0.02,	//BP_150Rnd_556x45_Drum_Mag_Tracer_F
			0.04,	//BP_20Rnd_762x51_BPMag
			0.08,	//BP_30Rnd_580x42_Mag_F
			0.08,   //BP_30Rnd_580x42_Mag_Tracer_F
			0.06,   //BP_100Rnd_580x42_Mag_F
			0.06,   //BP_100Rnd_580x42_Mag_Tracer_F
			0.10,	//BP_30Rnd_65x39			
			0.01,	//10Rnd_50BW_Mag_F
			0.02	//BP_20Rnd_650x39_Cased_Mag_F
		};
	};
	
	class ApexMilBox2: Default {
		lootChance = 0.50;
		lootPos[] = {};
		itemType[] =	{
			{"BP_JungleGhillie_Uniform","uniform"},  //Full Ghillie (Jungle)
			{"BP_Paramilitary_Jacket_Uniform","uniform"},  //Paramilitary Garb (Jacket)
			{"BP_Paramilitary_Shorts_Uniform","uniform"},  //Paramilitary Garb (Shorts)
			{"BP_Paramilitary_Tee_Uniform","uniform"}, //Paramilitary Garb (Tee)
			{"V_PlateCarrierGL_tna_BP","vest"},  //Carrier GL Rig (Tropic)
			{"V_TacVest_gen_BP","vest"},   //Gendarmerie Vest
			{"V_HarnessO_gry_BP","vest"},   //LBV Harness (Grey)
			{"V_HarnessO_ghex_BP","vest"},   //LBV Harness (Green Hex)
			{"V_BandollierB_ghex_BP","vest"},   //Slash Bandolier (Green Hex)
			{"V_TacChestrig_grn_BP","vest"},    //Tactical Chest Rig (Green)
			{"V_TacChestrig_cbr_BP","vest"},  //Tactical Chest Rig (Coyote)
			{"optic_Aco","toolbelt"},
			{"optic_Hamr","toolbelt"},
			{"BP_Bergen_blk","backpack"},
			{"BP_Carryall_oucamo","backpack"},
			{"BP_Carryall_blk","backpack"},		
			{"BP_Bergen_mcamo","backpack"},
			{"BP_Bergen_sgg","backpack"},
			{"BP_Bergen_rgr","backpack"},	
			{"BP_optic_ACOG","toolbelt"},
			{"BP_CPad","toolbelt"},
			{"BP_AFG","toolbelt"},
			{"BP_M3A2","toolbelt"},
			{"BP_5Rnd_762m80a1_Mag","magazine"},
			{"HandGrenade","magazine"},
			{"BP_1Rnd_HE_shell","magazine"},
			{"BP_UGL_FlareGreen","magazine"},
			{"BP_100Rnd_127x99_box","magazine"}
		};
		itemChance[] =	{
			0.01,	//Full Ghillie (Jungle)
			0.02,	//Paramilitary Garb (Jacket)
			0.02,	//Paramilitary Garb (Shorts)
			0.02,	//Paramilitary Garb (Tee)
			0.01,	//Carrier GL Rig (Tropic)
			0.01,	//Gendarmerie Vest
			0.02,	//LBV Harness (Grey)
			0.02,   //LBV Harness (Green Hex)
			0.05,   //Slash Bandolier (Green Hex)
			0.01,   //Tactical Chest Rig (Green)
			0.01,	//Tactical Chest Rig (Coyote)
			0.05,	//OPTIC ACO
			0.03,	//HAMR OPTIC
            0.02,   //BERGEN BLACK
			0.02, 	//CARRYALL URBAN
            0.02,   //CARRYALL BLACK	
			0.02,   //BERGEN 
			0.02,   //BERGEN 
			0.02,   //BERGEN
			0.02,	//ACOG
			0.02,	//CHEEKPIECE
			0.03,	//AFG
			0.02,	//M3A2
			0.02,	//5RND 762M80A1
			0.02,	//HAND GRENADE
			0.02,	//HE GRENADE M203
			0.05,	//Flare green
			0.01	//100Rnd_127x99_box
		};
	};
	
	
	class AmmoPallet4: Default 
	{
		zombieChance = 0;
		minRoaming = 0;
		maxRoaming = 0;
		zombieClass[] = {};
		lootChance = 1;
		lootPos[] = {};
		itemType[] =
		{	
			{"BP_AWSM","weapon"},
			{"BP_Guarilla_Leader","uniform"},
			{"BP_20Rnd_65x47_Lapua","magazine"},
			{"BP_30Rnd_762x51_M80A1","magazine"},
			{"BP_20Rnd_762x51_Mk316Mod0","magazine"},
			{"BP_10Rnd_762mk316_Mag","magazine"},
			{"BP_5Rnd_762m80a1_Mag","magazine"},
			{"BP_SOS","toolbelt"},
			{"optic_Hamr","toolbelt"},
			{"BP_VX3","toolbelt"},
			{"BP_VX2","toolbelt"},
			{"BP_NXS","toolbelt"},
			{"BP_L14X","toolbelt"},
			{"BP_M3AMRAD","toolbelt"},
			{"BP_M3AN","toolbelt"},
			{"BP_PS22","toolbelt"},
			{"Rangefinder","weaponNA"},
			{"BP_10Rnd_338Lapua_Mag","magazine"},
			{"BP_10Rnd_300_Mag","magazine"},
			{"BP_556x45_StanagM855A1","magazine"},
			{"BP_556x45_StanagMK262","magazine"},
			{"BP_556x45_StanagSD","magazine"},
			{"BP_556x45_Stanag_Tracer","magazine"},
			{"ItemBook1","magazine"},
			{"ItemBook2","magazine"},
			{"ItemBook3","magazine"},
			{"ItemMug","magazine"},
			{"ItemPottery","magazine"},
			{"ItemVideoTape","magazine"},
			{"ItemZipDisk","magazine"},
			{"ItemCards","magazine"},
			{"HandGrenade","magazine"},
			{"BP_SW44","weaponA"},
			{"BP_M4_300MK","weaponA"},	
			{"BP_100Rnd_127x99_box","magazine"}
		};
		itemChance[] =	{	
			0.01,	//BP_AWSM
			0.01,	//Guerilla Leader
			0.02,   //20Rnd_Lapua
			0.01,   //30Rnd_M80A1
			0.01,   //20Rnd_Mk316Mod0
			0.02,   //10Rnd_762mk316_Mag
			0.04,   //5Rnd_762m80a1_Mag
			0.03,   //BP_SOS
			0.03,   //optic_Hamr
			0.03,   //BP_VX3
			0.03,   //BP_VX2
			0.03,   //BP_NXS
			0.03,   //BP_L14X
			0.03,   //BP_M3AMRAD
			0.03,   //BP_M3AN
			0.03,   //BP_PS22
			0.02,   //RANGEFINDER
			0.04,	//338Lapua AMMO
			0.02,	//300_Mag AMMO
			0.09,	//STANAG M855A1
			0.09,	//StanagMK262
			0.09,	//StanagSD
			0.09,	//Stanag_Tracer
			0.07,	//TRASH
			0.07,	//TRASH
			0.07,	//TRASH
			0.07,	//TRASH
			0.07,	//TRASH
			0.07,	//TRASH
			0.07,	//TRASH
			0.07,	//TRASH
			0.05,	//NADE
			0.04,    //BP_SW44
			0.04,    //BP_M4_300MK
			0.02    //50Cal Box
		};
	};
	
	class ApexMilBox3: Default {
		lootChance = 0.50;
		lootPos[] = {};
		itemType[] =	{
			{"BP_30Rnd_545x39_Mag_F","magazine"},
			{"BP_30Rnd_545x39_Mag_Green_F","magazine"},
			{"BP_30Rnd_545x39_Mag_Tracer_F","magazine"},
			{"BP_30Rnd_545x39_Mag_Tracer_Green_F","magazine"}, 
			{"BP_30Rnd_762x39_Mag_F","magazine"},
			{"BP_30Rnd_762x39_Mag_Green_F","magazine"},
			{"BP_30Rnd_762x39_Mag_Tracer_F","magazine"},
			{"BP_30Rnd_762x39_Mag_Tracer_Green_F","magazine"}, 
			{"BP_200Rnd_556x45_LIM_Box_F","magazine"},
			{"BP_200Rnd_556x45_LIM_Box_Red_F","magazine"},
			{"BP_200Rnd_556x45_LIM_Box_Tracer_F","magazine"},
			{"BP_200Rnd_556x45_LIM_Box_Tracer_Red_F","magazine"},
			{"BP_556x45_Stanag","magazine"},
			{"BP_556x45_Stanag_Tracer","magazine"},
			{"BP_150Rnd_556x45_Drum_Mag_F","magazine"},
			{"BP_150Rnd_556x45_Drum_Mag_Tracer_F","magazine"},
			{"BP_20Rnd_762x51_BPMag","magazine"},
			{"BP_30Rnd_580x42_Mag_F","magazine"},
			{"BP_30Rnd_580x42_Mag_Tracer_F","magazine"},
			{"BP_100Rnd_580x42_Mag_F","magazine"},
			{"BP_100Rnd_580x42_Mag_Tracer_F","magazine"},
			{"BP_30Rnd_65x39","magazine"},
			{"BP_10Rnd_50BW_Mag_F","magazine"},
			{"BP_20Rnd_650x39_Cased_Mag_F","magazine"}
		};
		itemChance[] =	{
			0.07,	//BP_30Rnd_545x39_Mag_F
			0.07,	//BP_30Rnd_545x39_Mag_Green_F
			0.05,	//BP_30Rnd_545x39_Mag_Tracer_F
			0.05,	//BP_30Rnd_545x39_Mag_Tracer_Green_F
			0.04,	//BP_30Rnd_762x39_Mag_F
			0.04,	//BP_30Rnd_762x39_Mag_Green_F
			0.04,	//BP_30Rnd_762x39_Mag_Tracer_F
			0.04,   //BP_30Rnd_762x39_Mag_Tracer_Green_F
			0.03,   //BP_200Rnd_556x45_LIM_Box_F
			0.03,   //BP_200Rnd_556x45_LIM_Box_Red_F
			0.03,	//BP_200Rnd_556x45_LIM_Box_Tracer_F			
			0.03,	//BP_200Rnd_556x45_LIM_Box_Tracer_Red_F			
			0.07,	//BP_556x45_Stanag
			0.07,	//BP_556x45_Stanag_Tracer
			0.05,	//BP_150Rnd_556x45_Drum_Mag_F
			0.02,	//BP_150Rnd_556x45_Drum_Mag_Tracer_F
			0.04,	//BP_20Rnd_762x51_BPMag
			0.08,	//BP_30Rnd_580x42_Mag_F
			0.08,   //BP_30Rnd_580x42_Mag_Tracer_F
			0.06,   //BP_100Rnd_580x42_Mag_F
			0.06,   //BP_100Rnd_580x42_Mag_Tracer_F
			0.10,	//BP_30Rnd_65x39			
			0.01,	//10Rnd_50BW_Mag_F
			0.02	//BP_20Rnd_650x39_Cased_Mag_F
		};
	};
	
	class AmmoPalletTroll: Default 
	{
		zombieChance = 0;
		minRoaming = 0;
		maxRoaming = 0;
		zombieClass[] = {};
		lootChance = 1;
		lootPos[] = {};
		itemType[] =
		{	
			{"ItemBook1","magazine"}
		};
		itemChance[] =	{	
			0.01	//Troll
		};
	};
	
	class CarePackage: Default 
	{
		zombieChance = 0;
		minRoaming = 0;
		maxRoaming = 0;
		zombieClass[] = {};
		lootChance = 1;
		lootPos[] = {};
		itemType[] =
		{		
			{"Binocular","weaponNA"},
			{"ItemKnife","magazine"},	
			{"ItemGPS","toolbelt"},
			{"ItemBandage","magazine"},
			{"ItemPainkiller","magazine"},
			{"ItemMorphine","magazine"},
			{"ItemAdrenaline","magazine"},
			{"ItemFieldDressing","magazine"},
			{"ItemAntibiotic","magazine"},
			{"ItemSurgeryKit","toolbelt"},   
			{"ItemMap","toolbelt"},
			{"BP_SPack","backpack"},
			{"ItemSoda1","magazine"},
			{"ItemSoda2","magazine"},
			{"ItemSoda3","magazine"},
			{"ItemSoda4","magazine"},
			{"ItemSoda5","magazine"},
			{"ItemCereal1","magazine"},
			{"ItemCereal2","magazine"},
			{"ItemCereal3","magazine"},
			{"ItemCereal4","magazine"},
			{"ItemCereal5","magazine"},
			{"ItemCereal6","magazine"},
			{"ItemCan1","magazine"},
			{"ItemCan2","magazine"},
			{"ItemCan3","magazine"},
			{"ItemCan4","magazine"},
			{"ItemCan5","magazine"},
			{"BP_Carryall_Hero","backpack"},
			{"BP_StoneGhillie","uniform"},
			{"BP_TreeGhillie","uniform"},
			{"BP_DirtGhillie","uniform"},
			{"BP_Wetsuit","uniform"},
			{"BP_Guarilla_Faded","uniform"},
			{"BP_Guarilla_Khaki","uniform"},
			{"BP_Guarilla_Leader","uniform"},
			{"BP_Guarilla_Camo","uniform"},
			{"BP_Ghillie_Lush","uniform"},
			{"V_RebreatherB","vest"},
			{"BP_200Rnd_556x45_MINIMI","magazine"},
			{"BP_100Rnd_762x51_MINIMI","magazine"},
			{"BP_100Rnd_65x39","magazine"},
			{"BP_20Rnd_65x47_Lapua","magazine"},
			{"BP_30Rnd_762x51_M80A1","magazine"},
			{"BP_20Rnd_762x51_Mk316Mod0","magazine"},
			{"BP_10Rnd_762mk316_Mag","magazine"},
			{"BP_10Rnd_762Rubber_Mag","magazine"},
			{"BP_5Rnd_762m80a1_Mag","magazine"},
			{"BP_556x45_StanagM855A1","magazine"},
			{"BP_556x45_StanagMK262","magazine"},
			{"BP_556x45_StanagSD","magazine"},
			{"BP_556x45_Stanag_Tracer","magazine"},
			{"BP_93x64_SVDK","magazine"},
			{"BP_15Rnd_9x21_Rubber","magazine"},
			{"BP_30Rnd_9x21_Mag","magazine"},
			{"BP_15Rnd_9x19OVP","magazine"},
			{"BP_7Rnd_45JHP","magazine"},
			{"BP_15Rnd_45JHP","magazine"},
			{"BP_optic_ACOG","toolbelt"},
			{"BP_SOS","toolbelt"},
			{"optic_Arco","toolbelt"},
			{"BP_PSOP","toolbelt"},
			{"BP_PSO1","toolbelt"},
			{"BP_compm4s","toolbelt"},
			{"BP_gemtech45","toolbelt"},
			{"BP_Mk12Sup","toolbelt"},
			{"optic_Hamr","toolbelt"},
			{"optic_MRCO","toolbelt"},
			{"BP_VX3","toolbelt"},
			{"BP_VX2","toolbelt"},
			{"BP_300Sup","toolbelt"},
			{"BP_762Muzzle","toolbelt"},
			{"BP_muzzle_snds_58_wdm_F","toolbelt"},
			{"BP_muzzle_snds_65_TI_blk_F","toolbelt"},
			{"BP_muzzle_snds_H_MG","toolbelt"},
			{"BP_muzzle_snds_H","toolbelt"},
			{"BP_muzzle_snds_M12","toolbelt"},
			{"BP_NXS","toolbelt"},
			{"BP_L14X","toolbelt"},
			{"Rangefinder","weaponNA"},
			{"V_PlateCarrierIA1_dgtl_BP","vest"},
			{"V_TacVest_oli_BP","vest"},
			{"HandGrenade","magazine"},
			{"BP_10Rnd_338Lapua_Mag","magazine"},
			{"BP_10Rnd_50BW_Mag_F","magazine"}
			//{"BP_7Rnd_408Chey_Mag","magazine"},
			//{"BP_10Rnd_127x99_RAUF","magazine"},
			//{"BP_10Rnd_300_Mag","magazine"},
			//{"BP_5Rnd_127x108_Mag","magazine"},
			//{"BP_10Rnd_127x99","magazine"}
		};
		itemChance[] =	
		{	
			0.15,	//Binoculars
			0.10,	//Hunting Knife
			0.10,	//GPS		
			0.10,	//BANDAGE			
			0.10,	//PAIN KILLER
			0.08,	//MORPHINE
			0.10,	//ADRENALINE
			0.08, 	//FIELD DRESSING
		    0.10, 	//ANTIBIOTIC
		    0.05, 	//SURGERY KIT
			0.10,	//Map
			0.01,	//CZECH SURVIVAL PACK
			0.02,	//FOOD
			0.02,	//FOOD
			0.02,	//FOOD
			0.02,	//FOOD
			0.02,	//FOOD
			0.02,	//FOOD
			0.02,	//FOOD
			0.02,	//FOOD
			0.02,	//FOOD
			0.02,	//FOOD
			0.02,	//FOOD
			0.02,	//FOOD
			0.02,	//FOOD
			0.02,	//FOOD
			0.02,	//FOOD
			0.02,	//FOOD
			0.03,	//MILITARY SURVIVAL PACK
			0.05,	//STONE GHILLIE
			0.05,	//TREE GHILLIE
			0.05,	//DIRT GHILLIE
			0.05,	//WETSUIT CLOTHING
			0.07,	//Guerilla Faded
			0.07,	//Guerilla Shit Green Sweater
			0.05,	//Guerilla Leader
			0.07,	//Guerilla Khaki Camo
			0.01,	//Marksman Ghillie
			0.03,   //REBREATHER
			0.05,   //200Rnd_556
			0.05,   //100Rnd_762
			0.05,   //100Rnd_65
			0.05,   //20Rnd_Lapua
			0.03,   //30Rnd_M80A1
			0.05,   //20Rnd_Mk316Mod0
			0.05,   //10Rnd_762mk316_Mag
			0.05,   //10Rnd_762Rubber_Mag
			0.05,   //5Rnd_762m80a1_Mag
			0.05,	//STANAG M855A1
			0.05,	//StanagMK262
			0.05,	//StanagSD
			0.05,	//Stanag_Tracer
			0.05,	//93x64_SVDK
			0.05,   //15Rnd_9x21_Rubber
			0.15,   //30Rnd_9x21_Mag
			0.05,   //15Rnd_9x19OVP
			0.05,   //7Rnd_45JHP
			0.10,   //15Rnd_45JHP
			0.03,   //ACOG
			0.03,   //BP_SOS
			0.03,   //optic_Arco
			0.03,   //BP_PSOP
			0.03,   //BP_PSO1
			0.03,   //BP_compm4s
			0.02,   //BP_gemtech45
			0.02,   //Mk12 DELTA 9mm Suppressor
			0.03,   //optic_Hamr
			0.03,   //optic_MRCO
			0.03,   //BP_VX3
			0.03,   //BP_VX2
			0.01,   //300 Silencer
			0.03,   //762 Muzzle
			0.01,   //5.8 mm Sound Suppressor (Green Hex)
			0.01,   //6.5 mm Stealth Sound Suppressor (Black)
			0.02,   //BP_muzzle_snds_H_MG
			0.01,   //BP_muzzle_snds_H
			0.01,   //BP_muzzle_snds_M12
			0.03,   //BP_NXS
			0.03,   //BP_L14X
			0.03,   //RANGEFINDER
			0.02,	//PLATE CARRIER
			0.04,	//TAC VEST
			0.04,	//HAND GRENADE
			0.01,	//338Lapua_Mag
			0.01,	//50BW_Mag
			//0.01,	//Cheytac AMMO
			//0.02,	//Cheytac AMMO
			//0.02,	//Cheytac AMMO
			//0.02,	//Cheytac AMMO
			//0.05	//50CAL AMMO
		};
	};

	class Residential: Default {
		lootChance = 0.27;
		lootPos[] = {};
		itemType[] =	{
			{"ItemSoda3","magazine"},
			{"ItemCan3","magazine"},
			{"ItemCan1","magazine"},
			{"ItemWatch","toolbelt"},
			{"ItemCompass","toolbelt"},
			{"ItemMap","toolbelt"},
			{"BP_Ruger","weapon"},
			{"BP_CZst_br","toolbelt"},
			{"BP_CZmod_br","toolbelt"},
			{"BP_Mak_Old","weapon"},
			{"BP_G17","weapon"},
			{"BP_1911","weapon"},
			{"BP_LeeEnfield","weapon"},
			{"BP_LeeEnfield2","weaponA"},
			{"BP_LeeEnfieldK","weapon"},
			{"BP_LeeEnfield_old","weapon"},
			{"BP_Kitbag_sgg","backpack"},
			{"BP_Kitbag_cbr","backpack"},
			{"BP_Kitbag_mcamo","backpack"},
			{"Binocular","weaponNA"},
			{"BP_CZ550_old","weaponA"},
			{"BP_CZ455","weaponA"},
			{"BP_WinCoy","weaponA"},
			{"BP_1866","weapon"},
			{"BP_R300","weaponA"},
			{"V_Rangemaster_belt_BP","vest"},
			{"BP_M16Old","weapon"},
			{"MeleeKatana","weapon"},
			{"BP_Benelli","weapon"},
			{"BP_Lupara","weapon"},
			{"BP_Rem870","weapon"},
			{"BP_7Rnd_45acp","magazine"},
			{"BP_10Rnd_303_Mag","magazine"},
			{"BP_5Rnd_22_Mag","magazine"},
			{"ItemPainkiller","magazine"},
			{"ItemAntibiotic","magazine"},
			{"Waterbot","magazine"},
			{"ItemDuctTape","magazine"},
			{"ItemBandage","magazine"},
			{"Meleehatchet","weapon"},
			{"MeleeShovel","weapon"},
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
			{"BP_1866C","weapon"},
			{"BP_Arrow_Poison","magazine"}
		};
		itemChance[] =	{
			0.01,	//SODA
			0.01,	//CAN 3
			0.01,	//CAN 1
			0.15,	//WATCH
			0.15,	//COMPASS
			0.09,	//MAP
			0.02,	//RUGER 10/22
			0.03,   //CZ STD BARREL
			0.01,   //CZ STD BARREL
			0.15,	//MAKAROV
			0.06,	//G17
			0.02,	//M1911
			0.02,	//ENFIELD
			0.01,	//ENFIELD SCOPED
			0.02,   //ENFIELD BAYONET
			0.05,	//ENFIELD OLD
			0.08, 	//KIT SAGE
			0.08, 	//KIT CBR
			0.08,   //KIT CAMO
			0.05,	//BINOCULARS
			0.01,	//CZ550 Old
			0.09,	//CZ455
			0.06,	//REM7
			0.09,	//1866
			0.01,	//R300
			0.09,	//BANDOLIER OLIVE
			0.01,	//AR15 OLD
			0.01,	//KATANA
			0.04,   //BENELLI
			0.09,   //LUPARA
			0.09,   //REM870
			0.01,	//45ACP
			0.01,	//303B
			0.15,	//22LR
			0.09,	//PAINKILLER
			0.01,	//ANTIBIOTIC
			0.01,	//WATER BOTTLE
			0.12,	//DUCT TAPE
			0.08,	//BANDAGE
			0.05,	//HATCHET
			0.05,   //HATCHET
			0.01,	//9MM RUBBER
			0.07,    //HavenReinforcement BLUEPRINT
			0.07,    //Stove BLUEPRINT
			0.07,    //Barrel Water BLUEPRINT
			0.07,    //barrel Fuel BLUEPRINT
			0.07,    //television BLUEPRINT
			0.07,    //CRATE BLUEPRINT
			0.05,	//Crossbow
			0.03,	//Crossbow
			0.10,	//Crossbow Arrow
			0.03,	//1886 collector
			0.05	//Crossbow Arrow poisen
		};		
	};
	
	class Residential2: Default {
		lootChance = 0.27;
		lootPos[] = {};
		itemType[] =	{
			{"BP_Mak_Old","weapon"},
			{"BP_1886S","weaponA"},
			{"BP_1886C","weaponA"},
			{"BP_SW45","weapon"},
			{"BP_SW44","weapon"},
			{"BP_1911","weapon"},
			{"ItemKnife","magazine"},
			{"ItemMatchbox","magazine"},
			{"BP_6Rnd_45_Mag","magazine"},
			{"BP_6Rnd_45JHP_Mag","magazine"},
			{"BP_g17","weapon"},
			{"BP_LeeEnfieldK","weapon"},
			{"BP_LeeEnfield2","weaponA"},
			{"BP_Win70","weaponA"},
			{"BP_Win70F","weaponA"},
			{"BP_M1903","weaponA"},
			{"BP_M1903K","weaponA"},
			{"BP_CZ550_old","weaponA"},
			{"BP_CZ455","weaponA"},
			{"BP_WinCoy2","weaponA"},
			{"BP_R7P","toolbelt"},
			{"BP_R300","weaponA"},
			{"V_Rangemaster_belt_BP","vest"},
			{"BP_M16Old","weapon"},
			{"BP_Benelli","weapon"},
			{"BP_Lupara","weapon"},
			{"BP_Kar98","weaponA"},
			{"BP_7Rnd_45acp","magazine"},
			{"BP_5Rnd_223_Mag","magazine"},
			{"BP_8Rnd_45gov","magazine"},
			{"MeleeKatana","weapon"},
			{"BP_10Rnd_303_Mag","magazine"},
			{"BP_Crossbow","weapon"},
			{"BP_Crossbow_DigitCamo","weaponA"},
			{"BP_Arrow_Mag","magazine"},
			{"BP_Arrow_Poison","magazine"}

		};
		itemChance[] =	{
			0.15,	//MAKAROV
			0.01,	//WINCHESTER 1886S
			0.03,	//WINCHESTER 1866C
			0.15,	//S&W 45
			0.01,	//S&W 44
			0.07,	//M1911
			0.05,	//KNIFE
			0.18,	//MATCHES
			0.07,	//6RND 45
			0.02,	//6RND 45JHP
			0.10,   //G17
			0.07,	//ENFIELD
			0.02,	//ENFIELD SCOPED
			0.05,	//WINCHESTER MODEL 70
			0.01,	//WINCHESTER MODEL 70 SUPER GRADE
			0.01,	//SPRINGFIELD M1903
			0.05,	//CZ550 Old
			0.09,	//CZ455
			0.03,   //REM7 CDL
			0.01,   //REM7 PBARREL
			0.01,	//R300
			0.09,	//BANDOLIER OLIVE
			0.02,	//AR15 OLD
			0.04,   //BENELLI
			0.04,   //LUPARA
			0.01,   //KAR98
			0.01,	//45ACP
			0.05,	//223REM
			0.02,   //45GOV
			0.02,   //KATANA
			0.01,	//303BT
			0.02,	//Crossbow
			0.01,	//Crossbow
			0.10,	//Crossbow Arrow
			0.05	//Crossbow Arrow poisen
		};		
	};
	
	class Generic: Default {
		lootChance = 0.27;
		lootPos[] = {};
		itemType[] =	{
			{"ItemWatch","toolbelt"},
			{"ItemCompass","toolbelt"},
			{"ItemMap","toolbelt"},
			{"BP_flashlight","toolbelt"},
			{"ItemKnife","magazine"},
			{"ItemMatchbox","magazine"},
			{"ItemBrick1","magazine"},
			{"ItemBrick2","magazine"},
			{"BP_Kitbag_sgg","backpack"},
			{"BP_Kitbag_cbr","backpack"},
			{"BP_Kitbag_mcamo","backpack"},
			{"Binocular","weaponNA"},
			{"PartWoodPile","magazine"},
			{"ChemG","magazine"},
			{"ChemY","magazine"},
			{"ChemR","magazine"},
			{"ChemB","magazine"},
			{"ItemSoda5","magazine"},
			{"ItemCereal6","magazine"},
			{"ItemCan5","magazine"},
			{"BP_5Rnd_22_Mag","magazine"},
			{"BP_10Rnd_303_Mag","magazine"},
			{"BP_5Rnd_223_Mag","magazine"},
			{"BP_5Rnd_223BTHP_Mag","magazine"},
			{"BP_2Rnd_Buckshot","magazine"},
			{"BP_2Rnd_MagBuckshot","magazine"},
			{"BP_2Rnd_Slug","magazine"},
			{"BP_8Rnd_MagBuckshot","magazine"},
			{"BlueprintHaven","magazine"},
			{"BlueprintChest","magazine"},
			{"BlueprintIceBox","magazine"},
			{"BlueprintGunCab","magazine"},
			{"BlueprintHavenReinforce","magazine"},
			{"BlueprintStove","magazine"},
			{"ItemStove","magazine"},
			{"ItemPainkiller","magazine"},
			{"ItemAntibiotic","magazine"},
			{"Waterbot","magazine"},
			{"ItemTennisBall","magazine"},
			{"ItemDuctTape","magazine"},
			{"ItemWaterTape","magazine"},
			{"ItemBook1","magazine"},
			{"ItemBook1","magazine"},
			{"ItemBandage","magazine"},
			{"ItemToolbox","toolbelt"},
			{"ItemNails","magazine"},
			{"ItemHammer","magazine"},
			{"BlueprintCrate1","magazine"},
			{"BP_AlarmClock_Black","magazine"}
		};
		itemChance[] =	{
			0.10,	//WATCH
			0.10,	//COMPASS
			0.07,	//MAP
			0.07,   //FLASHLIGHT
			0.18,	//KNIFE
			0.16,	//MATCHES
			0.06,	//BRICK
			0.06,	//BRICK2
			0.03, 	//KIT SAGE
			0.02, 	//KIT CBR
			0.01,   //KIT CAMO
			0.05,	//BINOCULARS
			0.16,	//WOOD
			0.05,	//CHEM
			0.05,	//CHEM
			0.05,	//CHEM
			0.05,	//CHEM
			0.01,	//SODA
			0.01,	//FOOD
			0.01,	//FOOD
			0.15,	//22LR
			0.02,   //303B
			0.06,   //223REM
			0.02,   //223REMBTHP
			0.12,   //2RND BUCKSHOT
			0.06,   //2RND BUCKSHOT
			0.07,   //2RND BUCKSHOT
			0.07,   //MagBuckshot
			0.01,   //HAVEN LOCK
			0.02,   //CHEST
			0.02,   //REFRIGERATOR
			0.02,   //GUN CABINET
			0.02,   //HavenReinforcement BLUEPRINT
			0.02,   //Stove BLUEPRINT
			0.02,   //Stove
			0.07,	//PAINKILLER
			0.01,	//ANTIBIOTIC
			0.00,	//WATER BOTTLE
			0.10,	//TENNIS BALL
			0.10,	//DUCT TAPE
			0.05,	//WATER TAPE
			0.05,	//BOOK1
			0.05,	//BOOK2
			0.08,	//BANDAGE
			0.03,	//TOOLBOX
			0.09,   //NAILS
			0.08,   //HAMMER
			0.07,   //CRATE BLUEPRINT
			0.05	//AlarmClock
			
		};		
	};
	
	class Trash: Default {
		lootChance = 0.27;
		lootPos[] = {};
		itemType[] =	{
			{"ItemBook1","magazine"},
			{"ItemBook2","magazine"},
			{"ItemBook3","magazine"},
			{"ItemMug","magazine"},
			{"ItemBrick1","magazine"},
			{"ItemBrick2","magazine"},
			{"ItemPottery","magazine"},
			{"ItemVideoTape","magazine"},
			{"ItemZipDisk","magazine"},
			{"ItemCards","magazine"},
			{"ItemTennisBall","magazine"},
			{"ItemToiletPaper","magazine"},
			{"ItemGlue","magazine"},
			{"ItemDuctTape","magazine"},
			{"ItemWaterTape","magazine"},
			{"BP_5Rnd_22_Mag","magazine"},
			{"BP_10Rnd_303_Mag","magazine"},
			{"BP_16Rnd_9x21_Mag","magazine"},
			{"BP_2Rnd_Buckshot","magazine"},
			{"BlueprintHaven","magazine"},
			{"BlueprintChest","magazine"},
			{"BlueprintIceBox","magazine"},
			{"BlueprintGunCab","magazine"},
			{"BlueprintStove","magazine"},
			{"ItemCan1","magazine"},
			{"ItemCan2","magazine"},
			{"ItemCan3","magazine"},
			{"ItemCan4","magazine"},
			{"ItemCan5","magazine"},
			{"ChemG","magazine"},
			{"ChemR","magazine"},
			{"ChemY","magazine"},
			{"ChemB","magazine"},
			{"BlueprintCrate1","magazine"},
			{"BP_AlarmClock_Black","magazine"}

		};
		
		itemChance[] =	{
			0.10,	//BOOK
			0.10,	//BOOK
			0.07,	//BOOK
			0.18,	//MUG
			0.16,	//BRICK
			0.10,	//BRICK
			0.10,	//POTTERY
			0.10, 	//VIDEO TAPE
			0.10, 	//ZIPDISK
			0.10,   //CARDS
			0.10,	//TENNIS BALL
			0.10,	//TOILET PAPER
			0.10,	//GLUE
			0.10,	//DUCT TAPE
			0.10,	//WATER TAPE
			0.12,	//22
			0.07,	//303
			0.10,   //9MM
			0.12,   //2RND BUCKSHOT
			0.02,   //HAVEN LOCK
			0.02,   //CHEST
			0.02,   //REFRIGERATOR
			0.02,   //GUN CABINET
			0.02,   //Stove BLUEPRINT
            0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.05,	//CHEM
			0.05,	//CHEM
			0.05,	//CHEM
			0.05,	//CHEM			
			0.02,   //TENT BLUEPRINT
			0.05	//AlarmClock
		};		
	};
	
	class Office: Default {
		lootChance = 0.70;
		lootPos[] = {};
		itemType[] =	{
			{"ItemSoda1","magazine"},
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
			{"Binocular","toolbelt"},
			{"BP_M8","toolbelt"},
			{"Itemcan3","magazine"},
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
			{"Waterbot","magazine"},
			{"ItemTennisBall","magazine"},
			{"ItemBandage","magazine"},
			{"ItemElectronics","magazine"},
			{"ItemElectricalWire","magazine"},
			{"ItemCanvasMaterial","magazine"},
			{"ItemNettingMaterial","magazine"}
			
		};
		itemChance[] =	{
			0.01,	//Mountain DEW
			0.10,	//WATCH
			0.10,	//COMPASS
			0.10,	//MAP
			0.02,	//M1911
			0.15,	//KNIFE
			0.15,	//MATCHES
			0.04,	//RADIO
			0.01,	//SW.500
			0.01,   //COLT 45
			0.02,   //G17
			0.02,   //6RND .45JHP
			0.08,   //CZ455
			0.04,   //CZ455 SUP
			0.03, 	//KIT SAGE
			0.02, 	//KIT CBR
			0.01,   //KIT CAMO
			0.03,   //LEE ENFIELD
			0.16,	//BINOCULARS
			0.01,	//S&W500 Scope
			0.01,   //CAN 3
			0.02,	//BANDOLIER OLIVE
			0.07,	//M9
			0.07,	//LUPARA
			0.01,	//GPS
			0.02,	//HAVEN LOCK
			0.01,   //M24 CLIP
			0.01,	//45ACP
			0.02,	//303B
			0.15,	//22LR
			0.01,	//.500SW
			0.01,	//303_JSP_Mag
			0.07,	//PAINKILLER
			0.01,	//ANTIBIOTIC
			0.01,	//WATER BOTTLE
			0.05,	//TENNIS BALL
			0.08,	//BANDAGE
			0.03,	//ELECTRONICS
			0.03,	//WIRE
			0.04,	//CANVAS MATERIAL
			0.04	//NETTING MATERIAL	
		};		
	};
	
	
	class Industrial : Default {
		lootChance = 0.32;
		lootPos[] = {};
		itemType[] =	{
			{"ItemDuctTape","magazine"},
			{"ItemWaterTape","magazine"},
			{"ItemFuelcanEmpty","magazine"},
			//{"MeleeHatchet","weaponNA"},
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
			//{"MeleeMachete","weaponNA"},
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
			{"MeleeHammer","weapon"},
			{"BlueprintHavenReinforce","magazine"},
			{"ItemStove","magazine"},
			{"MeleeShovel","weapon"}, 
			{"MeleeCrowbar","weapon"},
            {"MeleeClub","weapon"},
			{"ItemSandbag","magazine"}			
		};
		itemChance[] =	{
			0.10,	//DUCT TAPE
			0.05,	//WATER TAPE
			0.14,	//JERRY CAN
			//0.18,	//HACHET
			0.09,   //NAILS
			0.08,   //HAMMER
			0.03,   //BLOWTORCH
			0.10,   //PALETTE
			0.07,   //CANVAS MATERIAL
			0.09,   //NETTING MATERIAL
			0.08,   //WOODEN POLES
			0.09,   //CEMENT BAG
			0.07,	//WHEEL
			0.05,	//ENGINE
			0.13,	//CRISTAL
			0.14,	//JERRY CAN
			0.03,	//JERRY CAN
			//0.01,	//HACHET
			0.07,	//KNIFE
			0.15,   //LIQUID RESIN
			0.11,   //PUNCTURE KIT
			0.09,   //ITEM BATTERY
			0.12,   //FIBERGLASS
			0.02,   //STEEL
			0.07,   //HYDRAULIC FLUID
			0.05,   //ELECTRONICS
			0.07,   //WIRE
			0.05,   //HYDRAULIC CYLINDER
			0.14,   //ENGINE COOLANT
			0.09,   //FUEL HOSE KIT
			0.09,	//TOOLBOX
			0.03,	//HAMMER
			0.02,   //HavenReinforcement BLUEPRINT
			0.02,   //Stove
			0.03, //SHOVEL
			0.03, //BAT
			0.03, //CROWBAR
			0.08   //SAND BAG
		};
	};
	
	class IndustrialVehicle: Default {
		lootChance = 0.30;
		lootPos[] = {};
		itemType[] =	{
			{"ItemDuctTape","magazine"},
			{"ItemWaterTape","magazine"},
			{"PartWheel","magazine"},
			{"PartEngine","magazine"},
			{"PartGlass","magazine"},
			{"ItemFuelcanEmpty","magazine"},
			//{"MeleeMachete","weaponNA"},
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
			{"ItemFuelcanLargeEmpty","magazine"},
			{"MeleeHammer","weapon"},
			{"MeleeHammer2","weapon"},
			{"ItemToolbox","toolbelt"}	
		};
		itemChance[] =	{
			0.10,	//DUCT TAPE
			0.05,	//WATER TAPE
			0.07,	//WHEEL
			0.05,	//ENGINE
			0.13,	//CRISTAL
			0.14,	//JERRY CAN
			//0.01,	//HACHET
			0.07,	//KNIFE
			0.15,   //LIQUID RESIN
			0.11,   //PUNCTURE KIT
			0.09,   //ITEM BATTERY
			0.12,   //FIBERGLASS
			0.02,   //STEEL
			0.07,   //HYDRAULIC FLUID
			0.05,   //ELECTRONICS
			0.07,   //WIRE
			0.05,   //HYDRAULIC CYLINDER
			0.14,   //ENGINE COOLANT
			0.09,   //FUEL HOSE KIT
			0.01,   //LARGE FUEL CAN
			0.02,   //HAMMER
			0.01,   //HAMMER2
			0.09	//TOOLBOX
		};
	};
	
	class Farm: Default {
		lootChance = 0.20;
		lootPos[] = {};
		itemType[] =	{
			{"ItemFuelcanEmpty","magazine"},
			{"ItemWaterTape","magazine"},
			{"ItemBandage","magazine"},
			{"ItemNails","magazine"},
			{"V_Rangemaster_belt_BP","vest"},
			{"BP_6Rnd_45_Mag","magazine"},
			{"BP_6Rnd_44Mag","magazine"},
			{"BP_sw45","weapon"},
			{"BP_sw44","weapon"},
			{"BP_5Rnd_Mauser_Mag","magazine"},
			{"BP_Rem870","weapon"},
			{"BP_Ruger","weapon"},
			{"BP_Lupara","weapon"},
			{"BP_1886S","weaponA"},
			{"BP_25Rnd_22_Mag","magazine"},
			{"BP_5Rnd_500Mag","magazine"},
			{"BP_Rhino","weapon"},
			{"BP_8Rnd_Slug","magazine"},
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
			{"MeleePickaxe","weapon"},
			{"MeleeHammer","weapon"},
			{"MeleeHammer2","weapon"},
			{"BlueprintStove","magazine"},
			{"MeleeShovel","weapon"},
			{"MeleeCrowbar","weapon"},
			{"MeleeClub","weapon"},
			{"ItemStove","magazine"},
			{"ItemToolbox","toolbelt"}	
		};
		itemChance[] =	{
			0.06,	//JERRY CAN
			0.05,	//WATER TAPE
			0.02,	//BANDAGE
			0.06,   //NAILS
			0.01,	//BANDOLIER	
			0.05,	//45 MAG ROUNDS
			0.03,	//44 MAG ROUNDS
			0.03,	//SW45
			0.01,	//SW.500
			0.01,	//MAUSER 7.92
			0.06,	//REMINGTON 870
			0.03,	//RUGER 10/22
			0.09,	//LUPARA
			0.01,	//1886S
			0.02,	//25RND .22LR
			0.01,	//.500SW
			0.01,	//RHINO
			0.10,	//BENELLI SLUGS
			0.05,   //PALETTE
			0.06,	//WHEEL
			0.06,   //CANVAS MATERIAL
			0.04,   //NETTING MATERIAL
			0.07,   //HYDRAULIC FLUID
			0.05,   //ELECTRONICS
			0.07,   //WIRE
			0.02,   //HYDRAULIC CYLINDER
			0.14,   //ENGINE COOLANT
			0.09,   //FUEL HOSE KIT
			0.04,   //PICKAXE
			0.02,   //HAMMER
			0.01,   //HAMMER2
			0.02,    //SHOVEL
			0.02,    //BAT
			0.02,    //CROWBAR
			0.02,   //Stove BLUEPRINT
			0.02,   //Stove
			0.09	//TOOLBOX
		};
	};
	class Supermarket: Default {
		lootChance = 0.25;
		itemType[] = {
			{"ItemWatch","toolbelt"},
			{"ItemCompass","toolbelt"},
			{"ItemMap","toolbelt"},
			{"BP_1911","weapon"},
			{"ItemKnife","magazine"},
			{"ItemMatchbox","magazine"},
			{"ItemDuctTape","magazine"},
			{"ItemWaterTape","magazine"},
			{"ItemBook1","magazine"},
			{"ItemBook1","magazine"},
			{"ItemBandage","magazine"},
			{"ItemBrick1","magazine"},
			{"ItemBrick2","magazine"},
			{"BP_Rhino","weapon"},
			{"V_Rangemaster_belt_BP","vest"}, 
			{"BP_Kitbag_sgg","backpack"},
			{"BP_Kitbag_cbr","backpack"},
			{"BP_Kitbag_mcamo","backpack"}, 
			{"Waterbot","magazine"},
			{"ItemSoda1","magazine"},
			{"ItemSoda2","magazine"},
			{"ItemSoda3","magazine"},
			{"ItemSoda4","magazine"},
			{"ItemSoda5","magazine"},
			{"ItemCereal1","magazine"},
			{"ItemCereal2","magazine"},
			{"ItemCereal3","magazine"},
			{"ItemCereal4","magazine"},
			{"ItemCereal5","magazine"},
			{"ItemCereal6","magazine"},
			{"ItemCan1","magazine"},
			{"ItemCan2","magazine"},
			{"ItemCan3","magazine"},
			{"ItemCan4","magazine"},
			{"ItemCan5","magazine"},
			{"Binocular","weaponNA"},
			{"BP_2Rnd_Buckshot","magazine"},
			{"BP_2Rnd_MagBuckshot","magazine"},
			{"BP_2Rnd_Slug","magazine"},
			{"PartWoodPile","magazine"},
			{"BlueprintCrate1","magazine"},
			{"BP_Mak_Old","weapon"},
			{"BP_AlarmClock_Black","magazine"}			
		};
		itemChance[] =	{
			0.17,	//WATCH
			0.07,	//COMPASS
			0.15,	//MAP
			0.01,	//M1911
			0.02,	//KNIFE
			0.05,	//MATCHES
			0.10,	//DUCT TAPE
			0.05,	//WATER TAPE
			0.05,	//BOOK1
			0.05,	//BOOK2
			0.02,	//BANDAGE
			0.05,	//BRICK
			0.05,	//BRICK
			0.01,	//RHINO
			0.04, 	//RANGEMASTER BELT
			0.03, 	//KIT SAGE
			0.02, 	//KIT CBR
			0.01,   //KIT CAMO
			0.02,	//WATERBOTTLE
			0.02,	//SODA
			0.02,	//SODA
			0.02,	//SODA
			0.02,	//SODA
			0.02,	//SODA
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.07,	//BINOCULARS
			0.05,	//2RND BUCKSHOT
			0.03,	//2RND MAGBUCKSHOT
			0.02,	//2RND SLUG
			0.12,	//WOOD
			0.05,	//TENT BLUEPRINT
			0.15,	//MAKAROV
			0.02	//AlarmClock
		};
	};
	class Hospital: Default {
		lootChance = 0.95;
		lootPos[] = {};
		itemType[] =	{
			{"ItemBrick1","magazine"},
			{"ItemBrick2","magazine"},
			{"ItemBandage","magazine"},
			{"ItemPainkiller","magazine"},
			{"ItemMorphine","magazine"},
			{"ItemFieldDressing","magazine"},
			{"ItemAntibiotic","magazine"},
			{"ItemSurgeryKit","toolbelt"},
			{"ItemAdrenaline","magazine"},
			{"ItemKnife","magazine"},
			{"ItemMatchbox","magazine"}
		};
		itemChance[] =	{
			0.05,	//BRICK
			0.05,	//BRICK
			0.25,	//BANDAGE
			0.25,	//PAINKILLER
			0.22,	//MORPHINE
			0.22,	//FIELD DRESSING
			0.25,	//ANTIBIOTIC
			0.05,     //SURGERY KIT
			0.05,     //Adrenaline
			0.02,	//KNIFE
			0.05	//MATCHES
		};
	};
	
	class MilitaryGeneralAcc: Default {
		lootChance = 0.37;
		lootPos[] = {};
		itemType[] =	{
			{"optic_Aco","toolbelt"},
			{"optic_mrco","toolbelt"},
			{"BP_CPad","toolbelt"},
			{"ItemMorphine","magazine"},
			{"ItemKnife","magazine"},
			{"ItemMap","toolbelt"},
			{"ItemRadio","toolbelt"},
			{"BP_AFG","toolbelt"},
			{"ItemDuctTape","magazine"},
			{"ItemWaterTape","magazine"},
			{"BP_5Rnd_300AAC_Mag","magazine"},
			{"ItemBandage","magazine"},
			{"BP_8Rnd_Slug","magazine"},
			{"BP_2Rnd_MagBuckshot","magazine"},
			{"BP_2Rnd_Slug","magazine"},
			{"BP_16Rnd_9x21_Mag","magazine"},
			{"BP_5Rnd_3006_Mag","magazine"},
			{"BP_10Rnd_303_Mag","magazine"},
			{"BP_7Rnd_45acp","magazine"},
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
			{"BlueprintCamoNet","magazine"},
			{"BlueprintCache1","magazine"},
			{"V_Chestrig_rgr_BP","vest"},
			{"ItemSurgeryKit","toolbelt"},
			{"BP_Arrow_Mag","magazine"},
			{"BP_Arrow_Poison","magazine"},		
			{"BP_30Rnd_9x21_Mag","magazine"},
			{"BP_556old_Stanag","magazine"},
			{"V_BandollierB_khk_BP","vest"},
			{"BP_8Rnd_MagBuckshot","vest"}
		};
		itemChance[] =	{
			0.05,	//ACO OPTIC
			0.01,	//HAMR OPTIC
			0.01,	//CHEEKPIECE
			0.05,	//BINOCULARS
			0.10,	//KNIFE
			0.15,	//MAPA
			0.05,	//RADIO
			0.03,	//AFG
			0.05,	//DUCT TAPE
			0.05,	//WATER TAPE
			0.07,	//BANDAGE
			0.01,	//300 BLACKOUT
			0.05,	//BENELLI SLUG
			0.05,	//2RND MAGBUCKSHOT
			0.05,	//2RND SLUG
			0.09,	//9MM MAG
			0.01,	//3006 MAG
			0.03,	//303B
			0.03,	//7RND 45ACP
			0.04,	//STANAG
			0.15,	//PAINKILLERS
			0.02,	//SMOKE
			0.03, 	//KIT SAGE
			0.02, 	//KIT CBR
			0.02,   //KIT CAMO
			0.05, 	//FIELD BLACK
			0.05, 	//FIELD HEX
			0.05,   //FIELD URBAN
            0.05,   //FIELD TAN			
			0.12,	//BANDOLIER OLIVE
			0.07,   //TENT BLUEPRINT
			0.06,   //CAMO NET BLUEPRINT
			0.06,   //CRATE BLUEPRINT
			0.02,   //Survival Rig
			0.01,   //SURGERY KIT
			0.12,	//Arrow
			0.05,	//Arrow Poison
			0.15,	//30Rnd_9x21_Mag
			0.10,	//30Rnd_9x21_Mag
			0.06,	//Bandolier Mid
			0.06	//MagBuckshot
		};
	};
	
	class MilitaryGeneralWpn: Default {
		lootChance = 0.37;
		lootPos[] = {};
		itemType[] =	{
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
			{"BP_Lupara","weapon"},
			{"BP_Benelli","weapon"},
			{"BP_R300","weaponA"},
			{"BP_SVT40","weapon"},
			{"BP_LeeEnfield2","weaponA"},
			{"BP_Crossbow","weapon"},
			{"BP_Crossbow_DigitCamo","weaponA"},
			{"BP_MP5","weapon"}

		};
		itemChance[] =	{
			0.07,	//M9
			0.07,	//G17
			0.10,	//M16
			0.02,	//AR10
			0.02,	//SW45
			0.09,	//AK74m	
			0.07,	//AKS74U	
			0.07,	//OLD M4
			0.02,	//M4
			0.04,	//LUPARA
			0.02,	//M4K
			0.12,	//BENELLI
			0.04,	//R300
			0.02,	//SVT40
			0.03,	//ENFIELD SCOPED
			0.03,	//Crossbow
			0.03,	//Crossbow
			0.10	//Mp5
		};
	};
	
	class MilitarySurplusWpn: Default {
		lootChance = 0.37;
		lootPos[] = {};
		itemType[] =	{
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
			{"BP_M16OLD","weapon"},
			{"BP_SA58","weapon"},
			{"BP_M21K","weaponA"},
			{"BP_FNFAL","weapon"}
			
		};
		itemChance[] =	{
			0.03,	//GARAND
			0.02,	//GARAND K
			0.03,	//K98
			0.02,	//K98 SCOPE
			0.02,	//BAR	
			0.08,	//1911
			0.03,	//SVT40
			0.02,	//SVT40 SCOPE
			0.02,	//M1903
			0.02,	//M1903K
			0.09,	//M16A2
			0.05,	//AK47
			0.00,	//M21
			0.04	//FNFAL
		};
	};
	
	class MilitaryAirfieldAcc: Default {
		lootChance = 0.35;
		lootPos[] = {};
		itemType[] =	{
			{"BP_gemtech45","toolbelt"},
			{"BP_gemtech9","toolbelt"},
			{"BlueprintCamoNet","magazine"},
			{"BP_Bergen_mcamo","backpack"},
			{"BP_Bergen_blk","backpack"},			
			{"BP_M3A","toolbelt"},
			{"optic_Arco","toolbelt"},
			{"BP_CPad","toolbelt"},
			{"BP_AFG","toolbelt"},
			{"V_Rangemaster_belt_BP","vest"},
			{"V_HarnessO_brn_BP","vest"},
			{"BlueprintCache1","magazine"},
			{"optic_Aco","toolbelt"},
			{"optic_Hamr","toolbelt"},
			{"ItemRadio","toolbelt"},
			{"ItemGPS","toolbelt"},		
			{"optic_Arco","toolbelt"},
			{"BP_optic_ACOG","toolbelt"},
			{"V_Chestrig_rgr_BP","vest"},
			{"Rangefinder","weaponNA"},
			{"optic_Holosight","toolbelt"},
			{"BlueprintSafe","magazine"},
			{"BlueprintRockStash","magazine"},
			{"BP_5Rnd_762x51_Mag","magazine"},
			{"BP_10Rnd_762x51_Mag","magazine"},
			{"BP_556x45_Stanag","magazine"},
			{"BP_200Rnd_556x45_Minimi","magazine"},
			{"BP_545x39_AK107","magazine"},
			{"BP_1Rnd_HE_shell","magazine"},
			{"BP_8Rnd_Slug","magazine"},
			{"V_BandollierB_oli_BP","vest"},
			{"BP_8Rnd_MagBuckshot","magazine"},
			{"BP_100Rnd_127x99_box","magazine"}
		};
		itemChance[] =	{
			0.03,	//GEMTECH 45
			0.03,	//GEMTECH 9MM
			0.08,   //CAMO NET BLUEPRINT
			0.02, 	//BERGEN CAMO
            0.02,   //BERGEN BLACK
			0.02,   //DESERT SNIPER OPTIC
			0.02,   //OPTIC ARCO
			0.03,   //CHEEKPIECE
			0.03,   //AFG
			0.09,   //OLIVE BANDOLIER
			0.02,   //Equipment Harness
			0.04,   //MILITARY CRATE
			0.03,	//OPTIC ACO
			0.05,	//HAMR OPTIC
			0.05,	//RADIO
			0.01, 	//GPS
			0.05,	//ARCO SIGHT
			0.02,   //OPTIC ACOG
			0.15,	//survival rig
			0.01,	//RANGEFINDER
			0.16,	//HOLO OPTIC
			0.03,   //SAFE BLUEPRINT
			0.02,   //ROCK STASH
			0.02, 	//5RND 762
			0.02, 	//10RND 762
			0.02, 	//STANAG
			0.01, 	//200RND STANAG
			0.06, 	//AK MAG
			0.05, 	//HE GRENADE M203
			0.05,	//BENELLI SLUG
			0.05,	//BENELLI SLUG
			0.05,	//Bandolier Mid
			0.05,	//MagBuckshot
			0.05	//50cal box
		};
	};
	
	class MilitaryAirfieldSpc: Default {
		lootChance = 0.35;
		lootPos[] = {};
		itemType[] =	{
			{"BP_20Rnd_762x51_BPMag","magazine"},
			{"BP_556x45_Stanag","magazine"},
			{"BP_762x54_SVD","magazine"},
			{"BP_30Rnd_65x39","magazine"},
			{"BP_5Rnd_300_Mag","magazine"},
			//{"BP_10Rnd_338Lapua_Mag","magazine"},
			{"BP_5Rnd_762mk316_Mag","magazine"},
			{"BP_5Rnd_3006_Mag","magazine"},
			{"BP_5Rnd_3006m_Mag","magazine"},
			{"ItemBandage","magazine"},
			{"BP_8Rnd_Slug","magazine"}

			
		};
		itemChance[] =	{
			0.05,   //10RND 762
			0.35,   //STANAG
            0.06,   //SVD
			0.16,   //GRENDEL
            0.01,   //300 WINMAG
			//0.01,   //338
            0.02,   //5RND 762MK316
			0.22,   //3006
			0.07,   //3006M
			0.05,	//BANDAGE
			0.15	//BENELLI SLUG
	    };
	};
	
	class MilitaryAirfieldWpn: Default {
		lootChance = 0.35;
		lootPos[] = {};
		itemType[] =	{
			{"BP_M4_300MK","weapon"},
			{"BP_Minimi_HG","weapon"},
			{"BP_SUD_AK107","weapon"},
			{"BP_R700","weaponA"},
			{"BP_Mk12mod1","weaponA"},
			{"BP_MK20C","weapon"},
			{"BP_SVT40","weaponA"},
			{"BP_M4","weaponA"},
			{"BP_1911MDes","weapon"},
			{"BP_MXM","weapon"},
			{"BP_M24DES","weaponA"},
			{"BP_M4_300","weaponA"},
			{"BP_AK74U","weapon"},
			{"BP_M16a4","weapon"},
			{"BP_SUD_AK108","weaponA"},
			{"BP_SUD_AK109","weaponA"}
		};
		itemChance[] =	{
			0.03,   //M4_300MK
			0.01,   //M249
			0.20,   //AK107
			0.02,   //R700
			0.01,   //Mk12 MOD1
			0.08,	//MK20 CARBINE
			0.03,	//SVT40 PSO
			0.09,	//M4 CAMO
			0.02,   //KIMBER NW
			0.01,	//MXM
			0.01,   //M24 DESERT
			0.02,	//AR15 OLD
			0.25,	//AKS74U
			0.17,   //M16A2
			0.08,	//SUD_AK108
			0.08	//SUD_AK109
		};
	};
	
	class MilitarySpecialAcc: Default {
		lootChance = 0.35; 
		lootPos[] = {};
		itemType[] =	{
			{"optic_Aco","toolbelt"},
			{"optic_mrco","toolbelt"},
			{"Binocular","weaponNA"},
			{"BP_CPad","toolbelt"},
			{"BP_AFG","toolbelt"},
			{"ItemKnife","magazine"},
			{"ItemMap","toolbelt"}, 
		    {"BP_Kitbag_sgg","backpack"},
			{"BP_Kitbag_cbr","backpack"},
			{"BP_Kitbag_mcamo","backpack"},
		    {"BP_FieldPack_blk","backpack"},
			{"BP_FieldPack_ocamo","backpack"},
			{"BP_FieldPack_oucamo","backpack"},
			{"BP_FieldPack_cbr","backpack"},
			{"BP_Bergen_drt","backpack"},
			{"BP_Bergen_grs","backpack"},
			{"BP_Bergen_stn","backpack"},
			{"BP_Bergen_tre","backpack"},
			{"BP_Bergen_mcamo","backpack"},
			{"BP_Bergen_sgg","backpack"},
			{"BP_Bergen_rgr","backpack"},
			{"BP_Bergen_blk","backpack"},
			{"ItemBandage","magazine"},
			{"ItemPainkiller","magazine"},
			{"BP_556x45_Stanag","magazine"},
			{"BP_UGL_FlareRed","magazine"},
			{"BP_15Rnd_9x19OVP","magazine"},
			{"BP_5Rnd_3006M_Mag","magazine"},
			{"BP_5Rnd_762x51_Mag","magazine"},
			{"HandGrenade","magazine"},
			{"BP_16Rnd_9x21_Mag","magazine"},
			{"BP_10Rnd_762x51_Mag","magazine"},
			{"BP_10Rnd_65x39","magazine"},
			{"BP_7Rnd_45acp","magazine"},
			{"BP_6Rnd_45JHP_Mag","magazine"},
			{"SmokeShellRed","magazine"},
			{"optic_holosight","toolbelt"},
			{"V_Rangemaster_belt_BP","vest"},
			{"BlueprintCrate1","magazine"},
			{"BlueprintCamoNet","magazine"},
			{"V_HarnessOGL_brn_BP","vest"},
			{"BP_gemtech9","toolbelt"},
			{"ItemSurgeryKit","toolbelt"},
			{"BP_545x39_HP_30rnd","magazine"},
			{"BP_545x39_30rnd_Ball_T","magazine"},
			{"BP_556x45_StanagSD","magazine"},
			{"BP_556x45_Stanag_Tracer","magazine"},
			{"BP_556old_Stanag","magazine"},
			{"V_BanditBandolier_BP","vest"}

		};
		itemChance[] =	{
			0.15,	//ACO OPTIC
			0.02,	//HAMR OPTIC
			0.16,	//BINOCULARS
			0.03,	//CHEEKPIECE
			0.03,	//AFG
			0.10,	//KNIFE
			0.15,	//MAPA
			0.13, 	//KIT SAGE
			0.12, 	//KIT CBR
			0.12,   //KIT CAMO
			0.11, 	//FIELD BLACK
			0.12, 	//FIELD HEX
			0.11,   //FIELD URBAN
            0.12,   //FIELD TAN	
			0.05,   //BERGEN 
			0.05,   //BERGEN 
			0.05,   //BERGEN 
			0.05,   //BERGEN 
			0.05,   //BERGEN 
			0.05,   //BERGEN 
			0.05,   //BERGEN 
            0.07,   //BERGEN BLACK			
			0.15,	//BANDAGE
			0.15,	//PAINKILLER
			0.07,	//STANAG 30RND
			0.15,	//AK MAG
			0.15,	//9MM OVP
			0.02,	//3006M
			0.08,	//5RND 762
			0.07,	//HAND GRENADE
			0.15,	//9MM STANDARD
			0.02,	//20RND 762
			0.05,	//10RND GRENDEL
			0.05,	//45 JHP
			0.11,	//45 ACP
			0.15,	//SMOKE GRENADE RED
			0.05,	//HOLO
			0.12,	//BANDOLIER OLIVE
			0.17,   //TENT BLUEPRINT
			0.14,   //CAMO NET BLUEPRINT
			0.03,   //TAC VEST
			0.03,   //GEMTECH 9MM SUPPR
			0.03,   //SURGERY KIT
			0.04,   //30rnd 5.45x39 Hollow Point magazine
			0.03,    //30rnd 5.45x39 Tracer magazine
			0.01,	//STANAG M855A1
			0.05,	//StanagMK262
			0.11,	//StanagOLD
			0.07	//Bandolier Mid
		};
	};
	
	class MilitarySpecialWpn: Default {
		lootChance = 0.35; 
		lootPos[] = {};
		itemType[] =	{
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
			{"BP_SUD_AK108","weaponA"},
			{"BP_SUD_AK109","weaponA"}			
		};
		itemChance[] =	{
			0.01,	//M4_300MK
			0.12,	//M9
			0.01,	//G18
			0.10,	//G17
			0.22,	//1911
			0.07,	//AK74m	
			0.07,	//AK107	
			0.09,	//M4A1
			0.07,	//M4A1
			0.15,	//BENELLI
			0.01,	//AKM
			0.05,	//AR10
			0.05,	//SVT40
			0.01,	//1911DES
			0.02,	//M4300
			0.02,   //M4300K
			0.25,	//AKS74U
			0.02,	//SVT40 PSO
			0.07,    //AR15
			0.04,	//AK108
			0.02	//AK109
		};
	};
	
	class MilitaryTower: Default {
		lootChance = 0.70;
		lootPos[] = {};
		itemType[] =	{
			{"BP_SVD","weapon"},
			{"BP_AR10","weapon"},
			{"BP_SA582","weapon"},
			{"BP_M16OLD","weapon"},
			{"BP_R700","weaponA"},
			{"BP_M24Des","weaponA"},
			{"BP_PSO1","toolbelt"},
			{"optic_Arco","toolbelt"},
			{"BP_5Rnd_762mk316_Mag","magazine"},
			{"BP_10Rnd_762x51_Mag","magazine"},
			{"BP_762x54_SVD","magazine"},
			{"BP_5Rnd_Mauser_Mag","magazine"},
			{"BP_20Rnd_65x47_Lapua","magazine"},
			{"BP_545x39_HP_30rnd","magazine"},
			{"BP_545x39_30rnd_Ball_T","magazine"},
			{"BP_545x39_7N22","magazine"},
			{"BP_10Rnd_303_JSP_Mag","magazine"},
			{"BP_762x54_7N1_10rnd","magazine"},
			{"BP_762x54_7N13_10rnd","magazine"},
			{"BP_556x45_Stanag_Tracer","magazine"}
			
		};
		itemChance[] =	{
			0.02,	//SVD
			0.07,   //AR10
			0.05,   //AKM RIS
			0.11,   //BP_M16 OLD
			0.07,   //R700
			0.02,   //M24Des
			0.05,	//PSO1
			0.05,	//ARCO
			0.03,	//5RND 7.62 MK316
			0.09,   //10RND 7.62
			0.05,   //SVD Magazine
			0.05,   //MAUSER MAG
			0.01,    //20RND LAPUA
			0.06,   //30rnd 5.45x39 Hollow Point magazine
			0.06,    //30rnd 5.45x39 Tracer magazine
			0.05,   //545x39_7N22
			0.07,    //10Rnd_303_JSP_Mag
			0.01,   //BP_762x54_7N1_10rnd
			0.01,    //762x54_7N13_10rnd
			0.06   //556x45_Stanag_Tracer
		};
	};
	
	class MilitaryRangerAcc: Default {
		lootChance = 0.50;
		lootPos[] = {};
		itemType[] =	{
			{"optic_Aco","toolbelt"},
			{"BP_gemtech45","toolbelt"},
			{"BP_gemtech9","toolbelt"},
			{"optic_Hamr","toolbelt"},
			{"BP_Bergen_blk","backpack"},
			{"BP_Carryall_oucamo","backpack"},
			{"BP_Carryall_blk","backpack"},		
			{"BP_Bergen_drt","backpack"},
			{"BP_Bergen_grs","backpack"},
			{"BP_Bergen_stn","backpack"},
			{"BP_Bergen_tre","backpack"},
			{"BP_Bergen_mcamo","backpack"},
			{"BP_Bergen_sgg","backpack"},
			{"BP_Bergen_rgr","backpack"},	
			{"BP_StoneGhillie","uniform"},
			{"BP_TreeGhillie","uniform"},
			{"BP_DirtGhillie","uniform"},
			{"U_B_Wetsuit_BP","uniform"},
			{"U_BG_Guerilla3_1_BP","uniform"},
			{"U_BG_Guerilla3_2_BP","uniform"},
			{"U_BG_leader_BP","uniform"},
			{"U_BG_Guerilla1_1_BP","uniform"},			
			{"V_PlateCarrierIA1_dgtl_BP","vest"},
			{"BP_optic_ACOG","toolbelt"},
			{"BP_CPad","toolbelt"},
			{"BP_AFG","toolbelt"},
			{"V_TacVest_oli_BP","vest"},
			{"U_B_Wetsuit_BP","uniform"},
			{"Rangefinder","weaponNA"},
			{"BP_M3A2","toolbelt"},
			{"BP_556x45_StanagM855A1","magazine"},
			{"BP_556x45_StanagMK262","magazine"},
			{"BP_556x45_StanagSD","magazine"},
			{"BP_556x45_Stanag_Tracer","magazine"},
			{"BP_5Rnd_762m80a1_Mag","magazine"},
			{"HandGrenade","magazine"},
			{"BP_1Rnd_HE_shell","magazine"},
			{"BP_UGL_FlareGreen","magazine"},
			{"BP_5Rnd_300M_Mag","magazine"},
			{"BP_20Rnd_65x47_Lapua","magazine"},
			{"BP_10Rnd_65x47_Lapua","magazine"},
			{"BP_10Rnd_65x39","magazine"},
			{"ItemKnife","magazine"},
			{"BP_5Rnd_3006_Mag","magazine"},
			{"Waterbot","magazine"},
			{"BP_Arrow_Mag","magazine"},
			{"BP_Arrow_Rambo","magazine"},
			{"BP_Arrow_Fire","magazine"},
			{"BP_Arrow_Tranq","magazine"},
			{"BP_Arrow_Poison","magazine"},
			{"BP_10Rnd_303_JSP_Mag","magazine"},
			{"BP_762x54_7N1_10rnd","magazine"},
			{"BP_762x54_7N13_10rnd","magazine"},
			{"BP_556x45_Stanag_Tracer","magazine"},
			{"V_BandollierB_rgr_BP","vest"},
			{"BP_100Rnd_127x99_box","magazine"}
		};
		itemChance[] =	{
			0.05,	//OPTIC ACO
			0.03,	//GEMTECH 45
			0.03,	//GEMTECH 9MM
			0.03,	//HAMR OPTIC
            0.02,   //BERGEN BLACK
			0.02, 	//CARRYALL URBAN
            0.02,   //CARRYALL BLACK	
			0.04,   //BERGEN 
			0.04,   //BERGEN 
			0.04,   //BERGEN 
			0.04,   //BERGEN 
			0.04,   //BERGEN 
			0.04,   //BERGEN 
			0.04,   //BERGEN
			0.03,	//STONE GHILLIE
			0.03,	//TREE GHILLIE
			0.03,	//DIRT GHILLIE
			0.03,	//WETSUIT CLOTHING
			0.03,	//Guerilla Faded
			0.03,	//Guerilla Shit Green Sweater
			0.03,	//Guerilla Leader
			0.03,	//Guerilla Khaki Camo	
			0.01,	//PLATE CARRIER
			0.05,	//ACOG
			0.02,	//CHEEKPIECE
			0.03,	//AFG
			0.03,	//TAC VEST
			0.01,	//WETSUIT
			0.01,	//RANGEFINDER
			0.02,	//M3A2
			0.05,	//STANAG M855A1
			0.05,	//StanagMK262
			0.05,	//StanagSD
			0.05,	//Stanag_Tracer
			0.02,	//5RND 762M80A1
			0.04,	//HAND GRENADE
			0.05,	//HE GRENADE M203
			0.10,	//30RND 9MM
			0.03,	//300M
			0.04,	//20RND LAPUA
			0.05,	//10RND LAPUA
			0.07,	//10RND GRENDEL
			0.07,	//KABAR
			0.05,	//3006M
			0.04,	//WATER BOTTLE
			0.25,	//Arrow
			0.15,	//Arrow Rambo
			0.25,	//Arrow Fire
			0.25,	//Arrow Tranq
			0.10,	//Arrow Poison
			0.02,    //BP_10Rnd_303_JSP_Mag
			0.02,   //BP_762x54_7N1_10rnd
			0.02,    //BP_762x54_7N13_10rnd
			0.01,   //BP_556x45_Stanag_Tracer
			0.10, 	//Bandolier Mid
			0.07	//100RND BOX GRENDEL
		};
	};
	
	class MilitaryRangerWpn: Default {
		lootChance = 0.50;
		lootPos[] = {};
		itemType[] =	{
			{"BP_ATMine_Mag","magazine"},
			//{"BP_TripMine_Mag","magazine"},
			{"BP_M4_300MK","weapon"},
			{"BP_MX_SW","weapon"},
			{"BP_Minimi_HG","weapon"},
			{"BP_FNPTac45","weaponA"},
			{"BP_G18","weapon"},
			{"BP_M4","weaponA"},
			{"BP_FNFAL","weapon"},
			{"BP_FNFALK","weapon"},
			{"BP_M21","weaponA"},
			{"BP_Mk12mod1","weaponA"},
			{"BP_1911MDes","weaponA"},	
			{"BP_M40a3","weaponA"},
			{"BP_MP5","weapon"},
			{"BP_MX_black","weapon"},
			{"BP_M25WF","weaponA"},
			{"BP_Benelli","weapon"},
			{"BP_G36DMR","weapon"},
			{"BP_M16A4","weapon"},
			{"BP_DMR_Officer","weapon"},
			{"BP_M14RIS","weapon"},
			{"BP_MXM_black","weapon"},
			{"BP_M4B2","weapon"}
		};
		itemChance[] =	{
			0.01,	//ATMine
			//0.01,	//TripMine
			0.03,	//M4_300MK
			0.02,	//MXSW
			0.02,	//M249
			0.01,	//FNPTAC
			0.06,	//G18
			0.10,	//M4A1
			0.09,	//FNFAL
			0.03,	//FNFALK
			0.01, 	//M21
			0.02, 	//MK12MOD1
			0.02, 	//1911DES
			0.02,	//M40A3
			0.13,   //MP5
			0.01,	//MX SPECOPS
			0.01,	//M25WF
			0.07,	//BENELLI
			0.01,	//G36DMR
			0.05,	//M16A4
			0.01,	//m14DMR
			0.01,	//m14DMRRIS
			0.01,	//MXM BLACK
			0.03	//block4
		};
	};
	
	class HotelAcc: Default {
		lootChance = 0.50;
		lootPos[] = {};
		itemType[] =	{
			{"BP_gemtech45","toolbelt"},
			{"BP_gemtech9","toolbelt"},
			{"BP_CZSup_br","toolbelt"},
			{"ItemGPS","toolbelt"},
			{"BP_PSO1","toolbelt"},
			{"BP_Unertl32x","toolbelt"},
			{"BP_Bergen_mcamo","backpack"},
			{"BP_Bergen_drt","backpack"},
			{"BP_Bergen_grs","backpack"},
			{"BP_Bergen_stn","backpack"},
			{"BP_Bergen_tre","backpack"},
			{"BP_Bergen_sgg","backpack"},
			{"BP_Bergen_rgr","backpack"},
			{"BP_StoneGhillie","uniform"},
			{"BP_TreeGhillie","uniform"},
			{"BP_DirtGhillie","uniform"},
			{"U_B_Wetsuit_BP","uniform"},
			{"U_BG_Guerilla3_1_BP","uniform"},
			{"U_BG_Guerilla3_2_BP","uniform"},
			{"U_BG_leader_BP","uniform"},
			{"U_BG_Guerilla1_1_BP","uniform"},
			{"BP_Carryall_mcamo","backpack"},
			{"BP_Carryall_blk","backpack"},					
			{"BP_optic_ACOG","toolbelt"},
			{"BP_NXS","toolbelt"},
			{"BP_flashlight","toolbelt"},
			{"V_TacVest_oli_BP","vest"},
			{"Rangefinder","weaponNA"},
			{"BP_M3A2","toolbelt"},
			{"BP_20Rnd_765x17","magazine"},
			{"BP_5Rnd_762mk316_Mag","magazine"},
			{"HandGrenade","magazine"},
			{"BP_1Rnd_HE_shell","magazine"},
			{"BP_93x64_SVDK","magazine"},
			{"BP_5Rnd_300M_Mag","magazine"},
			{"BP_33Rnd_9x19OVP","magazine"},
			{"ItemKnife","magazine"},
			{"BP_5Rnd_3006M_Mag","magazine"},
			{"BP_5Rnd_223BTHP_Mag","magazine"},
			{"BP_545x39_HP_30rnd","magazine"},
			{"BP_545x39_30rnd_Ball_T","magazine"},
			{"BP_20Rnd_65x47_Lapua","magazine"},
			{"BP_10Rnd_65x47_Lapua","magazine"},
			{"BP_10Rnd_65x39","magazine"},			
			{"BP_545x39_7N22","magazine"},
			{"BP_10Rnd_303_JSP_Mag","magazine"},
			{"BP_762x54_7N1_10rnd","magazine"},
			{"BP_762x54_7N13_10rnd","magazine"},
			{"BP_556x45_StanagM855A1","magazine"},
			{"BP_556x45_StanagMK262","magazine"},
			{"BP_556x45_StanagSD","magazine"},
			{"BP_556x45_Stanag_Tracer","magazine"},
			{"V_BandollierB_rgr_BP","vest"},
			{"BP_Arrow_Mag","magazine"},
			{"BP_Arrow_Rambo","magazine"},
			{"BP_Arrow_Fire","magazine"},
			{"BP_Arrow_Tranq","magazine"},
			{"BP_Arrow_Poison","magazine"}
		};
		itemChance[] =	{
			0.02,	//GEMTECH 45
			0.02,	//GEMTECH 9MM
			0.01,	//CZSUPBR
			0.01,	//GPS
			0.03,	//PSO1
			0.04,	//UNERTL32X
            0.02,   //BERGEN BLACK
			0.02,   //BERGEN 
			0.02,   //BERGEN 
			0.02,   //BERGEN 
			0.02,   //BERGEN 
			0.02,   //BERGEN 
			0.02,   //BERGEN
			0.01,	//STONE GHILLIE
			0.01,	//TREE GHILLIE
			0.01,	//DIRT GHILLIE
			0.01,	//WESTSUIT CLOTHING
			0.01,	//Guerilla Faded
			0.01,	//Guerilla Shit Green Sweater
			0.01,	//Guerilla Leader
			0.01,	//Guerilla Khaki Camo		
			0.02, 	//CARRYALL URBAN
            0.02,   //CARRYALL BLACK
			0.08,	//ACOG
			0.01,	//NXS
			0.12,	//FLASHLIGHT ATTACHMENT
			0.02,	//TAC VEST
			0.02,	//WETSUIT
			0.01,	//RANGEFINDER
			0.02,	//M3A2
			0.08,	//20RND 762BROWNING
			0.05,	//5RND 762MK316
			0.04,	//HAND GRENADE
			0.06,	//HE GRENADE M203
			0.02,	//BRENNEKE
			0.02,	//300M
			0.04,	//33RND OVP
			0.15,	//KABAR
			0.03,	//3006M
			0.08,	//223BTHP
			0.10,   //30rnd 5.45x39 Hollow Point magazine
			0.10,    //30rnd 5.45x39 Tracer magazine
			0.01,	//20RND LAPUA
			0.05,	//10RND LAPUA
			0.10,	//10RND GRENDEL			
			0.04,   //BP_545x39_7N22
			0.12,    //303_JSP_Mag
			0.04,   //762x54_7N1_10rnd
			0.02,    //762x54_7N13_10rnd
			0.03,	//STANAG M855A1
			0.05,	//StanagMK262
			0.07,	//StanagSD
			0.07,	//Stanag_Tracer
			0.05,	//Bandolier Mid
			0.08,	//Arrow_Mag
			0.03,	//Arrow_Rambo
			0.08,	//Arrow_Fire
			0.08,	//Arrow_Tranq
			0.08	//Arrow_Poison
		};
	};
	
	class HotelWpn: Default {
		lootChance = 0.50;
		lootPos[] = {};
		itemType[] =	{
			{"BP_ATMine_Mag","magazine"},
			//{"BP_TripMine_Mag","magazine"},
			//{"BP_SR25","weaponA"},
			{"BP_SA61","weapon"},
			{"BP_G36C","weapon"},
			{"BP_SA58","weapon"},
			{"BP_R700","weaponA"},
			{"BP_WinCoy2","weaponA"},
			{"BP_Uzi","weapon"},
			{"BP_M21","weaponA"},
			{"BP_FNFALK","weapon"},
			{"BP_SVDK","weaponA"},
			{"BP_Win70","weaponA"},
			{"BP_Tavor","weaponA"},	
			{"BP_AR10","weapon"},
			{"BP_M16A4","weaponA"},
			{"BP_M9Tac","weaponA"},
			{"BP_M4_300","weaponA"},
			{"BP_Crossbow","weapon"},
			{"BP_Crossbow_DigitCamo","weaponA"},
			{"BP_M4B2","weapon"}
		};
		itemChance[] =	{
			0.01,	//ATMine
			//0.01,	//TripMine
			//0.01,	//SR25
			0.07,	//SA61
			0.08,	//SA58
			0.11,	//SA58
			0.10,	//R700
			0.10,	//R7 CDL
			0.07,   //UZI
			0.00, 	//M21
			0.04, 	//FNFALK
			0.02, 	//SVDK
			0.02, 	//WIN70
			0.05, 	//WuSE TAVOR
			0.06, 	//AR10
			0.07,	//M16A4
			0.01,   //M9TAC
			0.04,	//M4 BLACKOUT
			0.05,	//Crossbow
			0.05,	//Crossbow
			0.05	//block4
		};
	};

	class WindmillAcc: Default {
		lootChance = 0.50;
		lootPos[] = {};
		itemType[] =	{
			{"BP_8Rnd_45gov","magazine"},
			{"Rangefinder","weaponNA"},
			{"ItemKnife","magazine"},
			{"ItemMatchbox","magazine"},
			{"ItemCompass","toolbelt"},
			{"ItemMap","toolbelt"},
			{"BP_CZst_br","toolbelt"},
			{"BP_CZmod_br","toolbelt"},
			{"BP_R7P","toolbelt"},
			{"BP_Unertl32x","toolbelt"},
			{"BP_VX3","toolbelt"},
			{"BP_5Rnd_250_Mag","magazine"},
			{"BP_5Rnd_300_Mag","magazine"},
			{"BP_15Rnd_9x19OVP","magazine"},
			{"BP_5Rnd_3006_Mag","magazine"},
			{"BP_5Rnd_762x51_Mag","magazine"},
			{"BP_5Rnd_Mauser_Mag","magazine"},
			{"BP_10Rnd_65x39","magazine"},
			{"BP_10Rnd_303_Mag","magazine"},
			{"V_BandollierB_oli_BP","vest"},
			{"BP_M8","toolbelt"}
		};
		itemChance[] =	{
			0.04,   //45GOV
			0.01,   //RANGEFINDER
			0.16,   //KNIFE
			0.14,   //MATCHBOX
			0.13,   //COMPASS
			0.13,   //MAP
			0.07,   //CZ STANDARD BARREL
			0.02,   //CZ PRECISION BARREL
			0.02,   //REM7 PRECISION BARREL
			0.01,   //UNERTL 32X
			0.01,   //VX3
			0.04,   //.22-250
			0.01,   //300 WINMAG
			0.07,   //9MM OVP
			0.08,   //30-06 MAG
			0.02,   //5RND 762
			0.01,   //5RND 762
			0.02,   //10RND GRENDEL
			0.10,    //10RND 303 BRIT
			0.07,	//Bandolier Mid
			0.02   //S&W500 Scope
		};
	};
	
	class WindmillWpn: Default {
		lootChance = 0.50;
		lootPos[] = {};
		itemType[] =	{
			{"BP_1911","weapon"},
			{"BP_SW45","weapon"},
			{"BP_SUD_AK74M","weapon"},
			{"BP_Rhino","weapon"},
			{"BP_Ruger","weaponA"},
			{"BP_1886S","weaponA"},
			{"BP_1866C","weapon"},
			{"BP_LeeEnfield","weapon"},
			{"BP_LeeEnfield2","weaponA"},
			{"BP_LeeEnfield_old","weapon"},
			{"BP_HA550","weaponA"},
			{"BP_MC550","weaponA"},
			{"BP_WinCoy2","weaponA"},
			{"BP_Rem6","weaponA"},
			{"BP_Kar98","weaponA"},
			{"BP_Win70","weaponA"},
			{"BP_Win70F","weaponA"},
			{"BP_CZ550_old","weaponA"}

		};
		itemChance[] =	{
			0.06,   //M1911
			0.13,   //SW45
			0.08,   //AK74M
			0.02,   //RHINO
			0.09,   //RUGER
			0.01,   //1886S
			0.02,   //1886C
			0.05,   //ENFIELD MKIII
			0.05,   //ENFIELD SCOPED
			0.15,   //ENFIELD OLD
			0.01,   //HA550
			0.02,   //MC550
			0.02,   //REM7 CDL
			0.02,   //REM6
			0.02,   //KAR98
			0.02,   //WINCHESTER MODEL 70
			0.01,   //WINCHESTER MODEL 70 SUPER GRADE
			0.05    //CZ550 OLD
		};
	};

	class Castle: Default {
		lootChance = 0.75;
		lootPos[] = {};
		itemType[] =	{		
			{"","military"},
			{"BP_Medicalbox","object"},
			{"AmmoBoxSmall_762","object"},
			{"V_TacVest_camo","vest"},
			{"Rangefinder","weaponNA"},
			{"BP_G18","weapon"},
			{"","specialammorifle"},
			{"","survival"},
			{"","vehicle"},
			{"BP_Bergen_rgr","backpack"}, 
			{"BP_Kitbag_sgg","backpack"}, 
			{"BP_Bergen_rgr","backpack"}, 
			{"BP_FieldPack_ocamo","backpack"}
			
		};
		itemChance[] =	{
			0.15,	//MILITAR
			0.03,	//CAJA MEDICA
			0.03,	//AMMO BOX 7.62
			0.02,	//CAMO CLOTHING
			0.01,	//Telemetro
			0.01,	//G18
			0.06,   //SPECIAL AMMO
			0.15,   //SURVIVAL LOOT
			0.09,	//VEHICLE LOOT
			0.04, 	//ALICE PACK
			0.04, 	//ASSAULT PACK
			0.03,   //BRITISH BACKPACK
			0.01	//CZECH BACKPACK
		};
	};
	
	class SurvivorCrate: Default {
		lootChance = 0.75;
		lootPos[] = {};
		itemType[] =	{		
			{"BP_M84_Flash","uniform"},
			{"BP_m21","weapon"},
			{"BP_Kar98","weaponA"},
			{"BP_LeeEnfieldK","weaponA"},
			{"BP_Paramilitary_Jacket_Uniform","uniform"},  //Paramilitary Garb (Jacket)
			{"BP_TripMine_Mag","magazine"},
			{"HandGrenade","magazine"},
			{"V_TacVest_camo","vest"},
			{"V_Chestrig_blk_BP","vest"},
			{"Rangefinder","weaponNA"},
			{"BP_CPad","toolbelt"},
			{"BP_R7Sup","toolbelt"},
			{"BP_CZSup_br","toolbelt"},
			{"BP_m9qd","toolbelt"},
			{"optic_mrco","toolbelt"}, 
			{"optic_Aco","toolbelt"}, 
			{"BP_AK_ACO","toolbelt"}, 
			{"BP_VX3","toolbelt"},
			{"MeleePickaxe","weapon"},
			{"ItemMorphine","magazine"},
			{"ItemFieldDressing","magazine"},
			{"ItemAntibiotic","magazine"},
			{"ItemSurgeryKit","toolbelt"},
			{"ItemAdrenaline","magazine"},
			{"ItemKnife","magazine"},
			{"ItemMatchbox","magazine"},
			{"ItemToiletPaper","magazine"},
			{"ItemGlue","magazine"},
			{"ItemDuctTape","magazine"},
			{"ItemSoda1","magazine"},
			{"ItemSoda2","magazine"},
			{"ItemSoda3","magazine"},
			{"ItemSoda4","magazine"},
			{"ItemSoda5","magazine"},
			{"ItemCereal4","magazine"},
			{"ItemCereal5","magazine"},
			{"ItemCereal6","magazine"},
			{"ItemCan1","magazine"},
			{"ItemCan2","magazine"},
			{"ItemCan3","magazine"},
			{"ItemCan4","magazine"},
			{"ItemCan5","magazine"},
			{"BP_10Rnd_303_JSP_Mag","magazine"},
			{"BP_5Rnd_Mauser_Mag","magazine"},
			{"BP_762x54_7N13_10rnd","magazine"},
			{"BP_762x54_7N1_10rnd","magazine"}
		};
		itemChance[] =	{
			0.71,	//M21
			0.21,	//M21
			0.02,	//Kar98 Scoped
			0.02,   //ENFIELD SCOPED
			0.01,   //Paramilitary Garb (Jacket)
			0.11,	//Tripmine
			0.01,	//HandGrenade
			0.01,	//CAMO vest
			0.01,	//V_Chestrig_blk_BP
			0.01,	//Rangefinder
			0.02,	//CheekPad
			0.02,	//.223 Barrel w/superssor
			0.01,	//CZ Precision Barrel w/Suppressor
			0.01,	//9mm Tactical QD Suppressor
			0.02, 	//Mrco
			0.03, 	//Aco
			0.03, 	//AK_ACO
			0.03, 	//VX3
			0.03, 	//Axe
			0.05,   //Morphine
			0.05,	//FIELD DRESSING
			0.05,	//ANTIBIOTIC
			0.02,   //SURGERY KIT
			0.03,   //Adrenaline
			0.04,	//KNIFE
			0.04,	//MATCHES
			0.04,	//TOILET PAPER
			0.03,	//GLUE
			0.03,	//DUCT TAPE
			0.01,	//Soda
			0.01,	//Soda
			0.01,	//Soda
			0.01,	//Soda
			0.01,	//Soda
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.01,	//FOOD
			0.05,	//303_JSP_Mag
			0.05,	//Mauser_Mag
			0.04,	//762x54_7N13
			0.04,	//762x54_7N1
		};
	};
	
	class SuicideCrate: Default {
		lootChance = 0.50;
		lootPos[] = {};
		itemType[] =	{
			{"BP_AWSM","weapon"},
			{"BP_SVDK_DES","weaponA"},
			{"BP_arifle_ARX_ghex_F","weapon"},  //Type 115 Green Hex
			{"BP_arifle_ARX_hex_F","weapon"},  //Type 115 Hex 
			{"BP_SMG_05_F","weapon"},  //Protector
			{"BP_Guarilla_Leader","uniform"},
			{"V_TacVest_gen_BP","vest"},   //Gendarmerie Vest
			{"BP_762Muzzle","toolbelt"},
			{"optic_Hamr","toolbelt"},
			{"BP_VX3","toolbelt"},
			{"BP_NXS","toolbelt"},
			{"BP_L14X","toolbelt"},
			{"BP_M3AMRAD","toolbelt"},
			{"BP_M3AN","toolbelt"},
			{"BP_PS22","toolbelt"},
			{"BP_PSO35","toolbelt"},
			{"Rangefinder","weaponNA"},
			{"BP_10Rnd_338Lapua_Mag","magazine"},
			{"BP_10Rnd_300_Mag","magazine"},
			{"BP_93x64_SVDK","magazine"},
			{"BP_10Rnd_762mk316_Mag","magazine"},
			{"BP_5Rnd_762m80a1_Mag","magazine"},
			{"BP_556x45_StanagM855A1","magazine"},
			{"BP_556x45_StanagMK262","magazine"},
			{"BP_556x45_StanagSD","magazine"},
			{"BP_556x45_Stanag_Tracer","magazine"},
			{"ItemBook1","magazine"},
			{"ItemBook2","magazine"},
			{"ItemBook3","magazine"},
			{"ItemVideoTape","magazine"},
			{"ItemZipDisk","magazine"},
			{"HandGrenade","magazine"},
			{"BP_10Rnd_50BW_Mag_F","magazine"},
			{"BP_100Rnd_127x99_box","magazine"},
			{"BP_ATMine_Mag","magazine"},
			{"BP_M4B2","weapon"}
		};
		itemChance[] =	{
			0.01,	//BP_AWSM
			0.01,	//BP_SVDK
			0.01,	//Type 115 Green Hex
			0.01,	//Type 115 Hex
			0.01,	//Protector
			0.01,	//Guerilla Leader
			0.01,	//Gendarmerie Vest
			0.01,	//7.62 Muzzle
			0.03,   //optic_Hamr
			0.03,   //BP_VX3
			0.02,   //BP_NXS
			0.03,   //BP_L14X
			0.03,   //BP_M3AMRAD
			0.03,   //BP_M3AN
			0.03,   //BP_PS22
			0.01,	//PSO35
			0.01,   //RANGEFINDER
			0.02,	//338Lapua AMMO
			0.03,	//300_Mag AMMO
			0.03,	//SVDK AMMO
			0.02,   //10Rnd_762mk316_Mag
			0.04,   //5Rnd_762m80a1_Mag
			0.03,	//STANAG M855A1
			0.03,	//StanagMK262
			0.03,	//StanagSD
			0.03,	//Stanag_Tracer
			0.02,	//TRASH
			0.02,	//TRASH
			0.02,	//TRASH
			0.02,	//TRASH
			0.02,	//TRASH
			0.02,	//NADE
			0.01,   //10Rnd_50BW_Mag
			0.01,   //50Cal Box
			0.01,	//ATMine
			0.04	//block4
		};
	};
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
/////////////////////////////////////////////////////////////////////////////////////////////////BYSTRICA LOOT TABLES//////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
	class CivilianAcc: Default {
		lootChance = 0.37;
		lootPos[] = {};
		itemType[] =	{
			{"optic_Aco","toolbelt"},
			{"optic_mrco","toolbelt"},
			{"ItemMorphine","magazine"},
			{"ItemKnife","magazine"},
			{"ItemMap","toolbelt"},
			{"BP_flashlight","toolbelt"},
			{"ItemDuctTape","magazine"},
			{"ItemWaterTape","magazine"},
			{"BP_5Rnd_300AAC_Mag","magazine"},
			{"ItemBandage","magazine"},
			{"BP_8Rnd_Slug","magazine"},
			{"BP_16Rnd_9x21_Mag","magazine"},
			{"BP_5Rnd_3006_Mag","magazine"},
			{"BP_10Rnd_303_Mag","magazine"},
			{"BP_7Rnd_45acp","magazine"},
			{"BP_556old_Stanag","magazine"},
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
			{"BlueprintCamoNet","magazine"},
			{"BlueprintCache1","magazine"},
			{"V_Chestrig_rgr_BP","vest"},
			{"BP_gemtech9","toolbelt"}
			
		};
		itemChance[] =	{
			0.05,	//ACO OPTIC
			0.01,	//HAMR OPTIC
			0.05,	//BINOCULARS
			0.10,	//KNIFE
			0.15,	//MAP
			0.09,	//FLASHLIGHT ATTACH
			0.05,	//DUCT TAPE
			0.05,	//WATER TAPE
			0.07,	//BANDAGE
			0.01,	//300 BLACKOUT
			0.05,	//BENELLI SLUG
			0.08,	//9MM MAG
			0.01,	//3006 MAG
			0.03,	//303B
			0.03,	//7RND 45ACP
			0.04,	//STANAG
			0.15,	//PAINKILLERS
			0.02,	//SMOKE
			0.03, 	//KIT SAGE
			0.02, 	//KIT CBR
			0.02,   //KIT CAMO
			0.05, 	//FIELD BLACK
			0.05, 	//FIELD HEX
			0.05,   //FIELD URBAN
            0.05,   //FIELD TAN			
			0.12,	//BANDOLIER OLIVE
			0.07,   //TENT BLUEPRINT
			0.06,   //CAMO NET BLUEPRINT
			0.06,   //CRATE BLUEPRINT
			0.01,   //TAC VEST
			0.01    //GEMTECH 9MM SUPPR
		};
	};	
	class CivilianWpn: Default {
		lootChance = 0.37;
		lootPos[] = {};
		itemType[] =	{
			{"BP_m9","weapon"},
			{"BP_FamasSurb_HG","weapon"},	
            {"BP_M16OLD","weapon"},
			{"BP_m9c","weapon"},
			{"BP_SW45","weapon"},
			{"BP_SUD_AK74M","weapon"},
			{"BP_AK74U","weapon"},
			{"BP_SUD_AK105","weapon"},
			{"BP_M4Old","weapon"},
			{"BP_M4","weaponA"},
			{"BP_M4K","weapon"},
			{"BP_Benelli","weapon"},
			{"BP_g17","weapon"},
			{"BP_MP7","weapon"},
			{"BP_R300","weaponA"},
			{"BP_Mp7_urb","weapon"},
			{"BP_LeeEnfield2","weaponA"}
			
		};
		itemChance[] =	{
			0.07,	//M9
			0.01,	//FAMAS
			0.10,	//FAMAS
			0.05,	//M9 CAMO
			0.02,	//M9 CAMO
			0.09,	//AK74m	
			0.07,	//AKS74U	
			0.03,	//AK105
			0.07,	//DM M4
			0.02,	//DM M4
			0.02,	//M4K
			0.12,	//BENELLI
			0.07,	//G17
			0.05,	//MP7
			0.05,	//MP7
			0.03,	//MP7 Urban
			0.03	//ENFIELD SCOPED
		};
	};	
	class CastleAcc: Default {
		lootChance = 0.50;
		lootPos[] = {};
		itemType[] =	{
			{"BP_8Rnd_45gov","magazine"},
			{"Rangefinder","weaponNA"},
			{"ItemKnife","magazine"},
			{"ItemMatchbox","magazine"},
			{"ItemCompass","toolbelt"},
			{"ItemMap","toolbelt"},
			{"BP_CZmod_br","toolbelt"},
			{"BP_5Rnd_300_Mag","magazine"},
			{"BP_15Rnd_9x19OVP","magazine"},
			{"BP_5Rnd_3006_Mag","magazine"},
			{"BP_5Rnd_762x51_Mag","magazine"},
			{"BP_10Rnd_303_Mag","magazine"}
		};
		itemChance[] =	{
			0.04,   //440 CORBON
			0.01,   //RANGEFINDER
			0.16,   //KNIFE
			0.14,   //MATCHBOX
			0.13,   //COMPASS
			0.13,   //MAP
			0.02,   //CZ PRECISION BARREL
			0.01,   //300 WINMAG
			0.07,   //9MM OVP
			0.08,   //30-06 MAG
			0.02,   //5RND 762
			0.10    //10RND 303 BRIT
		};
	};	
	class CastleWpn: Default {
		lootChance = 0.50;
		lootPos[] = {};
		itemType[] =	{
			{"BP_1911","weapon"},
			{"BP_Rhino","weapon"},
			{"BP_LeeEnfield","weapon"},
			{"BP_LeeEnfield2","weaponA"},
			{"BP_LeeEnfield_old","weapon"},
			{"BP_Win70","weaponA"},
			{"BP_Win70F","weaponA"}			
		};	
		itemChance[] =	{
			0.05,   //M1911
			0.02,   //RHINO
			0.05,   //ENFIELD MKIII
			0.02,   //ENFIELD SCOPED
			0.15,   //ENFIELD OLD
			0.02,	//WINCHESTER MODEL 70
			0.01	//WINCHESTER MODEL 70 SUPER GRADE			
		};
	};		
	class DeerstandAcc: Default {
		lootChance = 0.50;
		lootPos[] = {};
		itemType[] =	{
			{"BP_8Rnd_45gov","magazine"},
			{"Rangefinder","weaponNA"},
			{"ItemKnife","magazine"},
			{"ItemMatchbox","magazine"},
			{"ItemCompass","toolbelt"},
			{"ItemMap","toolbelt"},
			{"BP_CZmod_br","toolbelt"},
			{"BP_5Rnd_300_Mag","magazine"},
			{"BP_15Rnd_9x19OVP","magazine"},
			{"BP_5Rnd_3006_Mag","magazine"},
			{"BP_5Rnd_762x51_Mag","magazine"},
			{"BP_10Rnd_303_Mag","magazine"}
		};
		itemChance[] =	{
			0.04,   //440 CORBON
			0.01,   //RANGEFINDER
			0.16,   //KNIFE
			0.14,   //MATCHBOX
			0.13,   //COMPASS
			0.13,   //MAP
			0.02,   //CZ PRECISION BARREL
			0.01,   //300 WINMAG
			0.07,   //9MM OVP
			0.08,   //30-06 MAG
			0.02,   //5RND 762
			0.10    //10RND 303 BRIT
		};
	};	
	class DeerstandWpn: Default {
		lootChance = 0.50;
		lootPos[] = {};
		itemType[] =	{
			{"BP_1911","weapon"},
			{"BP_Rhino","weapon"},
			{"BP_LeeEnfield","weapon"},
			{"BP_LeeEnfield2","weaponA"},
			{"BP_LeeEnfield_old","weapon"},
			{"BP_HA550","weaponA"},
			{"BP_MC550","weaponA"},
			{"BP_CZ550_old","weaponA"}

		};
		itemChance[] =	{
			0.05,   //M1911
			0.02,   //RHINO
			0.05,   //ENFIELD MKIII
			0.02,   //ENFIELD SCOPED
			0.15,   //ENFIELD OLD
			0.01,   //HA550
			0.02,   //MC550
			0.05    //CZ550 OLD
		};
	};
	class CampAcc: Default {
		lootChance = 0.50;
		lootPos[] = {};
		itemType[] =	{
			{"optic_Aco","toolbelt"},
			{"optic_holosight","toolbelt"},			
			{"BP_16Rnd_9x21_Mag","magazine"},			
			{"BP_7Rnd_45acp","magazine"},
			{"BP_12Rnd_45JHP","magazine"},			
			{"BP_556x45_Stanag","magazine"},
			{"BP_200Rnd_556x45_Minimi","magazine"},			
			{"BP_gemtech45","toolbelt"},
			{"optic_Hamr","toolbelt"},
			{"BP_Bergen_sgg","backpack"},
			{"BP_Bergen_mcamo","backpack"},
			{"BP_Bergen_rgr","backpack"},
			{"BP_Bergen_blk","backpack"},			
			{"BP_Carryall_oucamo","backpack"},
			{"BP_Carryall_blk","backpack"},
			{"BP_Carryall_ocamo","backpack"},
			{"BP_Carryall_mcamo","backpack"},				
			{"V_PlateCarrierIA1_dgtl_BP","vest"},
			{"BP_optic_ACOG","toolbelt"},
			{"BP_optic_HWS_G33","toolbelt"},
			{"BP_flashlight","toolbelt"},
			{"V_TacVest_oli_BP","vest"},
			{"Rangefinder","weaponNA"},
			{"BP_M3A2","toolbelt"},
			{"BP_556x45_StanagM855A1","magazine"},
			{"BP_7Rnd_50AE","magazine"},
			{"BP_5Rnd_762m80a1_Mag","magazine"},
			{"HandGrenade","magazine"},
			{"BP_1Rnd_HE_shell","magazine"},
			{"BP_30Rnd_9x21_Mag","magazine"},
			{"BP_5Rnd_300M_Mag","magazine"},
			{"BP_20Rnd_65x47_Lapua","magazine"},
			{"BP_20Rnd_762x51_BPMag","magazine"},
			{"ItemKnife","magazine"},
			{"BP_5Rnd_3006_Mag","magazine"},
			{"BP_gemtech9","toolbelt"},			
			{"Waterbot","magazine"},
			{"V_BandollierB_blk_BP","vest"}
		};
		itemChance[] =	{

			0.05,	//OPTIC ACO
			0.16,	//HOLO OPTIC			
			0.08,	//9MM MAG			
			0.05,	//45 JHP
			0.11,	//45 ACP			
			0.02, 	//STANAG
			0.01, 	//200RND STANAG			
			0.01,	//GEMTECH 45
			0.03,	//HAMR OPTIC
            0.02,   //BERGEN SAGE			
            0.02,   //BERGEN MCAMO			
            0.02,   //BERGEN GREEN			
            0.02,   //BERGEN BLACK
			0.01, 	//CARRYALL URBAN
            0.01,   //CARRYALL BLACK
			0.01, 	//CARRYALL OCAMO
            0.01,   //CARRYALL MCAMO					
			0.01,	//PLATE CARRIER
			0.08,	//ACOG
			0.03,	//G33
			0.12,	//FLASHLIGHT ATTACHMENT
			0.05,	//TAC VEST
			0.01,	//RANGEFINDER
			0.02,	//M3A2
			0.01,	//STANAG M855A1
			0.02,	//DEAGLE MAG
			0.02,	//5RND 762M80A1
			0.04,	//HAND GRENADE
			0.05,	//HE GRENADE M203
			0.15,	//30RND 9MM
			0.02,	//300M
			0.04,	//20RND LAPUA
			0.03,	//20RND 762
			0.15,	//KABAR
			0.05,	//3006M
			0.01,   //GEMTECH 9MM SUPPR			
			0.05,	//WATER BOTTLE
			0.08	//Bandolier Mid
		};
	};	
	class CampWpn: Default {
		lootChance = 0.50;
		lootPos[] = {};
		itemType[] =	{
			{"BP_Minimi_HG","weapon"},				
			{"BP_M4_300","weaponA"},
			{"BP_M4_300k","weapon"},								
			{"BP_R700","weaponA"},			
			{"BP_MK20","weapon"},
			{"BP_MK20c","weapon"},			
			{"BP_SVD","weaponA"},
			{"BP_M110","weaponA"},
			{"BP_M24DES","weaponA"},
			{"BP_MXM","weapon"},
			{"BP_M16a2","weapon"},
			{"BP_M16A4","weapon"},
			{"BP_AR10","weapon"},
			{"BP_AKM","weapon"},
			{"BP_g18","weapon"},
			{"BP_SUD_AK107","weapon"},			
			{"BP_Mk200","weapon"},
			{"BP_FNPTac45","weaponA"},
			{"BP_MK18PD_F","weapon"},
			{"BP_M4","weaponA"},
			{"BP_CAMO_M4","weapon"},
			{"BP_KimberNW","weapon"},
			{"BP_FamasSurb_HG","weapon"},
			{"BP_M4B2","weaponA"},
			{"BP_DMR_Officer","weaponA"},
			{"BP_Mk12mod1","weaponA"},
			{"BP_1911MDes","weaponA"},	
			{"BP_HK417M","weapon"},
			{"BP_M40a3","weaponA"},
			{"BP_MXC","weapon"},
			{"BP_MX_black","weaponA"},
			{"BP_MK18AFGD_F","weapon"},
			{"BP_EBR_F","weapon"},
			{"BP_M25WF","weaponA"},
			{"BP_M25WFK","weaponA"}
		};
		itemChance[] =	{
			0.00,   //M249							
			0.03,	//M4 BLACKOUT
			0.04,	//M4 BLACKOUT K							
			0.07,   //R700			
			0.04,   //MK20
			0.00,   //MK20 CARBINE			
			0.03,	//SVD
			0.00,	//M110
			0.00,   //M24 DESERT
			0.00,	//MXM
			0.13,   //M16A2
			0.02,	//M16A4
			0.05,   //AR15 FP
			0.04,	//AKM
			0.05,	//G18
			0.10,   //AK107			
			0.00,	//MK200
			0.00,	//FNPTAC
			0.00,	//MK18 DES
			0.10,	//DM M4
			0.00,	//M4 CAMO
			0.00,   //KIMBER NW
			0.00, 	//FAMAS C HG
			0.03, 	//M4 BLOCK2
			0.00, 	//DMR OFFICER
			0.00, 	//Mk12 MOD1	
			0.02, 	//1911DES
			0.00, 	//HK417M
			0.00,	//M40A3
			0.00,	//MX CARBINE
			0.00,   //MX SPECOPS
			0.00,	//MK18 SOPMOD
			0.00,	//MK14 EBR
			0.00,	//M25
			0.00	//M25K			
		};
	};
};	

class CfgBuildingLoot 
{
	class Default {
		zombieChance = 0.2;
		minRoaming = 0;
		maxRoaming = 2;
		zombieClass[] = {"BPZombie_RebelImp1","BPZombie_RebelImp2","BPZombie_RebelImp3","BPZombie_GuardianImp1","BPZombie_GuardianImp2","BPZombie_GuardianImp3","BPZombie_SurvivalistImp1","BPZombie_SurvivalistImp2","BPZombie_SurvivalistImp3","BPZombie_RefugeeImp1","BPZombie_RefugeeImp2","BPZombie_RefugeeImp3","BPZombie_HunterImp1","BPZombie_HunterImp2","BPZombie_HunterImp3"};
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
            {"BP_Trashcan","object","Trash"},
			{"BP_Bag1","object","Generic"},
			{"BP_Bag2","object","Trash"},
			{"BP_LuggageBags","object","Residential"},
			{"BP_Packs","object","Residential"},
			{"ItemCompass","toolbelt"},
			{"ItemMap","toolbelt"},
			{"ItemKnife","magazine"},
			{"BP_Kitbag_cbr","backpack"},
			{"Binocular","weaponNA"},
			{"Waterbot","magazine"},
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
			{"MeleeKatana","weapon"},
			{"BP_Benelli","weapon"},
			{"BP_Rem870","weapon"},
			{"BP_7Rnd_45acp","magazine"},
			{"BP_10Rnd_303_Mag","magazine"},
			{"BP_5Rnd_22_Mag","magazine"},
			{"ItemPainkiller","magazine"},
			{"ItemAntibiotic","magazine"},
			{"ItemDuctTape","magazine"},
			{"ItemBandage","magazine"},
			{"Meleehatchet","weapon"},
			{"MeleeShovel","weapon"},
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
			0.20,   //BP_LuggageBags
			0.10,   //BP_Packs
			0.02,	//Compass
			0.02,	//Map
			0.02,	//Knife
			0.02,	//Sportbag
			0.02,	//Binocular
			0.02,	//Woodpile
			0.01,	//WATERBOTTLE
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
			0.01,	//1886 collector
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
            {"BP_Trashcan","object","Trash"},
			{"BP_Bag1","object","Generic"},
			{"BP_WeaponCrateOld","object","Residential2"},
			{"BP_LuggageBags","object","Residential"},
			{"BP_Packs","object","Residential"},
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
			{"Waterbot","magazine"},
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
			{"MeleeKatana","weapon"},
			{"BP_Benelli","weapon"},
			{"BP_Rem870","weapon"},
			{"BP_7Rnd_45acp","magazine"},
			{"BP_10Rnd_303_Mag","magazine"},
			{"BP_5Rnd_22_Mag","magazine"},
			{"ItemPainkiller","magazine"},
			{"ItemAntibiotic","magazine"},
			{"ItemDuctTape","magazine"},
			{"ItemBandage","magazine"},
			{"Meleehatchet","weapon"},
			{"MeleeShovel","weapon"},
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
			0.20,   //BP_LuggageBags
			0.12,  //BP_Packs
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
			0.02,	//Woodpile
			0.01,	//WATERBOTTLE
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
			0.01,	//1886 collector
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
            {"BP_Trashcan","object","Trash"},
			{"BP_Bag1","object","Generic"},
			{"BP_Bag2","object","Trash"},
			{"BP_LuggageBags","object","Residential"},
			{"BP_Packs","object","Residential"}	
		};
		itemChance[] =	{
			0.15,	//BP_CardBoardBox1
			0.30,	//BP_CardBoardBox2
			0.10,	//BP_CardBoardBox3
			0.10,	//BP_Trashcan
			0.10,   //BP_Bag1
			0.05,   //BP_Bag2
			0.05,    //BP_LuggageBags
			0.05    //BP_Packs
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
            {"BP_CardboardBox_3","object","Generic"},
            {"BP_Trashcan","object","Trash"},
			{"BP_Bag1","object","Generic"},
			{"BP_Bag2","object","Trash"},
			{"BP_LuggageBags","object","Office2"},
			{"BP_Packs","object","Residential"},
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
			{"Waterbot","magazine"},
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
			0.07,	//BP_Trashcan
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
			{"BP_Bag1","object","Generic"},
			{"BP_WeaponCrateOld","object","Residential2"},
			{"BP_Bag2","object","Trash"},
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
			{"BP_Trashcan","object","Trash"},
			{"BP_Bag1","object","Generic"},
			{"BP_Bag2","object","Supermarket"},
			{"BP_WeaponCrateOld","object","WindmillWpn"},
			{"BP_WeaponCrate_WWII","object","MilitarySurplusWpn"},
			{"BP_AmmoBoxOld","object","WindmillAcc"}
		};
		itemChance[] =	{
			0.10,	//BP_Trashcan
			0.10,   //BP_Bag1
			0.10,   //BP_Bag2
			0.15,   //WINDMILL WPN
			0.01,   //SURPLUS WPN
			0.30    //WINDMILL ACC 
		};		
	};	
	class Farm: Default {
		zombieChance = 0.2;
		minRoaming = 0;
		maxRoaming = 1;
		zombieClass[] = {"BPZombie_RebelImp1","BPZombie_RebelImp2","BPZombie_RebelImp3","BPZombie_GuardianImp1","BPZombie_GuardianImp2","BPZombie_GuardianImp3","BPZombie_SurvivalistImp1","BPZombie_SurvivalistImp2","BPZombie_SurvivalistImp3","BPZombie_RefugeeImp1","BPZombie_RefugeeImp2","BPZombie_RefugeeImp3","BPZombie_HunterImp1","BPZombie_HunterImp2","BPZombie_HunterImp3"};
		lootChance = 0.10;
		lootPos[] = {};
		itemType[] =	{
			{"BP_Bag1","object","Generic"},
			{"BP_Bag2","object","Generic"},
			{"BP_AmmoBoxOld","object","WindmillAcc"},
			{"BP_WeaponCrate_WWII","object","MilitarySurplusWpn"},
			{"BP_CardboardBox_4","object","Farm"},
			{"ItemFuelcanEmpty","magazine"},
			{"ItemWaterTape","magazine"},
			{"ItemBandage","magazine"},
			{"ItemNails","magazine"},
			{"V_Rangemaster_belt_BP","vest"},
			{"BP_6Rnd_45_Mag","magazine"},
			{"BP_6Rnd_44Mag","magazine"},
			{"BP_sw45","weapon"},
			{"BP_sw44","weaponA"},
			{"BP_5Rnd_Mauser_Mag","magazine"},
			{"BP_Rem870","weapon"},
			{"BP_Ruger","weapon"},
			{"BP_1886S","weaponA"},
			{"BP_25Rnd_22_Mag","magazine"},
			{"BP_5Rnd_500Mag","magazine"},
			{"BP_Rhino","weapon"},
			{"BP_8Rnd_Slug","magazine"},
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
			{"MeleePickaxe","weapon"},
			{"MeleeHammer","weapon"},
			{"MeleeHammer2","weapon"},
			{"BlueprintStove","magazine"},
			{"MeleeShovel","weapon"},
			{"MeleeCrowbar","weapon"},
			{"MeleeClub","weapon"},
			{"ItemStove","magazine"},
			{"ItemToolbox","toolbelt"},
			{"BP_8Rnd_45gov","magazine"},
			{"BP_Unertl32x","toolbelt"},
			{"BP_15Rnd_9x19OVP","magazine"},
			{"BP_5Rnd_3006_Mag","magazine"},
		};
		itemChance[] =	{
			0.05,   //BP_Bag1
			0.05,   //BP_Bag2
			0.08,   //BP_WindmillAcc
			0.01,   //SURPLUS WPN
			0.20,    //BP_Farm
			0.01,	//JERRY CAN
			0.01,	//WATER TAPE
			0.01,	//BANDAGE
			0.01,   //NAILS
			0.01,	//BANDOLIER	
			0.01,	//45 MAG ROUNDS
			0.01,	//44 MAG ROUNDS
			0.01,	//SW45
			0.01,	//SW.500 Scoped
			0.01,	//MAUSER 7.92
			0.01,	//REMINGTON 870
			0.01,	//RUGER 10/22
			0.01,	//1886S
			0.01,	//25RND .22LR
			0.01,	//.500SW
			0.01,	//RHINO
			0.01,	//BENELLI SLUGS
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
			0.02,	//TOOLBOX
			0.01,   //45GOV
			0.01,   //UNERTL 32X
			0.01,   //9MM OVP
			0.01,   //30-06 MAG
		};		
	};
	class Industrial: Default {
		zombieChance = 0.2;
		zombieClass[] = {"BPZombie_RebelImp1","BPZombie_RebelImp2","BPZombie_RebelImp3","BPZombie_GuardianImp1","BPZombie_GuardianImp2","BPZombie_GuardianImp3","BPZombie_SurvivalistImp1","BPZombie_SurvivalistImp2","BPZombie_SurvivalistImp3","BPZombie_RefugeeImp1","BPZombie_RefugeeImp2","BPZombie_RefugeeImp3","BPZombie_HunterImp1","BPZombie_HunterImp2","BPZombie_HunterImp3"};
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
			{"MeleeHammer","weapon"},
			{"BlueprintHavenReinforce","magazine"},
			{"ItemStove","magazine"},
			{"MeleeShovel","weapon"}, 
			{"MeleeCrowbar","weapon"},
            {"MeleeClub","weapon"},
			{"ItemSandbag","magazine"},
			{"MeleeHammer2","weapon"}
		};
		itemChance[] =	{
			0.02,	//BP_CardBoardBox3
			0.02,	//BP_Trashcan
			0.02,   //BP_Bag1
			0.02,   //BP_Bag2
			0.05,	//BP_Skip1
			0.05,	//BP_Skip2
            0.05,   //BP_Skip3
            0.05,	//BP_Skip4
            0.05,	//BP_Skip5
            0.05,	//BP_Dumpster1
            0.05,	//BP_Dumpster2
            0.05,	//BP_Dumpster3
            0.05,	//BP_Dumpster4
            0.05,	//BP_Dumpster5
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
			0.01, //SHOVEL
			0.01, //Crowbar
			0.01, //Melee club
			0.02,  //SAND BAG
			0.02   //HAMMER MELEE
		};		
	};	
	class IndustrialSmall: Default {
		zombieChance = 0.2;
		zombieClass[] = {"BPZombie_RebelImp1","BPZombie_RebelImp2","BPZombie_RebelImp3","BPZombie_GuardianImp1","BPZombie_GuardianImp2","BPZombie_GuardianImp3","BPZombie_SurvivalistImp1","BPZombie_SurvivalistImp2","BPZombie_SurvivalistImp3","BPZombie_RefugeeImp1","BPZombie_RefugeeImp2","BPZombie_RefugeeImp3","BPZombie_HunterImp1","BPZombie_HunterImp2","BPZombie_HunterImp3"};
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
		zombieClass[] = {"BPZombie_RebelImp1","BPZombie_RebelImp2","BPZombie_RebelImp3","BPZombie_GuardianImp1","BPZombie_GuardianImp2","BPZombie_GuardianImp3","BPZombie_SurvivalistImp1","BPZombie_SurvivalistImp2","BPZombie_SurvivalistImp3","BPZombie_RefugeeImp1","BPZombie_RefugeeImp2","BPZombie_RefugeeImp3","BPZombie_HunterImp1","BPZombie_HunterImp2","BPZombie_HunterImp3"};
		lootChance = 0.05;
		lootPos[] = {};
		itemType[] =	{
            {"BP_AmmoBoxOld","object","MilitaryGeneralAcc"},
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
			{"BP_Arrow_Mag","magazine"},
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
			{"BP_Crossbow","weapon"},
			{"BP_Crossbow_DigitCamo","weaponA"},
			{"BP_MP5","weapon"},
			{"BP_5Rnd_300AAC_Mag","magazine"},
			{"BP_8Rnd_Slug","magazine"},
			{"BP_16Rnd_9x21_Mag","magazine"},
			{"BP_5Rnd_3006_Mag","magazine"},
			{"BP_10Rnd_303_Mag","magazine"},
			{"BP_7Rnd_45acp","magazine"},
			{"SmokeShell","magazine"},
			{"BP_30Rnd_9x21_Mag","magazine"},
			{"BP_556old_Stanag","magazine"},
			{"BP_8Rnd_MagBuckshot","vest"}
		};
		itemChance[] =	{
			0.06,	//BP_AmmoBoxOld
			0.10,   //BP_AmmoCrateOld
			0.15,   //BP_WeaponCrateOld
			0.04,   //BP_WeaponCrateOld
			0.01,   //TRASH
			0.02,   //GENERIC
			0.01,	//ACO OPTIC
			0.01,	//HAMR OPTIC
			0.01,	//CHEEKPIECE
			0.02,	//Morphine
			0.02,	//Field Dressing
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
			0.01,	//Arrow
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
			0.01,	//Crossbow
			0.01,	//Crossbow
			0.01,	//Mp5
			0.01,	//{"BP_5Rnd_300AAC_Mag","magazine"},
			0.01,	//{"BP_8Rnd_Slug","magazine"},
			0.01,	//{"BP_16Rnd_9x21_Mag","magazine"},
			0.01,	//{"BP_5Rnd_3006_Mag","magazine"},
			0.01,	//{"BP_10Rnd_303_Mag","magazine"},
			0.01,	//{"BP_7Rnd_45acp","magazine"},
			0.01,	//{"SmokeShell","magazine"},
			0.01,	//{"BP_30Rnd_9x21_Mag","magazine"},
			0.01,	//{"BP_556old_Stanag","magazine"},
			0.01,	//{"BP_8Rnd_MagBuckshot","vest"}
		};		
	};
	class MilitarySpecial: Default {
		zombieChance = 1;
		minRoaming = 0;
		maxRoaming = 2;
		zombieClass[] = {"BPZombie_RebelImp1","BPZombie_RebelImp2","BPZombie_RebelImp3","BPZombie_GuardianImp1","BPZombie_GuardianImp2","BPZombie_GuardianImp3","BPZombie_SurvivalistImp1","BPZombie_SurvivalistImp2","BPZombie_SurvivalistImp3","BPZombie_RefugeeImp1","BPZombie_RefugeeImp2","BPZombie_RefugeeImp3","BPZombie_HunterImp1","BPZombie_HunterImp2","BPZombie_HunterImp3"};
		lootChance = 0.05; 
		lootPos[] = {};
		itemType[] =	{
            {"BP_AmmoBoxOld","object","MilitarySpecialAcc"},
			{"BP_AmmoCrateOld","object","MilitarySpecialAcc"},
		    {"BP_WeaponCrateOld","object","MilitarySpecialWpn"},
			{"BP_WeaponCrateOld","object","MilitaryGeneralWpn"},
			{"BP_WeaponCrate_WWII","object","MilitarySurplusWpn"},
			{"BP_Bag1","object","Generic"},
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
			{"BP_SUD_AK108","weaponA"},
			{"BP_SUD_AK109","weaponA"},
			{"optic_Aco","toolbelt"},
			{"optic_mrco","toolbelt"},
			{"Binocular","weaponNA"},
			{"BP_CPad","toolbelt"},
			{"BP_AFG","toolbelt"},
			{"ItemKnife","magazine"},
			{"ItemMap","toolbelt"}, 
		    {"BP_Kitbag_sgg","backpack"},
			{"BP_Kitbag_cbr","backpack"},
			{"BP_Kitbag_mcamo","backpack"},
		    {"BP_FieldPack_blk","backpack"},
			{"BP_FieldPack_ocamo","backpack"},
			{"BP_FieldPack_oucamo","backpack"},
			{"BP_FieldPack_cbr","backpack"},
			{"BP_Bergen_drt","backpack"},
			{"BP_Bergen_grs","backpack"},
			{"BP_Bergen_stn","backpack"},
			{"BP_Bergen_tre","backpack"},
			{"BP_Bergen_mcamo","backpack"},
			{"BP_Bergen_sgg","backpack"},
			{"BP_Bergen_rgr","backpack"},
			{"BP_Bergen_blk","backpack"},
            {"ItemSoda1","magazine"},
			{"ItemCereal1","magazine"},
			{"ItemCan1","magazine"},
			{"ItemBandage","magazine"},
			{"ItemPainkiller","magazine"},
			{"HandGrenade","magazine"},
			{"SmokeShellRed","magazine"},
			{"optic_holosight","toolbelt"},
			{"V_Rangemaster_belt_BP","vest"},
			{"BlueprintCrate1","magazine"},
			{"BlueprintCamoNet","magazine"},
			{"V_HarnessOGL_brn_BP","vest"},
			{"BP_gemtech9","toolbelt"},
			{"ItemSurgeryKit","toolbelt"},
			{"V_BanditBandolier_BP","vest"}
		};
		itemChance[] =	{
			0.10,	//BP_AmmoBoxOld
			0.10,   //BP_AmmoCrateOld
			0.15,   //BP_WeaponCrateOld
			0.15,   //BP_WeaponCrateOld
			0.04,   //BP_WeaponCrateOld
			0.05,   //GENERIC
			0.01,    //BP_MedicalBox
			0.02,	//M4_300MK
			0.02,	//M9
			0.02,	//G18
			0.02,	//G17
			0.02,	//1911
			0.02,	//AK74m	
			0.02,	//AK107	
			0.02,	//M4A1
			0.02,	//M4A1
			0.01,	//BENELLI
			0.02,	//AKM
			0.02,	//AR10
			0.02,	//SVT40
			0.01,	//1911DES
			0.02,	//M4300
			0.02,   //M4300K
			0.02,	//AKS74U
			0.02,	//SVT40 PSO
			0.02,    //AR15
			0.02,	//AK108
			0.02,	//AK109
			0.02,	//ACO OPTIC
			0.01,	//HAMR OPTIC
			0.01,	//BINOCULARS
			0.01,	//CHEEKPIECE
			0.01,	//AFG
			0.01,	//KNIFE
			0.01,	//MAPA
			0.01, 	//KIT SAGE
			0.01, 	//KIT CBR
			0.01,   //KIT CAMO
			0.01, 	//FIELD BLACK
			0.01, 	//FIELD HEX
			0.01,   //FIELD URBAN
            0.01,   //FIELD TAN	
			0.01,   //BERGEN 
			0.01,   //BERGEN 
			0.01,   //BERGEN 
			0.01,   //BERGEN 
			0.01,   //BERGEN 
			0.01,   //BERGEN 
			0.01,   //BERGEN 
            0.01,   //BERGEN BLACK		
			0.01,   //Soda
			0.01,   //Food
			0.01,   //Food
			0.01,	//BANDAGE
			0.01,	//PAINKILLER
			0.07,	//HAND GRENADE
			0.01,	//SMOKE GRENADE RED
			0.01,	//HOLO
			0.01,	//BANDOLIER OLIVE
			0.01,   //TENT BLUEPRINT
			0.01,   //CAMO NET BLUEPRINT
			0.01,   //TAC VEST
			0.01,   //GEMTECH 9MM SUPPR
			0.01,   //SURGERY KIT
			0.01	//Bandolier Mid
		};		
	};	
	class MilitaryAirfield: Default {
		zombieChance = 1;
		minroaming = 5;
		maxRoaming = 7;
		zombieClass[] = {"BPZombie_RebelImp1","BPZombie_RebelImp2","BPZombie_RebelImp3","BPZombie_GuardianImp1","BPZombie_GuardianImp2","BPZombie_GuardianImp3","BPZombie_SurvivalistImp1","BPZombie_SurvivalistImp2","BPZombie_SurvivalistImp3","BPZombie_RefugeeImp1","BPZombie_RefugeeImp2","BPZombie_RefugeeImp3","BPZombie_HunterImp1","BPZombie_HunterImp2","BPZombie_HunterImp3"};
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
			{"BP_MedicalBox","object","Hospital"},
			{"BP_MarksmanWeaponBox","object","MilitaryTower"}
		};
		itemChance[] =	{
			0.03,	//BP_AmmoBoxNew
			0.10,	//BP_AmmoBoxOld
			0.10,	//BP_AmmoCrateNew
			0.15,   //BP_WeaponCrateNew
			0.15,   //BP_WeaponCrateOld
			0.02,   //BP_WeaponSurplus
			0.10,   //TRASH
			0.10,   //GENERIC
			0.08,   //CARDBOARD
			0.01,	//BP_MedicalBox
			0.15    //MilitaryTower
		};		
	};
	class MilitaryTower: Default {
		zombieChance = 1;
		minRoaming = 0;
		maxRoaming = 1;
		zombieClass[] = {"BPZombie_RebelImp1","BPZombie_RebelImp2","BPZombie_RebelImp3","BPZombie_GuardianImp1","BPZombie_GuardianImp2","BPZombie_GuardianImp3","BPZombie_SurvivalistImp1","BPZombie_SurvivalistImp2","BPZombie_SurvivalistImp3","BPZombie_RefugeeImp1","BPZombie_RefugeeImp2","BPZombie_RefugeeImp3","BPZombie_HunterImp1","BPZombie_HunterImp2","BPZombie_HunterImp3"};
		lootChance = 0.15;
		lootPos[] = {};
		itemType[] =	{
            {"BP_MarksmanWeaponBox","object","MilitaryTower"},
			{"BP_Bag1","object","Generic"},
			{"BP_WeaponCrate_WWII","object","MilitarySurplusWpn"},
			{"BP_CardboardBox_1","object","Office"},
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
			0.03,	//BP_MarksmanWeaponBox
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
		minRoaming = 5;
		maxRoaming = 7;
		zombieClass[] = {"BPZombie_RebelImp1","BPZombie_RebelImp2","BPZombie_RebelImp3","BPZombie_GuardianImp1","BPZombie_GuardianImp2","BPZombie_GuardianImp3","BPZombie_SurvivalistImp1","BPZombie_SurvivalistImp2","BPZombie_SurvivalistImp3","BPZombie_RefugeeImp1","BPZombie_RefugeeImp2","BPZombie_RefugeeImp3","BPZombie_HunterImp1","BPZombie_HunterImp2","BPZombie_HunterImp3"};
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
			0.04,   //WWII
			0.15,   //GENERIC
			0.05    //BP_MedicalBox
		};		
	};

	class GhostHotelAcc: Default {
		zombieChance = 1;
		minRoaming = 5;
		maxRoaming = 7;
		zombieClass[] = {"BPZombie_RebelImp1","BPZombie_RebelImp2","BPZombie_RebelImp3","BPZombie_GuardianImp1","BPZombie_GuardianImp2","BPZombie_GuardianImp3","BPZombie_SurvivalistImp1","BPZombie_SurvivalistImp2","BPZombie_SurvivalistImp3","BPZombie_RefugeeImp1","BPZombie_RefugeeImp2","BPZombie_RefugeeImp3","BPZombie_HunterImp1","BPZombie_HunterImp2","BPZombie_HunterImp3"};
		lootChance = 0.05;
		lootPos[] = {};
		itemType[] =	{
			{"BP_ExplosiveBox","object","HotelAcc"},
            {"BP_AmmoCrateNew","object","HotelAcc"},
			{"BP_WeaponCrateNew","object","HotelWpn"},
			{"BP_MarksmanWeaponBox","object","MilitaryTower"},
			{"BP_Bag2","object","Generic"},
			{"BP_MedicalBox","object","Hospital"}
		};
		itemChance[] =	{
			0.25,	//BP_AmmoBoxNew
			0.25,	//BP_AmmoCrateNew
			0.05,   //BP_WeaponCrateNew
			0.05,   //BP_MarksmanWeaponBox
			0.25,   //GENERIC
			0.02    //BP_MedicalBox
		};		
	};
	
	class GhostHotelWpn: Default {
		zombieChance = 1;
		minRoaming = 5;
		maxRoaming = 7;
		zombieClass[] = {"BPZombie_RebelImp1","BPZombie_RebelImp2","BPZombie_RebelImp3","BPZombie_GuardianImp1","BPZombie_GuardianImp2","BPZombie_GuardianImp3","BPZombie_SurvivalistImp1","BPZombie_SurvivalistImp2","BPZombie_SurvivalistImp3","BPZombie_RefugeeImp1","BPZombie_RefugeeImp2","BPZombie_RefugeeImp3","BPZombie_HunterImp1","BPZombie_HunterImp2","BPZombie_HunterImp3"};
		lootChance = 0.05;
		lootPos[] = {};
		itemType[] =	{
			{"BP_ExplosiveBox","object","HotelAcc"},
            {"BP_AmmoCrateNew","object","HotelAcc"},
			{"BP_WeaponCrateNew","object","HotelWpn"},
			{"BP_WeaponCrate_WWII","object","MilitarySurplusWpn"},
			{"BP_Bag1","object","Generic"},
			{"BP_MarksmanWeaponBox","object","MilitaryTower"}
		};
		itemChance[] =	{
			0.10,	//BP_AmmoBoxNew
			0.10,	//BP_AmmoCrateNew
			0.20,   //BP_WeaponCrateNew
			0.05,   //BP_WeaponSurplus
			0.15,   //GENERIC
			0.20    //BP_MarksmanWeaponBox
		};		
	};
	
//HELI CRASH TABLES		
	class MilitarCrash: Default {
		zombieChance = 1;
		minRoaming = 8;
		maxRoaming = 17;
		zombieClass[] = {"BPZombie_RebelImp1","BPZombie_RebelImp2","BPZombie_RebelImp3","BPZombie_GuardianImp1","BPZombie_GuardianImp2","BPZombie_GuardianImp3","BPZombie_SurvivalistImp1","BPZombie_SurvivalistImp2","BPZombie_SurvivalistImp3","BPZombie_RefugeeImp1","BPZombie_RefugeeImp2","BPZombie_RefugeeImp3","BPZombie_HunterImp1","BPZombie_HunterImp2","BPZombie_HunterImp3"};
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
			{"BP_TreeGhillie","uniform"},
			{"BP_m9tac","weaponA"},
			{"BP_ScarH","weaponA"},
			{"BP_MX_SW","weapon"},
			{"BP_Carryall_blk","backpack"},
			{"BP_Zafir","weapon"},
			{"V_RebreatherB","vest"},
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
			0.05,   //SURGERY KIT
			0.05,   //.300 WINMAG
			0.02,	//MED BOX
			0.12,	//Morphine
			0.12,	//FieldDressing
			0.12,	//Antibiotic
			0.06,	//Adrenaline
			0.15,	//V_TacVest_camo
			0.12,	//TREE GHILLIE
			0.12,	//M9TAC
			0.02,	//SCARH
			0.13,	//MX SW
			0.10,	//CARRYALL
			0.10,	//ZAFIR LMG
			0.12,	//REBREATHER
			0.11,	//MK20 GL
			0.10,	//STONE GHILLIE
			0.17,	//WETSUIT
			0.01,   //MXM SpecOps
			0.03,	//MXM
			0.13,	//MXC
			0.02,	//LMG SUPPRESSOR
			0.03,	//RANGEFINDERS
			0.15,   //HE SHELL
			0.01,   //50CAL M2 BOX
			0.07,    //MK48 CCO
			0.03,    //M14 RIS
			0.07,    //BP_SW44
			0.07    //BP_M4_300MK
		};
	};
	class HeliCrash: Default {
		zombieChance = 1;
		minRoaming = 8;
		maxRoaming = 17;
		zombieClass[] = {"BPZombie_RebelImp1","BPZombie_RebelImp2","BPZombie_RebelImp3","BPZombie_GuardianImp1","BPZombie_GuardianImp2","BPZombie_GuardianImp3","BPZombie_SurvivalistImp1","BPZombie_SurvivalistImp2","BPZombie_SurvivalistImp3","BPZombie_RefugeeImp1","BPZombie_RefugeeImp2","BPZombie_RefugeeImp3","BPZombie_HunterImp1","BPZombie_HunterImp2","BPZombie_HunterImp3"};
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
			{"BP_DirtGhillie","uniform"},
			{"BP_M24Spec","weaponA"},
			{"BP_MK20Spec","weaponA"},
			{"BP_M110","weapon"},
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
			{"BP_SW44","weaponA"},
			{"BP_M4_300MK","weaponA"},
			{"BP_Ghillie_Lush","uniform"},
			//{"BP_HK417M_DES","weapon"},	
			//{"BP_EBR_MRCO","weapon"},
			//{"BP_p226Tac","weaponA"},
			//{"BP_7Rnd_408Chey_Mag","magazine"},
			//{"BP_HK417_DES","weapon"},
			//{"H_HelmetIA","headgear"},
			//{"BP_SUD_RPK107","weapon"},
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
			0.02,	//DIRT GHILLIE
			0.01,	//M24A2 SPECOPS
			0.02,	//MK20 SPEC
			0.02,	//M110WL
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
			0.03,    //M14 RIS
			0.07,    //BP_SW44
			0.15,    //BP_M4_300MK
			0.02,	//Marksmen Ghillie
			//0.50,	//HK417M 16
			//0.50,	//MK18 ADR MRCO
			//0.09,	//P226 TACTICAL
			//0.02, 	//408 CHEETAH
			//0.50,	//HK417L DES
			//0.50,	//HELMET	
			//0.50,	//RPK107
		};
	};
	class HeliCrash_No50s: Default {
		zombieChance = 0.4;
		minRoaming = 8;
		maxRoaming = 17;
		zombieClass[] = {"BPZombie_RebelImp1","BPZombie_RebelImp2","BPZombie_RebelImp3","BPZombie_GuardianImp1","BPZombie_GuardianImp2","BPZombie_GuardianImp3","BPZombie_SurvivalistImp1","BPZombie_SurvivalistImp2","BPZombie_SurvivalistImp3","BPZombie_RefugeeImp1","BPZombie_RefugeeImp2","BPZombie_RefugeeImp3","BPZombie_HunterImp1","BPZombie_HunterImp2","BPZombie_HunterImp3"};
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
			{"BP_m40a3G","weapon"},
			{"BP_MedicalboxHelicrash","object"},
			{"ItemMorphine","magazine"},
			{"ItemFieldDressing","magazine"},
			{"ItemAntibiotic","magazine"},
			{"ItemAdrenaline","magazine"},
			//{"AmmoBoxSmall_556","object"},
			//{"AmmoBoxSmall_762","object"},
			{"V_TacVest_khk_BP","vest"},
			{"BP_GrassGhillie","uniform"},
			//{"BP_p226Tac","weaponA"},
			{"V_RebreatherB","vest"},
			{"BP_Mk12mod1Spec","weapon"},
			{"BP_M21K","weaponA"},
			{"BP_M24Des","weaponA"},
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
			0.25,   //FNFAL
			//0.15,	//EBR MRCO
			//0.12,	//MK200
			0.08,	//MINIMI 762
			0.12,	//MINIMI HG
			0.12,   //R700
			0.02,	//SR25
			0.04,	//HE SHELL
			0.08,   //M40A3 GHILLIE
			0.02,	//MED BOX
			0.12,	//Morphine
			0.12,	//FieldDressing
			0.12,	//Antibiotic
			0.08,	//Adrenaline
			//0.1,	//AmmoBoxSmall_556
			//0.1,	//AmmoBoxSmall_762
			0.10,	//TACTICAL VEST
			0.02,	//GRASS GHILLIE
			//0.02,	//P226 TACTICAL
			0.03,	//REBREATHER
			0.05,	//MK12MOD1
			0.02,	//M21K
			0.09,   //M24
			0.01,	//5.56 SUPPRESSOR
			0.07,	//LAPUA 6.5x47MM MAG
			0.03,   //150RND 762.51MM BOX
			//0.03,   //G18 TACTICAL
			//0.01,   //DEAGLE GOLD
			0.06,   //SURGERY KIT
			0.01	//Marksmen Ghillie
			
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
		zombieClass[] = {"BPZombie_RebelImp1","BPZombie_RebelImp2","BPZombie_RebelImp3","BPZombie_GuardianImp1","BPZombie_GuardianImp2","BPZombie_GuardianImp3","BPZombie_SurvivalistImp1","BPZombie_SurvivalistImp2","BPZombie_SurvivalistImp3","BPZombie_RefugeeImp1","BPZombie_RefugeeImp2","BPZombie_RefugeeImp3","BPZombie_HunterImp1","BPZombie_HunterImp2","BPZombie_HunterImp3"};
		lootChance = 0.50;
		lootPos[] = {};
		itemType[] =	{		
			{"BP_ApexMilBox2","object","ApexMilBox1"},
			{"BP_JungleGhillie_Uniform","uniform"},  //Full Ghillie (Jungle)
			{"BP_Paramilitary_Jacket_Uniform","uniform"},  //Paramilitary Garb (Jacket)
			{"BP_Paramilitary_Shorts_Uniform","uniform"},  //Paramilitary Garb (Shorts)
			{"BP_Paramilitary_Tee_Uniform","uniform"}, //Paramilitary Garb (Tee)
			{"V_PlateCarrierGL_tna_BP","vest"},  //Carrier GL Rig (Tropic)
			{"V_TacVest_gen_BP","vest"},   //Gendarmerie Vest
			{"V_HarnessO_gry_BP","vest"},   //LBV Harness (Grey)
			{"V_HarnessO_ghex_BP","vest"},   //LBV Harness (Green Hex)
			{"V_TacChestrig_grn_BP","vest"},    //Tactical Chest Rig (Green)
			{"V_TacChestrig_cbr_BP","vest"},  //Tactical Chest Rig (Coyote)
			{"BP_arifle_AKS_F","weapon"},  //AKS-74U 
			{"BP_arifle_AKM_F","weapon"},  //AKM
			{"BP_arifle_AKM_FL_F","weapon"},  //AKM Flashlight ( Not an attachment, custom model ) 
			{"BP_arifle_AK12_F","weapon"},  //AK-12
			{"BP_arifle_AK12_GL_F","weapon"},  //AK-12 UGL 
			{"BP_LMG_03_F","weapon"},  //LIM-85 
			{"BP_hgun_Pistol_01_F","weapon"},  //PM 9mm Pistol 
			{"BP_arifle_SPAR_01_blk_F","weapon"},  //SPAR-16 Black
			{"BP_arifle_SPAR_01_khk_F","weapon"},  //SPAR-16 Khaki
			{"BP_arifle_SPAR_01_snd_F","weapon"},  //SPAR-16 Sand 
			{"BP_arifle_SPAR_01_GL_blk_F","weapon"},  //SPAR-16 UGL Black
			{"BP_arifle_SPAR_01_GL_khk_F","weapon"},  //SPAR-16 UGL Khaki
			{"BP_arifle_SPAR_01_GL_snd_F","weapon"},  //SPAR-16 UGL Sand 
			{"BP_arifle_SPAR_02_blk_F","weapon"},  //SPAR-16S Black
			{"BP_arifle_SPAR_02_khk_F","weapon"},  //SPAR-16S Khaki
			{"BP_arifle_SPAR_02_snd_F","weapon"},  //SPAR-16S Sand 
			{"BP_arifle_SPAR_03_blk_F","weapon"},  //SPAR-17 Black
			{"BP_arifle_SPAR_03_blk_F","weapon"},  //SPAR-17 Black
			{"BP_arifle_SPAR_03_snd_F","weapon"},  //SPAR-17 Sand 
			{"BP_arifle_CTAR_blk_F","weapon"},  //CAR-95
			{"BP_arifle_CTAR_GL_blk_F","weapon"},  //CAR-95 GL
			{"BP_arifle_CTARS_blk_F","weapon"},  //CAR-95-1
			{"BP_arifle_ARX_blk_F","weapon"},  //Type 115 Black
			{"BP_arifle_ARX_ghex_F","weapon"},  //Type 115 Green Hex
			{"BP_arifle_ARX_hex_F","weapon"},  //Type 115 Hex 
			{"BP_srifle_DMR_07_blk_F","weapon"},  //CMR-76 Black
			{"BP_srifle_DMR_07_ghex_F","weapon"},  //CMR-76 Green Hex
			{"BP_srifle_DMR_07_hex_F","weapon"},  //CMR-76 Hex 
			{"BP_SMG_05_F","weapon"},  //Protector
			{"BP_10Rnd_50BW_Mag_F","magazine"}
		};
		itemChance[] =	{
			0.60,	//ApexMilBox1
			0.01,	//Full Ghillie (Jungle)
			0.01,	//Paramilitary Garb (Jacket)
			0.01,	//Paramilitary Garb (Shorts)
			0.01,	//Paramilitary Garb (Tee)
			0.01,	//Carrier GL Rig (Tropic)
			0.01,	//Gendarmerie Vest
			0.01,	//LBV Harness (Grey)
			0.01,   //LBV Harness (Green Hex)
			0.01,   //Tactical Chest Rig (Green)
			0.01,	//Tactical Chest Rig (Coyote)
			0.01,	//AKS-74U
			0.01,	//AKM
			0.01,	//AKM Flashlight
			0.01,	//AK-12
			0.01,	//AK-12 UGL
			0.01,	//LIM-85
			0.01,	//PM 9mm Pistol
			0.01,   //SPAR-16 Black
			0.01,   //SPAR-16 Khaki
			0.01,   //SPAR-16 Sand
			0.01,	//SPAR-16 UGL Black
			0.01,	//SPAR-16 UGL Khaki
			0.01,	//SPAR-16 UGL Sand
			0.01,	//SPAR-16S Black
			0.01,	//SPAR-16S Khaki
			0.01,	//SPAR-16S Sand
			0.01,	//SPAR-17 Black
			0.01,   //SPAR-17 Black
			0.01,   //SPAR-17 Sand
			0.01,   //CAR-95
			0.01,	//CAR-95 GL
			0.01,	//CAR-95-1
			0.01,	//Type 115 Black
			0.01,	//Type 115 Green Hex
			0.01,	//Type 115 Hex
			0.01,	//CMR-76 Black
			0.01,	//CMR-76 Green Hex
			0.01,   //CMR-76 Hex
			0.01,   //Protector
			0.01   //10Rnd_50BW_Mag_F
		};
	};
	
	class ApexMilBox2: Default {
		zombieChance = 1;
		minRoaming = 20;
		maxRoaming = 20;
		zombieClass[] = {"BPZombie_RebelImp1","BPZombie_RebelImp2","BPZombie_RebelImp3","BPZombie_GuardianImp1","BPZombie_GuardianImp2","BPZombie_GuardianImp3","BPZombie_SurvivalistImp1","BPZombie_SurvivalistImp2","BPZombie_SurvivalistImp3","BPZombie_RefugeeImp1","BPZombie_RefugeeImp2","BPZombie_RefugeeImp3","BPZombie_HunterImp1","BPZombie_HunterImp2","BPZombie_HunterImp3"};
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
			0.02,    //Hospital
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
	
	class SuicideCrate: Default {
		zombieChance = 0;
		minRoaming = 0;
		maxRoaming = 0;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.85;
		lootPos[] = {};
		itemType[] =	{		
			{"BP_AmmoPallet4","object","SuicideCrate"},
			{"BP_AWSM","weapon"},
			{"BP_SVDK_WDL","weaponA"},
			{"BP_arifle_ARX_ghex_F","weapon"},  //Type 115 Green Hex
			{"BP_arifle_ARX_hex_F","weapon"},  //Type 115 Hex 
			{"BP_Guarilla_Leader","uniform"},
			{"BP_JungleGhillie_Uniform","uniform"},
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
			0.01,	//Guerilla Leader
			0.01,	//JungleGhillie
			0.01,	//Gendarmerie Vest
			0.01,	//7.62 Muzzle
			0.02	//ToiletPaper
		};
	};
	
	class SurvivorCrateSpot: Default {
		zombieChance = 0;
		minRoaming = 0;
		maxRoaming = 0;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.85;
		lootPos[] = {};
		itemType[] =	{		
			{"BP_ContrabandBox","object","SurvivorCrate"},
			{"BP_ContrabandBoxEmpty","object","AmmoPalletTroll"},
			{"BP_SVD_DES","weapon"},
			{"BP_arifle_AKM_FL_F"},
			{"BP_Kar98","weaponA"},
			{"BP_LeeEnfieldK","weaponA"},
			{"HandGrenade","magazine"},
			{"V_TacVest_camo","vest"},
			{"V_Chestrig_blk_BP","vest"},
			{"BP_R7Sup","toolbelt"},
			{"BP_CZSup_br","toolbelt"}
		};
		itemChance[] =	{
			0.70,	//SurvivorCrate
			0.20,	//Empty SurvivorCrate
			0.01,    //SVD_DES
			0.01,    //AKM_FL_F
			0.01,    //Kar98 Scoped
			0.01,    //LeeEnfieldK Scoped
			0.01,    //Grenade
			0.01,    //TacVest_camo
			0.01,    //Chestrig_blk
			0.01,    //R7Sup
			0.01    //CZSup
		};
	};
	
	class Sacrifice: Default {
		zombieChance = 0;
		minRoaming = 0;
		maxRoaming = 0;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.85;
		lootPos[] = {};
		itemType[] =	{		
			{"V_TacVest_camo","vest"},
			{"V_Chestrig_blk_BP","vest"},
			{"BP_R7Sup","toolbelt"},
			{"BP_CZSup_br","toolbelt"},
			{"BP_M84_Flash","magazine"},
			{"FoodRabbitCooked","magazine"},
			{"FoodMushroom","magazine"}
		};
		itemChance[] =	{
			0.01,    //TacVest_camo
			0.01,    //Chestrig_blk
			0.01,    //R7Sup
			0.01,    //CZSup
			0.35,    //MeatPlayerCooked
			0.15,    //MeatRabbitCooked
			0.15    //MeatRabbitCooked
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
		zombieClass[] = {"BPZombie_RebelImp1","BPZombie_RebelImp2","BPZombie_RebelImp3","BPZombie_GuardianImp1","BPZombie_GuardianImp2","BPZombie_GuardianImp3","BPZombie_SurvivalistImp1","BPZombie_SurvivalistImp2","BPZombie_SurvivalistImp3","BPZombie_RefugeeImp1","BPZombie_RefugeeImp2","BPZombie_RefugeeImp3","BPZombie_HunterImp1","BPZombie_HunterImp2","BPZombie_HunterImp3"};
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
		zombieClass[] = {"BPZombie_RebelImp1","BPZombie_RebelImp2","BPZombie_RebelImp3","BPZombie_GuardianImp1","BPZombie_GuardianImp2","BPZombie_GuardianImp3","BPZombie_SurvivalistImp1","BPZombie_SurvivalistImp2","BPZombie_SurvivalistImp3","BPZombie_RefugeeImp1","BPZombie_RefugeeImp2","BPZombie_RefugeeImp3","BPZombie_HunterImp1","BPZombie_HunterImp2","BPZombie_HunterImp3"};
		itemType[] = {
			{"BP_CardboardBox_1","object","Office"},
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
		zombieClass[] = {"BPZombie_RebelImp1","BPZombie_RebelImp2","BPZombie_RebelImp3","BPZombie_GuardianImp1","BPZombie_GuardianImp2","BPZombie_GuardianImp3","BPZombie_SurvivalistImp1","BPZombie_SurvivalistImp2","BPZombie_SurvivalistImp3","BPZombie_RefugeeImp1","BPZombie_RefugeeImp2","BPZombie_RefugeeImp3","BPZombie_HunterImp1","BPZombie_HunterImp2","BPZombie_HunterImp3"};
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
		zombieClass[] = {"BPZombie_RebelImp1","BPZombie_RebelImp2","BPZombie_RebelImp3","BPZombie_GuardianImp1","BPZombie_GuardianImp2","BPZombie_GuardianImp3","BPZombie_SurvivalistImp1","BPZombie_SurvivalistImp2","BPZombie_SurvivalistImp3","BPZombie_RefugeeImp1","BPZombie_RefugeeImp2","BPZombie_RefugeeImp3","BPZombie_HunterImp1","BPZombie_HunterImp2","BPZombie_HunterImp3"};
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
		zombieClass[] = {"BPZombie_RebelImp1","BPZombie_RebelImp2","BPZombie_RebelImp3","BPZombie_GuardianImp1","BPZombie_GuardianImp2","BPZombie_GuardianImp3","BPZombie_SurvivalistImp1","BPZombie_SurvivalistImp2","BPZombie_SurvivalistImp3","BPZombie_RefugeeImp1","BPZombie_RefugeeImp2","BPZombie_RefugeeImp3","BPZombie_HunterImp1","BPZombie_HunterImp2","BPZombie_HunterImp3"};
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
		zombieClass[] = {"BPZombie_RebelImp1","BPZombie_RebelImp2","BPZombie_RebelImp3","BPZombie_GuardianImp1","BPZombie_GuardianImp2","BPZombie_GuardianImp3","BPZombie_SurvivalistImp1","BPZombie_SurvivalistImp2","BPZombie_SurvivalistImp3","BPZombie_RefugeeImp1","BPZombie_RefugeeImp2","BPZombie_RefugeeImp3","BPZombie_HunterImp1","BPZombie_HunterImp2","BPZombie_HunterImp3"};
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
		zombieClass[] = {"BPZombie_RebelImp1","BPZombie_RebelImp2","BPZombie_RebelImp3","BPZombie_GuardianImp1","BPZombie_GuardianImp2","BPZombie_GuardianImp3","BPZombie_SurvivalistImp1","BPZombie_SurvivalistImp2","BPZombie_SurvivalistImp3","BPZombie_RefugeeImp1","BPZombie_RefugeeImp2","BPZombie_RefugeeImp3","BPZombie_HunterImp1","BPZombie_HunterImp2","BPZombie_HunterImp3"};
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
		zombieClass[] = {"BPZombie_RebelImp1","BPZombie_RebelImp2","BPZombie_RebelImp3","BPZombie_GuardianImp1","BPZombie_GuardianImp2","BPZombie_GuardianImp3","BPZombie_SurvivalistImp1","BPZombie_SurvivalistImp2","BPZombie_SurvivalistImp3","BPZombie_RefugeeImp1","BPZombie_RefugeeImp2","BPZombie_RefugeeImp3","BPZombie_HunterImp1","BPZombie_HunterImp2","BPZombie_HunterImp3"};
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
		zombieClass[] = {"BPZombie_RebelImp1","BPZombie_RebelImp2","BPZombie_RebelImp3","BPZombie_GuardianImp1","BPZombie_GuardianImp2","BPZombie_GuardianImp3","BPZombie_SurvivalistImp1","BPZombie_SurvivalistImp2","BPZombie_SurvivalistImp3","BPZombie_RefugeeImp1","BPZombie_RefugeeImp2","BPZombie_RefugeeImp3","BPZombie_HunterImp1","BPZombie_HunterImp2","BPZombie_HunterImp3"};
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
		zombieClass[] = {"BPZombie_RebelImp1","BPZombie_RebelImp2","BPZombie_RebelImp3","BPZombie_GuardianImp1","BPZombie_GuardianImp2","BPZombie_GuardianImp3","BPZombie_SurvivalistImp1","BPZombie_SurvivalistImp2","BPZombie_SurvivalistImp3","BPZombie_RefugeeImp1","BPZombie_RefugeeImp2","BPZombie_RefugeeImp3","BPZombie_HunterImp1","BPZombie_HunterImp2","BPZombie_HunterImp3"};
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
		zombieClass[] = {"BPZombie_RebelImp1","BPZombie_RebelImp2","BPZombie_RebelImp3","BPZombie_GuardianImp1","BPZombie_GuardianImp2","BPZombie_GuardianImp3","BPZombie_SurvivalistImp1","BPZombie_SurvivalistImp2","BPZombie_SurvivalistImp3","BPZombie_RefugeeImp1","BPZombie_RefugeeImp2","BPZombie_RefugeeImp3","BPZombie_HunterImp1","BPZombie_HunterImp2","BPZombie_HunterImp3"};
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
		zombieClass[] = {"BPZombie_RebelImp1","BPZombie_RebelImp2","BPZombie_RebelImp3","BPZombie_GuardianImp1","BPZombie_GuardianImp2","BPZombie_GuardianImp3","BPZombie_SurvivalistImp1","BPZombie_SurvivalistImp2","BPZombie_SurvivalistImp3","BPZombie_RefugeeImp1","BPZombie_RefugeeImp2","BPZombie_RefugeeImp3","BPZombie_HunterImp1","BPZombie_HunterImp2","BPZombie_HunterImp3"};
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
		zombieClass[] = {"BPZombie_RebelImp1","BPZombie_RebelImp2","BPZombie_RebelImp3","BPZombie_GuardianImp1","BPZombie_GuardianImp2","BPZombie_GuardianImp3","BPZombie_SurvivalistImp1","BPZombie_SurvivalistImp2","BPZombie_SurvivalistImp3","BPZombie_RefugeeImp1","BPZombie_RefugeeImp2","BPZombie_RefugeeImp3","BPZombie_HunterImp1","BPZombie_HunterImp2","BPZombie_HunterImp3"};
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
		zombieClass[] = {"BPZombie_RebelImp1","BPZombie_RebelImp2","BPZombie_RebelImp3","BPZombie_GuardianImp1","BPZombie_GuardianImp2","BPZombie_GuardianImp3","BPZombie_SurvivalistImp1","BPZombie_SurvivalistImp2","BPZombie_SurvivalistImp3","BPZombie_RefugeeImp1","BPZombie_RefugeeImp2","BPZombie_RefugeeImp3","BPZombie_HunterImp1","BPZombie_HunterImp2","BPZombie_HunterImp3"};
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
		zombieClass[] = {"BPZombie_RebelImp1","BPZombie_RebelImp2","BPZombie_RebelImp3","BPZombie_GuardianImp1","BPZombie_GuardianImp2","BPZombie_GuardianImp3","BPZombie_SurvivalistImp1","BPZombie_SurvivalistImp2","BPZombie_SurvivalistImp3","BPZombie_RefugeeImp1","BPZombie_RefugeeImp2","BPZombie_RefugeeImp3","BPZombie_HunterImp1","BPZombie_HunterImp2","BPZombie_HunterImp3"};
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
	


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////////////////////////////////////---Tanoa---/////////////////////////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	class Land_FuelStation_02_workshop_F : Residential {
		lootMin = 0;
		lootMax = 1;
		lootPos[] = {};
		zombiePos[] = {{-2.38269, 2.75952, -1.3381}};
	};


	class Land_FuelStation_01_workshop_F : Residential {
		lootMin = 0;
		lootMax = 1;
		lootPos[] = {};
		zombiePos[] = {{0.189758, 0.442383, -2.35523}};
	};

	class Land_Shop_Town_03_F : Residential {
		lootMin = 0;
		lootMax = 1;
		lootPos[] = {};
		zombiePos[] = {{3.15051, -1.60205, -3.24152}};
	};

	class Land_Shop_Town_04_F : Residential {
		lootMin = 0;
		lootMax = 1;
		lootPos[] = {};
		zombiePos[] = {{-1.60614, 0.494385, -0.913025}};
	};

	class Land_Shed_01_F : Residential {
		lootMin = 0;
		lootMax = 1;
		lootPos[] = {};
		zombiePos[] = {{-1.60687, -6.38696, -2.43495}};
	};

	class Land_House_Native_01_F : Residential {
		lootMin = 0;
		lootMax = 2;
		lootPos[] = {{-1.98145,0.375977,-3.10103},{1.45264,0.304688,-3.10103}};
		zombiePos[] = {{-1.98145,0.375977,-3.10103}};
	};

	class Land_House_Native_02_F : Residential {
		lootMin = 0;
		lootMax = 1;
		lootPos[] = {{-0.643555,-0.218628,-2.41486}};
		zombiePos[] = {{-0.643555,-0.218628,-2.41486}};
	};

	class Land_Temple_Native_01_F : Residential {
		lootMin = 0;
		lootMax = 1;
		lootPos[] = {{3.69824,-7.13232,-7.4369},{1.70605,1.87695,-5.95313},{-1.66504,2.03955,-5.95313},{-3.38672,-6.0752,-7.4369}};
		zombiePos[] = {{3.69824,-7.13232,-7.4369}};
	};

	class Land_Shop_Town_02_F : Residential {
		lootMin = 0;
		lootMax = 2;
		lootPos[] = {{-3.35901, -4.79883, -2.14162},{1.83295, -4.87549, -2.14162}};
		zombiePos[] = {{-3.35901, -4.79883, -2.14162}};
	};

	class Land_House_Small_05_F : Residential {
		lootMin = 0;
		lootMax = 2;
		lootPos[] = {{-2.13388, -6.6665, -2.43495},{3.43167, -6.6936, -2.43495}};
		zombiePos[] = {{3.43167, -6.6936, -2.43495}};
	};

	class Land_Slum_03_F : Residential {
		lootMin = 0;
		lootMax = 3;
		lootPos[] = {{3.1842, 2.63037, -0.648015},{-2.41299, 0.212646, -0.648015},{-1.55261, 5.0769, -0.648015}};
		zombiePos[] = {{3.1842, 2.63037, -0.648015}};
	};

	class Land_Shop_Town_01_F : Hospital {
		lootMin = 0;
		lootMax = 2;
		lootPos[] = {{2.50009, -5.72656, -3.24367},{-3.41431, 0.320068, -3.24367}};
		zombiePos[] = {{2.50009, -5.72656, -3.24367}};
	};

	class Land_House_Small_01_F : Residential {
		lootMin = 0;
		lootMax = 3;
		lootPos[] = {{-4.18524, -1.573, -0.699362},{2.59363, -2.41357, -0.699362},{-3.07559, 1.35254, -0.699362}};
		zombiePos[] = {{-4.18524, -1.573, -0.699362}};
	};


	class Land_GarageShelter_01_F : Residential {
		lootMin = 0;
		lootMax = 3;
		lootPos[] = {{-1.4111, -0.458984, -1.25335},{3.13989, 2.91602, -1.25335},{-3.05682, 2.49976, -1.25335}};
		zombiePos[] = {{-1.4111, -0.458984, -1.25335}};
	};

	class Land_Slum_01_F : Residential {
		lootMin = 0;
		lootMax = 2;
		lootPos[] = {{-2.07877, 0.360107, 0.64336},{2.83453, 0.340332, 0.669953}};
		zombiePos[] = {{-2.07877, 0.360107, 0.64336}};
	};

	class Land_Slum_02_F : Residential {
		lootMin = 0;
		lootMax = 2;
		lootPos[] = {{-0.305389, -2.59253, 0.184655},{-0.404724, 2.63135, 0.184654}};
		zombiePos[] = {{-0.305389, -2.59253, 0.184655}};
	};

	class Land_Shed_02_F : Windmill {
		lootMin = 0;
		lootMax = 1;
		lootPos[] = {{-0.0750732, 0.915771, -0.844637}};
		zombiePos[] = {{-0.0750732, 0.915771, -0.844637}};
	};

	class Land_Shed_03_F : Residential {
		lootMin = 0;
		lootMax = 1;
		lootPos[] = {{1.0065, -0.193115, -0.706496}};
		zombiePos[] = {{1.0065, -0.193115, -0.706496}};
	};

	class Land_Shed_05_F : Residential {
		lootMin = 0;
		lootMax = 1;
		lootPos[] = {{0.975372, -0.817871, -0.88905}};
		zombiePos[] = {{0.975372, -0.817871, -0.88905}};
	};

	class Land_House_Big_01_F : Residential {
		lootMin = 0;
		lootMax = 3;
		lootPos[] = {{2.3754, 2.41431, -1.01143},{6.14697, -3.13672, -1.01143},{-6.06915, -3.26758, -1.01143}};
		zombiePos[] = {{2.3754, 2.41431, -1.01143}};
	};

	class Land_House_Small_06_F : Residential {
		lootMin = 0;
		lootMax = 2;
		lootPos[] = {{-1.51416, -1.2937, -1.00068},{-2.47714, 3.82422, -1.00069}};
		zombiePos[] = {{-1.51416, -1.2937, -1.00068}};
	};

	class Land_House_Small_03_F : Residential {
		lootMin = 0;
		lootMax = 3;
		lootPos[] = {{-4.77991, 3.38013, -1.32258},{0.825806, 1.05054, -1.32258},{-4.41168, -0.804443, -1.32258}};
		zombiePos[] = {{-4.77991, 3.38013, -1.32258}};
	};

	class Land_House_Big_02_F : Residential2 {
		lootMin = 0;
		lootMax = 4;
		lootPos[] = {{-2.19427, 6.80371, -1.44146},{7.89526, 6.85718, -1.44146},{-7.306, 1.52759, -1.44146},{7.79398, -5.91113, -1.44146}};
		zombiePos[] = {{-2.19427, 6.80371, -1.44146}};
	};

	class Land_House_Small_02_F : Residential {
		lootMin = 0;
		lootMax = 2;
		lootPos[] = {{-2.03592, 3.18726, -0.714201},{-1.79587, -3.08228, -0.714201}};
		zombiePos[] = {{-2.03592, 3.18726, -0.714201}};
	};

	class Land_Cathedral_01_F : Residential {
		lootMin = 0;
		lootMax = 5;
		lootPos[] = {{-8.79471, -14.0273, -8.79766},{-8.18939, -2.76196, -9.37976},{8.72388, -4.44189, -9.37976},{-1.52133, -13.9519, -7.79962},{1.08484, -14.0137, -12.7797},{8.15009, -14.4839, -8.79766},{-3.13083, -14.5159, -12.7797},{4.13742, -14.2302, -12.7797}};
		zombiePos[] = {{-8.79471, -14.0273, -8.79766}};
	};

	class Land_Church_01_F : Residential2 {
		lootMin = 0;
		lootMax = 5;
		lootPos[] = {{7.66821, 0.79541, -9.84073},{-8.0863, 0.132324, -9.9102},{7.99713, 5.32227, -9.85913},{-8.0661, 4.22168, -9.90935},{8.22021, 9.03418, -9.96988},{-8.0401, 7.93628, -9.90474},{1.83145, -16.8994, -3.31349},{-1.79382, -16.8311, -3.31349}};
		zombiePos[] = {{-2.03592, 3.18726, -0.714201}};
	};

	class Land_Mausoleum_01_F : Residential2 {
		lootMin = 0;
		lootMax = 1;
		lootPos[] = {{-0.0413818, -0.311035, -1.88902}};
		zombiePos[] = {{-0.0413818, -0.311035, -1.88902}};
	};

	class Land_House_Big_03_F : Residential {
		lootMin = 0;
		lootMax = 5;
		lootPos[] = {{3.68713, 2.53687, -0.0890989},{9.11322, 5.76587, -3.20353},{4.06192, -3.59619, -3.17353},{-12.1282, 5.5752, -0.110209},{5.87781, 5.39722, -0.110209},{3.93524, -1.97803, -0.0890989}};
		zombiePos[] = {{3.68713, 2.53687, -0.0890989}};
	};

	class Land_Shop_City_03_F : Residential {
		lootMin = 0;
		lootMax = 3;
		lootPos[] = {{3.14648, -8.52197, -4.97515},{2.50238, -2.98901, -4.96917},{2.44846, 6.37817, -4.9716}};
		zombiePos[] = {{3.14648, -8.52197, -4.97515}};
	};

	class Land_Shop_City_05_F : Residential {
		lootMin = 0;
		lootMax = 1;
		lootPos[] = {{0.0838013, -10.9282, -7.3252}};
		zombiePos[] = {{0.0838013, -10.9282, -7.3252}};
	};

	class Land_Shop_City_02_F : Residential2 {
		lootMin = 0;
		lootMax = 4;
		lootPos[] = {{-10.0284, -8.74707, -4.34939},{1.6926, -6.53149, -4.36144},{-10.0183, -3.63184, -4.34939},{4.99255, -3.94263, -4.3614},{-2.10089, -6.80981, -4.36135},{2.85587, 0.596436, -4.36232},{6.29327, 8.94336, -4.3639}};
		zombiePos[] = {{-10.0284, -8.74707, -4.34939}};
	};

	class Land_Shop_City_01_F : Supermarket {
		lootMin = 0;
		lootMax = 3;
		lootPos[] = {{1.78928, 3.71216, -4.95248},{5.98486, 4.37817, -4.94684},{1.67078, -0.661865, -4.94684}};
		zombiePos[] = {{1.78928, 3.71216, -4.95248}};
	};

	class Land_House_Small_04_F : Residential {
		lootMin = 0;
		lootMax = 4;
		lootPos[] = {{-0.894836, -6.8457, -0.864767},{-1.5549, -3.35767, -1.08483},{-3.88763, 2.92139, -0.864767},{2.29932, -2.86841, -0.864767}};
		zombiePos[] = {{-0.894836, -6.8457, -0.864767}};
	};

	class Land_House_Big_04_F : Residential {
		lootMin = 0;
		lootMax = 6;
		lootPos[] = {{-7.94327, 1.83911, 0.278943},{-8.11606, -6.95825, -2.94955},{2.35599, 6.63867, -2.94829},{3.57843, -6.66479, -2.94715},{-4.93839, 2.52734, 0.302855},{-8.22174, 6.24023, -2.94967},{2.76233, 2.85034, 0.302855},{3.30573, -3.31909, -2.94715},{-4.70325, -3.19727, -2.94714},{4.97833, -7.00024, 0.278244}};
		zombiePos[] = {{-7.94327, 1.83911, 0.278943}};
	};

	class Land_FuelStation_01_shop_F : Supermarket {
		lootMin = 0;
		lootMax = 2;
		lootPos[] = {{0.879272, -3.35815, -2.01157},{0.562164, 3.00146, -2.01157},{-3.4357, 2.82495, -2.01157}};
		zombiePos[] = {{0.879272, -3.35815, -2.01157}};
	};

	class Land_GuardHouse_01_F : Hospital {
		lootMin = 0;
		lootMax = 2;
		lootPos[] = {{-0.609833, -2.28247, -1.00598},{-0.196716, 1.88843, -0.986296}};
		zombiePos[] = {{-0.609833, -2.28247, -1.00598}};
	};

	class Land_Hotel_01_F : Residential {
		lootMin = 0;
		lootMax = 6;
		lootPos[] = {{-4.56433, -2.82373, 4.51498},{-6.79813, -6.00098, 1.68932},{-0.601013, 1.26221, -5.28577},{-0.932465, 0.843506, 1.68932},{-5.01782, 4.73218, -5.28577},{-3.76645, -4.08203, 7.86122},{-4.77927, 4.13037, 7.77769},{-0.373962, 0.851807, -1.56068},{2.33533, 5.27295, 7.85003},{1.28775, -2.80591, 7.93644},{3.33246, -2.89233, -5.28577},{6.05392, -5.53027, 1.68932},{3.38177, 5.32153, -5.28577},{3.35306, -2.74243, 4.51505}};
		zombiePos[] = {{-4.56433, -2.82373, 4.51498}};
	};

	class Land_Hotel_02_F : Residential2 {
		lootMin = 0;
		lootMax = 5;
		lootPos[] = {{-1.8251, -7.96558, -3.38684},{-1.97763, 13.3262, -3.38684},{-4.81042, 1.11816, -3.38684},{3.48083, -0.379395, 0.227446},{6.69366, -0.655273, -3.38684},{3.48486, 2.21313, 0.227446}};
		zombiePos[] = {{-1.8251, -7.96558, -3.38684}};
	};

	class Land_Shop_City_06_F : Supermarket {
		lootMin = 0;
		lootMax = 6;
		lootPos[] = {{8.76404, -3.31494, 4.21773},{-4.2106, -5.28149, -4.04678},{-0.23584, -3.31494, 4.21698},{-4.97171, 3.18262, -0.318396},{-6.02628, 4.22705, 3.52016},{-4.00299, -0.537842, -4.04693},{1.22073, 6.52271, -4.37717},{-2.46527, 7.47656, -0.318624},{-4.15289, 6.14697, -4.04714}};
		zombiePos[] = {{8.76404, -3.31494, 4.21773}};
	};

	class Land_Addon_04_F : Residential {
		lootMin = 0;
		lootMax = 4;
		lootPos[] = {{-1.75098, -4.77222, 0.334781},{-5.31412, -6.60449, 0.334781},{-2.09225, -0.223877, 0.334781},{5.46216, -0.067627, 0.334781}};
		zombiePos[] = {{-1.75098, -4.77222, 0.334781}};
	};

	class Land_House_Big_05_F : Residential2 {
		lootMin = 0;
		lootMax = 4;
		lootPos[] = {{-8.24582, -4.57104, -1.50647},{4.431, -5.09937, -1.10083},{-2.01804, -5.05566, -1.50842},{5.09995, 5.10962, -1.11397},{-2.57425, 5.20923, -1.50842},{-8.71701, 5.15845, -1.50745}};
		zombiePos[] = {{-8.24582, -4.57104, -1.50647}};
	};

	class Land_Supermarket_01_F : Supermarket {
		lootMin = 0;
		lootMax = 7;
		lootPos[] = {{-4.51648, -4.01904, -1.4792},{-4.20337, 2.56787, -1.4792},{-4.0036, 11.9912, -1.4792},{0.435913, -10.5032, -1.53528},{-0.241211, -0.140381, -1.4792},{3.87866, -5.27783, -1.4792},{-0.453705, -3.97729, -1.4792},{3.90881, 8.56128, -1.4792},{3.56308, -0.625, -1.4792},{6.74442, 11.7043, -1.4792},{1.00629, 11.8992, -1.4792}};
		zombiePos[] = {{-4.51648, -4.01904, -1.4792}};
	};

	class Land_MultistoryBuilding_03_F : Office {
		lootMin = 0;
		lootMax = 1;
		lootPos[] = {{-7.00964, -1.89233, -24.2182}};
		zombiePos[] = {{-7.00964, -1.89233, -24.2182}};
	};

	class Land_MultistoryBuilding_01_F : Office {
		lootMin = 0;
		lootMax = 7;
		lootPos[] = {{-18.6447, -9.80688, -21.0165},{-18.2797, 16.9331, -21.0165},{-18.1681, 4.03418, -21.0165},{9.72934, -13.5056, -21.0165},{10.4345, 2.75488, -21.0165},{-4.56699, 17.5081, -21.0165},{17.3235, -6.29004, -21.0165},{18.1612, 0.734863, -21.0165}};
		zombiePos[] = {{-18.6447, -9.80688, -21.0165}};
	};


	class Land_SCF_01_boilerBuilding_F : IndustrialSmall {
		lootMin = 0;
		lootMax = 7;
		lootPos[] = {{-5.03415, -10.1162, 1.46775},{-2.5755, 6.39868, 7.88122},{7.5126, -19.158, 0.986319},{4.28134, 3.36157, 7.71709},{12.5159, 2.00708, -13.1916},{13.213, 2.56567, -17.6728},{7.58597, 13.3799, 1.002}};
		zombiePos[] = {{-5.03415, -10.1162, 1.46775}};
	};

	class Land_SM_01_shed_unfinished_F : IndustrialSmall {
		lootMin = 0;
		lootMax = 3;
		lootPos[] = {{-5.11066, 5.87988, -1.61565},{5.24899, 3.64746, -1.61565},{14.407, 1.22729, -1.61565}};
		zombiePos[] = {{-5.11066, 5.87988, -1.61565}};
	};

	class Land_DPP_01_smallFactory_F : Industrial {
		lootMin = 0;
		lootMax = 4;
		lootPos[] = {{-8.29257, 0.0751953, 2.63266},{-1.56393, -4.45581, 2.65422},{4.89172, -0.326172, 2.67528},{10.3492, -3.87451, 1.09077}};
		zombiePos[] = {{-8.29257, 0.0751953, 3.33266}};
	};

	class Land_SCF_01_generalBuilding_F : Industrial {
		lootMin = 0;
		lootMax = 5;
		lootPos[] = {{-5.39337, -17.0334, -0.333332},{3.80307, -15.4102, -9.47989},{-0.255219, -17.188, -4.81871},{6.60373, 11.2627, 10.6925},{7.14978, -3.67334, 10.5849},{-0.773987, 7.57593, 10.6786}};
		zombiePos[] = {{-5.39337, -17.0334, -0.333332}};
	};

	class Land_Warehouse_03_F : Industrial {
		lootMin = 0;
		lootMax = 3;
		lootPos[] = {{0.614441, -2.99463, -2.35811},{-6.8186, 1.5647, -2.36198},{0.534241, 1.89648, -2.36226}};
		zombiePos[] = {{0.614441, -2.99463, -2.35811}};
	};

	class Land_SCF_01_clarifier_F : Industrial {
		lootMin = 0;
		lootMax = 3;
		lootPos[] = {{-3.49701, 1.36499, 8.02543},{-2.20215, -2.17236, 7.78847},{-0.647217, 0.786377, -8.10707},{-0.4021, 3.77075, 7.82316}};
		zombiePos[] = {{-3.49701, 1.36499, 8.02543}};
	};

	class Land_SCF_01_warehouse_F : IndustrialSmall {
		lootMin = 0;
		lootMax = 3;
		lootPos[] = {{-9.82788, 14.8044, -4.56114},{8.50171, -12.301, -4.56314},{0.936584, 14.8777, 3.51185}};
		zombiePos[] = {{-9.82788, 14.8044, -4.56114}};
	};

	class Land_Warehouse_02_F : IndustrialSmall {
		lootMin = 0;
		lootMax = 3;
		lootPos[] = {{14.8137, -12.8564, -3.91857},{-3.96582, -12.6072, -3.91857},{5.00314, -12.7322, -3.91857}};
		zombiePos[] = {{14.8137, -12.8564, -3.91857}};
	};

	class Land_DPP_01_mainFactory_F : Industrial {
		lootMin = 0;
		lootMax = 5;
		lootPos[] = {{2.61719, -2.99707, 1.14967},{-5.35822, 12.7957, -9.85184},{-15.876, -11.0315, -4.48463},{-5.83136, -10.2937, 1.14967},{-16.1825, -2.6853, -4.48463},{-5.21344, 5.81885, 1.14967},{-16.3679, 7.92114, -4.48463},{9.5777, -14.001, -0.313031},{9.05548, -7.07129, -0.313031},{14.097, 8.71753, -10.5563}};
		zombiePos[] = {{2.61719, -2.99707, 1.14967}};
	};

	class Land_SM_01_shed_F : IndustrialSmall {
		lootMin = 0;
		lootMax = 3;
		lootPos[] = {{-0.805115, -0.87207, -1.56777},{-3.01227, 5.89111, -1.56777},{13.1026, 5.64966, -1.56777}};
		zombiePos[] = {{-0.805115, -0.87207, -1.56777}};
	};

	class Land_SCF_01_crystallizer_F : Industrial {
		lootMin = 2;
		lootMax = 4;
		lootPos[] = {{-2.66663, 3.33594, -9.05247},{0.989075, 1.58032, -0.438752},{-4.28229, 1.89331, -0.438752},{8.68842, -2.05542, -8.94015},{7.06305, 2.42798, -0.438752},{7.0293, 2.98975, -9.05247},{-4.16614, -0.741455, 5.00974}};
		zombiePos[] = {{-2.66663, 3.33594, -9.05247}};
	};

	class Land_SCF_01_washer_F : IndustrialSmall {
		lootMin = 0;
		lootMax = 1;
		lootPos[] = {{-3.35767, 7.94165, -1.77441}};
		zombiePos[] = {{-3.35767, 7.94165, -1.77441}};
	};

	class Land_StorageTank_01_small_F : IndustrialSmall {
		lootMin = 0;
		lootMax = 1;
		lootPos[] = {{0.212585, 0.452637, 4.88818}};
		zombiePos[] = {{0.212585, 0.452637, 4.88818}};
	};

	class Land_StorageTank_01_large_F : IndustrialSmall {
		lootMin = 0;
		lootMax = 3;
		lootPos[] = {{2.26349, -11.1431, 0.685706},{8.00897, 7.42944, 0.685706},{-11.0485, 5.77148, 0.685706}};
		zombiePos[] = {{2.26349, -11.1431, 0.685706}};
	};

	class Land_SCF_01_storageBin_big_F : IndustrialSmall {
		lootMin = 0;
		lootMax = 3;
		lootPos[] = {{4.97913, -7.36572, 8.1251},{0.420532, 7.82446, 8.16095},{-3.09741, -4.49927, 8.2393}};
		zombiePos[] = {{2.26349, -11.1431, 0.685706}};
	};

	class Land_SCF_01_storageBin_medium_F : IndustrialSmall {
		lootMin = 0;
		lootMax = 4;
		lootPos[] = {{4.53082, 0.243652, 6.86389},{0.313049, -4.96118, 6.8448},{-1.55969, 6.49146, 6.77861},{-4.19165, -0.0231934, 6.87717}};
		zombiePos[] = {{4.53082, 0.243652, 6.86389}};
	};

	class Land_SCF_01_storageBin_small_F : Industrial {
		lootMin = 0;
		lootMax = 1;
		lootPos[] = {{-0.17395, 0.900879, 7.87141}};
		zombiePos[] = {{-0.17395, 0.900879, 7.87141}};
	};

	class Land_Airport_01_hangar_F : Industrial {
		lootMin = 0;
		lootMax = 4;
		lootPos[] = {{11.248,-4.77246,-2.68301},{10.71,9.99023,-2.68304},{-10.3423,-3.17188,-2.683},{0.0146484,1.37793,-2.68302}};
		zombiePos[] = {{0.0146484,1.37793,-2.68302}};
	};

	class Land_Airport_01_terminal_F : MilitaryGeneral {
		lootMin = 1;
		lootMax = 3;
		lootPos[] = {{7.10938,6.69727,-4.0197},{0.391602,2.00781,-4.11129},{7.7998,-7.46875,-4.00853}};
		zombiePos[] = {{7.10938,6.69727,-4.0197}};
	};

	class Land_Airport_02_terminal_F : MilitaryAirfield {
		lootMin = 1;
		lootMax = 4;
		lootPos[] = {{5.20508,3.34473,-1.40005},{9.77686,-0.582031,-1.40006},{8.67529,-8.35449,-1.40005},{-0.941406,10.3916,-1.40005}};
		zombiePos[] = {{5.20508,3.34473,-1.40005}};
	};

	class Land_Barracks_01_grey_F : MilitaryAirfield {
		lootMin = 1;
		lootMax = 4;
		lootPos[] = {{-11.0996,2.625,0.605519},{-3.48828,-4.51172,3.93905},{12.3213,3.13965,0.60552},{11.0449,-2.8877,0.60552},{4.49219,2.97754,0.605519},{5.95703,-2.66309,0.60552},{-4.34473,2.64258,0.605519},{-9.1123,-2.76953,3.9395},{-9.16016,-2.56348,0.605521},{-3.29883,2.97754,3.9395},{5.87109,-2.66895,3.9395},{4.20215,2.85059,3.9395},{12.457,3.07129,3.9395},{10.6631,-3.0293,3.9395},{-11.249,2.53027,3.9395}};
		zombiePos[] = {{-11.0996,2.625,0.605519}};
	};

	class Land_Airport_01_controlTower_F : MilitaryTower {
		lootMin = 1;
		lootMax = 2;
		lootPos[] = {{0.831055,0.829102,4.65807},{0.349609,1.67676,8.08797}};
		zombiePos[] = {{0.831055,0.829102,4.65807}};
	};

	class Land_Barracks_01_camo_F : MilitarySpecial {
		lootMin = 0;
		lootMax = 4;
		lootPos[] = {{-11.0996,2.625,0.605519},{-3.48828,-4.51172,3.93905},{12.3213,3.13965,0.60552},{11.0449,-2.8877,0.60552},{4.49219,2.97754,0.605519},{5.95703,-2.66309,0.60552},{-4.34473,2.64258,0.605519},{-9.1123,-2.76953,3.9395},{-9.16016,-2.56348,0.605521},{-3.29883,2.97754,3.9395},{5.87109,-2.66895,3.9395},{4.20215,2.85059,3.9395},{12.457,3.07129,3.9395},{10.6631,-3.0293,3.9395},{-11.249,2.53027,3.9395}};
		zombiePos[] = {{-11.0996,2.625,0.605519}};
	};

	class Land_School_01_F : MilitaryGeneral {
		lootMin = 1;
		lootMax = 7;
		lootPos[] = {{12.702, -1.02222, -1.24559},{-12.491, -1.08911, -1.25239},{13.046, 2.26733, -1.24836},{-1.76117, -0.354492, -1.24738},{-12.5974, 1.91821, -1.25342},{-8.28329, 1.45117, -1.24718},{3.41837, 1.00049, -1.24892},{7.23489, -4.87646, -1.34846},{-1.24472, -4.78638, -1.34846},{7.04395, -0.836914, -1.24507},{-12.7859, -4.34058, -1.34846}};
		zombiePos[] = {{12.702, -1.02222, -1.24559}};
	};

	class Land_BasaltWall_01_gate_F : ApexMilBox2 {
		lootMin = 1;
		lootMax = 1;
		lootPos[] = {{-5.72754,0.770508,-0.959976},{-19.0254,0.921875,-0.959976},{5.50781,0.255859,-0.959976},{18.7998,0.182617,-0.959976},{5.5127,1.12305,-0.959991},{-5.44531,0.511719,-0.959991},{-18.6074,0.896484,-0.935181},{-5.5166,0.71875,-0.935181},{5.82715,0.87793,-0.935181},{5.51367,0.103516,-0.959976}};
		zombiePos[] = {{5.51367,0.103516,-0.959976},{-19.0254,0.921875,-0.959976}};
	};

	class Land_SY_01_crusher_F : MilitaryAirfield {
		lootMin = 1;
		lootMax = 4;
		lootPos[] = {{-4.97363,-5.85254,-1.55123},{7.80371,15.7402,-1.07903},{-6.05273,8.19922,11.6225},{7.6416,10.9609,11.4953}};
		zombiePos[] = {{-4.97363,-5.85254,-1.55123}};
	};

	class Land_SY_01_reclaimer_F : MilitarySpecial {
		lootMin = 1;
		lootMax = 1;
		lootPos[] = {{-14.2666,4.34961,-2.43546}};
		zombiePos[] = {{-14.2666,4.34961,-2.43546}};
	};

	class Land_ContainerCrane_01_F : MilitaryRanger {
		lootMin = 2;
		lootMax = 2;
		lootPos[] = {{-8.35352,-2.4541,7.69144},{-8.4043,1.33008,7.68802},{-8.10156,4.62061,7.70839},{-7.83398,-5.65088,7.72626}};
		zombiePos[] = {{-8.35352,-2.4541,7.69144}};
	};

	class Land_DryDock_01_middle_F : MilitarySpecial {
		lootMin = 1;
		lootMax = 3;
		lootPos[] = {{18.7539,2.27441,17.534},{18.0957,-15.3203,15.3257},{6.60645,-5.56055,2.57218},{6.18945,14.2402,2.66873},{-8.42383,10.0576,2.5397},{-12.2305,13.4209,2.5561}};
		zombiePos[] = {{18.7539,2.27441,17.534}};
	};

	class Land_DryDock_01_end_F : MilitarySpecial {
		lootMin = 1;
		lootMax = 3;
		lootPos[] = {{-12.4238,17.5684,2.54873},{-18.3037,-0.44043,12.4829},{-18.3037,-10.5811,12.6082}};
		zombiePos[] = {{-12.4238,17.5684,2.54873}};
	};




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////////////////////////////////////---Altis---/////////////////////////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////





	class Land_Airport_Tower_F: MilitaryAirfield {
	  lootMin = 1;
	  lootMax = 3;		
	  lootPos[] = {{0.0498047,4.57227,-10.4415},{-0.59375,1.88086,-7.44128},{-0.628906,1.87305,-4.44063},{-2.52148,-3.1377,-1.44165},{1.48438,-2.96387,-1.44151},{-0.555664,-4.60449,2.25613},{-0.711914,5.41797,1.55463}};
	};


	class Land_MilOffices_V1_F : Residential {
		lootMin = 3;
		lootMax = 12;
		lootPos[] = {{-11.6973,-5.16577,-2.86676},{-13.9063,-5.40881,-2.86676},{-16.2896,-5.03235,-2.86676},{-16.3076,-1.51428,-2.86676},{-15.8809,3.7937,-2.86676},{-7.6748,-3.74463,-2.86676},{-3.68848,-4.04004,-2.86675},{-4.19238,9.94861,-2.86675},{-6.66406,2.95703,-2.86675},{-15.4951,10.5059,-2.86675},{4.17383,7.82751,-2.86675},{-0.200684,10.3826,-2.86675},{6.61133,-2.31128,-2.86675},{1.42529,-4.44775,-2.86675},{15.4854,5.99048,-2.86675},{15.665,9.65295,-2.86675},{7.7334,10.0192,-2.86675},{15.4609,1.89868,-2.86675},{7.82422,-1.66028,-2.86675},{7.88281,-4.40588,-2.86675}};
		zombiePos[] = {{2.52344,2.83423,-2.86675}};
	};

	class Land_dp_mainFactory_F : Industrial {
	  lootMin = 2;
	  lootMax = 6;
	  lootPos[] = {{21.2026,-1.73877,-7.40902},{19.1074,5.32666,-7.61482},{14.7542,-1.2373,-5.51302},{18.5828,-9.68848,-4.08302},{15.7412,-17.6768,-4.08302},{12.6328,-4.27295,-4.22301},{12.8018,4.41113,-4.22302},{13.2813,6.8252,-5.51302},{0.991943,-3.6626,1.18268},{-4.92578,-6.74463,1.18268},{-2.82471,-12.8701,1.18268},{2.98218,-16.0503,1.18268},{8.64355,-13.2192,-0.280018},{9.07813,-1.58154,-0.277494},{3.4165,2.70996,1.18268},{-2.24463,5.48535,1.18268},{-15.5444,-13.9834,-4.45162},{-15.791,-5.37744,-4.45162},{-15.6294,6.93262,-4.45162}};
	  zombiePos[] = {{-7.23169,12.1245,0.76921}};
	};

	class land_jzd_stodola1 : Residential2 {
		lootMin = 1;
		lootMax = 3;
		lootPos[] = {{-0.835938,-12.3359,-1.75095},{-0.830078,-6.92383,-2.02621},{-0.93457,5.26172,-2.02625},{-0.986328,12.0122,-2.02625}};
		zombiePos[] = {{-0.835938,-12.3359,-1.75095}};
	};

	class Land_Hospital_F : Residential {
		lootMin = 3;
		lootMax = 8;
		lootPos[] = {{24.6899,-12.429,-9.58043},{25.2456,-19.407,-9.57954},{15.176,11.3064,-9.77353},{14.7322,21.208,-9.77353},{-14.0754,-18.7925,-5.86916},{-18.6328,-28.3696,-5.86916},{-4.93506,-18.8245,-5.86916},{-8.92456,-28.3167,-5.86916},{6.05225,-18.75,-5.86916},{0.674805,-28.4163,-5.86916},{22.4414,-15.7942,-5.89672},{21.3867,-0.391846,-5.8939},{20.8784,13.9963,-5.8939},{25.0698,26.7646,-5.86455},{23.5508,-30.7483,-9.57888},{0.773926,-28.3948,-1.9908},{5.69385,-18.8101,-1.9908},{-9.89648,-28.4275,-1.9908},{-4.01758,-18.762,-1.9908},{-19.1345,-28.4111,-1.9908},{-14.4526,-18.907,-1.9908},{-14.1113,-18.6973,1.90917},{-18.9285,-28.3042,1.90917},{-3.99805,-18.8354,1.90917},{-9.32983,-28.4404,1.90917},{24.4634,-12.9568,1.89508},{21.9951,-1.27905,1.90607},{18.189,-14.2151,5.82417},{17.7573,-6.59497,5.8239},{-7.35767,-24.7285,5.82307},{-18.0696,-24.509,5.82307},{-21.1587,-27.8296,5.82307}};
		zombiePos[] = {{0.330345,-0.505371,0.00143862}};
	};

	class Land_Ind_BoardsPack2 : MilitaryRanger {
		lootMin = 0;
		lootMax = 1;
		lootPos[] = {{5.75,-0.523926,-0.373108}};
		zombiePos[] = {{5.75,-0.523926,-0.373108}};
	};

	class Land_yaslisad_yellow : Residential {
		lootMin = 3;
		lootMax = 8;
		lootPos[] = {{-8.3916,7.79639,-1.37433},{-4.53711,-2.75879,-1.37433},{1.55273,3.89355,-1.37433},{0.138672,1.76855,-1.37433},{-1.8623,-4.00781,-1.37433},{9.00391,4.81299,-1.37433},{7.93945,-6.30127,1.17567},{-8.84766,-5.90771,1.17567},{-8.76758,4.70068,1.17567}};
		zombiePos[] = {{-8.3916,7.79639,-1.37433}};
	};

	class Land_budova4_in : MilitaryAirfield {
		lootMin = 0;
		lootMax = 1;
		lootPos[] = {{6.14258,-2.53516,-1.88724},{-6.27344,2.08594,-1.88724}};
		zombiePos[] = {{6.14258,-2.53516,-1.88724}};
	};

	//New Haven
	class Land_hotel : Residential {
	  lootMin = 1;
	  lootMax = 6;
	  lootPos[] = {{-1.89111,0.330078,-4.25943},{-12.498,-3.05469,-4.25943},{-17.5483,-6.9082,-4.25943},{-17.1865,9.0127,-4.25943},{-17.0508,12.3867,-4.25943},{-3.34131,11.8779,-4.25943},{3.14844,1.0625,-4.25943},{11.5229,3.23828,-4.25943},{3.55322,6.50488,-4.25943},{-0.0273438,-0.594727,-0.75906},{-4.51807,-0.208008,-4.25943},{-8.87109,-17.5557,-0.759061},{-11.374,-17.7012,-0.759062},{-12.0239,-6.41895,-0.759061},{-4.65576,-1.3125,-0.759061},{-17.7427,8.93262,-0.759061},{-18.0522,17.0762,-0.759061},{-3.47314,11.8164,-0.75906},{8.8833,17.4463,-0.759057},{11.3027,14.4707,-0.759058},{17.5513,2.7168,-0.759057},{3.80811,6.08789,-0.759057},{5.66895,-11.5078,-0.759057},{-4.77246,-2.35547,2.74082},{-8.68213,-17.377,2.74082},{-11.1543,-14.7324,2.74082},{-14.5791,-6.63477,2.74082},{-17.2739,8.78418,2.74082},{-17.3882,11.5693,2.74082},{-3.14209,11.6611,2.74082},{3.25928,0.802734,2.74082},{11.7905,3.76953,2.74082},{2.84814,-17.4824,2.74082},{17.4082,-11.3535,2.74082},{-2.12061,0.359375,6.24485},{2.74316,5.24707,6.24485},{5.76953,5.9873,6.24485},{-10.9272,2.32813,6.24485},{1.84033,13.25,6.24485},{12.9023,-0.850586,6.24485},{1.82275,-13.2139,6.24485}};
	  zombiePos[] = {{-8.40353,-4.6792,0.114153},{-1.27007,-5.67236,-7.74672}};
	};

	class Land_i_Shop_01_V2_dam_F : Residential2 {
		lootMin = 0;
		lootMax = 3;
		lootPos[] = {{-3.18848,-0.129639,-2.76158},{2.67236,3.86951,-2.76158},{-3.01563,4.95801,-2.76158},{0.0351563,2.55542,-2.76158},{-2.85449,4.98718,1.10978},{-2.93262,2.57117,1.10985},{-2.64453,-4.40759,1.0803}};
		zombiePos[] = {{1.29964,-0.73291,0.304523}};
		camPos[] =
	  {
{{1.86914,6.43701,0.333899},359.687,0,0.7},
{{2.74414,-3.89551,0.333899},180.216,0,0.7}
	  };
	};

	class Land_u_Shop_01_V1_dam_F : Residential2 {
	  lootMin = 0;
	  lootMax = 4;
	  lootPos[] = {{2.66016,3.80725,-2.88083},{-2.92188,5.11951,-2.88083},{-3.20361,-1.3501,-2.88084},{-2.62695,4.91553,0.99044},{-2.64063,2.7854,0.99049},{-2.91602,-4.36121,0.96104}};
	  zombiePos[] = {{-0.82106,0.0996094,0.304523}};
	};

	class Land_i_Shop_01_V1_dam_F : Residential {
	  lootMin = 0;
	  lootMax = 3;
	  lootPos[] = {{-3.26233,-1.63379,-2.76158},{-3.31702,4.67773,-2.76158},{2.73706,3.80566,-2.76158},{-2.7832,4.92383,1.10976},{-2.85962,2.75244,1.10983},{0.858643,-4.29492,1.0803}};
	  zombiePos[] = {{0.0892792,-1.8125,0.304523}};
	};

	class Land_i_House_Big_02_V3_dam_F : Residential {
		lootMin = 0;
		lootMax = 3;
		lootPos[] = {{2.05212,-1.38574,-2.59766},{3.64148,0.87793,-2.59766},{4.23096,3.63525,-2.59766},{-2.7832,4.92383,1.10976},{2.4436,0.647949,0.809681},{3.35913,6.3125,0.74968},{3.66528,-5.59814,-2.26032}};
		zombiePos[] = {{-0.962646,-1.58008,0.260694}};
		camPos[] =
	  {
{{-2.18262,-4.8833,-0.0583529},180.238,0,0.7},
{{0.924805,5.75317,-0.0583529},0.225878,0,0.7}
	  };
	};

	class Land_MBG_Police_Station : MilitaryGeneral {
	  lootMin = 1;
	  lootMax = 6;
	  lootPos[] = {{-6.50342,0.25,1.80144},{-6.71973,-2.51855,1.80144},{-1.13135,6.06348,1.80144},{1.5542,6.01855,-1.49856},{9.96289,-2.05127,1.80144},{-2.14941,3.52881,1.80144},{-9.60693,-5.33496,1.70144},{8.85889,3.69629,-4.528},{4.53564,6.19775,-4.528},{-0.200684,6.62354,-4.528},{14.8096,3.64502,-2.028}};
	};

	class Land_A_Office02_dam : MilitaryGeneral {
	  lootMin = 1;
	  lootMax = 5;
	  lootPos[] = {{5.15381,46.6699,-7.0166},{8.88965,45.7061,-7.01655},{12.6631,45.9482,-7.01657},{10.7241,45.8857,-2.60304},{0.755859,46.1187,-2.59668},{8.54102,46.4048,-2.60653},{14.0532,33.0352,-2.59099},{-0.335938,34.5269,-2.59838}};
	  zombiePos[] = {{2.29636,-4.76563,0.467461}};
	};

	class Land_Barrack2 : MilitaryGeneral {
	  lootMin = 1;
	  lootMax = 2;
	  lootPos[] = {{1.24023,-2.33765,-0.69342},{1.43896,-2.35083,-0.69342}};
	  zombiePos[] = {{-0.604156,-0.521973,0.536291}};
	};

	class Land_shop3 : Residential {
	  lootMin = 1;
	  lootMax = 3;
	  lootPos[] = {{-8.375,1.29688,-1.35547},{-4.10156,1.80273,-1.35547},{7.47461,0.96875,-1.35547},{3.23633,2.02148,-1.35547}};
	  zombiePos[] = {{0.615524,-2.51367,0.00143862}};
	};

	class Land_bphouse9 : Residential {
	  lootMin = 1;
	  lootMax = 4;
	  lootPos[] = {{5.22852,0.0390625,-3.74863},{-2.24805,4.29688,-3.74864},{4.75,-5.45703,-0.152167},{1.44336,-5.48633,-0.152167},{1.66992,4.70898,-0.152167},{-4.49414,1.10938,-0.152167}};
	};

	class Land_doublestory : Residential {
	  lootMin = 1;
	  lootMax = 4;
	  lootPos[] = {{-6.54102,0.578125,-3.86868},{-5.97461,-3.28516,-3.86868},{5.74219,1.02734,-3.91483},{-1.66797,-1.84375,1.9724},{-4.49023,-0.744141,0.576139},{-0.921875,-0.0351563,5.01025}};
	};

	class Land_shop4 : Residential {
	  lootMin = 0;
	  lootMax = 3;
	  lootPos[] = {{0.261719,2.17383,-2.3028},{1.06641,-0.216797,-2.31269},{5.3418,2.79492,0.764502},{-3.97852,-0.894531,0.547502},{5.25977,-4.44141,0.804252}};
	  zombiePos[] = {{0.0812378,-2.40283,0.00143862}};
	};

	class Land_stairedhouse : Residential {
	  lootMin = 0;
	  lootMax = 3;
	  lootPos[] = {{0.457031,2.17578,-2.3036},{1.16602,-0.486328,-2.31269},{5.29297,2.97266,0.764504},{-4.20703,-0.917969,0.547504},{5.33008,-4.49805,0.804255}};
	};

	class Land_House_C_4_EP1 : Residential {
	  lootMin = 0;
	  lootMax = 1;
	  lootPos[] = {{1.15479,1.61816,-0.349478}};
	  zombiePos[] = {{2.92758,-1.29932,0.576438}};
	};

	class Land_i_Stone_Shed_V1_F : Residential {
	  lootMin = 1;
	  lootMax = 4;
	  lootPos[] = {{-2.5752,0.770508,-0.100506},{-2.43359,3.04199,-0.100506},{-2.31555,3.10547,-0.100504},{-2.27319,0.4646,-0.100503},{1.69409,2.46729,-0.100505}};
	  zombiePos[] = {{0.539551,1.63818,0.261439}};
	  	 camPos[] =
	  {
{{2.25684,-1.21924,2.33805},179.748,0,0.7},
{{-1.90625,5.05957,2.33805},359.915,0,0.7}
	  };
	};

	class Land_MBG_Killhouse_2 : Residential {
	  lootMin = 0;
	  lootMax = 3;
	  lootPos[] = {{-1.35352,0.458984,-2.79856},{6.62646,-1.22852,0.501438},{-7.05566,-0.561523,-2.79856}};
	};

	class Land_afbarabizna : Residential {
	  lootMin = 1;
	  lootMax = 4;
	  lootPos[] = {{-0.882813,-0.119873,-4.22117},{0.861816,4.56323,-4.22117},{0.822266,4.57397,-0.168264},{6.37207,-2.88525,-4.22117},{-1.62891,0.195313,-0.168011}};
	  zombiePos[] = {{0.697319,2.29297,0.00851345}};
	};

	class Land_dum_mesto_in : Residential {
	  lootMin = 1;
	  lootMax = 3;
	  lootPos[] = {{-4.72266,3.63403,-4.26331},{5.46094,4.16309,-4.26418},{4.35205,4.30273,-1.28095},{-3.21973,-1.88525,-1.27583}};
	  zombiePos[] = {{-3.1794,-1.12891,0.576438}};
	};

	class Land_A_GeneralStore_01_dam : Supermarket {
	  lootMin = 1;
	  lootMax = 6;
	  lootPos[] = {{12.2156,-4.20654,-1.20155},{9.08789,-4.13037,-1.20155},{-0.777588,-6.6709,-1.20155},{-8.229,-6.05518,-1.20155},{-8.77026,-3.36963,-1.20155},{-1.74097,-1.27002,-1.20155},{12.6106,0.280762,-1.20155},{12.5601,2.53564,-1.20155},{3.43042,1.33447,-1.20155}};
	  zombiePos[] = {{-7.10291,2.55029,-1.20155}};
	};

	class Land_Market_stalls_01_EP1 : Supermarket {
	  lootMin = 1;
	  lootMax = 5;
	  lootPos[] = {{-1.65625,-2.05908,-0.80137},{6.48877,-0.418945,-1.00559},{2.90674,2.35547,-3.48355},{1.22217,2.49561,-3.48355},{5.08838,-2.01221,-3.48355},{-3.88623,2.59229,-3.48355}};
	  zombiePos[] = {{-0.556,-3.36914,0.00143909}};
	};

	class Land_A_Villa_EP1 : GhostHotelWpn {
	  lootMin = 1;
	  lootMax = 6;
	  lootPos[] = {{15.0105,-7.33594,-5.06722},{10.4622,4.73389,-5.06902},{10.7566,10.21,-1.48424},{0.405273,11.6909,-1.4844},{-3.4436,7.65723,-1.4844},{-0.0410156,14.4961,-1.4844},{16.1428,-4.70996,1.99264},{-0.789551,-1.06445,1.98447},{5.00171,8.21924,1.9793},{-8.78516,13.9453,-1.4844}};
	  zombiePos[] = {{10.6405,-13.7944,0.276548}};
	};

	class Land_A_Villa_dam_EP1 : GhostHotelWpn {
	  lootMin = 1;
	  lootMax = 6;
	  lootPos[] = {{15.0105,-7.33594,-5.06722},{10.4622,4.73389,-5.06902},{10.7566,10.21,-1.48424},{0.405273,11.6909,-1.4844},{5.00171,8.21924,1.9793},{-8.78516,13.9453,-1.4844},{10.7566,10.21,-1.48424},{0.405273,11.6909,-1.4844}};
	  zombiePos[] = {{1.23922,1.54492,0.276542}};
	};

	class Land_Unfinished_Building_01_F : Farm {
	  lootMin = 1;
	  lootMax = 4;
	  lootPos[] = {{-2.64893,5.2041,-2.30709},{0.0209961,3.27637,1.1979},{-3.21191,3.99512,4.49521},{-1.9126,0.699219,-2.2971},{-2.20557,3.99219,4.49521}};
	  zombiePos[] = {{-1.50255,-1.88135,0.18644}};
	};

	class Land_House_C_10_EP1 : Industrial {
	  lootMin = 1;
	  lootMax = 3;
	  lootPos[] = {{3.18506,-1.69971,-4.17558},{2.02734,6.59082,-4.16911},{-0.0117188,-1.44824,-4.18663}};
	  zombiePos[] = {{0.279144,-2.60449,0.0679126}};
	};

	class Land_Metal_Shed_F : Industrial {
	  lootMin = 0;
	  lootMax = 1;
	  lootPos[] = {{11.5039,3.47852,-0.649905}};
	  zombiePos[] = {{-0.0827408,0.275879,0.00143862}};
	};

	class Land_BP_Shopv1 : Residential {
	  lootMin = 1;
	  lootMax = 3;
	  lootPos[] = {{-7.80859,-0.0234375,-0.927746},{5.48633,-1.68359,3.65765},{7.41211,-0.544922,-0.927745},{3.18164,0.476563,-0.927745}};
	};

	class Land_nhhangar_2 : Industrial {
	  lootMin = 1;
	  lootMax = 3;
	  lootPos[] = {{-3.25,-8.69727,-2.56319},{2.20313,-8.60547,-2.56319},{13.4355,9.61133,-2.56319},{-13.6816,10.5664,-2.56319}};
	};

	class Land_garage : Residential {
	  lootMin = 1;
	  lootMax = 3;
	  lootPos[] = {{-1.07031,-3.7207,-3.51101},{6.16602,-2.83789,-3.51101},{-3.06445,-2.11523,0.137637},{-3.12695,-8.45313,0.136832}};
	};

	class Land_shop5 : Residential {
	  lootMin = 1;
	  lootMax = 3;
	  lootPos[] = {{5.77734,0.867188,-3.91483},{4.50781,0.347656,-0.568083},{0.892578,-2.03125,1.9027},{-4.48438,-0.193359,0.576137}};
	};

	class Land_MBG_Warehouse : Industrial {
	  lootMin = 1;
	  lootMax = 5;
	  lootPos[] = {{19.0557,-4.24268,-6.14345},{19.1943,2.79346,-6.14345},{4.63086,18.3154,-6.14345},{15.8501,-12.7695,-6.14345},{20.3242,-10.8184,-6.14345},{17.7813,-11.0132,-2.84345},{17.9644,1.25,-2.84345}};
	  zombiePos[] = {{0.286034,0.148438,0.110216}};
	};

	class Land_Ind_Garage01_EP1 : Industrial {
	  lootMin = 0;
	  lootMax = 2;
	  lootPos[] = {{-0.0136719,2.77148,-1.45472},{-0.320313,-0.717285,-1.46133}};
	};

	class Land_A_Castle_Stairs_A : Windmill {
	  lootMin = 0;
	  lootMax = 1;
	  lootPos[] = {{5.56494,1.13623,0.885544}};
	  zombiePos[] = {{7.85266,-2.42188,0.00143862}};
	};

	class Land_A_Hospital_dam : Hospital {
	  lootMin = 1;
	  lootMax = 5;
	  lootPos[] = {{18.959,3.75586,6.40882},{-20.1245,7.3208,-4.10158},{-14.9355,7.53955,-4.10158},{-11.835,-1.24219,3.54182},{14.4434,-3.98926,3.54182},{10.7412,-0.135254,3.54182},{-3.68652,-3.83594,3.54182}};
	  zombiePos[] = {{-1.48738,-4.57031,0.165338}};
	};


	//Ghost Hotel
	class Land_GH_Gazebo_F : GhostHotelWpn {
	  lootMin = 1;
	  lootMax = 1;
	  lootPos[] = {{-4.93945,2.21973,-1.73972},{-5.23242,-0.100586,-1.73972},{4.9043,-0.604492,-1.73972}};
	  zombiePos[] = {{1.3992,0.09375,0.352142}};
	};

	class Land_GH_House_1_F : GhostHotelAcc {
	  lootMin = 0;
	  lootMax = 2;
	  lootPos[] = {{3.07813,0.126953,-2.09973},{2.88281,-2.625,-2.09973},{-3.04492,0.0644531,-2.09973},{-3.48633,-5.08984,-2.09973},{2.84961,-3.23438,1.40027},{-3.05859,-3.99609,1.40027}};
	  zombiePos[] = {{-0.337059,3.57324,-2.66973}};
	};

	class Land_GH_House_2_F : GhostHotelAcc {
	  lootMin = 0;
	  lootMax = 2;
	  lootPos[] = {{2.83203,0.134766,-0.274727},{2.34375,-8.53906,-0.274727},{-2.92773,-2.35742,-0.274727},{-3.55078,-5.94141,-0.274727}};
	  zombiePos[] = {{2.27068,-1.43701,0.63144}};
	};

	class Land_GH_MainBuilding_middle_F : GhostHotelWpn {
	  lootMin = 0;
	  lootMax = 2;
	  lootPos[] = {{0.865234,7.89844,-9.10687},{-0.541016,8.20508,-9.10687}};
	  zombiePos[] = {{0.522888,-11.2622,0.547858},{7.48921,3.74219,0.8703}};
	};

	class Land_GH_MainBuilding_right_F : GhostHotelWpn {
	  lootMin = 0;
	  lootMax = 3;
	  lootPos[] = {{8.46875,-9.87109,-1.0451},{-5.2627,-6.28711,-1.04262},{-1.28516,-7.28906,-1.04262},{7.26172,1.79688,-1.04264},{-4.75781,10.8359,-1.04264},{-14.0488,-0.652344,-1.04263},{-3.73145,15.5234,-5.48277},{3.19922,3.60547,-5.48278},{6.83105,2.37695,-5.48278},{7.23535,2.98047,3.40288},{-2.31641,-5.04492,3.40288},{-13.7119,1.06055,3.40288},{2.6416,-12.9746,3.86348}};
	  zombiePos[] = {{0.68306,-12.7466,-1.04253}};
	};

	class Land_GH_MainBuilding_left_F : GhostHotelAcc {
	  lootMin = 0;
	  lootMax = 3;
	  lootPos[] = {{-3.2793,-13.6191,3.86348},{-4.72168,-6.79492,3.40288},{6.37012,7.11523,3.40288},{14.167,2.08398,3.40288},{13.6533,2.58008,-1.04263},{4.26758,6.93555,-1.04263},{-7.24121,7.45508,-1.04263},{1.10547,-7.23438,-1.04261},{5.56445,-6.01953,-1.04262},{11.9492,10.3535,-5.48277},{-2.9043,3.43945,-5.48277},{-8.33398,5.4043,-5.48277},{-10.6504,1.86328,-5.48326}};
	};

	class Land_GH_MainBuilding_entry_F : Supermarket {
	  lootMin = 1;
	  lootMax = 1;
	  lootPos[] = {{-14.3799,-2.91016,-0.147621}};
	};

	//mbg_buildings_3
	class Land_MBG_GER_HUS_4: MilitaryGeneral {
	  lootMin = 0;
	  lootMax = 2;
	  lootPos[] = {{5.21167,6.31958,-3.11289},{-4.4115,-6.9873,-3.11289},{4.78766,5.8894,-0.112885},{-4.60034,6.37842,-0.112884},{0.628723,-7.00305,-0.112885},{5.35803,0.972168,-3.11288}};
	};

	class Land_MBG_ATC_Base : MilitaryTower {
	  lootMin = 0;
	  lootMax = 2;
	  lootPos[] = {{2.59375,6.61572,-1.21875},{10.6398,-0.734741,-1.21875},{-10.3199,3.22107,-1.21875},{-0.414917,6.69513,-1.21875},{7.69458,-5.79199,-1.21875},{-3.59973,-2.29645,-1.21875},{-4.31677,-5.90637,-1.21875}};
	};

	class Land_MBG_GER_ESTATE_1 : MilitaryGeneral {
	  lootMin = 0;
	  lootMax = 2;
	  lootPos[] = {{-7.42285,-1.09564,-2.13186},{-2.61646,-6.19238,-2.13187},{7.79224,2.74725,-2.13187},{1.92188,6.84991,-2.13187},{0.285278,6.2475,-2.13187},{-4.42017,4.68774,-2.13187},{-7.95679,7.19061,-2.13187}};
	};

	class Land_MBG_GER_PUB_2 : Residential {
	  lootMin = 0;
	  lootMax = 2;
	  lootPos[] = {{-4.13208,-4.43933,-3.53085},{-6.4895,-4.65405,-3.53085},{-0.901855,-2.35876,-3.53085},{0.692627,-3.97174,-0.630849},{-6.68213,1.11908,-0.630849},{1.7168,-4.35779,-0.630849},{3.83691,4.83905,-0.630849}};
	};

	class Land_MBG_GER_RHUS_4 : MilitaryGeneral {
	  lootMin = 0;
	  lootMax = 2;
	  lootPos[] = {{1.35132,0.754883,-3.36569},{-3.61505,0.525391,-3.36569},{3.53296,1.94751,-3.36569},{-2.724,1.48633,-3.36569},{-3.09119,2.17334,-0.465688},{2.41882,-4.53125,-0.465688},{-2.7879,-3.46387,-0.465688}};
	};

	class Land_MBG_GER_ESTATE_2 : MilitaryGeneral {
	  lootMin = 0;
	  lootMax = 2;
	  lootPos[] = {{-7.89185,-2.0332,-2.13186},{0.356812,5.92041,-2.13187},{-4.2561,4.73169,-2.13187},{-8.28308,0.342041,-2.13187},{8.3877,-1.36914,-2.13187},{7.86768,-2.24854,-2.13187},{1.85046,7.19287,-2.13187},{7.96899,2.63647,-2.13186}};
	};

	class Land_MBG_GER_SUPERMARKET_1 : Supermarket {
	  lootMin = 0;
	  lootMax = 2;
	  lootPos[] = {{1.74512,9.41956,-3.2457},{2.20459,2.44592,-3.2457},{-3.9458,2.64795,-3.2457},{-5.88062,-1.16199,-3.2457},{0.574951,-1.16882,-3.2457},{-4.26514,-7.49548,-3.2457},{-7.26782,-8.84338,-3.24569},{-4.46826,15.1173,-3.24569},{8.45557,14.7134,-3.24569}};
	};

	class Land_MBG_GER_RHUS_5 : MilitaryGeneral {
	  lootMin = 0;
	  lootMax = 2;
	  lootPos[] = {{1.52612,0.43457,-3.36569},{-2.38379,2.20459,-3.36569},{-3.5072,0.480469,-3.36569},{-2.59424,2.37891,-0.465689},{2.14319,-3.84326,-0.465689},{-3.42566,-3.74316,-0.465689}};
	};

	//Bystrica Wrecks
	class C130J_wreck_EP1 : MilitaryRanger {
	  lootMin = 0;
	  lootMax = 2;
	  lootPos[] = {{0.610718,-16.6575,-5.02495},{-1.10278,-17.2419,-4.85771},{-1.18066,-12.7112,-4.67896},{-2.75354,0.430298,-5.42436},{4.98218,-6.76862,-5.38329},{6.2345,-19.516,-5.45642},{-6.29761,-0.65506,-5.45808},{-5.74207,-10.2321,-5.45009},{-4.9707,-20.96,-5.42297}};
	  zombiePos[] = {{0.610718,-16.6575,-5.02495},{-1.10278,-17.2419,-4.85771},{-1.18066,-12.7112,-4.67896},{-2.75354,0.430298,-5.42436},{4.98218,-6.76862,-5.38329},{6.2345,-19.516,-5.45642},{-6.29761,-0.65506,-5.45808},{-5.74207,-10.2321,-5.45009},{-4.9707,-20.96,-5.42297}};
	};

	//Heli Crashes
	class Land_Wreck_Heli_Attack_01_F: Default {
		zombieClass[] = {"z_soldier_pilot","z_soldier_heavy"};
		zombieChance = 1;
		lootChance = 1;
		lootMin = 0;
		lootMax = 0;
		minRoaming = 15;
		maxRoaming = 30;
		lootPos[] = {};
		zombiePos[] = {{4.81494,-8.2782,-2.78345},{-5.50391,-6.60687,-2.79407},{-4.64648,3.94952,-2.79321},{-2.03174,12.5251,-2.79022},{6.52393,10.9904,-2.81744},{8.03564,1.70105,-2.81488},{2.729,-6.4964,-2.78571}};
	};

	class Land_Wreck_Heli_Attack_02_F : MilitaryRanger {
	  lootMin = 0;
	  lootMax = 2;
	  lootPos[] = {{4.81494,-8.2782,-2.78345},{-5.50391,-6.60687,-2.79407},{-4.64648,3.94952,-2.79321},{-2.03174,12.5251,-2.79022},{6.52393,10.9904,-2.81744},{8.03564,1.70105,-2.81488},{2.729,-6.4964,-2.78571}};
	  zombiePos[] = {{4.81494,-8.2782,-2.78345},{-5.50391,-6.60687,-2.79407},{-4.64648,3.94952,-2.79321},{-2.03174,12.5251,-2.79022},{6.52393,10.9904,-2.81744},{8.03564,1.70105,-2.81488},{2.729,-6.4964,-2.78571}};
	};

	class Land_spp_Tower_F: MilitaryTower {
	  lootMin = 0;
	  lootMax = 2;
	  lootPos[] = {{-4.68848,-1.53906,23.8253},{4.66797,-1.48438,23.8254},{2.06543,-0.354492,23.8253},{-1.03418,-0.459961,23.8253}};
	  zombiePos[] = {{-0.446106,-2.9165,0.00143957}};
	};

	class Land_i_Barracks_V2_F: MilitaryGeneral {
	  lootMin = 1;
	  lootMax = 4;
	  lootPos[] = {{-12.4805,-2.8374,3.93956},{-8.61938,-2.75146,3.93958},{-12.1157,2.93311,3.93945},{-8.29663,3.05713,3.93956},{0.762207,3.00244,3.93944},{-3.53149,2.77783,3.93944},{7.24585,2.9917,3.93944},{3.36792,3.06787,3.93944},{13.0144,3.06006,3.93956},{9.96997,2.80713,3.93945},{10.3667,-2.87256,3.93945},{13.4207,-2.76416,3.93944},{13.7871,-3.14746,0.605453},{9.88916,-2.87646,0.605453},{9.72949,2.89795,0.605453},{13.0835,2.96338,0.60556},{7.38672,2.9292,0.605453},{3.2417,2.93408,0.605453},{6.84692,-2.72852,0.605576},{0.249512,3.03223,0.605576},{-4.94409,2.89795,0.605453},{-8.27783,3.12549,0.605576},{-12.6121,3.13867,0.605576},{-12.1797,-3.02393,0.605453},{-8.45752,-2.78174,0.605591},{3.36792,-2.71143,0.605521},{6.88806,-2.73096,3.9395},{3.53296,-2.80029,3.9395}};
	  zombiePos[] = {{-5.12927,-1.13721,0.60552},{-4.86264,0.454102,3.9395}};
    };

	class Land_i_Barracks_V1_F: MilitaryRanger {
	  lootMin = 1;
	  lootMax = 4;
      lootPos[] = {{-12.4805,-2.8374,3.93956},{-8.61938,-2.75146,3.93958},{-12.1157,2.93311,3.93945},{-8.29663,3.05713,3.93956},{0.762207,3.00244,3.93944},{-3.53149,2.77783,3.93944},{7.24585,2.9917,3.93944},{3.36792,3.06787,3.93944},{13.0144,3.06006,3.93956},{9.96997,2.80713,3.93945},{10.3667,-2.87256,3.93945},{13.4207,-2.76416,3.93944},{13.7871,-3.14746,0.605453},{9.88916,-2.87646,0.605453},{9.72949,2.89795,0.605453},{13.0835,2.96338,0.60556},{7.38672,2.9292,0.605453},{3.2417,2.93408,0.605453},{6.84692,-2.72852,0.605576},{0.249512,3.03223,0.605576},{-4.94409,2.89795,0.605453},{-8.27783,3.12549,0.605576},{-12.6121,3.13867,0.605576},{-12.1797,-3.02393,0.605453},{-8.45752,-2.78174,0.605591},{3.36792,-2.71143,0.605521},{6.88806,-2.73096,3.9395},{3.53296,-2.80029,3.9395}};
	  zombiePos[] = {{-5.12927,-1.13721,0.60552},{-4.86264,0.454102,3.9395}};
    };

	class Land_u_Barracks_V2_F: MilitaryGeneral {
	  lootMin = 1;
	  lootMax = 4;
      lootPos[] = {{9.60156,-1.78516,-1.8979},{6.51855,-1.8125,-1.89791},{9.64453,3.90039,-1.89791},{6.63672,4.02539,-1.89791},{3.48047,3.90527,-1.89791},{-0.208984,4.04297,-1.89791},{3.33789,-1.86035,-1.89791},{-0.00878906,-1.66406,-1.89791},{-3.13965,4.03809,-1.89791},{-8.42578,4.00879,-1.89791},{-11.6768,3.87305,-1.8979},{-15.9141,4.05859,-1.8979},{-11.6084,-1.87207,-1.89791},{-15.8135,-1.81152,-1.8979},{6.52148,-1.80957,1.43508},{9.86035,-1.89746,1.43508},{9.82129,3.94336,1.43508},{6.81543,3.96777,1.43508},{-0.197266,3.99316,1.43508},{3.58301,3.96191,1.43507},{3.51953,-1.86816,1.43508},{0.00585938,-1.80957,1.43508},{-8.50586,4.05176,1.43508},{-3.52148,3.99316,1.43508},{-11.7959,3.95703,1.43508},{-15.7744,4.02051,1.43508},{-11.6826,-1.83008,1.43507},{-15.8037,-1.77734,1.43508}};
	  zombiePos[] = {{-5.12927,-1.13721,0.60552},{-4.86264,0.454102,3.9395}};
    };

	class Land_Cargo_Patrol_V1_F: MilitaryGeneral {
	  lootMin = 1;
	  lootMax = 1;
	  lootPos[] = {{-1.54395,-1.32568,-0.55952},{1.4873,-1.25635,-0.559514}};
	  zombiePos[] = {{-0.0973206,-1.31689,0.00143862}};
	};

	class Land_Cargo_Patrol_V3_F: MilitaryGeneral {
	  lootMin = 1;
	  lootMax = 1;
	  lootPos[] = {{-1.54395,-1.32568,-0.55952},{1.4873,-1.25635,-0.559514}};
	  zombiePos[] = {{0.23333,-1.19385,0.00143862}};
	};

	class Land_Cargo_House_V1_F: MilitaryGeneral {
	  lootMin = 1;
	  lootMax = 1;
	  lootPos[] = {{-1.21692,1.12354,-0.0957499},{0.705078,3.18945,0.040287},{-1.16943,3.11414,0.0402908}};
	  zombiePos[] = {{1.00847,1.84521,0.730287}};
	};

	class Land_Research_house_V1_F: Hospital {
	  lootMin = 0;
	  lootMax = 2;
	  lootPos[] = {{-1.21692,1.12354,-0.0957499},{0.705078,3.18945,0.040287},{-1.16943,3.11414,0.0402908}};
	  zombiePos[] = {{0.1409,1.48486,0.730286}};
	};

	class Land_Cargo_House_V3_F: MilitaryGeneral {
	  lootMin = 1;
	  lootMax = 1;
	  lootPos[] = {{-1.21692,1.12354,-0.0957499},{0.705078,3.18945,0.040287},{-1.16943,3.11414,0.0402908}};
	  zombiePos[] = {{0.1409,1.48486,0.730286}};
	};

	class Land_Cargo_HQ_V1_F: MilitaryGeneral {
	  lootMin = 1;
	  lootMax = 3;
	  lootPos[] = {{0.193848,-5.96643,-3.15187},{-1.49219,-5.94324,-3.15187},{-3.16797,-5.87524,-3.15187},{-4.88477,0.80603,-3.15187},{3.18262,5.41174,-3.15187},{6.29736,5.44116,-3.15187},{4.90771,5.46997,-3.15187},{8.17627,3.14465,-3.15187},{-1.37695,2.05371,-3.27228},{-1.23828,-2.86804,-3.27228},{4.99902,-2.83301,-3.27228},{8.2085,-1.62073,-3.15187},{2.8667,-4.20215,-0.672282},{4.76563,2.05347,-3.27228}};
	  zombiePos[] = {{1.66525,-2.68457,0.603112}};
	};

	class Land_Research_HQ_F: Hospital {
	  lootMin = 1;
	  lootMax = 4;
	  lootPos[] = {{0.193848,-5.96643,-3.15187},{-1.49219,-5.94324,-3.15187},{-3.16797,-5.87524,-3.15187},{-4.88477,0.80603,-3.15187},{3.18262,5.41174,-3.15187},{6.29736,5.44116,-3.15187},{4.90771,5.46997,-3.15187},{8.17627,3.14465,-3.15187},{-1.37695,2.05371,-3.27228},{-1.23828,-2.86804,-3.27228},{4.99902,-2.83301,-3.27228},{8.2085,-1.62073,-3.15187},{2.8667,-4.20215,-0.672282},{4.76563,2.05347,-3.27228}};
	  zombiePos[] = {{1.66525,-2.68457,0.603112}};
	};

	class Land_Medevac_HQ_V1_F: Land_Research_HQ_F {};
	
	class Land_Medevac_house_V1_F: Land_Research_house_V1_F {};
	
	class Land_Cargo_HQ_V3_F: MilitaryGeneral {
	  lootMin = 1;
	  lootMax = 3;
	  lootPos[] = {{0.193848,-5.96643,-3.15187},{-1.49219,-5.94324,-3.15187},{-3.16797,-5.87524,-3.15187},{-4.88477,0.80603,-3.15187},{3.18262,5.41174,-3.15187},{6.29736,5.44116,-3.15187},{4.90771,5.46997,-3.15187},{8.17627,3.14465,-3.15187},{-1.37695,2.05371,-3.27228},{-1.23828,-2.86804,-3.27228},{4.99902,-2.83301,-3.27228},{8.2085,-1.62073,-3.15187},{2.8667,-4.20215,-0.672282},{4.76563,2.05347,-3.27228}};
	};

	class Land_Cargo_Patrol_V2_F: MilitarySpecial {
	  lootMin = 1;
	  lootMax = 1;
	  lootPos[] = {{-1.37915,-1.27954,-0.559525},{1.68091,-1.25098,-0.559509}};
	  zombiePos[] = {{-0.383286,-2.93799,0.00143957}};
	};

	class Land_Cargo_House_V2_F: MilitarySpecial {
	  lootMin = 1;
	  lootMax = 1;
	  lootPos[] = {{-1.34229,3.15845,0.0402679},{-1.79907,0.930664,-0.0957489},{0.79248,2.94873,0.0402985}};
	  zombiePos[] = {{0.963394,1.36963,0.730288}};
	};

	class Land_Cargo_HQ_V2_F: MilitarySpecial {
	  lootMin = 1;
	  lootMax = 2;
	  lootPos[] = {{0.193848,-5.96643,-3.15187},{-1.49219,-5.94324,-3.15187},{-3.16797,-5.87524,-3.15187},{-4.88477,0.80603,-3.15187},{3.18262,5.41174,-3.15187},{6.29736,5.44116,-3.15187},{4.90771,5.46997,-3.15187},{8.17627,3.14465,-3.15187},{-1.37695,2.05371,-3.27228},{-1.23828,-2.86804,-3.27228},{4.99902,-2.83301,-3.27228},{8.2085,-1.62073,-3.15187},{2.8667,-4.20215,-0.672282},{4.76563,2.05347,-3.27228}};
	  zombiePos[] = {{-1.32922,-3.04932,0.603112}};
	};

	class Land_Slum_House01_F: Farm {
	  lootMin = 0;
	  lootMax = 2;
	  lootPos[] = {{0.105957,0.813599,-1.15932}};
	  zombiePos[] = {{-0.0583591,-0.887207,0.00143862}};
	};

	class Land_i_Stone_Shed_V2_F: Residential {
	  lootMin = 0;
	  lootMax = 2;
	  lootPos[] = {{-2.31555,3.10547,-0.100504},{-2.27319,0.4646,-0.100503},{1.69409,2.46729,-0.100505}};
	  zombiePos[] = {{0.911728,1.63037,0.261439}};
	  camPos[] =
	  {
{{2.43701,-1.38916,2.0395},180.298,0,0.7},
{{-1.85449,4.89307,2.0395},359.927,0,0.7}
	  };
	};

	class Land_i_Stone_Shed_V3_F: Residential {
	  lootMin = 0;
	  lootMax = 2;
	  lootPos[] = {{-2.31555,3.10547,-0.100504},{-2.27319,0.4646,-0.100503},{1.69409,2.46729,-0.100505}};
	  zombiePos[] = {{1.24881,0.318848,0.261439}};
	};

	class Land_u_Addon_02_V1_F: Farm {
	  lootPos[] = {{-1.75635,0.878174,0.0981381},{-1.79932,3.50208,0.0981381}};
	  zombiePos[] = {{1.65491,0.633301,0.312869}};
	};

	class Land_i_Addon_02_V1_F: Farm {
	  lootPos[] = {{-1.75635,0.878174,0.0981381},{-1.79932,3.50208,0.0981381}};
	  zombiePos[] = {{1.65491,0.633301,0.312869}};
	};

	class Land_u_House_Small_02_V1_F: Residential {
	  lootMin = 0;
	  lootMax = 3;
      lootPos[] = {{6.0636,1.09912,-0.71064},{6.17444,-2.06982,-0.710496},{2.51135,-2.19971,-0.715258},{2.38208,1.46533,-0.71285},{-0.333496,-0.0717773,-0.718155},{-0.250732,-2.35596,-0.718848},{-2.41528,1.25244,-0.713598},{-2.23792,-0.848633,-0.720829}};
	  zombiePos[] = {{-0.455296,-2.03857,-0.719115}};
    };

	class Land_i_House_Small_01_V2_F: Residential {
	  lootMin = 0;
	  lootMax = 3;
	  lootPos[] = {{-0.172363,-2.64258,-1.04078},{-3.05957,-2.84131,-1.04169},{-3.27148,0.188232,-1.04229},{0.0786133,0.42041,-1.0411},{3.22168,-2.90698,-1.04009},{3.19971,-0.779297,-1.04074},{3.21826,0.960938,-1.04126},{3.22998,3.24487,-1.04195},{-2.48096,3.3772,-1.04224},{-0.046875,3.46924,-1.04203}};
	  zombiePos[] = {{3.11638,2.95703,-1.04188}};
	  camPos[] =
	  {
{{3.00513,-4.91553,1.45794},180.296,0,0.7},
{{-3.34741,5.78027,1.85938},0.348439,0,0.7}
	  };
	};

	class Land_i_House_Small_01_V3_F: Residential {
	  lootMin = 0;
	  lootMax = 3;
	  lootPos[] = {{-0.172363,-2.64258,-1.04078},{-3.05957,-2.84131,-1.04169},{-3.27148,0.188232,-1.04229},{0.0786133,0.42041,-1.0411},{3.22168,-2.90698,-1.04009},{3.19971,-0.779297,-1.04074},{3.21826,0.960938,-1.04126},{3.22998,3.24487,-1.04195},{-2.48096,3.3772,-1.04224},{-0.046875,3.46924,-1.04203}};
	  zombiePos[] = {{3.11638,2.95703,-1.04188}};
	  camPos[] =
	  {
{{2.948,-4.81641,1.35794},180.322,0,0.7},
{{-3.3645,5.54004,1.35794},0.147249,0,0.7}
	  };
	};

	class Land_i_House_Big_01_V1_F: Residential {
	  lootMin = 0;
	  lootMax = 3;
	  lootPos[] = {{-3.20898,-0.787354,-2.65491},{-3.28223,-3.64868,-2.65491},{-3.21826,-6.33276,-2.65491},{3.32715,-5.87256,-2.56491},{0.22168,-6.04272,-2.56491},{3.23828,-2.57324,-2.56491},{-0.0996094,-0.216553,-2.56491},{1.99023,-0.191895,-2.56491},{-2.84082,1.83545,-2.56491},{2.7793,5.20239,-2.56492},{1.20459,5.20142,-2.56492},{-2.94531,5.12988,-2.56492},{1.52246,-1.81738,0.855084},{1.43896,0.0837402,0.855084},{3.0376,-5.20654,0.855084},{0.737305,-5.22583,0.855084},{-2.57813,-5.18359,0.855085},{-2.56494,-2.48242,0.855083},{-2.5498,0.290283,0.855085},{3.03296,5.33447,0.855066},{-1.2627,5.9316,0.855066},{-3.33203,5.39941,0.855067}};
	  zombiePos[] = {{1.61642,-3.396,0.501438}};
	  camPos[] =
	  {
{{-2.2334,-5.9668,-0.166376},270.492,0,0.7},
{{5.49976,5.47314,-0.166376},89.5923,0,0.7}
	  };
	};

	class Land_i_House_Big_01_V2_F: Residential {
	  lootMin = 0;
	  lootMax = 3;
	  lootPos[] = {{-3.20898,-0.787354,-2.65491},{-3.28223,-3.64868,-2.65491},{-3.21826,-6.33276,-2.65491},{0.22168,-6.04272,-2.56491},{0.0517578,-2.73242,-2.56491},{-0.0996094,-0.216553,-2.56491},{1.99023,-0.191895,-2.56491},{-2.84082,1.83545,-2.56491},{2.7793,5.20239,-2.56492},{-1.15625,5.14136,-2.56492},{-2.94531,5.12988,-2.56492},{3.46191,-2.0144,0.855084},{1.43896,0.0837402,0.855084},{3.0376,-5.20654,0.855084},{0.737305,-5.22583,0.855084},{-2.57813,-5.18359,0.855085},{-2.56494,-2.48242,0.855083},{-2.5498,0.290283,0.855085},{3.03296,5.33447,0.855066},{1.05469,5.37158,0.855066},{-1.2627,5.9316,0.855066},{-3.33203,5.39941,0.855067}};
	  zombiePos[] = {{1.61642,-3.396,0.501438}};
	  camPos[] =
	  {
{{-2.41309,-5.92383,-0.166377},269.247,0,0.7},
{{5.41846,5.42139,-0.166377},90.8221,0,0.7}
	  };
	};

	class Land_i_House_Big_01_V3_F: Residential {
	  lootMin = 0;
	  lootMax = 3;
	  lootPos[] = {{-3.20898,-0.787354,-2.65491},{-3.28223,-3.64868,-2.65491},{-3.21826,-6.33276,-2.65491},{3.32715,-5.87256,-2.56491},{0.22168,-6.04272,-2.56491},{0.0517578,-2.73242,-2.56491},{3.23828,-2.57324,-2.56491},{-0.0996094,-0.216553,-2.56491},{1.99023,-0.191895,-2.56491},{-2.84082,1.83545,-2.56491},{2.7793,5.20239,-2.56492},{-1.15625,5.14136,-2.56492},{3.46191,-2.0144,0.855084},{1.52246,-1.81738,0.855084},{1.43896,0.0837402,0.855084},{3.0376,-5.20654,0.855084},{0.737305,-5.22583,0.855084},{-2.57813,-5.18359,0.855085},{-2.56494,-2.48242,0.855083},{-2.5498,0.290283,0.855085},{1.05469,5.37158,0.855066}};
	  zombiePos[] = {{1.61642,-3.396,0.501438}};
	  	camPos[] =
	  {
{{-2.35962,-5.95166,-0.0649357},268.758,0,0.7},
{{5.57275,5.60547,-0.166376},90.3151,0,0.7}
	  };
	};

	class Land_u_House_Big_01_V1_F: Residential {
	  lootMin = 0;
	  lootMax = 3;
	  lootPos[] = {{-3.28223,-3.64868,-2.65491},{-3.21826,-6.33276,-2.65491},{3.32715,-5.87256,-2.56491},{0.22168,-6.04272,-2.56491},{0.0517578,-2.73242,-2.56491},{3.23828,-2.57324,-2.56491},{-0.0996094,-0.216553,-2.56491},{1.99023,-0.191895,-2.56491},{-2.84082,1.83545,-2.56491},{2.7793,5.20239,-2.56492},{-1.15625,5.14136,-2.56492},{-2.94531,5.12988,-2.56492},{3.46191,-2.0144,0.855084},{1.52246,-1.81738,0.855084},{1.43896,0.0837402,0.855084},{3.0376,-5.20654,0.855084},{0.737305,-5.22583,0.855084},{-2.57813,-5.18359,0.855085},{-2.56494,-2.48242,0.855083},{-2.5498,0.290283,0.855085},{-1.2627,5.9316,0.855066},{-3.33203,5.39941,0.855067}};
	  zombiePos[] = {{1.61642,-3.396,0.501438}};
	};

	class Land_i_House_Small_03_V1_F: Residential {
	  lootMin = 0;
	  lootMax = 3;
	  lootPos[] = {{3.72803,2.6582,0.0643158},{3.70215,-0.348877,0.0643158},{3.68506,-3.08643,0.0643158},{3.77783,-5.17163,0.0643158},{0.0654297,-1.07813,0.0643158},{-2.31836,-1.03247,0.0643158},{-4.37158,-1.08643,0.0643158},{-4.42969,1.30811,0.0643158},{-2.49365,1.3457,0.0643158},{-2.53857,3.62476,0.0643158},{-4.36475,3.58984,0.0643158},{0.436035,3.9624,0.06431581},{0.307129,2.22656,0.0643158}};
	 zombiePos[] = {{-5.03589,4.26025,-0.371631},{3.18823,4.29395,-0.37163}};
	camPos[] =
	  {
{{0.419189,-3.13721,1.90693},179.92,0,0.7},
{{3.85254,5.72437,1.90693},359.386,0,0.7}
	  };
	};

	class Land_FuelStation_Build_F: Supermarket {
	  lootPos[] = {{1.39941,0.287109,-1.33611},{-1.19727,-0.807129,-1.33598}};
	};

	class Land_u_Shop_01_V1_F: Residential {
	  lootMin = 0;
	  lootMax = 3;
	  lootPos[] = {{2.36963,5.95361,-2.88083},{-2.61816,5.71289,-2.88083},{-2.59155,3.4292,-2.88083},{-0.245239,3.4585,-2.88083},{0.571045,1.90625,-2.88083},{0.617188,-0.823242,-2.88083},{-2.37158,-0.864258,-2.88083},{3.17603,-1.50684,-2.88083},{3.14185,5.86621,0.99011},{0.7677,6.24219,0.99011},{-2.22461,6.20166,0.99011},{-2.29724,3.13623,0.99011},{-2.67773,1.19873,0.99011},{0.970093,1.23584,0.99011},{0.990479,-0.936035,0.99011},{-2.36792,-0.937988,0.99011}};
	  zombiePos[] = {{-3.96143,2.13037,0.321439}};
	};

	class Land_i_Shop_01_V1_F: Office {
	  lootMin = 0;
	  lootMax = 3;
	  lootPos[] = {{2.36963,5.95361,-2.76157},{-2.61816,5.71289,-2.76157},{-2.59155,3.4292,-2.76157},{-0.245239,3.4585,-2.76157},{-2.51147,1.85352,-2.76157},{0.617188,-0.823242,-2.76157},{-2.37158,-0.864258,-2.76157},{3.17603,-1.50684,-2.76157},{3.14185,5.86621,1.10983},{0.7677,6.24219,1.10998},{-2.22461,6.20166,1.10971},{-2.29724,3.13623,1.10974},{0.0805664,3.24072,1.1089},{-2.67773,1.19873,1.10988},{0.990479,-0.936035,1.10987},{-2.36792,-0.937988,1.10987}};
	  zombiePos[] = {{-0.928411,0.450195,0.304523}};
	};

	class Land_i_Shop_01_V2_F: Office {
	  lootMin = 0;
	  lootMax = 3;
	  lootPos[] = {{2.36963,5.95361,-2.76157},{-2.61816,5.71289,-2.76157},{-2.59155,3.4292,-2.76157},{-2.51147,1.85352,-2.76157},{0.571045,1.90625,-2.76157},{0.617188,-0.823242,-2.76157},{-2.37158,-0.864258,-2.76157},{3.17603,-1.50684,-2.76157},{3.14185,5.86621,1.10983},{0.7677,6.24219,1.10998},{-2.22461,6.20166,1.10971},{-2.29724,3.13623,1.10974},{0.0805664,3.24072,1.1089},{-2.67773,1.19873,1.10988},{0.970093,1.23584,1.10917},{-2.36792,-0.937988,1.10987}};
	  zombiePos[] = {{-0.928411,0.450195,0.304523}};
	};

	class Land_i_Shop_01_V3_F: Office {
	  lootMin = 0;
	  lootMax = 3;
	  lootPos[] = {{2.36963,5.95361,-2.76157},{-2.61816,5.71289,-2.76157},{-2.59155,3.4292,-2.76157},{-2.51147,1.85352,-2.76157},{0.571045,1.90625,-2.76157},{0.617188,-0.823242,-2.76157},{3.17603,-1.50684,-2.76157},{3.14185,5.86621,1.10983},{0.7677,6.24219,1.10998},{-2.22461,6.20166,1.10971},{-2.29724,3.13623,1.10974},{0.0805664,3.24072,1.1089},{-2.67773,1.19873,1.10988},{0.970093,1.23584,1.10917},{0.990479,-0.936035,1.10987},{-2.36792,-0.937988,1.10987}};
	  zombiePos[] = {{-0.928411,0.450195,0.304523}};
	};

	class Land_i_Shop_02_V1_F: Office {
	  lootMin = 0;
	  lootMax = 3;
	  lootPos[] = {{-4.03467,2.91675,-2.66855},{-4.10303,0.060791,-2.67536},{-4.10059,-2.55444,-2.68736},{-0.385742,-2.80981,-2.66855},{1.99609,-2.70215,-2.67122},{1.91943,0.841064,-2.67714},{-0.822266,0.737549,-2.6699},{2.99414,3.44043,-2.67346},{-4.29688,3.31006,1.23859},{-4.54688,0.782471,1.23859},{-4.34375,-2.93335,1.23859},{-1.68701,-2.78564,1.23859},{-1.68604,0.780518,1.23859},{1.67432,1.12915,1.23859},{1.84424,-2.69556,1.23859}};
	  zombiePos[] = {{0.0283012,0.345703,0.510974}};
	};

	class Land_i_Shop_02_V2_F: Office {
	  lootMin = 0;
	  lootMax = 3;
	  lootPos[] = {{-4.03467,2.91675,-2.66855},{-4.10303,0.060791,-2.67536},{-4.10059,-2.55444,-2.68736},{-0.385742,-2.80981,-2.66855},{1.99609,-2.70215,-2.67122},{1.91943,0.841064,-2.67714},{-0.822266,0.737549,-2.6699},{2.99414,3.44043,-2.67346},{-4.29688,3.31006,1.23859},{-4.54688,0.782471,1.23859},{-4.34375,-2.93335,1.23859},{-1.68701,-2.78564,1.23859},{-1.68604,0.780518,1.23859},{1.67432,1.12915,1.23859},{1.84424,-2.69556,1.23859}};
	  zombiePos[] = {{0.0283012,0.345703,0.510974}};
	};

	class Land_i_Shop_02_V3_F: Office {
	  lootMin = 0;
	  lootMax = 3;
	  lootPos[] = {{-4.03467,2.91675,-2.66855},{-4.10303,0.060791,-2.67536},{-4.10059,-2.55444,-2.68736},{-0.385742,-2.80981,-2.66855},{1.99609,-2.70215,-2.67122},{1.91943,0.841064,-2.67714},{-0.822266,0.737549,-2.6699},{2.99414,3.44043,-2.67346},{-4.29688,3.31006,1.23859},{-4.54688,0.782471,1.23859},{-4.34375,-2.93335,1.23859},{-1.68701,-2.78564,1.23859},{-1.68604,0.780518,1.23859},{1.67432,1.12915,1.23859},{1.84424,-2.69556,1.23859}};
	  zombiePos[] = {{0.0283012,0.345703,0.510974}};
	};

	class Land_u_Shop_02_V1_F: Residential {
	  lootMin = 0;
	  lootMax = 3;
	  lootPos[] = {{-4.03467,2.91675,-2.66855},{-4.10303,0.060791,-2.67536},{-4.10059,-2.55444,-2.68736},{-0.385742,-2.80981,-2.66855},{1.99609,-2.70215,-2.67122},{1.91943,0.841064,-2.67714},{-0.822266,0.737549,-2.6699},{2.99414,3.44043,-2.67346},{-4.29688,3.31006,1.23859},{-4.54688,0.782471,1.23859},{-4.34375,-2.93335,1.23859},{-1.68701,-2.78564,1.23859},{-1.68604,0.780518,1.23859},{1.67432,1.12915,1.23859},{1.84424,-2.69556,1.23859}};
	  zombiePos[] = {{0.0283012,0.345703,0.510974}};
	};

	class Land_i_House_Big_02_V1_F: Residential {
	  lootMin = 0;
	  lootMax = 3;
      lootPos[] = {{3.41687,-5.62451,-2.28594},{0.346558,-5.32715,-2.71793},{-0.696655,-2.479,-2.62327},{1.47144,-1.46533,-2.62327},{-3.17078,3.39697,-2.62327},{0.0302734,3.61328,-2.62327},{0.0872803,0.885254,-2.62327},{3.33679,0.990234,-2.62327},{3.26233,3.65283,-2.62327},{3.80701,-2.45703,-0.825936},{-0.450684,-2.31836,0.784065},{-2.93079,-2.28662,0.784065},{-3.2793,0.929199,0.784065},{-3.33093,3.71924,0.784065},{-0.0354004,3.76416,0.784065},{3.29395,0.973633,0.784065},{3.2168,3.79492,0.784065}};
	  zombiePos[] = {{-2.37859,-2.43164,0.260694}};
	  camPos[] =
	  {
{{-2.96362,-4.6543,-0.18253},179.956,0,0.7},
{{0.0090332,5.80469,-0.18253},358.692,0,0.7}
	  };
    };

	class Land_i_House_Big_02_V2_F: Residential {
	  lootMin = 0;
	  lootMax = 3;
      lootPos[] = {{3.41687,-5.62451,-2.28594},{0.346558,-5.32715,-2.71793},{-2.8606,-5.2583,-2.72594},{-3.18958,-2.46729,-2.62327},{-0.696655,-2.479,-2.62327},{-3.02051,1.10107,-2.62327},{-3.17078,3.39697,-2.62327},{0.0302734,3.61328,-2.62327},{0.0872803,0.885254,-2.62327},{3.33679,0.990234,-2.62327},{3.26233,3.65283,-2.62327},{3.80701,-2.45703,-0.825936},{-2.93079,-2.28662,0.784065},{-3.2793,0.929199,0.784065},{-3.33093,3.71924,0.784065},{0.029541,0.914063,0.784065},{3.29395,0.973633,0.784065}};
	  zombiePos[] = {{-2.37859,-2.43164,0.260694}};
	  		camPos[] =
	  {
{{-2.93774,-4.86719,-0.0825281},179.758,0,0.7},
{{0.10376,5.76025,-0.0825281},0.246341,0,0.7}
	  };
	};

	class Land_u_House_Big_02_V1_F: Residential {
	  lootMin = 0;
	  lootMax = 3;
	  lootPos[] = {{3.44531,-5.73438,-2.10418},{0.234375,-5.50781,-2.40418},{-2.86133,-5.54883,-2.40418},{-0.347656,-2.36914,-2.40418},{-3.26563,1.00586,-2.40418},{-3.37695,3.74609,-2.40418},{-0.03125,3.88281,-2.40418},{0.0859375,0.927734,-2.40418},{3.43164,1.07031,-2.40418},{3.29492,3.90234,-2.40418},{3.73047,-2.47852,-0.644177},{-3.06836,-2.45508,0.965823},{-3.28516,3.93164,0.965823},{0.140625,4.08594,0.965823},{0.279297,0.921875,0.965823},{3.38672,1.05859,0.965823},{3.2793,3.81641,0.965823}};
	  zombiePos[] = {{-2.37859,-2.43164,0.260694}};
	};

	class Land_i_House_Big_02_V3_F: Residential {
	  lootMin = 0;
	  lootMax = 3;
      lootPos[] = {{3.41687,-5.62451,-2.28594},{0.346558,-5.32715,-2.71793},{-2.8606,-5.2583,-2.72594},{-0.696655,-2.479,-2.62327},{1.47144,-1.46533,-2.62327},{-3.02051,1.10107,-2.62327},{-3.17078,3.39697,-2.62327},{0.0302734,3.61328,-2.62327},{0.0872803,0.885254,-2.62327},{3.33679,0.990234,-2.62327},{3.26233,3.65283,-2.62327},{-0.450684,-2.31836,0.784065},{-3.2793,0.929199,0.784065},{-0.0354004,3.76416,0.784065},{0.029541,0.914063,0.784065},{3.29395,0.973633,0.784065},{3.2168,3.79492,0.784065}};
	  zombiePos[] = {{-2.37859,-2.43164,0.260694}};
	  	camPos[] =
	  {
{{-2.97632,-4.74756,-0.182529},179.796,0,0.7},
{{0.0534668,5.84766,-0.182529},0.281612,0,0.7}
	  };
	};

	class Land_i_Stone_HouseSmall_V1_F: Residential2 {
	  lootMin = 0;
	  lootMax = 4;
	  lootPos[] = {{8.22734,0.44458,-0.589163},{8.15527,3.58826,-0.589732},{3.4564,2.90991,-0.610668},{2.59058,0.161865,-0.614513},{4.92627,0.0490723,-0.604124},{-6.10596,0.276245,-0.651009},{-0.71167,0.276855,-0.629231},{-0.898926,3.85498,-0.607265},{-3.66846,3.81482,-0.609098},{-7.32617,3.89014,-0.610042},{-3.50122,0.0065918,-0.641678}};
	  zombiePos[] = {{-3.92035,1.51465,1.24412}};
	  camPos[] =
	  {
{{9.59326,-1.40234,1.73763},179.802,0,0.7},
{{-9.50903,-1.54248,1.73763},180.331,0,0.7}
	  };
	};

	class Land_i_Stone_HouseSmall_V2_F: Residential2 {
	  lootMin = 0;
	  lootMax = 4;
	  lootPos[] = {{8.22734,0.44458,-0.589163},{8.15527,3.58826,-0.589732},{3.4564,2.90991,-0.610668},{2.59058,0.161865,-0.614513},{4.92627,0.0490723,-0.604124},{-6.10596,0.276245,-0.651009},{-0.71167,0.276855,-0.629231},{-0.898926,3.85498,-0.607265},{-3.66846,3.81482,-0.609098},{-7.32617,3.89014,-0.610042},{-3.50122,0.0065918,-0.641678}};
	  zombiePos[] = {{-3.92035,1.51465,1.24412}};
	  camPos[] =
	  {
{{-9.15186,-1.71582,1.93763},179.835,0,0.7},
{{8.35498,-1.54443,1.93763},179.817,0,0.7}
	  };
	};

	class Land_i_Stone_HouseSmall_V3_F: Residential2 {
	  lootMin = 0;
	  lootMax = 4;
	  lootPos[] = {{8.22734,0.44458,-0.589163},{8.15527,3.58826,-0.589732},{3.4564,2.90991,-0.610668},{2.59058,0.161865,-0.614513},{4.92627,0.0490723,-0.604124},{-6.10596,0.276245,-0.651009},{-0.71167,0.276855,-0.629231},{-0.898926,3.85498,-0.607265},{-3.66846,3.81482,-0.609098},{-7.32617,3.89014,-0.610042},{-3.50122,0.0065918,-0.641678}};
	  zombiePos[] = {{-3.92035,1.51465,1.24412}};
	  camPos[] =
	  {
{{-9.10547,-1.60791,2.03763},180.8,0,0.7},
{{8.98096,-1.51367,2.03763},180.247,0,0.7}
	  };
	};

	class Land_Chapel_Small_V1_F: Office {
	  lootMin = 0;
	  lootMax = 4;
      lootPos[] = {{3.0332,0.702148,-0.868061},{3.20093,-0.953125,-0.868065}};
	  zombiePos[] = {{0.255089,0.45166,0.13144}};
	};
	class Land_i_House_Small_02_V2_F: Residential {
	  lootMin = 0;
	  lootMax = 2;
	  lootPos[] = {{6.03442,1.25781,-0.700291},{6.2002,-1.85278,-0.700076},{2.29346,-2.06323,-0.705112},{-2.43921,1.77112,-0.702624},{-0.638428,0.418213,-0.707245},{-0.484863,-1.89099,-0.708838},{2.76807,1.39319,-0.703706}};
	  zombiePos[] = {{-0.152046,-2.43835,-0.708446},{2.09707,-1.05069,0.422039}};
	  camPos[] =
	  {
{{-4.38574,2.74316,2.37496},270.162,0,0.7},
{{-4.44336,-3.0625,2.37496},269.624,0,0.7}
	  };
	};

	class Land_i_House_Small_02_V1_F: Residential {
	  lootMin = 0;
	  lootMax = 2;
	  lootPos[] = {{6.03442,1.25781,-0.700291},{6.2002,-1.85278,-0.700076},{2.29346,-2.06323,-0.705112},{-2.43921,1.77112,-0.702624},{-0.638428,0.418213,-0.707245},{-0.484863,-1.89099,-0.708838},{2.76807,1.39319,-0.703706}};
	  zombiePos[] = {{-0.152046,-2.43835,-0.708446},{2.09707,-1.05069,0.422039}};
	camPos[] =
	  {
{{-4.47754,2.75781,2.17496},269.97,0,0.7},
{{-4.30615,-3.24805,2.17496},270.316,0,0.7}
	  };
	};

	class Land_i_House_Small_02_V3_F: Residential {
	  lootMin = 0;
	  lootMax = 2;
	  lootPos[] = {{6.03442,1.25781,-0.700291},{6.2002,-1.85278,-0.700076},{2.29346,-2.06323,-0.705112},{-2.43921,1.77112,-0.702624},{-0.638428,0.418213,-0.707245},{-0.484863,-1.89099,-0.708838},{2.76807,1.39319,-0.703706}};
	  zombiePos[] = {{-1.76654,-0.308699,-0.709422},{2.71767,1.97228,0.422843}};
	  camPos[] =
	  {
{{-4.3125,-3.09717,2.17496},269.99,0,0.7},
{{-4.24658,2.5083,2.17496},269.989,0,0.7}
	  };
	};

	class Land_i_House_Small_01_V1_F: Residential {
	  lootMin = 0;
	  lootMax = 2;
	  lootPos[] = {{-0.116699,-2.77075,-1.04078},{-3.05786,-2.94849,-1.04198},{-3.26074,0.370728,-1.04233},{3.20459,-2.797,-1.04013},{3.20459,-0.610596,-1.04079},{3.2041,1.63867,-1.04147},{3.20459,3.68945,-1.04211},{-3.40967,3.22461,-1.04245},{-0.506836,3.32495,-1.04205}};
	  zombiePos[] = {{3.13742,4.06425,-1.0422},{-1.8452,-0.841951,0.300601},{-3.99565,2.29133,-1.04238}};
	};

	class Land_u_Addon_01_V1_F: Farm {
	  lootPos[] = {{ 3.75439,2.25977,0.0627389},{0.449585,2.1167,0.0627389}};
      zombiePos[] = {{-0.0595245,-0.375071,0.275936}};
	};

	class Land_i_Addon_04_V1_F: Residential {
	  lootMin = 0;
	  lootMax = 2;
      lootPos[] = {{1.34705,-0.558594,0.0796895},{1.20935,2.60889,0.0796895},{-0.983398,2.4248,0.0796895},{-0.809814,-0.820313,0.0796895},{-3.20898,-0.95166,0.0796895},{-3.40332,2.60596,0.0796895}};
      zombiePos[] = {{-0.713371,0.519003,0.0797052}};
	};

	class Land_i_Shed_Ind_F: Industrial {
		lootMin = 1;
		lootMax = 2;
		lootPos[] = {{10.9453,3.67578,-1.40977},{3.29883,3.96094,-1.40977}};
        zombiePos[] = {{-3.64296,-0.949286,-1.40977},{-7.19608,7.69978,-1.40977},{2.63112,6.56801,0.117537},{8.3394,-1.85183,0.117536},{-5.45096,2.22049,-1.40977}};
	};

	class Land_u_Shed_Ind_F: Industrial {
	  lootMin = 1;
	  lootMax = 2;
      lootPos[] = {{11.8018,1.76465,-1.40862},{-0.97168,5.41992,-1.40862}};
      zombiePos[] = {{-3.17618,-0.237667,-1.40862},{-5.11523,-1.31368,-1.40862}};
	};

    class Land_cargo_house_slum_F: Farm {
	  lootMin = 1;
	  lootMax = 1;
      lootPos[] = {{-3.40723,-0.123047,-0.350254},{-0.66133,-0.123047,-0.360254}};
    };

    class Land_CarService_F: Industrial {
	  lootMin = 1;
	  lootMax = 1;
      lootPos[] = {{2.58398,2.86426,-1.25606}};
      zombiePos[] = {{-2.89732,4.17072,0.531445},{4.20851,0.418526,-1.25605}};
	};

    class Land_Unfinished_Building_02_F: Industrial {
	  lootMin = 1;
	  lootMax = 3;
      lootPos[] = {{4.13965,3.50391,-2.49541},{4.12598,3.11328,0.976162},{-5.97949,3.82764,0.976164},{-0.879883,-2.16016,0.97616}};
      zombiePos[] = {{-6.76704,-2.66921,0.583867},{7.55823,-2.83138,0.816176},{-0.996796,2.30122,0.264677},{5.13263,-1.02391,-2.46926},{0.376007,4.18443,0.976173}};
	};

    class Land_Chapel_V1_F: Office {
	  lootMin = 0;
	  lootMax = 2;
      lootPos[] = {{4.67383,-2.14063,-2.80849},{4.62891,2.35156,-2.80849},{8.87891,1.38281,-2.60849},{9.00391,-1.16992,-2.60848},{10.3086,0.078125,-2.60848},{-3.08008,-1.8418,-2.80849},{-6.20898,-2.50977,-2.80849},{-6.30664,-0.00097,-2.80849},{-6.25977,2.70508,-2.80849},{-3.37695,2.05371,-2.80849}};
      zombiePos[] = {{-0.921446,-4.35441,-0.359793},{-3.53211,-0.559578,-2.80848},{3.96699,2.88368,0.301442}};
	};

	class Land_Chapel_V2_F: Residential2 {
	  lootMin = 0;
	  lootMax = 2;
      lootPos[] = {{4.67383,-2.14063,-2.80849},{4.62891,2.35156,-2.80849},{8.87891,1.38281,-2.60849},{9.00391,-1.16992,-2.60848},{10.3086,0.078125,-2.60848},{-3.08008,-1.8418,-2.80849},{-6.20898,-2.50977,-2.80849},{-6.30664,-0.00097,-2.80849},{-6.25977,2.70508,-2.80849},{-3.37695,2.05371,-2.80849}};
      zombiePos[] = {{-5.92032,-0.515862,-2.80848},{-3.15073,-0.975292,-2.80848},{6.35868,-1.1585,0.501446}};
	};

    class Land_d_Windmill01_F: Windmill {
	  lootMin = 0;
	  lootMax = 2;
      lootPos[] = {{-0.618164,-0.0664063,-2.2985},{-0.926514,0.183594,0.956192}};
      zombiePos[] = {{-1.72524,1.42796,0.448503},{-0.458199,-1.40019,1.17997}};
	};

    class Land_i_Windmill01_F: Windmill {
	  lootMin = 1;
	  lootMax = 1;
      lootPos[] = {{-0.145508,0.175781,-3.53161}};
      zombiePos[] = {{0.113251,-2.27097,0.258783}};
	};

    class Land_Cargo_Tower_V1_F: MilitarySpecial {
	  lootMin = 1;
	  lootMax = 4;
	  lootPos[] = {{1.50391,3.07275,-8.24332},{-3.38867,2.31299,-4.2958},{4.48633,3.93359,-0.120117},{-2.74707,-2.07422,-0.120117},{2.37695,-1.90869,-0.120117},{-2.7793,2.69238,-0.120117},{3.2168,-1.53467,2.47987},{3.34766,3.07275,2.47989},{-3.125,-2.14551,2.47988},{-1.75195,-5.49951,2.61591},{-4.20508,-5.41064,2.61591},{-1.71094,2.875,2.47988},{-0.103516,-0.54834,5.07988},{-0.0947266,1.65967,5.07988},{-3.45703,-0.983887,5.00473},{-3.04297,-3.07373,5.00473},{-2.92188,-5.24268,4.90717},{3.59961,-3.29346,5.00473},{3.74805,-0.783203,5.00473},{3.61914,1.56445,5.00473},{2.89844,3.87305,5.00473},{-3.07617,4.02002,5.00473}};
      zombiePos[] = {{1.05185,2.09219,4.64289},{1.44734,2.52138,-0.120123},{-1.41083,1.74687,-0.120123},{0.647049,-2.89753,-0.120123},{4.53235,2.33801,2.47988},{-2.77084,-2.14604,2.47988},{0.505249,-0.750624,5.07988},{-4.48123,-4.96986,4.90716},{3.38574,3.4875,5.00472}};
	};

	class Land_Cargo_Tower_V2_F: Land_Cargo_Tower_V1_F {};
	class Land_Cargo_Tower_V3_F: Land_Cargo_Tower_V1_F {};

	class Land_Hangar_F: MilitaryGeneral {
	  lootMin = 0;
	  lootMax = 3;
      lootPos[] = {{12.9238,-16.0156,-5.38129},{13.2031,1.00586,-5.38129},{13.0723,17.8223,-5.38129},{-13.0898,18.0801,-5.38129},{-13.2441,1.11523,-5.38129},{-13.2813,-15.8262,-5.38129}};
      zombiePos[] = {{6.95305,-11.9746,-5.38129},{-10.7848,9.17879,0.0821724}};
    };

	class Land_WIP_F: Industrial {
	  lootMin = 1;
	  lootMax = 5;
      lootPos[] = {{14.6787,-2.36621,0.362821},{-3.98242,2.84961,0.349983},{2.16797,9.51709,0.336887},{6.16309,-14.9312,4.3199},{17.0596,-15.0176,4.31885},{3.06836,-19.626,2.67387},{20.0898,-7.87695,8.33766},{13.9209,2.95947,8.35816},{-9.76172,3.26807,8.35216},{1.53711,-2.88965,8.35262},{12.7783,-9.53564,-5.06073},{2.94434,5.43555,12.2847},{8.49609,-7.56543,12.2738}};
      zombiePos[] = {{-9.13638,-17.4064,0.339439},{-14.9105,-17.4882,4.32502},{-14.9296,-17.6315,12.328},{-2.32552,0.639015,12.1393},{-14.8776,-1.15836,-5.01041},{4.4795,6.64446,8.33036},{23.5622,-0.408255,4.32463},{-5.23412,-9.00953,4.32369},{-16.3998,1.8444,4.32572},{11.799,10.9006,4.32572},{20.5781,2.64096,0.355624},{7.78381,-4.53028,0.410081},{-6.08282,-10.9154,0.367957}};
	};

	class Land_Airport_left_F: MilitaryAirfield {
	  lootMin = 1;
	  lootMax = 4;
	  lootPos[] = {{10.1934,-9.21094,-6.73733},{10.1582,-3.24414,-6.73733},{10.1465,2.78418,-6.73733},{10.1582,8.75684,-6.73734},{-0.341797,8.74023,-6.73734},{-0.314453,2.74121,-6.73733},{3.14063,-3.51758,-6.73734},{0.185547,-3.41211,-6.73734},{-5.48633,-3.52734,-4.33733},{0.167969,-3.43359,-1.73733},{3.2207,-3.40234,-1.73733},{2.17773,-13.7314,-1.73733},{-3.24219,-13.7383,-1.73733},{-4.30664,-8.50488,-1.73733},{3.14648,-8.40918,-1.73733},{-0.898438,-8.44141,-1.73733},{3.11133,1.38672,-1.73733},{-4.32617,1.21582,-1.73733},{-0.994141,1.2998,-1.73733}};
	  zombiePos[] = {{22.7289,-10.7039,-6.73733},{3.19766,10.8382,-6.73733},{-4.48877,-9.30908,-6.73733},{-5.66296,-4.47614,-6.73733}};
	};

	class Land_Airport_right_F: MilitaryAirfield {
	  lootMin = 1;
	  lootMax = 5;
	  lootPos[] = {{-10.1328,-9.2627,-6.73733},{-10.123,-3.20117,-6.73733},{-10.1406,2.78613,-6.73733},{-10.1367,8.74707,-6.73734},{0.414063,8.76172,-6.73734},{0.382813,2.75391,-6.73733},{-3.18359,-3.49707,-6.73733},{-0.171875,-3.53613,-6.73733},{5.47266,-3.37793,-4.33733},{-0.177734,-3.41504,-1.73733},{-3.0625,-3.54883,-1.73733},{3.33594,-13.7637,-1.73733},{-1.92578,-13.6777,-1.73733},{-3.07031,1.18066,-1.73733},{4.1875,1.37598,-1.73733},{0.292969,1.32715,-1.73733},{-3.08203,-8.7041,-1.73734},{4.25391,-8.67578,-1.73734},{0.511719,-8.68457,-1.73733}};
	  zombiePos[] = {{-23.0238,-13.156,-6.73733},{-10.0714,10.8136,-6.73733},{2.83099,-8.57059,-6.73733},{-3.74011,-3.73913,-1.73733},{4.48181,-7.98229,-1.73733},{-12.3656,-0.0517769,-1.77733}};
	};

	class Land_Airport_center_F: MilitaryAirfield {
	  lootMin = 0;
	  lootMax = 1;
	  lootPos[] = {{5.87305,-4.85156,-2.71987},{-0.169922,-4.87109,-2.71987},{-6.1543,-4.84375,-2.71987}};
	  zombiePos[] = {{1.53436,2.58577,1.62012},{6.40649,-6.47994,4.35143}};
	};

	class Land_Offices_01_V1_F: Office {
	  lootMin = 1;
	  lootMax = 6;
	  lootPos[] = {{-16.0742,6.23047,-7.05899},{0.427734,-4.54883,-7.05899},{0.347656,-6.54297,-3.15899},{0.556641,2.23828,-3.15254},{0.582031,-6.47852,0.741015},{0.511719,2.23438,0.752233},{0.451172,-6.56445,4.66223},{10.6406,-1.82227,4.66545},{10.4063,-5.3418,4.66539},{5.41406,2.37695,4.66545},{2.50195,-4.31641,9.84601},{-8.08398,3.31055,9.84601},{-12.0293,3.41016,9.84601},{-7.99023,0.0136719,9.84601},{-11.6133,-0.0625,9.84601}};
	  zombiePos[] = {{-8.90836,5.21408,0.91644},{12.51,2.88769,0.916441},{7.54931,-2.34369,-3.1592},{10.0256,-4.29255,4.6653},{-1.36759,-4.19531,9.84601},{-12.7128,5.46808,9.84601}};
	};

	class Land_Hospital_side2_F: Hospital {
	  lootPos[] = {{12.7568,-9.91699,7.26484},{-7.75635,-9.7832,7.26484},{-9.72217,-2.43066,7.26484},{-7.55859,2.85938,7.26484},{12.9551,2.94238,7.26484}};
	  zombiePos[] = {{1.51189,-6.57607,-8.10451},{12.1999,0.210857,10.6315}};
	};

	class Land_Hospital_main_F: Hospital {
	  lootPos[] = {{13.6084,-6.68359,7.35378},{13.6191,8.27734,7.35377},{12.6855,-0.703125,-8.0128},{12.7051,-10.2695,-8.01451},{12.7305,-4.97461,-8.01355}};
	  zombiePos[] = {{-4.42381,-3.13822,-8.01557},{12.1158,0.146727,-8.0129},{-10.0075,-13.6044,7.35378},{11.1091,12.8222,7.35378}};
	};

	class Land_Hospital_side1_F: Hospital {
	  lootPos[] = {{-2.02271,4.40527,7.46628}};
	};

	class Land_Castle_01_tower_F: Windmill {
	  lootPos[] = {{1.47852,-0.152344,7.94255},{-0.722656,-0.335938,7.94255},{0.136719,2.17578,-9.47995},{-1.57422,-0.599609,-9.47995}};
	  zombiePos[] = {{-1.45456,1.99575,0.90144},{0.940186,-0.876995,7.94255}};
	};

	class Land_Church_01_V1_F: Office {
	  lootMin = 0;
	  lootMax = 3;
	  lootPos[] = {{2.63867,-5.86914,-6.44266},{4.85547,-5.84375,-6.44352},{-4.6777,5.62891,-5.49442},{-4.55859,-5.44727,-5.46942},{-4.37109,2.29297,-5.74353},{-4.30469,0.103516,-5.74363},{-4.36133,-2.1582,-5.74363},{4.79688,6.11328,-6.43541},{2.55664,6.03418,-6.43854}};
	  zombiePos[] = {{-5.3556,-5.36489,-5.46942},{-7.56526,5.41127,-6.36837},{0.943439,-5.71712,0.347615},{0.947718,5.69737,0.347051}};
	};

	class Land_d_Stone_HouseBig_V1_F: Residential2 {
	  lootMin = 0;
	  lootMax = 2;
	  lootPos[] = {{2.38867,0.490234,-1.64107},{1.88672,-2.36523,-1.64107},{-0.230469,-1.41602,-1.64107},{-2.57227,-1.41602,-1.64107},{-2.55859,2.73438,-1.64107},{-2.58594,-2.26367,1.21893},{-2.58398,0.548828,1.21893},{-0.0078125,-1.32813,1.21893}};
	  zombiePos[] = {{-0.401978,0.079566,0.201439},{4.58708,-0.975426,1.2179},{-2.07076,-1.02454,1.21893}};
	};

    class Land_d_House_Small_01_V1_F: Residential {
	  lootMin = 0;
	  lootMax = 2;
	  lootPos[] = {{4.34766,0.695313,-0.833241},{7.39844,-1.23633,-0.832468},{7.34375,1.18945,-0.833197},{7.58398,3.6543,-0.833943},{7.46094,5.89258,-0.83462},{4.69336,5.10352,-0.83438},{2.15625,5.89844,-0.83462}};
	  zombiePos[] = {{1.16675,-1.08092,-0.0357738},{0.0596008,5.10263,0.299722}};
	};

    class Land_d_House_Big_01_V1_F: Residential {
	  lootMin = 0;
	  lootMax = 3;
	  lootPos[] = {{-4.81836,-2.02539,-2.26079},{-4.5918,0.974609,-2.26079},{-4.74414,3.57422,-2.26079},{-4.50391,6.21875,-2.17079},{-1.94727,5.12891,-2.17079},{-4.71875,9.53906,-2.17079},{-2.5332,0.60742,-2.17079},{-0.378906,9.66016,-2.17079},{1.65625,9.72852,-2.17079},{1.36328,-0.335938,1.24921},{-3.0625,-0.427734,1.24921},{0.0800781,4.22266,1.24921},{-1.875,3.50977,1.24921},{-3.92969,5.41797,1.24921},{-4.66016,9.56641,1.24921},{-2.61523,9.56641,1.24921},{-0.460938,9.62109,1.24921},{1.86133,9.68555,1.24921}};
	  zombiePos[] = {{-2.85852,-2.24411,0.41144},{-3.94824,2.29169,0.50144},{3.58066,3.38753,0.501442},{-3.47345,-2.00591,3.95618}};
	};

    class Land_d_Shop_01_V1_F: Supermarket {
	  lootMin = 0;
	  lootMax = 2;
	  lootPos[] = {{1.94531,-2.84766,-2.88083},{-0.300781,-1.50781,-2.88083},{2.11719,0.117188,-2.88083},{5.16992,4.1582,-2.88083},{5.63086,-3.14453,-2.88083},{3.29492,-0.0351563,0.990366},{3.27539,-1.88672,0.990722},{-0.126953,-3.00586,0.990933}};
	  zombiePos[] = {{-2.63547,0.967216,0.579785},{3.20279,1.95217,0.304527},{2.02206,-1.04215,0.990727}};
	};

    class Land_d_Shop_02_V1_F: Office {
	  lootMin = 0;
	  lootMax = 2;
	  lootPos[] = {{2.84766,-2.65234,-2.77123},{2.90234,-0.339844,-2.77122},{0.234375,-3.01953,-2.77123},{-3.88086,3.95703,-2.77122},{-3.66406,1.2207,-2.77122},{-4.16016,3.88672,1.11533},{3.13477,-2.0332,1.12029}};
	  zombiePos[] = {{0.0483093,-0.879813,0.524281},{-3.68832,0.601044,0.524282},{2.22437,-3.74491,1.12245}};
	};

    class Land_d_House_Small_02_V1_F: Residential {
	  lootMin = 0;
	  lootMax = 2;
	  lootPos[] = {{6.56055,1.7832,-0.972471},{6.41797,-1.71094,-0.966599},{5.26367,0.257813,-0.965581},{2.49609,0.285156,-0.955943}};
	  zombiePos[] = {{4.04957,-1.47091,0.402474}};
	};

    class Land_d_House_Big_02_V1_F: Residential {
	  lootMin = 0;
	  lootMax = 3;
	  lootPos[] = {{-5.45508,-2.4375,-2.90418},{-3.30469,-2.36719,-2.90418},{-0.333984,-1.50586,-2.90418},{-4.97852,0.890625,-2.90418},{-5.16992,3.63281,-2.90418},{-1.84766,3.99805,-2.90418},{-1.87695,0.960938,-2.90418},{1.69727,1.06445,-2.90418},{1.65039,3.82617,-2.90418},{-2.20703,-2.31445,0.550041},{-5.10352,-2.34961,0.550041},{-4.98828,1.18945,0.49004},{-5.10938,3.76367,0.49004},{-1.58984,3.91992,0.49004},{-1.82227,1.02344,0.49004},{1.25781,1.11328,0.49004},{1.17578,3.60352,0.49004}};
	};

    class Land_d_Stone_HouseSmall_V1_F: Residential2 {
	  lootMin = 0;
	  lootMax = 2;
	  lootPos[] = {{10.5898,-1.04883,-0.558845},{9.71094,2.46875,-0.562763},{6.18945,2.34375,-0.572402},{7.21875,-1.5332,-0.563762},{4.5957,-1.55664,-0.585564},{1.11133,-1.57422,-0.601113},{1.24805,2.29883,-0.575366}};
	  zombiePos[] = {{-5.34857,0.469847,-0.161058},{6.08151,3.32187,1.2699}};
	};

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////////////////////////////////////---Namalsk---/////////////////////////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	class Land_vys_budova_p1: GhostHotelAcc {
	  lootMin = 0;
	  lootMax = 3;
	  lootPos[] = {{2.4624,-8.021,-2.95804},{-4.64941,4.06689,-2.96088},{-5.31152,-8.7666,-2.96088},{-0.174316,2.87109,-2.96088},{-3.39502,-10.0088,5.59122},{2.73975,-10.1479,5.59122},{-4.79004,8.28369,5.59122}};
	  zombiePos[] = {{2.4624,-8.021,-2.95804}};
	};

	class Land_budova4_winter: GhostHotelWpn {
	  lootMin = 0;
	  lootMax = 3;
	  lootPos[] = {{5.13574,-1.35352,-1.09824},{1.49512,-1.01855,-1.09824},{-1.68164,-1.41846,-1.09824},{-4.87158,-1.37744,-1.09821},{-8.27148,-1.3999,-1.09824}};
	  zombiePos[] = {{5.13574,-1.35352,-1.09824}};
	};

	class land_part1: Residential {
	  lootMin = 0;
	  lootMax = 2;
	  lootPos[] = {{-3.20459,7.86816,1.93861},{4.60498,-1.1416,1.93847},{4.41943,-1.15039,6.60104}};
	  zombiePos[] = {{-3.20459,7.86816,1.93861}};
	};

	class land_part2: Residential {
	  lootMin = 0;
	  lootMax = 2;
	  lootPos[] = {{4.67017,-4.80566,1.18411},{-1.51294,-5.83496,-9.86775}};
	  zombiePos[] = {{4.67017,-4.80566,1.18411}};
	};

	class land_part3: Residential {
	  lootMin = 0;
	  lootMax = 2;
	  lootPos[] = {{7.79761,1.19629,5.94947},{-2.20337,-3.9668,-9.7823}};
	  zombiePos[] = {{7.79761,1.19629,5.94947}};
	};

	class land_seb_residental: Residential {
	  lootMin = 0;
	  lootMax = 2;
	  lootPos[] = {{-4.08008,-2.68457,-3.67615},{-5.64746,8.41504,-3.7113},{2.44531,9.46289,-3.82397},{-4.21387,5.95605,0.533455},{-5.71191,0.193359,0.56192},{-1.00342,-0.426758,0.564983}};
	  zombiePos[] = {{-4.08008,-2.68457,-3.67615}};
	};

	class land_provoz2: Residential {
	  lootMin = 0;
	  lootMax = 2;
	  lootPos[] = {{4.33691,0.48291,-2.51849},{-4.18262,0.500977,-2.51849}};
	  zombiePos[] = {{4.33691,0.48291,-2.51849}};
	};

	class land_Tovarna1: Industrial {
	  lootMin = 0;
	  lootMax = 2;
	  lootPos[] = {{-0.883789,-3.4165,-5.75442},{-6.61621,-3.34155,-5.75442}};
	  zombiePos[] = {{-0.883789,-3.4165,-5.75442}};
	};

	class land_panelova: Industrial {
	  lootMin = 0;
	  lootMax = 2;
	  lootPos[] = {{3.89453,6.33936,-11.0968},{-8.10742,-3.23755,-4.08966},{3.88477,6.63721,-4.08966},{-5.82617,-3.70654,3.34402}};
	  zombiePos[] = {{3.89453,6.33936,-11.0968}};
	};

	class land_seb_bouda3: Industrial {
	  lootMin = 0;
	  lootMax = 2;
	  lootPos[] = {{-2.2041,4.32813,-1.72865},{-1.33984,-3.07324,-1.72853},{2.15332,-4.34473,-1.72865}};
	  zombiePos[] = {{-2.2041,4.32813,-1.72865}};
	};

	class land_provoz1: Industrial {
	  lootMin = 0;
	  lootMax = 2;
	  lootPos[] = {{0.272949,2.35254,-2.30756}};
	  zombiePos[] = {{0.272949,2.35254,-2.30756}};
	};

	class land_pozorovatelna: MilitarySpecial {
	  lootMin = 0;
	  lootMax = 2;
	  lootPos[] = {{-0.921631,-0.211914,7.54509}};
	  zombiePos[] = {{-0.921631,-0.211914,7.54509}};
	};

	class land_x_vez_tex: MilitarySpecial {
	  lootMin = 0;
	  lootMax = 2;
	  lootPos[] = {{-0.302734,0.267578,-4.60329},{-0.320313,0.262695,-0.273438}};
	  zombiePos[] = {{-0.302734,0.267578,-4.60329}};
	};

	class land_seb_main_fac: MilitarySpecial {
	  lootMin = 0;
	  lootMax = 4;
	  lootPos[] = {{3.64551,4.72852,8.63873},{19.6426,4.90674,8.63873},{6.71484,0.195313,-5.79362},{1.68164,-3.21875,-5.85434}};
	  zombiePos[] = {{3.64551,4.72852,8.63873}};
	};



	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////////////////////////////////////---A2 LOOT COORDS---/////////////////////////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//A2Residential//
	class Land_HouseB_Tenement: A2Residential {
	  lootMin = 1;
	  lootMax = 5;
	  lootPos[] = {{5.40576,9.89551,-20.7845},{5.99023,14.1689,-20.7845},{12.9609,14.0718,-20.7845},{14.6069,8.92383,-20.7845},{-2.75635,-2.08594,-20.7845}};
	  zombiePos[] = {{-0.374323,-10.7536,0.760329},{13.2221,6.13053,0.75458}};
	};

    class Land_Hlidac_budka: A2Residential {
	  lootMin = 1;
	  lootMax = 2;
	  lootPos[] = {{-2.3186,1.5127,-0.78363},{2.02075,0.444336,-0.78363},{-0.460938,1.75879,-0.78363}};
	  zombiePos[] = {{2.47562,0.964444,0.286029}};
	};

	class Land_Panelak: A2Residential {
	  lootMin = 3;
	  lootMax = 12;
	  lootPos[] = {{-0.919922,-6.66309,2.77144},{-5,-1.91602,2.77145},{-4.85742,-4.64355,2.77145},{-4.98242,2.63525,2.77144},{0.523438,-6.77734,2.77143},{4.28613,-1.54199,2.77144},{3.79199,2.97217,2.77145},{4.4248,-2.05371,0.0714188},{4.88965,-4.22119,0.0714226},{0.609375,-6.65625,0.0714226},{-0.956055,-6.7793,0.0714264},{-4.80957,-1.85107,0.071434}};
	  zombiePos[] = {{-3.54482,-4.86334,1.84779},{5.57391,-0.850953,0.0714293},{0.586411,4.77575,1.32865},{0.892166,-2.64693,2.77145},{-4.24239,-4.381,5.62586},{5.85315,1.40665,5.62586}};
	};

	class Land_Panelak2: A2Residential {
	  lootMin = 1;
	  lootMax = 3;
	  lootPos[] = {{3.81738,2.90381,5.43666},{4.75879,-1.08154,5.43666},{4.05273,-3.51074,5.43665}};
	  zombiePos[] = {{2.76161,-1.33901,0.404441},{0.0453644,-3.87748,-2.46338},{-3.96274,-6.28521,0.220611},{6.75305,1.15716,0.22061},{2.98633,-1.30668,2.96265},{-0.140656,-2.15526,5.59185},{-6.36244,0.963103,5.59185}};
	};

	class Land_rail_station_big: A2Residential {
	  lootMin = 1;
	  lootMax = 5;
	  lootPos[] = {{-4.97266,4.55737,-5.04438},{0.458496,4.85229,-5.04438},{2.4624,2.21851,-5.04438},{-1.32373,-2.60571,-5.04438},{-3.29443,-0.121826,-5.04438},{-1.07764,2.36646,-5.04438},{7.46045,-3.41528,-5.04438},{8.93408,3.1189,-5.04438},{-8.16357,-5.12842,-5.04438}};
	  zombiePos[] = {{8.24359,-5.60308,-5.04437},{-2.95041,0.284914,0.0903606}};
	};

	class Land_A_Office01: A2Residential {
	  lootMin = 8;
	  lootMax = 12;
	  lootPos[] = {{-2.50391,-2.46948,-4.528},{4.23535,-0.336914,-4.528},{4.11133,6.1123,-4.528},{0.242188,6.06299,-4.528},{4.31641,3.74023,-4.528},{5.08887,0.219727,-4.528},{11.6504,-1.5647,-4.528},{14.5811,-4.1123,-4.528},{13.8545,-0.749023,-4.528},{-7.7627,5.59082,-4.528},{1.81152,0.993408,-2.028},{4.93164,4.31982,-2.028},{1.18945,6.07031,-2.028},{2.23145,3.76563,-2.028},{-4.76367,-2.51221,-2.028},{-14.5596,-3.40723,-2.028},{-15.2705,5.92773,-2.028},{-10.9063,6.04175,0.472008},{-6.30762,3.30078,0.472006},{7.6416,6.38696,0.472001},{13.6729,6.5957,0.471999},{13.1924,-2.58691,0.471998},{3.0918,2.4375,6.20491},{-1.45703,-2.28369,6.20491},{-2.12988,4.51587,0.472005},{4.74414,-4.60156,-2.01486},{8.3457,-1.10718,-2.028},{9.94727,-3.74146,-2.028},{7.13867,-2.50732,-2.028},{12.8701,4.70923,-2.028},{15.3721,3.42383,-2.028}};
	  zombiePos[] = {{-3.17618,-0.237667,-1.40862},{-1.22578,-0.108491,0.353261},{13.2608,-0.14642,0.35326},{-7.13467,-3.25512,-2.028},{12.4859,-0.250937,2.85324},{-9.83003,3.8986,0.472009},{-0.488312,-0.405581,6.20491}};
	};

	class Land_A_Office02: A2Residential {
	  lootMin = 1;
	  lootMax = 2;
	  lootPos[] = {{-9.54163,6.70972,-4.2847},{-6.6897,15.5615,-4.2847}};
	  zombiePos[] = {{-11.0586,3.75628,0.48033},{5.26664,-5.28573,0.467167}};
	};

	class Land_HouseV_1I4: A2Residential {
      lootMin = 1;
	  lootMax = 5;
	  lootPos[] = {{-1.20117,3.66797,-2.72587},{0.457031,3.84375,-2.7287},{-3.99023,-2.20703,-2.76518},{-3.85156,-3.88086,-2.76517},{-0.597656,-4.81055,-2.76764},{0.416016,-3.54883,-2.76971}};
	  zombiePos[] = {{0.195831,2.40296,0.0981808},{-2.87917,-4.52488,0.0642371}};
	};

	class Land_HouseV_1L1: A2Residential {
	  lootMin = 1;
	  lootMax = 1;
	  lootPos[] = {{1.36328,5.69531,-1.05734}};
	  zombiePos[] = {{1.18196,5.17822,1.97615}};
	};

	class Land_kulna: A2Residential {
	  lootMin = 1;
	  lootMax = 2;
	  lootPos[] = {{0.504395,0.218262,-1.11643},{-0.496582,1.93262,-1.12826}};
	  zombiePos[] = {{-0.05513,1.53177,-1.14343}};
	};

	class Land_HouseV2_02_Interier: A2Residential {
	  lootMin = 4;
	  lootMax = 8;
	  lootPos[] = {{7.23096,5.37207,-5.53067},{8.55005,0.754883,-5.53067},{5.20166,-1.54004,-5.53067},{3.34912,1.9707,-5.53067},{-3.62598,3.05371,-5.53067},{-5.4812,-0.0292969,-5.53067},{-5.83325,3.26563,-5.53067},{-5.71045,5.49414,-5.53067}};
	  zombiePos[] = {{8.00394,2.79662,0.974684},{-6.96446,-1.80681,0.974684}};
	};

	class Land_Shed_wooden: A2Residential {
	  lootMin = 1;
	  lootMax = 2;
	  lootPos[] = {{1.26807,-0.361328,-1.29153},{-0.342773,1.0293,-1.29153}};
	  zombiePos[] = {{1.30486,-0.560452,-1.29152}};
	};

	class Land_sara_Domek_sedy: A2Residential {
	  lootMin = 1;
	  lootMax = 4;
	  lootPos[] = { {-5.42773,-0.0853271,-2.14194},{-3.83325,2.83679,-2.14195},{-1.302,2.88782,-2.14195},{-1.33203,0.0751953,-2.14195},{4.79736,2.76135,-2.14195},{5.14478,0.92395,-2.14195},{3.03687,0.258667,-2.14195},{1.75952,1.85815,-2.14195}};
	  zombiePos[] = {{-0.501459,5.38334,0.574741}};
	};

	class Land_HouseBlock_A1: A2Residential {
	  lootMin = 1;
	  lootMax = 3;
	  lootPos[] = {{-3.88745,3.70276,-8.80817},{-4.03369,-0.415649,-8.80689},{-4.11938,-3.42834,-8.80614}};
	  zombiePos[] = {{-0.110706,-1.29088,0.208089}};
	};

	class Land_HouseBlock_A3: A2Residential {
	  lootMin = 1;
	  lootMax = 3;
	  lootPos[] = {{0.041626,-4.92554,-5.44172},{0.189575,-0.549438,-5.44172},{0.16394,3.87402,-5.44172}};
	  zombiePos[] = {{1.53608,-0.891657,0.00144386}};
	};

	class Land_HouseBlock_A1_1: A2Residential {
	  lootMin = 1;
	  lootMax = 3;
	  lootPos[] = {{-4.18341,-3.61426,-4.69881},{-3.97186,-0.03125,-4.74394},{-3.83856,3.39917,-4.70387}};
	  zombiePos[] = {{-5.61555,1.03652,0.00144482}};
	};

	class Land_HouseBlock_B6: A2Residential {
	  lootMin = 1;
	  lootMax = 3;
	  lootPos[] = {{-3.79626,-3.95361,-7.61886},{-3.92651,-0.837646,-7.61886},{-3.81757,2.81543,-7.61886}};
	  zombiePos[] = {{-0.683449,0.752823,0.00144768}};
	};

	class Land_hut06: A2Residential {
	  lootMin = 1;
	  lootMax = 2;
	  lootPos[] = {{0.328125,2.26953,-1.57786},{-0.552368,-0.0620117,-1.53837}};
	  zombiePos[] = {{0.738697,-0.206698,0.00144005}};
	};

	class Land_ruin_01: A2Residential {
	  lootMin = 1;
	  lootMax = 4;
	  lootPos[] = {{-4.31934,-0.115234,-1.45578},{3.41309,0.270508,-1.71365},{3.00293,3.42773,-1.55765},{0.62207,-1.73779,-1.49048}};
	  zombiePos[] = {{-2.57296,-0.471788,-1.71901},{2.91686,3.11248,-1.43596}};
	};

	class Land_HouseV2_04_interier: A2Residential {
	  lootMin = 1;
	  lootMax = 5;
	  lootPos[] = {{7.49463,5.8374,-5.73902},{7.50989,-0.930176,-5.74176},{1.95532,4.16406,-5.73938},{2.10876,6.60645,-5.7386},{-2.30017,4.22461,-5.73936},{-5.13306,6.74365,-5.73856},{-4.74658,2.68457,-5.73985}};
	  zombiePos[] = {{7.29661,2.03883,0.433712},{-1.74097,5.89041,0.435414}};
	};

	class Land_HouseV2_01A: A2Residential {
	  lootMin = 1;
	  lootMax = 2;
	  lootPos[] = {{-3.52881,-3.16895,-5.60346},{-1.62988,-3.25439,-5.66887}};
	  zombiePos[] = {{-2.47099,-4.68128,0.379124}};
	};

	class Land_psi_bouda: A2Residential {
	  lootMin = 1;
	  lootMax = 1;
	  lootPos[] = {{-1.77002,-1.45166,1.95942}};
	};

	class Land_KBud: A2Residential {
	  lootMin = 1;
	  lootMax = 1;
	  lootPos[] = {{-0.0170898,0.0114746,-0.66367}};
	};

	class Land_HouseV_1I1: A2Residential {
	  lootMin = 1;
	  lootMax = 1;
	  lootPos[] = {{-0.0136719,-2.29492,-2.8231}};
	  zombiePos[] = {{1.14199,-3.29258,0.140466}};
	};

	class Land_sara_domek_zluty: A2Residential {
	  lootMin = 1;
	  lootMax = 5;
	  lootPos[] = {{2.95703,3.00732,-2.4337},{7.06738,2.95557,-2.4337},{6.36304,-0.236328,-2.43375},{0.627686,-0.586914,-2.43387},{-0.659912,2.05371,-2.4337},{-2.77515,0.751953,-2.43372},{-5.07666,3.04492,-2.43361},{-6.17139,-2.33691,-2.43382},{-3.75293,-3.54688,-2.43382}};
	  zombiePos[] = {{5.84912,-0.179358,-2.43374},{-4.87813,3.03097,-2.43362}};
	};

	class Land_BoatSmall_2b: A2Residential {
	  lootMin = 1;
	  lootMax = 1;
	  lootPos[] = {{0.00390625,-0.250977,-0.348389}};
	};

	class Land_A_MunicipalOffice: A2Residential {
	  lootMin = 7;
	  lootMax = 14;
	  lootPos[] = {{-4.66113,-6.27173,-18.429},{3.31641,-5.77417,-18.429},{-0.20752,-6.48682,-18.429},{-9.72412,-4.88745,-3.78903},{-9.57813,3.55615,-3.78903},{-7.16797,11.0737,-3.78903},{5.07422,11.1838,-3.78903},{9.3208,5.38623,-3.78903},{9.65332,-4.82056,-3.78903},{3.23535,-0.105957,-0.169027},{4.85205,-3.69019,-0.169027},{-0.80127,-7.89087,-0.169027},{-4.4082,-4.91772,-0.169027},{-4.90771,-2.23169,-0.169027}};
	  zombiePos[] = {{-0.324745,0.790091,0.50058},{-9.06357,4.36548,-3.78903},{3.65574,-4.8002,-0.169024},{9.83522,10.6084,-3.78902}};
	};

	class Land_Shed_M02: A2Residential {
	  lootMin = 1;
	  lootMax = 1;
	  lootPos[] = {{-0.0136719,-1.44629,-1.54199}};
	};

//A2Supermarket//
	class Land_A_FuelStation_Build: A2Supermarket {
	  lootMin = 1;
	  lootMax = 3;
	  lootPos[] = {{-1.31958,-0.655151,-1.57448},{1.82349,0.769653,-1.57458},{1.67871,-0.918701,-1.57458},{-1.23242,1.26794,-1.57458}};
	  zombiePos[] = {{-0.432242,1.14055,0.0533562}};
	};

	class Land_A_GeneralStore_01a: A2Supermarket {
	  lootMin = 4;
	  lootMax = 8;
	  lootPos[] = {{-6.93213,1.0708,-1.20155},{-7.2959,-2.68213,-1.20155},{-3.41406,-4.39307,-1.20155},{-1.28809,-2.57861,-1.20155},{0.903809,-4.35986,-1.20155},{3.1377,-3.40771,-1.20155},{7.53418,-2.69971,-1.20154},{13.9653,-4.50342,-1.20155},{10.2617,0.109863,-1.20155},{10.5869,-3.84375,-1.20155},{7.84521,-0.137207,-1.20154},{3.57471,0.0356445,-1.20154},{-0.370605,5.17676,-1.20155},{4.77783,5.57617,-1.20155},{13.0874,4.35645,-1.20155},{12.9932,6.31689,-1.20155},{7.36328,3.00928,-1.20155},{1.93091,2.17236,-1.20154},{-3.82715,5.3335,-1.20155},{-7.55029,8.54199,-1.20154},{-4.42407,8.96631,-1.20154},{3.72705,8.36084,-1.20155},{9.84033,8.3374,-1.20155},{-2.90918,1.32031,-1.20155}};
	  zombiePos[] = {{1.18944,2.24468,0.0634532},{0.0841217,-2.90033,-1.20155}};
	};

	class Land_A_GeneralStore_01: A2Supermarket {
	  lootMin = 4;
	  lootMax = 8;
	  lootPos[] = {{-9.38965,-3.30371,-1.20155},{-3.77539,-3.86865,-1.20155},{1.31836,1.46631,-1.20155},{9.01367,3.8457,-1.20155},{13.3008,-1.77832,-1.20155},{9.81055,1.43213,-1.20155},{1.65039,5.14355,-1.20155},{0.753906,-3.69531,-1.20155},{13.3125,-7.65137,-1.20155},{11.168,-3.73682,-1.20155},{8.89453,-8.37402,-1.20155},{-2.04492,-7.58105,-1.20155},{-7.84766,-5.73633,-1.20155},{-8.22461,-7.32422,-1.20155},{3.79004,-5.69336,-1.20155},{-9.38379,4.46191,-1.20155},{-3.5752,4.46533,-1.20155},{-3.33789,0.612793,-1.20155},{10.5918,-9.9458,-1.21082},{0.105469,-9.6084,-1.21082},{-4.86035,-10.4209,-1.21082},{-6.80859,-1.23975,-1.20155},{1.12207,-1.58887,-1.20155}};
	  zombiePos[] = {{2.75413,8.46811,-1.21154},{6.98885,0.895187,1.21346},{9.91042,-2.39816,1.21346}};
	};

	class Land_A_Pub_01: A2Supermarket {
	  lootMin = 4;
	  lootMax = 8;
	  lootPos[] = {{1.83398,0.393799,-5.7462},{-1.76514,0.334473,-5.74622},{-6.62207,-6.55371,-5.74622},{-4.63623,-0.100586,-5.74622},{-5.75928,-3.05029,-5.74622},{-2.08203,0.922852,-1.76122},{-4.76514,-5.89087,-1.76122},{-6.94385,-1.9375,-1.76122},{-4.05225,-0.779785,-1.76122},{1.39795,-1.73779,-1.76122},{3.13867,-2.78564,-1.76122},{3.58301,-0.591309,-1.76122},{3.03027,-4.04346,-1.76122},{1.94092,3.18799,-1.76122},{-0.0961914,6.22437,-1.76122},{5.30469,7.55957,-1.76122},{6.72559,-2.72705,-1.76122},{2.56885,-4.6001,-5.74621},{4.06738,5.41406,-5.74622},{0.753418,2.2998,-5.74622}};
	  zombiePos[] = {{1.42735,-0.687559,0.235219},{6.16164,-0.506718,0.23522},{-6.35141,-0.196085,0.235222},{0.702454,-4.07554,-1.76122}};
	};

	class Land_Church_01: A2Supermarket {
	  lootMin = 1;
	  lootMax = 1;
	  lootPos[] = {{-6.92102,-0.382813,-4.21339}};
	  zombiePos[] = {{-7.29311,0.898535,-4.22156}};
	};

	class Land_Church_03: A2Supermarket {
	  lootMin = 1;
	  lootMax = 9;
	  lootPos[] = {{5.15332,-6.96875,-14.3021},{-1.79053,-7.68018,-14.3021},{-0.0263672,-2.98438,-14.3021},{-0.00341797,2.02246,-14.3021},{5.49878,7.20508,-14.3021},{5.38892,3.4043,-14.3021},{3.23657,2.76074,-14.3021},{-1.51001,7.66309,-14.3021},{-7.6416,4.8125,-14.3021},{-6.56592,-4.59131,-14.3021},{9.552,2.22363,-13.7588},{9.93262,-3.85254,-13.7588}};
	  zombiePos[] = {{-14.6633,1.42354,0.102157},{6.15488,0.567348,0.649271}};
	};

//A2Medical//
	class Land_A_Hospital: A2Medical {
	  lootMin = 5;
	  lootMax = 10;
	  lootPos[] = {{-16.0313,-2.62695,-7.33966},{-16.0313,-5.16016,-7.33966},{-12.3125,-2.23438,-7.33966},{-12.2598,-5.29492,-7.33966},{-6.60742,-2.66406,-7.33966},{-6.46484,-5.01563,-7.33966},{3.59766,-2.44922,-7.33966},{3.66797,-5.41602,-7.33966},{7.01172,-2.25,-7.33966},{7.33203,-5.45313,-7.33966},{9.17188,-2.42578,-7.33966},{8.87891,-5.4375,-7.33966},{11.4863,-3.69336,-7.33966},{13.5469,-5.12109,-7.33966},{17.3516,-5.57422,-7.33966},{11.8945,-5.64648,-7.33966},{-3.83398,-5.49219,-7.33966},{-0.974609,-5.28125,-7.33966},{2.00586,-5.58008,-7.33966},{-20.0547,0.560547,-4.35153},{-20.2344,6.91016,-4.35153},{-14.9199,7.26563,-4.35153},{-8.81641,7.64648,-4.35153},{21.2129,3.17188,6.15884},{17.7363,3.05078,6.15884},{18.998,-0.289063,6.15884},{16.0918,-0.234375,6.15884},{-15.7969,0.876953,3.29184},{-6.41016,2.79297,3.29184},{-7.99609,-4.20703,3.29184},{-0.585938,-0.714844,3.29184},{4.48828,-4.12109,3.29184},{10.9492,0.0195313,3.29184},{14.3867,-4.19922,3.29184}};
	  zombiePos[] = {{-0.961845,1.77217,-0.659793},{9.86405,0.244219,0.16144}};
	};

//A2IndustrialSmall//
	class Land_Ind_Workshop01_01: A2IndustrialSmall {
	  lootMin = 1;
	  lootMax = 3;
	  lootPos[] = {{0.595215,-2.43115,-1.29412},{1.24365,0.463867,-1.295},{-0.663574,-0.50293,-1.29837}};
	  zombiePos[] = {{1.64704,-1.52143,0.147095}};
	};

	class Land_Ind_Garage01: A2IndustrialSmall {
	  lootMin = 1;
	  lootMax = 3;
	  lootPos[] = {{-0.580078,-1.49707,-1.23483},{-0.834473,2.75781,-1.22563},{2.47754,-1.12891,-1.23714},{1.31934,1.63086,-1.23228}};
	  zombiePos[] = {{-0.0508118,0.399624,0.043191}};
	};

	class Land_Ind_Workshop01_02: A2IndustrialSmall {
	  lootMin = 1;
	  lootMax = 3;
	  lootPos[] = {{1.1543,-0.552246,-1.42943},{-1.18665,-0.178223,-1.42868},{-0.661621,1.104,-1.42682}};
	  zombiePos[] = {{-1.54793,3.56147,0.138637}};
	};

	class Land_Ind_Workshop01_04: A2IndustrialSmall {
	  lootMin = 1;
	  lootMax = 3;
	  lootPos[] = {{-1.37415,4.18896,-1.53123},{0.695435,4.24561,-1.52934},{-1.06677,2.69531,-1.53062},{0.79248,-4.60742,-1.49341},{-1.84424,-6.1709,-1.44427},{-1.05566,-4.08398,-1.51927},{1.43774,-6.59424,-1.41742}};
	  zombiePos[] = {{1.14999,-4.25311,-1.31288}};
	};

	class Land_Ind_Workshop01_L: A2IndustrialSmall {
	  lootMin = 1;
	  lootMax = 3;
	  lootPos[] = {{-3.26172,4.75439,-1.30246},{0.175781,3.91748,-1.30766},{-2.37891,2.35303,-1.30405},{4.10547,-4.10791,-1.31345},{0.727539,-2.61621,-1.31418},{2.54688,-2.17725,-1.31482},{1.52344,-3.79443,-1.31332}};
	};

	class Land_Shed_W01: A2IndustrialSmall {
	  lootMin = 1;
	  lootMax = 1;
	  lootPos[] = {{-1.54102,-0.00390625,-1.41129}};
	  };

	class Land_Tovarna2: A2IndustrialSmall {
	  lootMin = 5;
	  lootMax = 10;
	  lootPos[] = {{-11.6309,7.2052,-5.55933},{-12.0674,2.56909,-5.55933},{-4.89355,6.6394,-5.55933},{-3.74121,2.90393,-3.89665},{-12.8672,1.44519,-2.23135},{-12.415,8.1311,-2.23135},{-12.7236,4.11255,-2.23135},{-3.99805,8.9801,-2.23156},{-7.33105,8.44214,-2.23156},{-4.55371,5.22644,-2.23156},{-11.4746,2.92114,1.66661},{-11.0703,8.13818,1.66661},{-4.67578,7.32678,1.62174},{-2.68262,3.44763,3.4243},{-13.1953,-8.95862,3.4243},{-8.80859,-0.443481,0.401226},{-12.1328,-0.149414,0.424298},{-2.03418,6.61414,-5.55933},{0.239258,1.72278,-5.59793},{6.22461,-3.948,-4.61825},{-6.39355,-8.24353,-5.59541},{-10.8496,-6.91211,-5.56572},{-6.77637,-1.73083,-5.56019}};
	  zombiePos[] = {{-6.39465,-3.66172,0.0526285}};
	};

	class Land_Ind_Vysypka: A2IndustrialSmall {
	  lootMin = 1;
	  lootMax = 5;
	  lootPos[] = {{0.486084,4.95459,-4.96861},{1.08032,-0.406738,-4.96801},{-0.0354004,-10.8208,-4.96686},{-5.07788,-16.4624,-4.96759},{-6.30298,2.92969,-4.96838},{-6.26685,26.7349,-4.9772},{1.64697,23.4038,-4.97097},{7.14575,3.92529,-4.96972},{4.63599,-12.1621,-4.96971}};
	  zombiePos[] = {{-4.42424,21.8294,1.21818},{4.25772,-14.4564,1.22701}};
	};

	class Land_Misc_Cargo1Ao: A2IndustrialSmall {
	  lootMin = 1;
	  lootMax = 3;
	  lootPos[] = {{0.48877,-1.61377,-1.09224},{0.012207,2.19263,-1.09224},{0.00976563,0.19043,-1.09224}};
	  zombiePos[] = {{0.561142,2.5316,0.116995}};
	};

	class Land_Misc_Cargo1Bo: A2IndustrialSmall {
	  lootMin = 1;
	  lootMax = 3;
	  lootPos[] = {{-0.322021,1.68555,-1.09222},{0.548584,-1.96289,-1.09222},{0.223389,-0.580078,-1.09222}};
	  zombiePos[] = {{-0.42627,-2.04652,0.116996}};
	};

	class Land_Nav_Boathouse: A2IndustrialSmall {
	  lootMin = 1;
	  lootMax = 4;
	  lootPos[] = {{5.27588,5.51953,3.9203},{5.49609,0.106445,4.19408},{1.68945,7.5166,3.80288},{-5.03613,6.19141,3.91093},{-5.63037,-1.27246,4.41481},{-6.98779,5.52441,3.9814},{-2.92236,9.2002,3.73014},{6.99463,7.80859,3.80663},{7.00342,-2.07422,4.31929}};
	  };

	class Land_Rail_House_01: A2IndustrialSmall {
	  lootMin = 1;
	  lootMax = 3;
	  lootPos[] = {{2.81152,3.61426,-1.28266},{-1.82178,3.10547,-1.28266},{0.487793,3.38867,-1.28266}};
	  zombiePos[] = {{0.718613,2.96083,-1.28266}};
	};

	class Land_Ind_Expedice_1: A2IndustrialSmall {
	  lootMin = 1;
	  lootMax = 4;
	  lootPos[] = {{-6.87695,-18.2285,-3.48672},{-0.315918,13.1416,-3.48672},{-0.5625,13.8926,9.71017},{5.66846,-18.3174,-5.75726},{1.67725,2.15137,-5.6839},{-11.7915,-13.8818,-3.48672},{0.120605,13.0664,-5.6839}};
	  zombiePos[] = {{0.58709,-2.1097,-3.48673},{12.4533,-12.4154,-5.75725}};
	};

	class Land_Ind_Mlyn_03: A2IndustrialSmall {
	  lootMin = 1;
	  lootMax = 3;
	  lootPos[] = {{-5.604,4.47461,-4.17218},{-3.09521,-2.06934,-4.17218},{2.34961,-5.01953,9.02472}};
	  zombiePos[] = {{-3.48158,-1.48273,0.54736},{4.20403,5.4496,5.54897}};
	};

	class Land_Ind_Pec_01: A2IndustrialSmall {
	  lootMin = 1;
	  lootMax = 3;
	  lootPos[] = {{-1.73682,-10.9668,-22.3766},{3.95752,-12.5781,-17.425},{-0.951172,-0.967773,-3.83344},{-0.181641,15.7451,0.253754},{-0.237793,-13.3857,6.21796},{-6.78613,-7.21973,14.7371}};
	};

	class Land_Ind_SiloVelke_01: A2IndustrialSmall {
	  lootMin = 1;
	  lootMax = 2;
	  lootPos[] = {{2.62646,7.77051,-5.45245},{-5.62451,3.42188,11.8912},{-10.4751,0.642578,11.8912},{-1.60742,8.15918,21.9993}};
	};

	class Land_A_Crane_02b: A2IndustrialSmall {
	  lootMin = 1;
	  lootMax = 1;
	  lootPos[] = {{-3.4707,-0.149414,-6.06299},{-10.9609,-0.0419922,-5.6626},{-9.85547,-0.046875,0.922455}};
	};

	class Land_Misc_GContainer_Big: A2IndustrialSmall {
	  lootMin = 1;
	  lootMax = 1;
	  lootPos[] = {{2.28223,0.792969,0.0986633}};
	};

	class Land_trafostanica_velka: A2IndustrialSmall {
	  lootMin = 1;
	  lootMax = 4;
	  lootPos[] = {{-0.688965,5.47168,-2.61597},{0.803223,6.91602,-2.61597},{1.89258,-1.68164,-2.61597},{-2.82227,-6.4502,-2.61597}};
	};

//A2Industrial//
	class Land_SS_hangar: A2Industrial {
	  lootMin = 1;
	  lootMax = 3;
	  lootPos[] = {{-6.58618,-14.3215,-5.87254},{-6.2467,1.62549,-5.87254},{-5.69775,17.615,-5.87254},{6.62952,17.8831,-5.87254},{6.90967,1.25562,-5.87254},{7.96753,-15.7249,-5.87254}};
	  zombiePos[] = {{8.33995,-13.1413,-0.579065},{10.3468,8.92519,0.0821695}};
	};

	class Land_A_BuildingWIP: A2Industrial {
	  lootMin = 6;
	  lootMax = 12;
	  lootPos[] = {{1.21094,-7.8457,-6.49645},{12.9277,-8.17578,-6.52684},{13.5586,10.957,-6.4361},{7.38867,1.63477,-6.45478},{-4.38477,0.429688,-6.4023},{-23.1035,10.4023,-6.45496},{-22.832,-7.80664,-2.53182},{-22.5898,10.2207,-2.53182},{0.652344,10.2285,-2.53182},{1.93359,-7.44531,-2.53294},{12.4531,-7.79297,-2.53308},{12.7246,-2.02539,1.48651},{-16.6992,4.30469,1.49397},{1.02344,4.80273,1.50588},{-20.9902,-5.60938,5.46504},{-16.918,7.07422,5.42027},{-2.4082,5.00391,5.417}};
	  zombiePos[] = {{-10.2505,-13.6282,0.350257},{-14.3531,9.72493,0.413963},{9.56294,4.05919,-6.45714},{13.9372,-1.59532,-2.53182},{-13.788,-13.9215,4.32479},{10.7066,-2.43994,8.35073}};
	};

	class Land_Hangar_2: A2Industrial {
	  lootMin = 1;
	  lootMax = 3;
	  lootPos[] = {{-9.02881,-3.61621,-2.5632},{-9.35059,5.75488,-2.5632},{8.33301,6.60449,-2.5632},{8.38086,-3.13574,-2.5632}};
	  zombiePos[] = {{-6.94104,4.60228,0.139907},{13.3517,-1.30527,0.139907}};
	};

	class Land_Barn_Metal: A2Industrial {
	  lootMin = 1;
	  lootMax = 4;
	  lootPos[] = {{5.64453,-20.9434,-5.44213},{-3.91992,-20.2852,-5.44213},{-3.80664,-9.13867,-5.44213},{5.48633,-9.44922,-5.44213},{-4.6543,7.17383,-5.44213},{5.68164,6.82031,-5.44213},{5.25391,18.0703,-5.44213},{-4.12891,18.1816,-5.44213}};
	  zombiePos[] = {{-0.968048,-9.8448,-5.44213},{4.1373,13.9646,0.00144196}};
	};

	class Land_Shed_Ind02: A2Industrial {
	  lootMin = 1;
	  lootMax = 2;
	  lootPos[] = {{0.324219,-4.51367,-4.62599},{0.236328,4.93164,-4.62599}};
	  zombiePos[] = {{0.167969,7.78225,0.240984}};
	};

//Low Value//
	class Land_stodola_old_open: A2Farm {
	  lootMin = 1;
	  lootMax = 4;
	  lootPos[] = {{-3.06836,8.63184,-5.08054},{2.52588,10.5261,-5.08051},{4.76758,5.00854,-0.9935},{-2.78467,10.2368,-0.9935},{4.62598,10.4983,-0.993469},{2.09082,10.8425,2.96448},{-0.440918,10.3091,2.96445},{-2.58838,-5.91821,-5.08054},{4.11084,-10.9302,-5.08054},{-2.62842,-6.55518,-1.01584},{2.50537,-10.741,2.96445},{0.0410156,-11.0596,2.96445}};
	  zombiePos[] = {{-2.93586,-7.43366,0.0483246}};
	};

	class Land_Farm_Cowshed_a: A2Farm {
	  lootMin = 1;
	  lootMax = 3;
	  lootPos[] = {{-1.06836,-5.92163,-3.08763},{1.69043,-4.91089,-3.08763},{5.8833,-6.15381,-3.08763},{8.83984,-5.60278,-3.08763},{9.74023,-2.48657,-3.08763},{2.88428,-2.34546,-3.08763},{7.88037,2.94214,-3.08763}};
	  zombiePos[] = {{0.995529,-2.07978,-3.08764}};
	};

	class Land_stodola_open: A2Farm {
	  lootMin = 1;
	  lootMax = 3;
	  lootPos[] = {{-2.60303,5.31665,-4.12804},{-2.58154,-0.530029,-4.17349},{-0.0478516,-4.88989,-4.136},{0.983398,6.20483,-4.11143}};
	  zombiePos[] = {{-2.44568,-2.41637,0.13622}};
	};

	class Land_Barn_W_01: A2Farm {
	  lootMin = 1;
	  lootMax = 4;
	  lootPos[] = {{4.93188,-17.0444,-2.63063},{-3.82813,-18.6699,-2.63036},{-4.46387,16.6665,-2.63651},{5.78711,18.9473,-2.6369},{3.9541,4.88428,-2.63446},{-2.99072,-4.16748,-2.63287}};
	  zombiePos[] = {{-3.45688,-3.38164,0.53116}};
	};

	class Land_Barn_W_02: A2Farm {
	  lootMin = 1;
	  lootMax = 4;
      lootPos[] = {{3.16504,5.56543,-2.31409},{3.35938,-0.152344,-2.31305},{2.53613,-5.89453,-2.30957},{-2.94629,-5.01367,-2.31006},{-2.84375,0.212891,-2.31183},{-5.63281,4.8291,-2.31363}};
	  zombiePos[] = {{-3.59209,-3.99417,0.802444}};
	};

	class Land_Farm_Cowshed_c: A2Farm {
	  lootMin = 1;
	  lootMax = 1;
	  lootPos[] = {{-2.41504,2.98633,-3.12582}};
	  zombiePos[] = {{-0.78894,-0.630724,-3.12584}};
	};

	class Land_Farm_Cowshed_b: A2Farm {
	  lootMin = 1;
	  lootMax = 3;
	  lootPos[] = {{4.68506,2.18945,-3.04105},{0.0620117,0.0517578,-3.11111},{-4.77441,-2.4834,-3.05106}};
	  zombiePos[] = {{-3.30227,-3.74579,0.0914383}};
	};

	class Land_Shed_W02: A2Farm {
	  lootMin = 1;
	  lootMax = 1;
	  lootPos[] = {{0.688232,1.88281,-0.00292969}};
	  };

//Medium Value//
	class Land_wagon_box: A2MilitaryCivilian {
	  lootMin = 1;
	  lootMax = 2;
	  lootPos[] = {{0.511719,3.57617,-0.776585},{0.460938,-3.25195,-0.77667}};
	  };

	class Land_wagon_flat: A2MilitaryCivilian {
	  lootMin = 1;
	  lootMax = 3;
	  lootPos[] = {{-0.0292969,6.78906,0.27506},{-0.0292969,5.04883,0.27506},{-0.0292969,2.45117,0.27506},{-0.00195313,-0.884766,0.27506},{-0.00976563,-2.61523,0.27506},{-0.00976563,-4.66406,0.27506},{-0.00976563,-6.78516,0.27506}};
	  };

//Medium Value//
	class Land_A_Castle_Bergfrit: A2MilitaryCastle {
	  lootMin = 1;
	  lootMax = 4;
	  lootPos[] = {{0.18457,1.36816,-2.8364},{2.1084,-2.05713,-2.83636},{-1.26367,-2.71533,-2.8364},{0.426758,-1.54395,8.76691},{2.33398,3.75342,8.76691},{-2.52637,-4.47412,16.856},{1.625,-0.443359,16.8504},{-3.16992,5.00195,16.856}};
	};

	class Land_A_Castle_Gate: A2MilitaryCastle  {
	  lootMin = 1;
	  lootMax = 3;
	  lootPos[] = {{7.125,1.06055,-2.92116},{7.18652,3.38379,-2.91597},{4.69531,3.71289,-2.94855}};
	  zombiePos[] = {{-0.683685,5.36341,0.222771}};
	};

//High Value//
	class Land_Misc_deerstand: A2MilitaryDeerstand {
      lootMin = 1;
	  lootMax = 2;
	  lootPos[] = {{-0.923828,-0.808594,1.08539},{0.419922,-0.237305,1.08539}};
	};

//Very High Value//
	class CampEast: MilitaryGeneral {
      lootMin = 1;
	  lootMax = 3;
	  lootPos[] = {{-1.47656,2.35547,-1.31049},{1.51172,2.44824,-1.31052},{1.72559,-3.1748,-1.31046},{-1.70898,-3.00781,-1.31046},{-1.70898,-0.34082,-1.31049},{1.54883,-0.333984,-1.31049}};
	  };

//Other A2 Military Loot//
	class Land_Wreck_Van_F: A2MilitaryVanWreck {
	  lootMin = 4;
	  lootMax = 6;
	  lootPos[] = {{0.0772705,-4.03003,-1.00754},{-0.177002,4.10425,-1.00754},{-2.69043,0.0397949,-1.00754},{2.34595,0.575439,-1.00754},{2.53198,-2.43823,-1.00754},{2.35083,3.24561,-1.00754},{-2.69116,2.99585,-1.00754},{-2.79126,-3.01904,-1.00754}};
	};

	class Land_Mil_Barracks_i: A2MilitaryBarracks {
	  lootMin = 1;
	  lootMax = 6;
	  lootPos[] = {{5.24805,-1.94922,-1.09823},{5.34375,-0.103516,-1.09823},{1.57422,-2.27344,-1.09823},{1.75,-0.0664063,-1.09823},{-1.6875,-2.19141,-1.09823},{-1.375,-0.238281,-1.09823},{-4.92188,-2.10156,-1.09823},{-4.66797,-0.175781,-1.09823},{-8.47852,-2.20313,-1.09823},{-8.05273,-0.109375,-1.09823}};
	  zombiePos[] = {{-3.95122,2.30653,0.270132}};
	};

	class Land_A_TVTower_Base: A2MilitaryRadioTower {
	  lootMin = 1;
	  lootMax = 6;
	  lootPos[] = {{-1.08618,1.86328,-2.21574},{-1.3573,-0.809082,-2.21574},{-1.68518,-3.20129,-2.21873},{-1.60193,-7.74927,-2.2167},{-1.52039,6.90552,-2.21474},{-9.10291,-1.25195,-2.21474},{-6.07556,-6.33582,-2.21474},{-6.59375,5.1333,-2.21474},{3.05139,-6.13306,-2.21474},{5.6272,-0.486084,-2.21474},{3.34009,5.24768,-2.21474}};
	  zombiePos[] = {{-1.20921,0.411961,0.640335}};
	};


	class Land_UWreck_MV22_F: A2MilitaryPlaneWreck {
	  lootMin = 1;
	  lootMax = 6;
	  lootPos[] = {{1.936,5.2774,-4.38292},{-6.28259,8.10419,-4.27865},{-4.30713,1.29462,-4.22514},{-12.0403,-4.92523,-3.55208},{-5.64526,-11.5303,-3.69648},{-2.72067,-5.99091,-4.0125},{-5.15765,-16.8342,-3.52923},{9.97238,-24.4118,-3.76867},{9.50751,-14.2923,-4.06245},{6.68307,-7.01849,-4.29121},{8.45764,1.06281,-4.32564},{9.77118,11.36,-4.34763},{14.7074,5.39496,-4.29012},{16.9778,-3.75232,-4.24202},{20.4492,14.1458,-4.31509},{5.48044,23.6175,-4.01903},{-28.5232,6.09955,-2.32732},{-30.229,-8.43988,-1.85176},{-21.4947,-18.5224,-2.34182},{-13.0705,-28.8453,-2.62291},{1.39407,-32.9947,-3.1781},{17.7483,-27.7422,-3.94915}};
	};
	
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////////////////////////////////////---Malden Loot Cords---/////////////////////////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	class Land_i_House_Small_01_b_brown_F : Land_i_House_Small_01_V1_F {};

	class Land_i_House_Small_01_b_yellow_F : Land_i_House_Small_01_V1_F {};

	class Land_i_House_Small_01_b_whiteblue_F : Land_i_House_Small_01_V1_F {};

	class Land_i_House_Small_01_b_blue_F : Land_i_House_Small_01_V1_F {};

	class Land_i_House_Small_01_b_pink_F : Land_i_House_Small_01_V1_F {};

	class Land_i_House_Small_01_b_white_F : Land_i_House_Small_01_V1_F {};



	class Land_i_House_Small_02_b_brown_F : Residential {
		lootMin = 1;
		lootMax = 4;
		lootPos[] = 
		{
			{-2.18506,-2.89746,-0.515881},
			{-4.39844,1.25195,-0.515877},
			{4.20215,1.06055,-0.515877},
			{0.592285,-2.4668,-0.515881},
			{2.45996,-0.849609,-0.515877},
			{-3.3042,-0.579102,-0.515877}
		};
		zombiePos[] = 
		{
			{2.99951,-2.13281,-0.515877},
			{-2.01709,1.28516,-0.515881}
		};
	};

	class Land_i_House_Small_02_b_yellow_F : Land_i_House_Small_02_b_brown_F {};

	class Land_i_House_Small_02_b_whiteblue_F : Land_i_House_Small_02_b_brown_F {};

	class Land_i_House_Small_02_b_blue_F : Land_i_House_Small_02_b_brown_F {};

	class Land_i_House_Small_02_b_pink_F : Land_i_House_Small_02_b_brown_F {};

	class Land_i_House_Small_02_b_white_F : Land_i_House_Small_02_b_brown_F {};



	class Land_i_House_Small_02_c_brown_F : Land_i_House_Small_02_b_brown_F {};

	class Land_i_House_Small_02_c_yellow_F : Land_i_House_Small_02_b_brown_F {};

	class Land_i_House_Small_02_c_whiteblue_F : Land_i_House_Small_02_b_brown_F {};

	class Land_i_House_Small_02_c_blue_F : Land_i_House_Small_02_b_brown_F {};

	class Land_i_House_Small_02_c_pink_F : Land_i_House_Small_02_b_brown_F {};

	class Land_i_House_Small_02_c_white_F : Land_i_House_Small_02_b_brown_F {};



	class Land_i_Shop_02_b_brown_F : Land_i_Shop_02_V2_F {};

	class Land_i_Shop_02_b_yellow_F : Land_i_Shop_02_V2_F {};

	class Land_i_Shop_02_b_whiteblue_F : Land_i_Shop_02_V2_F {};

	class Land_i_Shop_02_b_blue_F : Land_i_Shop_02_V2_F {};

	class Land_i_Shop_02_b_pink_F : Land_i_Shop_02_V2_F {};

	class Land_i_Shop_02_b_white_F : Land_i_Shop_02_V2_F {};



	class Land_i_House_Big_01_b_brown_F : Land_i_House_Big_01_V2_F {};

	class Land_i_House_Big_01_b_yellow_F : Land_i_House_Big_01_V2_F {};

	class Land_i_House_Big_01_b_whiteblue_F : Land_i_House_Big_01_V2_F {};

	class Land_i_House_Big_01_b_blue_F : Land_i_House_Big_01_V2_F {};

	class Land_i_House_Big_01_b_pink_F : Land_i_House_Big_01_V2_F {};

	class Land_i_House_Big_01_b_white_F : Land_i_House_Big_01_V2_F {};




	class Land_i_House_Big_02_b_brown_F : Land_i_House_Big_02_V2_F {};

	class Land_i_House_Big_02_b_yellow_F : Land_i_House_Big_02_V2_F {};

	class Land_i_House_Big_02_b_whiteblue_F : Land_i_House_Big_02_V2_F {};

	class Land_i_House_Big_02_b_blue_F : Land_i_House_Big_02_V2_F {};

	class Land_i_House_Big_02_b_pink_F : Land_i_House_Big_02_V2_F {};

	class Land_i_House_Big_02_b_white_F : Land_i_House_Big_02_V2_F {};

	class Land_i_Addon_02_b_white_F : Farm {
		lootMin = 0;
		lootMax = 2;
		lootPos[] = {{4.79688,2.12256,0.16449},{0.583984,2.2251,0.16449}};
		zombiePos[] = {{2.69336,0.814453,0.16449}};
	};

	class Land_i_Stone_Shed_01_c_clay_F : Residential {
		lootMin = 0;
		lootMax = 3;
		lootPos[] = {{5.06738,1.77734,-0.0226288},{2.53711,3.12402,-0.0246887},{0.197266,2.52539,-0.0266113}};
		zombiePos[] = {{2.54492,0.183594,-0.0246887}};
	};



	class Land_i_Stone_Shed_01_c_raw_F : Land_i_Stone_Shed_01_c_clay_F {};

	class Land_i_Stone_Shed_01_c_white_F : Land_i_Stone_Shed_01_c_clay_F {};

	class Land_i_Stone_Shed_01_b_clay_F : Land_i_Stone_Shed_01_c_clay_F {};

	class Land_i_Stone_Shed_01_b_raw_F : Land_i_Stone_Shed_01_c_clay_F {};

	class Land_i_Stone_Shed_01_b_white_F : Land_i_Stone_Shed_01_c_clay_F {};

	class Land_Barn_01_grey_F : Farm {
		lootMin = 1;
		lootMax = 5;
		lootPos[] = {{-7.39258,-2.5034201,-0.682266},{-2.79883,-2.7885699,-0.68054199},{-0.125,2.6992199,-0.71368402},{7.0507798,-2.82813,-0.680237},{4.75488,-2.8022499,-0.68045002}};
		zombiePos[] = {{1.57227,-0.046875,-0.697052}};
	};
	
	class Land_Barn_01_brown_F : Land_Barn_01_grey_F {};
	
	class Land_Shed_08_grey_F : Farm {
		lootMin = 1;
		lootMax = 4;
		lootPos[] = {{3.80176,1.54541,-0.88569599},{0.43652299,-1.26074,-0.89228803},{-3.98242,-1.5332,-0.88563502},{-3.9707,1.4126,-0.88563502}};
		zombiePos[] = {{2.42188,-0.55029303,-0.88566601}};
	};
	
	class Land_Shed_08_brown_F : Land_Shed_08_grey_F{};
	
	class Land_Supermarket_01_malden_F : Supermarket {
		lootMin = 2;
		lootMax = 7;
		lootPos[] = {{1.04297,-7.88086,-1.44994},{6.69824,-7.44189,-1.44994},{7.12109,-1.93677,-1.41737},{0.376953,1.68433,-1.44994},{-0.157227,-2.65527,-1.44994},{-5.0332,-7.55322,-1.44994},{-4.18164,-2.25879,-1.44994}};
		zombiePos[] = {{4.22656,-4.4458,-1.44994}};
	};

	class Land_Bunker_01_HQ_F : MilitarySpecial {
		lootMin=1;
		lootMax=3;
		lootPos[]=
		{
			{-4.03125,-2.01758,-0.89785},
			{-0.905273,0.316895,-0.897842},
			{1.42969,-0.00244141,-0.897842}
		};
		zombiePos[]=
		{
			{2.50488,4.06934,-0.897842}
		};
	};
		
	class Land_Bunker_01_big_F : MilitarySpecial {
		lootMin=1;
		lootMax=4;
		lootPos[]=
		{
			{1.54883,-2.70313,0.0865173},
			{0.161133,-5.94482,0.0877075},
			{-1.51172,-2.98193,0.0889664},
			{-3.47266,1.2749,0.0867081}
		};
		zombiePos[]=
		{
			{0.355469,1.21143,0.0870285}
		};
	};
		
	class Land_Bunker_01_small_F : MilitarySpecial {
		lootMin=1;
		lootMax=3;
		lootPos[]=
		{
			{-1.36035,0.237793,0.289917},
			{0.792969,0.355957,0.289917}
		};
		zombiePos[]=
		{
			{0.119141,-1.27173,0.289925}
		};
	};
		
	class Land_Bunker_01_tall_F : MilitarySpecial {
		lootMin=1;
		lootMax=3;
		lootPos[]=
		{
			{1.54199,-0.233398,1.52953},
			{-1.13574,-0.22998,1.52953},
			{-2.35645,0.968262,-3.33868}
		};
		zombiePos[]=
		{
			{-1.3252,1.4292,-3.33868}
		};
	};

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////////////////////////////////////---DSHouses/ChernoRedux/CUP terrains Core Loot Cords---/////////////////////////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class Land_ds_HouseV_1L2: Residential
	{
		lootMin = 1;
		lootMax = 3;
		lootPos[] =
		{
			{2.94922,-3.91602,2.34338},
			{-2.60693,-2.14648,2.34338},
			{-1.78174,-4.37402,2.34338}
		};
		zombiePos[] =
		{
			{-2.60205,1.43555,0.390289}
		};
	};

	class Land_ds_HouseV_1t: Residential
	{
		lootMin = 2;
		lootMax = 5;
		lootPos[] =
		{
			{-0.307129,-6.10547,0.389648},
			{2.896,-8.06934,0.389648},
			{9.46484,-0.915039,3.4574},
			{1.79785,-7.31348,3.4574},
			{-1.9707,-1.70801,3.4574},
			{9.50439,0.394531,0.389648},
			{3.9165,1.76855,0.389648}
		};
		zombiePos[] =
		{
			{-0.750977,1.96875,0.389648}
		};
	};

	class Land_ds_HouseV_2I: Residential
	{
		lootMin = 1;
		lootMax = 3;
		lootPos[] =
		{
			{-4.75439,6.81152,0.229004},
			{-5.09619,2.93262,0.229004},
			{2.88184,7.25293,0.229004},
			{3.74414,1.70605,0.229004}
		};
		zombiePos[] =
		{
			{-5.5,-1.27539,0.229004}
		};
	};

	class Land_ds_HouseV_2L: Residential
	{
		lootMin = 1;
		lootMax = 3;
		lootPos[] =
		{
			{-4.01709,4.41992,0.206696},
			{2.72119,-3.63672,0.206696},
			{-3.05176,3.54004,3.43817},
			{-2.29004,-3.53418,3.43817}
		};
		zombiePos[] =
		{
			{3.05811,1.93359,0.206696}
		};
	};

	class Land_ds_HouseV_2T1: Residential
	{
		lootMin = 1;
		lootMax = 4;
		lootPos[] =
		{
			{-3.53467,1.85352,0.139587},
			{-4.34863,-3.04492,0.139587},
			{7.38623,1.73145,0.139587},
			{-4.55713,-0.407227,3.37979},
			{4.09521,0.337891,3.37979},
			{3.57373,2.80566,0.139587}
		};
		zombiePos[] =
		{
			{-3.77295,2.61621,0.139587}
		};
	};

	class Land_ds_HouseV_2T2: Residential
	{
		lootMin = 1;
		lootMax = 5;
		lootPos[] =
		{
			{5.27734,-2.61035,0.898529},
			{-1.57764,-4.44531,0.898529},
			{1.99219,-4.18359,0.898529},
			{5.0127,2.30273,3.65451},
			{-4.81396,2.13281,3.65451},
			{-5.06543,-1.6709,3.65451},
			{2.37549,-2.31348,3.65451}
		};
		zombiePos[] =
		{
			{-4.46729,-0.111328,0.898529}
		};
	};

	class Land_ds_HouseV_3I1: Residential2
	{
		lootMin = 1;
		lootMax = 3;
		lootPos[] =
		{
			{-1.29834,-2.48828,0.870361},
			{-1.3916,1.66309,0.870361},
			{-5.94678,0.630859,0.870361},
			{1.87695,-0.391602,0.870361}
		};
		zombiePos[] =
		{
			{4.72412,-1.28223,0.870361}
		};
	};

	class Land_ds_HouseV_3I2: Residential2
	{
		lootMin = 1;
		lootMax = 3;
		lootPos[] =
		{
			{4.28418,-2.90723,0.5961},
			{-3.60547,3.15332,0.5961},
			{-3.41602,-0.24707,0.5961},
			{-0.0136719,-3.56055,0.5961},
			{0.875977,3.93555,0.5961}
		};
		zombiePos[] =
		{
			{3.75684,2.21289,0.5961}
		};
	};

	class Land_ds_HouseV_3I3: Residential2
	{
		lootMin = 1;
		lootMax = 3;
		lootPos[] =
		{
			{5.41455,-0.581055,0.561768},
			{-3.01123,1.83203,0.561768},
			{-2.86084,-0.87793,0.561768},
			{2.05908,-0.598633,0.561768}
		};
		zombiePos[] =
		{
			{2.19482,1.33691,0.561768}
		};
	};

	class Land_ds_HouseV_3I4: Residential2
	{
		lootMin = 1;
		lootMax = 5;
		lootPos[] =
		{
			{3.90576,-2.23438,0.645355},
			{-1.90771,3.76465,0.645355},
			{-0.956543,-2.61035,0.645355},
			{-5.19482,-0.99707,0.645355},
			{2.96533,-2.25195,3.94366},
			{-0.868652,-2.07715,3.94366},
			{3.24463,0.314453,3.94366},
			{-1.26074,3.45313,3.94366}
		};
		zombiePos[] =
		{
			{3.35059,3.47266,0.645355}
		};
	};

	class Land_Mil_Barracks: MilitaryGeneral
	{
		lootMin = 2;
		lootMax = 5;
		lootPos[] =
		{
			{-6.72754,-3.21582,-1.94244},
			{-3.56641,-3.42578,-1.94244},
			{2.92236,3.49414,-1.94244},
			{-0.156738,3.60938,-1.94244},
			{-3.39551,3.53711,-1.94244},
			{-6.73633,3.48438,-1.94244},
			{2.80518,-3.40234,-1.94244}
		};
		zombiePos[] =
		{
			{5.25879,0.0664063,-1.92838}
		};
	};

	class Land_Mil_Guardhouse: MilitaryGeneral
	{
		lootMin = 1;
		lootMax = 3;
		lootPos[] =
		{
			{-1.69287,-2.67188,-1.59091},
			{2.68945,-2.98926,-1.59091},
			{3.65283,0.392578,-1.59091},
			{-0.356934,3.15332,-1.59091}
		};
		zombiePos[] =
		{
			{-1.3501,0.751953,-1.59091}
		};
	};
	
	class Land_Mil_Guardhouse_EP1 : Land_Mil_Guardhouse{};

	class Land_Mil_House: MilitaryGeneral
	{
		lootMin = 3;
		lootMax = 8;
		lootPos[] =
		{
			{16.6309,-0.5,-4.95639},
			{6.86621,-4.0498,-4.95901},
			{10.7139,5.3457,-4.95901},
			{-1.08887,-1.12402,-4.95901},
			{-10.4014,5.14648,-4.95901},
			{-10.6294,-1.6416,-4.95901},
			{-5.27246,-5.12109,-4.95901},
			{-5.11719,-0.28418,-4.95901},
			{-10.313,-5.18359,-0.593964},
			{-10.5435,1.06445,-0.593964},
			{-5.12744,-2.69727,-0.593964},
			{-5.09521,1.99805,-0.593964},
			{-12.5498,3.03711,-0.593964}
		};
		zombiePos[] =
		{
			{-0.689453,5.63086,-4.95901}
		};
	};

	class Land_Mil_House_dam : Land_Mil_House {};
	
	class Land_Mil_House_EP1 : Land_Mil_House {};
	
	class Land_Mil_House_dam_EP1 : Land_Mil_House {};

	class Land_Mil_ControlTower: MilitaryGeneral
	{
		lootMin = 2;
		lootMax = 7;
		lootPos[] =
		{
			{9.37842,3.82324,-9.59012},
			{-7.89844,-0.0283203,-9.50287},
			{-3.91162,-3.59277,-9.50287},
			{6.7207,-3.31348,-9.58014},
			{2.37354,3.73535,-5.40012},
			{7.0957,-2.70996,-5.40497},
			{2.96729,-2.75488,-5.40497},
			{6.22949,-0.160156,-0.979828},
			{2.63379,2.30273,-0.979828},
			{9.2666,-3.77051,-1.00937},
			{9.7666,5.5752,-1.00473}
		};
		zombiePos[] =
		{
			{-0.0644531,4.4707,-9.59012}
		};
	};

	class Land_Mil_ControlTower_dam : Land_Mil_ControlTower {};
	
	class Land_Mil_ControlTower_EP1 : Land_Mil_ControlTower {};
	
	class Land_Mil_ControlTower_dam_EP1 : Land_Mil_ControlTower {};
	
	class Land_A_Office01_EP1: Residential2
	{
		lootMin = 1;
		lootMax = 4;
		lootPos[] =
		{
			{-7.50635,5.10059,-4.32385},
			{-2.11963,-3.31836,-4.32385},
			{5.15771,-1.87109,-4.32385},
			{0.336914,5.62695,-4.32385},
			{15.0762,-4.93652,-4.32385},
			{3.7373,3.02734,-1.82385},
			{9.31348,-4.35254,-1.82385},
			{14.4346,3.37695,-1.82385},
			{15.3325,0.102539,-1.82385},
			{-6.9165,3.75977,-1.82385},
			{-14.4326,-4.12109,-1.82385},
			{-6.33545,-4.46094,-1.82385},
			{-15.0449,2.74512,-1.82385},
			{0.10498,-7.68652,-1.81839},
			{13.5557,-3.08789,0.676147},
			{0.149414,5.34375,0.676178},
			{-11.397,3.30176,0.676178},
			{-1.9375,2.9834,6.42392},
			{-1.81494,-3.79883,6.43832}
		};
		zombiePos[] =
		{
			{-15.8789,0.266602,-4.32385}
		};
	};

	class CampEastC: MilitaryGeneral
	{
		lootMin = 1;
		lootMax = 3;
		lootPos[] =
		{
			{-1.4502,1.46387,-1.25192},
			{1.54541,1.68652,-1.25192},
			{-1.52197,-2.22852,-1.25192}
		};
		zombiePos[] =
		{
			{-0.107422,-2.76953,-1.25192}
		};
	};

	class CampEast_EP1: CampEastC {};
	
	class MASH: Hospital
	{
		lootMin = 1;
		lootMax = 2;
		lootPos[] =
		{
			{0.626953,-2.0127,-1.0795},
			{1.62012,0.80957,-1.0795}
		};
		zombiePos[] =
		{
			{0.779297,1.16504,-1.0795}
		};
	};

	class MASH_EP1: MASH {};
	
	class Land_Sara_stodola: Industrial
	{
		lootMin = 0;
		lootMax = 2;
		lootPos[] =
		{
			{-1.25684,0.0292969,-1.96515},
			{3.97021,0.202148,-2.01608}
		};
		zombiePos[] =
		{
			{1.3584,4.44824,-2.35416}
		};
	};

	class Land_Sara_stodola2: Land_Sara_stodola {};
	
	class Land_Bouda2_vnitrek: IndustrialSmall
	{
		lootMin = 1;
		lootMax = 3;
		lootPos[] =
		{
			{-2.16846,1.71289,-0.531616},
			{-2.396,-1.72461,-0.531616},
			{0.543945,-0.398438,-0.531616}
		};
		zombiePos[] =
		{
			{2.83887,-1.53027,-0.531616}
		};
	};

	class Land_a_stationhouse: MilitarySpecial
	{
		lootMin = 5;
		lootMax = 12;
		lootPos[] =
		{
			{-15.6797,7.0332,-9.40933},
			{-15.604,-5.75195,-9.40933},
			{-10.5967,7.625,-9.40933},
			{-2.88965,7.75391,-9.40933},
			{18.3896,-1.49219,-9.40878},
			{7.57373,2.86328,-9.40878},
			{-2.26416,-7.83008,-9.40878},
			{-3.25342,-6.3457,-4.56424},
			{-2.04785,-8.2207,0.040863},
			{-1.20215,-7.81445,4.49603},
			{-16.3999,7.53027,-6.69016},
			{-10.9229,6.15918,-6.69016},
			{-3.76904,6.07422,-6.69016},
			{-2.72412,-3.28418,-6.69016},
			{-16.4629,-1.85254,-6.69016},
			{-16.5923,-6.78516,-3.56747},
			{-16.4355,8.17871,-3.56747},
			{-10.9663,5.73145,-3.56747},
			{-7.37939,5.94434,-3.56747},
			{-2.03711,8.1582,-3.56747},
			{-2.42236,-3.62012,-3.56747},
			{1.73828,-1.65039,-4.40048},
			{1.84961,-6.38184,-4.40933},
			{17.2949,-1.5459,-4.40933},
			{1.54883,0.959961,-0.338654},
			{-13.3535,2.74707,-0.412659}
		};
		zombiePos[] =
		{
			{-11.2266,-7.57324,-9.40933}
		};
	};
	
	class Land_A_Stationhouse_ep1: Land_A_Stationhouse {};
	
	class Land_Hut_old02: IndustrialSmall
	{
		lootMin = 1;
		lootMax = 3;
		lootPos[] =
		{
			{-6.05078,2.15576,-2.74894},
			{1.65625,-0.325684,-2.75497},
			{-0.817383,-7.82813,-2.82853}
		};
		zombiePos[] =
		{
			{-5.88379,-7.50684,-2.80661}
		};
	};
	
	class Land_Strazni_vez: MilitaryGeneral
	{
		lootMin = 0;
		lootMax = 1;
		lootPos[] =
		{
			{-1.62598,-1.16431,2.10461}
		};
		zombiePos[] =
		{
			{1.48584,-0.748779,-2.53911}
		};
	};

	class Land_chz_skladoleju_06_06: MilitaryGeneral
	{
		lootMin = 0;
		lootMax = 2;
		lootPos[] =
		{
			{-1.36328,-4.95215,3.41862},
			{1.2124,-3.00342,3.41862}
		};
		zombiePos[] =
		{
			{1.48584,-0.748779,-2.53911},
			{-2.44775,-3.79346,-7.55797}
		};
	};
	
	
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////////---BORNHOLM LOOT COORDS---////////////////////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//A2Residential//
	class Land_bo_HouseB_Tenement: A2Residential {
	  lootMin = 1;
	  lootMax = 5;		
	  lootPos[] = {{5.40576,9.89551,-20.7845},{5.99023,14.1689,-20.7845},{12.9609,14.0718,-20.7845},{14.6069,8.92383,-20.7845},{-2.75635,-2.08594,-20.7845}};
	  zombiePos[] = {{-0.374323,-10.7536,0.760329},{13.2221,6.13053,0.75458}};
	};
	
    class Land_bo_Hlidac_budka: A2Residential {
	  lootMin = 1;
	  lootMax = 2;		
	  lootPos[] = {{-2.3186,1.5127,-0.78363},{2.02075,0.444336,-0.78363},{-0.460938,1.75879,-0.78363}};
	  zombiePos[] = {{2.47562,0.964444,0.286029}};
	};	
		
	class Land_bo_Panelak: A2Residential {
	  lootMin = 6;
	  lootMax = 10;		
	  lootPos[] = {{-2.76904,-6.26563,0.0714226},{-2.93896,-1.3916,0.0714226},{-5.42065,-3.13184,0.0714226},{-6.81128,-6.15527,0.0714221},{-4.00879,2.53027,0.0714226},{-0.730957,-3.20117,2.77144},{3.979,-7.08936,2.77144},{2.49609,2.93701,2.77144},{6.7373,1.63281,2.77144},{6.38525,-2.3916,2.77144},{6.80615,-5.77295,2.77144},{3.75122,-0.803711,2.77144},{-0.824219,1.86914,1.32865}};
	  zombiePos[] = {{-3.54482,-4.86334,1.84779},{5.57391,-0.850953,0.0714293},{0.586411,4.77575,1.32865},{0.892166,-2.64693,2.77145},{-4.24239,-4.381,5.62586},{5.85315,1.40665,5.62586}};
	};
	
	class Land_bo_Panelak2: A2Residential {
	  lootMin = 6;
	  lootMax = 10;		
	  lootPos[] = {{-0.729492,-3.00635,-2.62859},{-0.764648,1.36279,-1.37137},{-0.30127,3.65039,1.32864},{0.73584,-3.22217,2.71097},{-0.630859,1.84766,4.05244},{3.68921,-7.33545,5.43665},{2.26807,2.94092,5.43665},{6.7002,2.68994,5.43665},{6.87842,-1.45947,5.43665},{6.09619,-5.94824,5.43665},{4.45508,-1.64893,5.43665},{2.76367,0.445801,5.43665}};
	  zombiePos[] = {{2.76161,-1.33901,0.404441},{0.0453644,-3.87748,-2.46338},{-3.96274,-6.28521,0.220611},{6.75305,1.15716,0.22061},{2.98633,-1.30668,2.96265},{-0.140656,-2.15526,5.59185},{-6.36244,0.963103,5.59185}};
	};
	
	class Land_bo_rail_station_big: A2Residential {
	  lootMin = 1;
	  lootMax = 5;	
	  lootPos[] = {{-4.97266,4.55737,-5.04438},{0.458496,4.85229,-5.04438},{2.4624,2.21851,-5.04438},{-1.32373,-2.60571,-5.04438},{-3.29443,-0.121826,-5.04438},{-1.07764,2.36646,-5.04438},{7.46045,-3.41528,-5.04438},{8.93408,3.1189,-5.04438},{-8.16357,-5.12842,-5.04438}};
	  zombiePos[] = {{8.24359,-5.60308,-5.04437},{-2.95041,0.284914,0.0903606}};
	};
		
	class Land_bo_A_Office01: A2Residential {
	  lootMin = 8;
	  lootMax = 12;	
	  lootPos[] = {{-2.50391,-2.46948,-4.528},{4.23535,-0.336914,-4.528},{4.11133,6.1123,-4.528},{0.242188,6.06299,-4.528},{4.31641,3.74023,-4.528},{5.08887,0.219727,-4.528},{11.6504,-1.5647,-4.528},{14.5811,-4.1123,-4.528},{13.8545,-0.749023,-4.528},{-7.7627,5.59082,-4.528},{1.81152,0.993408,-2.028},{4.93164,4.31982,-2.028},{1.18945,6.07031,-2.028},{2.23145,3.76563,-2.028},{-4.76367,-2.51221,-2.028},{-14.5596,-3.40723,-2.028},{-15.2705,5.92773,-2.028},{-10.9063,6.04175,0.472008},{-6.30762,3.30078,0.472006},{7.6416,6.38696,0.472001},{13.6729,6.5957,0.471999},{13.1924,-2.58691,0.471998},{3.0918,2.4375,6.20491},{-1.45703,-2.28369,6.20491},{-2.12988,4.51587,0.472005},{4.74414,-4.60156,-2.01486},{8.3457,-1.10718,-2.028},{9.94727,-3.74146,-2.028},{7.13867,-2.50732,-2.028},{12.8701,4.70923,-2.028},{15.3721,3.42383,-2.028}};
	  zombiePos[] = {{-3.17618,-0.237667,-1.40862},{-1.22578,-0.108491,0.353261},{13.2608,-0.14642,0.35326},{-7.13467,-3.25512,-2.028},{12.4859,-0.250937,2.85324},{-9.83003,3.8986,0.472009},{-0.488312,-0.405581,6.20491}};
	};
	
	class Land_bo_A_Office02: A2Residential {
	  lootMin = 1;
	  lootMax = 2;	
	  lootPos[] = {{-9.54163,6.70972,-4.2847},{-6.6897,15.5615,-4.2847}};
	  zombiePos[] = {{-11.0586,3.75628,0.48033},{5.26664,-5.28573,0.467167}};
	};

	class Land_bo_HouseV_1I4: A2Residential {
      lootMin = 1;
	  lootMax = 5;
	  lootPos[] = {{-1.20117,3.66797,-2.72587},{0.457031,3.84375,-2.7287},{-3.99023,-2.20703,-2.76518},{-3.85156,-3.88086,-2.76517},{-0.597656,-4.81055,-2.76764},{0.416016,-3.54883,-2.76971}};
	  zombiePos[] = {{0.195831,2.40296,0.0981808},{-2.87917,-4.52488,0.0642371}};
	};
	
	class Land_bo_HouseV_1L1: A2Residential {
	  lootMin = 1;
	  lootMax = 1;	
	  lootPos[] = {{1.36328,5.69531,-1.05734}};
	  zombiePos[] = {{1.18196,5.17822,1.97615}};
	};	
	
	class Land_bo_kulna: A2Residential {
	  lootMin = 1;
	  lootMax = 2;	
	  lootPos[] = {{0.504395,0.218262,-1.11643},{-0.496582,1.93262,-1.12826}};
	  zombiePos[] = {{-0.05513,1.53177,-1.14343}};
	};
	
	class Land_bo_HouseV2_02_Interier: A2Residential {
	  lootMin = 4;
	  lootMax = 8;		
	  lootPos[] = {{7.23096,5.37207,-5.53067},{8.55005,0.754883,-5.53067},{5.20166,-1.54004,-5.53067},{3.34912,1.9707,-5.53067},{-3.62598,3.05371,-5.53067},{-5.4812,-0.0292969,-5.53067},{-5.83325,3.26563,-5.53067},{-5.71045,5.49414,-5.53067}};
	  zombiePos[] = {{8.00394,2.79662,0.974684},{-6.96446,-1.80681,0.974684}};
	};
	
	class Land_bo_Shed_wooden: A2Residential {
	  lootMin = 1;
	  lootMax = 2;	
	  lootPos[] = {{1.26807,-0.361328,-1.29153},{-0.342773,1.0293,-1.29153}};
	  zombiePos[] = {{1.30486,-0.560452,-1.29152}};
	};

	class Land_bo_HouseBlock_A1: A2Residential {
	  lootMin = 1;
	  lootMax = 3;	
	  lootPos[] = {{-3.88745,3.70276,-8.80817},{-4.03369,-0.415649,-8.80689},{-4.11938,-3.42834,-8.80614}};
	  zombiePos[] = {{-5.61555,1.03652,0.00144482}};
	};	
	
	class Land_bo_HouseBlock_A3: A2Residential {
	  lootMin = 1;
	  lootMax = 3;	
	  lootPos[] = {{0.041626,-4.92554,-5.44172},{0.189575,-0.549438,-5.44172},{0.16394,3.87402,-5.44172}};
	  zombiePos[] = {{1.53608,-0.891657,0.00144386}};
	};	
	
	class Land_bo_HouseBlock_A1_1: A2Residential {
	  lootMin = 1;
	  lootMax = 3;	
	  lootPos[] = {{-4.18341,-3.61426,-4.69881},{-3.97186,-0.03125,-4.74394},{-3.83856,3.39917,-4.70387}};
	  zombiePos[] = {{1.53608,-0.891657,0.00144386}};
	};
	
	class Land_bo_HouseBlock_B6: A2Residential {
	  lootMin = 1;
	  lootMax = 3;	
	  lootPos[] = {{-3.79626,-3.95361,-7.61886},{-3.92651,-0.837646,-7.61886},{-3.81757,2.81543,-7.61886}};
	  zombiePos[] = {{-0.683449,0.752823,0.00144768}};
	};	

	class Land_bo_hut06: A2Residential {
	  lootMin = 1;
	  lootMax = 2;		
	  lootPos[] = {{0.328125,2.26953,-1.57786},{-0.552368,-0.0620117,-1.53837}};
	  zombiePos[] = {{0.738697,-0.206698,0.00144005}};
	};	

	class Land_bo_ruin_01: A2Residential {
	  lootMin = 1;
	  lootMax = 4;	
	  lootPos[] = {{-4.31934,-0.115234,-1.45578},{3.41309,0.270508,-1.71365},{3.00293,3.42773,-1.55765},{0.62207,-1.73779,-1.49048}};
	  zombiePos[] = {{-2.57296,-0.471788,-1.71901},{2.91686,3.11248,-1.43596}};
	};	

	class Land_bo_HouseV2_04_interier: A2Residential {
	  lootMin = 1;
	  lootMax = 5;	
	  lootPos[] = {{7.49463,5.8374,-5.73902},{7.50989,-0.930176,-5.74176},{1.95532,4.16406,-5.73938},{2.10876,6.60645,-5.7386},{-2.30017,4.22461,-5.73936},{-5.13306,6.74365,-5.73856},{-4.74658,2.68457,-5.73985}};
	  zombiePos[] = {{7.29661,2.03883,0.433712},{-1.74097,5.89041,0.435414}};
	};
	
	class Land_bo_HouseV2_01A: A2Residential {
	  lootMin = 1;
	  lootMax = 2;	
	  lootPos[] = {{-3.52881,-3.16895,-5.60346},{-1.62988,-3.25439,-5.66887}};
	  zombiePos[] = {{-2.47099,-4.68128,0.379124}};
	};
	
	class Land_bo_psi_bouda: A2Residential {
	  lootMin = 1;
	  lootMax = 1;	
	  lootPos[] = {{-1.77002,-1.45166,1.95942}};
	}; 
	
	class Land_bo_KBud: A2Residential {
	  lootMin = 1;
	  lootMax = 1;	
	  lootPos[] = {{-0.0170898,0.0114746,-0.66367}};
	}; 
	
	class Land_bo_HouseV_1I1: A2Residential {
	  lootMin = 1;
	  lootMax = 1;	
	  lootPos[] = {{-0.0136719,-2.29492,-2.8231}};
	  zombiePos[] = {{1.14199,-3.29258,0.140466}};
	};	

	class Land_bo_sara_domek_zluty: A2Residential {
	  lootMin = 1;
	  lootMax = 5;	
	  lootPos[] = {{2.95703,3.00732,-2.4337},{7.06738,2.95557,-2.4337},{6.36304,-0.236328,-2.43375},{0.627686,-0.586914,-2.43387},{-0.659912,2.05371,-2.4337},{-2.77515,0.751953,-2.43372},{-5.07666,3.04492,-2.43361},{-6.17139,-2.33691,-2.43382},{-3.75293,-3.54688,-2.43382}};
	  zombiePos[] = {{5.84912,-0.179358,-2.43374},{-4.87813,3.03097,-2.43362}};
	}; 	
	
	class Land_bo_BoatSmall_2b: A2Residential {	
	  lootMin = 1;
	  lootMax = 1;	
	  lootPos[] = {{0.00390625,-0.250977,-0.348389}};
	};	

	class Land_bo_A_MunicipalOffice: A2Residential {
	  lootMin = 7;
	  lootMax = 14;	
	  lootPos[] = {{-4.66113,-6.27173,-18.429},{3.31641,-5.77417,-18.429},{-0.20752,-6.48682,-18.429},{-9.72412,-4.88745,-3.78903},{-9.57813,3.55615,-3.78903},{-7.16797,11.0737,-3.78903},{5.07422,11.1838,-3.78903},{9.3208,5.38623,-3.78903},{9.65332,-4.82056,-3.78903},{3.23535,-0.105957,-0.169027},{4.85205,-3.69019,-0.169027},{-0.80127,-7.89087,-0.169027},{-4.4082,-4.91772,-0.169027},{-4.90771,-2.23169,-0.169027}};
	  zombiePos[] = {{-0.324745,0.790091,0.50058},{-9.06357,4.36548,-3.78903},{3.65574,-4.8002,-0.169024},{9.83522,10.6084,-3.78902}};
	};

	class Land_bo_Shed_M02: A2Residential {
	  lootMin = 1;
	  lootMax = 1;		
	  lootPos[] = {{-0.0136719,-1.44629,-1.54199}};	
	};	

//A2Supermarket//	
	class Land_bo_A_FuelStation_Build: A2Supermarket {
	  lootMin = 1;
	  lootMax = 3;		
	  lootPos[] = {{-1.31958,-0.655151,-1.57448},{1.82349,0.769653,-1.57458},{1.67871,-0.918701,-1.57458},{-1.23242,1.26794,-1.57458}};
	  zombiePos[] = {{-0.432242,1.14055,0.0533562}};
	};
	
	class Land_bo_A_GeneralStore_01a: A2Supermarket {
	  lootMin = 4;
	  lootMax = 8;		
	  lootPos[] = {{-6.93213,1.0708,-1.20155},{-7.2959,-2.68213,-1.20155},{-3.41406,-4.39307,-1.20155},{-1.28809,-2.57861,-1.20155},{0.903809,-4.35986,-1.20155},{3.1377,-3.40771,-1.20155},{7.53418,-2.69971,-1.20154},{13.9653,-4.50342,-1.20155},{10.2617,0.109863,-1.20155},{10.5869,-3.84375,-1.20155},{7.84521,-0.137207,-1.20154},{3.57471,0.0356445,-1.20154},{-0.370605,5.17676,-1.20155},{4.77783,5.57617,-1.20155},{13.0874,4.35645,-1.20155},{12.9932,6.31689,-1.20155},{7.36328,3.00928,-1.20155},{1.93091,2.17236,-1.20154},{-3.82715,5.3335,-1.20155},{-7.55029,8.54199,-1.20154},{-4.42407,8.96631,-1.20154},{3.72705,8.36084,-1.20155},{9.84033,8.3374,-1.20155},{-2.90918,1.32031,-1.20155}};
	  zombiePos[] = {{1.18944,2.24468,0.0634532},{0.0841217,-2.90033,-1.20155}};
	};
	
	class Land_bo_A_GeneralStore_01: A2Supermarket {
	  lootMin = 4;
	  lootMax = 8;		
	  lootPos[] = {{-9.38965,-3.30371,-1.20155},{-3.77539,-3.86865,-1.20155},{1.31836,1.46631,-1.20155},{9.01367,3.8457,-1.20155},{13.3008,-1.77832,-1.20155},{9.81055,1.43213,-1.20155},{1.65039,5.14355,-1.20155},{0.753906,-3.69531,-1.20155},{13.3125,-7.65137,-1.20155},{11.168,-3.73682,-1.20155},{8.89453,-8.37402,-1.20155},{-2.04492,-7.58105,-1.20155},{-7.84766,-5.73633,-1.20155},{-8.22461,-7.32422,-1.20155},{3.79004,-5.69336,-1.20155},{-9.38379,4.46191,-1.20155},{-3.5752,4.46533,-1.20155},{-3.33789,0.612793,-1.20155},{10.5918,-9.9458,-1.21082},{0.105469,-9.6084,-1.21082},{-4.86035,-10.4209,-1.21082},{-6.80859,-1.23975,-1.20155},{1.12207,-1.58887,-1.20155}};
	  zombiePos[] = {{2.75413,8.46811,-1.21154},{6.98885,0.895187,1.21346},{9.91042,-2.39816,1.21346}};
	};

	class Land_bo_A_Pub_01: A2Supermarket {
	  lootMin = 4;
	  lootMax = 8;		
	  lootPos[] = {{1.83398,0.393799,-5.7462},{-1.76514,0.334473,-5.74622},{-6.62207,-6.55371,-5.74622},{-4.63623,-0.100586,-5.74622},{-5.75928,-3.05029,-5.74622},{-2.08203,0.922852,-1.76122},{-4.76514,-5.89087,-1.76122},{-6.94385,-1.9375,-1.76122},{-4.05225,-0.779785,-1.76122},{1.39795,-1.73779,-1.76122},{3.13867,-2.78564,-1.76122},{3.58301,-0.591309,-1.76122},{3.03027,-4.04346,-1.76122},{1.94092,3.18799,-1.76122},{-0.0961914,6.22437,-1.76122},{5.30469,7.55957,-1.76122},{6.72559,-2.72705,-1.76122},{2.56885,-4.6001,-5.74621},{4.06738,5.41406,-5.74622},{0.753418,2.2998,-5.74622}};
	  zombiePos[] = {{1.42735,-0.687559,0.235219},{6.16164,-0.506718,0.23522},{-6.35141,-0.196085,0.235222},{0.702454,-4.07554,-1.76122}};
	};	

	class Land_bo_Church_01: A2Supermarket {
	  lootMin = 1;
	  lootMax = 1;	 
	  lootPos[] = {{-6.92102,-0.382813,-4.21339}};
	  zombiePos[] = {{-7.29311,0.898535,-4.22156}};
	};
	
	class Land_bo_Church_03: A2Supermarket {
	  lootMin = 1;
	  lootMax = 9;	
	  lootPos[] = {{5.15332,-6.96875,-14.3021},{-1.79053,-7.68018,-14.3021},{-0.0263672,-2.98438,-14.3021},{-0.00341797,2.02246,-14.3021},{5.49878,7.20508,-14.3021},{5.38892,3.4043,-14.3021},{3.23657,2.76074,-14.3021},{-1.51001,7.66309,-14.3021},{-7.6416,4.8125,-14.3021},{-6.56592,-4.59131,-14.3021},{9.552,2.22363,-13.7588},{9.93262,-3.85254,-13.7588}};
	  zombiePos[] = {{-14.6633,1.42354,0.102157},{6.15488,0.567348,0.649271}};
	};	

//A2Medical//	
	class Land_bo_A_Hospital: A2Medical {
	  lootMin = 5;
	  lootMax = 10;		
	  lootPos[] = {{-16.0313,-2.62695,-7.33966},{-16.0313,-5.16016,-7.33966},{-12.3125,-2.23438,-7.33966},{-12.2598,-5.29492,-7.33966},{-6.60742,-2.66406,-7.33966},{-6.46484,-5.01563,-7.33966},{3.59766,-2.44922,-7.33966},{3.66797,-5.41602,-7.33966},{7.01172,-2.25,-7.33966},{7.33203,-5.45313,-7.33966},{9.17188,-2.42578,-7.33966},{8.87891,-5.4375,-7.33966},{11.4863,-3.69336,-7.33966},{13.5469,-5.12109,-7.33966},{17.3516,-5.57422,-7.33966},{11.8945,-5.64648,-7.33966},{-3.83398,-5.49219,-7.33966},{-0.974609,-5.28125,-7.33966},{2.00586,-5.58008,-7.33966},{-20.0547,0.560547,-4.35153},{-20.2344,6.91016,-4.35153},{-14.9199,7.26563,-4.35153},{-8.81641,7.64648,-4.35153},{21.2129,3.17188,6.15884},{17.7363,3.05078,6.15884},{18.998,-0.289063,6.15884},{16.0918,-0.234375,6.15884},{-15.7969,0.876953,3.29184},{-6.41016,2.79297,3.29184},{-7.99609,-4.20703,3.29184},{-0.585938,-0.714844,3.29184},{4.48828,-4.12109,3.29184},{10.9492,0.0195313,3.29184},{14.3867,-4.19922,3.29184}};
	  zombiePos[] = {{-0.961845,1.77217,-0.659793},{9.86405,0.244219,0.16144}};
	};	
	
//A2IndustrialSmall//	
	class Land_bo_Ind_Workshop01_01: A2IndustrialSmall {
	  lootMin = 1;
	  lootMax = 3;	
	  lootPos[] = {{0.595215,-2.43115,-1.29412},{1.24365,0.463867,-1.295},{-0.663574,-0.50293,-1.29837}};
	  zombiePos[] = {{1.64704,-1.52143,0.147095}};
	};
	
	class Land_bo_Ind_Garage01: A2IndustrialSmall {
	  lootMin = 1;
	  lootMax = 3;	
	  lootPos[] = {{-0.580078,-1.49707,-1.23483},{-0.834473,2.75781,-1.22563},{2.47754,-1.12891,-1.23714},{1.31934,1.63086,-1.23228}};
	  zombiePos[] = {{-0.0508118,0.399624,0.043191}};
	};
	
	class Land_bo_Ind_Workshop01_02: A2IndustrialSmall {
	  lootMin = 1;
	  lootMax = 3;	
	  lootPos[] = {{1.1543,-0.552246,-1.42943},{-1.18665,-0.178223,-1.42868},{-0.661621,1.104,-1.42682}};
	  zombiePos[] = {{-1.54793,3.56147,0.138637}};
	};
	
	class Land_bo_Ind_Workshop01_04: A2IndustrialSmall {
	  lootMin = 1;
	  lootMax = 3;	
	  lootPos[] = {{-1.37415,4.18896,-1.53123},{0.695435,4.24561,-1.52934},{-1.06677,2.69531,-1.53062},{0.79248,-4.60742,-1.49341},{-1.84424,-6.1709,-1.44427},{-1.05566,-4.08398,-1.51927},{1.43774,-6.59424,-1.41742}};
	  zombiePos[] = {{1.14999,-4.25311,-1.31288}};
	};
	
	class Land_bo_Ind_Workshop01_L: A2IndustrialSmall {
	  lootMin = 1;
	  lootMax = 3;		
	  lootPos[] = {{-3.26172,4.75439,-1.30246},{0.175781,3.91748,-1.30766},{-2.37891,2.35303,-1.30405},{4.10547,-4.10791,-1.31345},{0.727539,-2.61621,-1.31418},{2.54688,-2.17725,-1.31482},{1.52344,-3.79443,-1.31332}};
	};
		
	class Land_bo_Shed_W01: A2IndustrialSmall {
	  lootMin = 1;
	  lootMax = 1;	
	  lootPos[] = {{-1.54102,-0.00390625,-1.41129}};
	};	
		
	class Land_bo_Tovarna2: A2IndustrialSmall {
	  lootMin = 5;
	  lootMax = 10;	
	  lootPos[] = {{-11.6309,7.2052,-5.55933},{-12.0674,2.56909,-5.55933},{-4.89355,6.6394,-5.55933},{-3.74121,2.90393,-3.89665},{-12.8672,1.44519,-2.23135},{-12.415,8.1311,-2.23135},{-12.7236,4.11255,-2.23135},{-3.99805,8.9801,-2.23156},{-7.33105,8.44214,-2.23156},{-4.55371,5.22644,-2.23156},{-11.4746,2.92114,1.66661},{-11.0703,8.13818,1.66661},{-4.67578,7.32678,1.62174},{-2.68262,3.44763,3.4243},{-13.1953,-8.95862,3.4243},{-8.80859,-0.443481,0.401226},{-12.1328,-0.149414,0.424298},{-2.03418,6.61414,-5.55933},{0.239258,1.72278,-5.59793},{6.22461,-3.948,-4.61825},{-6.39355,-8.24353,-5.59541},{-10.8496,-6.91211,-5.56572},{-6.77637,-1.73083,-5.56019}};
	  zombiePos[] = {{-6.39465,-3.66172,0.0526285}};
	};	

	class Land_bo_Ind_Vysypka: A2IndustrialSmall {
	  lootMin = 1;
	  lootMax = 5;	
	  lootPos[] = {{0.486084,4.95459,-4.96861},{1.08032,-0.406738,-4.96801},{-0.0354004,-10.8208,-4.96686},{-5.07788,-16.4624,-4.96759},{-6.30298,2.92969,-4.96838},{-6.26685,26.7349,-4.9772},{1.64697,23.4038,-4.97097},{7.14575,3.92529,-4.96972},{4.63599,-12.1621,-4.96971}};
	  zombiePos[] = {{-4.42424,21.8294,1.21818},{4.25772,-14.4564,1.22701}};
	};

	class Land_bo_Misc_Cargo1Ao: A2IndustrialSmall {
	  lootMin = 1;
	  lootMax = 3;	
	  lootPos[] = {{0.48877,-1.61377,-1.09224},{0.012207,2.19263,-1.09224},{0.00976563,0.19043,-1.09224}};
	  zombiePos[] = {{0.561142,2.5316,0.116995}};
	};
	
	class Land_bo_Misc_Cargo1Bo: A2IndustrialSmall {
	  lootMin = 1;
	  lootMax = 3;	
	  lootPos[] = {{-0.322021,1.68555,-1.09222},{0.548584,-1.96289,-1.09222},{0.223389,-0.580078,-1.09222}};
	  zombiePos[] = {{-0.42627,-2.04652,0.116996}};
	};
	
	class Land_bo_Nav_Boathouse: A2IndustrialSmall {
	  lootMin = 1;
	  lootMax = 4;	    
	  lootPos[] = {{5.27588,5.51953,3.9203},{5.49609,0.106445,4.19408},{1.68945,7.5166,3.80288},{-5.03613,6.19141,3.91093},{-5.63037,-1.27246,4.41481},{-6.98779,5.52441,3.9814},{-2.92236,9.2002,3.73014},{6.99463,7.80859,3.80663},{7.00342,-2.07422,4.31929}};
	};
		
	class Land_bo_Rail_House_01: A2IndustrialSmall {
	  lootMin = 1;
	  lootMax = 3;	
	  lootPos[] = {{2.81152,3.61426,-1.28266},{-1.82178,3.10547,-1.28266},{0.487793,3.38867,-1.28266}};
	  zombiePos[] = {{0.718613,2.96083,-1.28266}};
	}; 	
	
	class Land_bo_Ind_Expedice_1: A2IndustrialSmall {
	  lootMin = 1;
	  lootMax = 4;	
	  lootPos[] = {{-6.87695,-18.2285,-3.48672},{-0.315918,13.1416,-3.48672},{-0.5625,13.8926,9.71017},{5.66846,-18.3174,-5.75726},{1.67725,2.15137,-5.6839},{-11.7915,-13.8818,-3.48672},{0.120605,13.0664,-5.6839}};	
	  zombiePos[] = {{0.58709,-2.1097,-3.48673},{12.4533,-12.4154,-5.75725}};
	};
	
	class Land_bo_Ind_Mlyn_03: A2IndustrialSmall {
	  lootMin = 1;
	  lootMax = 3;
	  lootPos[] = {{-5.604,4.47461,-4.17218},{-3.09521,-2.06934,-4.17218},{2.34961,-5.01953,9.02472}};	
	  zombiePos[] = {{-3.48158,-1.48273,0.54736},{4.20403,5.4496,5.54897}};
	};
			
	class Land_bo_Ind_Pec_01: A2IndustrialSmall {
	  lootMin = 1;
	  lootMax = 3;	
	  lootPos[] = {{-1.73682,-10.9668,-22.3766},{3.95752,-12.5781,-17.425},{-0.951172,-0.967773,-3.83344},{-0.181641,15.7451,0.253754},{-0.237793,-13.3857,6.21796},{-6.78613,-7.21973,14.7371}};	
	};
	
	class Land_bo_Ind_SiloVelke_01: A2IndustrialSmall {
	  lootMin = 1;
	  lootMax = 2;	
	  lootPos[] = {{2.62646,7.77051,-5.45245},{-5.62451,3.42188,11.8912},{-10.4751,0.642578,11.8912},{-1.60742,8.15918,21.9993}};	
	};
		
	class Land_bo_A_Crane_02b: A2IndustrialSmall {
	  lootMin = 1;
	  lootMax = 1;		
	  lootPos[] = {{-3.4707,-0.149414,-6.06299},{-10.9609,-0.0419922,-5.6626},{-9.85547,-0.046875,0.922455}};
	};
		
	class Land_bo_Misc_GContainer_Big: A2IndustrialSmall {
	  lootMin = 1;
	  lootMax = 1;		
	  lootPos[] = {{2.28223,0.792969,0.0986633}}; 	
	};
		
	class Land_bo_trafostanica_velka: A2IndustrialSmall {
	  lootMin = 1;
	  lootMax = 4;		
	  lootPos[] = {{-0.688965,5.47168,-2.61597},{0.803223,6.91602,-2.61597},{1.89258,-1.68164,-2.61597},{-2.82227,-6.4502,-2.61597}};
	};
	
//A2Industrial//
	class Land_bo_SS_hangar: A2Industrial {
	  lootMin = 1;
	  lootMax = 3;		
	  lootPos[] = {{-6.58618,-14.3215,-5.87254},{-6.2467,1.62549,-5.87254},{-5.69775,17.615,-5.87254},{6.62952,17.8831,-5.87254},{6.90967,1.25562,-5.87254},{7.96753,-15.7249,-5.87254}};
	  zombiePos[] = {{8.33995,-13.1413,-0.579065},{10.3468,8.92519,0.0821695}};
	};
	
	class Land_bo_A_BuildingWIP: A2Industrial {
	  lootMin = 6;
	  lootMax = 12;	
	  lootPos[] = {{1.21094,-7.8457,-6.49645},{12.9277,-8.17578,-6.52684},{13.5586,10.957,-6.4361},{7.38867,1.63477,-6.45478},{-4.38477,0.429688,-6.4023},{-23.1035,10.4023,-6.45496},{-22.832,-7.80664,-2.53182},{-22.5898,10.2207,-2.53182},{0.652344,10.2285,-2.53182},{1.93359,-7.44531,-2.53294},{12.4531,-7.79297,-2.53308},{12.7246,-2.02539,1.48651},{-16.6992,4.30469,1.49397},{1.02344,4.80273,1.50588},{-20.9902,-5.60938,5.46504},{-16.918,7.07422,5.42027},{-2.4082,5.00391,5.417}};
	  zombiePos[] = {{-10.2505,-13.6282,0.350257},{-14.3531,9.72493,0.413963},{9.56294,4.05919,-6.45714},{13.9372,-1.59532,-2.53182},{-13.788,-13.9215,4.32479},{10.7066,-2.43994,8.35073}};
	};	

	class Land_bo_Hangar_2: A2Industrial {
	  lootMin = 1;
	  lootMax = 3;		
	  lootPos[] = {{-9.02881,-3.61621,-2.5632},{-9.35059,5.75488,-2.5632},{8.33301,6.60449,-2.5632},{8.38086,-3.13574,-2.5632}};
	  zombiePos[] = {{-6.94104,4.60228,0.139907},{13.3517,-1.30527,0.139907}};
	};
	
	class Land_bo_Barn_Metal: A2Industrial {
	  lootMin = 1;
	  lootMax = 4;	
	  lootPos[] = {{5.64453,-20.9434,-5.44213},{-3.91992,-20.2852,-5.44213},{-3.80664,-9.13867,-5.44213},{5.48633,-9.44922,-5.44213},{-4.6543,7.17383,-5.44213},{5.68164,6.82031,-5.44213},{5.25391,18.0703,-5.44213},{-4.12891,18.1816,-5.44213}};	
	  zombiePos[] = {{-0.968048,-9.8448,-5.44213},{4.1373,13.9646,0.00144196}};
	};
	
	class Land_bo_Shed_Ind02: A2Industrial {
	  lootMin = 1;
	  lootMax = 2;		
	  lootPos[] = {{0.324219,-4.51367,-4.62599},{0.236328,4.93164,-4.62599}};
	  zombiePos[] = {{0.167969,7.78225,0.240984}};
	};	
	
//Low Value//		
	class Land_bo_stodola_old_open: A2Farm {
	  lootMin = 1;
	  lootMax = 4;		
	  lootPos[] = {{-3.06836,8.63184,-5.08054},{2.52588,10.5261,-5.08051},{4.76758,5.00854,-0.9935},{-2.78467,10.2368,-0.9935},{4.62598,10.4983,-0.993469},{2.09082,10.8425,2.96448},{-0.440918,10.3091,2.96445},{-2.58838,-5.91821,-5.08054},{4.11084,-10.9302,-5.08054},{-2.62842,-6.55518,-1.01584},{2.50537,-10.741,2.96445},{0.0410156,-11.0596,2.96445}};
	  zombiePos[] = {{-2.93586,-7.43366,0.0483246}};
	};
		
	class Land_bo_Farm_Cowshed_a: A2Farm {
	  lootMin = 1;
	  lootMax = 3;		
	  lootPos[] = {{-1.06836,-5.92163,-3.08763},{1.69043,-4.91089,-3.08763},{5.8833,-6.15381,-3.08763},{8.83984,-5.60278,-3.08763},{9.74023,-2.48657,-3.08763},{2.88428,-2.34546,-3.08763},{7.88037,2.94214,-3.08763}};
	  zombiePos[] = {{0.995529,-2.07978,-3.08764}};
	};
	
	class Land_bo_stodola_open: A2Farm {
	  lootMin = 1;
	  lootMax = 3;		
	  lootPos[] = {{-2.60303,5.31665,-4.12804},{-2.58154,-0.530029,-4.17349},{-0.0478516,-4.88989,-4.136},{0.983398,6.20483,-4.11143}};
	  zombiePos[] = {{-2.44568,-2.41637,0.13622}};
	};
	
	class Land_bo_Barn_W_01: A2Farm {
	  lootMin = 1;
	  lootMax = 4;		
	  lootPos[] = {{4.93188,-17.0444,-2.63063},{-3.82813,-18.6699,-2.63036},{-4.46387,16.6665,-2.63651},{5.78711,18.9473,-2.6369},{3.9541,4.88428,-2.63446},{-2.99072,-4.16748,-2.63287}};
	  zombiePos[] = {{-3.45688,-3.38164,0.53116}};
	};

	class Land_bo_Barn_W_02: A2Farm {
	  lootMin = 1;
	  lootMax = 4;	
      lootPos[] = {{3.16504,5.56543,-2.31409},{3.35938,-0.152344,-2.31305},{2.53613,-5.89453,-2.30957},{-2.94629,-5.01367,-2.31006},{-2.84375,0.212891,-2.31183},{-5.63281,4.8291,-2.31363}};
	  zombiePos[] = {{-3.59209,-3.99417,0.802444}};
	}; 
					
	class Land_bo_Farm_Cowshed_c: A2Farm {
	  lootMin = 1;
	  lootMax = 1;	
	  lootPos[] = {{-2.41504,2.98633,-3.12582}};	
	  zombiePos[] = {{-0.78894,-0.630724,-3.12584}};
	};
	
	class Land_bo_Farm_Cowshed_b: A2Farm {
	  lootMin = 1;
	  lootMax = 3;	
	  lootPos[] = {{4.68506,2.18945,-3.04105},{0.0620117,0.0517578,-3.11111},{-4.77441,-2.4834,-3.05106}};
	  zombiePos[] = {{-3.30227,-3.74579,0.0914383}};
	};
		
	class Land_bo_Shed_W02: A2Farm {
	  lootMin = 1;
	  lootMax = 1;	
	  lootPos[] = {{0.688232,1.88281,-0.00292969}};
	};
		
//Medium Value//
	class Land_bo_a_stationhouse: A2MilitaryCivilian {
	  lootMin = 1;
	  lootMax = 6;		
	  lootPos[] = {{-2.40723,-7.77539,-9.47058},{-2.23633,-7.36035,-4.6489},{-2.68555,-7.7207,-0.0437927},{-1.97656,-8.07227,4.41139},{3.4375,-4.99316,-9.47058},{3.24707,0.807617,-9.47058},{9.83008,-5.37988,-9.47058},{9.52246,0.480469,-9.47058},{16.1387,-5.37793,-9.47058},{16,0.582031,-9.47058},{3.50195,0.0791016,-0.507904},{-6.03125,3.97852,-0.507904},{-9.64355,-5.26855,-0.507904},{3.51563,-5.60156,-4.5079},{9.5,1.56152,-4.5079}};
	  zombiePos[] = {{10.8872,0.389162,0.038765}};
	};
	
	class Land_bo_wagon_box: A2MilitaryCivilian {
	  lootMin = 1;
	  lootMax = 2;	 
	  lootPos[] = {{0.511719,3.57617,-0.776585},{0.460938,-3.25195,-0.77667}};
	};

	class Land_bo_wagon_flat: A2MilitaryCivilian {
	  lootMin = 1;
	  lootMax = 3;	 
	  lootPos[] = {{-0.0292969,6.78906,0.27506},{-0.0292969,5.04883,0.27506},{-0.0292969,2.45117,0.27506},{-0.00195313,-0.884766,0.27506},{-0.00976563,-2.61523,0.27506},{-0.00976563,-4.66406,0.27506},{-0.00976563,-6.78516,0.27506}};
	};	

//Medium Value// 
	class Land_bo_A_Castle_Bergfrit: A2MilitaryCastle {
	  lootMin = 1;
	  lootMax = 4;	
	  lootPos[] = {{0.18457,1.36816,-2.8364},{2.1084,-2.05713,-2.83636},{-1.26367,-2.71533,-2.8364},{0.426758,-1.54395,8.76691},{2.33398,3.75342,8.76691},{-2.52637,-4.47412,16.856},{1.625,-0.443359,16.8504},{-3.16992,5.00195,16.856}};
	}; 
		
	class Land_bo_A_Castle_Gate: A2MilitaryCastle  {
	  lootMin = 1;
	  lootMax = 3;	
	  lootPos[] = {{7.125,1.06055,-2.92116},{7.18652,3.38379,-2.91597},{4.69531,3.71289,-2.94855}};
	  zombiePos[] = {{-0.683685,5.36341,0.222771}};
	}; 
	
//Other A2 Military Loot//
	class Land_bo_Wreck_Van_F: A2MilitaryVanWreck {
	  lootMin = 4;
	  lootMax = 6;		
	  lootPos[] = {{0.0772705,-4.03003,-1.00754},{-0.177002,4.10425,-1.00754},{-2.69043,0.0397949,-1.00754},{2.34595,0.575439,-1.00754},{2.53198,-2.43823,-1.00754},{2.35083,3.24561,-1.00754},{-2.69116,2.99585,-1.00754},{-2.79126,-3.01904,-1.00754}};
	};	
		
	class Land_bo_Mil_Barracks_i: A2MilitaryBarracks {
	  lootMin = 1;
	  lootMax = 6;		
	  lootPos[] = {{5.24805,-1.94922,-1.09823},{5.34375,-0.103516,-1.09823},{1.57422,-2.27344,-1.09823},{1.75,-0.0664063,-1.09823},{-1.6875,-2.19141,-1.09823},{-1.375,-0.238281,-1.09823},{-4.92188,-2.10156,-1.09823},{-4.66797,-0.175781,-1.09823},{-8.47852,-2.20313,-1.09823},{-8.05273,-0.109375,-1.09823}};
	  zombiePos[] = {{-3.95122,2.30653,0.270132}};
	};	
	
	class Land_bo_A_TVTower_Base: A2MilitaryRadioTower {
	  lootMin = 1;
	  lootMax = 6;		
	  lootPos[] = {{-1.08618,1.86328,-2.21574},{-1.3573,-0.809082,-2.21574},{-1.68518,-3.20129,-2.21873},{-1.60193,-7.74927,-2.2167},{-1.52039,6.90552,-2.21474},{-9.10291,-1.25195,-2.21474},{-6.07556,-6.33582,-2.21474},{-6.59375,5.1333,-2.21474},{3.05139,-6.13306,-2.21474},{5.6272,-0.486084,-2.21474},{3.34009,5.24768,-2.21474}};
	  zombiePos[] = {{-1.20921,0.411961,0.640335}};
	};
	
	class Land_bo_Mil_ControlTower: A2MilitaryATC {
	  lootMin = 1;
	  lootMax = 6;		
	  lootPos[] = {{1.65076,4.75684,-9.6287},{4.16174,4.73022,-9.6287},{7.8075,5.74512,-9.6287},{9.87708,4.02515,-9.6287},{9.8623,3.82983,-7.4387},{9.99561,5.71362,-7.4387},{5.00964,4.77051,-5.4637},{2.33398,4.8457,-5.4637},{7.26489,3.56348,-1.0687},{7.01306,-0.708496,-1.0687},{2.51367,-0.699707,-1.0687},{2.48499,2.17944,-1.0687},{4.91357,0.948242,-1.06869},{9.70276,-3.91968,-1.05692},{9.78821,5.73218,-1.05693},{0.19043,5.79126,-1.05693},{0.0131836,-3.80249,-1.05693},{4.69629,-3.82104,-1.05693},{9.97327,1.0813,-1.05692},{5.06409,5.96631,-1.05692},{-0.171387,1.07104,-1.05692},{7.15051,1.05322,2.80337},{4.9137,3.1958,2.81182},{2.26709,0.967773,2.80898},{4.86096,-1,2.82623}};
	  zombiePos[] = {{-0.149811,3.63454,0.551438}};
	};
	
	class Land_bo_UWreck_MV22_F: A2MilitaryPlaneWreck {
	  lootMin = 1;
	  lootMax = 6;		
	  lootPos[] = {{1.936,5.2774,-4.38292},{-6.28259,8.10419,-4.27865},{-4.30713,1.29462,-4.22514},{-12.0403,-4.92523,-3.55208},{-5.64526,-11.5303,-3.69648},{-2.72067,-5.99091,-4.0125},{-5.15765,-16.8342,-3.52923},{9.97238,-24.4118,-3.76867},{9.50751,-14.2923,-4.06245},{6.68307,-7.01849,-4.29121},{8.45764,1.06281,-4.32564},{9.77118,11.36,-4.34763},{14.7074,5.39496,-4.29012},{16.9778,-3.75232,-4.24202},{20.4492,14.1458,-4.31509},{5.48044,23.6175,-4.01903},{-28.5232,6.09955,-2.32732},{-30.229,-8.43988,-1.85176},{-21.4947,-18.5224,-2.34182},{-13.0705,-28.8453,-2.62291},{1.39407,-32.9947,-3.1781},{17.7483,-27.7422,-3.94915}};
	};
	
	class Land_bo_Dum_mesto2: A2Residential {
	  lootMin = 2;
	  lootMax = 4;		
	  lootPos[] = {{-2.14551,-5.73145,-4.34475},{1.80078,-6.46387,-4.34475},{-1.51074,-2.07422,-4.34475},{1.17871,6.31055,-4.34474},{-1.7793,5.72656,-0.944},{-2.02539,-5.67578,-0.944},{-2.12891,-2.90039,-0.944},{1.5625,-6.28223,-0.944}};
	};	

	class Land_bo_Sara_domek_sedy: A2Residential {
	  lootMin = 1;
	  lootMax = 2;		
	  lootPos[] = {{4.55078,2.56055,-2.14195},{-1.33496,1.01758,-2.14195},{-4.11133,0.570313,-2.14195}};
	};	
	
	class Land_bo_dum_rasovna: A2Residential {
	  lootMin = 1;
	  lootMax = 2;		
	  lootPos[] = {{-0.904297,2.04199,-2.66958},{2.27148,2.41309,-2.66958},{0.109375,0.424316,0.272606}};
	};	
	

	
	class Land_bo_misc_deerstand: A2Residential {
	  lootMin = 1;
	  lootMax = 1;		
	  lootPos[] = {{0.671875,-0.494141,1.08538}};
	};
	
	
};