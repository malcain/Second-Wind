/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/

#include "basicDefines.hpp"

class CfgPatches
{
	class breakingpoint_weapons_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Anims_F","A3_Anims_F_Config_Sdr","breakingpoint_weapons","A3_Weapons_F","a3_sounds_f","a3_sounds_f_exp","a3_weapons_f_exp","jsrs_soundmod_framework","A3_characters_F","A3_Data_F","breakingpoint_ui","A3_Weapons_F_Mod"};
	};
};

//Global External References
class Mode_SemiAuto;
class Mode_FullAuto;
class recoil_default;
class Mode_Burst;

/*
	Breaking Point: Melee Weapons
		By Deathlyrage
*/

class CfgRecoils
{
	Swing_recoil[] = {0,0.06,-0.1,0,0.1,-0.12,0.1,0,0};

	class recoil_22lr: recoil_default
	{
		muzzleOuter[] = {0.2,0.6,0.2,0.2};
		kickBack[] = {0.01,0.03};
		temporary = 0.01;
	};
	class recoil_P90: recoil_default
	{
		muzzleOuter[] = {0.3,0.6,0.3,0.3};
		kickBack[] = {0.01,0.05};
		temporary = 0.01;
	};
};

class ItemActions
{
	class Use
	{
		text = "";
		script = "";
		use[] = {};
	};
};

#include "CfgMoves.cpp"

#include "CfgGesturesMale.cpp"

class BP_Melee : Mode_SemiAuto
{
	multiplier = 1;
	burst = 5;
	displayName = "Hack";
	dispersion = 0.1;
	sound[] = {"", 0, 1};
	soundContinuous = 1;
	reloadTime = 1;
	magazineReloadTime = 1;
	ffCount = 1;
	optics = "false";
	recoil = "empty";
	autoFire = "true";
	CraterEffects = "NoCrater";
	explosionEffects = "NoExplosion";
	aiRateOfFire = 0.7;	// delay between shots at given distance
	aiRateOfFireDistance = 2.2;
	useAction = 1;
	useActionTitle = "GestureSwing";
	recoilProne = "empty";
	showToPlayer = "true";
	minRange = 0;
	minRangeProbab = 0.8;
	midRange = 0.3;
	midRangeProbab = 0.8;
	maxRange = 3;
	maxRangeProbab = 0;
	soundBurst = 1;
};

/* -------------------------------- */
#include "CfgSounds.cpp"

class CfgWeapons
{
	class SlotInfo;
    class LinkedItems;
    class Default;	// External class reference
	class ItemCore;	// External class reference
	class InventoryMuzzleItem_Base_F;	   // External class reference
	class InventoryOpticsItem_Base_F;      // External class reference
    class InventoryFlashLightItem_Base_F;  // External class reference
	class InventoryUnderItem_Base_F;       // External class reference
	class Snip;	            // External class reference
	class GunParticles;     // External class reference
	class muzzle_snds_L;    // External class reference
	class muzzle_snds_H_MG;	// External class reference
	class muzzle_snds_H;    // External class reference
	class muzzle_snds_B;    // External class reference
	class muzzle_snds_M;    // External class reference
    class muzzle_snds_acp;	// External class reference
	class acc_pointer_IR;	// External class reference
	class acc_flashlight;	// External class reference
	class PistolCore;	// External class reference
	class Pistol;       // External class reference
    class Rifle;        // External class reference
    class RifleCore;    // External class reference
	class Pistol_Base_F;
	class Rifle_Base_F;
	class Rifle_Long_Base_F;
	class WeaponSlotsInfo;
	class ItemInfo;
	class CowsSlot;
	class PointerSlot;
	class MuzzleSlot;
	class UGL_F;
	class GrenadeLauncher;
    //Pistols
	class hgun_Pistol_heavy_02_F;
	class hgun_Rook40_F;
	class hgun_P07_F;
	class hgun_ACPC2_F;
	class hgun_Pistol_heavy_01_F;
	class Binocular;
	class arifle_AKS_base_F;
	class arifle_AKM_base_F;
	class arifle_AK12_base_F;
	class LMG_03_base_F;
	class arifle_SPAR_01_base_F;
	class arifle_SPAR_02_base_F;
	class arifle_SPAR_03_base_F;
	class arifle_CTAR_base_F;
	class arifle_CTARS_base_F;
	class arifle_ARX_base_F;
	class DMR_07_base_F;
	class SMG_05_base_F;

	class HMG_M2;
	class BP_HMG_M2 : HMG_M2
	{
		displayName = "BP M2 HMG .50";
		magazines[] = {"BP_100Rnd_127x99_box"};
	};

	class BP_Binocular_Hunter: Binocular
	{
		author = "BreakingPoint";
		_generalMacro = "Hunting Binocular";
		opticsDisablePeripherialVision = 1;
		weaponPoolAvailable = 1;
		scope = 2;
		simulation = "Binocular";
		model = "\A3\Weapons_f\binocular\binoculars_proxy";
		modelOptics[] = {"\breakingpoint_weapons\scopes\bek_hbino_r0.p3d", "\breakingpoint_weapons\scopes\bek_hbino_r1.p3d"};
		opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
		visionMode[] = {"Normal"};
		picture = "\A3\Weapons_F\Data\UI\gear_binoculars_CA.paa";
		value = 5;
		type = 4096;
		displayName = "Hunting Binocular 6x-14X";
		nameSound = "binoculars";
		descriptionUse = "Hunting Binocular";
		reloadTime = 0;
		sound[] = {"",0,1};
		canLock = 0;
		optics = 1;
		forceOptics = 0;
		useAsBinocular = 1;
		primary = 0;
		//opticsZoomMin = 0.035;
		//opticsZoomMax = 0.035;
		opticsZoomMin = 0.017857;
		opticsZoomMax = 0.0416667;
		opticsZoomInit = 0.017857;
		discretefov[] = {0.0416667, 0.017857};
		discreteInitIndex = 0;
		minRange = 150;
		midRange = 500;
		maxRange = 2500;
		magazines[] = {};
		class Library
		{
				libTextDesc = "Hunting Binocular 6-14X";
		};
		descriptionShort = "Hunting Binocular 6-14X";
		class WeaponSlotsInfo
		{
				mass = 10;
		};
	};

	class Rifle_Base_F_BP: Rifle_Base_F
	{
		class Butt: UGL_F
		{
			maxZeroing = 5;
			discreteDistanceInitIndex = 0;
			discreteDistance[] = {5};
			magazines[] = {"BP_Rifle_Butt"};
			displayName = "Melee";
			modes[] = {"Single"};
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class BaseSoundModeType
				{
					closure1[] = {};
					soundClosure[] = {};
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.95, 10};
					begin2[] = {};
					soundBegin[] = {"begin1", 1};
				};
			};
			reloadMagazineSound[] = {};
			drySound[] = {};
			magazineReloadTime = 0;
			autoReload = 1;
			reloadTime = 0.400000;
			optics = 0;
			modelOptics = "-";
			cameraDir = "";
			memoryPointCamera = "eye";
			opticsZoomMin = 0.375000;
			opticsZoomMax = 1.100000;
			opticsZoomInit = 0.750000;
			weaponInfoType = "RscWeaponZeroing";
			flash = "";
			flashSize = 0;
			class GunParticles: GunParticles
			{
				class FirstEffect
				{
					effectName = "";
					positionName = "Usti hlavne";
					directionName = "Konec hlavne";
				};
			};
		};
	};

	/*
		Breaking Point: Melee Weapons
			By Deathlyrage
	*/


	class MeleeWeapon : Rifle
	{
		scope = 2;
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		canDrop = 0;
		cursor = "EmptyCursor";
		cursorAim = "throw";
		cursorSize = 1;
		weaponInfoType = "RscWeaponEmpty";
	};

	class MeleeHatchet : MeleeWeapon
	{
		autoreload = 1;
		scope = 2;
		type = 4;
		primary = 0;
		weaponReloadtime = 0.25;
		model = "\breakingpoint_weapons\models\Hatchet\bp_Hatchet.p3d";
		picture = "\breakingpoint_weapons\icons\gear_hatchet_x_CA.paa";
		displayName = "Hatchet";
		descriptionUse = "Hatchet";
		reloadAction = "ReloadRPG";
		magazines[] = {"Hatchet_Swing"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\Hatchet_Idle.rtm"};
		descriptionShort = "$STR_EQUIP_DESC_41";
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound};
			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"", 0.00006, 1, 10};
 				closure2[] = {"", 0.00006, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
				begin1[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.95, 10};
				begin2[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.70, 10};
				begin3[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.60, 10};
				begin4[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.80, 10};
				soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
 			};
			dispersion = 0.0092;
			soundContinuous = 0;
			reloadTime = 0.6;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 35;
			allowedSlots[] = {901, 801, 701};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
		};
	};

	class MeleeHatchet_WDL : MeleeHatchet
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Hatchet\hatchet_wdl_co.paa"};
	};

	class MeleeHatchet_DES : MeleeHatchet
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Hatchet\hatchet_des_co.paa"};
	};

	class MeleeHatchet_URB : MeleeHatchet
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Hatchet\hatchet_urb_co.paa"};
	};

	class MeleeKatana : MeleeWeapon
	{
		autoreload = 1;
		scope = 2;
		type = 4;
		primary = 0;
		dexterity = 9.000000;
		weaponReloadtime = 0.25;
		model = "\breakingpoint_weapons\models\Hatchet\bp_katana.p3d";
		picture = "\breakingpoint_weapons\icons\gear_katana_melee_x_CA.paa";
		displayName = "Katana";
		descriptionUse = "Katana";
		//reloadAction = "ReloadRPG";
		magazines[] = {"Katana_Swing"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\Hatchet_Idle.rtm"};
		descriptionShort = "Traditional Japanese sword, must have belonged to a collector";
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound};
			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"", 0.00006, 1, 10};
 				closure2[] = {"", 0.00006, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
				begin1[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.95, 10};
				begin2[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.70, 10};
				begin3[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.60, 10};
				begin4[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.80, 10};
				soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
 			};
			dispersion = 0.0092;
			soundContinuous = 0;
			reloadTime = 0.6;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 35;
			allowedSlots[] = {901, 801, 701};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
		};
	};

	class MeleeKatana_WDL : MeleeKatana
	{
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Hatchet\Blade2_wdl_co.paa", "breakingpoint_weapons\textures\Hatchet\Tsuka2_wdl_co.paa"};
	};

	class MeleeKatana_DES : MeleeKatana
	{
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Hatchet\Blade2_des_co.paa", "breakingpoint_weapons\textures\Hatchet\Tsuka2_des_co.paa"};
	};

	class MeleeKatana_URB : MeleeKatana
	{
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Hatchet\Blade2_urb_co.paa", "breakingpoint_weapons\textures\Hatchet\Tsuka2_urb_co.paa"};
	};

	class MeleePickaxe : MeleeWeapon
	{
		autoreload = 1;
		scope = 2;
		type = 4;
		primary = 0;
		weaponReloadtime = 0.25;
		model = "\breakingpoint_weapons\models\Hatchet\bp_pickaxe.p3d";
		picture = "\breakingpoint_weapons\icons\gear_axe_rifle_x_ca.paa";
		displayName = "Pick Axe";
		descriptionUse = "Pick Axe";
		//reloadAction = "ReloadRPG";
		magazines[] = {"Pickaxe_Swing"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\Hatchet_Idle.rtm"};
		descriptionShort = "Basic farm implement";
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound};
			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"", 0.00006, 1, 10};
 				closure2[] = {"", 0.00006, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
				begin1[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.65, 10};
				begin2[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.70, 10};
				begin3[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.90, 10};
				begin4[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.80, 10};
				soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
 			};
			dispersion = 0.0092;
			soundContinuous = 0;
			reloadTime = 1.0;
			recoil = "recoil_single_primary_prone_3outof10";
			recoilProne = "";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 35;
			allowedSlots[] = {901, 801, 701};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
		};
	};

	class MeleePickaxe_WDL : MeleePickaxe
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Hatchet\pickaxe_wdl_co.paa"};
	};

	class MeleePickaxe_DES : MeleePickaxe
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Hatchet\pickaxe_des_co.paa"};
	};

	class MeleePickaxe_URB : MeleePickaxe
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Hatchet\pickaxe_urb_co.paa"};
	};

	class MeleeHammer : MeleeWeapon
	{
		autoreload = 1;
		scope = 2;
		type = 4;
		primary = 0;
		weaponReloadtime = 0.45;
		model = "\breakingpoint_weapons\models\Hatchet\bp_hammer.p3d";
		picture = "\breakingpoint_weapons\icons\gear_hammer_rifle_x_CA.paa";
		displayName = "Sledge Hammer";
		descriptionUse = "Sledge Hammer";
		//reloadAction = "ReloadRPG";
		magazines[] = {"Hammer_Swing"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\Hatchet_Idle.rtm"};
		descriptionShort = "I wanna be...";
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound};
			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";

 				closure1[] = {"", 0.00006, 1, 10};
 				closure2[] = {"", 0.00006, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
				begin1[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.55, 10};
				begin2[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.30, 10};
				begin3[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.70, 10};
				begin4[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.90, 10};
				soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
 			};
			dispersion = 0.0092;
			soundContinuous = 0;
			reloadTime = 1.2;
			recoil = "recoil_single_primary_prone_3outof10";
			recoilProne = "";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 35;
			allowedSlots[] = {901, 801, 701};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_Wire"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
		};
	};

	class MeleeHammer_WDL : MeleeHammer
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Hatchet\sledge_wdl_co.paa"};
	};

	class MeleeHammer_DES : MeleeHammer
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Hatchet\sledge_des_co.paa"};
	};

	class MeleeHammer_URB : MeleeHammer
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Hatchet\sledge_urb_co.paa"};
	};

	class MeleeHammer2 : MeleeWeapon
	{
		autoreload = 1;
		scope = 2;
		type = 4;
		primary = 0;
		model = "\breakingpoint_weapons\models\Hatchet\bp_hammerW.p3d";
		picture = "\breakingpoint_weapons\icons\gear_hammer_rifle_x_CA.paa";
		displayName = "Modified Sledge Hammer";
		descriptionUse = "Sledge Hammer";
		magazines[] = {"Hammer_Swing2"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\Hatchet_Idle.rtm"};
		descriptionShort = "I wanna be...";
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound};
			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"", 0.00006, 1, 10};
 				closure2[] = {"", 0.00006, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
				begin1[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.55, 10};
				begin2[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.30, 10};
				begin3[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.70, 10};
				begin4[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.90, 10};
				soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
 			};
			dispersion = 0.0092;
			soundContinuous = 0;
			reloadTime = 1.2;
			recoil = "recoil_single_primary_prone_3outof10";
			recoilProne = "";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 35;
			allowedSlots[] = {901, 801, 701};

			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_Wire"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
		};
	};

	class MeleeHammer2_WDL : MeleeHammer2
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Hatchet\sledge_wdl_co.paa"};
	};

	class MeleeHammer2_DES : MeleeHammer2
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Hatchet\sledge_des_co.paa"};
	};

	class MeleeHammer2_URB : MeleeHammer2
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Hatchet\sledge_urb_co.paa"};
	};

	class MeleeShovel: MeleeWeapon
	{
		autoreload = 1;
		scope = 2;
		type = 4;
		primary = 0;
		weaponReloadtime = 0.25;
		model = "\breakingpoint_weapons\models\hatchet\bp_shovel.p3d";
		picture = "\breakingpoint_weapons\icons\gear_shovel_rifle_x_ca.paa";
		displayName = "Shovel";
		descriptionUse = "Shovel";
		magazines[] = {"Shovel_Swing"};
		handAnim[] = {"OFP2_ManSkeleton","\breakingpoint_weapons\anim\Hatchet_Idle.rtm"};
		descriptionShort = "Standard gardening tool. Can be used for construction and as an improvised weapon.";
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {0};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"",6e-005,1,10};
				closure2[] = {"",6e-005,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class 0: BaseSoundModeType
			{
				begin1[] = {"breakingpoint_sfx\effects\Swing.wav",1.994328,0.65,10};
				begin2[] = {"breakingpoint_sfx\effects\Swing.wav",1.994328,0.7,10};
				begin3[] = {"breakingpoint_sfx\effects\Swing.wav",1.994328,0.9,10};
				begin4[] = {"breakingpoint_sfx\effects\Swing.wav",1.994328,0.8,10};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			dispersion = 0.0092;
			soundContinuous = 0;
			reloadTime = 0.8;
			recoil = "recoil_single_primary_prone_3outof10";
			recoilProne = "";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 35;
			allowedSlots[] = {901,801,701};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class CowsSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
		};
	};

	class MeleeShovel_WDL: MeleeShovel
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Hatchet\shovel_wdl_co.paa"};
	};

	class MeleeShovel_DES: MeleeShovel
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Hatchet\shovel_des_co.paa"};
	};

	class MeleeShovel_URB: MeleeShovel
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Hatchet\shovel_urb_co.paa"};
	};

	class MeleeCrowbar: MeleeWeapon
	{
		autoreload = 1;
		scope = 2;
		type = 4;
		primary = 0;
		weaponReloadtime = 0.25;
		model = "\breakingpoint_weapons\models\hatchet\bp_crowbar.p3d";
		picture = "\breakingpoint_weapons\icons\gear_crowbar_rifle_x_ca.paa";
		displayName = "Crowbar";
		descriptionUse = "Crowbar";
		magazines[] = {"Shovel_Swing"};
		handAnim[] = {"OFP2_ManSkeleton","\breakingpoint_weapons\anim\Hatchet_Idle.rtm"};
		descriptionShort = "A tool consisting of a metal bar with a single curved end and flattened points, often with a small fissure on one or both ends for removing nails.";
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {0};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"",6e-005,1,10};
				closure2[] = {"",6e-005,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class 0: BaseSoundModeType
			{
				begin1[] = {"breakingpoint_sfx\effects\Swing.wav",1.994328,0.65,10};
				begin2[] = {"breakingpoint_sfx\effects\Swing.wav",1.994328,0.7,10};
				begin3[] = {"breakingpoint_sfx\effects\Swing.wav",1.994328,0.9,10};
				begin4[] = {"breakingpoint_sfx\effects\Swing.wav",1.994328,0.8,10};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			dispersion = 0.0092;
			soundContinuous = 0;
			reloadTime = 0.8;
			recoil = "recoil_single_primary_prone_3outof10";
			recoilProne = "";
		};

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 35;
			allowedSlots[] = {901,801,701};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class CowsSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
		};
	};

	class MeleeCrowbar_WDL: MeleeCrowbar
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Hatchet\crowbar_wdl_co.paa"};
	};

	class MeleeCrowbar_DES: MeleeCrowbar
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Hatchet\crowbar_des_co.paa"};
	};

	class MeleeCrowbar_URB: MeleeCrowbar
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Hatchet\crowbar_urb_co.paa"};
	};

	class MeleeClub: MeleeWeapon
	{
		autoreload = 1;
		scope = 2;
		type = 4;
		primary = 0;
		weaponReloadtime = 0.25;
		model = "\breakingpoint_weapons\models\hatchet\bp_club.p3d";
		picture = "\breakingpoint_weapons\icons\gear_club_rifle_x_ca.paa";
		displayName = "Barbed Club";
		descriptionUse = "Barbed Club";
		magazines[] = {"Shovel_Swing"};
		handAnim[] = {"OFP2_ManSkeleton","\breakingpoint_weapons\anim\Hatchet_Idle.rtm"};
		descriptionShort = "";
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {0};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"",6e-005,1,10};
				closure2[] = {"",6e-005,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class 0: BaseSoundModeType
			{
				begin1[] = {"breakingpoint_sfx\effects\Swing.wav",1.994328,0.65,10};
				begin2[] = {"breakingpoint_sfx\effects\Swing.wav",1.994328,0.7,10};
				begin3[] = {"breakingpoint_sfx\effects\Swing.wav",1.994328,0.9,10};
				begin4[] = {"breakingpoint_sfx\effects\Swing.wav",1.994328,0.8,10};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			dispersion = 0.0092;
			soundContinuous = 0;
			reloadTime = 0.8;
			recoil = "recoil_single_primary_prone_3outof10";
			recoilProne = "";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 35;
			allowedSlots[] = {901,801,701};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class CowsSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
		};
	};

	class MeleeClub_WDL: MeleeClub
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Hatchet\club_wdl_co.paa"};
	};

	class MeleeClub_DES: MeleeClub
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Hatchet\club_des_co.paa"};
	};

	class MeleeClub_URB: MeleeClub
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Hatchet\club_urb_co.paa"};
	};

	/*

	class MeleeMachete: MeleeWeapon {
		autoreload = 1;
		scope = 2;
		weaponreloadtime = 0.57;
		model = "\breakingpoint_weapons\models\bp_Machete_weaponized.p3d";
		picture = "\breakingpoint_weapons\icons\gear_machete_x_CA.paa";
		displayName = "Machete";
		descriptionUse = "Machete";
		magazines[] = {"Crowbar_Swing"};
		descriptionShort = "An agricultural tool turned into a weapon, the Machete may be less versatile than the common hatchet, but it packs a punch.";

		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 35;
			allowedSlots[] = {901};

			class MuzzleSlot : SlotInfo {
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
			};

			class CowsSlot : SlotInfo {
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {};
			};

			class PointerSlot : PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
			};
		};
	};

	class MeleeTireIron: MeleeWeapon  {
		autoreload = 1;
		scope = 2;
		weaponreloadtime = 0.35;
		model = "\breakingpoint_weapons\models\bp_Tire_iron_weaponized.p3d";
		picture = "\breakingpoint_weapons\icons\gear_tireiron_x_ca.paa";
		displayName = "Tire Iron";
		descriptionUse = "Tire Iron";
		magazines[] = {"Crowbar_Swing"};
		descriptionShort = "Heavy duty steel repair tool. Can be used for replacing vehicle wheels and as an improvised weapon.";

		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 35;
			allowedSlots[] = {901};

			class MuzzleSlot : SlotInfo {
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
			};

			class CowsSlot : SlotInfo {
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {};
			};

			class PointerSlot : PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
			};
		};
	};

    class MeleeBaseballBat: MeleeWeapon   {
		autoreload = 1;
		scope = 2;
		weaponreloadtime = 0.55;
		model = "\breakingpoint_weapons\models\bp_Baseball_bat_weaponized.p3d";
		picture = "\breakingpoint_weapons\icons\gear_baseball_bat_x_ca.paa";
		displayName = "Baseball Bat";
		descriptionUse = "Baseball Bat";
		magazines[] = {"Crowbar_Swing"};
		descriptionShort = "Classic American wooden baseball bat, effective weapon in close quarters.";

		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 45;
			allowedSlots[] = {901};

			class MuzzleSlot : SlotInfo {
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
			};

			class CowsSlot : SlotInfo {
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {};
			};

			class PointerSlot : PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
			};
		};
	};

    class MeleeBaseballBat_Barbed: MeleeWeapon   {
		autoreload = 1;
		scope = 2;
		weaponreloadtime = 0.55;
		model = "\breakingpoint_weapons\models\bp_Baseball_bat_barbed_weaponized.p3d";
		picture = "\breakingpoint_weapons\icons\gear_baseball_bat_barbed_x_ca.paa";
		displayName = "Baseball Bat Barbed";
		descriptionUse = "Baseball Bat Barbed";
		magazines[] = {"Machete_Swing"};
		descriptionShort = "Classic American wooden baseball bat wrapped with barbed wire. Extremely effective melee weapon.";

		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 55;
			allowedSlots[] = {901};

			class MuzzleSlot : SlotInfo {
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
			};

			class CowsSlot : SlotInfo {
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {};
			};

			class PointerSlot : PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
			};
		};
	};*/

	class BP_Crossbow : Rifle_Base_F_BP
	{
		author = "Kol9yN, Boolyq";
		displayName = "PSE TAC Elite Crossbow";
		descriptionUse = "Crossbow";
		descriptionShort = "Crossbow";
		scope = 2;
		picture = "\breakingpoint_weapons\icons\gear_crossbow_rifle_x_ca.paa";
		model = "breakingpoint_weapons\models\crossbow\bp_crossbow.p3d";
		magazines[] = {"BP_Arrow_Mag","BP_Arrow_Rambo","BP_Arrow_Tranq","BP_Arrow_Poison","BP_Arrow_Fire"};
		muzzles[] = {"this", "Butt"};
		class Library
		{
			libTextDesc = "PSE TAC Elite Crossbow";
		};
		reloadAction = "crossbow_reload";
		maxZeroing = 300;
		discreteDistanceInitIndex = 3;
		discreteDistance[] = { 25,50,75,100,125,150,175,200,225,250,275,300 };
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 0.75;
		canShootInWater = 1;
		class GunParticles : GunParticles
		{
			class SecondEffect
			{
				//positionName = "Nabojnicestart";
				//directionName = "Nabojniceend";
				//effectName = "CaselessAmmoCloud";
				positionName = "";
				directionName = "";
				effectName = "";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 70;
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo {};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_compm4s", "optic_MRCO", "optic_aco", "optic_Holosight", "BP_SOS", "BP_optic_ACOG", "BP_M3A", "BP_M3A2","BP_M3AN", "BP_MRT"};
				iconScale = 0.1;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight"}; //removed "BP_CPad" due to incorrect placement
				iconScale = 0.1;
			};
		};
		opticsZoomMin = 0.575;
		opticsZoomMax = 1.0;
		opticsZoomInit = 0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		handAnim[] = { "OFP2_ManSkeleton", "breakingpoint_weapons\anim\crossbow_handanim.rtm" };
		//handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F\Rifles\MX\data\Anim\MX.rtm"};
		dexterity = 0.8;
		inertia = 0.400000;
		caseless[] = { "", 1, 1, 1 };
		soundBullet[] = { "caseless", 1 };
		changeFiremodeSound[] = { "", 0.17782794, 1, 5 };
		modes[] = { "Single" };
		UiPicture = "";
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = { "A3\sounds_f\weapons\closure\closure_rifle_6", 0.4, 1, 5 };
				closure2[] = { "A3\sounds_f\weapons\closure\closure_rifle_7", 0.4, 1, 5 };
				soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
			};
			class StandardSound : BaseSoundModeType
			{
				begin1[] = { "breakingpoint_jsrs\sounds\crossbow-1.wav", 1, 1, 10 };
				begin2[] = { "breakingpoint_jsrs\sounds\crossbow-1.wav", 1, 1, 10 };
				soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
			};
			reloadTime = 4.8;
			magazineReloadTime = 4.8;
			//recoil = "recoil_single_trg";
			//recoilProne = "recoil_single_prone_trg";
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			dispersion = 0.00007;
			minRange = 1;
			minRangeProbab = 0.5;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.3;
		};
		aiDispersionCoefY = 2.0;
		aiDispersionCoefX = 1.0;
		drySound[] = { "A3\sounds_f\weapons\Other\dry_1", 0.56234133, 1, 35 };
		//reloadMagazineSound[] = { "A3\sounds_f\weapons\reloads\new_MX", 1.0, 1, 5 };
		reloadMagazineSound[] = { "breakingpoint_jsrs\sounds\crossbow_reload.wss", 1.0, 1, 20 };
	};
	class BP_Crossbow_DigitCamo : BP_Crossbow
	{
		displayName = "PSE TAC Elite Crossbow Digital Camo";
		picture = "\breakingpoint_weapons\icons\gear_crossbow_indp_rifle_x_ca.paa";
		descriptionUse = "Crossbow";
		linkedAttach[] = {"BP_Compm4s"};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\crossbow\crossbow_indp_co.paa"};
	};

	/*
		Breaking Point: Throwable Weapons
			By Valtiel
	*/


	class Throw: GrenadeLauncher
	{
		muzzles[] = {"BP_FlashMuzzle","BP_M84Muzzle", "BP_AlarmClockMuzzle", "HandGrenade_Stone", "HandGrenadeMuzzle", "MiniGrenadeMuzzle", "SmokeShellMuzzle", "SmokeShellYellowMuzzle", "SmokeShellGreenMuzzle", "SmokeShellRedMuzzle", "SmokeShellPurpleMuzzle", "SmokeShellOrangeMuzzle", "SmokeShellBlueMuzzle", "ChemlightGreenMuzzle", "ChemlightRedMuzzle", "ChemlightYellowMuzzle", "ChemlightBlueMuzzle", "KnifeMuzzle", "BookMuzzle", "MugMuzzle", "BrickMuzzle", "PotteryMuzzle", "VideotapeMuzzle", "ZipDiskMuzzle", "RockMuzzle", "PlateMuzzle", "TennisBallMuzzle", "CanMuzzle", "HammerMuzzle", "InfectedMuzzle", "ChemRMuzzle", "ChemGMuzzle", "ChemBMuzzle", "ChemYMuzzle"};

		class ThrowMuzzle: GrenadeLauncher
		{
			aidispersioncoefx = 6;
			aidispersioncoefy = 6;
			autoreload = 1;
			cursor = "EmptyCursor";
			cursoraim = "throw";
			enableattack = 0;
			keepininventory = 1;
			magazinereloadtime = 0;
			modeloptics = "";
			reloadsound[] = {"", 0.000316, 1};
			reloadtime = 0;
			showempty = 0;
			sound[] = {"", 0.000316, 1};
		};

		class BP_FlashMuzzle: ThrowMuzzle
		{
			displayName = "Flashbang";
			magazines[] = {"simplefb"};
		};

		class BP_M84Muzzle: ThrowMuzzle
		{
			displayName = "M84 Flashbang";
			magazines[] = {"BP_M84_Flash"};
		};
		class BP_AlarmClockMuzzle: ThrowMuzzle
		{
			displayName = "Alarm Clock";
			magazines[] = {"BP_AlarmClock_Black", "BP_AlarmClock_Red"};
		};
		class KnifeMuzzle: ThrowMuzzle
		{
			displayName = "Hunting Knife";
			magazines[] = {"Itemknife"};
		};

		class InfectedMuzzle: ThrowMuzzle
		{
			displayName = "Infected Needle";
			magazines[] = {"ItemInfectedNeedle"};
		};

		class BookMuzzle: ThrowMuzzle
		{
			displayName = "Book";
			magazines[] = {"ItemBook1", "ItemBook2", "ItemBook3"};
		};

		class MugMuzzle: ThrowMuzzle
		{
			displayName = "Mug";
			magazines[] = {"ItemMug"};
		};

		class BrickMuzzle: ThrowMuzzle
		{
			displayName = "Brick";
			magazines[] = {"ItemBrick1", "ItemBrick2"};
		};

		class PotteryMuzzle: ThrowMuzzle
		{
			displayName = "Pottery";
			magazines[] = {"ItemPottery"};
		};

		class VideotapeMuzzle: ThrowMuzzle
		{
			displayName = "VHS Tape";
			magazines[] = {"ItemVideoTape"};
		};

		class ZipDiskMuzzle: ThrowMuzzle
		{
			displayName = "ZipDisk";
			magazines[] = {"ItemZipDisk"};
		};

		class RockMuzzle: ThrowMuzzle
		{
			displayName = "Rock";
			magazines[] = {"ItemRock"};
		};

		class PlateMuzzle: ThrowMuzzle
		{
			displayName = "Dinner Plate";
			magazines[] = {"ItemPlate1", "ItemPlate2"};
		};

		class TennisBallMuzzle: ThrowMuzzle
		{
			displayName = "Tennis Ball";
			magazines[] = {"ItemTennisBall"};
		};

		class CanMuzzle: ThrowMuzzle
		{
			displayName = "Empty Can";
			magazines[] = {"ItemCanEmpty"};
		};

		class HammerMuzzle: ThrowMuzzle
		{
			displayName = "Hammer";
			magazines[] = {"ItemHammer"};
		};

		class ChemRMuzzle: ThrowMuzzle
		{
			displayName = "Chemlight";
			magazines[] = {"ChemR"};
		};

		class ChemGMuzzle: ThrowMuzzle
		{
			displayName = "Chemlight";
			magazines[] = {"ChemG"};
		};

		class ChemBMuzzle: ThrowMuzzle
		{
			displayName = "Chemlight";
			magazines[] = {"ChemB"};
		};

		class ChemYMuzzle: ThrowMuzzle
		{
			displayName = "Chemlight";
			magazines[] = {"ChemY"};
		};
	};

	class Put: Default
	{
		scope = 1;
		value = 0;
		type = 0;
		displayName = "$STR_DN_PUT";
		canDrop = 0;
		muzzles[] = {"IED1Muzzle","HumanTrapMuzzle"};

		class PutMuzzle: Default
		{
			sound[] = {"", 0.000316, 1};
			reloadSound[] = {"", 0.000316, 1};
			enableAttack = 0;
			optics = 0;
			showEmpty = 0;
			canLock = 0;
			primary = 10;
			minRange = 0;
			minRangeProbab = 0.100000;
			midRange = 3;
			midRangeProbab = 0.900000;
			maxRange = 15;
			maxRangeProbab = 0.040000;
			moveToInternal = 0;
			opticsZoomMin = 0.375000;
			opticsZoomMax = 1.100000;
			opticsZoomInit = 0.750000;
		};

		class IED1Muzzle: PutMuzzle
		{
			autoreload = 0;
			enableAttack = 1;
			magazines[] = {"BP_IED1_Mag"};
			picture = "\A3\Weapons_F\Data\clear_empty.paa";
			showToPlayer = 0;
		};
		class HumanTrapMuzzle: PutMuzzle
		{
			autoreload = 0;
			enableAttack = 1;
			magazines[] = {"Human_Trap_Mag"};
			displayName = "Human Trap";
			picture = "\A3\Weapons_F\Data\clear_empty.paa";
			showToPlayer = 0;
		};
	};
//------------------------|
//Apex DLC Additions|----------------------------------------------------------------------------------
//------------------------|

class BP_arifle_AKS_base_F : arifle_AKS_base_F { //AKS-74U Base
		_generalMacro = "arifle_AKS_base_F";
		author = "Bohemia Interactive";
		changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_firemode",0.177828,1,5};
		descriptionShort = "Assault Rifle<br />Caliber: 5.45x39 mm";
		dexterity = 1.6;
		displayName = "AKS-74U 5.45 mm";
		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_dry",0.177828,1,10};
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Exp\Rifles\AKS\Data\Anim\aks.rtm"};
		hiddenSelections[] = {"camo_1","camo_2"};
		htMax = 880;
		htMin = 7;
		inertia = 0.4;
		initSpeed = 735;
		magazines[] = {"BP_30Rnd_545x39_Mag_F","BP_30Rnd_545x39_Mag_Green_F","BP_30Rnd_545x39_Mag_Tracer_F","BP_30Rnd_545x39_Mag_Tracer_Green_F"};
		maxZeroing = 600;
		model = "\A3\Weapons_F_Exp\Rifles\AKS\AKS_F.p3d";
		modes[] = {"FullAuto","Single"};
		recoil = "recoil_aks";
		reloadAction = "GestureReloadAKS";
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_reload",1,1,10};
		scope = 0;
		class FullAuto : Mode_FullAuto
		{
			dispersion = 0.00203;
			maxRange = 25;
			maxRangeProbab = 0.05;
			midRange = 10;
			midRangeProbab = 0.7;
			minRange = 2;
			minRangeProbab = 0.9;
			reloadTime = 0.085;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType {};
			class SilencedSound : BaseSoundModeType {
				SoundSetShot[] = {"AK74_silencerShot_SoundSet","AK74_silencerTail_SoundSet","AK74_silencerInteriorTail_SoundSet"};
			};
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"AK74_Shot_SoundSet","AK74_Tail_SoundSet","AK74_InteriorTail_SoundSet"};
			};
		};
		class Library
		{
			libTextDesc = "The AKS-74U was created as an answer for the Soviet need for a fully automatic carbine. The gun is basically a shortened AK-74, which enabled significant production savings. Like the AK-74, this variant is also chambered in 5.45x39 mm, but its compact dimensions make it intended for special forces, vehicle crews, police patrols, etc. However, the lower muzzle velocity makes the AKS-74U effective up to only around 400 meters.";
		};
		class Single : Mode_SemiAuto
		{
			dispersion = 0.00203;
			maxRange = 200;
			maxRangeProbab = 0.2;
			midRange = 100;
			midRangeProbab = 0.7;
			minRange = 2;
			minRangeProbab = 0.5;
			reloadTime = 0.085;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType {};
			class SilencedSound : BaseSoundModeType
			{
				SoundSetShot[] = {"AK74_silencerShot_SoundSet","AK74_silencerTail_SoundSet","AK74_silencerInteriorTail_SoundSet"};
			};
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = {"AK74_Shot_SoundSet","AK74_Tail_SoundSet","AK74_InteriorTail_SoundSet"};
			};
		};
		class WeaponSlotsInfo
		{
			mass = 80;
			class CowsSlot : SlotInfo {
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {};
				iconPosition[] = {0.45,0.28};
				iconScale = 0.2;
			};
			class MuzzleSlot : SlotInfo
			{
				compatibleItems[] = {};
				iconPosition[] = {0,0.45};
				iconScale = 0.2;
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
			};
			class PointerSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconPosition[] = {0.35,0.45};
				iconScale = 0.2;
			};
			class UnderBarrelSlot : SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {};
				iconPosition[] = {0.2,0.8};
				iconScale = 0.3;
			};
		};
	};
	class BP_arifle_AKS_F : BP_arifle_AKS_base_F { //AKS-74U
		_generalMacro = "arifle_AKS_F";
		author = "Bohemia Interactive";
		baseWeapon = "arifle_AKS_F";
		displayName = "AKS-74U 5.45 mm";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\AKS\Data\aks74u_co.paa","\A3\Weapons_F_Exp\Rifles\AKS\Data\magazine_ak74_co.paa"};
		picture = "\A3\Weapons_F_Exp\Rifles\AKS\Data\UI\arifle_AKS_F_X_CA.paa";
		scope = 2;
	};

	class BP_arifle_AKM_base_F : arifle_AKM_base_F { //AKM Base
		_generalMacro = "arifle_AKM_base_F";
		author = "Bohemia Interactive";
		changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_firemode",0.177828,1,5};
		descriptionShort = "Assault Rifle<br />Caliber: 7.62x39 mm";
		dexterity = 1.4;
		displayName = "AKM 7.62 mm";
		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_dry",0.177828,1,10};
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Exp\Rifles\AKM\Data\Anim\akm.rtm"};
		hiddenSelections[] = {"camo_1","camo_2","camo_3"};
		htMax = 730;
		htMin = 11;
		inertia = 0.6;
		initSpeed = 715;
		magazines[] = {"BP_30Rnd_762x39_Mag_F","BP_30Rnd_762x39_Mag_Green_F","BP_30Rnd_762x39_Mag_Tracer_F","BP_30Rnd_762x39_Mag_Tracer_Green_F"};
		maxZeroing = 800;
		model = "\A3\Weapons_F_Exp\Rifles\AKM\AKM_F.p3d";
		modes[] = {"FullAuto","Single"};
		recoil = "recoil_akm";
		reloadAction = "GestureReloadAKM";
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_reload",1,1,10};
		scope = 0;
		class FullAuto : Mode_FullAuto
		{
			dispersion = 0.00145;
			maxRange = 30;
			maxRangeProbab = 0.05;
			midRange = 15;
			midRangeProbab = 0.7;
			minRange = 2;
			minRangeProbab = 0.9;
			reloadTime = 0.1;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType {};
			class SilencedSound : BaseSoundModeType {
				SoundSetShot[] = {"AK47_silencerShot_SoundSet","AK47_silencerTail_SoundSet","AK47_silencerInteriorTail_SoundSet"};
			};
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"AK47_Shot_SoundSet","AK47_Tail_SoundSet","AK47_InteriorTail_SoundSet"};
			};
		};
		class Library
		{
			libTextDesc = "The AKM gas operated assault rifle with a rotating bolt is a modernized version of the old AK-47. Despite the later introduction of the AK-74, it has remained in use in many countries all over the world with more than 10 million units built. Its improvements over the AK-47 made mass manufacturing simpler, but also decreased the weight and increased accuracy of the weapon. At the same time, the gun's exceptional wear and corrosion resistance has been preserved.";
		};
		class Single : Mode_SemiAuto
		{
			dispersion = 0.00145;
			maxRange = 250;
			maxRangeProbab = 0.2;
			midRange = 150;
			midRangeProbab = 0.7;
			minRange = 2;
			minRangeProbab = 0.5;
			reloadTime = 0.1;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType {};
			class SilencedSound : BaseSoundModeType
			{
				SoundSetShot[] = {"AK47_silencerShot_SoundSet","AK47_silencerTail_SoundSet","AK47_silencerInteriorTail_SoundSet"};
			};
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = {"AK47_Shot_SoundSet","AK47_Tail_SoundSet","AK47_InteriorTail_SoundSet"};
			};
		};
		class WeaponSlotsInfo
		{
			mass = 120;
			class CowsSlot : SlotInfo {
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {};
				iconPosition[] = {0.45,0.28};
				iconScale = 0.2;
			};
			class MuzzleSlot : SlotInfo
			{
				compatibleItems[] = {};
				iconPosition[] = {0,0.45};
				iconScale = 0.2;
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
			};
			class PointerSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconPosition[] = {0.35,0.45};
				iconScale = 0.2;
			};
			class UnderBarrelSlot : SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {};
				iconPosition[] = {0.2,0.8};
				iconScale = 0.3;
			};
		};
	};
	class BP_arifle_AKM_F : BP_arifle_AKM_base_F { //AKM
		_generalMacro = "arifle_AKM_F";
		author = "Bohemia Interactive";
		baseWeapon = "arifle_AKM_F";
		displayName = "AKM 7.62 mm";
		hiddenSelectionsTextures[] = {"A3\Weapons_F_Exp\Rifles\AKM\Data\akm_co.paa","\A3\Weapons_F_Exp\Rifles\AKM\Data\akm_wood_co.paa","\A3\Weapons_F_Exp\Rifles\AKM\Data\akm_steel_mag_co.paa"};
		picture = "\A3\Weapons_F_Exp\Rifles\AKM\Data\UI\arifle_AKM_F_X_CA.paa";
		scope = 2;
	};
	class BP_arifle_AKM_FL_F : BP_arifle_AKM_F { //AKM Flashlight ( Not an attachment, custom model )
		_generalMacro = "arifle_AKM_FL_F";
		author = "Bohemia Interactive";
		baseWeapon = "arifle_AKM_F";
		model = "\A3\Weapons_F_Exp\Rifles\AKM\AKM_flashlight_F.p3d";
		scope = 1;
		class FlashLight {
			ambient[] = {0.9,0.78,0.6};
			color[] = {180,156,120};
			coneFadeCoef = 5;
			dayLight = 0;
			direction = "flash";
			flareMaxDistance = "100.0f";
			flareSize = 1.4;
			innerAngle = 20;
			intensity = 20;
			outerAngle = 80;
			position = "flash dir";
			scale[] = {0};
			size = 1;
			useFlare = 1;
			class Attenuation {
				constant = 0;
				hardLimitEnd = 30;
				hardLimitStart = 20;
				linear = 0;
				quadratic = 1.1;
				start = 0.5;
			};
		};
	};

	class BP_arifle_AK12_base_F : arifle_AK12_base_F { //AK-12 Base
		_generalMacro = "arifle_AK12_base_F";
		author = "Bohemia Interactive";
		changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_firemode",0.316228,1,5};
		descriptionShort = "Assault Rifle<br />Caliber: 7.62x39 mm";
		dexterity = 1.4;
		displayName = "";
		distanceZoomMax = 300;
		distanceZoomMin = 300;
		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_dry",0.177828,1,10};
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Exp\Rifles\AKM\Data\Anim\akm.rtm"};
		hiddenSelections[] = {"camo"};
		htMax = 880;
		htMin = 7;
		inertia = 0.6;
		initSpeed = 900;
		magazines[] = {"BP_30Rnd_762x39_Mag_F","BP_30Rnd_762x39_Mag_Green_F","BP_30Rnd_762x39_Mag_Tracer_F","BP_30Rnd_762x39_Mag_Tracer_Green_F"};
		maxZeroing = 1000;
		model = "\A3\Weapons_F_Exp\Rifles\AK12\AK12_F.p3d";
		modes[] = {"FullAuto","Burst","Single"};
		recoil = "recoil_ak12";
		reloadAction = "GestureReloadAKM";
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK12\AK12_reload",1,1,10};
		scope = 0;
		class Burst : Mode_Burst { //["Mode_SemiAuto"]
			burst = 2;
			dispersion = 0.00087;
			maxRange = 100;
			maxRangeProbab = 0.05;
			midRange = 50;
			midRangeProbab = 0.7;
			minRange = 2;
			minRangeProbab = 0.9;
			reloadTime = 0.06;
			sounds[] = {"StandardSound","SilencedSound"};
			textureType = "dual";
			class BaseSoundModeType {};
			class SilencedSound : BaseSoundModeType {
				SoundSetShot[] = {"AK12_silencerShot_SoundSet","AK12_silencerTail_SoundSet","AK12_silencerInteriorTail_SoundSet"};
			};
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"AK12_Shot_SoundSet","AK12_Tail_SoundSet","AK12_InteriorTail_SoundSet"};
			};
		};
		class EGLM : UGL_F { //["GrenadeLauncher","Default"]
			magazines[] = {"BP_1Rnd_40mm_Flashbang","BP_1Rnd_HE_shell","BP_3Rnd_HE_shell","BP_UGL_FlareWhite","BP_UGL_FlareRed","BP_UGL_FlareGreen"};
			cameraDir = "OP_look";
			discreteDistance[] = {50,75,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[] = {"OP_eye_50","OP_eye_75","OP_eye_100","OP_eye_150","OP_eye_200","OP_eye_250","OP_eye_300","OP_eye_350","OP_eye_400"};
			discreteDistanceInitIndex = 1;
			reloadAction = "GestureReloadMXUGL";
			useExternalOptic = 0;
			useModelOptics = 0;
		};
		class FullAuto : Mode_FullAuto { //["Mode_SemiAuto"]
			aiRateOfFire = 1e-006;
			dispersion = 0.00087;
			maxRange = 30;
			maxRangeProbab = 0.05;
			midRange = 15;
			midRangeProbab = 0.7;
			minRange = 2;
			minRangeProbab = 0.9;
			reloadTime = 0.1;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType {};
			class SilencedSound : BaseSoundModeType {
				SoundSetShot[] = {"AK12_silencerShot_SoundSet","AK12_silencerTail_SoundSet","AK12_silencerInteriorTail_SoundSet"};
			};
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"AK12_Shot_SoundSet","AK12_Tail_SoundSet","AK12_InteriorTail_SoundSet"};
			};
		};
		class Library {
			libTextDesc = "The AK-12 is a modern assault rifle designed to replace the legendary AK-74 as general issue for the Russian Army. The weapon introduces many improvements over its predecessors: better recoil control, versions suitable for various ammunition, compatibility with several underslung grenade launchers, accessory rails, or better ergonomics. This particular version is chambered in 7.62x39 mm, so it trades a bit of accuracy for a bigger punch and better penetration.";
		};
		class Single : Mode_SemiAuto {
			dispersion = 0.00087;
			maxRange = 250;
			maxRangeProbab = 0.2;
			midRange = 150;
			midRangeProbab = 0.7;
			minRange = 2;
			minRangeProbab = 0.5;
			reloadTime = 0.1;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType {};
			class SilencedSound : BaseSoundModeType {
				SoundSetShot[] = {"AK12_silencerShot_SoundSet","AK12_silencerTail_SoundSet","AK12_silencerInteriorTail_SoundSet"};
			};
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"AK12_Shot_SoundSet","AK12_Tail_SoundSet","AK12_InteriorTail_SoundSet"};
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 140;
			class CowsSlot : SlotInfo {
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS","optic_ACO_grn", "optic_Aco", "optic_Aco_smg", "optic_ACO_grn_smg", "optic_AMS", "optic_AMS_khk", "optic_AMS_snd", "optic_Arco", "optic_Arco_blk_F", "optic_Arco_ghex_F", "optic_DMS", "optic_DMS_ghex_F", "optic_ERCO_blk_F", "optic_ERCO_khk_F", "optic_ERCO_khk_F", "optic_KHS_blk", "optic_KHS_hex", "optic_KHS_old", "optic_KHS_tan", "optic_LRPS", "optic_LRPS_ghex_F", "optic_LRPS_tna_F", "optic_Holosight", "optic_Holosight_blk_F", "optic_Holosight_khk_F", "optic_Holosight_smg", "optic_Holosight_smg_blk_F", "optic_SOS", "optic_SOS_khk_F", "optic_MRCO", "optic_Hamr", "optic_Hamr_khk_F", "BP_optic_ACOG", "BP_compm4s", "BP_OldComp"};
				iconPosition[] = {0.45,0.28};
				iconScale = 0.2;
			};
			class MuzzleSlot : SlotInfo
			{
				compatibleItems[] = {"BP_muzzle_snds_B"};
				iconPosition[] = {0,0.45};
				iconScale = 0.2;
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
			};
			class PointerSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"acc_flashlight","acc_pointer_IR"};
				iconPosition[] = {0.35,0.45};
				iconScale = 0.2;
			};
			class UnderBarrelSlot : SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris","BP_Harris2","bipod_03_F_blk", "bipod_02_F_blk", "bipod_01_F_blk", "bipod_02_F_hex", "bipod_01_F_khk", "bipod_01_F_mtp", "bipod_03_F_oli", "bipod_01_F_snd", "bipod_02_F_tan"};
				iconPosition[] = {0.2,0.8};
				iconScale = 0.3;
			};
		};
	};
	class BP_arifle_AK12_F : BP_arifle_AK12_base_F { //AK-12
		_generalMacro = "arifle_AK12_F";
		author = "Bohemia Interactive";
		baseWeapon = "arifle_AK12_F";
		displayName = "AK-12 7.62 mm";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\AK12\Data\arifle_AK12_F_co.paa"};
		picture = "\A3\Weapons_F_Exp\Rifles\AK12\Data\UI\icon_arifle_AK12_F_X_CA.paa";
		scope = 2;
	};

	class BP_arifle_AK12_GL_base_F : BP_arifle_AK12_base_F { //AK-12 UGL Base
		_generalMacro = "arifle_AK12_base_F";
		author = "Bohemia Interactive";
		displayName = "";
		hiddenSelections[] = {"camo1","camo2"};
		inertia = 0.7;
		model = "\A3\Weapons_F_Exp\Rifles\AK12\AK12_GL_F.p3d";
		muzzles[] = {"this","EGLM"};
		scope = 0;
		UiPicture = "\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
		class WeaponSlotsInfo : WeaponSlotsInfo { //["WeaponSlotsInfo"]
			mass = 160;
			class UnderBarrelSlot : SlotInfo { //["UnderBarrelSlot","SlotInfo"]
				compatibleItems[] = {};
			};
		};
	};
	class BP_arifle_AK12_GL_F : BP_arifle_AK12_GL_base_F { //AK-12 UGL
		_generalMacro = "arifle_AK12_GL_F";
		author = "Bohemia Interactive";
		baseWeapon = "arifle_AK12_GL_F";
		displayName = "AK-12 GL 7.62 mm";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_1_co.paa","\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa"};
		picture = "\A3\Weapons_F_Exp\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_F_X_CA.paa";
		scope = 2;
	};

	class BP_LMG_03_base_F : LMG_03_base_F { //LIM-85 Base
		_generalMacro = "LMG_03_base_F";
		aiDispersionCoefX = 21;
		aiDispersionCoefY = 24;
		author = "Bohemia Interactive";
		changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_firemode",0.316228,1,5};
		cursor = "mg";
		descriptionShort = "Light Machine Gun<br />Caliber: 5.56x45 mm";
		dexterity = 1.3;
		displayName = "";
		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Syndikat\Syndikat_Dry",0.562341,1,10};
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Exp\Machineguns\LMG_03\Data\Anim\LIM.rtm"};
		hiddenSelections[] = {"Camo_1","Camo_2"};
		htMax = 920;
		htMin = 8;
		inertia = 0.7;
		initSpeed = 915;
		magazineReloadSwitchPhase = 0.4;
		magazines[] = {"BP_200Rnd_556x45_LIM_Box_F","BP_200Rnd_556x45_LIM_Box_Red_F","BP_200Rnd_556x45_LIM_Box_Tracer_F","BP_200Rnd_556x45_LIM_Box_Tracer_Red_F"};
		maxZeroing = 1000;
		model = "\A3\Weapons_F_Exp\Machineguns\LMG_03\LMG_03_F.p3d";
		modes[] = {"FullAutoSlow"};
		overviewPicture = "\A3\Data_F_Exp\Images\WeaponLIM_ca.paa";
		recoil = "recoil_lim";
		reloadAction = "GestureReloadLIM";
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_Reload",1,1,10};
		scope = 0;
		UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
		class FullAutoSlow : Mode_FullAuto
		{
			dispersion = 0.00073;
			maxRange = 10;
			maxRangeProbab = 0.04;
			midRange = 5;
			midRangeProbab = 0.7;
			minRange = 0;
			minRangeProbab = 0.3;
			reloadTime = 0.15;
			showToPlayer = 1;
			soundBurst = 0;
			soundContinuous = 0;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType {};
			class SilencedSound : BaseSoundModeType {
				SoundSetShot[] = {"SyndikatLMG_silencerShot_SoundSet","SyndikatLMG_silencerTail_SoundSet","SyndikatLMG_silencerInteriorTail_SoundSet"};
			};
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"SyndikatLMG_Shot_SoundSet","SyndikatLMG_Tail_SoundSet","SyndikatLMG_InteriorTail_SoundSet"};
			};
		};
		class Library {
			libTextDesc = "The light infantry machine gun 85 is an iteration of a special purpose weapon. Combining a high fire-rate and relatively easy maintenance with high reliability, it was adopted by several armies around the world. It features standard accessory rails and 200-round box 5.56x45 mm magazines. Its weight is 7.1 kilograms which is less than its predecessors.";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 260;
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS","optic_ACO_grn", "optic_Aco", "optic_Aco_smg", "optic_ACO_grn_smg", "optic_AMS", "optic_AMS_khk", "optic_AMS_snd", "optic_Arco", "optic_Arco_blk_F", "optic_Arco_ghex_F", "optic_DMS", "optic_DMS_ghex_F", "optic_ERCO_blk_F", "optic_ERCO_khk_F", "optic_ERCO_khk_F", "optic_KHS_blk", "optic_KHS_hex", "optic_KHS_old", "optic_KHS_tan", "optic_LRPS", "optic_LRPS_ghex_F", "optic_LRPS_tna_F", "optic_Holosight", "optic_Holosight_blk_F", "optic_Holosight_khk_F", "optic_Holosight_smg", "optic_Holosight_smg_blk_F", "optic_SOS", "optic_SOS_khk_F", "optic_MRCO", "optic_Hamr", "optic_Hamr_khk_F", "BP_optic_ACOG","BP_compm4s","BP_OldComp"};
				iconPosition[] = {0.57,0.28};
				iconScale = 0.15;
			};
			class MuzzleSlot {};
			class PointerSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"acc_flashlight","acc_pointer_IR"};
				iconPosition[] = {0.38,0.42};
				iconScale = 0.2;
			};
			class UnderBarrelSlot : SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {};
				iconPosition[] = {0.35,0.85};
				iconScale = 0.3;
			};
		};
	};
	class BP_LMG_03_F : BP_LMG_03_base_F { //LIM-85
		_generalMacro = "LMG_03_F";
		author = "Bohemia Interactive";
		baseWeapon = "LMG_03_F";
		displayName = "LIM-85 5.56 mm";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Machineguns\LMG_03\Data\LMG_03_f_acc_co.paa","\A3\Weapons_F_Exp\Machineguns\LMG_03\Data\LMG_03_f_body_co.paa"};
		picture = "\A3\Weapons_F_Exp\Machineguns\LMG_03\Data\UI\icon_LMG_03_F_X_CA.paa";
		scope = 2;
	};

	class hgun_Pistol_01_F;

	class BP_hgun_Pistol_01_F : hgun_Pistol_01_F { //PM 9mm Pistol
		_generalMacro = "hgun_Pistol_01_F";
		author = "Bohemia Interactive";
		baseWeapon = "hgun_Pistol_01_F";
		bullet1[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_01",0.501187,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_02",0.223872,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_03",0.223872,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_04",0.223872,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_02",0.501187,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_03",0.501187,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_04",0.501187,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01",0.398107,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02",0.398107,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03",0.398107,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04",0.398107,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_01",0.223872,1,15};
		descriptionShort = "Handgun<br />Caliber: 9x18 mm";
		dexterity = 1.9;
		displayName = "PM 9 mm";
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\dry_P07",0.398107,1,20};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Pistols\Pistol_01\Data\pmm_co.paa"};
		inertia = 0.1;
		initSpeed = 315;
		magazines[] = {"BP_16Rnd_9x21_Mag"};
		maxZeroing = 100;
		model = "\A3\Weapons_F_Exp\Pistols\Pistol_01\Pistol_01_F.p3d";
		modes[] = {"Single"};
		overviewPicture = "\A3\Data_F_Exp\Images\WeaponPM_ca.paa";
		picture = "\A3\Weapons_F_Exp\Pistols\Pistol_01\Data\UI\icon_hgun_Pistol_01_F_X_CA.paa";
		recoil = "recoil_pistol_pm";
		reloadAction = "GestureReloadPistol";
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07",1,1,10};
		scope = 2;
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		sounds[] = {"StandardSound","SilencedSound"};
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		class ItemInfo {
			priority = 2;
		};
		class Library {
			libTextDesc = "The PM is a Russian semi-automatic pistol. It became the Soviet Union's standard military and police side arm in 1951 and has been broadly used ever since in post-Soviet countries and places where black market reached from those countries. It is based on the German wartime design utilizing the 9x18 mm cartridge designed by B.V. Semin in 1946. For simplicity and economy, the PM was of straight blowback operation, with the 9x18 mm cartridge being the most powerful cartridge it could safely and practically fire. German wartime forces had rejected this pistol design some years before because of its poor accuracy. Although the nominal calibre was 9.0 mm, the actual bullet was 9.22 mm in diameter, since caliber in Russia is measured between the grooves and not the lands of the rifling. Being shorter and wider, the 9 mm cartridge is thus incompatible with pistols chambered for 9x19 mm cartridges and vice-versa.";
		};
		class Single : Mode_SemiAuto {
			aiRateOfFire = 2;
			aiRateOfFireDistance = 30;
			dispersion = 0.0116;
			maxRange = 60;
			maxRangeProbab = 0.1;
			midRange = 30;
			midRangeProbab = 0.6;
			minRange = 5;
			minRangeProbab = 0.3;
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			reloadTime = 0.15;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType {
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Closure_P07_01",0.223872,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Closure_P07_02",0.223872,1.2,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class SilencedSound : BaseSoundModeType {
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_short_01",0.562341,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_short_02",0.562341,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_short_03",0.562341,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				soundSetShot[] = {"Makarov_silencerShot_SoundSet","Makarov_silencerTail_SoundSet","Makarov_silencerInteriorTail_SoundSet"};
				class SoundTails {
					class TailForest {
						frequency = 1;
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_tail_forest",1,1,400};
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses {
						frequency = 1;
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_tail_houses",1,1,400};
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior {
						frequency = 1;
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_tail_interior",1,1,400};
						volume = "interior";
					};
					class TailMeadows {
						frequency = 1;
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_tail_meadows",1,1,400};
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees {
						frequency = 1;
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_tail_trees",1,1,400};
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			class StandardSound : BaseSoundModeType {
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_short_01",3.98107,1,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_short_02",3.98107,1,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_short_03",3.98107,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				soundSetShot[] = {"Makarov_Shot_SoundSet","Makarov_Tail_SoundSet","Makarov_InteriorTail_SoundSet"};
				class SoundTails {
					class TailForest {
						frequency = 1;
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tail_forest",1,1,1200};
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses {
						frequency = 1;
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tail_houses",1,1,1200};
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior {
						frequency = 1;
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tail_interior",1,1,1200};
						volume = "interior";
					};
					class TailMeadows {
						frequency = 1;
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tail_meadows",1,1,1200};
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees {
						frequency = 1;
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\P07_tail_trees",1,1,1200};
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo { //["WeaponSlotsInfo"]
			mass = 20;
			class CowsSlot {};
			class MuzzleSlot : SlotInfo { //["SlotInfo"]
				compatibleItems[] = {"muzzle_snds_L"};
				iconPosition[] = {0.24,0.35};
				iconScale = 0.2;
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
			};
		};
	};

	class BP_arifle_SPAR_01_base_F : arifle_SPAR_01_base_F { //SPAR-16 BASE
		_generalMacro = "arifle_SPAR_01_base_F";
		author = "Bohemia Interactive";
		changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_firemode",0.177828,1,5};
		descriptionShort = "Assault Rifle<br />Caliber: 5.56x45 mm";
		dexterity = 1.5;
		displayName = "SPAR-16 5.56 mm";
		distanceZoomMax = 300;
		distanceZoomMin = 300;
		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_dry",0.562341,1,10};
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\Anim\SPAR_01.rtm"};
		hiddenSelections[] = {"camo1","camo2"};
		htMax = 920;
		htMin = 8;
		inertia = 0.5;
		initSpeed = 800;
		magazines[] = {"BP_556x45_Stanag","BP_556x45_Stanag_Tracer","BP_556x45_StanagSD","BP_556x45_StanagM855A1","BP_556x45_StanagMK262","BP_556old_Stanag","BP_5Rnd_223_Mag","BP_5Rnd_223BTHP_mag","BP_556x45_Rubber"};
		maxZeroing = 800;
		model = "\A3\Weapons_F_Exp\Rifles\SPAR_01\SPAR_01_F.p3d";
		modes[] = {"Single","FullAuto"};
		overviewPicture = "\A3\Data_F_Exp\Images\WeaponSPAR_ca.paa";
		recoil = "recoil_spar";
		reloadAction = "GestureReloadSPAR_01";
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_reload",1,1,10};
		scope = 0;
		class FullAuto : Mode_FullAuto { //["Mode_SemiAuto"]
			aiRateOfFire = 1e-006;
			dispersion = 0.00073;
			maxRange = 30;
			maxRangeProbab = 0.05;
			midRange = 15;
			midRangeProbab = 0.7;
			minRange = 2;
			minRangeProbab = 0.9;
			reloadTime = 0.07;
			class BaseSoundModeType {};
			class SilencedSound : BaseSoundModeType {
				SoundSetShot[] = {"SPAR01_silencerShot_SoundSet","SPAR01_silencerTail_SoundSet","SPAR01_silencerInteriorTail_SoundSet"};
			};
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"SPAR01_Shot_SoundSet","SPAR01_Tail_SoundSet","SPAR01_InteriorTail_SoundSet"};
			};
		};
		class Library {
			libTextDesc = "The SPAR-16 is a standard issue assault rifle of CTRG units in Pacific, chambered for 5.56 mm ammunition. The gun is a reliable rifle compatible with a large number of accessories. Multiple variants of this rifle exist, each suitable for a different role. The SPAR-16 GL is equipped with an underslung grenade launcher, the SPAR-16S with its thicker barrel and drum magazine works as a light support weapon.";
		};
		class Single : Mode_SemiAuto {
			dispersion = 0.00073;
			maxRange = 250;
			maxRangeProbab = 0.2;
			midRange = 150;
			midRangeProbab = 0.7;
			minRange = 2;
			minRangeProbab = 0.5;
			reloadTime = 0.07;
			class BaseSoundModeType {};
			class SilencedSound : BaseSoundModeType {
				SoundSetShot[] = {"SPAR01_silencerShot_SoundSet","SPAR01_silencerTail_SoundSet","SPAR01_silencerInteriorTail_SoundSet"};
			};
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"SPAR01_Shot_SoundSet","SPAR01_Tail_SoundSet","SPAR01_InteriorTail_SoundSet"};
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo {
			mass = 120;
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS","optic_ACO_grn", "optic_Aco", "optic_Aco_smg", "optic_ACO_grn_smg", "optic_AMS", "optic_AMS_khk", "optic_AMS_snd", "optic_Arco", "optic_Arco_blk_F", "optic_Arco_ghex_F", "optic_DMS", "optic_DMS_ghex_F", "optic_ERCO_blk_F", "optic_ERCO_khk_F", "optic_ERCO_khk_F", "optic_KHS_blk", "optic_KHS_hex", "optic_KHS_old", "optic_KHS_tan", "optic_LRPS", "optic_LRPS_ghex_F", "optic_LRPS_tna_F", "optic_Holosight", "optic_Holosight_blk_F", "optic_Holosight_khk_F", "optic_Holosight_smg", "optic_Holosight_smg_blk_F", "optic_SOS", "optic_SOS_khk_F", "optic_MRCO", "optic_Hamr", "optic_Hamr_khk_F", "BP_optic_ACOG","BP_compm4s","BP_OldComp"};
				iconPosition[] = {0.45,0.28};
				iconScale = 0.2;
			};
			class MuzzleSlot : SlotInfo { //["MuzzleSlot","SlotInfo"]
				compatibleItems[] = {"BP_muzzle_snds_M"};
				iconPosition[] = {0,0.45};
				iconScale = 0.2;
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
			};
			class PointerSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"acc_flashlight","acc_pointer_IR"};
				iconPosition[] = {0.35,0.45};
				iconScale = 0.2;
			};
			class UnderBarrelSlot : SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris","BP_Harris2","bipod_03_F_blk", "bipod_02_F_blk", "bipod_01_F_blk", "bipod_02_F_hex", "bipod_01_F_khk", "bipod_01_F_mtp", "bipod_03_F_oli", "bipod_01_F_snd", "bipod_02_F_tan"};
				iconPosition[] = {0.2,0.8};
				iconScale = 0.3;
			};
		};
	};
	class BP_arifle_SPAR_01_blk_F : BP_arifle_SPAR_01_base_F { //SPAR-16 Black
		_generalMacro = "arifle_SPAR_01_blk_F";
		author = "Bohemia Interactive";
		baseWeapon = "arifle_SPAR_01_blk_F";
		displayName = "SPAR-16 5.56 mm (Black)";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_02_co.paa"};
		picture = "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_blk_F_X_CA.paa";
		scope = 2;
	};
	class BP_arifle_SPAR_01_khk_F : BP_arifle_SPAR_01_base_F { //SPAR-16 Khaki
		_generalMacro = "arifle_SPAR_01_khk_F";
		author = "Bohemia Interactive";
		baseWeapon = "arifle_SPAR_01_khk_F";
		displayName = "SPAR-16 5.56 mm (Khaki)";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_02_co.paa"};
		picture = "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_khk_F_X_CA.paa";
		scope = 2;
	};
	class BP_arifle_SPAR_01_snd_F : BP_arifle_SPAR_01_base_F { //SPAR-16 Sand
		_generalMacro = "arifle_SPAR_01_snd_F";
		author = "Bohemia Interactive";
		baseWeapon = "arifle_SPAR_01_snd_F";
		displayName = "SPAR-16 5.56 mm (Sand)";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_02_co.paa"};
		picture = "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_snd_F_X_CA.paa";
		scope = 2;
	};

	class BP_arifle_SPAR_01_GL_base_F : BP_arifle_SPAR_01_base_F { //SPAR-16 UGL Base
		_generalMacro = "arifle_SPAR_01_GL_base_F";
		aiDispersionCoefX = 4;
		aiDispersionCoefY = 6;
		author = "Bohemia Interactive";
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\Anim\SPAR_01_GL.rtm"};
		hiddenSelections[] = {"camo1","camo2","camo3"};
		inertia = 0.6;
		model = "\A3\Weapons_F_Exp\Rifles\SPAR_01\SPAR_01_GL_F.p3d";
		muzzles[] = {"this","EGLM"};
		reloadAction = "GestureReloadSPAR_01";
		scope = 0;
		UiPicture = "\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
		class EGLM : UGL_F { //["GrenadeLauncher","Default"]
			magazines[] = {"BP_1Rnd_40mm_Flashbang","BP_1Rnd_HE_shell","BP_3Rnd_HE_shell","BP_UGL_FlareWhite","BP_UGL_FlareRed","BP_UGL_FlareGreen"};
			cameraDir = "OP_look";
			discreteDistance[] = {50,100,150,200,250,300,350};
			discreteDistanceCameraPoint[] = {"OP_eye_50","OP_eye_100","OP_eye_150","OP_eye_200","OP_eye_250","OP_eye_300","OP_eye_350"};
			discreteDistanceInitIndex = 1;
			reloadAction = "GestureReloadSPARUGL";
			useExternalOptic = 0;
			useModelOptics = 0;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo { //["WeaponSlotsInfo"]
			mass = 120;
			class UnderBarrelSlot : SlotInfo { //["UnderBarrelSlot","SlotInfo"]
				compatibleItems[] = {};
			};
		};
	};
	class BP_arifle_SPAR_01_GL_blk_F : BP_arifle_SPAR_01_GL_base_F { //SPAR-16 UGL Black
		_generalMacro = "arifle_SPAR_01_GL_blk_F";
		author = "Bohemia Interactive";
		baseWeapon = "arifle_SPAR_01_GL_blk_F";
		displayName = "SPAR-16 GL 5.56 mm (Black)";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_02_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_GL_blk_F_01_co.paa"};
		picture = "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_GL_blk_F_X_CA.paa";
		scope = 2;
	};
	class BP_arifle_SPAR_01_GL_khk_F : BP_arifle_SPAR_01_GL_base_F { //SPAR-16 UGL Khaki
		_generalMacro = "arifle_SPAR_01_GL_khk_F";
		author = "Bohemia Interactive";
		baseWeapon = "arifle_SPAR_01_GL_khk_F";
		displayName = "SPAR-16 GL 5.56 mm (Khaki)";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_02_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_GL_khk_F_01_co.paa"};
		picture = "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_GL_khk_F_X_CA.paa";
		scope = 2;
	};
	class BP_arifle_SPAR_01_GL_snd_F : BP_arifle_SPAR_01_GL_base_F { //SPAR-16 UGL Sand
		_generalMacro = "arifle_SPAR_01_GL_snd_F";
		author = "Bohemia Interactive";
		baseWeapon = "arifle_SPAR_01_GL_snd_F";
		displayName = "SPAR-16 GL 5.56 mm (Sand)";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_02_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_GL_snd_F_01_co.paa"};
		picture = "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_GL_snd_F_X_CA.paa";
		scope = 2;
	};

	class BP_arifle_SPAR_02_base_F : arifle_SPAR_02_base_F { //SPAR-16S Base
		_generalMacro = "arifle_SPAR_02_base_F";
		author = "Bohemia Interactive";
		changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_firemode",0.177828,1,5};
		descriptionShort = "Light Machine Gun<br />Caliber: 5.56x45 mm";
		dexterity = 1.4;
		displayName = "";
		distanceZoomMax = 300;
		distanceZoomMin = 300;
		DLC = "Expansion";
		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_dry",0.562341,1,10};
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Exp\Rifles\SPAR_02\Data\Anim\SPAR_02.rtm"};
		hiddenSelections[] = {"camo1","camo2"};
		htMax = 920;
		htMin = 8;
		inertia = 0.6;
		initSpeed = 850;
		magazines[] = {"BP_150Rnd_556x45_Drum_Mag_F","BP_150Rnd_556x45_Drum_Mag_Tracer_F"};
		maxZeroing = 1000;
		model = "\A3\Weapons_F_Exp\Rifles\SPAR_02\SPAR_02_F.p3d";
		modes[] = {"Single","FullAuto"};
		recoil = "recoil_spar_lsw";
		reloadAction = "GestureReloadSPAR_02";
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_reload",1,1,10};
		scope = 0;
		class FullAuto : Mode_FullAuto { //["Mode_SemiAuto"]
			aiRateOfFire = 1e-006;
			dispersion = 0.00058;
			maxRange = 30;
			maxRangeProbab = 0.1;
			midRange = 15;
			midRangeProbab = 0.7;
			minRange = 0;
			minRangeProbab = 0.9;
			reloadTime = 0.07;
			class BaseSoundModeType {};
			class SilencedSound : BaseSoundModeType {
				SoundSetShot[] = {"SPAR02_silencerShot_SoundSet","SPAR02_silencerTail_SoundSet","SPAR02_silencerInteriorTail_SoundSet"};
			};
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"SPAR02_Shot_SoundSet","SPAR02_Tail_SoundSet","SPAR02_InteriorTail_SoundSet"};
			};
		};
		class Single : Mode_SemiAuto {
			dispersion = 0.00058;
			maxRange = 400;
			maxRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			minRange = 2;
			minRangeProbab = 0.5;
			reloadTime = 0.07;
			class BaseSoundModeType {};
			class SilencedSound : BaseSoundModeType {
				SoundSetShot[] = {"SPAR02_silencerShot_SoundSet","SPAR02_silencerTail_SoundSet","SPAR02_silencerInteriorTail_SoundSet"};
			};
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"SPAR02_Shot_SoundSet","SPAR02_Tail_SoundSet","SPAR02_InteriorTail_SoundSet"};
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo {
			mass = 140;
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS","optic_ACO_grn", "optic_Aco", "optic_Aco_smg", "optic_ACO_grn_smg", "optic_AMS", "optic_AMS_khk", "optic_AMS_snd", "optic_Arco", "optic_Arco_blk_F", "optic_Arco_ghex_F", "optic_DMS", "optic_DMS_ghex_F", "optic_ERCO_blk_F", "optic_ERCO_khk_F", "optic_ERCO_khk_F", "optic_KHS_blk", "optic_KHS_hex", "optic_KHS_old", "optic_KHS_tan", "optic_LRPS", "optic_LRPS_ghex_F", "optic_LRPS_tna_F", "optic_Holosight", "optic_Holosight_blk_F", "optic_Holosight_khk_F", "optic_Holosight_smg", "optic_Holosight_smg_blk_F", "optic_SOS", "optic_SOS_khk_F", "optic_MRCO", "optic_Hamr", "optic_Hamr_khk_F", "BP_optic_ACOG","BP_compm4s","BP_OldComp"};
				iconPosition[] = {0.45,0.28};
				iconScale = 0.2;
			};
			class MuzzleSlot : SlotInfo
			{
				compatibleItems[] = {"BP_muzzle_snds_M"};
				iconPosition[] = {0,0.45};
				iconScale = 0.2;
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
			};
			class PointerSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"acc_flashlight","acc_pointer_IR"};
				iconPosition[] = {0.35,0.45};
				iconScale = 0.2;
			};
			class UnderBarrelSlot : SlotInfo
			{

				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris","BP_Harris2","bipod_03_F_blk", "bipod_02_F_blk", "bipod_01_F_blk", "bipod_02_F_hex", "bipod_01_F_khk", "bipod_01_F_mtp", "bipod_03_F_oli", "bipod_01_F_snd", "bipod_02_F_tan"};
				iconPosition[] = {0.2,0.8};
				iconScale = 0.3;
			};
		};
	};
	class BP_arifle_SPAR_02_blk_F : BP_arifle_SPAR_02_base_F { //SPAR-16S Black
		_generalMacro = "arifle_SPAR_02_blk_F";
		author = "Bohemia Interactive";
		baseWeapon = "arifle_SPAR_02_blk_F";
		displayName = "SPAR-16S 5.56 mm (Black)";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_02_co.paa"};
		picture = "\A3\Weapons_F_Exp\Rifles\SPAR_02\Data\UI\arifle_SPAR_02_blk_F_X_CA.paa";
		scope = 2;
	};
	class BP_arifle_SPAR_02_khk_F : BP_arifle_SPAR_02_base_F { //SPAR-16S Khaki
		_generalMacro = "arifle_SPAR_02_khk_F";
		author = "Bohemia Interactive";
		baseWeapon = "arifle_SPAR_02_khk_F";
		displayName = "SPAR-16S 5.56 mm (Khaki)";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_02_co.paa"};
		picture = "\A3\Weapons_F_Exp\Rifles\SPAR_02\Data\UI\arifle_SPAR_02_khk_F_X_CA.paa";
		scope = 2;
	};
	class BP_arifle_SPAR_02_snd_F : BP_arifle_SPAR_02_base_F { //SPAR-16S Sand
		_generalMacro = "arifle_SPAR_02_snd_F";
		author = "Bohemia Interactive";
		baseWeapon = "arifle_SPAR_02_snd_F";
		displayName = "SPAR-16S 5.56 mm (Sand)";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_02_co.paa"};
		picture = "\A3\Weapons_F_Exp\Rifles\SPAR_02\Data\UI\arifle_SPAR_02_snd_F_X_CA.paa";
		scope = 2;
	};

	class BP_arifle_SPAR_03_base_F : arifle_SPAR_03_base_F { //SPAR-17 Base
		_generalMacro = "arifle_SPAR_03_base_F";
		author = "Bohemia Interactive";
		changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_firemode",0.251189,1,5};
		descriptionShort = "Marksman rifle<br />Caliber: 7.62x51 mm";
		dexterity = 1.2;
		displayName = "SPAR-17 7.62 mm";
		distanceZoomMax = 300;
		distanceZoomMin = 300;
		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_dry",0.562341,1,10};
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\Anim\SPAR_01.rtm"};
		hiddenSelections[] = {"camo1","camo2"};
		htMax = 800;
		htMin = 12;
		inertia = 0.8;
		initSpeed = 900;
		magazines[] = {"BP_20Rnd_762x51_BPMag","BP_20Rnd_762x51_M80A1","BP_20Rnd_762x51_Mk316Mod0","BP_10Rnd_762mk316_Mag","BP_10Rnd_762x51_Mag","BP_10Rnd_762m80a1_Mag","BP_5Rnd_762x51_Mag","BP_5Rnd_762mk316_Mag","BP_5Rnd_762m80a1_Mag","BP_10Rnd_762Rubber_Mag"};
		maxZeroing = 1600;
		model = "\A3\Weapons_F_Exp\Rifles\SPAR_03\SPAR_03_F.p3d";
		modes[] = {"Single","FullAuto"};
		overviewPicture = "\A3\Data_F_Exp\Images\WeaponSPAR17_ca.paa";
		recoil = "recoil_spar_dmr";
		reloadAction = "GestureReloadSPAR_01";
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR_17\SPAR_17_reload",1,1,10};
		scope = 0;
		class FullAuto : Mode_FullAuto { //["Mode_SemiAuto"]
			aiRateOfFire = 1e-006;
			dispersion = 0.00058;
			maxRange = 30;
			maxRangeProbab = 0.05;
			midRange = 15;
			midRangeProbab = 0.7;
			minRange = 0;
			minRangeProbab = 0.9;
			reloadTime = 0.1;
			class BaseSoundModeType {};
			class SilencedSound : BaseSoundModeType {
				soundSetShot[] = {"SPAR_17_silencerShot_SoundSet","SPAR_17_silencerTail_SoundSet","SPAR_17_silencerInteriorTail_SoundSet"};
			};
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"SPAR_17_Shot_SoundSet","SPAR_17_Tail_SoundSet","SPAR_17_interiorTail_SoundSet"};
			};
		};
		class Library {
			libTextDesc = "The SPAR-17 designated marksman rifle is in many ways similar to the SPAR-16. The main difference is the chambering to 7.62 mm which also means a longer, thicker barrel and more weight. Thanks to the more powerful ammunition, the SPAR-17 is most suitable for ranges from 600 to 800 meters. The rifle offers a single and full auto mode and is, like the SPAR-16, compatible with a large number of accessories.";
		};
		class Single : Mode_SemiAuto {
			dispersion = 0.00058;
			maxRange = 500;
			maxRangeProbab = 0.05;
			midRange = 350;
			midRangeProbab = 0.7;
			minRange = 2;
			minRangeProbab = 0.3;
			reloadTime = 0.1;
			class BaseSoundModeType {};
			class SilencedSound : BaseSoundModeType {
				soundSetShot[] = {"SPAR_17_silencerShot_SoundSet","SPAR_17_silencerTail_SoundSet","SPAR_17_silencerInteriorTail_SoundSet"};
			};
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"SPAR_17_Shot_SoundSet","SPAR_17_Tail_SoundSet","SPAR_17_interiorTail_SoundSet"};
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo {
			mass = 200;
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS","optic_ACO_grn", "optic_Aco", "optic_Aco_smg", "optic_ACO_grn_smg", "optic_AMS", "optic_AMS_khk", "optic_AMS_snd", "optic_Arco", "optic_Arco_blk_F", "optic_Arco_ghex_F", "optic_DMS", "optic_DMS_ghex_F", "optic_ERCO_blk_F", "optic_ERCO_khk_F", "optic_ERCO_khk_F", "optic_KHS_blk", "optic_KHS_hex", "optic_KHS_old", "optic_KHS_tan", "optic_LRPS", "optic_LRPS_ghex_F", "optic_LRPS_tna_F", "optic_Holosight", "optic_Holosight_blk_F", "optic_Holosight_khk_F", "optic_Holosight_smg", "optic_Holosight_smg_blk_F", "optic_SOS", "optic_SOS_khk_F", "optic_MRCO", "optic_Hamr", "optic_Hamr_khk_F", "BP_optic_ACOG","BP_compm4s","BP_OldComp"};
				iconPosition[] = {0.45,0.28};
				iconScale = 0.2;
			};
			class MuzzleSlot : SlotInfo { //["MuzzleSlot","SlotInfo"]
				compatibleItems[] = {"BP_muzzle_snds_B"};
				iconPosition[] = {0,0.45};
				iconScale = 0.2;
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
			};
			class PointerSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"acc_flashlight","acc_pointer_IR"};
				iconPosition[] = {0.35,0.45};
				iconScale = 0.2;
			};
			class UnderBarrelSlot : SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris","BP_Harris2","bipod_03_F_blk", "bipod_02_F_blk", "bipod_01_F_blk", "bipod_02_F_hex", "bipod_01_F_khk", "bipod_01_F_mtp", "bipod_03_F_oli", "bipod_01_F_snd", "bipod_02_F_tan"};

				iconPosition[] = {0.2,0.8};
				iconScale = 0.3;
			};
		};
	};
	class BP_arifle_SPAR_03_blk_F : BP_arifle_SPAR_03_base_F { //SPAR-17 Black
		_generalMacro = "arifle_SPAR_03_blk_F";
		author = "Bohemia Interactive";
		baseWeapon = "arifle_SPAR_03_blk_F";
		displayName = "SPAR-17 7.62 mm (Black)";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\arifle_SPAR_03_blk_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\arifle_SPAR_03_blk_F_02_co.paa"};
		picture = "\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\UI\arifle_SPAR_03_blk_F_X_CA.paa";
		scope = 2;
	};
	class BP_arifle_SPAR_03_khk_F : BP_arifle_SPAR_03_base_F { //SPAR-17 Khaki
		_generalMacro = "arifle_SPAR_03_khk_F";
		author = "Bohemia Interactive";
		baseWeapon = "arifle_SPAR_03_khk_F";
		displayName = "SPAR-17 7.62 mm (Khaki)";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\arifle_SPAR_03_khk_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\arifle_SPAR_03_khk_F_02_co.paa"};
		picture = "\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\UI\arifle_SPAR_03_khk_F_X_CA.paa";
		scope = 2;
	};
	class BP_arifle_SPAR_03_snd_F : BP_arifle_SPAR_03_base_F { //SPAR-17 Sand
		_generalMacro = "arifle_SPAR_03_snd_F";
		author = "Bohemia Interactive";
		baseWeapon = "arifle_SPAR_03_snd_F";
		displayName = "SPAR-17 7.62 mm (Sand)";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\arifle_SPAR_03_snd_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\arifle_SPAR_03_snd_F_02_co.paa"};
		picture = "\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\UI\arifle_SPAR_03_snd_F_X_CA.paa";
		scope = 2;
	};

	class BP_arifle_CTAR_base_F : arifle_CTAR_base_F { //CAR-95 Base
		_generalMacro = "arifle_CTAR_base_F";
		author = "Bohemia Interactive";
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\firemode_katiba",0.251189,1,5};
		descriptionShort = "Assault Rifle<br />Caliber: 5.8x42 mm";
		displayName = "CAR-95 5.8 mm";
		distanceZoomMax = 300;
		distanceZoomMin = 300;
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\dry_Katiba",0.562341,1,10};
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Exp\Rifles\CTAR\Anim\CTAR_F.rtm"};
		hiddenSelections[] = {"camo"};
		htMax = 870;
		htMin = 9;
		inertia = 0.3;
		initSpeed = 930;
		magazines[] = {"BP_30Rnd_580x42_Mag_F","BP_30Rnd_580x42_Mag_Tracer_F"};
		maxZeroing = 800;
		model = "\A3\Weapons_F_Exp\Rifles\CTAR\CTAR_F.p3d";
		modes[] = {"Single","FullAuto"};
		overviewPicture = "\A3\Data_F_Exp\Images\WeaponCAR_ca.paa";
		recoil = "recoil_car";
		reloadAction = "GestureReloadCTAR";
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\CAR_95\CAR_95_reload",1,1,10};
		scope = 0;
		class FullAuto : Mode_FullAuto { //["Mode_SemiAuto"]
			aiRateOfFire = 1e-006;
			dispersion = 0.00116;
			maxRange = 30;
			maxRangeProbab = 0.1;
			midRange = 15;
			midRangeProbab = 0.7;
			minRange = 0;
			minRangeProbab = 0.9;
			reloadTime = 0.092;
			class BaseSoundModeType {};
			class SilencedSound : BaseSoundModeType {
				soundSetShot[] = {"CAR_95_silencerShot_SoundSet","CAR_95_silencerTail_SoundSet","CAR_95_silencerInteriorTail_SoundSet"};
			};
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"CAR_95_Shot_SoundSet","CAR_95_Tail_SoundSet","CAR_95_interiorTail_SoundSet"};
			};
		};
		class Library {
			libTextDesc = "A bullpup style assault rifle used by CSAT Pacific forces. It works as a common platform for different weapon types: a standard rifle, GL variant with attached grenade launcher and a light support version with a longer barrel and drum magazine. The CAR-95 uses polymer materials in its construction and fires 5.8x42 mm small-caliber, high-velocity bullets.";
		};
		class Single : Mode_SemiAuto {
			dispersion = 0.00116;
			maxRange = 350;
			maxRangeProbab = 0.3;
			midRange = 175;
			midRangeProbab = 0.7;
			minRange = 2;
			minRangeProbab = 0.5;
			reloadTime = 0.092;
			class BaseSoundModeType {};
			class SilencedSound : BaseSoundModeType {
				soundSetShot[] = {"CAR_95_silencerShot_SoundSet","CAR_95_silencerTail_SoundSet","CAR_95_silencerInteriorTail_SoundSet"};
			};
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"CAR_95_Shot_SoundSet","CAR_95_Tail_SoundSet","CAR_95_interiorTail_SoundSet"};
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo {
			mass = 80;
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS","optic_ACO_grn", "optic_Aco", "optic_Aco_smg", "optic_ACO_grn_smg", "optic_AMS", "optic_AMS_khk", "optic_AMS_snd", "optic_Arco", "optic_Arco_blk_F", "optic_Arco_ghex_F", "optic_DMS", "optic_DMS_ghex_F", "optic_ERCO_blk_F", "optic_ERCO_khk_F", "optic_ERCO_khk_F", "optic_KHS_blk", "optic_KHS_hex", "optic_KHS_old", "optic_KHS_tan", "optic_LRPS", "optic_LRPS_ghex_F", "optic_LRPS_tna_F", "optic_Holosight", "optic_Holosight_blk_F", "optic_Holosight_khk_F", "optic_Holosight_smg", "optic_Holosight_smg_blk_F", "optic_SOS", "optic_SOS_khk_F", "optic_MRCO", "optic_Hamr", "optic_Hamr_khk_F", "BP_optic_ACOG","BP_compm4s","BP_OldComp"};
				iconPosition[] = {0.45,0.28};
				iconScale = 0.2;
			};
			class MuzzleSlot : SlotInfo { //["MuzzleSlot","SlotInfo"]
				compatibleItems[] = {"BP_muzzle_snds_58_blk_F","BP_muzzle_snds_58_wdm_F"};
				iconPosition[] = {0,0.45};
				iconScale = 0.2;
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
			};
			class PointerSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"acc_flashlight","acc_pointer_IR"};
				iconPosition[] = {0.35,0.45};
				iconScale = 0.2;
			};
		};
	};
	class BP_arifle_CTAR_blk_F : BP_arifle_CTAR_base_F { //CAR-95 Black
		_generalMacro = "arifle_CTAR_blk_F";
		author = "Bohemia Interactive";
		baseWeapon = "arifle_CTAR_blk_F";
		displayName = "CAR-95 5.8 mm (Black)";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\CTAR\Data\arifle_CTAR_blk_F_co.paa"};
		picture = "\A3\Weapons_F_Exp\Rifles\CTAR\Data\UI\icon_arifle_CTAR_blk_F_X_CA.paa";
		scope = 2;
	};
	class BP_arifle_CTAR_ghex_F : BP_arifle_CTAR_base_F { //CAR-95 Green Hex
		_generalMacro = "arifle_CTAR_ghex_F";
		author = "Bohemia Interactive";
		baseWeapon = "arifle_CTAR_ghex_F";
		displayName = "CAR-95 5.8 mm (Green Hex)";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_1_ghex_co.paa","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_2_co.paa"};
		picture = "\A3\Weapons_F_Exp\Rifles\CTAR\Data\UI\icon_arifle_CTAR_blk_F_X_CA.paa";
		scope = 2;
	};
	class BP_arifle_CTAR_hex_F : BP_arifle_CTAR_base_F { //CAR-95 Hex
		_generalMacro = "arifle_CTAR_hex_F";
		author = "Bohemia Interactive";
		baseWeapon = "arifle_CTAR_hex_F";
		displayName = "CAR-95 5.8 mm (Hex)";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_1_bhex_co.paa","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_2_co.paa"};
		picture = "\A3\Weapons_F_Exp\Rifles\CTAR\Data\UI\icon_arifle_CTAR_blk_F_X_CA.paa";
		scope = 2;
	};
	class BP_arifle_CTAR_GL_base_F : BP_arifle_CTAR_base_F { //CAR-95 GL Base
		_generalMacro = "arifle_CTAR_GL_base_F";
		aiDispersionCoefX = 4;
		aiDispersionCoefY = 6;
		author = "Bohemia Interactive";
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Exp\Rifles\CTAR\Anim\CTARGL.rtm"};
		hiddenSelections[] = {"camo1","camo2"};
		inertia = 0.4;
		model = "\A3\Weapons_F_Exp\Rifles\CTAR\CTAR_GL_F.p3d";
		muzzles[] = {"this","EGLM"};
		scope = 0;
		UiPicture = "\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
		class EGLM : UGL_F { //["GrenadeLauncher","Default"]
			magazines[] = {"BP_1Rnd_40mm_Flashbang","BP_1Rnd_HE_shell","BP_3Rnd_HE_shell","BP_UGL_FlareWhite","BP_UGL_FlareRed","BP_UGL_FlareGreen"};
			cameraDir = "OP_look";
			discreteDistance[] = {50,75,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[] = {"OP_eye_50","OP_eye_75","OP_eye_100","OP_eye_150","OP_eye_200","OP_eye_250","OP_eye_300","OP_eye_350","OP_eye_400"};
			discreteDistanceInitIndex = 1;
			reloadAction = "GestureReloadKatibaUGL";
			useExternalOptic = 0;
			useModelOptics = 0;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo { //["WeaponSlotsInfo"]
			mass = 100;
		};
	};
	class BP_arifle_CTAR_GL_blk_F : BP_arifle_CTAR_GL_base_F { //CAR-95 GL Black
		_generalMacro = "arifle_CTAR_GL_blk_F";
		author = "Bohemia Interactive";
		baseWeapon = "arifle_CTAR_GL_blk_F";
		displayName = "CAR-95 GL 5.8 mm (Black)";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_1_co.paa","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_2_co.paa","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTARS_GL_F_co.paa"};
		picture = "\A3\Weapons_F_Exp\Rifles\CTAR\Data\UI\icon_arifle_CTAR_GL_blk_F_X_CA.paa";
		scope = 2;
	};
	class BP_arifle_CTAR_GL_ghex_F : BP_arifle_CTAR_GL_base_F { //CAR-95 GL Green Hex
		_generalMacro = "arifle_CTAR_GL_ghex_F";
		author = "Bohemia Interactive";
		baseWeapon = "arifle_CTAR_GL_ghex_F";
		displayName = "CAR-95 GL 5.8 mm (Green Hex)";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_1_ghex_co.paa","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_2_co.paa","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTARS_GL_F_ghex_co.paa"};
		picture = "\A3\Weapons_F_Exp\Rifles\CTAR\Data\UI\icon_arifle_CTAR_GL_blk_F_X_CA.paa";
		scope = 2;
	};
	class BP_arifle_CTAR_GL_hex_F : BP_arifle_CTAR_GL_base_F { //CAR-95 GL Hex
		_generalMacro = "arifle_CTAR_GL_hex_F";
		author = "Bohemia Interactive";
		baseWeapon = "arifle_CTAR_GL_hex_F";
		displayName = "CAR-95 GL 5.8 mm (Hex)";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_1_bhex_co.paa","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_2_co.paa","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTARS_GL_F_bhex_co.paa"};
		picture = "\A3\Weapons_F_Exp\Rifles\CTAR\Data\UI\icon_arifle_CTAR_GL_blk_F_X_CA.paa";
		scope = 2;
	};

	class BP_arifle_CTARS_base_F : arifle_CTARS_base_F { //CAR-95-1 Base
		_generalMacro = "arifle_CTARS_base_F";
		author = "Bohemia Interactive";
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\firemode_katiba",0.251189,1,5};
		descriptionShort = "Light Machine Gun<br />Caliber: 5.8x42 mm";
		dexterity = 1.6;
		displayName = "";
		distanceZoomMax = 300;
		distanceZoomMin = 300;
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\dry_Katiba",0.562341,1,10};
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Exp\Rifles\CTAR\Anim\CTAR_F.rtm"};
		hiddenSelections[] = {"camo"};
		htMax = 870;
		htMin = 9;
		inertia = 0.4;
		initSpeed = 970;
		magazines[] = {"BP_100Rnd_580x42_Mag_F","BP_100Rnd_580x42_Mag_Tracer_F"};
		maxZeroing = 1000;
		model = "\A3\Weapons_F_Exp\Rifles\CTARS\CTARS_F.p3d";
		modes[] = {"Single","FullAuto"};
		recoil = "recoil_car_lsw";
		reloadAction = "GestureReloadCTAR";
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\reload_Katiba",1,1,10};
		scope = 0;
		class FullAuto : Mode_FullAuto { //["Mode_SemiAuto"]
			aiRateOfFire = 1e-006;
			dispersion = 0.00116;
			maxRange = 30;
			maxRangeProbab = 0.1;
			midRange = 15;
			midRangeProbab = 0.7;
			minRange = 0;
			minRangeProbab = 0.9;
			reloadTime = 0.075;
			class BaseSoundModeType {};
			class SilencedSound : BaseSoundModeType {
				soundSetShot[] = {"CAR_95_silencerShot_SoundSet","CAR_95_silencerTail_SoundSet","CAR_95_silencerInteriorTail_SoundSet"};
			};
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"CAR_95_Shot_SoundSet","CAR_95_Tail_SoundSet","CAR_95_interiorTail_SoundSet"};
			};
		};
		class Single : Mode_SemiAuto {
			dispersion = 0.00116;
			maxRange = 400;
			maxRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			minRange = 2;
			minRangeProbab = 0.5;
			reloadTime = 0.075;
			class BaseSoundModeType {};
			class SilencedSound : BaseSoundModeType {
				soundSetShot[] = {"CAR_95_silencerShot_SoundSet","CAR_95_silencerTail_SoundSet","CAR_95_silencerInteriorTail_SoundSet"};
			};
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"CAR_95_Shot_SoundSet","CAR_95_Tail_SoundSet","CAR_95_interiorTail_SoundSet"};
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo {
			mass = 100;
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS","optic_ACO_grn", "optic_Aco", "optic_Aco_smg", "optic_ACO_grn_smg", "optic_AMS", "optic_AMS_khk", "optic_AMS_snd", "optic_Arco", "optic_Arco_blk_F", "optic_Arco_ghex_F", "optic_DMS", "optic_DMS_ghex_F", "optic_ERCO_blk_F", "optic_ERCO_khk_F", "optic_ERCO_khk_F", "optic_KHS_blk", "optic_KHS_hex", "optic_KHS_old", "optic_KHS_tan", "optic_LRPS", "optic_LRPS_ghex_F", "optic_LRPS_tna_F", "optic_Holosight", "optic_Holosight_blk_F", "optic_Holosight_khk_F", "optic_Holosight_smg", "optic_Holosight_smg_blk_F", "optic_SOS", "optic_SOS_khk_F", "optic_MRCO", "optic_Hamr", "optic_Hamr_khk_F", "BP_optic_ACOG","BP_compm4s","BP_OldComp"};
				iconPosition[] = {0.45,0.28};
				iconScale = 0.2;
			};
			class MuzzleSlot : SlotInfo
			{
				compatibleItems[] = {"BP_muzzle_snds_58_blk_F","BP_muzzle_snds_58_wdm_F"};
				iconPosition[] = {0,0.45};
				iconScale = 0.2;
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
			};
			class PointerSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"acc_flashlight","acc_pointer_IR"};
				iconPosition[] = {0.35,0.45};
				iconScale = 0.2;
			};
		};
	};
	class BP_arifle_CTARS_blk_F : BP_arifle_CTARS_base_F { //CAR-95-1 Black
		_generalMacro = "arifle_CTARS_blk_F";
		author = "Bohemia Interactive";
		baseWeapon = "arifle_CTARS_blk_F";
		displayName = "CAR-95-1 5.8mm (Black)";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\CTARS\Data\arifle_CTARS_blk_F_co.paa"};
		picture = "\A3\Weapons_F_Exp\Rifles\CTARS\Data\UI\icon_arifle_CTARS_blk_F_X_CA.paa";
		scope = 2;
	};
	class BP_arifle_CTARS_ghex_F : BP_arifle_CTARS_base_F { //CAR-95-1 Green Hex
		_generalMacro = "arifle_CTARS_ghex_F";
		author = "Bohemia Interactive";
		baseWeapon = "arifle_CTARS_ghex_F";
		displayName = "CAR-95-1 5.8mm (Green Hex)";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_1_ghex_co.paa","\A3\Weapons_F_Exp\Rifles\CTARS\Data\CTARS_F_ghex_co.paa"};
		picture = "\A3\Weapons_F_Exp\Rifles\CTARS\Data\UI\icon_arifle_CTARS_blk_F_X_CA.paa";
		scope = 2;
	};
	class BP_arifle_CTARS_hex_F : BP_arifle_CTARS_base_F { //CAR-95-1 Hex
		_generalMacro = "arifle_CTARS_hex_F";
		author = "Bohemia Interactive";
		baseWeapon = "arifle_CTARS_hex_F";
		displayName = "CAR-95-1 5.8mm (Hex)";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_1_bhex_co.paa","\A3\Weapons_F_Exp\Rifles\CTARS\Data\CTARS_F_bhex_co.paa"};
		picture = "\A3\Weapons_F_Exp\Rifles\CTARS\Data\UI\icon_arifle_CTARS_blk_F_X_CA.paa";
		scope = 2;
	};

	class BP_arifle_ARX_base_F : arifle_ARX_base_F { //Type 115 Base
		_generalMacro = "arifle_ARX_base_F";
		aiDispersionCoefX = 4;
		aiDispersionCoefY = 6;
		author = "Bohemia Interactive";
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\firemode_katiba",0.251189,1,5};
		descriptionShort = "Assault Rifle<br />Caliber: 6.5x39 mm / .50 BW";
		dexterity = 1.1;
		discreteDistance[] = {100,200,300,400,500,600};
		discreteDistanceInitIndex = 0;
		displayName = "Type 115 6.5 mm";
		distanceZoomMax = 600;
		distanceZoomMin = 100;
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\dry_Katiba",0.562341,1,10};
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Exp\Rifles\ARX\data\anim\arx.rtm"};
		hiddenSelections[] = {"camo1","camo2"};
		htMax = 820;
		htMin = 10;
		inertia = 0.9;
		initSpeed = 960;
		magazines[] = {"BP_30Rnd_65x39","BP_30Rnd_65x39_SD","BP_10Rnd_65x39","BP_10Rnd_65x39_SD"};
		maxZeroing = 1000;
		model = "\A3\Weapons_F_Exp\Rifles\ARX\ARX_F.p3d";
		modes[] = {"Single","FullAuto"};
		muzzles[] = {"this","Secondary"};
		overviewPicture = "\A3\Data_F_Exp\Images\WeaponType115_ca.paa";
		recoil = "recoil_ARX_primary";
		reloadAction = "GestureReloadARX";
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\Type115_reload",1,1,10};
		scope = 0;
		class FullAuto : Mode_FullAuto { //["Mode_SemiAuto"]
			aiRateOfFire = 1e-006;
			dispersion = 0.00116;
			maxRange = 30;
			maxRangeProbab = 0.1;
			midRange = 15;
			midRangeProbab = 0.7;
			minRange = 0;
			minRangeProbab = 0.9;
			reloadTime = 0.067;
			class BaseSoundModeType {};
			class SilencedSound : BaseSoundModeType {
				soundSetShot[] = {"Type115_silencerShot_SoundSet","Type115_silencerTail_SoundSet","Type115_silencerInteriorTail_SoundSet"};
			};
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"Type115_Shot_SoundSet","Type115_Tail_SoundSet","Type115_interiorTail_SoundSet"};
			};
		};
		class GunParticles : GunParticles {
			class SecondEffect {
				directionName = "Nabojniceend";
				effectName = "CaselessAmmoCloud";
				positionName = "Nabojnicestart";
			};
		};
		class Library {
			libTextDesc = "The Type 115 is a modern multi weapon. It consists of two separate weapons combined into a single unit: a lower semi auto rifle chambered to fire .50 rounds and an upper automatic/semi auto rifle chambered in 6.5 mm. The gun can be modified by attachments to fulfill various roles in battle. Its versatility turns every soldier into a universal threat against both infantry and armored targets.";
		};
		class Secondary : Rifle_Base_F { //["Rifle","RifleCore","Default"]
			changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\firemode_katiba",0.251189,1,5};
			cursor = "srifle";
			discreteDistance[] = {100,200,300};
			discreteDistanceInitIndex = 0;
			displayName = "";
			distanceZoomMax = 300;
			distanceZoomMin = 100;
			drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\dry_Katiba",0.562341,1,10};
			htMax = 550;
			htMin = 16;
			inertia = 0.9;
			initSpeed = 580;
			magazines[] = {"BP_10Rnd_50BW_Mag_F","10Rnd_50BW_Mag_F"};
			maxZeroing = 1000;
			modes[] = {"Single"};
			recoil = "recoil_ARX_secondary";
			reloadAction = "GestureReloadARX2";
			reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\50cal_Type115_reload",1,1,10};
			soundContinuous = 0;
			class GunParticles : GunParticles {
				class SecondEffect {
					directionName = "Nabojniceend2";
					effectName = "CaselessAmmoCloud";
					positionName = "Nabojnicestart2";
				};
			};
			class Single : Mode_SemiAuto {
				aiRateOfFire = 3;
				aiRateOfFireDistance = 500;
				dispersion = 0.00145;
				maxRange = 450;
				maxRangeProbab = 0.3;
				midRange = 150;
				midRangeProbab = 0.7;
				minRange = 2;
				minRangeProbab = 0.5;
				reloadTime = 0.3;
				sounds[] = {"StandardSound"};
				class BaseSoundModeType {};
				class SilencedSound : BaseSoundModeType {
					soundSetShot[] = {"50cal_Type115_Shot_SoundSet","50cal_Type115_Tail_SoundSet","50cal_Type115_interiorTail_SoundSet"};
				};
				class StandardSound : BaseSoundModeType {
					soundSetShot[] = {"50cal_Type115_Shot_SoundSet","50cal_Type115_Tail_SoundSet","50cal_Type115_interiorTail_SoundSet"};
				};
			};
		};
		class Single : Mode_SemiAuto {
			dispersion = 0.00116;
			maxRange = 400;
			maxRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			minRange = 2;
			minRangeProbab = 0.5;
			reloadTime = 0.067;
			class BaseSoundModeType {};
			class SilencedSound : BaseSoundModeType {
				soundSetShot[] = {"Type115_silencerShot_SoundSet","Type115_silencerTail_SoundSet","Type115_silencerInteriorTail_SoundSet"};
			};
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"Type115_Shot_SoundSet","Type115_Tail_SoundSet","Type115_interiorTail_SoundSet"};
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 120;
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS","optic_ACO_grn", "optic_Aco", "optic_Aco_smg", "optic_ACO_grn_smg", "optic_AMS", "optic_AMS_khk", "optic_AMS_snd", "optic_Arco", "optic_Arco_blk_F", "optic_Arco_ghex_F", "optic_DMS", "optic_DMS_ghex_F", "optic_ERCO_blk_F", "optic_ERCO_khk_F", "optic_ERCO_khk_F", "optic_KHS_blk", "optic_KHS_hex", "optic_KHS_old", "optic_KHS_tan", "optic_LRPS", "optic_LRPS_ghex_F", "optic_LRPS_tna_F", "optic_Holosight", "optic_Holosight_blk_F", "optic_Holosight_khk_F", "optic_Holosight_smg", "optic_Holosight_smg_blk_F", "optic_SOS", "optic_SOS_khk_F", "optic_MRCO", "optic_Hamr", "optic_Hamr_khk_F", "BP_optic_ACOG","BP_compm4s","BP_OldComp"};
				iconPosition[] = {0.45,0.28};
				iconScale = 0.2;
			};
			class MuzzleSlot : SlotInfo
			{
				compatibleItems[] = {"BP_muzzle_snds_65_TI_blk_F","BP_muzzle_snds_65_TI_hex_F","BP_muzzle_snds_65_TI_ghex_F"};
				iconPosition[] = {0,0.45};
				iconScale = 0.2;
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
			};
			class PointerSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"acc_flashlight","acc_pointer_IR"};

				iconPosition[] = {0.35,0.45};
				iconScale = 0.2;
			};
			class UnderBarrelSlot : SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris","BP_Harris2","bipod_03_F_blk", "bipod_02_F_blk", "bipod_01_F_blk", "bipod_02_F_hex", "bipod_01_F_khk", "bipod_01_F_mtp", "bipod_03_F_oli", "bipod_01_F_snd", "bipod_02_F_tan"};

				iconPosition[] = {0.2,0.8};
				iconScale = 0.3;
			};
		};
	};
	class BP_arifle_ARX_blk_F : BP_arifle_ARX_base_F { //Type 115 Black
		_generalMacro = "arifle_ARX_blk_F";
		author = "Bohemia Interactive";
		baseWeapon = "arifle_ARX_blk_F";
		displayName = "Type 115 6.5 mm (Black)";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\ARX\Data\arifle_ARX_blk_01_F_co.paa","\A3\Weapons_F_Exp\Rifles\ARX\Data\arifle_ARX_blk_02_F_co.paa"};
		picture = "\A3\Weapons_F_Exp\Rifles\ARX\Data\UI\arifle_ARX_blk_F_X_CA.paa";
		scope = 2;
		class Secondary : Secondary { //["Rifle_Base_F","Rifle","RifleCore","Default"]
			displayName = "Type 115 .50 BW (Black)";
		};
	};
	class BP_arifle_ARX_ghex_F : BP_arifle_ARX_base_F { //Type 115 Green Hex
		_generalMacro = "arifle_ARX_ghex_F";
		author = "Bohemia Interactive";
		baseWeapon = "arifle_ARX_ghex_F";
		displayName = "Type 115 6.5 mm (Green Hex)";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\ARX\Data\arifle_ARX_ghex_F_co.paa","\A3\Weapons_F_Exp\Rifles\ARX\Data\arifle_ARX_blk_02_F_co.paa"};
		picture = "\A3\Weapons_F_Exp\Rifles\ARX\Data\UI\arifle_ARX_ghex_F_X_CA.paa";
		scope = 2;
		class Secondary : Secondary { //["Rifle_Base_F","Rifle","RifleCore","Default"]
			displayName = "Type 115 .50 BW (Green Hex)";
		};
	};
	class BP_arifle_ARX_hex_F : BP_arifle_ARX_base_F { //Type 115 Hex
		_generalMacro = "arifle_ARX_hex_F";
		author = "Bohemia Interactive";
		baseWeapon = "arifle_ARX_hex_F";
		displayName = "Type 115 6.5 mm (Hex)";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\ARX\Data\arifle_ARX_hex_F_co.paa","\A3\Weapons_F_Exp\Rifles\ARX\Data\arifle_ARX_blk_02_F_co.paa"};
		picture = "\A3\Weapons_F_Exp\Rifles\ARX\Data\UI\arifle_ARX_hex_F_X_CA.paa";
		scope = 2;
		class Secondary : Secondary { //["Rifle_Base_F","Rifle","RifleCore","Default"]
			displayName = "Type 115 .50 BW (Hex)";
		};
	};

	class BP_DMR_07_base_F : DMR_07_base_F { //CMR-76 Base
		_generalMacro = "DMR_07_base_F";
		aiDispersionCoefX = 2;
		aiDispersionCoefY = 3;
		author = "Bohemia Interactive";
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.630957,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.630957,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.630957,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.630957,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.630957,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.630957,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.630957,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.630957,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.630957,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.630957,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.630957,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.630957,1,15};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_firemode",0.316228,1,5};
		cursor = "srifle";
		deployedPivot = "bipod";
		descriptionShort = "Marksman Rifle<br />Caliber: 6.5x39 mm";
		discreteDistance[] = {300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600};
		discreteDistanceInitIndex = 0;
		displayName = "CMR-76 6.5 mm";
		distanceZoomMax = 1600;
		distanceZoomMin = 300;
		DLC = "Expansion";
		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\LongRangeRifles\DMR07\DMR07_dry",0.562341,1,10};
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Exp\LongRangeRifles\DMR_07\Data\Anim\DMR_07.rtm"};
		hasBipod = 1;
		hiddenSelections[] = {"camo1","camo2"};
		inertia = 0.5;
		initSpeed = 960;
		magazines[] = {"BP_20Rnd_650x39_Cased_Mag_F","BP_30Rnd_65x39","BP_30Rnd_65x39_SD","BP_10Rnd_65x39","BP_10Rnd_65x39_SD"};
		maxZeroing = 1400;
		model = "\A3\Weapons_F_Exp\LongRangeRifles\DMR_07\DMR_07_F.p3d";
		modes[] = {"Single"};
		overviewPicture = "\A3\Data_F_Exp\Images\WeaponCMR_ca.paa";
		recoil = "recoil_car_dmr";
		reloadAction = "GestureReloadDMR07";
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_reload",1,1,10};
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down",0.707946,1,20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up",0.707946,1,20};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		class Library {
			libTextDesc = "Designated marksman rifle of an Eastern origin. It is a gas operated, semiautomatic rifle of a bullpup construction. The housing is made from polymer. The rifle is chambered in 6.5 mm and therefore is most suited to ranges from 500 to 700 meters. The CMR-76 is missing both the sides and the bottom rails but is by default equipped with a bipod.";
		};
		class Single : Mode_SemiAuto {
			dispersion = 0.00073;
			maxRange = 450;
			maxRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.7;
			minRange = 2;
			minRangeProbab = 0.3;
			reloadTime = 0.092;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType {};
			class SilencedSound : BaseSoundModeType {
				SoundSetShot[] = {"DMR07_silencerShot_SoundSet","DMR07_silencerTail_SoundSet","DMR07_silencerInteriorTail_SoundSet"};
			};
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"DMR07_Shot_SoundSet","DMR07_Tail_SoundSet","DMR07_InteriorTail_SoundSet"};
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo { //["WeaponSlotsInfo"]
			mass = 120;
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS","optic_ACO_grn", "optic_Aco", "optic_Aco_smg", "optic_ACO_grn_smg", "optic_AMS", "optic_AMS_khk", "optic_AMS_snd", "optic_Arco", "optic_Arco_blk_F", "optic_Arco_ghex_F", "optic_DMS", "optic_DMS_ghex_F", "optic_ERCO_blk_F", "optic_ERCO_khk_F", "optic_ERCO_khk_F", "optic_KHS_blk", "optic_KHS_hex", "optic_KHS_old", "optic_KHS_tan", "optic_LRPS", "optic_LRPS_ghex_F", "optic_LRPS_tna_F", "optic_Holosight", "optic_Holosight_blk_F", "optic_Holosight_khk_F", "optic_Holosight_smg", "optic_Holosight_smg_blk_F", "optic_SOS", "optic_SOS_khk_F", "optic_MRCO", "optic_Hamr", "optic_Hamr_khk_F","BP_optic_ACOG","BP_compm4s","BP_OldComp"};
				iconPosition[] = {0.45,0.28};
				iconScale = 0.2;
			};
			class MuzzleSlot : SlotInfo
			{
				compatibleItems[] = {"BP_muzzle_snds_H"};
				iconPosition[] = {0,0.45};
				iconScale = 0.2;
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
			};
			class PointerSlot {};
		};
	};
	class BP_srifle_DMR_07_blk_F : BP_DMR_07_base_F { //CMR-76 Black
		_generalMacro = "srifle_DMR_07_blk_F";
		author = "Bohemia Interactive";
		displayName = "CMR-76 6.5 mm (Black)";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\LongRangeRifles\DMR_07\Data\DMR_07_F_1_co.paa","\A3\Weapons_F_Exp\LongRangeRifles\DMR_07\Data\DMR_07_F_2_co.paa"};
		picture = "\A3\Weapons_F_Exp\LongRangeRifles\DMR_07\Data\UI\icon_srifle_DMR_07_blk_F_X_CA.paa";
		scope = 2;
	};
	class BP_srifle_DMR_07_ghex_F : BP_DMR_07_base_F { //CMR-76 Green Hex
		_generalMacro = "srifle_DMR_07_ghex_F";
		author = "Bohemia Interactive";
		displayName = "CMR-76 6.5 mm (Green Hex)";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\LongRangeRifles\DMR_07\Data\DMR_07_F_1_ghex_co.paa","\A3\Weapons_F_Exp\LongRangeRifles\DMR_07\Data\DMR_07_F_2_co.paa"};
		picture = "\A3\Weapons_F_Exp\LongRangeRifles\DMR_07\Data\UI\icon_srifle_DMR_07_ghex_F_X_CA.paa";
		scope = 2;
	};
	class BP_srifle_DMR_07_hex_F : BP_DMR_07_base_F { //CMR-76 Hex
		_generalMacro = "srifle_DMR_07_hex_F";
		author = "Bohemia Interactive";
		displayName = "CMR-76 6.5 mm (Hex)";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\LongRangeRifles\DMR_07\Data\DMR_07_F_1_hex_co.paa","\A3\Weapons_F_Exp\LongRangeRifles\DMR_07\Data\DMR_07_F_2_co.paa"};
		picture = "\A3\Weapons_F_Exp\LongRangeRifles\DMR_07\Data\UI\icon_srifle_DMR_07_hex_F_X_CA.paa";
		scope = 2;
	};

	class BP_SMG_05_base_F : SMG_05_base_F { //Protector Base
		_generalMacro = "SMG_05_F";
		author = "Bohemia Interactive";
		changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_firemode",0.562341,1,5};
		descriptionShort = "Submachine Gun<br />Caliber: 9x21 mm";
		dexterity = 1.8;
		displayName = "Protector 9 mm";
		distanceZoomMax = 300;
		distanceZoomMin = 300;
		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_dry",0.562341,1,10};
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Exp\SMGs\SMG_05\Data\Anim\SMG_05.rtm"};
		hiddenSelections[] = {"camo_1","camo_2"};
		hiddenSelectionsTextures[] = {"\a3\weapons_f_exp\smgs\smg_05\data\smg_05_f_co.paa","\a3\weapons_f_exp\smgs\smg_05\data\smg_05_f_acc_co.paa"};
		htMax = 380;
		htMin = 3;
		inertia = 0.2;
		initSpeed = 375;
		magazines[] = {"BP_30Rnd_9x21_Mag","BP_33Rnd_9x19OVP","BP_16Rnd_9x21_Mag","BP_33Rnd_9x19","BP_17Rnd_9x19_SD","BP_15Rnd_9x19_M9","BP_15Rnd_9x19OVP"};
		maxZeroing = 200;
		model = "\A3\Weapons_F_Exp\SMGs\SMG_05\SMG_05_F.p3d";
		modes[] = {"Single","FullAuto"};
		picture = "\A3\Weapons_F_Exp\SMGs\SMG_05\Data\UI\icon_SMG_05_F_X_CA.paa";
		recoil = "recoil_smg_05";
		reloadAction = "GestureReloadSMG_05";
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_Reload",1,1,10};
		scope = 0;
		class FullAuto : Mode_FullAuto { //["Mode_SemiAuto"]
			aiRateOfFire = 1e-006;
			aiRateOfFireDistance = 25;
			dispersion = 0.00174;
			maxRange = 25;
			maxRangeProbab = 0.1;
			midRange = 12;
			midRangeProbab = 0.7;
			minRange = 0;
			minRangeProbab = 0.9;
			reloadTime = 0.067;
			class BaseSoundModeType {};
			class SilencedSound : BaseSoundModeType {
				SoundSetShot[] = {"Rogue9_silencerShot_SoundSet","Rogue9_silencerTail_SoundSet","Rogue9_silencerInteriorTail_SoundSet"};
			};
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"Rogue9_Shot_SoundSet","Rogue9_Tail_SoundSet","Rogue9_InteriorTail_SoundSet"};
			};
		};
		class Library {
			libTextDesc = "A lightweight, air-cooled, selective fire, delayed blowback operated submachine gun with a roller-delayed bolt. The compact size, accuracy and high rate of fire of the Protector are highly regarded and the gun is used in many variants by numerous military, law enforcement, intelligence and security organizations all around the world.";
		};
		class Single : Mode_SemiAuto {
			dispersion = 0.00174;
			maxRange = 120;
			maxRangeProbab = 0.05;
			midRange = 80;
			midRangeProbab = 0.7;
			minRange = 2;
			minRangeProbab = 0.3;
			reloadTime = 0.067;
			class BaseSoundModeType {};
			class SilencedSound : BaseSoundModeType {
				SoundSetShot[] = {"Rogue9_silencerShot_SoundSet","Rogue9_silencerTail_SoundSet","Rogue9_silencerInteriorTail_SoundSet"};
			};
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"Rogue9_Shot_SoundSet","Rogue9_Tail_SoundSet","Rogue9_InteriorTail_SoundSet"};
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo {
			mass = 35;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_Mk12Sup", "BP_gemtech9", "BP_m9qd"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				compatibleItems[] = {"optic_ACO_grn", "optic_Aco", "optic_Aco_smg", "optic_ACO_grn_smg","optic_Holosight", "optic_Holosight_blk_F", "optic_Holosight_khk_F", "optic_Holosight_smg", "optic_Holosight_smg_blk_F"};
				iconScale = 0.1;
			};
			class PointerSlot : SlotInfo
			{
			    linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight"};
				iconScale = 0.1;
			};
			/*class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS","optic_ACO_grn", "optic_Aco", "optic_Aco_smg", "optic_ACO_grn_smg", "optic_AMS", "optic_AMS_khk", "optic_AMS_snd", "optic_Arco", "optic_Arco_blk_F", "optic_Arco_ghex_F", "optic_DMS", "optic_DMS_ghex_F", "optic_ERCO_blk_F", "optic_ERCO_khk_F", "optic_ERCO_khk_F", "optic_KHS_blk", "optic_KHS_hex", "optic_KHS_old", "optic_KHS_tan", "optic_LRPS", "optic_LRPS_ghex_F", "optic_LRPS_tna_F", "optic_Holosight", "optic_Holosight_blk_F", "optic_Holosight_khk_F", "optic_Holosight_smg", "optic_Holosight_smg_blk_F", "optic_SOS", "optic_SOS_khk_F", "optic_MRCO", "optic_Hamr", "optic_Hamr_khk_F","BP_optic_ACOG","BP_compm4s","BP_OldComp"};
				iconPosition[] = {0.45,0.28};
				iconScale = 0.2;
			};
			class MuzzleSlot : SlotInfo
			{
				compatibleItems[] = {"BP_muzzle_snds_L"};
				iconPosition[] = {0,0.45};
				iconScale = 0.2;
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
			};
			class PointerSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconPosition[] = {0.35,0.45};
				iconScale = 0.2;
			};*/
			class UnderBarrelSlot : SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {};
				iconPosition[] = {0.2,0.8};
				iconScale = 0.3;
			};
		};
	};
	class BP_SMG_05_F : BP_SMG_05_base_F { //Protector
		_generalMacro = "SMG_05_F";
		author = "Bohemia Interactive";
		baseWeapon = "SMG_05_F";
		scope = 2;
	};

//-----------------------------------------------------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------------------------------------------------

	/*
		Breaking Point: Firearms
			By Valtiel
	*/

//------------------------|
//CLASS REDFINES UI IMAGES|-----------------------------------------------------------------------------------------------------------------------------------
//------------------------|

	class BP_Benelli : Rifle_Base_F_BP
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\M1014\BP_M1014.p3d";
		picture = "\breakingpoint_weapons\icons\gear_m1014_rifle_x_ca.paa";
		displayName = "Old M4 Benelli Super 90";
		descriptionShort = "Poorly maintained civilian Benelli shotgun";
		descriptionUse = "Old M4 Benelli Super 90";
		reloadAction = "GestureReloadM4SSAS";
		magazines[] = {"BP_8Rnd_Slug", "BP_8Rnd_Buckshot", "BP_8Rnd_MagBuckshot", "BP_2Rnd_Buckshot", "BP_2Rnd_Slug", "BP_2Rnd_MagBuckshot", "BP_6Rnd_GreenFlare", "BP_6Rnd_RedFlare"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M60E4.rtm"};
		inertia = 0.200000;
		recoil = "recoil_ebr";
		changeFiremodeSound[] = {};
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\Bolt_reload_s1.wav", 0.30, 0.6, 30};
		//muzzleEffect = "BIS_fnc_effectFiredRifle";
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\Benelli_s1.wav", 1, 1, 1100};
				begin2[] = {"breakingpoint_jsrs\sounds\Benelli_s2.wav", 1, 1, 1100};
				begin3[] = {"breakingpoint_jsrs\sounds\Benelli_s3.wav", 1, 1, 1100};
				begin4[] = {"breakingpoint_jsrs\sounds\Benelli_s4.wav", 1, 1, 1100};
				soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18", 1.000000, 1, 200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19", 1.000000, 1, 200};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11", 1.000000, 1, 200};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-12", 1.000000, 0.9, 100};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			dispersion = 0.001600;
			soundContinuous = 0;
			reloadTime = 0.3;
			//recoil = "recoil_single_ebr";
			//recoilProne = "recoil_single_prone_ebr";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 75; //Masschange Made lighter
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "optic_MRCO", "optic_Arco", "BP_optic_ACOG", "BP_compm4s", "BP_OldComp"};
				iconScale = 0.1;
			};
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight", "acc_pointer_IR"};
				iconScale = 0.1;
			};
		};
	};

	class BP_Benelli_WDL : BP_Benelli
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\M1014\m1014_wdl_co.paa"};
	};

	class BP_Benelli_DES : BP_Benelli
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\M1014\m1014_des_co.paa"};
	};

	class BP_Benelli_URB : BP_Benelli
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\M1014\m1014_urb_co.paa"};
	};

	class BP_Rem870 : BP_Benelli
	{
	    scope = 2;
		model = "\breakingpoint_weapons\models\870\BP_Rem870.p3d";
		picture = "\breakingpoint_weapons\icons\gear_870_rifle_x_ca.paa";
		displayName = "Old Remington 870 Express";
		reloadAction = "GestureReloadM4SSAS";
		magazines[] = {"BP_8Rnd_Buckshot", "BP_8Rnd_Slug", "BP_8Rnd_MagBuckshot", "BP_2Rnd_Buckshot", "BP_2Rnd_Slug", "BP_2Rnd_MagBuckshot", "BP_6Rnd_GreenFlare", "BP_6Rnd_RedFlare"};
		descriptionShort = "An old Remington pump action shotgun";
		inertia = 0.210000; //Inertiachange, increaced.
		descriptionUse = "Old Remington 870";
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M24.rtm"};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 85;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
		};
	};

	class BP_Rem870_WDL : BP_Rem870
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\870\Rem870_wdl_co.paa"};
	};

	class BP_Rem870_DES : BP_Rem870
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\870\Rem870_des_co.paa"};
	};

	class BP_Rem870_URB : BP_Rem870
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\870\Rem870_urb_co.paa"};
	};

	class BP_Lupara : BP_Benelli
	{
	    scope = 2;
		model = "\breakingpoint_weapons\models\Lupara\BP_Lupara.p3d";
		picture = "\breakingpoint_weapons\icons\gear_lupara_rifle_x_ca.paa";
		displayName = "Lupara Double Barrel";
		reloadAction = "ReloadMagazine";
		magazines[] = {"BP_2Rnd_Buckshot", "BP_2Rnd_Slug", "BP_2Rnd_MagBuckshot"};
		descriptionShort = "Sawed off double barrel shotgun";
		inertia = 0.12000;
		initSpeed = -0.85;
		//recoil = ""; recoilChange test a higher value for sawnoff, like m320
		descriptionUse = "Lupara Double Barrel";
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\LeeEnfield.rtm"};
		modes[] = {"Single", "Dual"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";

 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\Benelli_s1.wav", 1, 1, 1100};
				begin2[] = {"breakingpoint_jsrs\sounds\Benelli_s2.wav", 1, 1, 1100};
				begin3[] = {"breakingpoint_jsrs\sounds\Benelli_s3.wav", 1, 1, 1100};
				begin4[] = {"breakingpoint_jsrs\sounds\Benelli_s4.wav", 1, 1, 1100};
				soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18", 1.000000, 1, 200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19", 1.000000, 1, 200};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11", 1.000000, 1, 200};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-12", 1.000000, 0.9, 100};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			dispersion = 0.0033;//dispersionChange
			soundContinuous = 0;
			displayName = "Single";
			reloadTime = 0.3;
			//recoil = "recoil_single_gm6";
			//recoilProne = "recoil_single_gm6";
		};
		class Dual : Mode_Burst
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";

 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\Benelli_s1.wav", 1, 1, 1100};
				begin2[] = {"breakingpoint_jsrs\sounds\Benelli_s2.wav", 1, 1, 1100};
				begin3[] = {"breakingpoint_jsrs\sounds\Benelli_s3.wav", 1, 1, 1100};
				begin4[] = {"breakingpoint_jsrs\sounds\Benelli_s4.wav", 1, 1, 1100};
				soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18", 1.000000, 1, 200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19", 1.000000, 1, 200};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11", 1.000000, 1, 200};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-12", 1.000000, 0.9, 100};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			dispersion = 0.0033;//dispersionChange was 0.002900
			soundContinuous = 0;
			reloadTime = 0;//reloadTimeChange was 0.15 testing no delay
			displayName = "Dual";
			burst = 2;
			//recoil = "recoil_single_gm6";
			//recoilProne = "recoil_single_gm6";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 65;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
		};
	};

	class BP_Lupara_WDL : BP_Lupara
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Lupara\Lupara2_wdl_co.paa"};
	};

	class BP_Lupara_DES : BP_Lupara
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Lupara\Lupara2_des_co.paa"};
	};

	class BP_Lupara_URB : BP_Lupara
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Lupara\Lupara2_urb_co.paa"};
	};

	class BP_LuparaS : BP_Lupara //this appears to be already set up as a pistol variant, but needs model edit, chracters arms stretch
	{
	    scope = 2;
		//type = 2; //enable this for it to go in pistol slot
		model = "\breakingpoint_weapons\models\Lupara\BP_LuparaS.p3d";
		picture = "\breakingpoint_weapons\icons\gear_lupara_rifle_x_ca.paa";
		displayName = "Lupara Double Barrel";
		reloadAction = "ReloadMagazine";
		magazines[] = {"BP_2Rnd_MagBuckshot", "BP_2Rnd_Buckshot", "BP_2Rnd_Slug"};
	};

//------------------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//CLASS CREATION WEAPONS PISTOL-|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//------------------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	class BP_1911: Pistol_Base_F
	{
		scope = 2;
		model = "breakingpoint_weapons\models\1911\BP_1911.p3d";
		picture = "\breakingpoint_weapons\icons\gear_1911_rifle_x_ca.paa";
		magazines[] = {"BP_7Rnd_45acp", "BP_7Rnd_45JHP", /*"BP_6Rnd_45_Mag", "BP_6Rnd_45JHP_Mag",*/ "BP_6Rnd_GreenFlare", "BP_6Rnd_RedFlare"};
		descriptionShort = "Original Colt 1911 chambered for .45ACP";
		displayName = "Colt M1911";
		descriptionUse = "Colt M1911";
		changeFiremodeSound[] = {};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\Pistols\pistol_reload", 0.300000, 1, 50};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		inertia = 0.090000; //Inertiachange, reduced.
		recoil = "recoil_pistol_acpc2";
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";

 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\M1911Old_s1.wav", 1.394328, 1, 300};
				begin2[] = {"breakingpoint_jsrs\sounds\M1911Old_s2.wav", 1.394328, 1.14, 300};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\1911snake_s1.wav", 1.140000, 1, 30};
				begin2[] = {"\breakingpoint_jsrs\sounds\1911snake_s1.wav", 0.9700000, 0.85, 30};
				begin3[] = {"\breakingpoint_jsrs\sounds\1911snake_s2.wav", 0.970000, 1, 30};
				begin4[] = {"\breakingpoint_jsrs\sounds\1911snake_s3.wav", 0.990000, 0.90, 30};
				soundBegin[] = {"begin1", 0.25000, "begin2", 0.25000, "begin3", 0.25000, "begin4", 0.25000};
 			};
			//recoil = "recoil_pistol_heavy";
			//recoilProne = "recoil_prone_pistol_heavy";
			reloadTime = 0.100000;
			dispersion = 0.007500;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 30; //Masschanged, reduced.
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_gemtech45", "BP_suppr9"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class PointerSlot : SlotInfo
			{
			    linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
		};
    };

	class BP_1911_WDL: BP_1911
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\1911\colt1911_wdl_co.paa"};
	};

	class BP_1911_DES: BP_1911
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\1911\colt1911_des_co.paa"};
	};

	class BP_1911_URB: BP_1911
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\1911\colt1911_urb_co.paa"};
	};

	class BP_Mak_Old: Pistol_Base_F
	{
	    scope = 2;
		displayName = "Old Makarov PM";
		model = "breakingpoint_weapons\models\Makarov\BP_Makarov.p3d";
		picture = "\breakingpoint_weapons\icons\gear_mak_rifle_x_ca.paa";
	    magazines[] = {"BP_12Rnd_9x18", "BP_6Rnd_GreenFlare", "BP_6Rnd_RedFlare"};
		descriptionShort = "Russian semi automatic pistol, updated 12 round magazine";
		descriptionUse = "Old Makarov PM";
		changeFiremodeSound[] = {};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\Reloads\pistols", 0.300000, 1, 50};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		inertia = 0.070000; //Inertiachange, reduced.
		recoil = "recoil_pistol_rook40";//RecoilChange
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"A3\sounds_f\weapons\SMG_02\SMG_02_st_1b", 1.000000, 1, 700};
				begin2[] = {"A3\sounds_f\weapons\SMG_02\SMG_02_st_2b", 1.000000, 1, 700};
				begin3[] = {"A3\sounds_f\weapons\SMG_02\SMG_02_st_3b", 1.000000, 1, 700};
				soundBegin[] = {"begin1", 0.330000, "begin2", 0.330000, "begin3", 0.340000};
 			};
			//recoil = "recoil_pistol_light";
			//recoilProne = "recoil_prone_pistol_light";
			reloadTime = 0.100000;
			dispersion = 0.007000;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 20;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {/*make model, add silencer*/};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class PointerSlot : SlotInfo
			{
				compatibleItems[] = {};
				iconScale = 0.1;
			};
		};
    };

	class BP_Mak_Old_WDL: BP_Mak_Old
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Makarov\makarov_wdl_co.paa"};
	};

	class BP_Mak_Old_DES: BP_Mak_Old
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Makarov\makarov_des_co.paa"};
	};

	class BP_Mak_Old_URB: BP_Mak_Old
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Makarov\makarov_urb_co.paa"};
	};

	class BP_G17: Pistol_Base_F
	{
	    scope = 2;
		model = "breakingpoint_weapons\models\G17\BP_G17.p3d";
		magazines[] = {"BP_16Rnd_9x21_Mag", "BP_19Rnd_9x19", "BP_17Rnd_9x19_SD", "BP_15Rnd_9x19OVP", "BP_6Rnd_GreenFlare", "BP_6Rnd_RedFlare"};
		picture = "\breakingpoint_weapons\icons\gear_g17_rifle_x_ca.paa";
		descriptionShort = "Standard issue US Military semi automatic pistol, compatible with all standard capacity 9mm magazines";
		displayName = "Glock 17";
		descriptionUse = "Glock 17";
		changeFiremodeSound[] = {};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\Reloads\pistols", 0.300000, 1, 50};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		inertia = 0.0800000; //Inertiachange, reduced.
		recoil = "recoil_pistol_p07";
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";

 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\Glock_s1.wav", 1.144328, 1.1, 450};
				begin2[] = {"breakingpoint_jsrs\sounds\Glock_s2.wav", 1.094328, 0.9, 450};
				begin3[] = {"breakingpoint_jsrs\sounds\Glock_s1.wav", 0.894328, 1.2, 450};
				begin4[] = {"breakingpoint_jsrs\sounds\Glock_s2.wav", 0.794328, 0.8, 450};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\VSS_s1.wav", 1.0, 1, 45};
				begin2[] = {"\breakingpoint_jsrs\sounds\VSS_s2.wav", 1.0, 1, 45};
				begin3[] = {"\breakingpoint_jsrs\sounds\VSS_s3.wav", 1.0, 1, 45};
				begin4[] = {"\breakingpoint_jsrs\sounds\VSS_s4.wav", 1.0, 1, 45};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.250000, "begin4", 0.2500000};
 			};
			reloadTime = 0.1;
			//recoil = "recoil_pistol_light";
			//recoilProne = "recoil_prone_pistol_light";
			dispersion = 0.002450;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 25; //Masschange, reduced.
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_Mk12Sup", "BP_gemtech9", "BP_m9qd"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class PointerSlot : SlotInfo
			{
			    linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
		};
    };

	class BP_G17_WDL: BP_G17
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\G17\glock17_wdl_co.paa"};
	};

	class BP_G17_DES: BP_G17
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\G17\glock17_des_co.paa"};
	};

	class BP_G17_URB: BP_G17
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\G17\glock17_urb_co.paa"};
	};

	class BP_G18: Pistol_Base_F
	{
	    scope = 2;
		model = "breakingpoint_weapons\models\G17\BP_G18.p3d";
		magazines[] = {"BP_30Rnd_9x21_Mag", "BP_33Rnd_9x19OVP", "BP_16Rnd_9x21_Mag", "BP_19Rnd_9x19", "BP_17Rnd_9x19_SD", "BP_15Rnd_9x19OVP", "BP_6Rnd_GreenFlare", "BP_6Rnd_RedFlare"};
		picture = "\breakingpoint_weapons\icons\gear_g18_rifle_x_ca.paa";
		descriptionShort = "Standard issue US Military select fire pistol, compatible with all standard capacity 9mm magazines";
		displayName = "Glock 18";
		descriptionUse = "Glock 18";
		changeFiremodeSound[] = {};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\Reloads\pistols", 0.300000, 1, 50};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		inertia = 0.090000;
		recoil = "recoil_pistol_p07";
		modes[] = {"Single", "Full_Auto"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\Glock_s1.wav", 1.144328, 1.1, 500};
				begin2[] = {"breakingpoint_jsrs\sounds\Glock_s2.wav", 1.094328, 0.9, 500};
				begin3[] = {"breakingpoint_jsrs\sounds\Glock_s1.wav", 0.894328, 1.2, 500};
				begin4[] = {"breakingpoint_jsrs\sounds\Glock_s2.wav", 0.794328, 0.8, 500};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\VSS_s1.wav", 1.0, 1, 50};
				begin2[] = {"\breakingpoint_jsrs\sounds\VSS_s2.wav", 1.0, 1, 50};
				begin3[] = {"\breakingpoint_jsrs\sounds\VSS_s3.wav", 1.0, 1, 50};
				begin4[] = {"\breakingpoint_jsrs\sounds\VSS_s4.wav", 1.0, 1, 50};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.250000, "begin4", 0.2500000};
 			};
			reloadTime = 0.1;
			//recoil = "recoil_pistol_light";
			//recoilProne = "recoil_prone_pistol_light";
			dispersion = 0.002450;
		};
		class Full_Auto : Mode_FullAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\Glock_s1.wav", 1.144328, 1.1, 500};
				begin2[] = {"breakingpoint_jsrs\sounds\Glock_s2.wav", 1.094328, 0.9, 500};
				begin3[] = {"breakingpoint_jsrs\sounds\Glock_s1.wav", 0.894328, 1.2, 500};
				begin4[] = {"breakingpoint_jsrs\sounds\Glock_s2.wav", 0.794328, 0.8, 500};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\VSS_s1.wav", 1.0, 1, 50};
				begin2[] = {"\breakingpoint_jsrs\sounds\VSS_s2.wav", 1.0, 1, 50};
				begin3[] = {"\breakingpoint_jsrs\sounds\VSS_s3.wav", 1.0, 1, 50};
				begin4[] = {"\breakingpoint_jsrs\sounds\VSS_s4.wav", 1.0, 1, 50};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.250000, "begin4", 0.2500000};
 			};
			soundContinuous = 0;
			dispersion = 0.002450;
			reloadTime = 0.050000;
			//recoil = "recoil_auto_smg_01";
			//recoilProne = "recoil_auto_prone_smg_01";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 27; //Masschange, reduced.
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_Mk12Sup", "BP_gemtech9", "BP_m9qd"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class PointerSlot : SlotInfo
			{
			    linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
		};
    };

	class BP_G18_WDL: BP_G18
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\G17\glock17_wdl_co.paa"};
	};

	class BP_G18_DES: BP_G18
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\G17\glock17_des_co.paa"};
	};

	class BP_G18_URB: BP_G18
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\G17\glock17_urb_co.paa"};
	};

	class BP_m9: Pistol_Base_F
	{
	    scope = 2;
		model = "breakingpoint_weapons\models\M9\BP_M9.p3d";
		magazines[] = {"BP_16Rnd_9x21_Mag", "BP_19Rnd_9x19", "BP_17Rnd_9x19_SD", "BP_15Rnd_9x19OVP", "BP_6Rnd_GreenFlare", "BP_6Rnd_RedFlare"};
		picture = "\breakingpoint_weapons\icons\gear_m9_rifle_x_ca.paa";
		descriptionShort = "Standard issue US Military semi automatic pistol, compatible with all standard capacity 9mm magazines";
		displayName = "Beretta M9";
		descriptionUse = "Beretta M9";
		changeFiremodeSound[] = {};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\Reloads\pistols", 0.300000, 1, 50};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		inertia = 0.095000; //Inertiachange, reduced.
		recoil = "recoil_pistol_p07";
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";

 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\M9_s1.wav", 1.394328, 1, 400};
				begin2[] = {"breakingpoint_jsrs\sounds\M9_s2.wav", 1.394328, 1, 400};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\VSS_s1.wav", 1.0, 1, 50};
				begin2[] = {"\breakingpoint_jsrs\sounds\VSS_s2.wav", 1.0, 1, 50};
				begin3[] = {"\breakingpoint_jsrs\sounds\VSS_s3.wav", 1.0, 1, 50};
				begin4[] = {"\breakingpoint_jsrs\sounds\VSS_s4.wav", 1.0, 1, 50};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.250000, "begin4", 0.2500000};
 			};
			reloadTime = 0.1;
			//recoil = "recoil_pistol_light";
			//recoilProne = "recoil_prone_pistol_light";
			dispersion = 0.003450;
		};

		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 27; //Masschange, reduced.
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_Mk12Sup", "BP_gemtech9", "BP_m9qd"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class PointerSlot : SlotInfo
			{
			    linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
		};
    };

	class BP_m9_WDL: BP_m9
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\M9\m9_beretta_wdl_co.paa"};
	};

	class BP_m9_DES: BP_m9
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\M9\m9_beretta_des_co.paa"};
	};

	class BP_m9_URB: BP_m9
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\M9\m9_beretta_urb_co.paa"};
	};

	class BP_m9Tac: BP_m9
	{
	    scope = 2;
		model = "breakingpoint_weapons\models\M9\BP_BerettaTac.p3d";
		picture = "\breakingpoint_weapons\icons\gear_m9tac_rifle_x_ca.paa";
		magazines[] = {"BP_33Rnd_9x19OVP", "BP_30Rnd_9x21_Mag", "BP_16Rnd_9x21_Mag", "BP_19Rnd_9x19", "BP_17Rnd_9x19_SD", "BP_15Rnd_9x19OVP", "BP_6Rnd_GreenFlare", "BP_6Rnd_RedFlare"};
		descriptionShort = "Customized US Military semi automatic pistol, compatible with all 9mm magazines";
		displayName = "Beretta M9 Tactical";
		descriptionUse = "Beretta M9 Tactical";
		begin1[] = {"breakingpoint_jsrs\sounds\M9_s1.wav", 1.394328, 1, 700};
		begin2[] = {"breakingpoint_jsrs\sounds\M9_s2.wav", 1.394328, 1, 700};
		soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
		changeFiremodeSound[] = {};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\Reloads\pistols", 0.300000, 1, 50};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		inertia = 0.100000;
		linkedAttach[] = {"BP_Mk12Ssup"};
		modes[] = {"Single", "FullAuto"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\M9_s1.wav", 1.394328, 1, 500};
				begin2[] = {"breakingpoint_jsrs\sounds\M9_s2.wav", 1.394328, 1, 500};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\P226SD_s1.wav", 1.000000, 1, 50};
				begin2[] = {"\breakingpoint_jsrs\sounds\P226SD_s2.wav", 1.000000, 1, 50};
				begin3[] = {"\breakingpoint_jsrs\sounds\P226SD_s3.wav", 1.000000, 0.9, 50};
				soundBegin[] = {"begin1", 0.34, "begin2", 0.33, "begin3", 0.33};
 			};
			reloadTime = 0.1;
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			dispersion = 0.002115;
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\M9_s1.wav", 1.394328, 1, 500};
				begin2[] = {"breakingpoint_jsrs\sounds\M9_s2.wav", 1.394328, 1, 500};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\P226SD_s1.wav", 1.000000, 1, 50};
				begin2[] = {"\breakingpoint_jsrs\sounds\P226SD_s2.wav", 1.000000, 1, 50};
				begin3[] = {"\breakingpoint_jsrs\sounds\P226SD_s3.wav", 1.000000, 0.9, 50};
				soundBegin[] = {"begin1", 0.34, "begin2", 0.33, "begin3", 0.33};
 			};
			soundContinuous = 0;
			dispersion = 0.002115;//dispersionChange
			reloadTime = 0.050000;
			//recoil = "recoil_auto_smg_01";
			//recoilProne = "recoil_auto_prone_smg_01";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 30; //Masschange, reduced.
			allowedSlots[] = {901};

			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_Mk12Sup", "BP_gemtech9", "BP_m9qd"};
				iconScale = 0.1;
			};

			class CowsSlot : SlotInfo
			{
				compatibleItems[] = {};
				iconScale = 0.1;
			};

			class PointerSlot : SlotInfo
			{
			    linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_PLight"};
				iconScale = 0.1;
			};
		};
    };

	class BP_m9Tac_WDL: BP_m9Tac
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\M9\m9_beretta_wdl_co.paa"};
	};

	class BP_m9Tac_DES: BP_m9Tac
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\M9\m9_beretta_des_co.paa"};
	};

	class BP_m9Tac_URB: BP_m9Tac
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\M9\m9_beretta_urb_co.paa"};
	};

	class BP_SW45 : Pistol_Base_F
	{
		scope = 2;
		magazines[] = {"BP_6Rnd_45_Mag", "BP_6Rnd_45JHP_Mag", "BP_6Rnd_GreenFlare", "BP_6Rnd_RedFlare"};
		model = "breakingpoint_weapons\models\SW45\BP_SW45.p3d";
		picture = "\breakingpoint_weapons\icons\gear_sw45_rifle_x_ca.paa";
		displayName = "Smith and Wesson .45";
		descriptionUse = "Smith and Wesson .45";
		descriptionshort = ".45 Revolver";
		changeFiremodeSound[] = {};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\pistol_heavy_01\reload", 0.300000, 1, 50};
		inertia = 0.110000; //Inertiachange, increased.
		recoil = "recoil_pistol_acpc2";
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";

 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\Python_s1.wav", 1.194328, 1, 900};
				begin2[] = {"breakingpoint_jsrs\sounds\Python_s2.wav", 1.194328, 1, 900};
				begin3[] = {"breakingpoint_jsrs\sounds\Python_s3.wav", 1.194328, 1, 900};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};
			//recoil = "recoil_pistol_heavy";
			//recoilProne = "recoil_prone_pistol_heavy";
			dispersion = 0.003450;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 30; //Masschange, reduced.
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class PointerSlot : SlotInfo
			{
			    linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
		};
	};

	class BP_SW45_WDL : BP_SW45
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\SW45\revolver_wdl_co.paa"};
	};

	class BP_SW45_DES : BP_SW45
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\SW45\revolver_des_co.paa"};
	};

	class BP_SW45_URB : BP_SW45
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\SW45\revolver_urb_co.paa"};
	};

	class BP_Rhino : hgun_Pistol_heavy_02_F
	{
		scope = 2;
		maxZeroing = 200;
		displayName = "Chiappa Rhino 44";
		descriptionUse = "Chiappa Rhino 44";
		picture = "\breakingpoint_weapons\icons\gear_rhino_rifle_x_ca.paa";
		descriptionshort = ".44 Magnum Revolver";
		magazines[] = {"BP_6Rnd_44Mag", "BP_6Rnd_GreenFlare", "BP_6Rnd_RedFlare"};
		changeFiremodeSound[] = {};
		inertia = 0.120000; //Inertiachange, increased.
		recoil = "recoil_pistol_acpc2";
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\Anac_s1.wav", 1.094328, 1, 1500};
				begin2[] = {"breakingpoint_jsrs\sounds\Anac_s2.wav", 1.094328, 1, 1500};
				begin3[] = {"breakingpoint_jsrs\sounds\Anac_s3.wav", 1.094328, 1, 1500};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};
			//recoil = "recoil_pistol_heavy";
			//recoilProne = "recoil_prone_pistol_heavy";
			dispersion = 0.003250;//dispersionChange
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 30; //Masscahnge, reduced.
			allowedSlots[] = {901};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				displayName = "$STR_A3_CowsSlot0";
				compatibleItems[] = {"optic_Yorris", "optic_MRD"};
				iconScale = 0.1;
			};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class PointerSlot : SlotInfo
			{
			    linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
		};
	};

	class BP_SW44 : hgun_Pistol_heavy_02_F
	{
		scope = 2;
		maxZeroing = 200;
		model = "breakingpoint_weapons\models\SW44\BP_SW44.p3d";
		picture = "\breakingpoint_weapons\icons\gear_sw500_rifle_x_ca.paa";
		displayName = "Smith and Wesson Model 500";
		descriptionUse = "Smith and Wesson Model 500";
		descriptionshort = ".500 Magnum Revolver";
		magazines[] = {"BP_5Rnd_500Mag", "BP_6Rnd_GreenFlare", "BP_6Rnd_RedFlare"};
		reloadAction = "GestureReloadPistolHeavy02";
		drySound[] = {"A3\Sounds_F\weapons\pistol_heavy_01\dry", 0.358107, 1, 120};
		changeFiremodeSound[] = {};
		inertia = 0.200000; //Inertiachange, reduced.
		recoil = "recoil_pistol_zubr"; //Recoilchange
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";

 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\Anac_s1.wav", 1.094328, 1, 1900};
				begin2[] = {"breakingpoint_jsrs\sounds\Anac_s2.wav", 1.094328, 1, 1900};
				begin3[] = {"breakingpoint_jsrs\sounds\Anac_s3.wav", 1.094328, 1, 1900};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};
			//recoil = "recoil_single_gm6";
			//recoilProne = "recoil_single_gm6";
			dispersion = 0.001450;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 35; //Masscahnge, reduced.
			allowedSlots[] = {901};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				displayName = "$STR_A3_CowsSlot0";
				compatibleItems[] = {"BP_M8"};
				iconScale = 0.1;
			};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class PointerSlot : SlotInfo
			{
			    linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
		};

		linkedAttach[] = {"BP_M8"};
	};

	class BP_SW44_WDL : BP_SW44
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\SW45\revolver_wdl_co.paa"};
	};

	class BP_SW44_DES : BP_SW44
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\SW45\revolver_des_co.paa"};
	};

	class BP_SW44_URB : BP_SW44
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\SW45\revolver_urb_co.paa"};
	};

	class BP_SW44S : BP_SW44 {};

	class BP_TranQPistol: Pistol_Base_F
	{
	    scope = 2;
		model = "\breakingpoint_weapons\models\Val1911\BP_Val1911.p3d";
		picture = "\breakingpoint_weapons\icons\gear_1911t_rifle_x_ca.paa";
		displayName = "Custom 1911 TranQ Pistol";
		weaponSoundEffect = "DefaultHandgun";
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.223872, 1, 20};
		changeFiremodeSound[] = {};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\Pistols\pistol_reload", 0.300000, 1, 50};
		DescriptionShort = "Specialized 1911 with Tranquillizer Attachment <br/> Press F to cycle fire modes";
		magazines[] = {"BP_7Rnd_45acp", "BP_7Rnd_45JHP", "BP_6Rnd_GreenFlare", "BP_6Rnd_RedFlare"};
		inertia = 0.110000; //Inertiachange, increased.
		recoil = "recoil_pistol_p07";
		modes[] = {"Single"};
		muzzles[] = {"this", "TranQ"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";

 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\M1911Old_s1.wav", 1.394328, 1, 300};
				begin2[] = {"breakingpoint_jsrs\sounds\M1911Old_s2.wav", 1.394328, 1.14, 300};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\1911snake_s1.wav", 1.140000, 1, 30};
				begin2[] = {"\breakingpoint_jsrs\sounds\1911snake_s1.wav", 0.9700000, 0.85, 30};
				begin3[] = {"\breakingpoint_jsrs\sounds\1911snake_s2.wav", 0.970000, 1, 30};
				begin4[] = {"\breakingpoint_jsrs\sounds\1911snake_s3.wav", 0.990000, 0.90, 30};
				soundBegin[] = {"begin1", 0.25000, "begin2", 0.25000, "begin3", 0.25000, "begin4", 0.25000};
 			};
			reloadTime = 0.004;
			//recoil = "recoil_pistol_light";
			//recoilProne = "recoil_prone_pistol_light";
			dispersion = 0.002450;
		};
		class TranQ: UGL_F
		{
			magazines[] = {"BP_15Rnd_9x21_Rubber"};
			displayName = "TranQ";
			reloadMagazineSound[] = {"A3\sounds_f\weapons\Reloads\flaregun_reload", 0.300000, 2.0, 50};
			drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.223872, 1, 20};
			modes[] = {"Single"};
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class BaseSoundModeType
				{
					closure1[] = {};
					soundClosure[] = {};
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"breakingpoint_jsrs\sounds\M4SD_s1.wav", 0.704328, 1, 300};
					begin2[] = {"breakingpoint_jsrs\sounds\M4SD_s1.wav", 0.704328, 0.87, 300};
					soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
				};
			};
			dispersion = 0.002000;
			magazineReloadTime = 0;
			autoReload = 0;
			reloadTime = 0.100000;
			optics = 1;
			modelOptics = "-";
			cameraDir = "";
			memoryPointCamera = "eye";
			opticsZoomMin = 0.375000;
			opticsZoomMax = 1.100000;
			opticsZoomInit = 0.750000;
			weaponInfoType = "RscWeaponZeroing";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 30; //Masscahnge, reduced.
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_gemtech45"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class PointerSlot : SlotInfo
			{
			    linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
		};
	};

	class BP_TranQPistol_WDL: BP_TranQPistol
	{
		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Val1911\BP_Val1911_wdl.paa", "breakingpoint_weapons\textures\Val1911\bizon_wdl_co.paa", , "breakingpoint_weapons\textures\Val1911\aks74u_silencer_wdl_co.paa"};
	};

	class BP_TranQPistol_DES: BP_TranQPistol
	{
		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Val1911\BP_Val1911_des.paa", "breakingpoint_weapons\textures\Val1911\bizon_des_co.paa", , "breakingpoint_weapons\textures\Val1911\aks74u_silencer_des_co.paa"};
	};

	class BP_TranQPistol_URB: BP_TranQPistol
	{
		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Val1911\BP_Val1911_urb.paa", "breakingpoint_weapons\textures\Val1911\bizon_urb_co.paa", , "breakingpoint_weapons\textures\Val1911\aks74u_silencer_urb_co.paa"};
	};

	class BP_FNPTac45: hgun_pistol_heavy_01_F
	{
		scope = 2;
		maxZeroing = 200;
		model = "\A3\Weapons_F_EPA\Pistols\Pistol_heavy_01\Pistol_heavy_01_F.p3d";
		picture = "\breakingpoint_weapons\icons\gear_fnp_rifle_x_ca.paa";
		magazines[] = {"BP_15Rnd_45JHP", "BP_12Rnd_45JHP", "BP_7Rnd_45acp", "BP_7Rnd_45JHP", "BP_6Rnd_GreenFlare", "BP_6Rnd_RedFlare"};
		displayname = "FNP Tac45";
		descriptionShort = "Custom high capacity .45 pistol with optic mount and Osprey 45 Suppressor";
		opticsZoomMin = 0.275000;
		opticsZoomMax = 1.100000;
		opticsZoomInit = 0.750000;
		inertia = 0.080000;
		recoil = "recoil_pistol_acpc2";
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\FNP_s1.wav", 1.594328, 1, 300};
				begin2[] = {"breakingpoint_jsrs\sounds\FNP_s2.wav", 1.594328, 1, 300};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\1911snake_s1.wav", 1.140000, 1, 40};
				begin2[] = {"\breakingpoint_jsrs\sounds\1911snake_s1.wav", 0.9700000, 0.85, 40};
				begin3[] = {"\breakingpoint_jsrs\sounds\1911snake_s2.wav", 0.970000, 1, 40};
				begin4[] = {"\breakingpoint_jsrs\sounds\1911snake_s3.wav", 0.990000, 0.90, 40};
				soundBegin[] = {"begin1", 0.25000, "begin2", 0.25000, "begin3", 0.25000, "begin4", 0.25000};
 			};
			reloadTime = 0.09;//reloadtimeChange
			dispersion = 0.002300;//dispersionChange
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 30; //Masscahnge, reduced.
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_gemtech45", "BP_suppr9"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				displayName = "$STR_A3_CowsSlot0";
				compatibleItems[] = {"optic_Yorris", "optic_MRD"};
				iconScale = 0.1;
			};
			class PointerSlot : SlotInfo
			{
			    linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
		};
		//reloadTime = 0.100000;
		//dispersion = 0.001800;
		changeFiremodeSound[] = {};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\Reloads\new_pistols", 0.400000, 1, 10};
		linkedAttach[] = {"BP_suppr9", "optic_MRD"};
    };

	class BP_Uzi: Pistol_Base_F
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\Uzi\BP_Uzi.p3d";
		picture = "\breakingpoint_weapons\icons\gear_uzi_rifle_x_ca.paa";
		displayName = "Micro Uzi";
		descriptionUse = "Micro Uzi";
		changeFiremodeSound[] = {};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\Reloads\PDW2000_reload_2", 0.400000, 1, 10};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
	    magazines[] = {"BP_30Rnd_9x21_Mag", "BP_33Rnd_9x19OVP", "BP_16Rnd_9x21_Mag", "BP_33Rnd_9x19", "BP_17Rnd_9x19_SD", "BP_15Rnd_9x19_M9", "BP_15Rnd_9x19OVP", "BP_6Rnd_GreenFlare", "BP_6Rnd_RedFlare"};
		descriptionShort = "Compact 9mm sub machinegun";
		inertia = 0.150000; //Inertiacahnge, increased.
		recoil = "recoil_pdw";
		modes[] = {"Single", "FullAuto"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\Glock_s1.wav", 1.394328, 1, 400};
				begin2[] = {"breakingpoint_jsrs\sounds\Glock_s2.wav", 1.394328, 1, 400};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\VSS_s1.wav", 1.0, 1, 50};
				begin2[] = {"\breakingpoint_jsrs\sounds\VSS_s2.wav", 1.0, 1, 50};
				begin3[] = {"\breakingpoint_jsrs\sounds\VSS_s3.wav", 1.0, 1, 50};
				begin4[] = {"\breakingpoint_jsrs\sounds\VSS_s4.wav", 1.0, 1, 50};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.250000, "begin4", 0.2500000};
 			};
			reloadTime = 0.1;
			//recoil = "recoil_single_pdw";
			//recoilProne = "recoil_single_prone_pdw";
			dispersion = 0.004450;
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";

 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\Glock_s1.wav", 1.394328, 1, 400};
				begin2[] = {"breakingpoint_jsrs\sounds\Glock_s2.wav", 1.394328, 1, 400};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\VSS_s1.wav", 1.0, 1, 50};
				begin2[] = {"\breakingpoint_jsrs\sounds\VSS_s2.wav", 1.0, 1, 50};
				begin3[] = {"\breakingpoint_jsrs\sounds\VSS_s3.wav", 1.0, 1, 50};
				begin4[] = {"\breakingpoint_jsrs\sounds\VSS_s4.wav", 1.0, 1, 50};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.250000, "begin4", 0.2500000};
 			};
			soundContinuous = 0;
			dispersion = 0.004450;//dispersionChange
			reloadTime = 0.050000;
			//recoil = "recoil_auto_pdw";
			//recoilProne = "recoil_auto_prone_pdw";
		};
        class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 35; //Masschange, reduced.
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_Mk12Sup", "BP_gemtech9", "BP_m9qd"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class PointerSlot : SlotInfo
			{
			    linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight"};
				iconScale = 0.1;
			};
		};
    };

	class BP_Uzi_WDL: BP_Uzi
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Uzi\micro_wdl_co.paa"};
	};

	class BP_Uzi_DES: BP_Uzi
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Uzi\micro_des_co.paa"};
	};

	class BP_Uzi_URB: BP_Uzi
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Uzi\micro_urb_co.paa"};
	};

	class BP_SA61: Pistol_Base_F
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\SA61\BP_SA61.p3d";
		picture = "\breakingpoint_weapons\icons\gear_sa61_rifle_x_ca.paa";
		displayName = "Skorpion vz61";
		descriptionUse = "Skorpion vz61";
		changeFiremodeSound[] = {};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\Reloads\PDW2000_reload_2", 0.400000, 1, 10};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
	    magazines[] = {"BP_20Rnd_765x17", "BP_7Rnd_765x17", "BP_6Rnd_GreenFlare", "BP_6Rnd_RedFlare"};
		descriptionShort = "Compact 7.65x17mm sub machinegun";
		inertia = 0.130000; //Inertiachange, increased.
		recoil = "recoil_pdw"; //recoilchange
		modes[] = {"Single", "FullAuto"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"A3\Sounds_F\weapons\SMG_02\SMG_02_st_1b", 1.584893, 1, 500};
				begin2[] = {"A3\Sounds_F\weapons\SMG_02\SMG_02_st_2b", 1.584893, 1, 500};
				begin3[] = {"A3\Sounds_F\weapons\SMG_02\SMG_02_st_3b", 1.584893, 1, 500};
				soundBegin[] = {"begin1", 0.330000, "begin2", 0.330000, "begin3", 0.340000};
 			};
			soundContinuous = 0;
			dispersion = 0.010000;
			reloadTime = 0.050000;
			//recoil = "recoil_auto_smg_01";
			//recoilProne = "recoil_auto_prone_smg_01";
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"A3\Sounds_F\weapons\SMG_02\SMG_02_st_1b", 1.584893, 1, 500};
				begin2[] = {"A3\Sounds_F\weapons\SMG_02\SMG_02_st_2b", 1.584893, 1, 500};
				begin3[] = {"A3\Sounds_F\weapons\SMG_02\SMG_02_st_3b", 1.584893, 1, 500};
				soundBegin[] = {"begin1", 0.330000, "begin2", 0.330000, "begin3", 0.340000};
 			};
			soundContinuous = 0;
			dispersion = 0.010000;
			reloadTime = 0.050000;
			//recoil = "recoil_auto_pdw";
			//recoilProne = "recoil_auto_prone_pdw";
		};
        class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 35; //Masscahnge, reduced.
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class PointerSlot : SlotInfo
			{
			    linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
		};
    };

	class BP_SA61_WDL: BP_SA61
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Uzi\micro_wdl_co.paa"};
	};

	class BP_SA61_DES: BP_SA61
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Uzi\micro_des_co.paa"};
	};

	class BP_SA61_URB: BP_SA61
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Uzi\micro_urb_co.paa"};
	};

	class BP_PPK : Pistol_Base_F
	{
		scope = 2;
		model = "breakingpoint_weapons\models\PPK\BP_PPK.p3d";
		picture = "\breakingpoint_weapons\icons\gear_ppk_rifle_x_ca.paa";
		displayName = "Walther PPK";
		descriptionUse = "Walther PPK";
		reloadMagazineSound[] = {"A3\sounds_f\weapons\Reloads\new_pistols", 0.400000, 1, 10};
	    magazines[] = {"BP_7Rnd_765x17"};
		changeFiremodeSound[] = {};
	    descriptionShort = "Compact German pistol";
		inertia = 0.050000;
		recoil = "recoil_pistol_p07";
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";

 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\M4SD_s1.wav", 1.094328, 1, 200};
				begin2[] = {"breakingpoint_jsrs\sounds\M4SD_s2.wav", 1.094328, 1, 200};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
 			};
			reloadTime = 0.1;
			dispersion = 0.003450;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 30;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class PointerSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				displayName = "$STR_A3_PointerSlot0";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
		};
	};

	class BP_PPK_WDL : BP_PPK
	{
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Makarov\makarov_wdl_co.paa", "breakingpoint_weapons\textures\M9\m9_beretta_wdl_co.paa"};
	};

	class BP_PPK_DES : BP_PPK
	{
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Makarov\makarov_des_co.paa", "breakingpoint_weapons\textures\M9\m9_beretta_des_co.paa"};
	};

	class BP_PPK_URB : BP_PPK
	{
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\Makarov\makarov_urb_co.paa", "breakingpoint_weapons\textures\M9\m9_beretta_urb_co.paa"};
	};

	class BP_1911MDes: hgun_ACPC2_F
	{
	    scope = 2;
		model = "\A3\Weapons_F_Beta\Pistols\ACPC2\ACPC2_F.p3d";
		picture = "\breakingpoint_weapons\icons\gear_1911m_rifle_x_ca.paa";
		magazines[] = {"BP_7Rnd_45acp", "BP_7Rnd_45JHP", /*"BP_6Rnd_45_Mag", "BP_6Rnd_45JHP_Mag",*/ "BP_6Rnd_GreenFlare", "BP_6Rnd_RedFlare"};
		displayname = "1911 Desert Camo Modern";
		descriptionShort = "Modern 1911 variant.";
		changeFiremodeSound[] = {};
		reloadMagazineSound[] = {"A3\Sounds_F\weapons\Pistols\p07_reload", 0.562341, 1, 30};
		inertia = 0.0900000; //Inertiachange, reduced.
		linkedAttach[] = {"BP_Gemtech45"};
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";

 				closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\FNP_s1.wav", 1.594328, 1, 400};
				begin2[] = {"breakingpoint_jsrs\sounds\FNP_s2.wav", 1.594328, 1, 400};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\1911snake_s1.wav", 1.140000, 1, 30};
				begin2[] = {"\breakingpoint_jsrs\sounds\1911snake_s1.wav", 0.9700000, 0.85, 30};
				begin3[] = {"\breakingpoint_jsrs\sounds\1911snake_s2.wav", 0.970000, 1, 30};
				begin4[] = {"\breakingpoint_jsrs\sounds\1911snake_s3.wav", 0.990000, 0.90, 30};
				soundBegin[] = {"begin1", 0.25000, "begin2", 0.25000, "begin3", 0.25000, "begin4", 0.25000};
 			};
			//recoil = "recoil_pistol_heavy";
			//recoilProne = "recoil_prone_pistol_heavy";
			reloadTime = 0.045000;
			dispersion = 0.002500;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 27; //Masschange, reduced.
			allowedSlots[] = {901};
			class CowsSlot : SlotInfo
			{
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_gemtech45", "BP_suppr9"};
				iconScale = 0.1;
			};
		};
	};

//-----------------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//CLASS REDFINES WEAPONS RIFLES|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-----------------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


	class BP_ScarH: Rifle_Base_F_BP
	{
		scope = 2;
		maxZeroing = 1600;
		displayName = "FN-SCAR Heavy";
		model = "\breakingpoint_weapons\models\SCAR\BP_ScarH.p3d";
		descriptionShort = "7.62mm Modular Battle Rifle";
		descriptionUse = "SCAR-H with 20in. barrel, fires 7.62x51mm NATO round.";
		picture = "\breakingpoint_weapons\icons\gear_scar_rifle_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Rifles\MX\data\Anim\MX_dmr.rtm"};
		magazines[] = {"BP_20Rnd_762x51_BPMag", "BP_20Rnd_762x51_M80A1", "BP_20Rnd_762x51_Mk316Mod0", "BP_10Rnd_762mk316_Mag", "BP_10Rnd_762x51_Mag", "BP_10Rnd_762m80a1_Mag", "BP_30Rnd_762x51_BPMag", "BP_30Rnd_762x51_M80A1", "BP_30Rnd_762x51_Mk316Mod0" /*", BP_5Rnd_762x51_Mag", "BP_5Rnd_762mk316_Mag", "BP_5Rnd_762m80a1_Mag"*/};
		changeFiremodeSound[] = {};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_ebr", 0.430957, 1, 30};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		inertia = 0.350000;
		initSpeed = -1.07;
		recoil = "recoil_ebr";
		modes[] = {"Single", "FullAuto", "far_optic1"};
		bullet1[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Metal_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet2[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Metal_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet3[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Metal_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet4[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Metal_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet5[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Dirt_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet6[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Dirt_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet7[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Dirt_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet8[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Dirt_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet9[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Grass_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet10[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Grass_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet11[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Grass_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet12[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Grass_4.ogg",
			2.0099001,
			1,
			10
		};
		soundBullet[]=
		{
			"bullet1",
			0.079999998,
			"bullet2",
			0.083999999,
			"bullet3",
			0.083999999,
			"bullet4",
			0.083999999,
			"bullet5",
			0.093000002,
			"bullet6",
			0.093000002,
			"bullet7",
			0.074000001,
			"bullet8",
			0.074000001,
			"bullet9",
			0.083999999,
			"bullet10",
			0.085000001,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		class Single : Mode_SemiAuto
		{
			sounds[]=
			{
				"standardsound",
				"silencedsound"
			};
			class basesoundmodetype
			{
				soundclosure[]={};
			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					//"jsrs_rifle_shake_soundset",
					"jsrs_ScarH_shot_soundset",
					"jsrs_ScarH_shot2_soundset",
					"jsrs_ScarH_shell_soundset",
					"jsrs_9x3mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
 			{
				soundsetshot[]=
				{
					"jsrs_ScarH_shot_silenced_soundset",
					"jsrs_ScarH_shell_soundset",
					"jsrs_7x62mm_SD_reflector_1"
				};
 			};
			/*sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";

 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType //reduce pitch difference between shots
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\HK417_s1.wav", 0.812538, 0.85, 1000};
				begin2[] = {"breakingpoint_jsrs\sounds\HK417_s2.wav", 0.812538, 0.97, 1000};
				begin3[] = {"breakingpoint_jsrs\sounds\HK417_s3.wav", 0.812538, 1.1, 1000};
				begin4[] = {"breakingpoint_jsrs\sounds\HK417_s1.wav", 0.812538, 0.95, 1000};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 1, 150};
				begin2[] = {"\breakingpoint_jsrs\sounds\HK417SD_s2.wav", 1.000000, 1, 150};
				begin3[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 0.9, 150};
				begin4[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 0.8, 150};
				begin5[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 1.1, 150};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};*/
			dispersion = 0.000737;
			soundContinuous = 0;
			reloadTime = 0.096;//625rnds/min
			//recoil = "recoil_single_mx";
			//recoilProne = "recoil_single_prone_mx";
			minRange = 500;
			minRangeProbab = 1.000000;
			midRange = 750;
			midRangeProbab = 1.000000;
			maxRange = 950;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 950;
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[]=
			{
				"standardsound",
				"silencedsound"
			};
			class basesoundmodetype
			{
				soundclosure[]={};
			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					//"jsrs_rifle_shake_soundset",
					"jsrs_ScarH_shot_soundset",
					"jsrs_ScarH_shot2_soundset",
					"jsrs_ScarH_shell_soundset",
					"jsrs_9x3mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
 			{
				soundsetshot[]=
				{
					//"jsrs_rifle_shake_soundset",
					"jsrs_ScarH_shot_silenced_soundset",
					"jsrs_ScarH_shell_soundset",
					"jsrs_7x62mm_SD_reflector_1"
				};
 			};
			dispersion = 0.000737;
			soundContinuous = 0;
			reloadTime = 0.096;
			//recoil = "recoil_auto_mx";
			//recoilProne = "recoil_auto_prone_mx";
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 500;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.000001;
			aiRateOfFireDistance = 500;
		};
		class far_optic1: Single
		{
			showToPlayer = 0;
			minRange = 950;
			minRangeProbab = 1.000000;
			midRange = 1200;
			midRangeProbab = 1.000000;
			maxRange = 1600;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.0;
			aiRateOfFireDistance = 1600;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 75; //Masscahnge, Reduced.
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_B", "BP_300Sup"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "optic_MRCO", "optic_Arco", "BP_optic_ACOG",  "BP_compm4s", "BP_OldComp"};
				iconScale = 0.1;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_AFG", "BP_flashlight"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris", "BP_Harris2"};
				iconScale = 0.1;
			};
        };

		linkedAttach[] = {"BP_M3A", "BP_flashlight"};
		chanceAttach[] =
        {
			{"BP_L14X",0.01},
			{"BP_Harris",0.03},
			{"BP_AFG",0.04},
			{"BP_muzzle_snds_B",0.01},
			{"",0.50}
        };
	};

	class BP_ScarH_WDL: BP_ScarH
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\762Sup\scar_wdl_co.paa"};
	};

	class BP_ScarH_DES: BP_ScarH
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\762Sup\scar_des_co.paa"};
	};

	class BP_ScarH_URB: BP_ScarH
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\762Sup\scar_urb_co.paa"};
	};

	class BP_ScarH_AI: BP_ScarH
	{
	    scope = 2;
		modes[] = {"Single", "FullAuto", "far_optic1"};
		magazines[] = {"BP_500Rnd_762x51_AI"};
		inertia = 0.0000;
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefX = 0.100000;
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\HK417_s1.wav", 0.812538, 0.8, 1200};
				begin2[] = {"breakingpoint_jsrs\sounds\HK417_s2.wav", 0.812538, 0.97, 1200};
				begin3[] = {"breakingpoint_jsrs\sounds\HK417_s3.wav", 0.812538, 1.2, 1200};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 1, 700};
				begin2[] = {"\breakingpoint_jsrs\sounds\HK417SD_s2.wav", 1.000000, 1, 700};
				begin3[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 0.9, 700};
				begin4[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 0.8, 700};
				begin5[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 1.1, 700};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};
			dispersion = 0.000737;
			soundContinuous = 0;
			reloadTime = 0.070000;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			minRange = 500;
			minRangeProbab = 1.000000;
			midRange = 750;
			midRangeProbab = 1.000000;
			maxRange = 950;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 950;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\HK417_s1.wav", 0.812538, 0.8, 1200};
				begin2[] = {"breakingpoint_jsrs\sounds\HK417_s2.wav", 0.812538, 0.97, 1200};
				begin3[] = {"breakingpoint_jsrs\sounds\HK417_s3.wav", 0.812538, 1.2, 1200};
				begin4[] = {"breakingpoint_jsrs\sounds\HK417_s1.wav", 0.812538, 1.0, 1200};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 1, 700};
				begin2[] = {"\breakingpoint_jsrs\sounds\HK417SD_s2.wav", 1.000000, 1, 700};
				begin3[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 0.9, 700};
				begin4[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 0.8, 700};
				begin5[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 1.1, 700};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};
			dispersion = 0.001237;
			soundContinuous = 0;
			reloadTime = 0.070000;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 500;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.000001;
			aiRateOfFireDistance = 500;
		};
		class far_optic1: Single
		{
			showToPlayer = 0;
			minRange = 950;
			minRangeProbab = 1.000000;
			midRange = 1200;
			midRangeProbab = 1.000000;
			maxRange = 1600;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.0;
			aiRateOfFireDistance = 1600;
		};
	};

	class BP_AR10: Rifle_Base_F_BP
	{
		scope = 2;
		maxZeroing = 1600;
		model = "\breakingpoint_weapons\models\M16\BP_AR10.p3d";
		displayName = "AR10 Battle Rifle";
		magazines[] = {"BP_20Rnd_762x51_BPMag", "BP_20Rnd_762x51_M80A1", "BP_20Rnd_762x51_Mk316Mod0", "BP_10Rnd_762mk316_Mag", "BP_10Rnd_762x51_Mag", "BP_10Rnd_762m80a1_Mag", "BP_30Rnd_762x51_BPMag", "BP_30Rnd_762x51_M80A1", "BP_30Rnd_762x51_Mk316Mod0" /*", BP_5Rnd_762x51_Mag", "BP_5Rnd_762mk316_Mag", "BP_5Rnd_762m80a1_Mag"*/};
		picture = "\breakingpoint_weapons\icons\gear_ar10_rifle_x_ca.paa";
		descriptionShort = "7.62mm Battle Rifle";
		descriptionUse = "AR10 Battle Rifle";
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\m60e.rtm"};
		inertia = 0.370000; //Inertiachange, increased.
		recoil = "recoil_dmr_01";
		initSpeed = -0.94;//old, shorter barrel = less muzzle velocity
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Firemode_ugl",0.41622776,1.2,7};
		reloadAction = "GestureReloadMX";
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_MX.wss", 0.31, 1, 30};
		modes[] = {"Single", "FullAuto", "far_optic1"};
		muzzles[] = {"this", "Butt"}; //must have
		bullet1[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Metal_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet2[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Metal_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet3[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Metal_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet4[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Metal_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet5[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Dirt_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet6[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Dirt_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet7[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Dirt_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet8[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Dirt_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet9[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Grass_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet10[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Grass_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet11[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Grass_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet12[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Grass_4.ogg",
			2.0099001,
			1,
			10
		};
		soundBullet[]=
		{
			"bullet1",
			0.079999998,
			"bullet2",
			0.083999999,
			"bullet3",
			0.083999999,
			"bullet4",
			0.083999999,
			"bullet5",
			0.093000002,
			"bullet6",
			0.093000002,
			"bullet7",
			0.074000001,
			"bullet8",
			0.074000001,
			"bullet9",
			0.083999999,
			"bullet10",
			0.085000001,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound};
			class basesoundmodetype
			{
				soundclosure[]={};
			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rahim_shot_soundset",
					"jsrs_rahim_shot2_soundset",
					"jsrs_rahim_shell_soundset",
					"jsrs_9x3mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
			reloadTime = 0.0857;
			dispersion = 0.002100; //Dispersionchange, increased.
			//recoil = "recoil_single_ebr";
			//recoilProne = "recoil_single_ebr";
			minRange = 700;
			minRangeProbab = 1.000000;
			midRange = 850;
			midRangeProbab = 1.000000;
			maxRange = 950;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 950;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[] = {StandardSound};
			class basesoundmodetype
			{
				soundclosure[]={};
			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rahim_shot_soundset",
					"jsrs_rahim_shot2_soundset",
					"jsrs_rahim_shell_soundset",
					"jsrs_9x3mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
			reloadTime = 0.0857;
			dispersion = 0.002100; //Dispersionchange, increased.
			//recoil = "recoil_auto_mx";
			//recoilProne = "recoil_auto_prone_mx";
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 350;
			midRangeProbab = 1.000000;
			maxRange = 700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 950;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class far_optic1: Single
		{
			showToPlayer = 0;
			minRange = 950;
			minRangeProbab = 1.000000;
			midRange = 1200;
			midRangeProbab = 1.000000;
			maxRange = 1600;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.0;
			aiRateOfFireDistance = 1600;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 80;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_Unertl8x", "BP_Unertl32x", "BP_EnfieldOptic2"};
				iconScale = 0.1;
			};
		    class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_CPad"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
		};

		chanceAttach[] =
        {
			{"BP_Unertl8x",0.05},
			{"BP_Harris",0.01},
			{"BP_CPad",0.04},
			{"",0.50}
        };
    };

	class BP_AR10_WDL: BP_AR10
	{
		hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4", "camo5"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\m16\ar10_wdl_co.paa", "breakingpoint_weapons\textures\m110\m110_acc_wdl_co.paa", "breakingpoint_weapons\textures\m16\m16a2_ironsights_wdl_co.paa", "breakingpoint_weapons\textures\spr\wpn_spr_wdl_co.paa", "breakingpoint_weapons\textures\svdk\svd_wdl_co.paa"};
	};

	class BP_AR10_DES: BP_AR10
	{
		hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4", "camo5"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\m16\ar10_des_co.paa", "breakingpoint_weapons\textures\m110\m110_acc_des_co.paa", "breakingpoint_weapons\textures\m16\m16a2_ironsights_des_co.paa", "breakingpoint_weapons\textures\spr\wpn_spr_des_co.paa", "breakingpoint_weapons\textures\svdk\svd_des_co.paa"};
	};

	class BP_AR10_URB: BP_AR10
	{
		hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4", "camo5"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\m16\ar10_urb_co.paa", "breakingpoint_weapons\textures\m110\m110_acc_urb_co.paa", "breakingpoint_weapons\textures\m16\m16a2_ironsights_urb_co.paa", "breakingpoint_weapons\textures\spr\wpn_spr_urb_co.paa", "breakingpoint_weapons\textures\svdk\svd_urb_co.paa"};
	};

	class BP_AR10_AI: BP_AR10
	{
		scope = 2;
		magazines[] = {"BP_500Rnd_762x51_AI"};
		inertia = 0.0000;
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefX = 0.100000;
		modes[] = {"Single", "FullAuto", "far_optic1"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";

 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\SVD_s1.wav", 1.322020, 0.6, 2200};
				begin2[] = {"\breakingpoint_jsrs\sounds\SVD_s2.wav", 1.322020, 0.5, 2200};
				begin3[] = {"\breakingpoint_jsrs\sounds\SVD_s1.wav", 1.222020, 0.5, 2200};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};
			reloadTime = 0.085000;
			dispersion = 0.001300;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			minRange = 700;
			minRangeProbab = 1.000000;
			midRange = 850;
			midRangeProbab = 1.000000;
			maxRange = 950;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 950;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";

 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\SVD_s1.wav", 1.322020, 0.6, 2200};
				begin2[] = {"\breakingpoint_jsrs\sounds\SVD_s2.wav", 1.322020, 0.5, 2200};
				begin3[] = {"\breakingpoint_jsrs\sounds\SVD_s1.wav", 1.222020, 0.5, 2200};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};
			reloadTime = 0.085000;
			dispersion = 0.001300;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 350;
			midRangeProbab = 1.000000;
			maxRange = 700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 950;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class far_optic1: Single {
			showToPlayer = 0;
			minRange = 950;
			minRangeProbab = 1.000000;
			midRange = 1200;
			midRangeProbab = 1.000000;
			maxRange = 1600;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.0;
			aiRateOfFireDistance = 1600;
		};
	};

	class BP_MXM: Rifle_Base_F_BP
	{
	    scope = 2;
		maxZeroing = 1600;
		displayName = "MX Marksman Rifle";
		descriptionUse = "Semi-auto MX marksman variant with longer barrel and improved accuracy."; //Descriptionchange
		model = "\A3\Weapons_F\Rifles\MX\MXM_F.p3d";
		picture = "\breakingpoint_weapons\icons\gear_mxm_rifle_x_ca.paa";
		magazines[] = {"BP_20Rnd_65x47_Lapua", "BP_30Rnd_65x39", "BP_30Rnd_65x39_SD", "BP_10Rnd_65x39", "BP_10Rnd_65x47_Lapua", "BP_10Rnd_65x39_SD"};
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Rifles\MX\data\Anim\MX_dmr.rtm"};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		reloadAction = "GestureReloadMXSniper";
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_MX.wss", 0.31, 1, 30};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\XMX_long_co.paa"};
		changeFiremodeSound[] = {};
		initSpeed = -1.08;
		inertia = 0.250000; //Inertiachagen, increased.
		recoil = "recoil_mxm";
		modes[] = {"Single"};
		class Single : Mode_SemiAuto {
			sounds[]=
			{
				"standardsound",
				"silencedsound"
			};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_MXM_shot_soundset",
					"jsrs_MXM_shot2_soundset",
					"jsrs_6x5mm_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_mxm_shot_silenced_soundset",
					"jsrs_6x5mm_SD_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			/*sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";

 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {closure1,0.5, closure2,0.5};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\MX-M_s1.wav", 1.412538, 1, 1000};
				begin2[] = {"breakingpoint_jsrs\sounds\MX-M_s2.wav", 1.412538, 1, 1000};
				begin3[] = {"breakingpoint_jsrs\sounds\MX-M_s3.wav", 1.412538, 1, 1000};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"A3\sounds_f\weapons\MX\Silencer_Mx_01.wss", 1.412538, 1, 120};//change to M4sd.wav? Change it to MX-SD!!!
				begin2[] = {"A3\sounds_f\weapons\MX\Silencer_Mx_02.wss", 1.412538, 1, 120};
				begin3[] = {"A3\sounds_f\weapons\MX\Silencer_Mx_03.wss", 1.412538, 1, 120};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};*/
			reloadTime = 0.096000; //reloadtimechange, reduced to match MX line.
			//recoil = "recoil_single_prone_mx";
			//recoilProne = "recoil_single_prone_mx";
			dispersion = 0.000620;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 80; //Masschange, reduced
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_H"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "optic_MRCO", "optic_Arco", "BP_optic_ACOG",  "BP_compm4s", "BP_OldComp"};
				iconScale = 0.1;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight"}; //removed bipod
				iconScale = 0.1;
			};
        };

		chanceAttach[] =
        {
			{"BP_M3A",0.03},
			{"BP_muzzle_snds_H",0.01},
			{"",0.50}
        };
    };

	class BP_MXM_WDL: BP_MXM
	{
	    hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\xmx_long_wdl_co.paa"};
	};

	class BP_MXM_DES: BP_MXM
	{
	    hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\xmx_long_des_co.paa"};
	};

	class BP_MXM_URB: BP_MXM
	{
	    hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\xmx_long_urb_co.paa"};
	};

	class BP_MX: Rifle_Base_F_BP
	{
	    scope = 2;
		maxZeroing = 600;
		displayName = "MX 6.5mm Rifle";
		descriptionUse = "Standard MX 6.5mm assault rifle"; //Descriptionchange
		model = "\A3\Weapons_F\Rifles\MX\MX_F.p3d";
		magazines[] = {"BP_20Rnd_65x47_Lapua", "BP_30Rnd_65x39", "BP_30Rnd_65x39_SD", "BP_10Rnd_65x39", "BP_10Rnd_65x47_Lapua", "BP_10Rnd_65x39_SD"};
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Rifles\MX\data\Anim\MX_afg.rtm"};
		picture = "\breakingpoint_weapons\icons\gear_mx_rifle_x_ca.paa";
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Firemode_ugl",0.41622776,1.2,7};
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\XMX_base_co.paa", "\breakingpoint_weapons\textures\MX\XMX_short_co.paa"};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		reloadAction = "GestureReloadMX";
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_MX.wss", 0.31, 1, 30};
		inertia = 0.220000; //Inertiachange, increased.
		recoil = "recoil_mx";
		modes[] = {"Single", "FullAuto"};

		class Single : Mode_SemiAuto
		{
			sounds[]=
			{
				"standardsound",
				"silencedsound"
			};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_MXM_shot_soundset",
					"jsrs_MXM_shot2_soundset",
					"jsrs_6x5mm_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_mxm_shot_silenced_soundset",
					"jsrs_6x5mm_SD_reflector_2"
				};
			};
			reloadTime = 0.096000;
			//recoil = "recoil_single_mx";
			//recoilProne = "recoil_single_prone_mx";
			dispersion = 0.001200;
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[]=
			{
				"standardsound",
				"silencedsound"
			};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_MXM_shot_soundset",
					"jsrs_MXM_shot2_soundset",
					"jsrs_6x5mm_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_mxm_shot_silenced_soundset",
					"jsrs_6x5mm_SD_reflector_2"
				};
			};
			reloadTime = 0.096000;
			dispersion = 0.001200;
			//recoil = "recoil_auto_mx";
			//recoilProne = "recoil_auto_prone_mx";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 75; //Masscahnge, reduced.
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_H"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "optic_MRCO", "optic_Arco", "BP_optic_ACOG",  "BP_compm4s", "BP_OldComp"};
				iconScale = 0.1;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight"};
				iconScale = 0.1;
			};
		};

		chanceAttach[] =
        {
			{"BP_optic_ACOG",0.04},
			{"BP_muzzle_snds_H",0.01},
			{"",0.50}
        };
	};

	class BP_MX_WDL: BP_MX
	{
	    hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\XMX_base_wdl_co.paa", "\breakingpoint_weapons\textures\MX\XMX_short_wdl_co.paa"};
	};

	class BP_MX_DES: BP_MX
	{
	    hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\XMX_base_des_co.paa", "\breakingpoint_weapons\textures\MX\XMX_short_des_co.paa"};
	};

	class BP_MX_URB: BP_MX
	{
	    hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\XMX_base_urb_co.paa", "\breakingpoint_weapons\textures\MX\XMX_short_urb_co.paa"};
	};

	class BP_MX_GL: Rifle_Base_F_BP
	{
	    scope = 2;
		maxZeroing = 600;
		displayName = "MX 6.5mm Rifle GL";
		descriptionUse = "MX 6.5mm Rifle GL";
		model = "\A3\Weapons_F\Rifles\MX\MX_GL_F.p3d";
		magazines[] = {"BP_20Rnd_65x47_Lapua", "BP_30Rnd_65x39", "BP_30Rnd_65x39_SD", "BP_10Rnd_65x39", "BP_10Rnd_65x47_Lapua", "BP_10Rnd_65x39_SD"};
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Rifles\MX\data\Anim\MX_gl.rtm"};
		picture = "\breakingpoint_weapons\icons\gear_mxgl_rifle_x_ca.paa";
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Firemode_ugl",0.41622776,1.2,7};
		reloadAction = "GestureReloadMX";
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_MX.wss", 0.31, 1, 30};
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\XMX_base_co.paa", "\breakingpoint_weapons\textures\MX\GLX_co.paa"};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		inertia = 0.310000; //Inertiacahnge, reduced.
		recoil = "recoil_mxm";
		muzzles[] = {"this", "GL_3GL_F"};
		modes[] = {"Single", "FullAuto"};

		class Single : Mode_SemiAuto
		{
			sounds[]=
			{
				"standardsound",
				"silencedsound"
			};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_MXM_shot_soundset",
					"jsrs_MXM_shot2_soundset",
					"jsrs_6x5mm_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_mxm_shot_silenced_soundset",
					"jsrs_6x5mm_SD_reflector_2",
				};
			};
			reloadTime = 0.096000;
			//recoil = "recoil_single_mx";
			//recoilProne = "recoil_single_prone_mx";
			dispersion = 0.001200;
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[]=
			{
				"standardsound",
				"silencedsound"
			};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_MXM_shot_soundset",
					"jsrs_MXM_shot2_soundset",
					"jsrs_6x5mm_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_mxm_shot_silenced_soundset",
					"jsrs_6x5mm_SD_reflector_2"
				};
			};
			reloadTime = 0.096000;
			dispersion = 0.001200;
			//recoil = "recoil_auto_mx";
			//recoilProne = "recoil_auto_prone_mx";
		};
		class GL_3GL_F: UGL_F
		{
			magazines[] = {"BP_1Rnd_40mm_Flashbang", "BP_1Rnd_HE_shell", "BP_3Rnd_HE_shell", "BP_UGL_FlareWhite", "BP_UGL_FlareRed", "BP_UGL_FlareGreen"};
			displayName = "$STR_A3_cfgweapons_3gl0";
			descriptionShort = "$STR_A3_cfgweapons_3gl1";
			useModelOptics = 0;
			useExternalOptic = 0;
			cameraDir = "OP_look";
			discreteDistance[] = {300, 450};
			//discreteDistanceCameraPoint[] = {"OP_eye_50", "OP_eye_75", "OP_eye_100", "OP_eye_150", "OP_eye_200", "OP_eye_250", "OP_eye_300", "OP_eye_350", "OP_eye_400"};
			discreteDistanceCameraPoint[] = {"OP_eye_50", "OP_eye_75"};
			discreteDistanceInitIndex = 1;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 90; //Masscahnge, reduced.
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_H"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "optic_MRCO", "optic_Arco", "BP_optic_ACOG",  "BP_compm4s", "BP_OldComp"};
				iconScale = 0.1;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight"};
				iconScale = 0.1;
			};
		};
	};

	class BP_MX_GL_WDL: BP_MX_GL
	{
	    hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\XMX_base_wdl_co.paa", "\breakingpoint_weapons\textures\MX\glx_wdl_co.paa"};
	};

	class BP_MX_GL_DES: BP_MX_GL
	{
	    hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\XMX_base_des_co.paa", "\breakingpoint_weapons\textures\MX\glx_des_co.paa"};
	};

	class BP_MX_GL_URB: BP_MX_GL
	{
	    hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\XMX_base_urb_co.paa", "\breakingpoint_weapons\textures\MX\glx_urb_co.paa"};
	};

	class BP_MXC: Rifle_Base_F_BP
	{
	    scope = 2;
		maxZeroing = 600;
		displayName = "MX 6.5mm Carbine";
		descriptionUse = "MX 6.5mm Carbine Rifle";
		model = "\A3\Weapons_F\Rifles\MX\MXC_F.p3d";
		magazines[] = {"BP_20Rnd_65x47_Lapua", "BP_30Rnd_65x39", "BP_30Rnd_65x39_SD", "BP_10Rnd_65x39", "BP_10Rnd_65x47_Lapua", "BP_10Rnd_65x39_SD"};
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Rifles\MX\data\Anim\MX_cqc.rtm"};
		picture = "\breakingpoint_weapons\icons\gear_mxc_rifle_x_ca.paa";
		reloadAction = "GestureReloadMXCompact";
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_MX.wss", 0.31, 1, 30};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\XMX_short_co.paa"};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Firemode_ugl",0.41622776,1.2,7};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		inertia = 0.190000; //Inertiachange, increased.
		initSpeed = -0.96;
		recoil = "recoil_mxc";
		modes[] = {"Single", "FullAuto"};
		class Single : Mode_SemiAuto
		{
			sounds[]=
			{
				"standardsound",
				"silencedsound"
			};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_MXM_shot_soundset",
					"jsrs_MXM_shot2_soundset",
					"jsrs_6x5mm_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_mxm_shot_silenced_soundset",
					"jsrs_6x5mm_SD_reflector_2"
				};
			};
			reloadTime = 0.096000;
			//recoil = "recoil_single_mx";
			//recoilProne = "recoil_single_prone_mx";
			dispersion = 0.001765;
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[]=
			{
				"standardsound",
				"silencedsound"
			};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_MXM_shot_soundset",
					"jsrs_MXM_shot2_soundset",
					"jsrs_6x5mm_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_mxm_shot_silenced_soundset",
					"jsrs_6x5mm_reflector_2"
				};
			};
			reloadTime = 0.096000;
			dispersion = 0.001765;
			//recoil = "recoil_auto_mx";
			//recoilProne = "recoil_auto_prone_mx";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 85;
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_h"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_AK_ACO","BP_OldComp", "BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG", "BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS"};
				iconScale = 0.1;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight"};
				iconScale = 0.1;
			};
		};
	};

	class BP_MXC_WDL: BP_MXC
	{
	    hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\XMX_short_wdl_co.paa"};
	};

	class BP_MXC_DES: BP_MXC
	{
	    hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\XMX_short_des_co.paa"};
	};

	class BP_MXC_URB: BP_MXC
	{
	    hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\XMX_short_urb_co.paa"};
	};

	class BP_MX_black : BP_MX
	{
		displayName = "MX SpecOps";
		descriptionShort = "Customized MX Assault Rifle for special operations";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa", "\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_short_Black_co.paa"};
		picture = "\A3\Weapons_F_EPB\Rifles\MX_Black\Data\UI\gear_mx_rifle_black_X_CA.paa";
		magazines[] = {"BP_20Rnd_65x47_Lapua", "BP_30Rnd_65x39", "BP_30Rnd_65x39_SD", "BP_10Rnd_65x39", "BP_10Rnd_65x47_Lapua", "BP_10Rnd_65x39_SD"};
		changeFiremodeSound[] = {};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		linkedAttach[] = {"BP_muzzle_snds_H", "optic_hamr", "BP_flashlight"};
		chanceAttach[] =
        {
			{"BP_Harris",0.10},
			{"BP_L14X",0.05},
			{"",0.50}
        };
	};

	class BP_MX_black_WDL : BP_MX_black
	{
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\XMX_Base_Black_wdl_co.paa", "\breakingpoint_weapons\textures\MX\XMX_short_Black_wdl_co.paa"};
	};

	class BP_MX_black_DES : BP_MX_black
	{
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\XMX_Base_Black_des_co.paa", "\breakingpoint_weapons\textures\MX\XMX_short_Black_des_co.paa"};
	};

	class BP_MX_black_URB : BP_MX_black
	{
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\XMX_Base_Black_urb_co.paa", "\breakingpoint_weapons\textures\MX\XMX_short_Black_urb_co.paa"};
	};

	class BP_MXM_black : BP_MXM
	{
		displayName = "MXM SpecOps";
		descriptionShort = "Customized MXM DMR for special operations";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_long_Black_co.paa"};
		picture = "\A3\Weapons_F_EPB\Rifles\MX_Black\Data\UI\gear_mx_dmr_black_X_CA.paa";
		magazines[] = {"BP_20Rnd_65x47_Lapua", "BP_30Rnd_65x39", "BP_30Rnd_65x39_SD", "BP_10Rnd_65x39", "BP_10Rnd_65x47_Lapua", "BP_10Rnd_65x39_SD"};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		linkedAttach[] = {"BP_muzzle_snds_H", "BP_L14X"}; //removed bipod
	};

	class BP_MXM_black_WDL: BP_MXM_black
	{
	    hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\xmx_long_black_wdl_co.paa"};
	};

	class BP_MXM_black_DES: BP_MXM_black
	{
	    hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\xmx_long_black_des_co.paa"};
	};

	class BP_MXM_black_URB: BP_MXM_black
	{
	    hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\xmx_long_black_urb_co.paa"};
	};

	class BP_MK20: Rifle_Base_F_BP
	{
	    scope = 2;
		maxZeroing = 600;
		model = "\A3\Weapons_F_beta\Rifles\mk20\mk20_F.p3d";
		displayName = "FN F2000 Assault Rifle";
		descriptionUse = "FN F2000 Assault Rifle";
		picture = "\breakingpoint_weapons\icons\gear_mk20_rifle_x_ca.paa";
		descriptionShort = "5.56mm Modular Bullpup assault rifle";
		reloadAction = "GestureReloadMk20";
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Firemode_ugl",0.41622776,1.2,7};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\mk20\mk20_reload_final", 0.316228, 1, 30};
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F_beta\rifles\mk20\data\Anim\mk20.rtm"};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		magazines[] = {"BP_556x45_Stanag", "BP_556x45_Stanag_Tracer", "BP_556x45_StanagSD", "BP_556x45_StanagM855A1", "BP_556x45_StanagMK262", "BP_556old_Stanag", "BP_5Rnd_223_Mag", "BP_5Rnd_223BTHP_mag", "BP_556x45_Rubber"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\mx\mk20_co.paa"};
		inertia = 0.17; //Inertiachange, increased.
		recoil = "recoil_mk20";
		initSpeed = -0.97;
		modes[] = {"Single", "FullAuto"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\F2000_s1.wav", 1.412538, 1, 750};
				begin2[] = {"breakingpoint_jsrs\sounds\F2000_s2.wav", 1.412538, 1, 750};
				begin3[] = {"breakingpoint_jsrs\sounds\F2000_s3.wav", 1.412538, 1, 750};
				begin4[] = {"breakingpoint_jsrs\sounds\F2000_s4.wav", 1.412538, 1, 750};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18", 1.000000, 1, 100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19", 1.000000, 1, 100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11", 1.000000, 1, 100};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-12", 1.000000, 0.9, 100};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			reloadTime = 0.0705;
			dispersion = 0.001500;
			//recoil = "recoil_single_mk20";
			//recoilProne = "recoil_single_prone_mk20";
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";

 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\F2000_s1.wav", 1.212538, 1, 750};
				begin2[] = {"breakingpoint_jsrs\sounds\F2000_s2.wav", 1.212538, 1, 750};
				begin3[] = {"breakingpoint_jsrs\sounds\F2000_s3.wav", 1.212538, 1, 750};
				begin4[] = {"breakingpoint_jsrs\sounds\F2000_s4.wav", 1.212538, 1, 750};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18", 1.000000, 1, 100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19", 1.000000, 1, 100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11", 1.000000, 1, 100};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-12", 1.000000, 0.9, 100};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			soundContinuous = 0;
			reloadTime = 0.0705;
			dispersion = 0.001500;
			//recoil = "recoil_auto_mk20";
			//recoilProne = "recoil_auto_prone_mk20";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 75;
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_M12", "BP_muzzle_snds_M"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG", "BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS"};
				iconScale = 0.1;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight"};
				iconScale = 0.1;
			};
		};
	};

	class BP_MK20_WDL: BP_MK20
	{
	    hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\mk20_wdl_co.paa"};
	};

	class BP_MK20_DES: BP_MK20
	{
	    hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\mk20_des_co.paa"};
	};

	class BP_MK20_URB: BP_MK20
	{
	    hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\mk20_urb_co.paa"};
	};

	class BP_MK20_GL: Rifle_Base_F_BP
	{
	    scope = 2;
		maxZeroing = 600;
		model = "\A3\Weapons_F_beta\Rifles\mk20\Mk20_GL_F.p3d";
		displayName = "FN F2000 Assault Rifle GL";
		descriptionUse = "FN F2000 Assault Rifle GL";
		descriptionShort = "5.56mm Modular Bullpup assault rifle";
		picture = "\breakingpoint_weapons\icons\gear_mk20gl_rifle_x_ca.paa";
		reloadAction = "GestureReloadMk20";
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Firemode_ugl",0.41622776,1.2,7};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\mk20\mk20_reload_final", 0.316228, 1, 30};
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F_beta\Rifles\MK20\Data\Anim\mk20G.rtm"};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		magazines[] = {"BP_556x45_Stanag", "BP_556x45_Stanag_Tracer", "BP_556x45_StanagSD", "BP_556x45_StanagM855A1", "BP_556x45_StanagMK262", "BP_556old_Stanag", "BP_5Rnd_223_Mag", "BP_5Rnd_223BTHP_mag", "BP_556x45_Rubber"};
		inertia = 0.230; //Inertiachange, increased.
		recoil = "recoil_mk20";
		initSpeed = -0.97;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\mx\mk20_co.paa"};
		muzzles[] = {"this", "EGLM"};
		modes[] = {"Single", "FullAuto"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\F2000_s1.wav", 1.412538, 1, 750};
				begin2[] = {"breakingpoint_jsrs\sounds\F2000_s2.wav", 1.412538, 1, 750};
				begin3[] = {"breakingpoint_jsrs\sounds\F2000_s3.wav", 1.412538, 1, 750};
				begin4[] = {"breakingpoint_jsrs\sounds\F2000_s4.wav", 1.412538, 1, 750};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18", 1.000000, 1, 100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19", 1.000000, 1, 100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11", 1.000000, 1, 100};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-12", 1.000000, 0.9, 100};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			reloadTime = 0.0705;
			dispersion = 0.001500;
			//recoil = "recoil_single_mk20";
			//recoilProne = "recoil_single_prone_mk20";
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";

 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\F2000_s1.wav", 1.212538, 1, 750};
				begin2[] = {"breakingpoint_jsrs\sounds\F2000_s2.wav", 1.212538, 1, 750};
				begin3[] = {"breakingpoint_jsrs\sounds\F2000_s3.wav", 1.212538, 1, 750};
				begin4[] = {"breakingpoint_jsrs\sounds\F2000_s4.wav", 1.212538, 1, 750};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18", 1.000000, 1, 100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19", 1.000000, 1, 100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11", 1.000000, 1, 100};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-12", 1.000000, 0.9, 100};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			soundContinuous = 0;
			reloadTime = 0.0705;
			dispersion = 0.001500;
			//recoil = "recoil_auto_mk20";
			//recoilProne = "recoil_auto_prone_mk20";
		};
		class EGLM: UGL_F
		{
			useModelOptics = 0;
			useExternalOptic = 0;
			cameraDir = "OP_look";
			discreteDistance[] = {300, 400, 500};
			magazines[] = {"BP_1Rnd_40mm_Flashbang", "BP_1Rnd_HE_shell", "BP_3Rnd_HE_shell", "BP_UGL_FlareWhite", "BP_UGL_FlareRed", "BP_UGL_FlareGreen"};
			//discreteDistanceCameraPoint[] = {"OP_eye", "OP_eye2", "OP_eye3", "OP_eye4"};
			discreteDistanceCameraPoint[] = {"OP_eye_50","OP_eye_75", "OP_eye_100"};
			discreteDistanceInitIndex = 1;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 85; //Masschange, reduced.
			allowedSlots[] = {901};

			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_M12", "BP_muzzle_snds_M"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG", "BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS"};
				iconScale = 0.1;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight"};
				iconScale = 0.1;
			};
		};
	};

	class BP_MK20_GL_WDL: BP_MK20_GL
	{
	    hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\mk20_wdl_co.paa"};
	};

	class BP_MK20_GL_DES: BP_MK20_GL
	{
	    hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\mk20_des_co.paa"};
	};

	class BP_MK20_GL_URB: BP_MK20_GL
	{
	    hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\mk20_urb_co.paa"};
	};

	class BP_MK20Spec: BP_MK20_GL
	{
	    displayName = "FN F2000 SpecOps";
		hiddenSelections[] = {};
		inertia = 0.22;
		linkedAttach[] = {"BP_Compm4s", "BP_flashlight", "BP_muzzle_snds_M"};
	};

	class BP_MK20Spec_WDL: BP_MK20Spec
	{
	    hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\mk20_spec_wdl_co.paa"};
	};

	class BP_MK20Spec_DES: BP_MK20Spec
	{
	    hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\mk20_spec_des_co.paa"};
	};

	class BP_MK20Spec_URB: BP_MK20Spec
	{
	    hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\mk20_spec_urb_co.paa"};
	};

	class BP_MK20C: Rifle_Base_F_BP
	{
	    scope = 2;
		maxZeroing = 600;
		model = "\A3\Weapons_F_beta\Rifles\mk20\Mk20_C_F.p3d";
		displayName = "FN F2000 Carbine Assault Rifle";
		descriptionUse = "FN F2000 Carbine Assault Rifle";
		descriptionShort = "5.56mm Modular Bullpup assault rifle";
		picture = "\breakingpoint_weapons\icons\gear_mk20_rifle_x_ca.paa";
		reloadAction = "GestureReloadMk20";
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Firemode_ugl",0.41622776,1.2,7};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\mk20\mk20_reload_final", 0.316228, 1, 30};
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F_beta\rifles\mk20\data\Anim\mk20.rtm"};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		magazines[] = {"BP_556x45_Stanag", "BP_556x45_Stanag_Tracer", "BP_556x45_StanagSD", "BP_556x45_StanagM855A1", "BP_556x45_StanagMK262", "BP_556old_Stanag", "BP_5Rnd_223_Mag", "BP_5Rnd_223BTHP_mag", "BP_556x45_Rubber"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\mx\mk20_co.paa"};
		inertia = 0.15;
		recoil = "recoil_mk20c";
		initSpeed = -0.93;
		modes[] = {"Single", "FullAuto"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";

 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\F2000_s1.wav", 1.412538, 1, 650};
				begin2[] = {"breakingpoint_jsrs\sounds\F2000_s2.wav", 1.412538, 1, 650};
				begin3[] = {"breakingpoint_jsrs\sounds\F2000_s3.wav", 1.412538, 1, 650};
				begin4[] = {"breakingpoint_jsrs\sounds\F2000_s4.wav", 1.412538, 1, 650};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18", 1.000000, 1, 90};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19", 1.000000, 1, 90};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11", 1.000000, 1, 90};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-12", 1.000000, 0.9, 90};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			reloadTime = 0.0705;
			dispersion = 0.001700;
			//recoil = "recoil_single_mk20";
			//recoilProne = "recoil_single_prone_mk20";
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\F2000_s1.wav", 1.212538, 1, 650};
				begin2[] = {"breakingpoint_jsrs\sounds\F2000_s2.wav", 1.212538, 1, 650};
				begin3[] = {"breakingpoint_jsrs\sounds\F2000_s3.wav", 1.212538, 1, 650};
				begin4[] = {"breakingpoint_jsrs\sounds\F2000_s4.wav", 1.212538, 1, 650};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18", 1.000000, 1, 90};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19", 1.000000, 1, 90};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11", 1.000000, 1, 90};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-12", 1.000000, 0.9, 90};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			soundContinuous = 0;
			reloadTime = 0.0705;
			dispersion = 0.001700;
			//recoil = "recoil_auto_mk20";
			//recoilProne = "recoil_auto_prone_mk20";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 70;
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_M12", "BP_muzzle_snds_M"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG", "BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS"};
				iconScale = 0.1;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight"};
				iconScale = 0.1;
			};
		};
	};

	class BP_MK20C_WDL: BP_MK20C
	{
	    hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\mk20_wdl_co.paa"};
	};

	class BP_MK20C_DES: BP_MK20C
	{
	    hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\mk20_des_co.paa"};
	};

	class BP_MK20C_URB: BP_MK20C
	{
	    hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\mk20_urb_co.paa"};
	};

	class BP_Tavor: Rifle_Base_F_BP
	{
	    scope = 2;
		maxZeroing = 600;
		model = "\A3\weapons_f\Rifles\TRG20\TRG21_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\Tavor\tar21_base_co.paa"};
		picture = "\breakingpoint_weapons\icons\gear_tavor_rifle_x_ca.paa";
		reloadAction = "GestureReloadTRG";
		displayName = "Tavor TRG-21 Assault Rifle";
		descriptionUse = "Tavor TRG-21 Assault Rifle";
		descriptionShort = "5.56mm Modular Bullpup assault rifle";
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Rifles\TRG20\Data\Anim\TRG_21.rtm"};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Firemode_ugl",0.41622776,1.2,7};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\mk20\mk20_reload_final", 0.316228, 1, 30};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		magazines[] = {"BP_556x45_Stanag", "BP_556x45_Stanag_Tracer", "BP_556x45_StanagSD", "BP_556x45_StanagM855A1", "BP_556x45_StanagMK262", "BP_556old_Stanag", "BP_5Rnd_223_Mag", "BP_5Rnd_223BTHP_mag", "BP_556x45_Rubber"};
		inertia = 0.16;
		recoil = "recoil_mk20";
		initSpeed = -0.99;
		modes[] = {"Single", "FullAuto"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";

 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\F2000_s1.wav", 1.412538, 1, 900};
				begin2[] = {"breakingpoint_jsrs\sounds\F2000_s2.wav", 1.412538, 1, 900};
				begin3[] = {"breakingpoint_jsrs\sounds\F2000_s3.wav", 1.412538, 1, 900};
				begin4[] = {"breakingpoint_jsrs\sounds\F2000_s4.wav", 1.412538, 1, 900};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18", 1.000000, 1, 100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19", 1.000000, 1, 100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11", 1.000000, 1, 100};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-12", 1.000000, 0.9, 100};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			reloadTime = 0.070000;
			dispersion = 0.001362;
			//recoil = "recoil_single_mk20";
			//recoilProne = "recoil_single_prone_mk20";
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\F2000_s1.wav", 1.212538, 1, 900};
				begin2[] = {"breakingpoint_jsrs\sounds\F2000_s2.wav", 1.212538, 1, 900};
				begin3[] = {"breakingpoint_jsrs\sounds\F2000_s3.wav", 1.212538, 1, 900};
				begin4[] = {"breakingpoint_jsrs\sounds\F2000_s4.wav", 1.212538, 1, 900};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18", 1.000000, 1, 100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19", 1.000000, 1, 100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11", 1.000000, 1, 100};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-12", 1.000000, 0.9, 100};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			soundContinuous = 0;
			reloadTime = 0.070000;
			dispersion = 0.001362;
			//recoil = "recoil_auto_mk20";
			//recoilProne = "recoil_auto_prone_mk20";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 75;
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_M12", "BP_muzzle_snds_M"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG", "BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS"};
				iconScale = 0.1;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight"};
				iconScale = 0.1;
			};
		};

		linkedAttach[] = {"BP_Compm4s", "BP_flashlight"};
		chanceAttach[] =
        {
			{"BP_muzzle_snds_M",0.01},
			{"",0.50}
        };
	};

	class BP_Tavor_WDL: BP_Tavor
	{
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\Tavor\tar21_wdl_co.paa"};
	};

	class BP_Tavor_DES: BP_Tavor
	{
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\Tavor\tar21_des_co.paa"};
	};

	class BP_Tavor_URB: BP_Tavor
	{
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\Tavor\tar21_urb_co.paa"};
	};

	class BP_Tavor_AI: BP_Tavor
	{
	    scope = 2;
		magazines[] = {"BP_500Rnd_762x51_AI"};
		inertia = 0.0000;
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefX = 0.100000;
		modes[] = {"Single", "FullAuto", "far_optic1"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";

 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\F2000_s1.wav", 1.412538, 1, 1200};
				begin2[] = {"breakingpoint_jsrs\sounds\F2000_s2.wav", 1.412538, 1, 1200};
				begin3[] = {"breakingpoint_jsrs\sounds\F2000_s3.wav", 1.412538, 1, 1200};
				begin4[] = {"breakingpoint_jsrs\sounds\F2000_s4.wav", 1.412538, 1, 1200};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18", 1.000000, 1, 200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19", 1.000000, 1, 200};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11", 1.000000, 1, 200};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-12", 1.000000, 0.9, 100};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			reloadTime = 0.070000;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			dispersion = 0.000700;
			minRange = 750;
			minRangeProbab = 1.000000;
			midRange = 950;
			midRangeProbab = 1.000000;
			maxRange = 1200;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 1200;
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\F2000_s1.wav", 1.212538, 1, 1200};
				begin2[] = {"breakingpoint_jsrs\sounds\F2000_s2.wav", 1.212538, 1, 1200};
				begin3[] = {"breakingpoint_jsrs\sounds\F2000_s3.wav", 1.212538, 1, 1200};
				begin4[] = {"breakingpoint_jsrs\sounds\F2000_s4.wav", 1.212538, 1, 1200};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18", 1.000000, 1, 700};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19", 1.000000, 1, 700};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11", 1.000000, 1, 700};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-12", 1.000000, 0.9, 700};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			soundContinuous = 0;
			reloadTime = 0.070000;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			dispersion = 0.001207;
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 200;
			midRangeProbab = 1.000000;
			maxRange = 400;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 400;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class far_optic1: FullAuto
		{
			showToPlayer = 0;
			burst = 6;
			aiRateOfFire = 0.01;
			aiRateOfFireDistance = 700;
			minRange = 300;
			minRangeProbab = 1.000000;
			midRange = 550;
			midRangeProbab = 1.000000;
			maxRange = 700;
			maxRangeProbab = 1.000000;
		};
	};

	class BP_SUD_AK74M: Rifle_Base_F_BP
	{
		scope = 2;
		maxZeroing = 600;
		displayName = "AK-74";
		descriptionUse = "AK-74";
		descriptionShort = "5.45x39mm Assault Rifle";
		model = "breakingpoint_weapons\models\AK74\BP_AK74.p3d";
		magazines[] = {"BP_545x39_AK107", "BP_545x39_HP_30rnd", "BP_545x39_30rnd_Ball_T", "BP_545x39_30rnd_7N22"};
		reloadAction = "GestureReloadMX";
		handAnim[] = {"OFP2_ManSkeleton", "breakingpoint_weapons\anim\AK.rtm"};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Firemode_ugl",0.41622776,1.2,7};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_MX.wss", 0.31, 1, 30};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		picture = "\breakingpoint_weapons\icons\gear_ak47_rifle_x_ca.paa";
		inertia = 0.30000; //Inertiachange, increased.
		discreteDistance[] = {100,200,300,400,500,600};
		discreteDistanceInitIndex = 3;//400m AK zero
		recoil = "recoil_trg21";
		modes[] = {"Single", "Burst", "FullAuto"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";

 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\G36SD_s1.wav", 1.000000, 1, 150};
				begin2[] = {"\breakingpoint_jsrs\sounds\G36SD_s2.wav", 1.100000, 1, 150};
				begin3[] = {"\breakingpoint_jsrs\sounds\G36SD_s1.wav", 0.985000, 0.98, 150};
				begin4[] = {"\breakingpoint_jsrs\sounds\G36SD_s2.wav", 0.875000, 0.97, 150};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\SRifle_S1.wss", 0.812538, 1, 1200};
				begin2[] = {"breakingpoint_jsrs\sounds\SRifle_S4.wss", 0.812538, 1, 1200};
				begin3[] = {"breakingpoint_jsrs\sounds\SRifle_S7.wss", 0.812538, 1, 1200};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};
			reloadTime = 0.0923;
			dispersion = 0.001370;
		};
		class Burst : Mode_Burst
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\SRifle_S1.wss", 0.812538, 1, 1200};
				begin2[] = {"breakingpoint_jsrs\sounds\SRifle_S4.wss", 0.812538, 1, 1200};
				begin3[] = {"breakingpoint_jsrs\sounds\SRifle_S7.wss", 0.812538, 1, 1200};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\G36SD_s1.wav", 1.000000, 1, 150};
				begin2[] = {"\breakingpoint_jsrs\sounds\G36SD_s2.wav", 1.100000, 1, 150};
				begin3[] = {"\breakingpoint_jsrs\sounds\G36SD_s1.wav", 0.985000, 0.98, 150};
				begin4[] = {"\breakingpoint_jsrs\sounds\G36SD_s2.wav", 0.875000, 0.97, 150};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			reloadTime = 0.0923;
			dispersion = 0.001370;
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\G36SD_s1.wav", 1.000000, 1, 150};
				begin2[] = {"\breakingpoint_jsrs\sounds\G36SD_s2.wav", 1.100000, 1, 150};
				begin3[] = {"\breakingpoint_jsrs\sounds\G36SD_s1.wav", 0.985000, 0.98, 150};
				begin4[] = {"\breakingpoint_jsrs\sounds\G36SD_s2.wav", 0.875000, 0.97, 150};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\SRifle_S1.wss", 0.812538, 1, 1200};
				begin2[] = {"breakingpoint_jsrs\sounds\SRifle_S4.wss", 0.812538, 1, 1200};
				begin3[] = {"breakingpoint_jsrs\sounds\SRifle_S7.wss", 0.812538, 1, 1200};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};
			reloadTime = 0.0923;
			dispersion = 0.001370;
		};
		muzzles[] = {"this", "Butt"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
		    mass = 85; //Masschange, increased.
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_M545"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_PSO1", "BP_PSOP", "BP_PSO35"};
				iconScale = 0.1;
			};
			class PointerSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				displayName = "$STR_A3_PointerSlot0";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
		};
	};

	class BP_SUD_AK74M_WDL: BP_SUD_AK74M
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\ak74\ak74_wdl_co.paa"};
	};

	class BP_SUD_AK74M_DES: BP_SUD_AK74M
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\ak74\ak74_des_co.paa"};
	};

	class BP_SUD_AK74M_URB: BP_SUD_AK74M
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\ak74\ak74_urb_co.paa"};
	};

	class BP_AK74_DMR: BP_SUD_AK74M
	{
		scope = 2;
		maxZeroing = 1600;
		displayName = "Tabuk";
		descriptionUse = "DMR built from the AK-74 platform";
		descriptionShort = "5.45x39mm DMR";
		model = "breakingpoint_weapons\models\AK74\BP_AK74_DMR.p3d";
		//magazines[] = {"BP_545x39_AK107", "BP_545x39_HP_30rnd", "BP_545x39_30rnd_Ball_T", "BP_545x39_30rnd_7N22"};
		//reloadAction = "GestureReloadMX";
		//handAnim[] = {"OFP2_ManSkeleton", "breakingpoint_weapons\anim\AK.rtm"};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Firemode_ugl",0.41622776,1.2,7};
		//reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_MX.wss", 0.31, 1, 30};
		//drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		picture = "\breakingpoint_weapons\icons\gear_ak47_rifle_x_ca.paa";
		inertia = 0.35000;
		//discreteDistance[] = {100,200,300,400,500,600};
		//discreteDistanceInitIndex = 3;//400m AK zero
		recoil = "recoil_mk20";
		modes[] = {"Single", "Burst"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";

 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\G36SD_s1.wav", 1.000000, 1, 150};
				begin2[] = {"\breakingpoint_jsrs\sounds\G36SD_s2.wav", 1.100000, 1, 150};
				begin3[] = {"\breakingpoint_jsrs\sounds\G36SD_s1.wav", 0.985000, 0.98, 150};
				begin4[] = {"\breakingpoint_jsrs\sounds\G36SD_s2.wav", 0.875000, 0.97, 150};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\SRifle_S1.wss", 0.812538, 1, 1200};
				begin2[] = {"breakingpoint_jsrs\sounds\SRifle_S4.wss", 0.812538, 1, 1200};
				begin3[] = {"breakingpoint_jsrs\sounds\SRifle_S7.wss", 0.812538, 1, 1200};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};
			reloadTime = 0.0923;
			dispersion = 0.000823;
		};
		class Burst : Mode_Burst
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\SRifle_S1.wss", 0.812538, 1, 1200};
				begin2[] = {"breakingpoint_jsrs\sounds\SRifle_S4.wss", 0.812538, 1, 1200};
				begin3[] = {"breakingpoint_jsrs\sounds\SRifle_S7.wss", 0.812538, 1, 1200};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\G36SD_s1.wav", 1.000000, 1, 150};
				begin2[] = {"\breakingpoint_jsrs\sounds\G36SD_s2.wav", 1.100000, 1, 150};
				begin3[] = {"\breakingpoint_jsrs\sounds\G36SD_s1.wav", 0.985000, 0.98, 150};
				begin4[] = {"\breakingpoint_jsrs\sounds\G36SD_s2.wav", 0.875000, 0.97, 150};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			reloadTime = 0.0923;
			dispersion = 0.000823;
		};
		muzzles[] = {"this", "Butt"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
		    mass = 85; //Masschange, increased.
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_M545"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_PSO1", "BP_PSOP", "BP_PSO35"};
				iconScale = 0.1;
			};
			class PointerSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				displayName = "$STR_A3_PointerSlot0";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
		};
	};

	class BP_AK74_DMR_WDL: BP_AK74_DMR
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\ak74\ak74_wdl_co.paa"};
	};

	class BP_AK74_DMR_DES: BP_AK74_DMR
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\ak74\ak74_des_co.paa"};
	};

	class BP_AK74_DMR_URB: BP_AK74_DMR
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\ak74\ak74_urb_co.paa"};
	};

	class BP_AK74U: BP_SUD_AK74M
	{
		scope = 2;
		maxZeroing = 600;
		displayName = "Old AKS-74U";
		descriptionUse = "Old AK74U";
		descriptionShort = "Old, poorly maintained 5.45x39mm Assault Rifle";
		model = "\breakingpoint_weapons\models\AKS74U\BP_74U.p3d";
		picture = "\breakingpoint_weapons\icons\gear_ak47su_rifle_x_ca.paa";
		inertia = 0.230000;
		recoil = "recoil_ktb";
		dispersion = 0.003640;
		initSpeed = -0.89;
		muzzles[] = {"this"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
		    mass = 85; //Masschange, increased.
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class PointerSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				displayName = "$STR_A3_PointerSlot0";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
		};
	};

	class BP_AK74U_WDL: BP_AK74U
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\AKS74U\aks74u_wdl_co.paa"};
	};

	class BP_AK74U_DES: BP_AK74U
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\AKS74U\aks74u_des_co.paa"};
	};

	class BP_AK74U_URB: BP_AK74U
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\AKS74U\aks74u_urb_co.paa"};
	};

	class BP_SUD_AK107: Rifle_Base_F_BP
	{
		scope = 2;
		maxZeroing = 600;
		displayName = "AK-107";
		descriptionUse = "AK-107";
		descriptionShort = "AK-100 Series 5.45x39mm Assault Rifle with Balanced Automatics Recoil System."; //DescriptionChange
		model = "breakingpoint_weapons\models\AK107\BP_AK107.p3d";
		magazines[] = {"BP_545x39_AK107", "BP_545x39_HP_30rnd", "BP_545x39_30rnd_Ball_T", "BP_545x39_30rnd_7N22"};
		reloadAction = "GestureReloadMX";
		handAnim[] = {"OFP2_ManSkeleton", "breakingpoint_weapons\anim\AK.rtm"};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Firemode_ugl",0.41622776,1.2,7};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_MX.wss", 0.31, 1, 30};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		picture = "\breakingpoint_weapons\icons\gear_ak107_rifle_x_ca.paa";
		inertia = 0.250000;
		initSpeed = -1.02;
		recoil = "recoil_mk20";
		discreteDistance[] = {100,200,300,400,500,600};
		discreteDistanceInitIndex = 3;
		modes[] = {"Single", "Burst", "FullAuto"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\SRifle_S1.wss", 0.812538, 1, 900};
				begin2[] = {"breakingpoint_jsrs\sounds\SRifle_S4.wss", 0.812538, 1, 900};
				begin3[] = {"breakingpoint_jsrs\sounds\SRifle_S7.wss", 0.812538, 1, 900};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\G36SD_s1.wav", 1.000000, 1, 150};
				begin2[] = {"\breakingpoint_jsrs\sounds\G36SD_s2.wav", 1.100000, 1, 150};
				begin3[] = {"\breakingpoint_jsrs\sounds\G36SD_s1.wav", 0.985000, 0.98, 150};
				begin4[] = {"\breakingpoint_jsrs\sounds\G36SD_s2.wav", 0.875000, 0.97, 150};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			reloadTime = 0.065000;
			//recoil = "recoil_single_trg";
			//recoilProne = "recoil_single_prone_trg";
			dispersion = 0.001152;
		};
		class Burst : Mode_Burst
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\SRifle_S1.wss", 0.812538, 1, 900};
				begin2[] = {"breakingpoint_jsrs\sounds\SRifle_S4.wss", 0.812538, 1, 900};
				begin3[] = {"breakingpoint_jsrs\sounds\SRifle_S7.wss", 0.812538, 1, 900};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\G36SD_s1.wav", 1.000000, 1, 150};
				begin2[] = {"\breakingpoint_jsrs\sounds\G36SD_s2.wav", 1.100000, 1, 150};
				begin3[] = {"\breakingpoint_jsrs\sounds\G36SD_s1.wav", 0.985000, 0.98, 150};
				begin4[] = {"\breakingpoint_jsrs\sounds\G36SD_s2.wav", 0.875000, 0.97, 150};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			reloadTime = 0.065000;
			//recoil = "recoil_single_trg";
			//recoilProne = "recoil_single_prone_trg";
			dispersion = 0.001152;
		};
		class FullAuto: Mode_FullAuto
		{
			//sounds[] = {0};
			sounds[] = {StandardSound, SilencedSound};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6",0.307946,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7",0.307946,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			//class 0: BaseSoundModeType
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"breakingpoint_jsrs\sounds\SRifle_S1.wss",0.812538,1,900};
				begin2[] = {"breakingpoint_jsrs\sounds\SRifle_S4.wss",0.812538,1,900};
				begin3[] = {"breakingpoint_jsrs\sounds\SRifle_S7.wss",0.812538,1,900};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\G36SD_s1.wav", 1.000000, 1, 150};
				begin2[] = {"\breakingpoint_jsrs\sounds\G36SD_s2.wav", 1.100000, 1, 150};
				begin3[] = {"\breakingpoint_jsrs\sounds\G36SD_s1.wav", 0.985000, 0.98, 150};
				begin4[] = {"\breakingpoint_jsrs\sounds\G36SD_s2.wav", 0.875000, 0.97, 150};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			reloadTime = 0.065000;
			//recoil = "recoil_single_prone_trg";
			//recoilProne = "recoil_m320";
			dispersion = 0.001152;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 85;
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				//displayName = "$STR_CfgWeapons_arifle_Khaybar_F_Library0";
				compatibleItems[] = {"BP_muzzle_snds_M545"};
				iconScale = 0.1;
			};
			class CowsSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_AK_ACO","BP_OldComp", "BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG", "BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS"};
				iconScale = 0.1;
			};
			class PointerSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				displayName = "$STR_A3_PointerSlot0";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
		};
	};

	class BP_SUD_AK107_WDL: BP_SUD_AK107
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\AK107\ak107_wdl_co.paa"};
	};

	class BP_SUD_AK107_DES: BP_SUD_AK107
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\AK107\ak107_des_co.paa"};
	};

	class BP_SUD_AK107_URB: BP_SUD_AK107
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\AK107\ak107_urb_co.paa"};
	};

	class BP_AKM: Rifle_Base_F_BP
	{
		scope = 2;
		maxZeroing = 600;
		displayName = "AKMS";
		descriptionShort = "Modern AK-47 variant with folding stock"; //Descriptionchange
		model = "breakingpoint_weapons\models\SA58\BP_AKM.p3d";
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Firemode_ugl",0.41622776,1.2,7};
		magazines[] = {"BP_762x39_AKM", "BP_60Rnd_762x39_AKM"};
		reloadAction = "GestureReloadEBR";
		handAnim[] = {"OFP2_ManSkeleton", "breakingpoint_weapons\anim\AK.rtm"};
		picture = "\breakingpoint_weapons\icons\gear_akms_rifle_x_ca.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		inertia = 0.35000; //Inertiachange, increased.
		recoil = "recoil_mxc";//recoilchange Test this vs AK109
		modes[] = {"Single", "FullAuto", "far_optic1"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\AKM_s1.wav", 1.100000, 1.0, 900};
				begin2[] = {"\breakingpoint_jsrs\sounds\AKM_s2.wav", 1.200000, 1.0, 900};
				begin3[] = {"\breakingpoint_jsrs\sounds\AKM_s3.wav", 1.200000, 0.98, 900};
				begin4[] = {"\breakingpoint_jsrs\sounds\AKM_s3.wav", 1.200000, 1.10, 900};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			reloadTime = 0.1;//reloadtime change, significant test
			//recoil = "recoil_single_ebr";
			//recoilProne = "recoil_single_prone_ebr";
			dispersion = 0.001360; //dispersionchange, increased.
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\AKM_s1.wav", 1.100000, 1.0, 900};
				begin2[] = {"\breakingpoint_jsrs\sounds\AKM_s2.wav", 1.200000, 1.0, 900};
				begin3[] = {"\breakingpoint_jsrs\sounds\AKM_s3.wav", 1.200000, 0.98, 900};
				begin4[] = {"\breakingpoint_jsrs\sounds\AKM_s3.wav", 1.200000, 1.10, 900};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			reloadTime = 0.1;
			//recoil = "recoil_auto_ebr";
			//recoilProne = "recoil_auto_prone_ebr";
			dispersion = 0.001360;
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 200;
			midRangeProbab = 1.000000;
			maxRange = 400;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 400;
		};
		class far_optic1: FullAuto
		{
			showToPlayer = 0;
			burst = 6;
			aiRateOfFire = 0.01;
			aiRateOfFireDistance = 1000;
			minRange = 300;
			minRangeProbab = 1.000000;
			midRange = 650;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
            mass = 80; //Masschange, reduced.
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				//displayName = "$STR_CfgWeapons_arifle_Khaybar_F_Library0";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class CowsSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				displayName = "$STR_A3_CowsSlot0";
				compatibleItems[] = {"BP_PSO35", "BP_PSO1", "BP_PSOP"};//added PSO-1 to AK's
				iconScale = 0.1;
			};
			class PointerSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				displayName = "$STR_A3_PointerSlot0";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
		};
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "CaselessAmmoCloud";
			};
		};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		reloadMagazineSound[] = {"A3\Sounds_F\weapons\Khaybar\reload_khaibar", 0.462341, 1, 30};
	};

	class BP_AKM_WDL: BP_AKM
	{
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\SA58\sa58_wdl_co.paa", "\breakingpoint_weapons\textures\SA58\fold_wdl_co.paa"};
	};

	class BP_AKM_DES: BP_AKM
	{
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\SA58\sa58_des_co.paa", "\breakingpoint_weapons\textures\SA58\fold_des_co.paa"};
	};

	class BP_AKM_URB: BP_AKM
	{
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\SA58\sa58_urb_co.paa", "\breakingpoint_weapons\textures\SA58\fold_urb_co.paa"};
	};

	class BP_AKM_AI: BP_AKM
	{
		scope = 2;
		magazines[] = {"BP_500Rnd_762x51_AI"};
		inertia = 0.0000;
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefX = 0.100000;
		modes[] = {"Single", "FullAuto", "far_optic1"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\AKM_s1.wav", 1.100000, 1.0, 900};
				begin2[] = {"\breakingpoint_jsrs\sounds\AKM_s2.wav", 1.200000, 1.0, 900};
				begin3[] = {"\breakingpoint_jsrs\sounds\AKM_s3.wav", 1.200000, 0.98, 900};
				begin4[] = {"\breakingpoint_jsrs\sounds\AKM_s3.wav", 1.200000, 1.10, 900};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			reloadTime = 0.065000;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			dispersion = 0.001160;
			minRange = 800;
			minRangeProbab = 1.000000;
			midRange = 1000;
			midRangeProbab = 1.000000;
			maxRange = 1200;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 1200;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\AKM_s1.wav", 1.100000, 1.0, 900};
				begin2[] = {"\breakingpoint_jsrs\sounds\AKM_s2.wav", 1.200000, 1.0, 900};
				begin3[] = {"\breakingpoint_jsrs\sounds\AKM_s3.wav", 1.200000, 0.98, 900};
				begin4[] = {"\breakingpoint_jsrs\sounds\AKM_s3.wav", 1.200000, 1.10, 900};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			reloadTime = 0.090000;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			dispersion = 0.001160;
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 200;
			midRangeProbab = 1.000000;
			maxRange = 400;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 400;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class far_optic1: FullAuto
		{
			showToPlayer = 0;
			burst = 6;
			aiRateOfFire = 0.01;
			aiRateOfFireDistance = 1000;
			minRange = 400;
			minRangeProbab = 1.000000;
			midRange = 650;
			midRangeProbab = 1.000000;
			maxRange = 800;
			maxRangeProbab = 1.000000;
		};
	};

	class BP_SA58: BP_AKM
	{
		scope = 2;
		maxZeroing = 600;
		displayName = "VZ.58";
		descriptionShort = "Modern AK-47 variant";
		magazines[] = {"BP_60Rnd_762x39_AKM", "BP_762x39_AKM"};
		reloadAction = "GestureReloadEBR";
		model = "breakingpoint_weapons\models\SA58\BP_SA58.p3d";
		picture = "\breakingpoint_weapons\icons\gear_akm_rifle_x_ca.paa";
		inertia = 0.400000; //Inertiachange, increased.
		recoil = "recoil_mx";
		muzzles[] = {"this", "Bayonet"};
		class Bayonet: UGL_F
		{
			magazines[] = {"BP_Bayonet_Stab"};
			displayName = "Bayonet";
			maxZeroing = 5;
			discreteDistanceInitIndex = 0;
			discreteDistance[] = {5};
			class GunParticles: GunParticles
			{
				class FirstEffect
				{
					effectName = "";
					positionName = "Usti hlavne";
					directionName = "Konec hlavne";
				};
			};
			modes[] = {"Single"};
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class BaseSoundModeType
				{
					closure1[] = {};
					soundClosure[] = {};
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.95, 10};
					begin2[] = {};
					soundBegin[] = {"begin1", 1};
				};
			};
			reloadMagazineSound[] = {};
			drySound[] = {};
			magazineReloadTime = 0;
			autoReload = 1;
			reloadTime = 1.400000;
			optics = 0;
			modelOptics = "-";
			cameraDir = "";
			memoryPointCamera = "eye";
			opticsZoomMin = 0.375000;
			opticsZoomMax = 1.100000;
			opticsZoomInit = 0.750000;
			weaponInfoType = "RscWeaponZeroing";
		};
	};

	class BP_SA58_WDL: BP_SA58
	{
		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\SA58\sa58_wdl_co.paa", "\breakingpoint_weapons\textures\SA58\sa58_izo_wdl_co.paa", "\breakingpoint\textures\items\knife_wdl_co.paa"};
	};

	class BP_SA58_DES: BP_SA58
	{
		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\SA58\sa58_des_co.paa", "\breakingpoint_weapons\textures\SA58\sa58_izo_des_co.paa", "\breakingpoint\textures\items\knife_des_co.paa"};
	};

	class BP_SA58_URB: BP_SA58
	{
		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\SA58\sa58_urb_co.paa", "\breakingpoint_weapons\textures\SA58\sa58_izo_urb_co.paa", "\breakingpoint\textures\items\knife_urb_co.paa"};
	};

	class BP_SA582: BP_SA58
	{
		scope = 2;
		displayName = "AKM RIS";
		descriptionShort = "Modern AK-47 variant with telescopic stock and weaver rails";
		magazines[] = {"BP_762x39_AKM", "BP_60Rnd_762x39_AKM"};
		reloadAction = "GestureReloadEBR";
		inertia = 0.3350000; //Inertiachange, increased.
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Rifles\MX\data\Anim\MX_dmr.rtm"};
		model = "breakingpoint_weapons\models\SA58\BP_SA58_2.p3d";
		picture = "\breakingpoint_weapons\icons\gear_akmris_rifle_x_ca.paa";
		modes[] = {"Single", "FullAuto"};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 80;
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_OldComp", "BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG", "BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS"};
				iconScale = 0.1;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight", "BP_AFG"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
		};
	};

	class BP_SA582_WDL: BP_SA582
	{
		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\SA58\sa58_wdl_co.paa", "\breakingpoint_weapons\textures\M110\m110_wdl_co.paa", "\breakingpoint_weapons\textures\SA58\evo_wdl_co.paa"};
	};

	class BP_SA582_DES: BP_SA582
	{
		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\SA58\sa58_des_co.paa", "\breakingpoint_weapons\textures\M110\m110_des_co.paa", "\breakingpoint_weapons\textures\SA58\evo_des_co.paa"};
	};

	class BP_SA582_URB: BP_SA582
	{
		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\SA58\sa58_urb_co.paa", "\breakingpoint_weapons\textures\M110\m110_urb_co.paa", "\breakingpoint_weapons\textures\SA58\evo_urb_co.paa"};
	};

	class BP_AKMRIS_AI: BP_AKM_AI
	{
		scope = 2;
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Rifles\MX\data\Anim\MX_dmr.rtm"};
		model = "breakingpoint_weapons\models\SA58\BP_SA58_2.p3d";
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 80;
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_OldComp", "BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG"};
				iconScale = 0.1;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight", "BP_AFG"};
				iconScale = 0.1;
			};
		};
	};

	class BP_M4 : Rifle_Base_F_BP
	{
        scope = 2;
		maxZeroing = 600;
		model = "\breakingpoint_weapons\models\M4A3_old\BP_M4A1.p3d";
		displayName = "M4A1 Assault Rifle";
		picture = "\breakingpoint_weapons\icons\gear_m4a1_rifle_x_ca.paa";
		magazines[] = {"BP_556x45_Stanag", "BP_556x45_Stanag_Tracer", "BP_556x45_StanagSD", "BP_556x45_StanagM855A1", "BP_556x45_StanagMK262", "BP_556old_Stanag", "BP_5Rnd_223_Mag", "BP_5Rnd_223BTHP_mag", "BP_556x45_Rubber"};
		descriptionUse = "M4A1 Assault Rifle";
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Firemode_ugl",0.41622776,1.2,7};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		handAnim[] = {};
		reloadAction = "GestureReloadMX";
		descriptionShort = "M4 5.56mm Assault Rifle";
		inertia = 0.22000; //Inertiachange, increased.
		recoil = "recoil_trg21";
		initSpeed = -0.92;
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_MX.wss", 0.31, 1, 30};
		linkedAttach[] = {"BP_Handle"};
		modes[] = {"Single", "FullAuto"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_m4_shot_soundset",
					"jsrs_m4_shot2_soundset",
					"jsrs_6x5mm_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_m4_shot_silenced_soundset",
					"jsrs_6x5mm_SD_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			reloadTime = 0.085;
			//recoil = "recoil_single_trg";
			//recoilProne = "recoil_single_prone_trg";
			dispersion = 0.001525;
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_m4_shot_soundset",
					"jsrs_m4_shot2_soundset",
					"jsrs_6x5mm_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_m4_shot_silenced_soundset",
					"jsrs_6x5mm_SD_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			reloadTime = 0.085;
			//recoil = "recoil_auto_trg";
			//recoilProne = "recoil_auto_prone_trg";
			dispersion = 0.001525;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 70; //Masscahnge, reduced.
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_M12", "BP_muzzle_snds_M"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_Handle", "BP_OldComp", "BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG", "BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS"};
				iconScale = 0.1;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
		};
	};

	class BP_M4_WDL : BP_M4
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M4A3_old\m4_wdl_co.paa"};
	};

	class BP_M4_DES : BP_M4
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M4A3_old\m4_des_co.paa"};
	};

	class BP_M4_URB : BP_M4
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M4A3_old\m4_urb_co.paa"};
	};

	class BP_M4K : BP_M4
	{
        scope = 2;
		maxZeroing = 600;
		model = "\breakingpoint_weapons\models\M4A3_old\BP_m4a3K.p3d";
		displayName = "M4A3 Assault Rifle w/Bayonet";
		picture = "\breakingpoint_weapons\icons\gear_m4a3k_rifle_x_ca.paa";
		magazines[] = {"BP_556x45_Stanag", "BP_556x45_Stanag_Tracer", "BP_556x45_StanagSD", "BP_556x45_StanagM855A1", "BP_556x45_StanagMK262", "BP_556old_Stanag", "BP_5Rnd_223_Mag", "BP_5Rnd_223BTHP_mag", "BP_556x45_Rubber"};
		descriptionUse = "M4A3 Assault Rifle";
		linkedAttach[] = {};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Rifles\MX\data\Anim\MX_dmr.rtm"};
		reloadAction = "GestureReloadMX";
		descriptionShort = "5.56mm Assault Rifle";
		inertia = 0.290000; //Masschange, increased.
		muzzles[] = {"this", "Bayonet"};
		class Bayonet: UGL_F
		{
			magazines[] = {"BP_Bayonet_Stab"};
			displayName = "Bayonet";
			maxZeroing = 5;
			discreteDistanceInitIndex = 0;
			discreteDistance[] = {5};
			class GunParticles: GunParticles
			{
				class FirstEffect
				{
					effectName = "";
					positionName = "Usti hlavne";
					directionName = "Konec hlavne";
				};
			};
			modes[] = {"Single"};
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class BaseSoundModeType
				{
					closure1[] = {};
					soundClosure[] = {};
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.95, 10};
					begin2[] = {};
					soundBegin[] = {"begin1", 1};
				};
			};
			reloadMagazineSound[] = {};
			drySound[] = {};
			magazineReloadTime = 0;
			autoReload = 1;
			reloadTime = 1.400000;
			optics = 0;
			modelOptics = "-";
			cameraDir = "";
			memoryPointCamera = "eye";
			opticsZoomMin = 0.375000;
			opticsZoomMax = 1.100000;
			opticsZoomInit = 0.750000;
			weaponInfoType = "RscWeaponZeroing";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 75;
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_OldComp", "BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG", "BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS"};
				iconScale = 0.1;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight", "BP_AFG"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
		};
	};

	class BP_M4K_WDL : BP_M4K
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M4A3_old\m4_wdl_co.paa", "\breakingpoint\textures\items\knife_wdl_co.paa"};
	};

	class BP_M4K_DES : BP_M4K
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M4A3_old\m4_des_co.paa", "\breakingpoint\textures\items\knife_des_co.paa"};
	};

	class BP_M4K_URB : BP_M4K
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M4A3_old\m4_urb_co.paa", "\breakingpoint\textures\items\knife_urb_co.paa"};
	};

	class BP_M4_300 : BP_M4K
	{
        scope = 2;
		maxZeroing = 800;
		model = "\breakingpoint_weapons\models\M4A3_old\BP_M300.p3d";
		displayName = "M4 300 Blackout";
		picture = "\breakingpoint_weapons\icons\gear_m300_rifle_x_ca.paa";
		magazines[] = {"BP_30Rnd_300AAC_Mag", "BP_5Rnd_300AAC_Mag"};
		descriptionUse = "M4 300 Blackout";
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Rifles\MX\data\Anim\MX_dmr.rtm"};
		reloadAction = "GestureReloadMX";
		descriptionShort = "7.62x35mm Assault Rifle";
		inertia = 0.240000; //Inertiachange, increased.
		recoil = "recoil_trg20";
		modes[] = {"Single", "FullAuto", "far_optic1"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_m4300_shot_soundset",
					"jsrs_m4300_shot2_soundset",
					"jsrs_6x5mm_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_m4300_shot_silenced_soundset",
					"jsrs_6x5mm_SD_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			reloadTime = 0.085;
			//recoil = "recoil_single_mx";
			//recoilProne = "recoil_single_prone_mx";
			dispersion = 0.001500;
			minRange = 700;
			minRangeProbab = 1.000000;
			midRange = 900;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.000001;
			aiRateOfFireDistance = 1000;
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";

 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_m4300_shot_soundset",
					"jsrs_m4300_shot2_soundset",
					"jsrs_6x5mm_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_m4300_shot_silenced_soundset",
					"jsrs_6x5mm_SD_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			soundContinuous = 0;
			reloadTime = 0.085;
			//recoil = "recoil_auto_mx";
			//recoilProne = "recoil_auto_prone_mx";
			dispersion = 0.001500;
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 200;
			midRangeProbab = 1.000000;
			maxRange = 400;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 400;
		};
		class far_optic1: FullAuto {
			showToPlayer = 0;
			burst = 6;
			aiRateOfFire = 0.01;
			aiRateOfFireDistance = 800;
			minRange = 300;
			minRangeProbab = 1.000000;
			midRange = 550;
			midRangeProbab = 1.000000;
			maxRange = 700;
			maxRangeProbab = 1.000000;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 85;
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_B", "BP_300Sup"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_OldComp", "BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG", "BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS"};
				iconScale = 0.1;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight", "BP_AFG"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
		};

		linkedAttach[] = {"BP_compm4s"};
		chanceAttach[] =
        {
			{"BP_Harris",0.03},
			{"BP_AFG",0.05},
			{"",0.50}
        };
	};

	class BP_M4_300_WDL : BP_M4_300
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M4A3_old\m4_300_wdl_co.paa", "\breakingpoint_weapons\textures\M4A3_old\m4_pmag2_wdl_co.paa", "\breakingpoint_weapons\textures\M110\m110_wdl_co.paa"};
	};

	class BP_M4_300_DES : BP_M4_300
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M4A3_old\m4_300_des_co.paa", "\breakingpoint_weapons\textures\M4A3_old\m4_pmag2_des_co.paa", "\breakingpoint_weapons\textures\M110\m110_des_co.paa"};
	};

	class BP_M4_300_URB : BP_M4_300
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M4A3_old\m4_300_urb_co.paa", "\breakingpoint_weapons\textures\M4A3_old\m4_pmag2_urb_co.paa", "\breakingpoint_weapons\textures\M110\m110_urb_co.paa"};
	};

	class BP_M4_300_AI : BP_M4_300
	{
        scope = 2;
		magazines[] = {"BP_500Rnd_762x51_AI"};
		inertia = 0.0000;
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefX = 0.100000;
		modes[] = {"Single", "FullAuto", "far_optic1"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\m4_s1.wav", 1.000000, 0.55, 1200};
				begin2[] = {"\breakingpoint_jsrs\sounds\m4_s2.wav", 1.100000, 0.55, 1200};
				begin3[] = {"\breakingpoint_jsrs\sounds\m4_s1.wav", 0.980000, 0.50, 1200};
				begin4[] = {"\breakingpoint_jsrs\sounds\m4_s2.wav", 0.960000, 0.50, 1200};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 1, 700};
				begin2[] = {"\breakingpoint_jsrs\sounds\HK417SD_s2.wav", 1.000000, 1, 700};
				begin3[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 0.9, 700};
				begin4[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 0.8, 700};
				begin5[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 1.1, 700};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};
			reloadTime = 0.085;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			dispersion = 0.000707;
			minRange = 700;
			minRangeProbab = 1.000000;
			midRange = 900;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.000001;
			aiRateOfFireDistance = 1000;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\HK417_s1.wav", 1.100000, 1, 1600};
				begin2[] = {"\breakingpoint_jsrs\sounds\HK417_s2.wav", 1.100000, 1, 1600};
				begin3[] = {"\breakingpoint_jsrs\sounds\HK417_s3.wav", 1.100000, 1, 1600};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 1, 700};
				begin2[] = {"\breakingpoint_jsrs\sounds\HK417SD_s2.wav", 1.000000, 1, 700};
				begin3[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 0.9, 700};
				begin4[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 0.8, 700};
				begin5[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 1.1, 700};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};
			soundContinuous = 0;
			reloadTime = 0.085;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			dispersion = 0.000707;
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 200;
			midRangeProbab = 1.000000;
			maxRange = 400;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 400;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class far_optic1: FullAuto
		{
			showToPlayer = 0;
			burst = 6;
			aiRateOfFire = 0.01;
			aiRateOfFireDistance = 800;
			minRange = 300;
			minRangeProbab = 1.000000;
			midRange = 550;
			midRangeProbab = 1.000000;
			maxRange = 700;
			maxRangeProbab = 1.000000;
		};
	};

	class BP_M4_300K : BP_M4_300
	{
        scope = 2;
		maxZeroing = 800;
		model = "\breakingpoint_weapons\models\M4A3_old\BP_M300K.p3d";
		picture = "\breakingpoint_weapons\icons\gear_m300k_rifle_x_ca.paa";
		displayName = "M4 300 Blackout w/Bayonet";
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Rifles\MX\data\Anim\MX_dmr.rtm"};
		magazines[] = {"BP_30Rnd_300AAC_Mag", "BP_5Rnd_300AAC_Mag"};
		inertia = 0.300000; //Inertiachange, increased.
		recoil = "recoil_trg20";
		muzzles[] = {"this", "Bayonet"};
		class Bayonet: UGL_F
		{
			magazines[] = {"BP_Bayonet_Stab"};
			displayName = "Bayonet";
			maxZeroing = 5;
			discreteDistanceInitIndex = 0;
			discreteDistance[] = {5};
			class GunParticles: GunParticles
			{
				class FirstEffect
				{
					effectName = "";
					positionName = "Usti hlavne";
					directionName = "Konec hlavne";
				};
			};
			modes[] = {"Single"};
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class BaseSoundModeType
				{
					closure1[] = {};
					soundClosure[] = {};
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.95, 10};
					begin2[] = {};
					soundBegin[] = {"begin1", 1};
				};
			};
			reloadMagazineSound[] = {};
			drySound[] = {};
			magazineReloadTime = 0;
			autoReload = 1;
			reloadTime = 1.400000;
			optics = 0;
			modelOptics = "-";
			cameraDir = "";
			memoryPointCamera = "eye";
			opticsZoomMin = 0.375000;
			opticsZoomMax = 1.100000;
			opticsZoomInit = 0.750000;
			weaponInfoType = "RscWeaponZeroing";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 90; //Masschange, increased.
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG", "BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS"};
				iconScale = 0.1;
			};
			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight", "BP_AFG"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
		};
	};

	class BP_M4_300K_WDL : BP_M4_300K
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M4A3_old\m4_300_wdl_co.paa", "\breakingpoint_weapons\textures\M4A3_old\m4_pmag2_wdl_co.paa", "\breakingpoint_weapons\textures\M110\m110_wdl_co.paa", "\breakingpoint\textures\items\knife_wdl_co.paa"};
	};

	class BP_M4_300K_DES : BP_M4_300K
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M4A3_old\m4_300_des_co.paa", "\breakingpoint_weapons\textures\M4A3_old\m4_pmag2_des_co.paa", "\breakingpoint_weapons\textures\M110\m110_des_co.paa", "\breakingpoint\textures\items\knife_des_co.paa"};
	};

	class BP_M4_300K_URB : BP_M4_300K
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M4A3_old\m4_300_urb_co.paa", "\breakingpoint_weapons\textures\M4A3_old\m4_pmag2_urb_co.paa", "\breakingpoint_weapons\textures\M110\m110_urb_co.paa", "\breakingpoint\textures\items\knife_urb_co.paa"};
	};

	class BP_M4_300MK : BP_M4_300
	{
        scope = 2;
		maxZeroing = 800;
		model = "\breakingpoint_weapons\models\M4A3_old\BP_M300MK.p3d";
		displayName = "M4 300 Blackout Masterkey";
		picture = "\breakingpoint_weapons\icons\gear_m300mk_rifle_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton", "breakingpoint_weapons\anim\M16GL.rtm"};
		magazines[] = {"BP_30Rnd_300AAC_Mag", "BP_5Rnd_300AAC_Mag"};
		descriptionShort = "7.62x35mm Assault Rifle with Masterkey attachment";
		inertia = 0.335000;
		recoil = "recoil_trg20";
		muzzles[] = {"this", "Masterkey"};
		class Masterkey: UGL_F
		{
			magazines[] = {"BP_8Rnd_Slug", "BP_8Rnd_Buckshot", "BP_8Rnd_MagBuckshot", "BP_2Rnd_MagBuckshot", "BP_2Rnd_Buckshot", "BP_2Rnd_Slug"};
			displayName = "Masterkey";
			modes[] = {"Single"};
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class BaseSoundModeType
				{
					closure1[] = {};
					soundClosure[] = {};
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"breakingpoint_jsrs\sounds\Benelli_s4.wav", 1, 1, 800};
					begin2[] = {"breakingpoint_jsrs\sounds\Benelli_s2.wav", 1, 1, 800};
					begin3[] = {"breakingpoint_jsrs\sounds\Benelli_s3.wav", 1, 1, 800};
					begin4[] = {"breakingpoint_jsrs\sounds\Benelli_s4.wav", 1, 1, 800};
					soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
				};
			};
			reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\Bolt_reload_s1.wav", 0.30, 1, 30};
			drySound[] = {"", 1.000000, 1, 30};
			dispersion = 0.002000;
			magazineReloadTime = 0;
			autoReload = 0;
			reloadTime = 0.400000;
			optics = 1;
			modelOptics = "-";
			cameraDir = "";
			memoryPointCamera = "eye";
			opticsZoomMin = 0.375000;
			opticsZoomMax = 1.100000;
			opticsZoomInit = 0.750000;
			weaponInfoType = "RscWeaponZeroing";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 105; //Masschange, reduced.
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_B", "BP_300Sup"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_OldComp", "BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG", "BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS"};
				iconScale = 0.1;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight"};
				iconScale = 0.1;
			};
		};

		linkedAttach[] = {"BP_compm4s"};
		chanceAttach[] =
        {
			{"",0.50}
        };
	};

	class BP_M4_300MK_WDL : BP_M4_300MK
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M4A3_old\m4_300_wdl_co.paa", "\breakingpoint_weapons\textures\M4A3_old\m4_pmag2_wdl_co.paa", "\breakingpoint_weapons\textures\M110\m110_wdl_co.paa", "\breakingpoint_weapons\textures\m1014\m1014mk_wdl_co.paa"};
	};

	class BP_M4_300MK_DES : BP_M4_300MK
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M4A3_old\m4_300_des_co.paa", "\breakingpoint_weapons\textures\M4A3_old\m4_pmag2_des_co.paa", "\breakingpoint_weapons\textures\M110\m110_des_co.paa", "\breakingpoint_weapons\textures\m1014\m1014mk_des_co.paa"};
	};

	class BP_M4_300MK_URB : BP_M4_300MK
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M4A3_old\m4_300_urb_co.paa", "\breakingpoint_weapons\textures\M4A3_old\m4_pmag2_urb_co.paa", "\breakingpoint_weapons\textures\M110\m110_urb_co.paa", "\breakingpoint_weapons\textures\m1014\m1014mk_urb_co.paa"};
	};

	class BP_M4OLD: BP_M4
	{
        scope = 2;
		maxZeroing = 300;
		model = "\breakingpoint_weapons\models\M4A3_old\BP_m4a3.p3d";
		displayName = "M4A3 Carbine Rifle";
		descriptionShort = "A poorly maintained carbine rifle";
		linkedAttach[] = {};
		magazines[] = {"BP_556x45_Stanag", "BP_556x45_Stanag_Tracer", "BP_556x45_StanagSD", "BP_556x45_StanagM855A1", "BP_556x45_StanagMK262", "BP_556old_Stanag", "BP_5Rnd_223_Mag", "BP_5Rnd_223BTHP_mag", "BP_556x45_Rubber"};
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Rifles\MX\data\Anim\MX_dmr.rtm"};
		initSpeed = -0.94;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				displayName = "$STR_A3_PointerSlot0";
				compatibleItems[] = {"BP_flashlight", "BP_AFG"};
				iconScale = 0.1;
			};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_M12", "BP_muzzle_snds_M"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_AK_ACO","BP_OldComp", "BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG", "BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
		};
	};

	class BP_M4OLD_WDL : BP_M4OLD
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M4A3_old\m4a1_wdl_co.paa"};
	};

	class BP_M4OLD_DES : BP_M4OLD
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M4A3_old\m4a1_des_co.paa"};
	};

	class BP_M4OLD_URB : BP_M4OLD
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M4A3_old\m4a1_urb_co.paa"};
	};

	class BP_M16OLD: BP_M4OLD
	{
        scope = 2;
		model = "\breakingpoint_weapons\models\M16\BP_M16old.p3d";
		displayName = "AR15 Rifle";
		picture = "\breakingpoint_weapons\icons\gear_m16a2_rifle_x_ca.paa";
		descriptionShort = "A poorly maintained civilian rifle";
		handAnim[] = {};
		inertia = 0.230000;
		initSpeed = -0.96;
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_m16old_shot_soundset",
					"jsrs_m16old_shot2_soundset",
					"jsrs_6x5mm_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			reloadTime = 0.085;
			recoil = "recoil_single_trg";
			recoilProne = "recoil_single_prone_trg";
			dispersion = 0.001307;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 75;
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
		};
	};

	class BP_M16OLD_WDL: BP_M16OLD
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\m16\m16_wdl_co.paa", "breakingpoint_weapons\textures\m16\m16_ironsights_wdl_co.paa"};
	};

	class BP_M16OLD_DES: BP_M16OLD
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M16\m16_des_co.paa", "breakingpoint_weapons\textures\m16\m16_ironsights_des_co.paa"};
	};

	class BP_M16OLD_URB: BP_M16OLD
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M16\m16_urb_co.paa", "breakingpoint_weapons\textures\m16\m16_ironsights_urb_co.paa"};
	};

	class BP_M16a2: BP_m4
	{
		scope = 2;
		maxZeroing = 600;
		model = "\breakingpoint_weapons\models\M16\BP_m16a2.p3d";
		displayName = "M16A2";
		descriptionShort = "5.56mm Assault Rifle";
		handAnim[] = {};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		inertia = 0.230000;
		initSpeed = -0.97;
		linkedAttach[] = {};
		recoil = "recoil_trg20";
		modes[] = {"Single", "Burst"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_m16a4_shot_soundset",
					"jsrs_m16a4_shot2_soundset",
					"jsrs_6x5mm_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			reloadTime = 0.080000;
			//recoil = "recoil_single_sdar";
			//recoilProne = "recoil_single_prone_sdar";
			dispersion = 0.001100;
		};
		class Burst : Mode_Burst
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_m16a4_shot_soundset",
					"jsrs_m16a4_shot2_soundset",
					"jsrs_6x5mm_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			reloadTime = 0.080000;
			//recoil = "recoil_burst_sdar";
			//recoilProne = "recoil_burst_prone_sdar";
			dispersion = 0.001100;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 85;
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_CPad"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
		};
	};

	class BP_M16a2_WDL: BP_M16a2
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\m16\m16a2_wdl_co.paa", "breakingpoint_weapons\textures\m16\m16a2_ironsights_wdl_co.paa"};
	};

	class BP_M16a2_DES: BP_M16a2
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M16\m16a2_des_co.paa", "breakingpoint_weapons\textures\m16\m16a2_ironsights_des_co.paa"};
	};

	class BP_M16a2_URB: BP_M16a2
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M16\m16a2_urb_co.paa", "breakingpoint_weapons\textures\m16\m16a2_ironsights_urb_co.paa"};
	};

	class BP_M16A4: BP_m4
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\M16\BP_m16a4.p3d";
		displayName = "M16A4";
		descriptionShort = "5.56mm Assault Rifle";
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\AFGDMR.rtm"};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		picture = "\breakingpoint_weapons\icons\gear_m16a4_rifle_x_ca.paa";
		inertia = 0.230000;
		initSpeed = -1.01;
		recoil = "recoil_trg20";
		modes[] = {"Single", "Burst", "FullAuto", "far_optic1"};
		class Single : Mode_SemiAuto
		{
			sounds[]=
			{
				"standardsound",
				"silencedsound"
			};
			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_m16a4_shot_soundset",
					"jsrs_m16a4_shot2_soundset",
					"jsrs_6x5mm_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_m16a4_shot_silenced_soundset",
					"jsrs_6x5mm_SD_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			reloadTime = 0.07;
			//recoil = "recoil_single_sdar";
			//recoilProne = "recoil_single_prone_sdar";
			dispersion = 0.001000;
			minRange = 750;
			minRangeProbab = 1.000000;
			midRange = 950;
			midRangeProbab = 1.000000;
			maxRange = 1200;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 1200;
		};
		class Burst : Mode_Burst
		{
			sounds[]=
			{
				"standardsound",
				"silencedsound"
			};
			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_m16a4_shot_soundset",
					"jsrs_m16a4_shot2_soundset",
					"jsrs_6x5mm_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_m16a4_shot_silenced_soundset",
					"jsrs_6x5mm_SD_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			reloadTime = 0.07;
			//recoil = "recoil_burst_sdar";
			//recoilProne = "recoil_burst_prone_sdar";
			dispersion = 0.001000;
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[]=
			{
				"standardsound",
				"silencedsound"
			};
			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_m16a4_shot_soundset",
					"jsrs_m16a4_shot2_soundset",
					"jsrs_6x5mm_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_m16a4_shot_silenced_soundset",
					"jsrs_6x5mm_SD_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			reloadTime = 0.07;
			//recoil = "recoil_auto_sdar";
			//recoilProne = "recoil_auto_prone_sdar";
			dispersion = 0.001000;
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 200;
			midRangeProbab = 1.000000;
			maxRange = 400;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 400;
		};
		class far_optic1: FullAuto
		{
			showToPlayer = 0;
			burst = 6;
			aiRateOfFire = 0.01;
			aiRateOfFireDistance = 700;
			minRange = 300;
			minRangeProbab = 1.000000;
			midRange = 550;
			midRangeProbab = 1.000000;
			maxRange = 700;
			maxRangeProbab = 1.000000;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 90;
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_M12", "BP_muzzle_snds_M"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_AK_ACO", "BP_OldComp", "BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG", "BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS"};
				iconScale = 0.1;
			};
			class PointerSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				displayName = "$STR_A3_PointerSlot0";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_flashlight", "BP_AFG"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
		};

		linkedAttach[] = {"BP_compm4s"};
		chanceAttach[] =
        {
			{"BP_Harris",0.07},
			{"BP_AFG",0.07},
			{"BP_MRT",0.07},
			{"BP_muzzle_snds_M",0.01},
			{"",0.50}
        };
	};

	class BP_M16A4_WDL: BP_M16A4
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\m16\ar10_wdl_co.paa", "breakingpoint_weapons\textures\m110\m110_wdl_co.paa"};
	};

	class BP_M16A4_DES: BP_M16A4
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M16\ar10_des_co.paa", "breakingpoint_weapons\textures\m110\m110_des_co.paa"};
	};

	class BP_M16A4_URB: BP_M16A4
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M16\ar10_urb_co.paa", "breakingpoint_weapons\textures\m110\m110_urb_co.paa"};
	};

	class BP_M16A4_AI: BP_M16A4
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\M16\BP_m16a4.p3d";
		modes[] = {"Single", "FullAuto", "far_optic1"};
		magazines[] = {"BP_500Rnd_762x51_AI"};
		inertia = 0.0000;
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefX = 0.100000;
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\m16_s1.wav", 1.000000, 1.0, 1000};
				begin2[] = {"\breakingpoint_jsrs\sounds\m16_s2.wav", 1.100000, 1.0, 1000};
				begin3[] = {"\breakingpoint_jsrs\sounds\m16_s1.wav", 0.980000, 0.98, 1000};
				begin4[] = {"\breakingpoint_jsrs\sounds\m16_s2.wav", 0.960000, 0.98, 1000};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
 			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M16sd_s3.wav", 1.100000, 1, 300};
				begin2[] = {"\breakingpoint_jsrs\sounds\M16sd_s4.wav", 1.100000, 1, 300};
				begin3[] = {"\breakingpoint_jsrs\sounds\M16sd_s3.wav", 1.100000, 0.9, 300};
				begin4[] = {"\breakingpoint_jsrs\sounds\M16sd_s4.wav", 1.000000, 0.8, 300};
				begin5[] = {"\breakingpoint_jsrs\sounds\M16sd_s4.wav", 1.100000, 1.1, 300};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};
			reloadTime = 0.080000;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			dispersion = 0.000700;
			minRange = 750;
			minRangeProbab = 1.000000;
			midRange = 950;
			midRangeProbab = 1.000000;
			maxRange = 1200;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 1200;
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\m16_s1.wav", 1.000000, 1.0, 1000};
				begin2[] = {"\breakingpoint_jsrs\sounds\m16_s2.wav", 1.100000, 1.0, 1000};
				begin3[] = {"\breakingpoint_jsrs\sounds\m16_s1.wav", 0.980000, 0.98, 1000};
				begin4[] = {"\breakingpoint_jsrs\sounds\m16_s2.wav", 0.960000, 0.98, 1000};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
 			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M16sd_s3.wav", 1.100000, 1, 300};
				begin2[] = {"\breakingpoint_jsrs\sounds\M16sd_s4.wav", 1.100000, 1, 300};
				begin3[] = {"\breakingpoint_jsrs\sounds\M16sd_s3.wav", 1.100000, 0.9, 300};
				begin4[] = {"\breakingpoint_jsrs\sounds\M16sd_s4.wav", 1.000000, 0.8, 300};
				begin5[] = {"\breakingpoint_jsrs\sounds\M16sd_s4.wav", 1.100000, 1.1, 300};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};
			reloadTime = 0.07;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			dispersion = 0.001207;
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 200;
			midRangeProbab = 1.000000;
			maxRange = 400;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 400;
		};
		class far_optic1: FullAuto
		{
			showToPlayer = 0;
			burst = 6;
			aiRateOfFire = 0.01;
			aiRateOfFireDistance = 700;
			minRange = 300;
			minRangeProbab = 1.000000;
			midRange = 550;
			midRangeProbab = 1.000000;
			maxRange = 700;
			maxRangeProbab = 1.000000;
		};
	};

	class BP_M4B2: BP_M16A4
	{
		scope = 2;
		maxZeroing = 600;
		model = "\breakingpoint_weapons\models\M4A3_old\BP_M4Tac.p3d";
		displayName = "M4 Block 2";
		descriptionShort = "5.56mm Assault Rifle";
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\AFGDMR.rtm"};
		//magazines[] = {"BP_556x45_Stanag", "BP_556x45_StanagSD", "BP_556x45_StanagMK262", "BP_556old_Stanag", "BP_5Rnd_223_Mag", "BP_5Rnd_223BTHP_mag"};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		picture = "\breakingpoint_weapons\icons\gear_m4b2_rifle_x_ca.paa";
		inertia = 0.200000;
		initSpeed = -1.02;
		modes[] = {"Single", "Burst", "FullAuto", "far_optic1"};
		class Single : Mode_SemiAuto
		{
			sounds[]=
			{
				"standardsound",
				"silencedsound"
			};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_m4b2_shot_soundset",
					"jsrs_m4b2_shot2_soundset",
					"jsrs_6x5mm_reflector_2",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_m4b2_shot_silenced_soundset",
					"jsrs_6x5mm_SD_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			reloadTime = 0.080000;
			//recoil = "recoil_single_sdar";
			//recoilProne = "recoil_single_prone_sdar";
			dispersion = 0.001060;
		};
		class Burst : Mode_Burst
		{
			sounds[]=
			{
				"standardsound",
				"silencedsound"
			};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_m4b2_shot_soundset",
					"jsrs_m4b2_shot2_soundset",
					"jsrs_6x5mm_reflector_2",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_m4b2_shot_silenced_soundset",
					"jsrs_6x5mm_SD_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			reloadTime = 0.080000;
			//recoil = "recoil_burst_sdar";
			//recoilProne = "recoil_burst_prone_sdar";
			dispersion = 0.001060;
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[]=
			{
				"standardsound",
				"silencedsound"
			};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_m4b2_shot_soundset",
					"jsrs_m4b2_shot2_soundset",
					"jsrs_6x5mm_reflector_2",
					"jsrs_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_m4b2_shot_silenced_soundset",
					"jsrs_6x5mm_SD_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			reloadTime = 0.07;
			recoil = "recoil_auto_sdar";
			recoilProne = "recoil_auto_prone_sdar";
			dispersion = 0.001400;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_M12", "BP_muzzle_snds_M"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_AK_ACO","BP_OldComp", "BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG", "BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS"};
				iconScale = 0.1;
			};
			class PointerSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				displayName = "$STR_A3_PointerSlot0";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_flashlight", "BP_AFG"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
		};
	};

	class BP_M4B2_WDL: BP_M4B2
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\m4a3_old\m4_pmag2_wdl_co.paa", "breakingpoint_weapons\textures\m4a3_old\m4_300_wdl_co.paa", "breakingpoint_weapons\textures\m4a3_old\flip_wdl_co.paa", "\breakingpoint_weapons\textures\M4A3_old\m4_wdl_co.paa"};
	};

	class BP_M4B2_DES: BP_M4B2
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\m4a3_old\m4_pmag2_des_co.paa", "breakingpoint_weapons\textures\m4a3_old\m4_300_des_co.paa", "breakingpoint_weapons\textures\m4a3_old\flip_des_co.paa", "\breakingpoint_weapons\textures\M4A3_old\m4_des_co.paa"};
	};

	class BP_M4B2_URB: BP_M4B2
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\m4a3_old\m4_pmag2_urb_co.paa", "breakingpoint_weapons\textures\m4a3_old\m4_300_urb_co.paa", "breakingpoint_weapons\textures\m4a3_old\flip_urb_co.paa", "\breakingpoint_weapons\textures\M4A3_old\m4_urb_co.paa"};
	};

	class BP_G36C : Rifle_Base_F_BP
	{
        scope = 2;
		maxZeroing = 600;
		model = "\breakingpoint_weapons\models\G36\BP_G36.p3d";
		displayName = "HK G36 Carbine";
		picture = "\breakingpoint_weapons\icons\gear_g36_rifle_x_ca.paa";
		magazines[] = {"BP_556x45_Stanag", "BP_556x45_Stanag_Tracer", "BP_556x45_StanagSD", "BP_556x45_StanagM855A1", "BP_556x45_StanagMK262", "BP_556old_Stanag", "BP_5Rnd_223_Mag", "BP_5Rnd_223BTHP_mag", "BP_556x45_Rubber"};
		descriptionUse = "HK G36 Carbine";
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Firemode_ugl",0.41622776,1.2,7};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		handAnim[] = {};
		reloadAction = "GestureReloadMX";
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_MX.wss", 0.31, 1, 30};
		descriptionShort = "5.56mm Assault Rifle";
		inertia = 0.200000; //Inertiachange, reduced.
		initSpeed = -0.88;
		modes[] = {"Single", "FullAuto"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\mk18_s1.wav", 1.000000, 1.1, 1000};
				begin2[] = {"\breakingpoint_jsrs\sounds\mk18_s2.wav", 1.100000, 1.0, 1000};
				begin3[] = {"\breakingpoint_jsrs\sounds\mk18_s3.wav", 0.980000, 0.88, 1000};
				begin4[] = {"\breakingpoint_jsrs\sounds\mk18_s4.wav", 0.960000, 0.98, 1000};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18", 1.000000, 1, 120};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19", 1.000000, 1, 120};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11", 1.000000, 1, 120};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-12", 1.000000, 0.9, 120};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			reloadTime = 0.085;
			//recoil = "recoil_single_trg";
			//recoilProne = "recoil_single_prone_trg";
			dispersion = 0.002200;
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";

 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\mk18_s1.wav", 1.000000, 1.1, 1000};
				begin2[] = {"\breakingpoint_jsrs\sounds\mk18_s2.wav", 1.100000, 1.0, 1000};
				begin3[] = {"\breakingpoint_jsrs\sounds\mk18_s3.wav", 0.980000, 0.88, 1000};
				begin4[] = {"\breakingpoint_jsrs\sounds\mk18_s4.wav", 0.960000, 0.98, 1000};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18", 1.000000, 1, 120};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19", 1.000000, 1, 120};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11", 1.000000, 1, 120};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-12", 1.000000, 0.9, 120};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			reloadTime = 0.085;
			//recoil = "recoil_auto_trg";
			//recoilProne = "recoil_auto_prone_trg";
			dispersion = 0.002200;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 70; //Masschange, reduced.
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_M12", "BP_muzzle_snds_M"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_AK_ACO","BP_OldComp", "BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG", "BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS"};
				iconScale = 0.1;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight"};
				iconScale = 0.1;
			};
		};
	};

	class BP_G36C_WDL: BP_G36C
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\G36\g36_wdl_co.paa", "breakingpoint_weapons\textures\G36\g36_rail_wdl_co.paa"};
	};

	class BP_G36C_DES: BP_G36C
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\G36\g36_des_co.paa", "breakingpoint_weapons\textures\G36\g36_rail_des_co.paa"};
	};

	class BP_G36C_URB: BP_G36C
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\G36\g36_urb_co.paa", "breakingpoint_weapons\textures\G36\g36_rail_urb_co.paa"};
	};

	class BP_Mk12mod1: BP_M16A4
	{
		scope = 2;
		maxZeroing = 900;
		model = "\breakingpoint_weapons\models\SPR\BP_SPR.p3d";
		displayName = "Mk12 SPR";
		descriptionShort = "Special Purpose Rifle derived from the M16";
		//magazines[] = {"BP_556x45_StanagMK262", "BP_556x45_Stanag", "BP_556x45_StanagSD", "BP_556x45_StanagM855A1", "BP_556old_Stanag", "BP_5Rnd_223_Mag", "BP_5Rnd_223BTHP_mag", "BP_556x45_Rubber"};
		picture = "\breakingpoint_weapons\icons\gear_mk12spr_rifle_x_ca.paa";
		handAnim[] = {};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		inertia = 0.300000;
		initSpeed = -1.01;
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
		sounds[]=
			{
				"standardsound",
				"silencedsound"
			};
			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_mk12mod1_shot_soundset",
					"jsrs_mk12mod1_shot2_soundset",
					"jsrs_6x5mm_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_mk12mod1_shot_silenced_soundset",
					"jsrs_6x5mm_SD_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			reloadtime = 0.071000;
			//recoil = "recoil_single_sdar";
			//recoilProne = "recoil_single_prone_sdar";
			dispersion = 0.000805;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
            mass = 95;
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_M12", "BP_muzzle_snds_M"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "optic_MRCO", "optic_Arco", "BP_optic_ACOG",  "BP_compm4s", "BP_OldComp"};
				iconScale = 0.1;
			};
			class PointerSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				displayName = "$STR_A3_PointerSlot0";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_flashlight"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
		};

		linkedAttach[] = {"BP_m3lr"};
		chanceAttach[] =
        {
			{"BP_Harris",0.02},
			{"BP_CPad",0.02},
			{"BP_M3A2",0.01},
			{"",0.60}
        };
	};

	class BP_Mk12mod1_WDL: BP_Mk12mod1
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\SPR\wpn_spr_wdl_co.paa"};
	};

	class BP_Mk12mod1_DES: BP_Mk12mod1
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\SPR\wpn_spr_des_co.paa"};
	};

	class BP_Mk12mod1_URB: BP_Mk12mod1
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\SPR\wpn_spr_urb_co.paa"};
	};

	class BP_Mk12mod2: BP_Mk12mod1
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\SPR\BP_SPR2.p3d";
		displayName = "Mk12 SPR Mod 0";
	};

	class BP_Mk12mod1Spec: BP_Mk12mod1
	{
	    scope = 2;
		model = "\breakingpoint_weapons\models\SPR\BP_SPRS.p3d";
		displayName = "Mk12 Mod 1";
		descriptionShort = "Heavily modified Designated Marksman variant of the M16 customized for special operations";
		//magazines[] = {"BP_556x45_StanagMK262", "BP_556x45_Stanag", "BP_556x45_StanagSD", "BP_556x45_StanagM855A1", "BP_556old_Stanag", "BP_5Rnd_223_Mag", "BP_5Rnd_223BTHP_mag", "BP_556x45_Rubber"};
		picture = "\breakingpoint_weapons\icons\gear_mk12mod1_rifle_x_ca.paa";
		handAnim[] = {};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		inertia = 0.280000;
		initSpeed = -1.03;
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_mk12mod1_shot_soundset",
					"jsrs_mk12mod1_shot2_soundset",
					"jsrs_6x5mm_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_mk12mod1_shot_silenced_soundset",
					"jsrs_6x5mm_SD_reflector_2",
					"jsrs_556mm_echo_soundset"
				};
			};
			reloadtime = 0.071000;
			//recoil = "recoil_single_mk20";
			//recoilProne = "recoil_single_prone_mk20";
			dispersion = 0.000689;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
            mass = 95;
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_M12", "BP_muzzle_snds_M"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "optic_MRCO", "optic_Arco", "BP_optic_ACOG",  "BP_compm4s", "BP_OldComp"};
				iconScale = 0.1;
			};
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_flashlight"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
		};

		linkedAttach[] = {"BP_muzzle_snds_M12", "BP_M3A2"};
		chanceAttach[] =
        {
			{"BP_Harris",0.02},
			{"BP_CPad",0.02},
			{"BP_L14X",0.01},
			{"",0.50}
        };
	};

	class BP_Mk12mod1Spec_WDL: BP_Mk12mod1Spec
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\SPR\wpn_spr_wdl_co.paa", "breakingpoint_weapons\textures\m110\prs_wdl_co.paa"};
	};

	class BP_Mk12mod1Spec_DES: BP_Mk12mod1Spec
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\SPR\wpn_spr_des_co.paa", "breakingpoint_weapons\textures\m110\prs_des_co.paa"};
	};

	class BP_Mk12mod1Spec_URB: BP_Mk12mod1Spec
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\SPR\wpn_spr_urb_co.paa", "breakingpoint_weapons\textures\m110\prs_urb_co.paa"};
	};

	class BP_MP5 : Rifle_Base_F_BP
	{
		maxZeroing = 300;
		scope = 2;
		displayName = "HK MP5";
		model = "\breakingpoint_weapons\models\MP5\BP_mp5.p3d";
		picture = "\breakingpoint_weapons\icons\gear_mp5_rifle_x_ca.paa";
		discreteDistance[] = {50, 100, 150, 200};
		discreteDistanceInitIndex = 0;
		handAnim[] = {"OFP2_ManSkeleton", "breakingpoint_weapons\anim\HKMP5.rtm"};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Firemode_ugl",0.41622776,1.2,7};
		inertia = 0.150000;
		initSpeed = -1.10;
		recoil = "recoil_smg_02";
		modes[] = {"Single", "Burst", "FullAuto"};
		class Single : Mode_SemiAuto {
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType {
				begin1[] = {"\breakingpoint_jsrs\sounds\P226_s1.wav", 1.100000, 1, 300};
				begin2[] = {"\breakingpoint_jsrs\sounds\P226_s2.wav", 1.100000, 1, 300};
				begin3[] = {"\breakingpoint_jsrs\sounds\P226_s1.wav", 1.00000, 0.7, 300};
				begin4[] = {"\breakingpoint_jsrs\sounds\P226_s2.wav", 1.300000, 0.8, 300};
				begin5[] = {"\breakingpoint_jsrs\sounds\P226_s1.wav", 1.200000, 1.3, 300};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\P226SD_s1.wav", 1.000000, 1, 30};
				begin2[] = {"\breakingpoint_jsrs\sounds\P226SD_s2.wav", 1.000000, 1, 30};
				begin3[] = {"\breakingpoint_jsrs\sounds\P226SD_s3.wav", 1.000000, 0.9, 30};
				soundBegin[] = {"begin1", 0.34, "begin2", 0.33, "begin3", 0.33};
 			};
			reloadTime = 0.075;
			//recoil = "recoil_single_pdw";
			//recoilProne = "recoil_single_prone_pdw";
			dispersion = 0.002730;
		};
		class Burst : Mode_Burst
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType {
				begin1[] = {"\breakingpoint_jsrs\sounds\P226_s1.wav", 0.700000, 1, 300};
				begin2[] = {"\breakingpoint_jsrs\sounds\P226_s2.wav", 0.600000, 1, 300};
				begin3[] = {"\breakingpoint_jsrs\sounds\P226_s1.wav", 0.75000, 0.7, 300};
				begin4[] = {"\breakingpoint_jsrs\sounds\P226_s2.wav", 0.6300000, 0.8, 300};
				begin5[] = {"\breakingpoint_jsrs\sounds\P226_s1.wav", 0.8200000, 1.3, 300};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\P226SD_s1.wav", 1.000000, 1, 30};
				begin2[] = {"\breakingpoint_jsrs\sounds\P226SD_s2.wav", 1.000000, 1, 30};
				begin3[] = {"\breakingpoint_jsrs\sounds\P226SD_s3.wav", 1.000000, 0.9, 30};
				begin4[] = {"\breakingpoint_jsrs\sounds\P226SD_s1.wav", 1.200000, 1.2, 30};
				begin5[] = {"\breakingpoint_jsrs\sounds\P226SD_s2.wav", 1.100000, 0.7, 30};
				begin6[] = {"\breakingpoint_jsrs\sounds\P226SD_s3.wav", 1.300000, 0.9, 30};
				soundBegin[] = {"begin1", 0.34, "begin2", 0.33, "begin3", 0.33};
 			};
			reloadTime = 0.075;
			//recoil = "recoil_burst_pdw";
			//recoilProne = "recoil_burst_prone_pdw";
			dispersion = 0.002730;
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType {
				begin1[] = {"\breakingpoint_jsrs\sounds\P226_s1.wav", 1.100000, 1, 300};
				begin2[] = {"\breakingpoint_jsrs\sounds\P226_s2.wav", 1.100000, 1, 300};
				begin3[] = {"\breakingpoint_jsrs\sounds\P226_s1.wav", 1.00000, 0.7, 300};
				begin4[] = {"\breakingpoint_jsrs\sounds\P226_s2.wav", 1.300000, 0.8, 300};
				begin5[] = {"\breakingpoint_jsrs\sounds\P226_s1.wav", 1.200000, 1.3, 300};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\P226SD_s1.wav", 1.000000, 1, 30};
				begin2[] = {"\breakingpoint_jsrs\sounds\P226SD_s2.wav", 1.000000, 1, 30};
				begin3[] = {"\breakingpoint_jsrs\sounds\P226SD_s3.wav", 1.000000, 0.9, 30};
				begin4[] = {"\breakingpoint_jsrs\sounds\P226SD_s1.wav", 1.200000, 1.2, 30};
				begin5[] = {"\breakingpoint_jsrs\sounds\P226SD_s2.wav", 1.100000, 0.7, 30};
				begin6[] = {"\breakingpoint_jsrs\sounds\P226SD_s3.wav", 1.300000, 0.9, 30};
				soundBegin[] = {"begin1", 0.34, "begin2", 0.33, "begin3", 0.33};
 			};
			reloadTime = 0.075;
			//recoil = "recoil_auto_pdw";
			//recoilProne = "recoil_auto_prone_pdw";
			dispersion = 0.002730;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 60;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_Mk12Sup", "BP_gemtech9", "BP_m9qd"};
				iconScale = 0.1;
			};
			class CowsSlot : CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_compm4s", "optic_aco", "optic_ACO_grn", "optic_Holosight"};
				iconScale = 0.1;
			};
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
		};
		opticsZoomMin = 0.375;
		opticsZoomMax = 1.1;
		opticsZoomInit = 0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		reloadAction = "GestureReloadMX";
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_MX.wss", 0.31, 1, 30};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		magazines[] = {"BP_30Rnd_9x21_Mag", "BP_33Rnd_9x19OVP", "BP_19Rnd_9x19", "BP_16Rnd_9x21_Mag", "BP_17Rnd_9x19", "BP_33Rnd_9x19", "BP_17Rnd_9x19_SD", "BP_15Rnd_9x19_M9", "BP_15Rnd_9x19OVP"};
		descriptionShort = "9mm Submachine gun";
	};

	class BP_MP5_WDL: BP_MP5
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"breakingpoint_weapons\textures\mp5\mp5_wdl_co.paa", "breakingpoint_weapons\textures\mp5\mp5_sd_wdl_co.paa"};
	};

	class BP_MP5_DES: BP_MP5
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\mp5\mp5_des_co.paa", "breakingpoint_weapons\textures\mp5\mp5_sd_des_co.paa"};
	};

	class BP_MP5_URB: BP_MP5
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\mp5\mp5_urb_co.paa", "breakingpoint_weapons\textures\mp5\mp5_sd_urb_co.paa"};
	};

	class BP_LeeEnfield: Rifle_Base_F_BP
	{
		scope = 2;
		maxZeroing = 800;
		displayName = "Enfield MkIV Collector";
		descriptionShort = "A well maintained collectible high power WWI bolt action rifle";
		model = "\breakingpoint_weapons\models\LeeEnfield\BP_LeeEnfield.p3d";
		picture = "\breakingpoint_weapons\icons\gear_enfieldcollector_rifle_x_ca.paa";
		discreteDistance[] = {100, 200, 300, 400, 500, 600};
		discreteDistanceInitIndex = 1;
		handAnim[] = {"OFP2_ManSkeleton", "breakingpoint_weapons\anim\LeeEnfield.rtm"};
		magazines[] = {"BP_10Rnd_303_Mag", "BP_10rnd_303_JSP_Mag"};
		inertia = 0.40000; //Inertiachange, increased.
		recoil = "recoil_ebr";
		muzzles[] = {"this", "Butt"};
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_enfield_shot_soundset",
					"jsrs_enfield_shot2_soundset",
					"jsrs_enfield_shell_soundset",
					"jsrs_9x3mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
 			/*class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\NewEnfield_S1.wav", 1.378279, 1, 1700};
				begin2[] = {"breakingpoint_jsrs\sounds\NewEnfield_S2.wav", 1.478279, 1, 1700};
				begin3[] = {"breakingpoint_jsrs\sounds\NewEnfield_S3.wav", 1.378279, 1, 1700};
				begin4[] = {"breakingpoint_jsrs\sounds\NewEnfield_S4.wav", 1.378279, 1, 1700};
				soundBegin[] = {"begin1", 0.25000, "begin2", 0.25000, "begin3", 0.25000, "begin4", 0.25000};
 			};		*/
			reloadTime = 1.20000;
			//recoil = "recoil_single_ebr";
			//recoilProne = "recoil_single_prone_ebr";
			dispersion = 0.000600;
		};
		class GunParticles: GunParticles
		{
			class FirstEffect
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 105;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class CowsSlot : CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_ZF42", "BP_Unertl8x", "BP_Unertl32x", "BP_EnfieldOptic2"};
				iconScale = 0.1;
			};
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_CPad"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
		};

		chanceAttach[] =
        {
			{"BP_Harris",0.02},
			{"BP_CPad",0.02},
			{"BP_EnfieldOptic2",0.10},
			{"",0.50}
        };
		reloadSound[] = {"\breakingpoint_jsrs\sounds\Lee_Bolt.wav", 0.380000, 1, 70};
		reloadMagazineSound[] = {"breakingpoint_jsrs\sounds\Lee_reload.wav", 0.380000, 1, 70};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
	};

	class BP_LeeEnfield_WDL: BP_LeeEnfield
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\LeeEnfield\data\lee_enfield_wdl_co.paa"};
	};

	class BP_LeeEnfield_DES: BP_LeeEnfield
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\LeeEnfield\data\lee_enfield_des_co.paa"};
	};

	class BP_LeeEnfield_URB: BP_LeeEnfield
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\LeeEnfield\data\lee_enfield_urb_co.paa"};
	};

	class BP_LeeEnfield2: BP_LeeEnfield
	{
		scope = 2;
	};

	class BP_LeeEnfieldK: BP_LeeEnfield
	{
		scope = 2;
		maxZeroing = 1000;
		displayName = "Enfield MkIV Collector w/Bayonet";
		descriptionShort = "A well maintained collectible high power WWI bolt action rifle";
		model = "\breakingpoint_weapons\models\LeeEnfield\BP_LeeEnfieldK.p3d";
		picture = "\breakingpoint_weapons\icons\gear_enfieldk_rifle_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton", "breakingpoint_weapons\anim\LeeEnfield.rtm"};
		inertia = 0.450000;
		muzzles[] = {"this", "Bayonet"};
		class Bayonet: UGL_F
		{
			magazines[] = {"BP_Bayonet_Stab"};
			displayName = "Bayonet";
			maxZeroing = 5;
			discreteDistanceInitIndex = 0;
			discreteDistance[] = {5};
			class GunParticles: GunParticles
			{
				class FirstEffect
				{
					effectName = "";
					positionName = "Usti hlavne";
					directionName = "Konec hlavne";
				};
			};
			modes[] = {"Single"};
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class BaseSoundModeType
				{
					closure1[] = {};
					soundClosure[] = {};
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.95, 10};
					begin2[] = {};
					soundBegin[] = {"begin1", 1};
				};
			};
			reloadMagazineSound[] = {};
			drySound[] = {};
			magazineReloadTime = 0;
			autoReload = 1;
			reloadTime = 1.400000;
			optics = 0;
			modelOptics = "-";
			cameraDir = "";
			memoryPointCamera = "eye";
			opticsZoomMin = 0.375000;
			opticsZoomMax = 1.100000;
			opticsZoomInit = 0.750000;
			weaponInfoType = "RscWeaponZeroing";
		};

		chanceAttach[] =
        {
			{"BP_Harris",0.04},
			{"BP_CPad",0.04},
			{"BP_EnfieldOptic2",0.12},
			{"",0.60}
        };
	};

	class BP_LeeEnfieldK_WDL: BP_LeeEnfieldK
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\LeeEnfield\data\lee_enfield_wdl_co.paa", "\breakingpoint\textures\items\knife_wdl_co.paa"};
	};

	class BP_LeeEnfieldK_DES: BP_LeeEnfieldK
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\LeeEnfield\data\lee_enfield_des_co.paa", "\breakingpoint\textures\items\knife_des_co.paa"};
	};

	class BP_LeeEnfieldK_URB: BP_LeeEnfieldK
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\LeeEnfield\data\lee_enfield_urb_co.paa", "\breakingpoint\textures\items\knife_urb_co.paa"};
	};

	class BP_LeeEnfield_old: BP_LeeEnfield
	{
		scope = 2;
		maxZeroing = 300;
		displayName = "Old Enfield MkIII";
		descriptionShort = "An old, poorly maintained high power WWI bolt action rifle";
		model = "\breakingpoint_weapons\models\LeeEnfieldOld\BP_LeeEnfield_old.p3d";
		picture = "\breakingpoint_weapons\icons\gear_oldenfield_rifle_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton", "breakingpoint_weapons\anim\LeeEnfield.rtm"};
		magazines[] = {"BP_10Rnd_303_Mag", "BP_10Rnd_303_JSP_Mag"};
		muzzles[] = {"this", "Butt"};
		initSpeed = -0.92;
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_enfieldold_shot_soundset",
					"jsrs_enfield_shot2_soundset",
					"jsrs_enfield_shell_soundset",
					"jsrs_9x3mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
			reloadTime = 1.50000;
			//recoil = "recoil_single_ebr";
			//recoilProne = "recoil_single_prone_ebr";
			dispersion = 0.000800;
		};

		chanceAttach[] =
        {
			{"BP_Harris",0.02},
			{"BP_CPad",0.02},
			{"BP_EnfieldOptic2",0.10},
			{"",0.60}
        };
	};

	class BP_LeeEnfield_old_WDL: BP_LeeEnfield_old
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\LeeEnfield\data\lee_enfield_old_wdl_co.paa"};
	};

	class BP_LeeEnfield_old_DES: BP_LeeEnfield_old
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\LeeEnfield\data\lee_enfield_old_des_co.paa"};
	};

	class BP_LeeEnfield_old_URB: BP_LeeEnfield_old
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\LeeEnfield\data\lee_enfield_old_urb_co.paa"};
	};

    class BP_LeeEnfield_old2: BP_LeeEnfield_old
	{
		scope = 2;
	};

	class BP_Garand: Rifle_Base_F_BP
	{
		scope = 2;
		maxZeroing = 600;
		displayName = "M1 Garand";
		descriptionShort = "A well maintained WWII infantry rifle";
		model = "\breakingpoint_weapons\models\Garand\BP_Garand.p3d";
		picture = "\breakingpoint_weapons\icons\gear_garand_rifle_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton", "breakingpoint_weapons\anim\M24.rtm"};
		magazines[] = {"BP_8Rnd_3006_Mag", "BP_8Rnd_3006M_Mag", "BP_5Rnd_3006_Mag", "BP_5Rnd_3006M_Mag"};
		inertia = 0.390000;
		recoil = "recoil_dmr_01";
		initSpeed = -0.98;
		muzzles[] = {"this", "Butt"};
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\M1_S1.wav", 1.218279, 0.85, 1700};
				begin2[] = {"breakingpoint_jsrs\sounds\M1_S2.wav", 1.178279, 0.9, 1700};
				begin3[] = {"breakingpoint_jsrs\sounds\M1_S3.wav", 1.238279, 1, 1700};
				begin4[] = {"breakingpoint_jsrs\sounds\M1_S1.wav", 1.178279, 0.95, 1700};
				soundBegin[] = {"begin1", 0.25000, "begin2", 0.25000, "begin3", 0.25000, "begin4", 0.25000};
 			};
			reloadTime = 0.12;//reloadtimechange, test value
			//recoil = "recoil_single_gm6";
			//recoilProne = "recoil_single_prone_gm6";
			dispersion = 0.000900;
		};
		class GunParticles: GunParticles
		{
			class FirstEffect
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 90;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class CowsSlot : CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_ZF42", "BP_Unertl8x", "BP_Unertl32x", "BP_EnfieldOptic2"};
				iconScale = 0.1;
			};
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_CPad"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
		};

		linkedAttach[] = {"BP_Unertl8x"};
		chanceAttach[] =
        {
            {"BP_CPad",0.01},
			{"BP_Harris",0.01},
			{"BP_Unertl8x",0.10},
			{"BP_EnfieldOptic2",0.10},
			{"",0.50}
        };

		reloadAction = "GestureReloadLRR";
		reloadSound[] = {"\breakingpoint_jsrs\sounds\Lee_Bolt.wav", 0.380000, 1, 70};
		reloadMagazineSound[] = {"breakingpoint_jsrs\sounds\M1_reload.wav", 0.480000, 0.9, 50};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
	};

	class BP_Garand_WDL: BP_Garand
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\garand\garand_wdl_co.paa", "\breakingpoint_weapons\textures\m21\m14_wdl_co.paa"};
	};

	class BP_Garand_DES: BP_Garand
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\garand\garand_des_co.paa", "\breakingpoint_weapons\textures\m21\m14_des_co.paa"};
	};

	class BP_Garand_URB: BP_Garand
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\garand\garand_urb_co.paa", "\breakingpoint_weapons\textures\m21\m14_urb_co.paa"};
	};

	class BP_GarandK: Rifle_Base_F_BP
	{
		scope = 2;
		maxZeroing = 600;
		displayName = "M1 Garand Bayonet";
		descriptionShort = "A well maintained WWII infantry rifle";
		model = "\breakingpoint_weapons\models\Garand\BP_GarandK.p3d";
		picture = "\breakingpoint_weapons\icons\gear_garandk_rifle_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton", "breakingpoint_weapons\anim\M24.rtm"};
		magazines[] = {"BP_8Rnd_3006_Mag", "BP_8Rnd_3006M_Mag", "BP_5Rnd_3006_Mag", "BP_5Rnd_3006M_Mag"};
		inertia = 0.450000;
		initSpeed = -0.98;
		recoil = "recoil_dmr_01";
		muzzles[] = {"this", "Bayonet"};
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\M1_S1.wav", 1.218279, 0.85, 1700};
				begin2[] = {"breakingpoint_jsrs\sounds\M1_S2.wav", 1.178279, 0.9, 1700};
				begin3[] = {"breakingpoint_jsrs\sounds\M1_S3.wav", 1.238279, 1, 1700};
				begin4[] = {"breakingpoint_jsrs\sounds\M1_S1.wav", 1.178279, 0.95, 1700};
				soundBegin[] = {"begin1", 0.25000, "begin2", 0.25000, "begin3", 0.25000, "begin4", 0.25000};
 			};
			reloadTime = 0.12;
			//recoil = "recoil_single_ebr";
			//recoilProne = "recoil_single_prone_ebr";
			dispersion = 0.001350;
		};
		class Bayonet: UGL_F
		{
			magazines[] = {"BP_Bayonet_Stab"};
			displayName = "Bayonet";
			maxZeroing = 5;
			discreteDistanceInitIndex = 0;
			discreteDistance[] = {5};
			class GunParticles: GunParticles
			{
				class FirstEffect
				{
					effectName = "";
					positionName = "Usti hlavne";
					directionName = "Konec hlavne";
				};
			};
			modes[] = {"Single"};
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class BaseSoundModeType
				{
					closure1[] = {};
					soundClosure[] = {};
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.95, 10};
					begin2[] = {};
					soundBegin[] = {"begin1", 1};
				};
			};
			reloadMagazineSound[] = {};
			drySound[] = {};
			magazineReloadTime = 0;
			autoReload = 1;
			reloadTime = 1.400000;
			optics = 0;
			modelOptics = "-";
			cameraDir = "";
			memoryPointCamera = "eye";
			opticsZoomMin = 0.375000;
			opticsZoomMax = 1.100000;
			opticsZoomInit = 0.750000;
			weaponInfoType = "RscWeaponZeroing";
		};
		class GunParticles: GunParticles
		{
			class FirstEffect
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 95;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class CowsSlot : CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_ZF42", "BP_Unertl8x", "BP_Unertl32x", "BP_EnfieldOptic2"};
				iconScale = 0.1;
			};
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_CPad"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
		};

		linkedAttach[] = {"BP_Unertl8x"};
		chanceAttach[] =
        {
            {"BP_CPad",0.02},
			{"BP_Harris",0.06},
			{"",0.50}
        };

		reloadAction = "GestureReloadLRR";
		reloadSound[] = {"\breakingpoint_jsrs\sounds\Lee_Bolt.wav", 0.380000, 1, 70};
		reloadMagazineSound[] = {"breakingpoint_jsrs\sounds\M1_reload.wav", 0.480000, 0.9, 50};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
	};

	class BP_GarandK_WDL: BP_GarandK
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\garand\garand_wdl_co.paa", "\breakingpoint_weapons\textures\m21\m14_wdl_co.paa", "\breakingpoint\textures\items\knife_wdl_co.paa"};
	};

	class BP_GarandK_DES: BP_GarandK
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\garand\garand_des_co.paa", "\breakingpoint_weapons\textures\m21\m14_des_co.paa", "\breakingpoint\textures\items\knife_des_co.paa"};
	};

	class BP_GarandK_URB: BP_GarandK
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\garand\garand_urb_co.paa", "\breakingpoint_weapons\textures\m21\m14_urb_co.paa", "\breakingpoint\textures\items\knife_urb_co.paa"};
	};

	class BP_GarandU: BP_Garand
	{
		scope = 2;
	};

	class BP_SVT40: Rifle_Base_F_BP
	{
		scope = 2;
		maxZeroing = 1400;
		displayName = "Tokarev SVT-40";
		descriptionShort = "Russian WWII high power rifle";
		model = "\breakingpoint_weapons\models\SVT40\BP_SVT40.p3d";
		picture = "\breakingpoint_weapons\icons\gear_svt40_rifle_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M24.rtm"};
		magazines[] = {"BP_762x54_SVD", "BP_762x54_7N1_10rnd", "BP_762x54_7N13_10rnd"};
		inertia = 0.350000;
		recoil = "recoil_dmr_01";
		initSpeed = -0.97;
		muzzles[] = {"this", "Butt"};
		modes[] = {"Single"};
		bullet1[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Metal_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet2[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Metal_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet3[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Metal_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet4[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Metal_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet5[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Dirt_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet6[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Dirt_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet7[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Dirt_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet8[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Dirt_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet9[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Grass_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet10[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Grass_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet11[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Grass_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet12[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Grass_4.ogg",
			2.0099001,
			1,
			10
		};
		soundBullet[]=
		{
			"bullet1",
			0.079999998,
			"bullet2",
			0.083999999,
			"bullet3",
			0.083999999,
			"bullet4",
			0.083999999,
			"bullet5",
			0.093000002,
			"bullet6",
			0.093000002,
			"bullet7",
			0.074000001,
			"bullet8",
			0.074000001,
			"bullet9",
			0.083999999,
			"bullet10",
			0.085000001,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound};
			class basesoundmodetype
			{
				soundclosure[]={};
			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_svt40_shot_soundset",
					"jsrs_svt40_shot2_soundset",
					"svt_InteriorTail_SoundSet",
					"jsrs_rahim_shell_soundset",
					"jsrs_9x3mm_reflector_2",
					"jsrs_762mm_echo_soundset"
				};
			};
		/*class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\SVD_s1.wav", 1.022020, 1.1, 1200};
				begin2[] = {"\breakingpoint_jsrs\sounds\SVD_s2.wav", 1.022020, 0.9, 1200};
				begin3[] = {"\breakingpoint_jsrs\sounds\SVD_s1.wav", 1.022020, 0.84, 1200};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};			*/
			reloadTime = 0.095;
			//recoil = "recoil_single_ebr";
			//recoilProne = "recoil_single_prone_ebr";
			dispersion = 0.000936;
		};
		class GunParticles: GunParticles
		{
			class FirstEffect
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 85;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class CowsSlot : CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_PSO1", "BP_PSOP", "BP_PSO35"};
				iconScale = 0.1;
			};
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_CPad"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
		};

		chanceAttach[] =
        {
            {"BP_PSO1",0.50},
            {"BP_CPad",0.03},
			{"BP_Harris",0.05}
        };

		reloadSound[] = {"\breakingpoint_jsrs\sounds\Lee_Bolt.wav", 0.380000, 1, 70};
		reloadMagazineSound[] = {"breakingpoint_jsrs\sounds\Lee_reload.wav", 0.380000, 1, 70};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
	};

	class BP_SVT40_WDL: BP_SVT40
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\m21\m14_wdl_co.paa", "\breakingpoint_weapons\textures\svdk\svd_wdl_co.paa", "\breakingpoint_weapons\textures\SA58\sa58_wdl_co.paa", "\breakingpoint_weapons\textures\fnfalm\fnfal_wdl_co.paa"};
	};

	class BP_SVT40_DES: BP_SVT40
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\m21\m14_des_co.paa", "\breakingpoint_weapons\textures\svdk\svd_des_co.paa", "\breakingpoint_weapons\textures\SA58\sa58_des_co.paa", "\breakingpoint_weapons\textures\fnfalm\fnfal_des_co.paa"};
	};

	class BP_SVT40_URB: BP_SVT40
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\m21\m14_urb_co.paa", "\breakingpoint_weapons\textures\svdk\svd_urb_co.paa", "\breakingpoint_weapons\textures\SA58\sa58_urb_co.paa", "\breakingpoint_weapons\textures\fnfalm\fnfal_urb_co.paa"};
	};

	class BP_SVT40_2: BP_SVT40
	{
		scope = 2;
	};

	class BP_1866: Rifle_Base_F_BP
	{
		scope = 2;
		maxZeroing = 500;
		displayName = "Winchester 1866";
		descriptionShort = "A classic lever rifle chambered for .45ACP";
		model = "\breakingpoint_weapons\models\1866\BP_1866.p3d";
		picture = "\breakingpoint_weapons\icons\gear_1866_rifle_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton", "breakingpoint_weapons\anim\LeeEnfield.rtm"};
		magazines[] = {"BP_7Rnd_45acp", "BP_7Rnd_45JHP"};
		inertia = 0.280000;
		recoil = "recoil_mk20";
		initSpeed = -1.12;
		muzzles[] = {"this", "Butt"};
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {closure1,0.5, closure2,0.5};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\1866_S1.wss", 1.078279, 1, 700};
				begin2[] = {"breakingpoint_jsrs\sounds\1866_S2.wss", 1.078279, 1, 700};
				begin3[] = {"breakingpoint_jsrs\sounds\1866_S3.wss", 1.078279, 1, 700};
				begin4[] = {"breakingpoint_jsrs\sounds\1866_S4 .wss", 1.078279, 1, 700};
				soundBegin[] = {"begin1", 0.25000, "begin2", 0.25000, "begin3", 0.25000, "begin4", 0.25000};
 			};
			reloadTime = 1.596000;
			//recoil = "recoil_single_sdar";
			//recoilProne = "recoil_single_prone_sdar";
			dispersion = 0.001113;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 85;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class CowsSlot : CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_Unertl8x", "BP_Unertl32x"};
				iconScale = 0.1;
			};
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
		};

		linkedAttach[] = {};
		chanceAttach[] =
        {
			{"BP_Harris",0.08},
			{"",0.50}
        };

		reloadSound[] = {"\breakingpoint_jsrs\sounds\Lee_Bolt.wav", 0.380000, 1, 70};
		reloadMagazineSound[] = {"breakingpoint_jsrs\sounds\Lee_reload.wav", 0.380000, 1, 70};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
	};

	class BP_1866_WDL: BP_1866
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\1866\1866_wdl_co.paa", "\breakingpoint_weapons\textures\leeenfield\data\lee_enfield_wdl_co.paa"};
	};

	class BP_1866_DES: BP_1866
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\1866\1866_des_co.paa", "\breakingpoint_weapons\textures\leeenfield\data\lee_enfield_des_co.paa"};
	};

	class BP_1866_URB: BP_1866
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\1866\1866_urb_co.paa", "\breakingpoint_weapons\textures\leeenfield\data\lee_enfield_urb_co.paa"};
	};

	class BP_1866C: BP_1866
	{
		scope = 2;
		displayName = "Winchester 1866 Collector";
		descriptionShort = "A classic lever rifle chambered for .45ACP";
		model = "\breakingpoint_weapons\models\1866\BP_1866_2.p3d";
		picture = "\breakingpoint_weapons\icons\gear_1866c_rifle_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton", "breakingpoint_weapons\anim\LeeEnfield.rtm"};
		magazines[] = {"BP_7Rnd_45JHP", "BP_7Rnd_45acp"};
		inertia = 0.280000;
		muzzles[] = {"this", "Butt"};
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {closure1,0.5, closure2,0.5};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\1866_S1.wss", 1.278279, 0.6, 700};
				begin2[] = {"breakingpoint_jsrs\sounds\1866_S2.wss", 1.278279, 0.5, 700};
				begin3[] = {"breakingpoint_jsrs\sounds\1866_S3.wss", 1.378279, 0.57, 700};
				begin4[] = {"breakingpoint_jsrs\sounds\1866_S4 .wss", 1.278279, 0.62, 700};
				soundBegin[] = {"begin1", 0.25000, "begin2", 0.25000, "begin3", 0.25000, "begin4", 0.25000};
 			};
			reloadTime = 1.596000;
			//recoil = "recoil_single_sdar";
			//recoilProne = "recoil_single_prone_sdar";
			dispersion = 0.000767;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 90;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class CowsSlot : CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_Unertl8x", "BP_Unertl32x"};
				iconScale = 0.1;
			};
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
		};

		linkedAttach[] = {"BP_Unertl32x"};
		chanceAttach[] =
        {
			{"BP_Harris",0.08},
			{"",0.50}
        };

		reloadSound[] = {"\breakingpoint_jsrs\sounds\Lee_Bolt.wav", 0.380000, 1, 70};
		reloadMagazineSound[] = {"breakingpoint_jsrs\sounds\Lee_reload.wav", 0.380000, 1, 70};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
	};

	class BP_1866C_WDL: BP_1866C
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\1866\1866_2_wdl_co.paa", "\breakingpoint_weapons\textures\leeenfield\data\lee_enfield_wdl_co.paa"};
	};

	class BP_1866C_DES: BP_1866C
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\1866\1866_2_des_co.paa", "\breakingpoint_weapons\textures\leeenfield\data\lee_enfield_des_co.paa"};
	};

	class BP_1866C_URB: BP_1866C
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\1866\1866_2_urb_co.paa", "\breakingpoint_weapons\textures\leeenfield\data\lee_enfield_urb_co.paa"};
	};

	class BP_1886S: BP_1866
	{
		scope = 2;
		displayName = "Winchester 1886 Short";
		descriptionShort = "A classic lever rifle chambered for .45-70";
		model = "\breakingpoint_weapons\models\1866\BP_1886S.p3d";
		picture = "\breakingpoint_weapons\icons\gear_1886s_rifle_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton", "breakingpoint_weapons\anim\LeeEnfield.rtm"};
		magazines[] = {"BP_8Rnd_45gov"};
		inertia = 0.250000;
		muzzles[] = {"this", "Butt"};
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\CZ_Barrelless_S1.wav", 0.878279, 0.5, 1800};
				begin2[] = {"breakingpoint_jsrs\sounds\CZ_Barrelless_S3.wav", 0.878279, 0.5, 1800};
				begin3[] = {"breakingpoint_jsrs\sounds\CZ_Barrelless_S4.wav", 0.878279, 0.5, 1800};
				soundBegin[] = {"begin1", 0.33000, "begin2", 0.33000, "begin3", 0.34000};
 			};
			reloadTime = 1.596000;
			//recoil = "recoil_single_ebr";
			//recoilProne = "recoil_single_prone_sdar";
			dispersion = 0.001600;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 80;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class CowsSlot : CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_Unertl8x", "BP_Unertl32x"};
				iconScale = 0.1;
			};
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
		};

		linkedAttach[] = {"BP_Unertl8x"};
		chanceAttach[] =
        {
			{"BP_Harris",0.05},
			{"",0.50}
        };

		reloadSound[] = {"\breakingpoint_jsrs\sounds\Lee_Bolt.wav", 0.380000, 1, 70};
		reloadMagazineSound[] = {"breakingpoint_jsrs\sounds\Lee_reload.wav", 0.380000, 1, 70};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
	};

	class BP_1886S_WDL: BP_1886S
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\1866\1886_wdl_co.paa", "\breakingpoint_weapons\textures\leeenfield\data\lee_enfield_wdl_co.paa"};
	};

	class BP_1886S_DES: BP_1886S
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\1866\1886_des_co.paa", "\breakingpoint_weapons\textures\leeenfield\data\lee_enfield_des_co.paa"};
	};

	class BP_1886S_URB: BP_1886S
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\1866\1886_urb_co.paa", "\breakingpoint_weapons\textures\leeenfield\data\lee_enfield_urb_co.paa"};
	};

	class BP_M1903: BP_LeeEnfield
	{
		scope = 2;
		maxZeroing = 1600;
		model = "\breakingpoint_weapons\models\M1903\BP_M1903.p3d";
		displayname = "Springfield M1903";
		picture = "\breakingpoint_weapons\icons\gear_m1903_rifle_x_ca.paa";
		descriptionShort = "30-06 bolt-action sniper rifle";
		magazines[] = {"BP_5Rnd_3006M_Mag", "BP_5Rnd_3006_Mag"};
		inertia = 0.390000;
		muzzles[] = {"this", "Butt"};
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
  			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\M1903_S1.wav", 1.078279, 1.05, 1800};
				begin2[] = {"breakingpoint_jsrs\sounds\M1903_S2.wav", 1.178279, 0.90, 1800};
				begin3[] = {"breakingpoint_jsrs\sounds\M1903_S3.wav", 1.078279, 1.00, 1800};
				begin4[] = {"breakingpoint_jsrs\sounds\M1903_S2.wav", 1.178279, 1.20, 1800};
				soundBegin[] = {"begin1", 0.25000, "begin2", 0.25000, "begin3", 0.25000, "begin4", 0.25000};
 			};
			reloadTime = 1.3000;
			//recoil = "recoil_auto_sdar";
			//recoilProne = "recoil_auto_prone_sdar";
			dispersion = 0.000525;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 90;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class CowsSlot : CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_ZF42", "BP_Unertl8x", "BP_Unertl32x", "BP_ZF42"};
				iconScale = 0.1;
			};
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_CPad"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
		};

		linkedAttach[] = {"BP_Unertl8x"};
		chanceAttach[] =
        {
			{"BP_CPad",0.05},
			{"BP_Harris",0.02},
			{"",0.50}
        };
	};

	class BP_M1903_WDL: BP_M1903
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M1903\lee_enfield2_wdl_co.paa", "\breakingpoint_weapons\textures\dmr\us_dmr_wdl_co.paa", "\breakingpoint_weapons\textures\CZ550_old\data\cz550_wdl_co.paa", "\breakingpoint_weapons\textures\kar98\k98_wdl_co.paa"};
	};

	class BP_M1903_DES: BP_M1903
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M1903\lee_enfield2_des_co.paa", "\breakingpoint_weapons\textures\dmr\us_dmr_des_co.paa", "\breakingpoint_weapons\textures\CZ550_old\data\cz550_des_co.paa", "\breakingpoint_weapons\textures\kar98\k98_des_co.paa"};
	};

	class BP_M1903_URB: BP_M1903
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M1903\lee_enfield2_urb_co.paa", "\breakingpoint_weapons\textures\dmr\us_dmr_urb_co.paa", "\breakingpoint_weapons\textures\CZ550_old\data\cz550_urb_co.paa", "\breakingpoint_weapons\textures\kar98\k98_urb_co.paa"};
	};

	class BP_M1903K: BP_M1903
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\M1903\BP_M1903K.p3d";
		displayname = "Springfield M1903 w/Bayonet";
		picture = "\breakingpoint_weapons\icons\gear_m1903k_rifle_x_ca.paa";
		descriptionShort = "30-06 bolt-action sniper rifle with Bayonet attachment";
		magazines[] = {"BP_5Rnd_3006M_Mag", "BP_5Rnd_3006_Mag"};
		inertia = 0.440000;
		handAnim[] = {"OFP2_ManSkeleton", "breakingpoint_weapons\anim\LeeEnfield.rtm"};
		muzzles[] = {"this", "Bayonet"};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 95;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class CowsSlot : CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_ZF42", "BP_Unertl8x", "BP_Unertl32x", "BP_ZF42"};
				iconScale = 0.1;
			};
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_CPad"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
		};
		class Bayonet: UGL_F
		{
			magazines[] = {"BP_Bayonet_Stab"};
			displayName = "Bayonet";
			maxZeroing = 5;
			discreteDistanceInitIndex = 0;
			discreteDistance[] = {5};
			class GunParticles: GunParticles
			{
				class FirstEffect
				{
					effectName = "";
					positionName = "Usti hlavne";
					directionName = "Konec hlavne";
				};
			};
			modes[] = {"Single"};
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class BaseSoundModeType
				{
					closure1[] = {};
					soundClosure[] = {};
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.95, 10};
					begin2[] = {};
					soundBegin[] = {"begin1", 1};
				};
			};
			reloadMagazineSound[] = {};
			drySound[] = {};
			magazineReloadTime = 0;
			autoReload = 1;
			reloadTime = 1.400000;
			optics = 0;
			modelOptics = "-";
			cameraDir = "";
			memoryPointCamera = "eye";
			opticsZoomMin = 0.375000;
			opticsZoomMax = 1.100000;
			opticsZoomInit = 0.750000;
			weaponInfoType = "RscWeaponZeroing";
		};

		linkedAttach[] = {"BP_Unertl8x"};
		chanceAttach[] =
        {
			{"BP_CPad",0.05},
			{"BP_Harris",0.05},
			{"",0.50}
        };
	};

	class BP_M1903K_WDL: BP_M1903K
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4", "camo5"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M1903\lee_enfield2_wdl_co.paa", "\breakingpoint_weapons\textures\dmr\us_dmr_wdl_co.paa", "\breakingpoint_weapons\textures\CZ550_old\data\cz550_wdl_co.paa", "\breakingpoint_weapons\textures\kar98\k98_wdl_co.paa", "\breakingpoint\textures\items\knife_wdl_co.paa"};
	};

	class BP_M1903K_DES: BP_M1903K
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4", "camo5"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M1903\lee_enfield2_des_co.paa", "\breakingpoint_weapons\textures\dmr\us_dmr_des_co.paa", "\breakingpoint_weapons\textures\CZ550_old\data\cz550_des_co.paa", "\breakingpoint_weapons\textures\kar98\k98_des_co.paa", "\breakingpoint\textures\items\knife_des_co.paa"};
	};

	class BP_M1903K_URB: BP_M1903K
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4", "camo5"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M1903\lee_enfield2_urb_co.paa", "\breakingpoint_weapons\textures\dmr\us_dmr_urb_co.paa", "\breakingpoint_weapons\textures\CZ550_old\data\cz550_urb_co.paa", "\breakingpoint_weapons\textures\kar98\k98_urb_co.paa", "\breakingpoint\textures\items\knife_urb_co.paa"};
	};


//----------------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//CLASS REDFINES WEAPONS LMG--|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//----------------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    class BP_MX_SW: Rifle_Base_F_BP
	{
	    scope = 2;
		maxZeroing = 1000;
		displayName = "MX LMG";
		descriptionUse = "MX LMG";
		model = "\A3\Weapons_F\Rifles\MX\MX_SW_F.p3d";
		magazines[] = {"BP_100Rnd_65x39", "BP_30Rnd_65x39", "BP_30Rnd_65x39_SD", "BP_20Rnd_65x39", "BP_20Rnd_65x47_Lapua", "BP_10Rnd_65x39", "BP_10Rnd_65x47_Lapua", "BP_10Rnd_65x39_SD"};
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Rifles\MX\data\Anim\mx.rtm"};
		picture = "\breakingpoint_weapons\icons\gear_mxsw_rifle_x_ca.paa";
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Firemode_ugl",0.41622776,1.2,7};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_MX.wss", 0.31, 1, 30};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\XMX_lmg_co.paa"};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		inertia = 0.330000;
		recoil = "recoil_sw";
		modes[] = {"FullAuto", "Single", "far_optic1"};
		class FullAuto : Mode_FullAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\MX-R_s1.wav", 1.412538, 1, 1000};
				begin2[] = {"breakingpoint_jsrs\sounds\MX-R_s2.wav", 1.412538, 1, 1000};
				begin3[] = {"breakingpoint_jsrs\sounds\MX-R_s3.wav", 1.412538, 1, 1000};
				begin4[] = {"breakingpoint_jsrs\sounds\MX-R_s4.wav", 1.412538, 1, 1000};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-25", 1.000000, 1, 100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-26", 1.000000, 1, 100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-20", 1.000000, 0.9, 100};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-21", 1.000000, 0.8, 100};
				begin5[] = {"A3\sounds_f\weapons\silenced\silent-22", 1.000000, 1.1, 100};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000, "begin3", 0.500000, "begin4", 0.500000, "begin5", 0.500000};
 			};
			reloadTime = 0.096000;
			dispersion = 0.002100;
			//recoil = "recoil_auto_mx";
			//recoilProne = "recoil_auto_prone_mx";
			minRange = 1;
			minRangeProbab = 1.000000;

			midRange = 250;
			midRangeProbab = 1.000000;

			maxRange = 500;
			maxRangeProbab = 1.000000;


			aiRateOfFire = 0.000001;
			aiRateOfFireDistance = 500;
		};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\MX-R_s1.wav", 1.412538, 1, 1000};
				begin2[] = {"breakingpoint_jsrs\sounds\MX-R_s2.wav", 1.412538, 1, 1000};
				begin3[] = {"breakingpoint_jsrs\sounds\MX-R_s3.wav", 1.412538, 1, 1000};
				begin4[] = {"breakingpoint_jsrs\sounds\MX-R_s4.wav", 1.412538, 1, 1000};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-25", 1.000000, 1, 100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-26", 1.000000, 1, 100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-20", 1.000000, 0.9, 100};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-21", 1.000000, 0.8, 100};
				begin5[] = {"A3\sounds_f\weapons\silenced\silent-22", 1.000000, 1.1, 100};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000, "begin3", 0.500000, "begin4", 0.500000, "begin5", 0.500000};
 			};

			reloadTime = 0.076000;
			//recoil = "recoil_single_mx";
			//recoilProne = "recoil_single_prone_mx";
			dispersion = 0.002100;



			minRange = 500;
			minRangeProbab = 1.000000;

			midRange = 750;
			midRangeProbab = 1.000000;

			maxRange = 950;
			maxRangeProbab = 1.000000;


			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 950;
		};
		class far_optic1: Single {
			showToPlayer = 0;
			minRange = 950;
			minRangeProbab = 1.000000;
			midRange = 1200;
			midRangeProbab = 1.000000;
			maxRange = 1600;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.0;
			aiRateOfFireDistance = 1600;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 105;
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_H_MG"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris2"};
				iconScale = 0.1;
			};
        };

		chanceAttach[] =
        {
            {"optic_ACO_grn", 0.50},
			{"BP_compM4s", 0.50},
            {"BP_optic_ACOG", 0.05},
			{"BP_Harris2", 0.10}
        };
	};

	class BP_MX_SW_WDL: BP_MX_SW
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\xmx_lmg_wdl_co.paa"};
	};

	class BP_MX_SW_DES: BP_MX_SW
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\xmx_lmg_des_co.paa"};
	};

	class BP_MX_SW_URB: BP_MX_SW
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\MX\xmx_lmg_urb_co.paa"};
	};

	class BP_Zafir: Rifle_Base_F_BP
	{
	    scope = 2;
		maxZeroing = 1000;
		model = "\A3\Weapons_F_Beta\Machineguns\Zafir\Zafir_F.p3d";
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F_Beta\Machineguns\Zafir\Data\Anim\zafir.rtm"};
		displayName = "Negev NG7 LMG";
		descriptionShort = "Negev NG7 LMG";
		descriptionUse = "Negev NG7 LMG";
		magazines[] = {"BP_150Rnd_762x51_Box", "BP_762x51_Box_Tracer", "BP_100Rnd_762x51_MINIMI", "BP_30Rnd_762x51_BPMag", "BP_30Rnd_762x51_M80A1", "BP_30Rnd_762x51_Mk316Mod0", "BP_20Rnd_762x51_BPMag", "BP_20Rnd_762x51_M80A1", "BP_20Rnd_762x51_Mk316Mod0", "BP_10Rnd_762mk316_Mag", "BP_10Rnd_762x51_Mag", "BP_10Rnd_762m80a1_Mag", "BP_5Rnd_762x51_Mag", "BP_5Rnd_762mk316_Mag", "BP_5Rnd_762m80a1_Mag"};
		picture = "\breakingpoint_weapons\icons\gear_zafir_rifle_x_ca.paa";
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Firemode_ugl",0.41622776,1.2,7};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		inertia = 0.420000;
		recoil = "recoil_zafir";
		modes[] = {"FullAuto", "Single", "close", "far"};
		class FullAuto : Mode_FullAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\Zafir_s1.wav", 1.012538, 1, 1200};
				begin2[] = {"breakingpoint_jsrs\sounds\Zafir_s2.wav", 1.012538, 1, 1200};
				begin3[] = {"breakingpoint_jsrs\sounds\Zafir_s3.wav", 1.012538, 1, 1200};
				begin4[] = {"breakingpoint_jsrs\sounds\Zafir_s4.wav", 1.012538, 1, 1200};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-25", 1.000000, 1, 200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-26", 1.000000, 1, 200};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-20", 1.000000, 0.9, 200};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-21", 1.000000, 0.8, 200};
				begin5[] = {"A3\sounds_f\weapons\silenced\silent-22", 1.000000, 1.1, 200};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000, "begin3", 0.500000, "begin4", 0.500000, "begin5", 0.500000};
 			};
			reloadTime = 0.096000;
			dispersion = 0.001500;
			//recoil = "recoil_auto_mk200";
			//recoilProne = "recoil_auto_prone_mk200";
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 1.000000;

			midRange = 50;
			midRangeProbab = 1.000000;

			maxRange = 200;
			maxRangeProbab = 1.000000;


			showToPlayer = 1;
			aiRateOfFire = 0.00000001;
			aiRateOfFireDistance = 200;
		};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\Zafir_s1.wav", 1.012538, 1, 1200};
				begin2[] = {"breakingpoint_jsrs\sounds\Zafir_s2.wav", 1.012538, 1, 1200};
				begin3[] = {"breakingpoint_jsrs\sounds\Zafir_s3.wav", 1.012538, 1, 1200};
				begin4[] = {"breakingpoint_jsrs\sounds\Zafir_s4.wav", 1.012538, 1, 1200};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-25", 1.000000, 1, 200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-26", 1.000000, 1, 200};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-20", 1.000000, 0.9, 200};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-21", 1.000000, 0.8, 200};
				begin5[] = {"A3\sounds_f\weapons\silenced\silent-22", 1.000000, 1.1, 200};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000, "begin3", 0.500000, "begin4", 0.500000, "begin5", 0.500000};
 			};
			reloadTime = 0.096000;

			//recoil = "recoil_auto_mk200";
			//recoilProne = "recoil_auto_prone_mk200";
			dispersion = 0.001500;
			aiRateOfFireDistance = 1400;
			minRange = 1000;
			minRangeProbab = 1.000000;

			midRange = 1200;
			midRangeProbab = 1.000000;

			maxRange = 1400;
			maxRangeProbab = 1.000000;
			//burst = 2;
			aiRateOfFire = 0.000001;
			showToPlayer = 1;
		};
		class close: FullAuto
		{
			burst = 6;
			aiRateOfFire = 0.0050000;
			aiRateOfFireDistance = 500;
			minRange = 200;
			minRangeProbab = 1.000000;
			midRange = 350;
			midRangeProbab = 1.000000;
			maxRange = 500;
			maxRangeProbab = 1.000000;
			showToPlayer = 0;
		};
		class far: Single
		{
			burst = 4;
			showToPlayer = 0;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 1200;
			minRange = 500;
			minRangeProbab = 1.000000;
			midRange = 750;
			midRangeProbab = 1.000000;
			maxRange = 1200;
			maxRangeProbab = 1.000000;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 140;
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_H_MG"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_AK_ACO", "BP_OldComp", "BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris2"};
				iconScale = 0.1;
			};
        };

		chanceAttach[] =
        {
            {"optic_ACO_grn", 0.50},
			{"BP_compM4s", 0.50},
            {"BP_optic_ACOG", 0.05},
			{"BP_Harris2", 0.10}
        };
	};

	class BP_Zafir_AI: BP_Zafir
	{
	    scope = 2;
		magazines[] = {"BP_500Rnd_762x51_AI"};
		inertia = 0.0000;
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefX = 0.100000;
		modes[] = {"Single", "FullAuto", "close", "far"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\Zafir_s1.wav", 1.012538, 1, 1200};
				begin2[] = {"breakingpoint_jsrs\sounds\Zafir_s2.wav", 1.012538, 1, 1200};
				begin3[] = {"breakingpoint_jsrs\sounds\Zafir_s3.wav", 1.012538, 1, 1200};
				begin4[] = {"breakingpoint_jsrs\sounds\Zafir_s4.wav", 1.012538, 1, 1200};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-25", 1.000000, 1, 400};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-26", 1.000000, 1, 400};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-20", 1.000000, 0.9, 400};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-21", 1.000000, 0.8, 400};
				begin5[] = {"A3\sounds_f\weapons\silenced\silent-22", 1.000000, 1.1, 400};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000, "begin3", 0.500000, "begin4", 0.500000, "begin5", 0.500000};
 			};
			reloadTime = 0.096000;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			dispersion = 0.000970;
			aiRateOfFireDistance = 1400;
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1200;
			midRangeProbab = 1.000000;
			maxRange = 1400;
			maxRangeProbab = 1.000000;
			burst = 2;
			aiRateOfFire = 0.000001;
			showToPlayer = 1;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\Zafir_s1.wav", 1.012538, 1, 1200};
				begin2[] = {"breakingpoint_jsrs\sounds\Zafir_s2.wav", 1.012538, 1, 1200};
				begin3[] = {"breakingpoint_jsrs\sounds\Zafir_s3.wav", 1.012538, 1, 1200};
				begin4[] = {"breakingpoint_jsrs\sounds\Zafir_s4.wav", 1.012538, 1, 1200};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-25", 1.000000, 1, 400};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-26", 1.000000, 1, 400};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-20", 1.000000, 0.9, 400};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-21", 1.000000, 0.8, 400};
				begin5[] = {"A3\sounds_f\weapons\silenced\silent-22", 1.000000, 1.1, 400};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000, "begin3", 0.500000, "begin4", 0.500000, "begin5", 0.500000};
 			};
			reloadTime = 0.096000;
			dispersion = 0.001170;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 1.000000;
			midRange = 50;
			midRangeProbab = 1.000000;
			maxRange = 200;
			maxRangeProbab = 1.000000;
			showToPlayer = 1;
			aiRateOfFire = 0.00000001;
			aiRateOfFireDistance = 200;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class close: FullAuto
		{
			burst = 6;
			aiRateOfFire = 0.0050000;
			aiRateOfFireDistance = 500;
			minRange = 200;
			minRangeProbab = 1.000000;
			midRange = 350;
			midRangeProbab = 1.000000;
			maxRange = 500;
			maxRangeProbab = 1.000000;
			showToPlayer = 0;
		};
		class far: Single
		{
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 1200;
			minRange = 500;
			minRangeProbab = 1.000000;
			midRange = 750;
			midRangeProbab = 1.000000;
			maxRange = 1200;
			maxRangeProbab = 1.000000;
		};
	};

	class BP_Minimi_HG: Rifle_Base_F_BP
	{
		scope = 2;
		maxZeroing = 1000;
		type = 1;
		displayName = "M249 SAW";
		descriptionUse = "M249 SAW";
		descriptionShort = "5.56mm Light Machinegun";
		magazines[] = {"BP_200Rnd_556x45_MINIMI", "BP_200Rnd_556x45_TRACER", "BP_556x45_Stanag", "BP_556x45_StanagSD", "BP_556x45_StanagM855A1", "BP_556x45_StanagMK262", "BP_556old_Stanag", "BP_5Rnd_223_Mag", "BP_5Rnd_223BTHP_mag", "BP_556x45_Rubber"};
		picture = "\breakingpoint_weapons\icons\gear_m249_rifle_x_ca.paa";
		model = "\breakingpoint_weapons\models\M249\BP_M249.p3d";
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Rifles\MX\data\Anim\MX_dmr.rtm"};
		reloadAction = "GestureReloadM200";
		changeFiremodeSound[] = {};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_M200", 0.276684, 1, 30};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 100};
		inertia = 0.330000;
		initSpeed = -0.98;
		recoil = "recoil_mk200";
		modes[] = {"FullAuto", "close", "far"};
		class FullAuto : Mode_FullAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\sfx7", 0.222018, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx8", 0.222018, 1, 10};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M249_s4.wav", 1.050000, 1, 900};
				begin2[] = {"\breakingpoint_jsrs\sounds\M249_s5.wav", 1.050000, 1, 900};
				begin3[] = {"\breakingpoint_jsrs\sounds\M249_s6.wav", 1.050000, 1, 900};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-25", 1.000000, 1, 100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-26", 1.000000, 1, 100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-20", 1.000000, 0.9, 100};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-21", 1.000000, 0.8, 100};
				begin5[] = {"A3\sounds_f\weapons\silenced\silent-22", 1.000000, 1.1, 100};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000, "begin3", 0.500000, "begin4", 0.500000, "begin5", 0.500000};
 			};
			reloadTime = 0.066000;
			//recoil = "recoil_single_sdar";
			//recoilProne = "recoil_single_prone_sdar";
			dispersion = 0.001300;
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 1.000000;
			midRange = 50;
			midRangeProbab = 1.000000;
			maxRange = 200;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.000001;
			showToPlayer = 1;
		};
		class close: FullAuto
		{
			burst = 8;
			aiRateOfFire = 0.0500000;
			aiRateOfFireDistance = 500;
			minRange = 200;
			minRangeProbab = 1.000000;
			midRange = 350;
			midRangeProbab = 1.000000;
			maxRange = 500;
			maxRangeProbab = 1.000000;
			showToPlayer = 0;
		};
		class far: close
		{
			burst = 6;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 1000;
			minRange = 500;
			minRangeProbab = 1.000000;
			midRange = 750;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 110;
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_H_MG"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_OldComp", "BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG"};
				iconScale = 0.1;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight", "BP_AFG"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris2"};
				iconScale = 0.1;
			};
        };

		chanceAttach[] =
        {
            {"optic_ACO_grn", 0.50},
			{"BP_compM4s", 0.50},
            {"BP_optic_ACOG", 0.05},
			{"BP_Harris2", 0.10},
			{"BP_AFG", 0.10}
        };
	};

	class BP_Minimi_WDL: BP_Minimi_HG
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\m249\m249_wdl_co.paa", "\breakingpoint_weapons\textures\m249\stockpouch_wdl_co.paa"};
	};

	class BP_Minimi_DES: BP_Minimi_HG
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\m249\m249_des_co.paa", "\breakingpoint_weapons\textures\m249\stockpouch_des_co.paa"};
	};

	class BP_Minimi_URB: BP_Minimi_HG
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\m249\m249_urb_co.paa", "\breakingpoint_weapons\textures\m249\stockpouch_urb_co.paa"};
	};

	class BP_Minimi_HG_AI: BP_Minimi_HG
	{
		scope = 2;
		modes[] = {"FullAuto", "close", "far"};
		magazines[] = {"BP_500Rnd_762x51_AI"};
		inertia = 0.0000;
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefX = 0.100000;
		class FullAuto : Mode_FullAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\sfx7", 0.222018, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx8", 0.222018, 1, 10};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M249_s4.wav", 1.050000, 1, 200};
				begin2[] = {"\breakingpoint_jsrs\sounds\M249_s5.wav", 1.050000, 1, 200};
				begin3[] = {"\breakingpoint_jsrs\sounds\M249_s6.wav", 1.050000, 1, 200};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-25", 1.000000, 1, 400};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-26", 1.000000, 1, 400};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-20", 1.000000, 0.9, 400};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-21", 1.000000, 0.8, 400};
				begin5[] = {"A3\sounds_f\weapons\silenced\silent-22", 1.000000, 1.1, 400};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000, "begin3", 0.500000, "begin4", 0.500000, "begin5", 0.500000};
 			};
			reloadTime = 0.066000;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			dispersion = 0.000900;
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 1.000000;
			midRange = 50;
			midRangeProbab = 1.000000;
			maxRange = 200;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.000001;
			showToPlayer = 1;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class close: FullAuto
		{
			burst = 8;
			aiRateOfFire = 0.0500000;
			aiRateOfFireDistance = 500;
			minRange = 200;
			minRangeProbab = 1.000000;
			midRange = 350;
			midRangeProbab = 1.000000;
			maxRange = 500;
			maxRangeProbab = 1.000000;
			showToPlayer = 0;
		};
		class far: close
		{
			burst = 6;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 1000;
			minRange = 500;
			minRangeProbab = 1.000000;
			midRange = 750;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
		};
	};
	class BP_Minimi_762: Rifle_Base_F_BP
	{
	    scope = 2;
		maxZeroing = 1000;
		type = 1;
		displayName = "Mk48 Mod 1";
		descriptionUse = "Mk48 Mod 1";
		descriptionShort = "7.62mm Light Machinegun";
		magazines[] = {"BP_100Rnd_762x51_MINIMI", "BP_150Rnd_762x51_Box", "BP_762x51_Box_Tracer", "BP_30Rnd_762x51_BPMag", "BP_30Rnd_762x51_M80A1", "BP_30Rnd_762x51_Mk316Mod0", "BP_20Rnd_762x51_BPMag", "BP_20Rnd_762x51_M80A1", "BP_20Rnd_762x51_Mk316Mod0", "BP_10Rnd_762mk316_Mag", "BP_10Rnd_762x51_Mag", "BP_10Rnd_762m80a1_Mag", "BP_5Rnd_762x51_Mag", "BP_5Rnd_762mk316_Mag", "BP_5Rnd_762m80a1_Mag"};
		picture = "\breakingpoint_weapons\icons\gear_mk48_rifle_x_ca.paa";
		model = "\breakingpoint_weapons\models\Mk48\BP_Mk48.p3d";
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Rifles\MX\data\Anim\MX_dmr.rtm"};
		changeFiremodeSound[] = {};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_M200", 0.216684, 1, 30};
		reloadAction = "GestureReloadM200";
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		inertia = 0.40000;
		recoil = "recoil_zafir";
		modes[] = {"FullAuto", "far_optic1"};

		class FullAuto : Mode_FullAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\sfx7", 0.222018, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx8", 0.222018, 1, 10};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\Mk48_s4.wav", 1.250000, 1, 1200};
				begin2[] = {"\breakingpoint_jsrs\sounds\Mk48_s5.wav", 1.250000, 1, 1200};
				begin3[] = {"\breakingpoint_jsrs\sounds\Mk48_s6.wav", 1.250000, 1, 1200};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-25", 1.000000, 1, 200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-26", 1.000000, 1, 200};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-20", 1.000000, 0.9, 200};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-21", 1.000000, 0.8, 200};
				begin5[] = {"A3\sounds_f\weapons\silenced\silent-22", 1.000000, 1.1, 200};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000, "begin3", 0.500000, "begin4", 0.500000, "begin5", 0.500000};
 			};
			reloadTime = 0.089000;
			//recoil = "recoil_auto_mk200";
			//recoilProne = "recoil_auto_prone_mk200";
			dispersion = 0.001600;
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 150;
			midRangeProbab = 1.000000;
			maxRange = 300;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.000001;
			showToPlayer = 1;
		};
		class far_optic1: FullAuto
		{
			showToPlayer = 0;
			burst = 6;
			aiRateOfFire = 0.01;
			aiRateOfFireDistance = 1000;
			minRange = 300;
			minRangeProbab = 1.000000;
			midRange = 650;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 145;
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_H_MG"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_compM4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG"};
				iconScale = 0.1;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight", "BP_AFG"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris2"};
				iconScale = 0.1;
			};
        };

		chanceAttach[] =
        {
            {"optic_ACO_grn", 0.50},
			{"BP_compM4s", 0.50},
            {"BP_optic_ACOG", 0.05},
			{"BP_Harris2", 0.10},
			{"BP_AFG", 0.10}
        };
	};

	class BP_Minimi_762_WDL: BP_Minimi_762
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\cz_mc550\data\mk48_wdl_co.paa"};
	};

	class BP_Minimi_762_DES: BP_Minimi_762
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\cz_mc550\data\mk48_des_co.paa"};
	};

	class BP_Minimi_762_URB: BP_Minimi_762
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\cz_mc550\data\mk48_urb_co.paa"};
	};

	class BP_Minimi_762_AI: BP_Minimi_762
	{
	    scope = 2;
		modes[] = {"FullAuto", "far_optic1"};
		magazines[] = {"BP_500Rnd_762x51_AI"};
		inertia = 0.0000;
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefK = 0.100000;
		class FullAuto : Mode_FullAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\sfx7", 0.222018, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx8", 0.222018, 1, 10};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\Mk48_s4.wav", 1.250000, 1, 500};
				begin2[] = {"\breakingpoint_jsrs\sounds\Mk48_s5.wav", 1.250000, 1, 500};
				begin3[] = {"\breakingpoint_jsrs\sounds\Mk48_s6.wav", 1.250000, 1, 500};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"A3\sounds_f\weapons\silenced\silent-25", 1.000000, 1, 400};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-26", 1.000000, 1, 400};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-20", 1.000000, 0.9, 400};
				begin4[] = {"A3\sounds_f\weapons\silenced\silent-21", 1.000000, 0.8, 400};
				begin5[] = {"A3\sounds_f\weapons\silenced\silent-22", 1.000000, 1.1, 400};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000, "begin3", 0.500000, "begin4", 0.500000, "begin5", 0.500000};
 			};
			reloadTime = 0.089000;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			dispersion = 0.001300;
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 150;
			midRangeProbab = 1.000000;
			maxRange = 300;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.000001;
			showToPlayer = 1;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefK = 0.100000;
		};
		class far_optic1: FullAuto
		{
			showToPlayer = 0;
			burst = 6;
			aiRateOfFire = 0.01;
			aiRateOfFireDistance = 1000;
			minRange = 300;
			minRangeProbab = 1.000000;
			midRange = 650;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
		};
	};

	class BP_BAR: Rifle_Base_F_BP
	{
	    scope = 2;
		maxZeroing = 1000;
		type = 1;
		displayName = "M1918 BAR";
		descriptionUse = "M1918 BAR";
		descriptionShort = "30-06 Machinegun";
		magazines[] = {"BP_20Rnd_3006_Mag", "BP_20Rnd_3006M_Mag", "BP_5Rnd_3006_Mag", "BP_5Rnd_3006M_Mag"};
		picture = "\breakingpoint_weapons\icons\gear_bar_rifle_x_ca.paa";
		model = "\breakingpoint_weapons\models\BAR\BP_BAR.p3d";
		handAnim[] = {"OFP2_ManSkeleton", "breakingpoint_weapons\anim\M24.rtm"};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Firemode_ugl",0.41622776,1.2,7};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_M200", 0.286684, 1, 30};
		reloadAction = "GestureReloadEBR";
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		inertia = 0.687000;
		initSpeed = -0.96;
		recoil = "recoil_zafir";
		modes[] = {"Single", "FullAuto", "far_optic1"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\sfx7", 0.222018, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx8", 0.222018, 1, 10};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\BAR_s1.wav", 1.050000, 0.9, 1500};
				begin2[] = {"\breakingpoint_jsrs\sounds\BAR_s2.wav", 1.010000, 0.7, 1500};
				begin3[] = {"\breakingpoint_jsrs\sounds\BAR_s3.wav", 1.050000, 0.87, 1500};
				begin4[] = {"\breakingpoint_jsrs\sounds\BAR_s4.wav", 1.020000, 0.98, 1500};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			reloadTime = 0.089000;
			//recoil = "recoil_auto_mk200";
			//recoilProne = "recoil_auto_prone_sdar";
			dispersion = 0.001500;
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\sfx7", 0.222018, 1, 10};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx8", 0.222018, 1, 10};
				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\BAR_s1.wav", 1.050000, 0.9, 1500};
				begin2[] = {"\breakingpoint_jsrs\sounds\BAR_s2.wav", 1.010000, 0.7, 1500};
				begin3[] = {"\breakingpoint_jsrs\sounds\BAR_s3.wav", 1.050000, 0.87, 1500};
				begin4[] = {"\breakingpoint_jsrs\sounds\BAR_s4.wav", 1.020000, 0.98, 1500};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			reloadTime = 0.089000;
			//recoil = "recoil_auto_mk200";
			//recoilProne = "recoil_auto_prone_sdar";
			dispersion = 0.001500;
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 150;
			midRangeProbab = 1.000000;
			maxRange = 300;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.000001;
			showToPlayer = 1;
		};
		class far_optic1: FullAuto
		{
			showToPlayer = 0;
			burst = 6;
			aiRateOfFire = 0.01;
			aiRateOfFireDistance = 1000;
			minRange = 300;
			minRangeProbab = 1.000000;
			midRange = 650;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 175;
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_ZF42", "BP_Unertl8x", "BP_Unertl32x", "BP_EnfieldOptic2"};
				iconScale = 0.1;
			};
			class PointerSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw", "BP_CPad"};
				iconScale = 0.1;
			};
        };
	};

	class BP_BAR_WDL: BP_BAR
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\BAR\BAR_wdl_co.paa", "\breakingpoint_weapons\textures\m21\m14_wdl_co.paa"};
	};

	class BP_BAR_DES: BP_BAR
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\BAR\BAR_des_co.paa", "\breakingpoint_weapons\textures\m21\m14_des_co.paa"};
	};

	class BP_BAR_URB: BP_BAR
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\BAR\BAR_urb_co.paa", "\breakingpoint_weapons\textures\m21\m14_urb_co.paa"};
	};

//------------------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//CLASS REDFINES WEAPONS SNIPERS|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//------------------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	class BP_LRR_F: Rifle_Long_Base_F
	{
		scope = 2;
		maxZeroing = 1600;
		type = 1;
		model = "\A3\Weapons_F\LongRangeRifles\M320\M320_F.p3d";
		//model = "\A3\Weapons_F_Bootcamp\LongRangeRifles\M320_camo\M320_camo_F.p3d";
		displayName = "CheyTac M200 Intervention";
		magazines[] = {"BP_7Rnd_408Chey_Mag"};
		picture = "\breakingpoint_weapons\icons\gear_chey_rifle_x_ca.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_sniper_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\LongRangeRifles\M320\data\Anim\m320.rtm"};
		reloadMagazineSound[] = {"A3\Sounds_F\weapons\M320\M320_reload", 0.401187, 1, 30};
		reloadAction = "GestureReloadLRR";
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		inertia = 0.400000;
		recoil = "recoil_m320";
		linkedAttach[] = {"BP_NXS"};
		modes[] = {"Single", "far_optic1", "far_optic2"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\Chey_s1.wav", 1.250000, 1, 2000};
				begin2[] = {"\breakingpoint_jsrs\sounds\Chey_s2.wav", 1.250000, 1, 2000};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\50sd_s1.wav", 0.650000, 1, 200};
				begin2[] = {"\breakingpoint_jsrs\sounds\50sd_s1.wav", 0.650000, 1, 200};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
 			};
			dispersion = 0.000097;
			soundContinuous = 0;
			reloadTime = 2.200000;
			recoil = "recoil_single_gm6";
			recoilProne = "recoil_single_prone_gm6";
			minRange = 2;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 450;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 500;
		};
		class far_optic1: Single
		{
			showToPlayer = 0;
			minRange = 450;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1500;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 2.5;
			aiRateOfFireDistance = 1700;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 205;
			allowedSlots[] = {};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_408"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_OldComp", "BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG", "BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS"};
				iconScale = 0.1;
			};
		};
	};

	class BP_LRR_AI: BP_LRR_F
	{
		scope = 2;
		type = 1;
		magazines[] = {"BP_100Rnd_50Cal_AI"};
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefX = 0.100000;
		inertia = 0.0000;
		modes[] = {"Single", "far_optic1", "far_optic2"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\Chey_s1.wav", 1.250000, 1, 3000};
				begin2[] = {"\breakingpoint_jsrs\sounds\Chey_s2.wav", 1.250000, 1, 3000};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\50sd_s1.wav", 0.650000, 1, 1000};
				begin2[] = {"\breakingpoint_jsrs\sounds\50sd_s1.wav", 0.650000, 1, 1000};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
 			};
			dispersion = 0.000097;
			soundContinuous = 0;
			reloadTime = 2.200000;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			minRange = 2;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 450;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 500;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class far_optic1: Single
		{
			showToPlayer = 0;
			minRange = 450;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1500;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 2.5;
			aiRateOfFireDistance = 1700;
		};
	};

	class BP_GM6_SOS: Rifle_Long_Base_F
	{
		scope = 2;
		maxZeroing = 1600;
		type = 1;
		magazines[] = {"BP_5Rnd_127x108_Mag"};
		model = "\A3\Weapons_F\LongRangeRifles\GM6\GM6_F.p3d";
		displayName = "GM-6 Lynx";
		descriptionUse = "GM-6 Lynx";
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\LongRangeRifles\GM6\Data\Anim\GM6.rtm"};
		picture = "\breakingpoint_weapons\icons\gear_gm6_rifle_x_ca.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_sniper_CA.paa";
		reloadAction = "ReloadGM6";
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.390957, 1, 130};
		inertia = 0.370000;
		recoil = "recoil_gm6";
		linkedAttach[] = {"BP_L14X"};
		modes[] = {"Single", "far_optic1", "far_optic2"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\GM6_s1.wav", 1.250000, 1, 3000};
				begin2[] = {"\breakingpoint_jsrs\sounds\GM6_s2.wav", 1.250000, 1, 3000};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
 			};
			dispersion = 0.000150;
			soundContinuous = 0;
			reloadTime = 1.500000;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			minRange = 2;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 350;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 500;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class far_optic1: Single
		{
			showToPlayer = 0;
			minRange = 450;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1500;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 2.5;
			aiRateOfFireDistance = 1700;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 205;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_OldComp", "BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG", "BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS"};
				iconScale = 0.1;
			};
		};
	};

	class BP_GM6_AI: BP_GM6_SOS
	{
		scope = 2;
		type = 1;
		modes[] = {"Single", "far_optic1", "far_optic2"};
		magazines[] = {"BP_100Rnd_50Cal_AI"};
		inertia = 0.0000;
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefX = 0.100000;
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\GM6_s1.wav", 1.250000, 1, 3000};
				begin2[] = {"\breakingpoint_jsrs\sounds\GM6_s2.wav", 1.250000, 1, 3000};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};
 			};
			dispersion = 0.000150;
			soundContinuous = 0;
			reloadTime = 1.500000;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			minRange = 2;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 350;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 500;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class far_optic1: Single
		{
			showToPlayer = 0;
			minRange = 450;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1500;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 2.5;
			aiRateOfFireDistance = 1700;
		};
	};

	class BP_M107: Rifle_Base_F_BP
	{
		scope = 2;
		maxZeroing = 1600;
		type = 1;
		model = "\breakingpoint_weapons\models\M107\BP_M107.p3d";
		displayName = "Barrett M107";
		picture = "\breakingpoint_weapons\icons\gear_m107_rifle_x_ca.paa";
		magazines[] = {"BP_10Rnd_127x99", "BP_10Rnd_127x99_RAUF"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M107b.rtm"};
		reloadAction = "GestureReloadLRR";
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		//hiddenSelections[] = {"camo1", "camo2", "camo3"};
		inertia = 0.400000;
		recoil = "recoil_gm6";
		modes[] = {"Single", "far_optic1", "far_optic2"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M107_s1.wav", 1.050000, 1, 3000};
				begin2[] = {"\breakingpoint_jsrs\sounds\M107_s2.wav", 1.050000, 1, 3000};
				begin3[] = {"\breakingpoint_jsrs\sounds\M107_s2.wav", 1.150000, 1, 3000};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};
			dispersion = 0.000180;
			soundContinuous = 0;
			reloadTime = 1.500000;
			recoil = "recoil_single_gm6";
			recoilProne = "recoil_single_prone_gm6";
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 500;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 500;
		};
		class far_optic1: Single
		{
			showToPlayer = 0;
			minRange = 450;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1500;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 2.5;
			aiRateOfFireDistance = 1700;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 225;
			allowedSlots[] = {};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_OldComp", "BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG", "BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_Harris2"};
				iconScale = 0.1;
			};
		};
	};

	class BP_M107_WDL: BP_M107
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\m107\m107_wdl_co.paa"};
	};

	class BP_M107_DES: BP_M107
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\m107\m107_des_co.paa"};
	};

	class BP_M107_URB: BP_M107
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\m107\m107_urb_co.paa"};
	};

	class BP_M107_AI: BP_M107_DES
	{
		scope = 2;
		modes[] = {"Single", "far_optic1", "far_optic2"};
		magazines[] = {"BP_100Rnd_50Cal_AI"};
		inertia = 0.0000;
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefX = 0.100000;
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M107_s1.wav", 1.050000, 1, 3000};
				begin2[] = {"\breakingpoint_jsrs\sounds\M107_s2.wav", 1.050000, 1, 3000};
				begin3[] = {"\breakingpoint_jsrs\sounds\M107_s2.wav", 1.150000, 1, 3000};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};
			dispersion = 0.000180;
			soundContinuous = 0;
			reloadTime = 1.500000;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 500;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 500;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefK = 0.100000;
		};
		class far_optic1: Single
		{
			showToPlayer = 0;
			minRange = 450;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1500;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 2.5;
			aiRateOfFireDistance = 1700;
		};
	};

	class BP_AWSM: Rifle_Long_Base_F
	{
	    scope = 2;
		maxZeroing = 2000;
		model = "\breakingpoint_weapons\models\AWSM\BP_AWSM.p3d";
		picture = "\breakingpoint_weapons\icons\gear_awsm_rifle_x_ca.paa";
		magazines[] = {"BP_10Rnd_338Lapua_Mag"};
		displayname = "Artic Warfare Super Magnum";
		reloadAction = "GestureReloadLRR";
		descriptionShort = "Accuracy International .338 Lapua Magnum Sniper Rifle";
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M24.rtm"};
		inertia = 0.290000;
		recoil = "recoil_m320";
		modes[] = {"Single", "far_optic1", "far_optic2"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\L115A3_s4.wav", 1.400000, 1.03, 2000};
				begin2[] = {"\breakingpoint_jsrs\sounds\L115A3_s5.wav", 1.300000, 0.95, 2000};
				begin3[] = {"\breakingpoint_jsrs\sounds\L115A3_s6.wav", 1.470000, 1, 2000};
				begin4[] = {"\breakingpoint_jsrs\sounds\L115A3_s4.wav", 1.420000, 1, 2000};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000, "begin3", 0.500000, "begin4", 0.500000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\L115A3_sd2.wav", 0.500000, 1.03, 1400};
				begin2[] = {"\breakingpoint_jsrs\sounds\L115A3_sd3.wav", 0.500000, 0.95, 1400};
				begin3[] = {"\breakingpoint_jsrs\sounds\L115A3_sd2.wav", 0.470000, 1, 1400};
				begin4[] = {"\breakingpoint_jsrs\sounds\L115A3_sd3.wav", 0.420000, 1, 1400};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000, "begin3", 0.500000, "begin4", 0.500000};
 			};
			reloadTime = 2.500000;
			//recoil = "LynxRecoil";
			//recoilProne = "LynxRecoilprone";
			dispersion = 0.000130;
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 500;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 500;
		};
		class far_optic1: Single
		{
			showToPlayer = 0;
			minRange = 500;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1500;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 2.5;
			aiRateOfFireDistance = 1700;
		};
        class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 185;
			allowedSlots[] = {};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_H_SN"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3AN", "BP_MRT", "BP_PS22"};
				iconScale = 0.1;
			};
			class PointerSlot : Slotinfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
        };
		class GunParticles : GunParticles
		{
			class FirstEffect
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\L115A3Reload", 0.240234, 0.67, 30};
		reloadSound[] = {"\breakingpoint_jsrs\sounds\L115A3Bolt", 0.306234, 0.8, 750};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.300957, 1, 130};
    };

	class BP_AWSM_WDL: BP_AWSM
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\awsm\lrr_wdl_co.paa"};
	};

	class BP_AWSM_DES: BP_AWSM
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\awsm\lrr_des_co.paa"};
	};

	class BP_AWSM_URB: BP_AWSM
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\awsm\lrr_urb_co.paa"};
	};

	class BP_AWSM_AI: BP_AWSM
	{
	    scope = 2;
		modes[] = {"Single", "far_optic1", "far_optic2"};
		magazines[] = {"BP_100Rnd_50Cal_AI"};
		inertia = 0.0000;
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefK = 0.100000;
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\L115A3_s4.wav", 1.400000, 1.03, 2000};
				begin2[] = {"\breakingpoint_jsrs\sounds\L115A3_s5.wav", 1.300000, 0.95, 2000};
				begin3[] = {"\breakingpoint_jsrs\sounds\L115A3_s6.wav", 1.470000, 1, 2000};
				begin4[] = {"\breakingpoint_jsrs\sounds\L115A3_s4.wav", 1.420000, 1, 2000};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000, "begin3", 0.500000, "begin4", 0.500000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\L115A3_sd2.wav", 0.500000, 1.03, 1000};
				begin2[] = {"\breakingpoint_jsrs\sounds\L115A3_sd3.wav", 0.500000, 0.95, 1000};
				begin3[] = {"\breakingpoint_jsrs\sounds\L115A3_sd2.wav", 0.470000, 1, 1000};
				begin4[] = {"\breakingpoint_jsrs\sounds\L115A3_sd3.wav", 0.420000, 1, 1000};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000, "begin3", 0.500000, "begin4", 0.500000};
 			};
			reloadTime = 2.500000;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			dispersion = 0.000130;
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 500;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 500;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefK = 0.100000;
		};
		class far_optic1: Single
		{
			showToPlayer = 0;
			minRange = 500;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1500;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 2.5;
			aiRateOfFireDistance = 1700;
		};
	};

	class BP_M24Spec: Rifle_Base_F_BP
	{
		scope = 2;
		maxZeroing = 1600;
		model = "\breakingpoint_weapons\models\M24A2\BP_M24A2.p3d";
		picture = "\breakingpoint_weapons\icons\gear_m24a2_rifle_x_ca.paa";
		displayName = "M24A2 SpecOps";
		descriptionshort = "Chambered for the powerful .300 Winchester Magnum round and customized for extreme accuracy.";
		magazines[] = {"BP_10Rnd_300_Mag", "BP_10Rnd_300M_Mag", "BP_5Rnd_300_Mag", "BP_5Rnd_300M_Mag"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M24.rtm"};
		inertia = 0.3125000;
		initSpeed = -1.03;
		recoil = "recoil_dmr_01";
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound, AlternateSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
  				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M24_s1.wav", 1.000000, 1.8, 1200};
				begin2[] = {"\breakingpoint_jsrs\sounds\M24_s2.wav", 1.000000, 1.9, 1200};
				begin3[] = {"\breakingpoint_jsrs\sounds\M24_s3.wav", 1.000000, 1.8, 1200};
				begin4[] = {"\breakingpoint_jsrs\sounds\M24_s1.wav", 1.000000, 2.0, 1200};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M24Sd_s4.wav", 0.700000, 1.5, 1000};
				begin2[] = {"\breakingpoint_jsrs\sounds\M24Sd_s5.wav", 0.800000, 1.6, 1000};
				begin3[] = {"\breakingpoint_jsrs\sounds\M24Sd_s6.wav", 0.630000, 1.5, 1000};
				begin4[] = {"\breakingpoint_jsrs\sounds\M24Sd_s7.wav", 0.740000, 1.6, 1000};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			class AlternateSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\762MB_s1.wav", 1.400000, 1, 2000};
				begin2[] = {"\breakingpoint_jsrs\sounds\762MB_s2.wav", 1.500000, 1, 2000};
				begin3[] = {"\breakingpoint_jsrs\sounds\762MB_s3.wav", 1.450000, 0.9, 2000};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};
			dispersion = 0.000192;
			soundContinuous = 0;
			reloadTime = 2.200000;
			//recoil = "recoil_single_gm6";
			//recoilProne = "recoil_single_prone_gm6";
		};
		muzzles[] = {"this", "Butt"};
		class GunParticles: GunParticles
		{
			class FirstEffect
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 175;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_300Sup"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3AN", "BP_MRT", "BP_PS22"};
				iconScale = 0.1;
			};
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
        };

		linkedAttach[] = {"BP_PS22", "BP_Harris", "BP_300Sup"};
		reloadAction = "GestureReloadLRR";
		reloadSound[] = {"\breakingpoint_jsrs\sounds\Bolt_s2.wav", 0.350000, 0.990000, 45};
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\Bolt_reload_s2.wav", 0.331417, 1.08, 30};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
	};

	class BP_M24Spec_WDL: BP_M24Spec
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M24A2\wpn_m24_wdl_co.paa", "breakingpoint_weapons\textures\DMR\us_dmr_wdl_co.paa", "breakingpoint_weapons\textures\M40A3\m40a5_wdl_co.paa"};
	};

	class BP_M24Spec_DES: BP_M24Spec
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M24A2\wpn_m24_des_co.paa", "breakingpoint_weapons\textures\DMR\us_dmr_des_co.paa", "breakingpoint_weapons\textures\M40A3\m40a5_des_co.paa"};
	};

	class BP_M24Spec_URB: BP_M24Spec
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M24A2\wpn_m24_urb_co.paa", "breakingpoint_weapons\textures\DMR\us_dmr_urb_co.paa", "breakingpoint_weapons\textures\M40A3\m40a5_urb_co.paa"};
	};

	class BP_M24Des: Rifle_Base_F_BP
	{
		scope = 2;
		maxZeroing = 1600;
		model = "\breakingpoint_weapons\models\M24G\BP_M24G.p3d";
		picture = "\breakingpoint_weapons\icons\gear_m24a1_rifle_x_ca.paa";
		displayName = "M24A1 Camo";
		descriptionshort = "Marine Corps 7.62mm bolt-action sniper rifle. Customized from the Remington Model 700.";
		magazines[] = {"BP_5Rnd_762x51_Mag", "BP_5Rnd_762mk316_Mag", "BP_5Rnd_762m80a1_Mag","BP_10Rnd_762mk316_Mag","BP_10Rnd_762x51_Mag","BP_10Rnd_762m80a1_Mag","BP_10Rnd_762Rubber_Mag"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M24.rtm"};
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01", 0.891251, 1, 45};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02", 0.891251, 1, 45};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03", 0.891251, 1, 45};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04", 0.891251, 1, 45};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01", 0.794328, 1, 45};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02", 0.794328, 1, 45};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03", 0.794328, 1, 45};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04", 0.794328, 1, 45};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01", 0.707946, 1, 45};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02", 0.707946, 1, 45};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03", 0.707946, 1, 45};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04", 0.707946, 1, 45};
		soundBullet[] = {"bullet1", 0.083000, "bullet2", 0.083000, "bullet3", 0.083000, "bullet4", 0.083000, "bullet5", 0.083000, "bullet6", 0.083000, "bullet7", 0.083000, "bullet8", 0.083000, "bullet9", 0.083000, "bullet10", 0.083000, "bullet11", 0.083000, "bullet12", 0.083000};
		inertia = 0.3220000;
		initSpeed = -1.05;
		recoil = "recoil_dmr_01";
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound, AlternateSound};
  			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_m24a1_shot_soundset",
					"jsrs_m24a1_shot2_soundset",
					"jsrs_9x3mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
 			{
				soundsetshot[]=
				{
					"jsrs_m24a1_shot_silenced_soundset",
					"jsrs_m24a1_shot2_silenced_soundset",
					"jsrs_7x62mm_SD_reflector_1"
				};
 			};
			class AlternateSound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_m24a1_shot_mb_soundset",
					"jsrs_m24a1_shot2_mb_soundset",
					"jsrs_9x3mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
			dispersion = 0.000407;
			soundContinuous = 0;
			reloadTime = 2.200000;
			recoil = "recoil_single_gm6";
			recoilProne = "recoil_single_prone_gm6";
		};
		muzzles[] = {"this", "Butt"};
		class GunParticles: GunParticles
		{
			class FirstEffect
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 150;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_300Sup", "BP_muzzle_snds_B", "BP_762Muzzle"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3AN", "BP_MRT", "BP_PS22"};
				iconScale = 0.1;
			};
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw", "BP_CPad"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
        };

		linkedAttach[] = {"BP_M3A"};
		chanceAttach[] =
        {
			{"BP_Harris",0.05},
			{"BP_CPad",0.03},
			{"BP_GhillieWL",0.05},
			{"BP_GhillieDes",0.05},
			{"",0.50}
        };

		reloadAction = "GestureReloadLRR";
		reloadSound[] = {"\breakingpoint_jsrs\sounds\Bolt_s2.wav", 0.350000, 0.990000, 45};
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\Bolt_reload_s2.wav", 0.331417, 1.08, 30};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
	};

	class BP_M24_WDL: BP_M24Des
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M24A2\wpn_m24_wdl_co.paa"};
	};

	class BP_M24_DES: BP_M24Des
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M24A2\wpn_m24_des_co.paa"};
	};

	class BP_M24_URB: BP_M24Des
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M24A2\wpn_m24_urb_co.paa"};
	};

	class BP_R700: Rifle_Base_F_BP
	{
		scope = 2;
		maxZeroing = 1400;
		model = "\breakingpoint_weapons\models\R700\BP_R700.p3d";
		picture = "\breakingpoint_weapons\icons\gear_r700_rifle_x_ca.paa";
		displayName = "Remington Model 700";
		descriptionshort = "Classic Remington bolt-action sniper rifle. Civilian model.";
		magazines[] = {"BP_5Rnd_762x51_Mag", "BP_5Rnd_762mk316_Mag", "BP_5Rnd_762m80a1_Mag"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M24.rtm"};
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01", 0.891251, 1, 45};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02", 0.891251, 1, 45};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03", 0.891251, 1, 45};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04", 0.891251, 1, 45};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01", 0.794328, 1, 45};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02", 0.794328, 1, 45};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03", 0.794328, 1, 45};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04", 0.794328, 1, 45};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01", 0.707946, 1, 45};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02", 0.707946, 1, 45};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03", 0.707946, 1, 45};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04", 0.707946, 1, 45};
		soundBullet[] = {"bullet1", 0.083000, "bullet2", 0.083000, "bullet3", 0.083000, "bullet4", 0.083000, "bullet5", 0.083000, "bullet6", 0.083000, "bullet7", 0.083000, "bullet8", 0.083000, "bullet9", 0.083000, "bullet10", 0.083000, "bullet11", 0.083000, "bullet12", 0.083000};
		initSpeed = -1.04;
		recoil = "recoil_dmr_01";
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound, AlternateSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_r700_shot_soundset",
					"jsrs_r700_shot2_soundset",
					"jsrs_9x3mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
 			{
				soundsetshot[]=
				{
					"jsrs_r700_shot_silenced_soundset",
					"jsrs_r700_shot2_silenced_soundset",
					"jsrs_7x62mm_SD_reflector_1"
				};
 			};
			class AlternateSound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_r700_shot_mb_soundset",
					"jsrs_r700_shot2_mb_soundset",
					"jsrs_9x3mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
 			/*class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\r700_s1.wav", 1.000000, 1.0, 900};
				begin2[] = {"\breakingpoint_jsrs\sounds\r700_s2.wav", 1.000000, 1.0, 900};
				begin3[] = {"\breakingpoint_jsrs\sounds\r700_s3.wav", 1.050000, 0.98, 900};
				soundBegin[] = {"begin1", 0.300000, "begin2", 0.300000, "begin3", 0.400000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\308SD_s7.wav", 0.800000, 1, 750};
				begin2[] = {"\breakingpoint_jsrs\sounds\308SD_s8.wav", 0.800000, 1, 750};
				begin3[] = {"\breakingpoint_jsrs\sounds\308SD_s9.wav", 0.800000, 0.9, 110};
				soundBegin[] = {"begin1", 0.330000, "begin2", 0.330000, "begin3", 0.340000};
 			};
			class AlternateSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\762MB_s1.wav", 1.400000, 1, 2000};
				begin2[] = {"\breakingpoint_jsrs\sounds\762MB_s2.wav", 1.500000, 1, 2000};
				begin3[] = {"\breakingpoint_jsrs\sounds\762MB_s3.wav", 1.450000, 0.9, 2000};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};			*/
			dispersion = 0.000421;
			soundContinuous = 0;
			reloadTime = 2.100000;
			//recoil = "recoil_single_gm6";
			//recoilProne = "recoil_single_prone_gm6";
		};
		muzzles[] = {"this", "Butt"};
		class GunParticles: GunParticles
		{
			class FirstEffect
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 135;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_300Sup", "BP_muzzle_snds_B", "BP_762Muzzle"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3AN", "BP_MRT", "BP_PS22"};
				iconScale = 0.1;
			};
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw", "BP_CPad"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
        };

		linkedAttach[] = {"BP_M3A"};
		chanceAttach[] =
        {
			{"BP_Harris",0.05},
			{"BP_CPad",0.03},
			{"",0.50}
        };

		reloadAction = "GestureReloadLRR";
		reloadSound[] = {"\breakingpoint_jsrs\sounds\Bolt_s1.wav", 0.35000, 0.950000, 45};
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\Bolt_reload_s1.wav", 0.300417, 1.00, 30};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.30957, 1, 130};
	};

	class BP_R700_WDL: BP_R700
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M24A2\wpn_m24_wdl_co.paa"};
	};

	class BP_R700_DES: BP_R700
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M24A2\wpn_m24_des_co.paa"};
	};

	class BP_R700_URB: BP_R700
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M24A2\wpn_m24_urb_co.paa"};
	};

	class BP_R300: BP_R700
	{
		scope = 2;
		maxZeroing = 1600;
		model = "\breakingpoint_weapons\models\R300\BP_R300.p3d";
		picture = "\breakingpoint_weapons\icons\gear_r300_rifle_x_ca.paa";
		magazines[] = {"BP_5Rnd_300AAC_Mag"};
		displayName = "Remington Model 300 Blackout";
		descriptionshort = "Remington 700 customized for the .300 Blackout hunting cartridge";
		initSpeed = -1.06;
		recoil = "recoil_mxm";
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound, AlternateSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_r300_shot_soundset",
					"jsrs_r300_shot2_soundset",
					"jsrs_9x3mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
 			{
				soundsetshot[]=
				{
					"jsrs_r300_shot_silenced_soundset",
					"jsrs_r300_shot2_silenced_soundset",
					"jsrs_7x62mm_SD_reflector_1"
				};
 			};
			class AlternateSound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_r300_shot_mb_soundset",
					"jsrs_r300_shot2_mb_soundset",
					"jsrs_9x3mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
 			/*class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\r300_s1.wav", 0.800000, 1.4, 700};
				begin2[] = {"\breakingpoint_jsrs\sounds\r300_s2.wav", 0.800000, 1.3, 700};
				begin3[] = {"\breakingpoint_jsrs\sounds\r300_s3.wav", 0.950000, 1.33, 700};
				soundBegin[] = {"begin1", 0.300000, "begin2", 0.300000, "begin3", 0.400000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\308SD_s7.wav", 0.800000, 1, 600};
				begin2[] = {"\breakingpoint_jsrs\sounds\308SD_s8.wav", 0.800000, 1, 600};
				begin3[] = {"\breakingpoint_jsrs\sounds\308SD_s9.wav", 0.800000, 0.9, 600};
				soundBegin[] = {"begin1", 0.330000, "begin2", 0.330000, "begin3", 0.340000};
 			};
			class AlternateSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\762MB_s1.wav", 1.400000, 1, 2000};
				begin2[] = {"\breakingpoint_jsrs\sounds\762MB_s2.wav", 1.500000, 1, 2000};
				begin3[] = {"\breakingpoint_jsrs\sounds\762MB_s3.wav", 1.450000, 0.9, 2000};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};			*/
			dispersion = 0.000573;
			soundContinuous = 0;
			reloadTime = 2.200000;
			//recoil = "recoil_single_ebr";
			//recoilProne = "recoil_single_prone_ebr";
		};
		muzzles[] = {"this", "Butt"};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 80;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_300Sup", "BP_muzzle_snds_B", "BP_762Muzzle"};
				iconScale = 0.1;
			};

			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_MRCO", "optic_Arco", "optic_hamr", "BP_optic_ACOG",  "BP_compm4s", "BP_OldComp"};
				iconScale = 0.1;
			};

			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw", "BP_CPad"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
        };

		linkedAttach[] = {"BP_MRT"};
		chanceAttach[] =
        {
			{"BP_Harris",0.04},
			{"BP_CPad",0.04},
			{"BP_M3A2",0.02},
			{"BP_M3LR",0.01},
			{"",0.50}
        };
	};

	class BP_R300_WDL: BP_R300
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M24A2\wpn_m24_wdl_co.paa", "\breakingpoint_weapons\textures\DMR\us_dmr_wdl_co.paa", "\breakingpoint_weapons\textures\cz_mc550\data\equip1_wdl_co.paa", "\breakingpoint_weapons\textures\CZ_455\huntingrifle_wdl_co.paa"};
	};

	class BP_R300_DES: BP_R300
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M24A2\wpn_m24_des_co.paa", "\breakingpoint_weapons\textures\DMR\us_dmr_des_co.paa", "\breakingpoint_weapons\textures\cz_mc550\data\equip1_des_co.paa", "\breakingpoint_weapons\textures\CZ_455\huntingrifle_des_co.paa"};
	};

	class BP_R300_URB: BP_R300
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\M24A2\wpn_m24_urb_co.paa", "\breakingpoint_weapons\textures\DMR\us_dmr_urb_co.paa", "\breakingpoint_weapons\textures\cz_mc550\data\equip1_urb_co.paa", "\breakingpoint_weapons\textures\CZ_455\huntingrifle_urb_co.paa"};
	};

	class BP_Rem6: BP_MXM
	{
	    scope = 2;
		maxZeroing = 1600;
		displayName = "Remington Grendel";
		descriptionUse = "Remington Grendel";
		model = "\breakingpoint_weapons\models\Rem6\BP_Rem6.p3d";
		picture = "\breakingpoint_weapons\icons\gear_rem6_rifle_x_ca.paa";
		magazines[] = {"BP_10Rnd_65x39", "BP_10Rnd_65x47_Lapua", "BP_10Rnd_65x39_SD"};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		changeFiremodeSound[] = {};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M24.rtm"};
		inertia = 0.200000;
		initSpeed = -1.07;
		recoil = "recoil_mxm";
		reloadAction = "GestureReloadMX";
		reloadSound[] = {"\breakingpoint_jsrs\sounds\Bolt_s1.wav", 0.35000, 1.150000, 35};
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\Bolt_reload_s1.wav", 0.351417, 1.10, 30};
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {closure1,0.5, closure2,0.5};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\MX-M_s1.wav", 1.412538, 1, 1200};
				begin2[] = {"breakingpoint_jsrs\sounds\MX-M_s2.wav", 1.412538, 1, 1200};
				begin3[] = {"breakingpoint_jsrs\sounds\MX-M_s3.wav", 1.412538, 1, 1200};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"A3\sounds_f\weapons\MX\Silencer_Mx_01.wss", 1.412538, 1, 1000};//change to M4sd.wav? Change it to MX-SD!!!
				begin2[] = {"A3\sounds_f\weapons\MX\Silencer_Mx_02.wss", 1.412538, 1, 1000};
				begin3[] = {"A3\sounds_f\weapons\MX\Silencer_Mx_03.wss", 1.412538, 1, 1000};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};
			reloadTime = 1.896000;
			recoil = "recoil_single_prone_mx";
			recoilProne = "recoil_single_prone_mx";
			dispersion = 0.000497;
		};
		muzzles[] = {"this", "Butt"};
		class GunParticles: GunParticles
		{
			class FirstEffect
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};

		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 115;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_H"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "optic_MRCO", "optic_Arco", "BP_optic_ACOG",  "BP_compm4s", "BP_OldComp"};
				iconScale = 0.1;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_CPad"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
        };

		linkedAttach[] = {"BP_MRT"};
		chanceAttach[] =
        {
			{"BP_M3A2",0.02},
			{"BP_Harris",0.04},
			{"BP_CPad",0.04},
			{"",0.50}
        };
    };

	class BP_Rem6_WDL: BP_Rem6
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\CZ_455\ruger_wdl_co.paa", "\breakingpoint_weapons\textures\m40a3\m40a5_wdl_co.paa", "\breakingpoint_weapons\textures\m40a3\cz750_wdl_co.paa", "\breakingpoint_weapons\textures\awsm\lrr_wdl_co.paa"};
	};

	class BP_Rem6_DES: BP_Rem6
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\CZ_455\ruger_des_co.paa", "\breakingpoint_weapons\textures\m40a3\m40a5_des_co.paa", "\breakingpoint_weapons\textures\m40a3\cz750_des_co.paa", "\breakingpoint_weapons\textures\awsm\lrr_des_co.paa"};
	};

	class BP_Rem6_URB: BP_Rem6
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\CZ_455\ruger_urb_co.paa", "\breakingpoint_weapons\textures\m40a3\m40a5_urb_co.paa", "\breakingpoint_weapons\textures\m40a3\cz750_urb_co.paa", "\breakingpoint_weapons\textures\awsm\lrr_urb_co.paa"};
	};

	class BP_M40A3: Rifle_Base_F_BP
	{
		scope = 2;
		maxZeroing = 1600;
		model = "\breakingpoint_weapons\models\M40A3\BP_m40a3.p3d";
		picture = "\breakingpoint_weapons\icons\gear_m40a3_rifle_x_ca.paa";
		displayName = "USMC M40A5";
		descriptionshort = "Marine Corps 7.62mm bolt-action sniper rifle. Heavily customized from the Remington Model 700.";
		magazines[] = {"BP_10Rnd_762mk316_Mag", "BP_10Rnd_762x51_Mag", "BP_10Rnd_762m80a1_Mag", "BP_5Rnd_762mk316_Mag", "BP_5Rnd_762x51_Mag", "BP_5Rnd_762m80a1_Mag"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M24.rtm"};
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01", 0.891251, 1, 45};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02", 0.891251, 1, 45};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03", 0.891251, 1, 45};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04", 0.891251, 1, 45};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01", 0.794328, 1, 45};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02", 0.794328, 1, 45};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03", 0.794328, 1, 45};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04", 0.794328, 1, 45};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01", 0.707946, 1, 45};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02", 0.707946, 1, 45};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03", 0.707946, 1, 45};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04", 0.707946, 1, 45};
		soundBullet[] = {"bullet1", 0.083000, "bullet2", 0.083000, "bullet3", 0.083000, "bullet4", 0.083000, "bullet5", 0.083000, "bullet6", 0.083000, "bullet7", 0.083000, "bullet8", 0.083000, "bullet9", 0.083000, "bullet10", 0.083000, "bullet11", 0.083000, "bullet12", 0.083000};
		inertia = 0.250000;
		initSpeed = -1.07;
		recoil = "recoil_dmr_01";
		modes[] = {"Single", "far_optic1", "far_optic2"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound, AlternateSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_m40a5_shot_soundset",
					"jsrs_m40a5_shot2_soundset",
					"jsrs_9x3mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
 			{
				soundsetshot[]=
				{
					"jsrs_m40a5_shot_silenced_soundset",
					"jsrs_m40a5_shot2_silenced_soundset",
					"jsrs_7x62mm_SD_reflector_1"
				};
 			};
			class AlternateSound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_m40a5_shot_mb_soundset",
					"jsrs_m40a5_shot2_mb_soundset",
					"jsrs_9x3mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
 			/*class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\m40a3_s1.wav", 1.300000, 1.0, 1100};
				begin2[] = {"\breakingpoint_jsrs\sounds\m40a3_s2.wav", 1.400000, 1.0, 1100};
				begin3[] = {"\breakingpoint_jsrs\sounds\m40a3_s3.wav", 1.350000, 0.98, 1100};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\308SD_s7.wav", 0.800000, 1, 920};
				begin2[] = {"\breakingpoint_jsrs\sounds\308SD_s8.wav", 0.800000, 1, 920};
				begin3[] = {"\breakingpoint_jsrs\sounds\308SD_s9.wav", 0.800000, 0.9, 920};
				soundBegin[] = {"begin1", 0.330000, "begin2", 0.330000, "begin3", 0.340000};
 			};
			class AlternateSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\762MB_s1.wav", 1.400000, 1, 2000};
				begin2[] = {"\breakingpoint_jsrs\sounds\762MB_s2.wav", 1.500000, 1, 2000};
				begin3[] = {"\breakingpoint_jsrs\sounds\762MB_s3.wav", 1.450000, 0.9, 2000};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};	*/
			dispersion = 0.000269;
			soundContinuous = 0;
			reloadTime = 2.100000;
			//recoil = "recoil_single_gm6";
			//recoilProne = "recoil_single_prone_gm6";
			minRange = 2;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 450;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.01;
			aiRateOfFireDistance = 450;
		};
		class far_optic1: Single
		{
			showToPlayer = 0;
			minRange = 450;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1500;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 2.5;
			aiRateOfFireDistance = 1700;
		};
		muzzles[] = {"this", "Butt"};
		class GunParticles: GunParticles
		{
			class FirstEffect
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 165;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_300Sup", "BP_muzzle_snds_B", "BP_762Muzzle"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_OldComp", "BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG", "BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS"};
				iconScale = 0.1;
			};
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
        };

		linkedAttach[] = {"BP_L14X"};
		chanceAttach[] =
        {
			{"BP_Harris",0.10},
			{"BP_CPad",0.10},
			{"",0.50}
        };

		reloadAction = "GestureReloadLRR";
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\M40_reload.wav", 0.350000, 1.000000, 50};
		reloadSound[] = {"\breakingpoint_jsrs\sounds\M40_reload3.wav", 0.351417, 1.00, 50};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
	};

	class BP_M40A3_WDL: BP_M40A3
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\m40a3\m40a5_wdl_co.paa", "\breakingpoint_weapons\textures\m40a3\cz750_wdl_co.paa"};
	};

	class BP_M40A3_DES: BP_M40A3
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\m40a3\m40a5_des_co.paa", "\breakingpoint_weapons\textures\m40a3\cz750_des_co.paa"};
	};

	class BP_M40A3_URB: BP_M40A3
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\m40a3\m40a5_urb_co.paa", "\breakingpoint_weapons\textures\m40a3\cz750_urb_co.paa"};
	};

	class BP_M40A3_AI: BP_M40A3
	{
		scope = 2;
		modes[] = {"Single", "far_optic1", "far_optic2"};
		magazines[] = {"BP_500Rnd_762x51_AI"};
		inertia = 0.0000;
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefK = 0.100000;
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound, AlternateSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
  			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\m40a3_s1.wav", 1.300000, 1.0, 1200};
				begin2[] = {"\breakingpoint_jsrs\sounds\m40a3_s2.wav", 1.400000, 1.0, 1300};
				begin3[] = {"\breakingpoint_jsrs\sounds\m40a3_s3.wav", 1.350000, 0.98, 1200};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\308SD_s7.wav", 0.800000, 1, 700};
				begin2[] = {"\breakingpoint_jsrs\sounds\308SD_s8.wav", 0.800000, 1, 700};
				begin3[] = {"\breakingpoint_jsrs\sounds\308SD_s9.wav", 0.800000, 0.9, 700};
				soundBegin[] = {"begin1", 0.330000, "begin2", 0.330000, "begin3", 0.340000};
 			};
			class AlternateSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\762MB_s1.wav", 1.400000, 1, 2500};
				begin2[] = {"\breakingpoint_jsrs\sounds\762MB_s2.wav", 1.500000, 1, 2500};
				begin3[] = {"\breakingpoint_jsrs\sounds\762MB_s3.wav", 1.450000, 0.9, 2550};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};
			dispersion = 0.000298;
			soundContinuous = 0;
			reloadTime = 2.100000;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			minRange = 2;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 450;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.01;
			aiRateOfFireDistance = 450;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefK = 0.100000;
		};
		class far_optic1: Single
		{
			showToPlayer = 0;
			minRange = 450;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1500;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 2.5;
			aiRateOfFireDistance = 1700;
		};
		muzzles[] = {"this", "Butt"};
	};

	class BP_CZ550_old: Rifle_Base_F_BP
	{
		scope = 2;
		maxZeroing = 700;
		model = "\breakingpoint_weapons\models\CZ550_old\BP_CZ550_old.p3d";
		picture = "\breakingpoint_weapons\icons\gear_cz550_rifle_x_ca.paa";
		displayName = "Old CZ-550";
		descriptionshort = "A poorly maintained 30-06 Hunting Rifle";
		magazines[] = {"BP_5Rnd_3006_Mag", "BP_5Rnd_3006M_Mag"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M24.rtm"};
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01", 0.891251, 1, 45};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02", 0.891251, 1, 45};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03", 0.891251, 1, 45};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04", 0.891251, 1, 45};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01", 0.794328, 1, 45};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02", 0.794328, 1, 45};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03", 0.794328, 1, 45};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04", 0.794328, 1, 45};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01", 0.707946, 1, 45};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02", 0.707946, 1, 45};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03", 0.707946, 1, 45};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04", 0.707946, 1, 45};
		soundBullet[] = {"bullet1", 0.083000, "bullet2", 0.083000, "bullet3", 0.083000, "bullet4", 0.083000, "bullet5", 0.083000, "bullet6", 0.083000, "bullet7", 0.083000, "bullet8", 0.083000, "bullet9", 0.083000, "bullet10", 0.083000, "bullet11", 0.083000, "bullet12", 0.083000};
		inertia = 0.360000;
		recoil = "recoil_ebr";
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound, AlternateSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\CZ_Barrelless_S1.wav", 1.000000, 1.2, 1400};
				begin2[] = {"\breakingpoint_jsrs\sounds\CZ_Barrelless_S2.wav", 1.000000, 1.15, 1400};
				begin3[] = {"\breakingpoint_jsrs\sounds\CZ_Barrelless_S3.wav", 1.000000, 1.18, 1400};
				begin4[] = {"\breakingpoint_jsrs\sounds\CZ_Barrelless_S4.wav", 1.060000, 1.1, 1400};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\HA550_s1.wav", 1.000000, 1.55, 1100};
				begin2[] = {"\breakingpoint_jsrs\sounds\HA550_s2.wav", 1.100000, 1.52, 1100};
				begin3[] = {"\breakingpoint_jsrs\sounds\HA550_s3.wav", 1.050000, 1.58, 1100};
				begin4[] = {"\breakingpoint_jsrs\sounds\HA550_s2.wav", 0.920000, 1.69, 1100};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			class AlternateSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M16SD_s1.wav", 1.000000, 0.8, 1200};
				begin2[] = {"\breakingpoint_jsrs\sounds\M16SD_s2.wav", 1.000000, 0.8, 1200};
				begin3[] = {"\breakingpoint_jsrs\sounds\M16SD_s1.wav", 1.000000, 0.7, 1200};
				begin4[] = {"\breakingpoint_jsrs\sounds\M16SD_s2.wav", 1.060000, 0.7, 1200};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			dispersion = 0.04000;
			soundContinuous = 0;
			reloadTime = 2.350000;
		};
		muzzles[] = {"this", "Butt"};
		class GunParticles: GunParticles
		{
			class FirstEffect
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 80;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_CZmod_br", "BP_CZst_br", "BP_CZol_br", "BP_CZSup_br"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_MRT", "BP_VX2", "BP_VX3", "BP_Unertl8x", "BP_Unertl32x", "BP_EnfieldOptic2"};
				iconScale = 0.1;
			};
			class PointerSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_CPad"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
        };

		linkedAttach[] = {"BP_CZmod_br"};
		chanceAttach[] =
        {
			{"BP_VX2",0.02},
			{"BP_Harris",0.01},
			{"BP_CPad",0.01},
			{"",0.50}
        };

		reloadAction = "GestureReloadLRR";
		reloadSound[] = {"\breakingpoint_jsrs\sounds\Bolt_s1.wav", 0.35000, 0.950000, 45};
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\Bolt_reload_s1.wav", 0.351417, 1.00, 30};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
	};

	class BP_CZ550_WDL: BP_CZ550_old
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\cz550_old\data\cz550_wdl_co.paa"};
	};

	class BP_CZ550_DES: BP_CZ550_old
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\cz550_old\data\cz550_des_co.paa"};
	};

	class BP_CZ550_URB: BP_CZ550_old
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\cz550_old\data\cz550_urb_co.paa"};
	};

	class BP_CZ455: Rifle_Base_F_BP
	{
		scope = 2;
		maxZeroing = 1000;
		model = "\breakingpoint_weapons\models\CZ_455\BP_CZ455.p3d";
		picture = "\breakingpoint_weapons\icons\gear_cz445_rifle_x_ca.paa";
		displayName = "CZ-452 Varmint";
		descriptionshort = "Compact .22LR small game Hunting/Target Rifle";
		magazines[] = {"BP_5Rnd_22_Mag", "BP_5Rnd_762Rubber_Mag"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M24.rtm"};
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01", 0.891251, 1, 45};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02", 0.891251, 1, 45};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03", 0.891251, 1, 45};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04", 0.891251, 1, 45};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01", 0.794328, 1, 45};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02", 0.794328, 1, 45};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03", 0.794328, 1, 45};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04", 0.794328, 1, 45};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01", 0.707946, 1, 45};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02", 0.707946, 1, 45};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03", 0.707946, 1, 45};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04", 0.707946, 1, 45};
		soundBullet[] = {"bullet1", 0.083000, "bullet2", 0.083000, "bullet3", 0.083000, "bullet4", 0.083000, "bullet5", 0.083000, "bullet6", 0.083000, "bullet7", 0.083000, "bullet8", 0.083000, "bullet9", 0.083000, "bullet10", 0.083000, "bullet11", 0.083000, "bullet12", 0.083000};
		inertia = 0.150000;
		initSpeed = -1.03;
		recoil = "recoil_22lr";
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"A3\sounds_f\weapons\Gatling\gatling1v1.wss", 2.000000, 2.6, 500};
				begin2[] = {"A3\sounds_f\weapons\Gatling\gatling1v1.wss", 2.000000, 2.6, 500};
				begin3[] = {"A3\sounds_f\weapons\Gatling\gatling1v1.wss", 2.000000, 2.6, 500};
				soundBegin[] = {"begin1", 0.330000, "begin2", 0.330000, "begin3", 0.340000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"A3\sounds_f\weapons\pistols\walter_st_1.wss", 0.400000, 1.9, 120};
				begin2[] = {"A3\sounds_f\weapons\pistols\walter_st_2.wss", 0.400000, 1.9, 120};
				begin3[] = {"A3\sounds_f\weapons\pistols\walter_st_2.wss", 0.400000, 1.9, 120};
				soundBegin[] = {"begin1", 0.330000, "begin2", 0.330000, "begin3", 0.340000};
 			};
			dispersion = 0.000600;
			soundContinuous = 0;
			reloadTime = 1.550000;
			recoil = "recoil_single_primary_4outof10";
			recoilProne = "recoil_single_primary_prone_4outof10";
		};
		muzzles[] = {"this", "Butt"};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 60;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_22Sup"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_MRT", "BP_VX2", "BP_VX3", "BP_Unertl8x", "BP_Unertl32x", "BP_EnfieldOptic2"};
				iconScale = 0.1;
			};
			class PointerSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw", "BP_CPad"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
        };

		linkedAttach[] = {"BP_MRT"};
		chanceAttach[] =
        {
			{"BP_Harris",0.01},
			{"BP_CPad",0.01},
			{"BP_22Sup",0.05},
			{"",0.50}
        };

		memoryPointCamera = "eye";
		reloadAction = "GestureReloadMX";
		reloadSound[] = {"\breakingpoint_jsrs\sounds\Bolt_s1.wav", 0.35000, 1.450000, 45};
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\Bolt_reload_s1.wav", 0.351417, 1.30, 30};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.230957, 1, 100};
	};

	class BP_CZ455_WDL: BP_CZ455
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\cz_455\huntingrifle_wdl_co.paa"};
	};

	class BP_CZ455_DES: BP_CZ455
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\cz_455\huntingrifle_des_co.paa"};
	};

	class BP_CZ455_URB: BP_CZ455
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\cz_455\huntingrifle_urb_co.paa"};
	};

	class BP_CZ455s: BP_CZ455
	{
		scope = 2;
	};

	class BP_Ruger: Rifle_Base_F_BP
	{
		scope = 2;
		maxZeroing = 600;
		model = "\breakingpoint_weapons\models\Ruger\BP_Ruger.p3d";
		picture = "\breakingpoint_weapons\icons\gear_ruger_rifle_x_ca.paa";
		displayName = "Ruger 10/22 Carbine";
		descriptionshort = "Compact .22LR semi-automatic Hunting/Target Rifle";
		magazines[] = {"BP_25Rnd_22_Mag", "BP_5Rnd_22_Mag", "BP_5Rnd_762Rubber_Mag"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M24.rtm"};
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01", 0.891251, 1, 45};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02", 0.891251, 1, 45};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03", 0.891251, 1, 45};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04", 0.891251, 1, 45};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01", 0.794328, 1, 45};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02", 0.794328, 1, 45};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03", 0.794328, 1, 45};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04", 0.794328, 1, 45};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01", 0.707946, 1, 45};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02", 0.707946, 1, 45};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03", 0.707946, 1, 45};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04", 0.707946, 1, 45};
		soundBullet[] = {"bullet1", 0.083000, "bullet2", 0.083000, "bullet3", 0.083000, "bullet4", 0.083000, "bullet5", 0.083000, "bullet6", 0.083000, "bullet7", 0.083000, "bullet8", 0.083000, "bullet9", 0.083000, "bullet10", 0.083000, "bullet11", 0.083000, "bullet12", 0.083000};
		inertia = 0.217000;
		recoil = "recoil_22lr";
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"A3\sounds_f\weapons\Gatling\gatling1v1.wss", 2.000000, 3.6, 500};
				begin2[] = {"A3\sounds_f\weapons\Gatling\gatling1v1.wss", 2.000000, 3.6, 500};
				begin3[] = {"A3\sounds_f\weapons\Gatling\gatling1v1.wss", 2.000000, 3.6, 500};
				soundBegin[] = {"begin1", 0.330000, "begin2", 0.330000, "begin3", 0.340000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"A3\sounds_f\weapons\pistols\walter_st_1.wss", 0.400000, 1.9, 120};
				begin2[] = {"A3\sounds_f\weapons\pistols\walter_st_2.wss", 0.400000, 1.9, 120};
				begin3[] = {"A3\sounds_f\weapons\pistols\walter_st_2.wss", 0.400000, 1.9, 120};
				soundBegin[] = {"begin1", 0.330000, "begin2", 0.330000, "begin3", 0.340000};
 			};
			dispersion = 0.000990;
			soundContinuous = 0;
			reloadTime = 0.1250000;
		};

		muzzles[] = {"this", "Butt"};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 65;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_22Sup"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_AK_ACO","BP_OldComp", "BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG", "BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS"};
				iconScale = 0.1;
			};
			class PointerSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw", "BP_CPad"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
        };

		linkedAttach[] = {"BP_MRT"};
		chanceAttach[] =
        {
			{"BP_22Sup",0.03},
			{"BP_Harris",0.04},
			{"BP_CPad",0.04},
			{"",0.50}
        };

		memoryPointCamera = "eye";
		reloadAction = "GestureReloadMX";
		reloadSound[] = {};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_ebr", 0.398107, 1.5, 10};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.230957, 1, 50};
	};

	class BP_Ruger_WDL: BP_Ruger
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\cz_455\ruger_wdl_co.paa", "\breakingpoint_weapons\textures\sa58\sa58_wdl_co.paa", "\breakingpoint_weapons\textures\m21\m14_wdl_co.paa"};
	};

	class BP_Ruger_DES: BP_Ruger
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\cz_455\ruger_des_co.paa", "\breakingpoint_weapons\textures\sa58\sa58_des_co.paa", "\breakingpoint_weapons\textures\m21\m14_des_co.paa"};
	};

	class BP_Ruger_URB: BP_Ruger
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\cz_455\ruger_urb_co.paa", "\breakingpoint_weapons\textures\sa58\sa58_urb_co.paa", "\breakingpoint_weapons\textures\m21\m14_urb_co.paa"};
	};

	class BP_Rugerm14: BP_Ruger
	{
		scope = 2;
		maxZeroing = 800;
		//model = "\breakingpoint_weapons\models\Ruger\BP_Ruger.p3d";
		model = "\breakingpoint_weapons\models\DMR\BP_DMR.p3d";
		//picture = "\breakingpoint_weapons\icons\gear_ruger_rifle_x_ca.paa";
		picture = "\breakingpoint_weapons\icons\gear_dmr_rifle_x_ca.paa";
		displayName = "Ruger Mini 14";
		descriptionshort = "Compact 5.56 semi-automatic Rifle";
		magazines[] = {"BP_556x45_Stanag", "BP_556x45_Stanag_Tracer", "BP_556x45_StanagSD", "BP_556x45_StanagM855A1", "BP_556x45_StanagMK262", "BP_556old_Stanag", "BP_5Rnd_223_Mag", "BP_5Rnd_223BTHP_mag", "BP_556x45_Rubber"};
		//handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M24.rtm"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M60E4.rtm"};
		//soundBullet[] = {"bullet1", 0.083000, "bullet2", 0.083000, "bullet3", 0.083000, "bullet4", 0.083000, "bullet5", 0.083000, "bullet6", 0.083000, "bullet7", 0.083000, "bullet8", 0.083000, "bullet9", 0.083000, "bullet10", 0.083000, "bullet11", 0.083000, "bullet12", 0.083000};
		inertia = 0.257000;
		recoil = "recoil_mk20";
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\m4sd.wav", 2.000000, 3.6, 800};
				begin2[] = {"\breakingpoint_jsrs\sounds\m4sd.wav", 2.000000, 3.6, 800};
				begin3[] = {"\breakingpoint_jsrs\sounds\m4sd.wav", 2.000000, 3.6, 800};
				soundBegin[] = {"begin1", 0.330000, "begin2", 0.330000, "begin3", 0.340000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M16sd_s1.wav", 0.390000, 1.9, 130};
				begin2[] = {"\breakingpoint_jsrs\sounds\M16sd_s2.wav", 0.380000, 1.9, 130};
				begin3[] = {"\breakingpoint_jsrs\sounds\M16sd_s1.wav", 0.350000, 1.9, 130};
				soundBegin[] = {"begin1", 0.330000, "begin2", 0.330000, "begin3", 0.340000};
 			};
			dispersion = 0.0001050;
			soundContinuous = 0;
			reloadTime = 0.1250000;
			//recoil = "recoil_single_primary_4outof10";
			//recoilProne = "recoil_single_primary_prone_4outof10";
		};
		muzzles[] = {"this", "Butt"};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 65;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_M12", "BP_muzzle_snds_M"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_AK_ACO","BP_OldComp", "BP_compm4s", "optic_MRCO", "optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight", "BP_optic_ACOG", "BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS"};
				iconScale = 0.1;
			};
			class PointerSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw", "BP_CPad"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
        };
		memoryPointCamera = "eye";
		reloadAction = "GestureReloadMX";
		reloadSound[] = {};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_ebr", 0.398107, 1.5, 10};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.230957, 1, 50};
	};

	class BP_MC550: BP_CZ550_old
	{
		scope = 2;
		maxZeroing = 1600;
		model = "\breakingpoint_weapons\models\CZ_MC550\BP_mc5502.p3d";
		picture = "\breakingpoint_weapons\icons\gear_mc550_rifle_x_ca.paa";
		displayName = "CZ-MC550";
		descriptionshort = "30-06 Hunting Rifle with a Walnut finish";
		magazines[] = {"BP_5Rnd_3006_Mag", "BP_5Rnd_3006M_Mag"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M24.rtm"};
		inertia = 0.365000;
		recoil = "recoil_ebr";
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound, AlternateSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\CZ_Barrelless_S1.wav", 1.000000, 1.2, 1600};
				begin2[] = {"\breakingpoint_jsrs\sounds\CZ_Barrelless_S2.wav", 1.000000, 1.15, 1600};
				begin3[] = {"\breakingpoint_jsrs\sounds\CZ_Barrelless_S3.wav", 1.000000, 1.18, 1600};
				begin4[] = {"\breakingpoint_jsrs\sounds\CZ_Barrelless_S4.wav", 1.060000, 1.1, 1500};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\HA550_s1.wav", 1.000000, 1.55, 1200};
				begin2[] = {"\breakingpoint_jsrs\sounds\HA550_s2.wav", 1.100000, 1.52, 1200};
				begin3[] = {"\breakingpoint_jsrs\sounds\HA550_s3.wav", 1.050000, 1.58, 1200};
				begin4[] = {"\breakingpoint_jsrs\sounds\HA550_s2.wav", 0.920000, 1.69, 1200};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			class AlternateSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M16SD_s1.wav", 1.000000, 0.8, 1200};
				begin2[] = {"\breakingpoint_jsrs\sounds\M16SD_s2.wav", 1.000000, 0.8, 1200};
				begin3[] = {"\breakingpoint_jsrs\sounds\M16SD_s1.wav", 1.000000, 0.7, 1200};
				begin4[] = {"\breakingpoint_jsrs\sounds\M16SD_s2.wav", 1.060000, 0.7, 1200};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			dispersion = 0.02082;
			soundContinuous = 0;
			reloadTime = 2.350000;
		};
		muzzles[] = {"this", "Butt"};
		class GunParticles: GunParticles
		{
			class FirstEffect
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 90;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_CZmod_br", "BP_CZst_br", "BP_CZol_br", "BP_CZSup_br"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_MRT", "BP_VX2", "BP_VX3", "BP_Unertl8x", "BP_Unertl32x", "BP_EnfieldOptic2"};
				iconScale = 0.1;
			};
			class PointerSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw", "BP_CPad"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
        };

		linkedAttach[] = {"BP_CZst_br", "BP_VX2"};
		chanceAttach[] =
        {
			{"BP_Harris",0.04},
			{"BP_CPad",0.04},
			{"BP_CZmod_br",0.01},
			{"",0.60}
        };

		reloadAction = "GestureReloadMX";
		reloadSound[] = {"\breakingpoint_jsrs\sounds\HA550_bolt", 0.350000, 1.000000, 55};
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\HA550_Reload", 0.301417, 1.20, 30};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
	};

	class BP_MC550_WDL: BP_MC550
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\cz_455\huntingrifle_wdl_co.paa", "\breakingpoint_weapons\textures\cz_mc550\data\equip1_wdl_co.paa"};
	};

	class BP_MC550_DES: BP_MC550
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\cz_455\huntingrifle_des_co.paa", "\breakingpoint_weapons\textures\cz_mc550\data\equip1_des_co.paa"};
	};

	class BP_MC550_URB: BP_MC550
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\cz_455\huntingrifle_urb_co.paa", "\breakingpoint_weapons\textures\cz_mc550\data\equip1_urb_co.paa"};
	};

	class BP_MC5502: BP_MC550
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\CZ_MC550\BP_mc5502.p3d";
		picture = "\breakingpoint_weapons\icons\gear_mc550_rifle_x_ca.paa";
	};

	class BP_HA550: Rifle_Base_F_BP
	{
		scope = 2;
		maxZeroing = 1600;
		model = "\breakingpoint_weapons\models\CZ_HA550\BP_ha550.p3d";
		picture = "\breakingpoint_weapons\icons\gear_ha550_rifle_x_ca.paa";
		displayName = "CZ-HA550 Hunter";
		descriptionshort = "Precision hand crafted Hunting Rifle designed for big game hunting";
		magazines[] = {"BP_5Rnd_300_Mag", "BP_5Rnd_300M_Mag"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M24.rtm"};
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01", 0.891251, 1, 45};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02", 0.891251, 1, 45};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03", 0.891251, 1, 45};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04", 0.891251, 1, 45};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01", 0.794328, 1, 45};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02", 0.794328, 1, 45};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03", 0.794328, 1, 45};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04", 0.794328, 1, 45};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01", 0.707946, 1, 45};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02", 0.707946, 1, 45};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03", 0.707946, 1, 45};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04", 0.707946, 1, 45};
		soundBullet[] = {"bullet1", 0.083000, "bullet2", 0.083000, "bullet3", 0.083000, "bullet4", 0.083000, "bullet5", 0.083000, "bullet6", 0.083000, "bullet7", 0.083000, "bullet8", 0.083000, "bullet9", 0.083000, "bullet10", 0.083000, "bullet11", 0.083000, "bullet12", 0.083000};
		recoil = "recoil_m320";
		inertia = 0.389000;
		modes[] = {"Single", "far_optic1", "far_optic2"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound, AlternateSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\300Win_s1.wav", 1.000000, 1.5, 1300};
				begin2[] = {"\breakingpoint_jsrs\sounds\300Win_s2.wav", 1.000000, 1.55, 1300};
				begin3[] = {"\breakingpoint_jsrs\sounds\300Win_s3.wav", 1.000000, 1.68, 1300};
				begin4[] = {"\breakingpoint_jsrs\sounds\300Win_s4.wav", 1.060000, 1.4, 1300};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M24Sd_s4.wav", 0.700000, 1.5, 1000};
				begin2[] = {"\breakingpoint_jsrs\sounds\M24Sd_s5.wav", 0.800000, 1.6, 1000};
				begin3[] = {"\breakingpoint_jsrs\sounds\M24Sd_s6.wav", 0.630000, 1.5, 1000};
				begin4[] = {"\breakingpoint_jsrs\sounds\M24Sd_s7.wav", 0.740000, 1.6, 1000};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			class AlternateSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\762MB_s1.wav", 1.400000, 1, 2000};
				begin2[] = {"\breakingpoint_jsrs\sounds\762MB_s2.wav", 1.500000, 1, 2000};
				begin3[] = {"\breakingpoint_jsrs\sounds\762MB_s3.wav", 1.450000, 0.9, 2000};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};
			dispersion = 0.000452;
			soundContinuous = 0;
			reloadTime = 2.250000;
			//recoil = "recoil_single_primary_prone_1outof10";
			//recoilProne = "recoil_single_primary_prone_1outof10";
			minRange = 2;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 450;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 450;
		};
		class far_optic1: Single
		{
			showToPlayer = 0;
			minRange = 450;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1500;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 2.5;
			aiRateOfFireDistance = 1700;
		};
		muzzles[] = {"this", "Butt"};
		class GunParticles: GunParticles
		{
			class FirstEffect
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 100;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_300Sup"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_MRT", "BP_VX2", "BP_VX3", "BP_Unertl8x", "BP_Unertl32x", "BP_EnfieldOptic2"};
				iconScale = 0.1;
			};
			class PointerSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw", "BP_CPad"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
        };

		linkedAttach[] = {"BP_VX3"};
		chanceAttach[] =
        {
			{"BP_Harris",0.04},
			{"BP_CPad",0.04},
			{"BP_300Sup",0.01},
			{"",0.60}
        };

		reloadAction = "GestureReloadMX";
		reloadSound[] = {"\breakingpoint_jsrs\sounds\HA550_bolt", 0.350000, 1.000000, 50};
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\HA550_Reload", 0.301417, 1.20, 30};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
	};

	class BP_HA550_WDL: BP_HA550
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\cz_455\huntingrifle_wdl_co.paa"};
	};

	class BP_HA550_DES: BP_HA550
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\cz_455\huntingrifle_des_co.paa"};
	};

	class BP_HA550_URB: BP_HA550
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\cz_455\huntingrifle_urb_co.paa"};
	};

	class BP_Win70: BP_MC550
	{
		scope = 2;
		maxZeroing = 1600;
		model = "\breakingpoint_weapons\models\Win70\BP_Win70.p3d";
		displayName = "Winchester Model 70";
		descriptionShort = "High caliber hunting rifle";
		picture = "\breakingpoint_weapons\icons\gear_Win70_rifle_x_ca.paa";
		inertia = 0.325000;
		recoil = "recoil_ebr";
		modes[] = {"Single"};
		initSpeed = -0.98;
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound, AlternateSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\MC550_s1.wav", 1.000000, 1.8, 1400};
				begin2[] = {"\breakingpoint_jsrs\sounds\MC550_s2.wav", 1.000000, 1.85, 1400};
				begin3[] = {"\breakingpoint_jsrs\sounds\MC550_s3.wav", 1.000000, 1.98, 1400};
				begin4[] = {"\breakingpoint_jsrs\sounds\MC550_s4.wav", 1.060000, 1.8, 1400};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M24Sd_s4.wav", 0.700000, 1.5, 1050};
				begin2[] = {"\breakingpoint_jsrs\sounds\M24Sd_s5.wav", 0.800000, 1.6, 1050};
				begin3[] = {"\breakingpoint_jsrs\sounds\M24Sd_s6.wav", 0.630000, 1.5, 1050};
				begin4[] = {"\breakingpoint_jsrs\sounds\M24Sd_s7.wav", 0.740000, 1.6, 1050};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			class AlternateSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\762MB_s1.wav", 1.400000, 1, 2000};
				begin2[] = {"\breakingpoint_jsrs\sounds\762MB_s2.wav", 1.500000, 1, 2000};
				begin3[] = {"\breakingpoint_jsrs\sounds\762MB_s3.wav", 1.450000, 0.9, 2000};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};
			dispersion = 0.000602;
			soundContinuous = 0;
			reloadTime = 2.250000;
			recoil = "recoil_single_gm6";
			recoilProne = "recoil_single_prone_gm6";
		};
		muzzles[] = {"this", "Butt"};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 70;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_300Sup", "BP_muzzle_snds_B", "BP_762Muzzle"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_MRT", "BP_VX2", "BP_VX3", "BP_Unertl8x", "BP_Unertl32x", "BP_EnfieldOptic2"};
				iconScale = 0.1;
			};
			class PointerSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw", "BP_CPad"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
        };

		linkedAttach[] = {"BP_Unertl8x"};
		chanceAttach[] =
        {
			{"BP_VX2",0.02},
			{"BP_CPad",0.05},
			{"BP_Harris",0.02},
			{"",0.50}
        };

		reloadAction = "GestureReloadLRR";
		reloadSound[] = {"\breakingpoint_jsrs\sounds\Win70_bolt.wav", 0.350000, 0.800000, 50};
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\Win70_reload.wav", 0.301417, 0.80, 50};
	};

	class BP_Win70_WDL: BP_Win70
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\win70\win70_wdl_co.paa", "\breakingpoint_weapons\textures\m40a3\m40a5_wdl_co.paa"};
	};

	class BP_Win70_DES: BP_Win70
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\win70\win70_des_co.paa", "\breakingpoint_weapons\textures\m40a3\m40a5_des_co.paa"};
	};

	class BP_Win70_URB: BP_Win70
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\win70\win70_urb_co.paa", "\breakingpoint_weapons\textures\m40a3\m40a5_urb_co.paa"};
	};

	class BP_WinCoy: BP_MC550
	{
		scope = 2;
		maxZeroing = 800;
		model = "\breakingpoint_weapons\models\Win70\BP_WinCoy.p3d";
		displayName = "Remington Model Seven";
		descriptionShort = ".223 Short action hunting rifle";
		magazines[] = {"BP_5Rnd_223_Mag", "BP_5Rnd_223BTHP_mag"};//removed 22-250 from model7
		picture = "\breakingpoint_weapons\icons\gear_wincoy_rifle_x_ca.paa";
		inertia = 0.150000;
		initSpeed = -1.03;
		recoil = "recoil_mxm";
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
  			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\Mosin_s1.wav", 1.000000, 0.87, 800};//change fixed, was typed wrong so always defaulted to supp. sound
				begin2[] = {"\breakingpoint_jsrs\sounds\Mosin_s2.wav", 1.000000, 1.05, 800};
				begin3[] = {"\breakingpoint_jsrs\sounds\Mosin_s3.wav", 1.000000, 1.12, 800};
				begin4[] = {"\breakingpoint_jsrs\sounds\Mosin_s4.wav", 1.060000, 0.9, 800};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\FAMAS_s1.wav", 1.412538, 1, 550};//changed to non-supp sound
				begin2[] = {"breakingpoint_jsrs\sounds\FAMAS_s2.wav", 1.412538, 1, 550};
				begin3[] = {"breakingpoint_jsrs\sounds\FAMAS_s3.wav", 1.412538, 1, 550};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};
			dispersion = 0.0892;
			soundContinuous = 0;
			reloadTime = 1.750000;
			//recoil = "recoil_single_mk20";
			//recoilProne = "recoil_single_prone_mk20";
		};
		muzzles[] = {"this", "Butt"};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 60;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_R7S", "BP_R7P", "BP_R7Sup"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_MRT", "BP_SOS", "BP_VX2", "BP_VX3", "BP_Unertl8x", "BP_EnfieldOptic2", "BP_Unertl32x"};
				iconScale = 0.1;
			};
			class PointerSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw", "BP_CPad"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
        };

		linkedAttach[] = {"BP_MRT", "BP_R7S"};
		chanceAttach[] =
        {
			{"BP_VX2",0.02},
			{"BP_R7P",0.01},
			{"BP_Harris",0.05},
			{"BP_CPad",0.04},
			{"",0.50}
        };

		reloadAction = "GestureReloadMX";
		reloadSound[] = {"\breakingpoint_jsrs\sounds\HA550_bolt", 0.350000, 1.000000, 50};
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\HA550_Reload", 0.301417, 0.880, 30};
	};

	class BP_WinCoy_WDL: BP_WinCoy
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\win70\win70_wdl_co.paa", "\breakingpoint_weapons\textures\m40a3\m40a5_wdl_co.paa"};
	};

	class BP_WinCoy_DES: BP_WinCoy
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\win70\win70_des_co.paa", "\breakingpoint_weapons\textures\m40a3\m40a5_des_co.paa"};
	};

	class BP_WinCoy_URB: BP_WinCoy
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\win70\win70_urb_co.paa", "\breakingpoint_weapons\textures\m40a3\m40a5_urb_co.paa"};
	};

	class BP_WinCoy2: BP_WinCoy
	{
		scope = 2;
		maxZeroing = 1300;
		model = "\breakingpoint_weapons\models\Win70\BP_WinCoy2.p3d";
		displayName = "Remington Model Seven CDL";
		magazines[] = {"BP_5Rnd_223BTHP_mag", "BP_5Rnd_223_Mag", "BP_5Rnd_250_Mag"};
		picture = "\breakingpoint_weapons\icons\gear_wincdl_rifle_x_ca.paa";
		descriptionShort = "Intermediate caliber precision hunting rifle";
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\Mosin_S1.wav", 1.000000, 0.87, 900};
				begin2[] = {"\breakingpoint_jsrs\sounds\Mosin_S2.wav", 1.000000, 0.85, 900};
				begin3[] = {"\breakingpoint_jsrs\sounds\Mosin_S3.wav", 1.000000, 0.72, 900};
				begin4[] = {"\breakingpoint_jsrs\sounds\Mosin_S4.wav", 1.060000, 0.9, 900};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\M16sd_s1.wav", 1.112538, 1.2, 700};
				begin2[] = {"breakingpoint_jsrs\sounds\M16sd_s2.wav", 1.212538, 1.0, 700};
				begin3[] = {"breakingpoint_jsrs\sounds\M16sd_s1.wav", 1.112538, 0.87, 700};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};
			dispersion = 0.0792;
			soundContinuous = 0;
			reloadTime = 1.650000;
			recoil = "recoil_single_mk20";
			recoilProne = "recoil_single_prone_mk20";
		};

		linkedAttach[] = {"BP_VX2", "BP_R7P"};
		chanceAttach[] =
        {
			{"BP_R7Sup",0.01},
			{"BP_Harris",0.04},
			{"BP_CPad",0.04},
			{"",0.50}
        };
	};

	class BP_WinCoy2_WDL: BP_WinCoy
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\win70\WinCoy3_wdl_co.paa", "\breakingpoint_weapons\textures\cz_455\huntingrifle_wdl_co.paa", "\breakingpoint_weapons\textures\m40a3\m40a5_wdl_co.paa"};
	};

	class BP_WinCoy2_DES: BP_WinCoy
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\win70\WinCoy3_des_co.paa", "\breakingpoint_weapons\textures\cz_455\huntingrifle_des_co.paa", "\breakingpoint_weapons\textures\m40a3\m40a5_des_co.paa"};
	};

	class BP_WinCoy2_URB: BP_WinCoy
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\win70\WinCoy3_urb_co.paa", "\breakingpoint_weapons\textures\cz_455\huntingrifle_urb_co.paa", "\breakingpoint_weapons\textures\m40a3\m40a5_urb_co.paa"};
	};

	class BP_Win70F: BP_HA550
	{
		scope = 2;
		maxZeroing = 1300;
		model = "\breakingpoint_weapons\models\Win70\BP_Win70F.p3d";
		displayName = "Winchester Model 70 Super Grade";
		descriptionShort = "High caliber precision hunting rifle";
		picture = "\breakingpoint_weapons\icons\gear_win70f_rifle_x_ca.paa";
		inertia = 0.300000;
		recoil = "recoil_mxm";
		modes[] = {"Single", "far_optic1", "far_optic2"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound, AlternateSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\300Win_s1.wav", 1.000000, 1.6, 1900};
				begin2[] = {"\breakingpoint_jsrs\sounds\300Win_s2.wav", 1.000000, 1.65, 1900};
				begin3[] = {"\breakingpoint_jsrs\sounds\300Win_s3.wav", 1.000000, 1.68, 1800};
				begin4[] = {"\breakingpoint_jsrs\sounds\300Win_s4.wav", 1.060000, 1.7, 1900};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M24Sd_s4.wav", 0.700000, 1.5, 1300};
				begin2[] = {"\breakingpoint_jsrs\sounds\M24Sd_s5.wav", 0.800000, 1.6, 1300};
				begin3[] = {"\breakingpoint_jsrs\sounds\M24Sd_s6.wav", 0.630000, 1.5, 1200};
				begin4[] = {"\breakingpoint_jsrs\sounds\M24Sd_s7.wav", 0.740000, 1.6, 1300};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			class AlternateSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\762MB_s1.wav", 1.400000, 1, 2000};
				begin2[] = {"\breakingpoint_jsrs\sounds\762MB_s2.wav", 1.500000, 1, 2000};
				begin3[] = {"\breakingpoint_jsrs\sounds\762MB_s3.wav", 1.450000, 0.9, 2000};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};
			dispersion = 0.000202;
			soundContinuous = 0;
			reloadTime = 1.950000;
			//recoil = "recoil_single_gm6";
			//recoilProne = "recoil_single_prone_gm6";
			minRange = 2;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 450;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 450;
		};
		class far_optic1: Single
		{
			showToPlayer = 0;
			minRange = 450;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1500;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 2.5;
			aiRateOfFireDistance = 1700;
		};
		muzzles[] = {"this", "Butt"};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 125;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_300Sup", "BP_762Muzzle"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_MRT", "BP_VX2", "BP_VX3", "BP_Unertl8x", "BP_EnfieldOptic2", "BP_Unertl32x"};
				iconScale = 0.1;
			};
			class PointerSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw", "BP_CPad"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
        };

		linkedAttach[] = {"BP_VX3", "BP_CPad", "BP_Harris"};
		chanceAttach[] =
        {
			{"BP_300Sup",0.01},
			{"BP_762Muzzle",0.01},
			{"",0.50}
        };

		reloadAction = "GestureReloadLRR";
		reloadSound[] = {"\breakingpoint_jsrs\sounds\Win70_bolt.wav", 0.350000, 0.900000, 50};
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\Win70_reload.wav", 0.301417, 0.90, 50};
	};

	class BP_Win70F_WDL: BP_Win70F
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\win70\win70f_wdl_co.paa", "\breakingpoint_weapons\textures\m40a3\m40a5_wdl_co.paa"};
	};

	class BP_Win70F_DES: BP_Win70F
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\win70\win70f_des_co.paa", "\breakingpoint_weapons\textures\m40a3\m40a5_des_co.paa"};
	};

	class BP_Win70F_URB: BP_Win70F
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\win70\win70f_urb_co.paa", "\breakingpoint_weapons\textures\m40a3\m40a5_urb_co.paa"};
	};

	class BP_Win70F_AI: BP_Win70F
	{
		scope = 2;
		modes[] = {"Single", "far_optic1", "far_optic2"};
		magazines[] = {"BP_500Rnd_762x51_AI"};
		inertia = 0.0000;
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefX = 0.100000;
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound, AlternateSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\300Win_s1.wav", 1.000000, 1.6, 1900};
				begin2[] = {"\breakingpoint_jsrs\sounds\300Win_s2.wav", 1.000000, 1.65, 1900};
				begin3[] = {"\breakingpoint_jsrs\sounds\300Win_s3.wav", 1.000000, 1.68, 1800};
				begin4[] = {"\breakingpoint_jsrs\sounds\300Win_s4.wav", 1.060000, 1.7, 1900};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M24Sd_s4.wav", 0.700000, 1.5, 900};
				begin2[] = {"\breakingpoint_jsrs\sounds\M24Sd_s5.wav", 0.800000, 1.6, 900};
				begin3[] = {"\breakingpoint_jsrs\sounds\M24Sd_s6.wav", 0.630000, 1.5, 900};
				begin4[] = {"\breakingpoint_jsrs\sounds\M24Sd_s7.wav", 0.740000, 1.6, 900};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			class AlternateSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\762MB_s1.wav", 1.400000, 1, 2500};
				begin2[] = {"\breakingpoint_jsrs\sounds\762MB_s2.wav", 1.500000, 1, 2500};
				begin3[] = {"\breakingpoint_jsrs\sounds\762MB_s3.wav", 1.450000, 0.9, 2550};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};
			dispersion = 0.000202;
			soundContinuous = 0;
			reloadTime = 1.950000;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			minRange = 2;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 450;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 450;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class far_optic1: Single
		{
			showToPlayer = 0;
			minRange = 450;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1500;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 2.5;
			aiRateOfFireDistance = 1700;
		};
	};

	class BP_Kar98: BP_Win70
	{
		scope = 2;
		maxZeroing = 1600;
		model = "\breakingpoint_weapons\models\Kar98\BP_Kar98.p3d";
		displayName = "Karabiner 98";
		magazines[] = {"BP_5Rnd_Mauser_Mag"};
		descriptionShort = "German Bolt action sniper rifle";
		picture = "\breakingpoint_weapons\icons\gear_kar98_rifle_x_ca.paa";
		inertia = 0.390000;
		recoil = "recoil_dmr_01";
		initSpeed = -0.97;
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound, AlternateSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\MC550_s1.wav", 1.000000, 1.0, 1600};
				begin2[] = {"\breakingpoint_jsrs\sounds\MC550_s2.wav", 1.000000, 1.05, 1600};
				begin3[] = {"\breakingpoint_jsrs\sounds\MC550_s3.wav", 1.000000, 1.08, 1600};
				begin4[] = {"\breakingpoint_jsrs\sounds\MC550_s4.wav", 1.060000, 1.2, 1500};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\762MB_s1.wav", 1.400000, 1, 1150};
				begin2[] = {"\breakingpoint_jsrs\sounds\762MB_s2.wav", 1.500000, 1, 1150};
				begin3[] = {"\breakingpoint_jsrs\sounds\762MB_s3.wav", 1.450000, 0.9, 1100};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};
			class AlternateSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\762MB_s1.wav", 1.400000, 1, 2500};
				begin2[] = {"\breakingpoint_jsrs\sounds\762MB_s2.wav", 1.500000, 1, 2500};
				begin3[] = {"\breakingpoint_jsrs\sounds\762MB_s3.wav", 1.450000, 0.9, 2550};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};
			dispersion = 0.000762;
			soundContinuous = 0;
			reloadTime = 2.250000;
			//recoil = "recoil_single_gm6";
			//recoilProne = "recoil_single_prone_gm6";
		};
		muzzles[] = {"this", "Butt"};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 120;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_ZF42", "BP_Unertl8x", "BP_Unertl32x", "BP_EnfieldOptic2"};
				iconScale = 0.1;
			};
			class PointerSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw", "BP_CPad"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
        };

		linkedAttach[] = {"BP_ZF42"};
		chanceAttach[] =
        {
            {"BP_CPad",0.05},
			{"BP_Harris",0.02},
			{"",0.50}
        };

		reloadAction = "GestureReloadLRR";
		reloadSound[] = {"\breakingpoint_jsrs\sounds\Win70_bolt.wav", 0.350000, 1.000000, 50};
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\Win70_reload.wav", 0.301417, 1.00, 50};
	};

	class BP_Kar98_WDL: BP_Kar98
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\kar98\k98_wdl_co.paa", "\breakingpoint_weapons\textures\win70\win70_wdl_co.paa", "\breakingpoint_weapons\textures\m40a3\m40a5_wdl_co.paa"};
	};

	class BP_Kar98_DES: BP_Kar98
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\kar98\k98_des_co.paa", "\breakingpoint_weapons\textures\win70\win70_des_co.paa", "\breakingpoint_weapons\textures\m40a3\m40a5_des_co.paa"};
	};

	class BP_Kar98_URB: BP_Kar98
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\kar98\k98_urb_co.paa", "\breakingpoint_weapons\textures\win70\win70_urb_co.paa", "\breakingpoint_weapons\textures\m40a3\m40a5_urb_co.paa"};
	};

	class BP_Kar98k: BP_Win70
	{
		scope = 2;
		maxZeroing = 1600;
		model = "\breakingpoint_weapons\models\Kar98\BP_Kar98k.p3d";
		displayName = "Karabiner 98k";
		magazines[] = {"BP_5Rnd_Mauser_Mag"};
		descriptionShort = "German Bolt action sniper rifle";
		picture = "\breakingpoint_weapons\icons\gear_kar98_rifle_x_ca.paa";
		inertia = 0.390000;
		recoil = "recoil_dmr_01";
		initSpeed = -0.97;
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound, AlternateSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\MC550_s1.wav", 1.000000, 1.3, 1600};
				begin2[] = {"\breakingpoint_jsrs\sounds\MC550_s2.wav", 1.000000, 1.25, 1600};
				begin3[] = {"\breakingpoint_jsrs\sounds\MC550_s3.wav", 1.000000, 1.18, 1600};
				begin4[] = {"\breakingpoint_jsrs\sounds\MC550_s4.wav", 1.060000, 1.27, 1500};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\762MB_s1.wav", 1.400000, 1, 1150};
				begin2[] = {"\breakingpoint_jsrs\sounds\762MB_s2.wav", 1.500000, 1, 1150};
				begin3[] = {"\breakingpoint_jsrs\sounds\762MB_s3.wav", 1.450000, 0.9, 1100};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};
			class AlternateSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\762MB_s1.wav", 1.400000, 1, 2500};
				begin2[] = {"\breakingpoint_jsrs\sounds\762MB_s2.wav", 1.500000, 1, 2500};
				begin3[] = {"\breakingpoint_jsrs\sounds\762MB_s3.wav", 1.450000, 0.9, 2550};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};
			dispersion = 0.000762;
			soundContinuous = 0;
			reloadTime = 2.250000;
			//recoil = "recoil_single_gm6";
			//recoilProne = "recoil_single_prone_gm6";
		};
		muzzles[] = {"this", "Bayonet"};
		class Bayonet: UGL_F
		{
			magazines[] = {"BP_Bayonet_Stab"};
			displayName = "Bayonet";
			maxZeroing = 5;
			discreteDistanceInitIndex = 0;
			discreteDistance[] = {5};
			class GunParticles: GunParticles
			{
				class FirstEffect
				{
					effectName = "";
					positionName = "Usti hlavne";
					directionName = "Konec hlavne";
				};
			};
			modes[] = {"Single"};
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class BaseSoundModeType
				{
					closure1[] = {};
					soundClosure[] = {};
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.95, 10};
					begin2[] = {};
					soundBegin[] = {"begin1", 1};
				};
			};
			reloadMagazineSound[] = {};
			drySound[] = {};
			magazineReloadTime = 0;
			autoReload = 1;
			reloadTime = 1.400000;
			optics = 0;
			modelOptics = "-";
			cameraDir = "";
			memoryPointCamera = "eye";
			opticsZoomMin = 0.375000;
			opticsZoomMax = 1.100000;
			opticsZoomInit = 0.750000;
			weaponInfoType = "RscWeaponZeroing";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 130;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_ZF42", "BP_Unertl8x", "BP_Unertl32x", "BP_EnfieldOptic2"};
				iconScale = 0.1;
			};
			class PointerSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw", "BP_CPad"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
        };

		linkedAttach[] = {"BP_ZF42"};
		chanceAttach[] =
        {
            {"BP_CPad",0.07},
			{"BP_Harris",0.02},
			{"",0.50}
        };

		reloadAction = "GestureReloadLRR";
		reloadSound[] = {"\breakingpoint_jsrs\sounds\Win70_bolt.wav", 0.350000, 1.000000, 50};
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\Win70_reload.wav", 0.301417, 1.00, 50};
	};

	class BP_Kar98k_WDL: BP_Kar98k
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\kar98\k98_wdl_co.paa", "\breakingpoint_weapons\textures\win70\win70_wdl_co.paa", "\breakingpoint_weapons\textures\m40a3\m40a5_wdl_co.paa"};
	};

	class BP_Kar98k_DES: BP_Kar98k
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\kar98\k98_des_co.paa", "\breakingpoint_weapons\textures\win70\win70_des_co.paa", "\breakingpoint_weapons\textures\m40a3\m40a5_des_co.paa"};
	};

	class BP_Kar98k_URB: BP_Kar98k
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\kar98\k98_urb_co.paa", "\breakingpoint_weapons\textures\win70\win70_urb_co.paa", "\breakingpoint_weapons\textures\m40a3\m40a5_urb_co.paa"};
	};

	class BP_Kar98z: BP_Kar98
	{
		scope = 2;
	};

	class BP_K98_AI: BP_Kar98
	{
		scope = 2;
		modes[] = {"Single", "far_optic1", "far_optic2"};
		magazines[] = {"BP_500Rnd_762x51_AI"};
		inertia = 0.0000;
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefX = 0.100000;
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound, AlternateSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\300Win_s1.wav", 1.000000, 1.6, 1900};
				begin2[] = {"\breakingpoint_jsrs\sounds\300Win_s2.wav", 1.000000, 1.65, 1900};
				begin3[] = {"\breakingpoint_jsrs\sounds\300Win_s3.wav", 1.000000, 1.68, 1800};
				begin4[] = {"\breakingpoint_jsrs\sounds\300Win_s4.wav", 1.060000, 1.7, 1900};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M24Sd_s4.wav", 0.700000, 1.5, 900};
				begin2[] = {"\breakingpoint_jsrs\sounds\M24Sd_s5.wav", 0.800000, 1.6, 900};
				begin3[] = {"\breakingpoint_jsrs\sounds\M24Sd_s6.wav", 0.630000, 1.5, 900};
				begin4[] = {"\breakingpoint_jsrs\sounds\M24Sd_s7.wav", 0.740000, 1.6, 900};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};
 			};
			class AlternateSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\762MB_s1.wav", 1.400000, 1, 2500};
				begin2[] = {"\breakingpoint_jsrs\sounds\762MB_s2.wav", 1.500000, 1, 2500};
				begin3[] = {"\breakingpoint_jsrs\sounds\762MB_s3.wav", 1.450000, 0.9, 2550};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};
			dispersion = 0.000202;
			soundContinuous = 0;
			reloadTime = 1.950000;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			minRange = 2;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 450;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 450;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class far_optic1: Single
		{
			showToPlayer = 0;
			minRange = 450;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.0;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1500;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1700;
		};
	};

	class BP_M110: Rifle_Base_F_BP
	{
		scope = 2;
		maxZeroing = 1600;
		displayName = "M110 SASS";
		descriptionshort = "Semi-Automatic 7.62mm Sniper Rifle System";
		descriptionUse = "M110 Desert";
		model = "\breakingpoint_weapons\models\M110\BP_M110.p3d";
		picture = "\breakingpoint_weapons\icons\gear_M110_rifle_x_ca.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		magazines[] = {"BP_20Rnd_762x51_BPMag", "BP_20Rnd_762x51_M80A1", "BP_20Rnd_762x51_Mk316Mod0", "BP_10Rnd_762mk316_Mag", "BP_10Rnd_762x51_Mag", "BP_10Rnd_762m80a1_Mag", "BP_5Rnd_762x51_Mag", "BP_5Rnd_762mk316_Mag", "BP_5Rnd_762m80a1_Mag", "BP_10Rnd_762Rubber_Mag"};
		inertia = 0.3248;
		recoil = "recoil_ebr";
		initSpeed = -1.04;
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Rifles\MX\data\Anim\MX_dmr.rtm"};
		modes[] = {"Single", "far_optic1", "far_optic2"};
		bullet1[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Metal_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet2[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Metal_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet3[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Metal_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet4[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Metal_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet5[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Dirt_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet6[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Dirt_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet7[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Dirt_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet8[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Dirt_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet9[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Grass_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet10[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Grass_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet11[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Grass_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet12[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Grass_4.ogg",
			2.0099001,
			1,
			10
		};
		soundBullet[]=
		{
			"bullet1",
			0.079999998,
			"bullet2",
			0.083999999,
			"bullet3",
			0.083999999,
			"bullet4",
			0.083999999,
			"bullet5",
			0.093000002,
			"bullet6",
			0.093000002,
			"bullet7",
			0.074000001,
			"bullet8",
			0.074000001,
			"bullet9",
			0.083999999,
			"bullet10",
			0.085000001,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};

		class Single : Mode_SemiAuto
		{
			sounds[]=
			{
				"standardsound",
				"silencedsound"
			};
			class basesoundmodetype
			{
				soundclosure[]={};
			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_m110_shot_soundset",
					"jsrs_m110_shot2_soundset",
					"jsrs_m110_shell_soundset",
					"jsrs_9x3mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
 			{
				soundsetshot[]=
				{
					"jsrs_m110_shot_silenced_soundset",
					"jsrs_m110_shell_soundset",
					//"jsrs_7x62mm_reflector_1"
					"jsrs_7x62mm_SD_reflector_1"
				};
 			};
			dispersion = 0.000491;
			soundContinuous = 0;
			reloadTime = 0.150000;
			//recoil = "recoil_single_ebr";
			//recoilProne = "recoil_single_prone_ebr";
			minRange = 2;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 450;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.00001;
			aiRateOfFireDistance = 450;
		};
		class far_optic1: Single
		{
			showToPlayer = 0;
			minRange = 450;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1400;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1700;
		};
		class GunParticles: GunParticles
		{
			class FirstEffect
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 140;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_300Sup", "BP_muzzle_snds_B"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_MRCO", "optic_Arco", "optic_hamr", "BP_optic_ACOG",  "BP_compm4s", "BP_OldComp"};
				iconScale = 0.1;
			};
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw", "BP_AFG"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris", "BP_Harris2"};
				iconScale = 0.1;
			};
        };

		chanceAttach[] =
        {
            {"BP_M3A", 0.60},
			{"BP_muzzle_snds_B", 0.01},
            {"BP_L14X", 0.05},
			{"BP_Harris", 0.10},
			{"BP_AFG", 0.10}
        };

		reloadAction = "GestureReloadEBR";
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\Reload\EBR_Reload.ogg", 1, 1, 30};
	};

	class BP_M110_WDL: BP_M110
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\m110\m110_wdl_co.paa", "\breakingpoint_weapons\textures\m110\prs_wdl_co.paa"};
	};

	class BP_M110_DES: BP_M110
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\m110\m110_des_co.paa", "\breakingpoint_weapons\textures\m110\prs_des_co.paa"};
	};

	class BP_M110_URB: BP_M110
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\m110\m110_urb_co.paa", "\breakingpoint_weapons\textures\m110\prs_urb_co.paa"};
	};

	class BP_SR25: BP_M110
	{
		scope = 2;
		maxZeroing = 1400;
		displayName = "SR-25";
		descriptionshort = "Semi-Automatic 7.62mm Sniper Rifle";
		descriptionUse = "SR-25";
		model = "\breakingpoint_weapons\models\M110\BP_SR25.p3d";
		picture = "\breakingpoint_weapons\icons\gear_sr25_rifle_x_ca.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		magazines[] = {"BP_20Rnd_762x51_BPMag", "BP_20Rnd_762x51_M80A1", "BP_20Rnd_762x51_Mk316Mod0", "BP_10Rnd_762mk316_Mag", "BP_10Rnd_762x51_Mag", "BP_10Rnd_762m80a1_Mag", "BP_5Rnd_762x51_Mag", "BP_5Rnd_762mk316_Mag", "BP_5Rnd_762m80a1_Mag", "BP_10Rnd_762Rubber_Mag"};
		inertia = 0.375000;
		modes[] = {"Single", "far_optic1", "far_optic2"};

		class Single : Mode_SemiAuto
		{
			sounds[]=
			{
				"standardsound",
				"silencedsound"
			};
			class basesoundmodetype
			{
				soundclosure[]={};
			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_m110_shot_soundset",
					"jsrs_m110_shot2_soundset",
					"jsrs_m110_shell_soundset",
					"jsrs_9x3mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
 			{
				soundsetshot[]=
				{
					"jsrs_m110_shot_silenced_soundset",
					"jsrs_m110_shell_soundset",
					//"jsrs_7x62mm_reflector_1"
					"jsrs_7x62mm_SD_reflector_1"
				};
 			};
			dispersion = 0.000503;
			soundContinuous = 0;
			reloadTime = 0.150000;
			//recoil = "recoil_single_ebr";
			//recoilProne = "recoil_single_prone_ebr";
			minRange = 2;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 450;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.00001;
			aiRateOfFireDistance = 450;
		};
		class far_optic1: Single
		{
			showToPlayer = 0;
			minRange = 450;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1400;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1700;
		};
		class GunParticles: GunParticles
		{
			class FirstEffect
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 150;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_300Sup", "BP_muzzle_snds_B"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_MRCO", "optic_Arco", "optic_hamr", "BP_optic_ACOG",  "BP_compm4s", "BP_OldComp"};
				iconScale = 0.1;
			};
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw", "BP_AFG"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris", "BP_Harris2"};
				iconScale = 0.1;
			};
        };

		chanceAttach[] =
        {
            {"BP_M3A2", 0.60},
			{"BP_muzzle_snds_B", 0.01},
            {"BP_L14X", 0.05},
			{"BP_Harris", 0.10},
			{"BP_AFG", 0.10}
        };

		reloadAction = "GestureReloadEBR";
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\Reload\EBR_Reload.ogg", 1, 1, 30};
	};

	class BP_SR25_WDL: BP_SR25
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\m110\sr25_wdl_co.paa", "\breakingpoint_weapons\textures\m16\m16a2_wdl_co.paa"};
	};

	class BP_SR25_DES: BP_SR25
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\m110\sr25_des_co.paa", "\breakingpoint_weapons\textures\m16\m16a2_des_co.paa"};
	};

	class BP_SR25_URB: BP_SR25
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\m110\sr25_urb_co.paa", "\breakingpoint_weapons\textures\m16\m16a2_urb_co.paa"};
	};

	class BP_SR25_AI: BP_SR25
	{
		scope = 2;
		magazines[] = {"BP_500Rnd_762x51_AI"};
		inertia = 0.0000;
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefX = 0.100000;
		modes[] = {"Single", "far_optic1", "far_optic2"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";

 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\DMR_s1.wav", 1.300000, 0.83, 1900};
				begin2[] = {"\breakingpoint_jsrs\sounds\DMR_s2.wav", 1.350000, 0.80, 1900};
				begin3[] = {"\breakingpoint_jsrs\sounds\DMR_s3.wav", 1.370000, 0.88, 1900};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 1, 700};
				begin2[] = {"\breakingpoint_jsrs\sounds\HK417SD_s2.wav", 1.000000, 1, 700};
				begin3[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 0.9, 700};
				begin4[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 0.8, 700};
				begin5[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 1.1, 700};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};
			dispersion = 0.000802;
			soundContinuous = 0;
			reloadTime = 0.150000;
			//recoil = "recoil_single_primary_prone_1outof10";
			//recoilProne = "recoil_single_primary_prone_1outof10";
			minRange = 2;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 450;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.00001;
			aiRateOfFireDistance = 450;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class far_optic1: Single
		{
			showToPlayer = 0;
			minRange = 450;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1400;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1700;
		};
	};

	class BP_FNFAL: Rifle_Base_F_BP
	{
		scope = 2;
		maxZeroing = 600;
		model = "\breakingpoint_weapons\models\FNFALM\BP_fnfal.p3d";
		picture = "\breakingpoint_weapons\icons\gear_FNFAL_rifle_x_ca.paa";
		displayName = "FNFAL";
		descriptionshort = "Medium range 7.62mm NATO battle rifle";
		magazines[] = {"BP_30Rnd_762x51_BPMag", "BP_30Rnd_762x51_M80A1", "BP_30Rnd_762x51_Mk316Mod0", "BP_20Rnd_762x51_M80A1", "BP_20Rnd_762x51_Mk316Mod0", "BP_20Rnd_762x51_BPMag", "BP_10Rnd_762mk316_Mag", "BP_10Rnd_762x51_Mag", "BP_10Rnd_762m80a1_Mag", "BP_5Rnd_762x51_Mag", "BP_5Rnd_762mk316_Mag", "BP_5Rnd_762m80a1_Mag", "BP_10Rnd_762Rubber_Mag"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M60E4.rtm"};
		recoil = "recoil_ebr";
		inertia = 0.328000;
		initSpeed = -0.98;
		muzzles[] = {"this", "Butt"};
		modes[] = {"Single", "FullAuto"};
		bullet1[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Metal_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet2[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Metal_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet3[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Metal_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet4[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Metal_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet5[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Dirt_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet6[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Dirt_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet7[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Dirt_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet8[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Dirt_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet9[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Grass_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet10[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Grass_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet11[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Grass_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet12[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Grass_4.ogg",
			2.0099001,
			1,
			10
		};
		soundBullet[]=
		{
			"bullet1",
			0.079999998,
			"bullet2",
			0.083999999,
			"bullet3",
			0.083999999,
			"bullet4",
			0.083999999,
			"bullet5",
			0.093000002,
			"bullet6",
			0.093000002,
			"bullet7",
			0.074000001,
			"bullet8",
			0.074000001,
			"bullet9",
			0.083999999,
			"bullet10",
			0.085000001,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		class Single : Mode_SemiAuto
		{
				sounds[]=
			{
				"standardsound",
				"silencedsound"
			};
			class basesoundmodetype
			{
				soundclosure[]={};
			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_FNFAL_shot_soundset",
					"jsrs_fnfal_shot2_soundset",
					"jsrs_FNFAL_shell_soundset",
					"jsrs_9x3mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
 			{
				soundsetshot[]=
				{
					"jsrs_FNFAL_shot_silenced_soundset",
					"jsrs_FNFAL_shell_soundset",
					//"jsrs_7x62mm_reflector_1"
					"jsrs_7x62mm_SD_reflector_1"
				};
 			};
			dispersion = 0.001137;
			soundContinuous = 0;
			reloadTime = 0.070000;
			//recoil = "recoil_single_gm6";
			//recoilProne = "recoil_single_prone_gm6";
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[]=
			{
				"standardsound",
				"silencedsound"
			};
			class basesoundmodetype
			{
				soundclosure[]={};
			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_FNFAL_shot_soundset",
					"jsrs_fnfal_shot2_soundset",
					"jsrs_FNFAL_shell_soundset",
					"jsrs_9x3mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
 			{
				soundsetshot[]=
				{
					"jsrs_FNFAL_shot_silenced_soundset",
					"jsrs_FNFAL_shell_soundset",
					//"jsrs_7x62mm_reflector_1"
					"jsrs_7x62mm_SD_reflector_1"
				};
 			};
			dispersion = 0.001537;
			soundContinuous = 0;
			reloadTime = 0.070000;
			//recoil = "recoil_single_gm6";
			//recoilProne = "recoil_single_prone_gm6";
		};
		class GunParticles: GunParticles
		{
			class FirstEffect
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 160;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_300Sup", "BP_muzzle_snds_B"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
        };

		chanceAttach[] =
        {
			{"BP_muzzle_snds_B", 0.01},
			{"BP_Harris", 0.10}
        };

		reloadAction = "GestureReloadEBR";
		reloadSound[] = {};
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\Reload\Mk14_Reload.ogg", 1, 1, 30};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Firemode_ugl",0.41622776,1.2,7};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
	};

	class BP_FNFAL_WDL: BP_FNFAL
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\fnfalm\fnfal_wdl_co.paa"};
	};

	class BP_FNFAL_DES: BP_FNFAL
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\fnfalm\fnfal_des_co.paa"};
	};

	class BP_FNFAL_URB: BP_FNFAL
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\fnfalm\fnfal_urb_co.paa"};
	};

	class BP_FNFALK: BP_FNFAL
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\FNFALM\BP_fnfalK.p3d";
		picture = "\breakingpoint_weapons\icons\gear_FNFALk_rifle_x_ca.paa";
		displayName = "FNFAL w/Bayonet";
		descriptionshort = "Medium range 7.62mm NATO battle rifle";
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\Bayonette_Idle1.rtm"};
		inertia = 0.346000;
		muzzles[] = {"this", "Bayonet"};
		class Bayonet: UGL_F
		{
			magazines[] = {"BP_Bayonet_Stab"};
			displayName = "Bayonet";
			maxZeroing = 5;
			discreteDistanceInitIndex = 0;
			discreteDistance[] = {5};
			class GunParticles: GunParticles
			{
				class FirstEffect
				{
					effectName = "";
					positionName = "Usti hlavne";
					directionName = "Konec hlavne";
				};
			};
			modes[] = {"Single"};
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class BaseSoundModeType
				{
					closure1[] = {};
					soundClosure[] = {};
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.95, 10};
					begin2[] = {};
					soundBegin[] = {"begin1", 1};
				};
			};
			reloadMagazineSound[] = {};
			drySound[] = {};
			magazineReloadTime = 0;
			autoReload = 1;
			reloadTime = 1.400000;
			optics = 0;
			modelOptics = "-";
			cameraDir = "";
			memoryPointCamera = "eye";
			opticsZoomMin = 0.375000;
			opticsZoomMax = 1.100000;
			opticsZoomInit = 0.750000;
			weaponInfoType = "RscWeaponZeroing";
		};
	};

	class BP_FNFALK_WDL: BP_FNFALK
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\fnfalm\fnfal_wdl_co.paa", "\breakingpoint\textures\items\knife_wdl_co.paa"};
	};

	class BP_FNFALK_DES: BP_FNFALK
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\fnfalm\fnfal_des_co.paa", "\breakingpoint\textures\items\knife_des_co.paa"};
	};

	class BP_FNFALK_URB: BP_FNFALK
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\fnfalm\fnfal_urb_co.paa", "\breakingpoint\textures\items\knife_urb_co.paa"};
	};

	class BP_FALM: Rifle_Base_F_BP
	{
		scope = 2;
		maxZeroing = 1400;
		model = "\breakingpoint_weapons\models\FNFALM\BP_FALM.p3d";
		picture = "\breakingpoint_weapons\icons\gear_FALM_rifle_x_ca.paa";
		displayName = "FNFAL DMR-HB";
		descriptionshort = "A medium/long range Heavy Barrel Designated Marksman version of the FN FAL";
		magazines[] = {"BP_30Rnd_762x51_M80A1", "BP_30Rnd_762x51_Mk316Mod0", "BP_30Rnd_762x51_BPMag", "BP_20Rnd_762x51_M80A1", "BP_20Rnd_762x51_Mk316Mod0", "BP_20Rnd_762x51_BPMag", "BP_10Rnd_762mk316_Mag", "BP_10Rnd_762x51_Mag", "BP_10Rnd_762m80a1_Mag", "BP_5Rnd_762x51_Mag", "BP_5Rnd_762mk316_Mag", "BP_5Rnd_762m80a1_Mag", "BP_10Rnd_762Rubber_Mag"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\AFGDMR.rtm"};
		initSpeed = -1.01;
		recoil = "recoil_dmr_01";
		inertia = 0.40000;
		modes[] = {"Single", "far_optic1"};
		bullet1[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Metal_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet2[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Metal_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet3[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Metal_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet4[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Metal_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet5[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Dirt_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet6[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Dirt_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet7[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Dirt_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet8[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Dirt_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet9[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Grass_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet10[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Grass_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet11[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Grass_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet12[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Grass_4.ogg",
			2.0099001,
			1,
			10
		};
		soundBullet[]=
		{
			"bullet1",
			0.079999998,
			"bullet2",
			0.083999999,
			"bullet3",
			0.083999999,
			"bullet4",
			0.083999999,
			"bullet5",
			0.093000002,
			"bullet6",
			0.093000002,
			"bullet7",
			0.074000001,
			"bullet8",
			0.074000001,
			"bullet9",
			0.083999999,
			"bullet10",
			0.085000001,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		class Single : Mode_SemiAuto
		{
			sounds[]=
			{
				"standardsound",
				"silencedsound"
			};
			class basesoundmodetype
			{
				soundclosure[]={};
			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_FNFAL_shot_soundset",
					"jsrs_fnfal_shot2_soundset",
					"jsrs_FNFAL_shell_soundset",
					"jsrs_9x3mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
 			{
				soundsetshot[]=
				{
					"jsrs_FNFAL_shot_silenced_soundset",
					"jsrs_FNFAL_shell_soundset",
					//"jsrs_7x62mm_reflector_1"
					"jsrs_7x62mm_SD_reflector_1"
				};
 			};
			dispersion = 0.000437;
			soundContinuous = 0;
			reloadTime = 0.070000;
			//recoil = "recoil_single_mx";
			//recoilProne = "recoil_single_prone_mx";
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 500;
			midRangeProbab = 1.000000;
			maxRange = 950;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 950;
		};
		class far_optic1: Single
		{
			showToPlayer = 0;
			minRange = 950;
			minRangeProbab = 1.000000;
			midRange = 1200;
			midRangeProbab = 1.000000;
			maxRange = 1600;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.0;
			aiRateOfFireDistance = 1600;
		};
		class GunParticles: GunParticles
		{
			class FirstEffect
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 150;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_300Sup", "BP_muzzle_snds_B"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_MRCO", "optic_Arco", "optic_hamr", "BP_optic_ACOG",  "BP_compm4s", "BP_OldComp"};
				iconScale = 0.1;
			};
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw", "BP_AFG"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
        };

		linkedAttach[] = {"BP_L14X", "BP_Harris"};
		chanceAttach[] =
        {
			{"BP_AFG",0.10},
			{"BP_muzzle_snds_B",0.01},
			{"",0.50}
        };

		reloadAction = "GestureReloadEBR";
		reloadSound[] = {};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_ebr", 0.360957, 1, 30};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
	};

	class BP_FALM_WDL: BP_FALM
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4", "camo5"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\fnfalm\fnfal_wdl_co.paa", "\breakingpoint_weapons\textures\m110\prs_wdl_co.paa", "\breakingpoint_weapons\textures\DMR\us_dmr_wdl_co.paa", "\breakingpoint_weapons\textures\awsm\lrr_wdl_co.paa", "\breakingpoint_weapons\textures\fnfalm\anpvs4_wdl_co.paa"};
	};

	class BP_FALM_DES: BP_FALM
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4", "camo5"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\fnfalm\fnfal_des_co.paa", "\breakingpoint_weapons\textures\m110\prs_des_co.paa", "\breakingpoint_weapons\textures\DMR\us_dmr_des_co.paa", "\breakingpoint_weapons\textures\awsm\lrr_des_co.paa", "\breakingpoint_weapons\textures\fnfalm\anpvs4_des_co.paa"};
	};

	class BP_FALM_URB: BP_FALM
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4", "camo5"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\fnfalm\fnfal_urb_co.paa", "\breakingpoint_weapons\textures\m110\prs_urb_co.paa", "\breakingpoint_weapons\textures\DMR\us_dmr_urb_co.paa", "\breakingpoint_weapons\textures\awsm\lrr_urb_co.paa", "\breakingpoint_weapons\textures\fnfalm\anpvs4_urb_co.paa"};
	};

	class BP_FALM_AI: BP_FALM
	{
		scope = 2;
		magazines[] = {"BP_500Rnd_762x51_AI"};
		inertia = 0.0000;
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefX = 0.100000;
		modes[] = {"Single", "FullAuto", "far_optic1"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\HK417_s1.wav", 0.812538, 0.8, 1200};
				begin2[] = {"breakingpoint_jsrs\sounds\HK417_s2.wav", 0.812538, 0.97, 1200};
				begin3[] = {"breakingpoint_jsrs\sounds\HK417_s3.wav", 0.812538, 1.2, 1200};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 1, 700};
				begin2[] = {"\breakingpoint_jsrs\sounds\HK417SD_s2.wav", 1.000000, 1, 700};
				begin3[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 0.9, 700};
				begin4[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 0.8, 700};
				begin5[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 1.1, 700};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};
			dispersion = 0.000817;
			soundContinuous = 0;
			reloadTime = 0.070000;
			//recoil = "recoil_single_primary_prone_1outof10";
			//recoilProne = "recoil_single_primary_prone_1outof10";
			minRange = 500;
			minRangeProbab = 1.000000;
			midRange = 750;
			midRangeProbab = 1.000000;
			maxRange = 950;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 950;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\HK417_s1.wav", 0.812538, 0.8, 1200};
				begin2[] = {"breakingpoint_jsrs\sounds\HK417_s2.wav", 0.812538, 0.97, 1200};
				begin3[] = {"breakingpoint_jsrs\sounds\HK417_s3.wav", 0.812538, 1.2, 1200};
				begin4[] = {"breakingpoint_jsrs\sounds\HK417_s1.wav", 0.812538, 1.0, 1200};
				soundBegin[] = {"begin1", 0.2500000, "begin2", 0.2500000, "begin3", 0.2500000, "begin4", 0.2500000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 1, 700};
				begin2[] = {"\breakingpoint_jsrs\sounds\HK417SD_s2.wav", 1.000000, 1, 700};
				begin3[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 0.9, 700};
				begin4[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 0.8, 700};
				begin5[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 1.1, 700};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};
			dispersion = 0.001037;
			soundContinuous = 0;
			reloadTime = 0.070000;
			//recoil = "recoil_single_gm6";
			//recoilProne = "recoil_single_prone_gm6";
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 500;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.000001;
			aiRateOfFireDistance = 500;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class far_optic1: Single
		{
			showToPlayer = 0;
			minRange = 950;
			minRangeProbab = 1.000000;
			midRange = 1200;
			midRangeProbab = 1.000000;
			maxRange = 1600;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.0;
			aiRateOfFireDistance = 1600;
		};
	};

	class BP_G36DMR: Rifle_Base_F_BP
	{
		scope = 2;
		maxZeroing = 1400;
		model = "\breakingpoint_weapons\models\G36\BP_G36DMR.p3d";
		picture = "\breakingpoint_weapons\icons\gear_G36DMR_rifle_x_ca.paa";
		displayName = "G36 DMR";
		descriptionshort = "A medium/long range Heavy Barrel Designated Marksman version of the G36 Rifle";
		magazines[] = {"BP_20Rnd_762x51_Mk316Mod0", "BP_20Rnd_762x51_M80A1", "BP_20Rnd_762x51_BPMag", "BP_10Rnd_762mk316_Mag", "BP_10Rnd_762x51_Mag", "BP_10Rnd_762m80a1_Mag", "BP_5Rnd_762x51_Mag", "BP_5Rnd_762mk316_Mag", "BP_5Rnd_762m80a1_Mag", "BP_10Rnd_762Rubber_Mag"};
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Rifles\MX\data\Anim\MX_dmr.rtm"};
		recoil = "recoil_ebr";
		initSpeed = -0.98;
		inertia = 0.324500;
		modes[] = {"Single", "FullAuto", "far_optic1"};
		class Single : Mode_SemiAuto
		{
			sounds[]=
			{
				"standardsound",
				"silencedsound"
			};
			class basesoundmodetype
			{
				soundclosure[]={};
			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ScarH_shot_soundset",
					"jsrs_ScarH_shot2_soundset",
					"jsrs_ScarH_shell_soundset",
					"jsrs_9x3mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
 			{
				soundsetshot[]=
				{
					//"jsrs_rifle_shake_soundset",
					"jsrs_ScarH_shot_silenced_soundset",
					"jsrs_ScarH_shell_soundset",
					"jsrs_7x62mm_SD_reflector_1"
				};
 			};
			dispersion = 0.000726;
			soundContinuous = 0;
			reloadTime = 0.070000;
			//recoil = "recoil_single_mx";
			//recoilProne = "recoil_single_prone_mx";
			minRange = 500;
			minRangeProbab = 1.000000;
			midRange = 750;
			midRangeProbab = 1.000000;
			maxRange = 950;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 950;
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"jsrs_ScarH_shot_soundset",
					"jsrs_ScarH_shot2_soundset",
					"jsrs_ScarH_shell_soundset",
					"jsrs_9x3mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
 			{
				soundsetshot[]=
				{
					//"jsrs_rifle_shake_soundset",
					"jsrs_ScarH_shot_silenced_soundset",
					"jsrs_ScarH_shell_soundset",
					"jsrs_7x62mm_SD_reflector_1"
				};
 			};
			dispersion = 0.000726;
			soundContinuous = 0;
			reloadTime = 0.070000;
			//recoil = "recoil_auto_mx";
			//recoilProne = "recoil_auto_prone_mx";
			minRange = 1;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 500;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.000001;
			aiRateOfFireDistance = 500;
		};
		class far_optic1: Single
		{
			showToPlayer = 0;
			minRange = 950;
			minRangeProbab = 1.000000;
			midRange = 1200;
			midRangeProbab = 1.000000;
			maxRange = 1600;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.0;
			aiRateOfFireDistance = 1600;
		};
		muzzles[] = {"this", "Butt"};
		class GunParticles: GunParticles
		{
			class FirstEffect
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 150;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_300Sup", "BP_muzzle_snds_B"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_MRCO", "optic_Arco", "optic_hamr", "BP_optic_ACOG",  "BP_compm4s", "BP_OldComp"};
				iconScale = 0.1;
			};
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw", "BP_AFG"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris", "BP_Harris2"};
				iconScale = 0.1;
			};
        };

		linkedAttach[] = {"BP_M3A", "BP_AFG"};
		chanceAttach[] =
        {
			{"BP_Harris",0.07},
			{"BP_muzzle_snds_B",0.01},
			{"",0.50}
        };

		reloadAction = "GestureReloadEBR";
		reloadSound[] = {};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_ebr", 0.360957, 1, 30};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Firemode_ugl",0.41622776,1.2,7};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
	};

	class BP_G36DMR_WDL: BP_G36DMR
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\g36\g36_wdl_co.paa", "\breakingpoint_weapons\textures\g36\g36_rail_wdl_co.paa", "\breakingpoint_weapons\textures\m110\prs_wdl_co.paa", "\breakingpoint_weapons\textures\DMR\us_dmr_wdl_co.paa"};
	};

	class BP_G36DMR_DES: BP_G36DMR
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\g36\g36_des_co.paa", "\breakingpoint_weapons\textures\g36\g36_rail_des_co.paa", "\breakingpoint_weapons\textures\m110\prs_des_co.paa", "\breakingpoint_weapons\textures\DMR\us_dmr_des_co.paa"};
	};

	class BP_G36DMR_URB: BP_G36DMR
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\g36\g36_urb_co.paa", "\breakingpoint_weapons\textures\g36\g36_rail_urb_co.paa", "\breakingpoint_weapons\textures\m110\prs_urb_co.paa", "\breakingpoint_weapons\textures\DMR\us_dmr_urb_co.paa"};
	};

	class BP_G36DMR_AI: BP_G36DMR
	{
		scope = 2;
		magazines[] = {"BP_500Rnd_762x51_AI"};
		inertia = 0.0000;
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefX = 0.100000;
		model = "\breakingpoint_weapons\models\G36\BP_G36DMR.p3d";
		modes[] = {"Single", "far_optic1"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"breakingpoint_jsrs\sounds\HK417_s1.wav", 0.812538, 0.8, 1200};
				begin2[] = {"breakingpoint_jsrs\sounds\HK417_s2.wav", 0.812538, 0.97, 1200};
				begin3[] = {"breakingpoint_jsrs\sounds\HK417_s3.wav", 0.812538, 1.2, 1200};
				soundBegin[] = {"begin1", 0.3400000, "begin2", 0.3300000, "begin3", 0.3300000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 1, 700};
				begin2[] = {"\breakingpoint_jsrs\sounds\HK417SD_s2.wav", 1.000000, 1, 700};
				begin3[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 0.9, 700};
				begin4[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 0.8, 700};
				begin5[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 1.1, 700};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};
			dispersion = 0.000437;
			soundContinuous = 0;
			reloadTime = 0.070000;
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			minRange = 500;
			minRangeProbab = 1.000000;
			midRange = 750;
			midRangeProbab = 1.000000;
			maxRange = 950;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.0000001;
			aiRateOfFireDistance = 950;
		};
		class far_optic1: Single
		{
			showToPlayer = 0;
			minRange = 950;
			minRangeProbab = 1.000000;
			midRange = 1200;
			midRangeProbab = 1.000000;
			maxRange = 1600;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.0;
			aiRateOfFireDistance = 1600;
		};
	};

	class BP_DMR_Officer: Rifle_Base_F_BP
	{
		scope = 2;
		maxZeroing = 1400;
		model = "\breakingpoint_weapons\models\DMR\BP_DMR.p3d";
		picture = "\breakingpoint_weapons\icons\gear_dmr_rifle_x_ca.paa";
		displayName = "M14 DMR";
		descriptionshort = "M14 Designated Marksman Rifle";
		magazines[] = {"BP_20Rnd_762x51_BPMag", "BP_20Rnd_762x51_Mk316Mod0", "BP_20Rnd_762x51_M80A1", "BP_10Rnd_762mk316_Mag", "BP_10Rnd_762x51_Mag", "BP_10Rnd_762m80a1_Mag", "BP_5Rnd_762x51_Mag", "BP_5Rnd_762mk316_Mag", "BP_5Rnd_762m80a1_Mag", "BP_10Rnd_762Rubber_Mag"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M60E4.rtm"};
		inertia = 0.300000;
		initSpeed = -1.02;
		recoil = "recoil_ebr";
		modes[] = {"Single"};
		bullet1[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Metal_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet2[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Metal_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet3[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Metal_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet4[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Metal_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet5[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Dirt_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet6[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Dirt_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet7[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Dirt_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet8[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Dirt_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet9[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Grass_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet10[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Grass_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet11[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Grass_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet12[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Grass_4.ogg",
			2.0099001,
			1,
			10
		};
		soundBullet[]=
		{
			"bullet1",
			0.079999998,
			"bullet2",
			0.083999999,
			"bullet3",
			0.083999999,
			"bullet4",
			0.083999999,
			"bullet5",
			0.093000002,
			"bullet6",
			0.093000002,
			"bullet7",
			0.074000001,
			"bullet8",
			0.074000001,
			"bullet9",
			0.083999999,
			"bullet10",
			0.085000001,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		class Single : Mode_SemiAuto
		{
			sounds[]=
			{
				"standardsound",
				"silencedsound"
			};
			class basesoundmodetype
			{
				soundclosure[]={};
			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_mk14_shot_soundset",
					"jsrs_mk14_shot2_soundset",
					"jsrs_mk14_shell_soundset",
					"jsrs_9x3mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
 			{
				soundsetshot[]=
				{
					"jsrs_mk14_shot_silenced_soundset",
					"jsrs_mk14_shell_soundset",
					//"jsrs_7x62mm_reflector_1"
					"jsrs_7x62mm_SD_reflector_1"
				};
 			};
			dispersion = 0.000608;
			soundContinuous = 0;
			reloadTime = 0.070000;
			//recoil = "recoil_single_mx";
			//recoilProne = "recoil_single_prone_mx";
		};
		class GunParticles: GunParticles
		{
			class FirstEffect
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 150;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_300Sup", "BP_muzzle_snds_B"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_MRCO", "optic_Arco", "optic_hamr", "BP_optic_ACOG",  "BP_compm4s", "BP_OldComp"};
				iconScale = 0.1;
			};
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw", "BP_CPad"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
        };

		linkedAttach[] = {"BP_M3AMRAD", "BP_CPad"};
		chanceAttach[] =
        {
			{"BP_Harris",0.10},
			{"BP_L14X",0.07},
			{"BP_muzzle_snds_B",0.01},
			{"",0.50}
        };

		reloadAction = "GestureReloadEBR";
		reloadSound[] = {};
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\Reload\EBR_Reload.ogg", 1, 1, 30};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
	};

	class BP_DMR_Officer_WDL: BP_DMR_Officer
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\DMR\us_dmr_wdl_co.paa"};
	};

	class BP_DMR_Officer_DES: BP_DMR_Officer
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\DMR\us_dmr_des_co.paa"};
	};

	class BP_DMR_Officer_URB: BP_DMR_Officer
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\DMR\us_dmr_urb_co.paa"};
	};

	class BP_M14RIS: BP_DMR_Officer
	{
		scope = 2;
		model = "\breakingpoint_weapons\models\DMR\BP_dmrRIS.p3d";
		picture = "\breakingpoint_weapons\icons\gear_dmr_rifle_x_ca.paa";
		displayName = "M14 RIS DMR";
		descriptionshort = "M14 RIS Designated Marksman Rifle";
		magazines[] = {"BP_20Rnd_762x51_BPMag", "BP_20Rnd_762x51_Mk316Mod0", "BP_20Rnd_762x51_M80A1", "BP_10Rnd_762mk316_Mag", "BP_10Rnd_762x51_Mag", "BP_10Rnd_762m80a1_Mag", "BP_5Rnd_762x51_Mag", "BP_5Rnd_762mk316_Mag", "BP_5Rnd_762m80a1_Mag", "BP_10Rnd_762Rubber_Mag"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M60E4.rtm"};
		inertia = 0.250000;
		initSpeed = -1.04;
		recoil = "recoil_ebr";
		modes[] = {"Single"};

		class GunParticles: GunParticles
		{
			class FirstEffect
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 150;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_300Sup","BP_muzzle_snds_B"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_MRCO", "optic_Arco", "optic_hamr", "BP_optic_ACOG",  "BP_compm4s", "BP_OldComp"};
				iconScale = 0.1;
			};
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw"};//removed cpad as model has that built in
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris", "BP_Harris2"};
				iconScale = 0.1;
			};
        };
		reloadAction = "GestureReloadEBR";
		reloadSound[] = {};
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\Reload\EBR_Reload.ogg", 1, 1, 30};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
	};

	class BP_M14RIS_WDL: BP_M14RIS
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\DMR\us_dmr_wdl_co.paa", "\breakingpoint_weapons\textures\m110\sr25_wdl_co.paa", "breakingpoint_weapons\textures\ps22\sa80_wdl_co.paa"};
	};

	class BP_M14RIS_DES: BP_M14RIS
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\DMR\us_dmr_des_co.paa", "\breakingpoint_weapons\textures\m110\sr25_des_co.paa", "breakingpoint_weapons\textures\ps22\sa80_des_co.paa"};
	};

	class BP_M14RIS_URB: BP_M14RIS
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\DMR\us_dmr_urb_co.paa", "\breakingpoint_weapons\textures\m110\sr25_urb_co.paa", "breakingpoint_weapons\textures\ps22\sa80_urb_co.paa"};
	};

	class BP_M21: Rifle_Base_F_BP
	{
		scope = 2;
		maxZeroing = 1600;
		model = "\breakingpoint_weapons\models\M21\BP_M21.p3d";
		picture = "\breakingpoint_weapons\icons\gear_m21_rifle_x_ca.paa";
		displayName = "M21 Super Match";
		descriptionshort = "Target grade marksman rifle adapted from the M14 platform";
		magazines[] = {"BP_20Rnd_762x51_Mk316Mod0", "BP_30Rnd_762x51_M80A1", "BP_20Rnd_762x51_BPMag", "BP_20Rnd_762x51_M80A1", "BP_5Rnd_762x51_Mag", "BP_5Rnd_762mk316_Mag", "BP_5Rnd_762m80a1_Mag", "BP_10Rnd_762mk316_Mag", "BP_10Rnd_762x51_Mag", "BP_10Rnd_762m80a1_Mag", "BP_30Rnd_762x51_BPMag", "BP_10Rnd_762Rubber_Mag"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M24.rtm"};
		recoil = "recoil_ebr";
		initSpeed = -1.02;
		inertia = 0.387000;
		muzzles[] = {"this", "Butt"};
		modes[] = {"Single", "far_optic1", "far_optic2"};
		bullet1[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Metal_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet2[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Metal_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet3[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Metal_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet4[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Metal_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet5[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Dirt_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet6[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Dirt_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet7[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Dirt_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet8[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Dirt_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet9[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Grass_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet10[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Grass_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet11[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Grass_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet12[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Grass_4.ogg",
			2.0099001,
			1,
			10
		};
		soundBullet[]=
		{
			"bullet1",
			0.079999998,
			"bullet2",
			0.083999999,
			"bullet3",
			0.083999999,
			"bullet4",
			0.083999999,
			"bullet5",
			0.093000002,
			"bullet6",
			0.093000002,
			"bullet7",
			0.074000001,
			"bullet8",
			0.074000001,
			"bullet9",
			0.083999999,
			"bullet10",
			0.085000001,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};

		class Single : Mode_SemiAuto
		{
			sounds[]=
			{
				"standardsound",
				"silencedsound"
			};
			class basesoundmodetype
			{
				soundclosure[]={};
			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_mk14_shot_soundset",
					"jsrs_mk14_shot2_soundset",
					"jsrs_mk14_shell_soundset",
					"jsrs_9x3mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
 			{
				soundsetshot[]=
				{
					"jsrs_mk14_shot_silenced_soundset",
					"jsrs_mk14_shell_soundset",
					"jsrs_7x62mm_SD_reflector_1"
				};
 			};
			dispersion = 0.000673;
			soundContinuous = 0;
			reloadTime = 0.070000;
			//recoil = "recoil_single_ebr";
			//recoilProne = "recoil_single_prone_ebr";
			minRange = 2;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 450;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.00001;
			aiRateOfFireDistance = 450;
		};
		class far_optic1: Single
		{
			showToPlayer = 0;
			minRange = 450;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1400;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1700;
		};

		class GunParticles: GunParticles
		{
			class FirstEffect
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 165;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_300Sup", "BP_muzzle_snds_B"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_MRCO", "optic_Arco", "optic_hamr", "BP_optic_ACOG",  "BP_compm4s", "BP_OldComp"};
				iconScale = 0.1;
			};
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_Bipod", "BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw", "BP_CPad"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
        };

		linkedAttach[] = {"BP_M3A2"};
		chanceAttach[] =
        {
			{"BP_Harris",0.05},
			{"BP_CPad",0.03},
			{"",0.50}
        };

		reloadAction = "GestureReloadEBR";
		reloadSound[] = {};
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\Reload\EBR_Reload.ogg", 1, 1, 30};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
	};

	class BP_M21_WDL: BP_M21
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\m21\m14_wdl_co.paa"};
	};

	class BP_M21_DES: BP_M21
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\m21\m14_des_co.paa"};
	};

	class BP_M21_URB: BP_M21
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\m21\m14_urb_co.paa"};
	};

	class BP_M21_AI: BP_M21
	{
		scope = 2;
		modes[] = {"Single", "far_optic1", "far_optic2"};
		magazines[] = {"BP_500Rnd_762x51_AI"};
		inertia = 0.0000;
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefX = 0.100000;
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound, SilencedSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\DMR_s1.wav", 1.100000, 1.0, 1700};
				begin2[] = {"\breakingpoint_jsrs\sounds\DMR_s2.wav", 1.150000, 1.0, 1700};
				begin3[] = {"\breakingpoint_jsrs\sounds\DMR_s3.wav", 1.170000, 0.98, 1700};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};
			class SilencedSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 1, 700};
				begin2[] = {"\breakingpoint_jsrs\sounds\HK417SD_s2.wav", 1.000000, 1, 700};
				begin3[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 0.9, 700};
				begin4[] = {"\breakingpoint_jsrs\sounds\HK417SD_s1.wav", 1.000000, 0.8, 700};
				begin5[] = {"\breakingpoint_jsrs\sounds\HK417SD_s3.wav", 1.000000, 1.1, 700};
				soundBegin[] = {"begin1", 0.200000, "begin2", 0.200000, "begin3", 0.200000, "begin4", 0.200000, "begin5", 0.200000};
 			};
			dispersion = 0.000717;
			soundContinuous = 0;
			reloadTime = 0.070000;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			minRange = 2;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 450;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.00001;
			aiRateOfFireDistance = 450;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class far_optic1: Single
		{
			showToPlayer = 0;
			minRange = 450;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1400;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1700;
		};
	};

	class BP_M21K: BP_M21
	{
		scope=2;
		maxZeroing=1600;
		model="\breakingpoint_weapons\models\M21\BP_M21K.p3d";
		picture="\breakingpoint_weapons\icons\gear_m21k_rifle_x_ca.paa";
		displayName="M21 Super Match w/Bayonet";
		descriptionshort="Target grade marksman rifle adapted from the M14 platform";
		magazines[]=
		{
			"BP_20Rnd_762x51_Mk316Mod0",
			"BP_30Rnd_762x51_M80A1",
			"BP_20Rnd_762x51_BPMag",
			"BP_20Rnd_762x51_M80A1",
			"BP_5Rnd_762x51_Mag",
			"BP_5Rnd_762mk316_Mag",
			"BP_5Rnd_762m80a1_Mag",
			"BP_10Rnd_762mk316_Mag",
			"BP_10Rnd_762x51_Mag",
			"BP_10Rnd_762m80a1_Mag",
			"BP_30Rnd_762x51_BPMag",
			"BP_10Rnd_762Rubber_Mag"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\breakingpoint_weapons\anim\M24.rtm"
		};
		inertia=0.46000001;
		class GunParticles: GunParticles
		{
			class FirstEffect
			{
				effectName="SniperCloud";
				positionName="Usti hlavne";
				directionName="Konec hlavne";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=165;
			allowedSlots[]={901};
			class MuzzleSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
				iconScale=0.1;
			};
			class CowsSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					"BP_L14X",
					"BP_M3AMRAD",
					"BP_NXS",
					"BP_M3A",
					"BP_M3A2",
					"BP_M3LR",
					"BP_M3AN",
					"BP_MRT",
					"BP_PS22",
					"BP_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_hamr",
					"BP_optic_ACOG",
					"BP_compm4s"
				};
				iconScale=0.1;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"BP_GhillieWL",
					"BP_GhillieDes",
					"BP_GhillieSnw",
					"BP_CPad"
				};
				iconScale=0.1;
			};
		};
		reloadAction="GestureReloadEBR";
		reloadSound[]={};
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\Reload\EBR_Reload.ogg", 1, 1, 30};
		drySound[]=
		{
			"A3\sounds_f\weapons\other\dry1",
			0.330957,
			1,
			30
		};
		muzzles[]=
		{
			"this",
			"Bayonet"
		};
		class Bayonet: UGL_F
		{
			magazines[]=
			{
				"BP_Bayonet_Stab"
			};
			displayName="Bayonet";
			maxZeroing=5;
			discreteDistanceInitIndex=0;
			discreteDistance[]={5};
			class GunParticles: GunParticles
			{
				class FirstEffect
				{
					effectName="";
					positionName="Usti hlavne";
					directionName="Konec hlavne";
				};
			};
			modes[]=
			{
				"Single"
			};
			class Single: Mode_SemiAuto
			{
				sounds[]=
				{
					"StandardSound"
				};
				class BaseSoundModeType
				{
					closure1[]={};
					soundClosure[]={};
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[]=
					{
						"breakingpoint_sfx\effects\Swing.wav",
						1.994328,
						0.94999999,
						10
					};
					begin2[]={};
					soundBegin[]=
					{
						"begin1",
						1
					};
				};
			};
			reloadMagazineSound[]={};
			drySound[]={};
			magazineReloadTime=0;
			autoReload=1;
			reloadTime=1.4;
			optics=0;
			modelOptics="-";
			cameraDir="";
			memoryPointCamera="eye";
			opticsZoomMin=0.375;
			opticsZoomMax=1.1;
			opticsZoomInit=0.75;
			weaponInfoType="RscWeaponZeroing";
		};
		linkedAttach[]=
		{
			"BP_M3A2"
		};
		chanceAttach[]=
		{

			{
				"BP_Harris",
				0.07
			},

			{
				"BP_CPad",
				0.07
			},

			{
				"",
				0.5
			}
		};
	};

	class BP_M21K_WDL: BP_M21K
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\m21\m14_wdl_co.paa", "\breakingpoint\textures\items\knife_wdl_co.paa"};
	};

	class BP_M21K_DES: BP_M21K
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\m21\m14_des_co.paa", "\breakingpoint\textures\items\knife_des_co.paa"};
	};

	class BP_M21K_URB: BP_M21K
	{
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\m21\m14_urb_co.paa", "\breakingpoint\textures\items\knife_urb_co.paa"};
	};

	class BP_M25WF: Rifle_Base_F_BP
	{
		scope = 2;
		maxZeroing = 1600;
		model = "\breakingpoint_weapons\models\M25WF\BP_M25WF2.p3d";
		picture = "\breakingpoint_weapons\icons\gear_m25_rifle_x_ca.paa";
		displayName = "M25 White Feather";
		descriptionshort = "Customized M21 Designated Marksman Rifle";
		magazines[] = {"BP_30Rnd_762x51_M80A1", "BP_10Rnd_762mk316_Mag", "BP_10Rnd_762x51_Mag", "BP_10Rnd_762m80a1_Mag", "BP_20Rnd_762x51_Mk316Mod0", "BP_20Rnd_762x51_M80A1", "BP_20Rnd_762x51_BPMag", "BP_30Rnd_762x51_BPMag", "BP_5Rnd_762x51_Mag", "BP_5Rnd_762mk316_Mag", "BP_5Rnd_762m80a1_Mag", "BP_10Rnd_762Rubber_Mag"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M24.rtm"};
		initSpeed = -1.04;
		recoil = "recoil_ebr";
		inertia = 0.33500;
		modes[] = {"Single"};
		bullet1[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Metal_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet2[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Metal_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet3[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Metal_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet4[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Metal_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet5[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Dirt_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet6[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Dirt_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet7[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Dirt_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet8[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Dirt_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet9[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Grass_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet10[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Grass_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet11[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Grass_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet12[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Grass_4.ogg",
			2.0099001,
			1,
			10
		};
		soundBullet[]=
		{
			"bullet1",
			0.079999998,
			"bullet2",
			0.083999999,
			"bullet3",
			0.083999999,
			"bullet4",
			0.083999999,
			"bullet5",
			0.093000002,
			"bullet6",
			0.093000002,
			"bullet7",
			0.074000001,
			"bullet8",
			0.074000001,
			"bullet9",
			0.083999999,
			"bullet10",
			0.085000001,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		class Single : Mode_SemiAuto
		{
			sounds[]=
			{
				"standardsound",
				"silencedsound"
			};
			class basesoundmodetype
			{
				soundclosure[]={};
			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_mk14_shot_soundset",
					"jsrs_mk14_shot2_soundset",
					"jsrs_mk14_shell_soundset",
					"jsrs_9x3mm_reflector_1",
					"jsrs_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
 			{
				soundsetshot[]=
				{
					"jsrs_mk14_shot_silenced_soundset",
					"jsrs_mk14_shell_soundset",
					//"jsrs_7x62mm_reflector_1"
					"jsrs_7x62mm_SD_reflector_1"
				};
 			};
			dispersion = 0.000523;
			soundContinuous = 0;
			reloadTime = 0.050000;
			//recoil = "recoil_single_mx";
			//recoilProne = "recoil_single_prone_mx";
		};
		muzzles[] = {"this", "Butt"};
		class GunParticles: GunParticles
		{
			class FirstEffect
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 150;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_300Sup", "BP_muzzle_snds_B"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_MRCO", "optic_Arco", "optic_hamr", "BP_optic_ACOG",  "BP_compm4s", "BP_OldComp"};
				iconScale = 0.1;
			};
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
        };

		linkedAttach[] = {"BP_L14X", "BP_Harris"};
		chanceAttach[] =
        {
			{"BP_M3AMRAD",0.05},
			{"BP_muzzle_snds_B",0.01},
			{"",0.50}
        };

		reloadAction = "GestureReloadEBR";
		reloadSound[] = {};
		reloadMagazineSound[] = {"\breakingpoint_jsrs\sounds\Reload\EBR_Reload.ogg", 1, 1, 30};
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 30};
	};

	class BP_M25WF_WDL: BP_M25WF
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\m25wf\m14_wdl_co.paa", "\breakingpoint_weapons\textures\m40a3\m40a5_wdl_co.paa", "\breakingpoint_weapons\textures\762sup\scar_wdl_co.paa"};
	};

	class BP_M25WF_DES: BP_M25WF
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\m25wf\m14_des_co.paa", "\breakingpoint_weapons\textures\m40a3\m40a5_des_co.paa", "\breakingpoint_weapons\textures\762sup\scar_des_co.paa"};
	};

	class BP_M25WF_URB: BP_M25WF
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\m25wf\m14_urb_co.paa", "\breakingpoint_weapons\textures\m40a3\m40a5_urb_co.paa", "\breakingpoint_weapons\textures\762sup\scar_urb_co.paa"};
	};

	class BP_M25WFK: BP_M25WF
	{
		scope = 2;
		maxZeroing = 1600;
		model = "\breakingpoint_weapons\models\M25WF\BP_M25WK.p3d";
		picture = "\breakingpoint_weapons\icons\gear_m25k_rifle_x_ca.paa";
		displayName = "M25 White Feather w/Bayonet";
		descriptionshort = "Customized M21 Designated Marksman Rifle";
		magazines[] = {"BP_30Rnd_762x51_M80A1", "BP_10Rnd_762mk316_Mag", "BP_10Rnd_762x51_Mag", "BP_10Rnd_762m80a1_Mag", "BP_20Rnd_762x51_Mk316Mod0", "BP_20Rnd_762x51_M80A1", "BP_20Rnd_762x51_BPMag", "BP_30Rnd_762x51_BPMag", "BP_5Rnd_762x51_Mag", "BP_5Rnd_762mk316_Mag", "BP_5Rnd_762m80a1_Mag", "BP_10Rnd_762Rubber_Mag"};
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\M24.rtm"};
		inertia = 0.37500;
		muzzles[] = {"this", "Bayonet"};
		class Bayonet: UGL_F
		{
			magazines[] = {"BP_Bayonet_Stab"};
			displayName = "Bayonet";
			maxZeroing = 5;
			discreteDistanceInitIndex = 0;
			discreteDistance[] = {5};
			class GunParticles: GunParticles
			{
				class FirstEffect
				{
					effectName = "";
					positionName = "Usti hlavne";
					directionName = "Konec hlavne";
				};
			};
			modes[] = {"Single"};
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class BaseSoundModeType
				{
					closure1[] = {};
					soundClosure[] = {};
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.95, 10};
					begin2[] = {};
					soundBegin[] = {"begin1", 1};
				};
			};
			reloadMagazineSound[] = {};
			drySound[] = {};
			magazineReloadTime = 0;
			autoReload = 1;
			reloadTime = 1.400000;
			optics = 0;
			modelOptics = "-";
			cameraDir = "";
			memoryPointCamera = "eye";
			opticsZoomMin = 0.375000;
			opticsZoomMax = 1.100000;
			opticsZoomInit = 0.750000;
			weaponInfoType = "RscWeaponZeroing";
		};
		class GunParticles: GunParticles
		{
			class FirstEffect
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 150;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_MRT", "BP_PS22", "BP_SOS", "optic_MRCO", "optic_Arco", "optic_hamr", "BP_optic_ACOG",  "BP_compm4s", "BP_OldComp"};
				iconScale = 0.1;
			};
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
        };

		linkedAttach[] = {"BP_L14X", "BP_Harris"};
		chanceAttach[] =
        {
			{"BP_M3AMRAD",0.05},
			{"",0.50}
        };
	};

	class BP_M25WFK_WDL: BP_M25WFK
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\m25wf\m14_wdl_co.paa", "\breakingpoint_weapons\textures\m40a3\m40a5_wdl_co.paa", "\breakingpoint_weapons\textures\762sup\scar_wdl_co.paa", "\breakingpoint\textures\items\knife_wdl_co.paa"};
	};

	class BP_M25WFK_DES: BP_M25WFK
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\m25wf\m14_des_co.paa", "\breakingpoint_weapons\textures\m40a3\m40a5_des_co.paa", "\breakingpoint_weapons\textures\762sup\scar_des_co.paa", "\breakingpoint\textures\items\knife_des_co.paa"};
	};

	class BP_M25WFK_URB: BP_M25WFK
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\m25wf\m14_urb_co.paa", "\breakingpoint_weapons\textures\m40a3\m40a5_urb_co.paa", "\breakingpoint_weapons\textures\762sup\scar_urb_co.paa", "\breakingpoint\textures\items\knife_urb_co.paa"};
	};

	class BP_SVD: Rifle_Base_F_BP
	{
		scope = 2;
		maxZeroing = 1600;
		magazines[] = {"BP_762x54_SVD", "BP_762x54_7N1_10rnd", "BP_762x54_7N13_10rnd"};
		reloadAction = "GestureReloadEBR";
		picture = "\breakingpoint_weapons\icons\gear_svd_rifle_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\AFGDMR.rtm"};
		displayName = "Dragunov Sniper Rifle";
		descriptionShort = "Russian semi-automatic Marksman Rifle";
		model = "\breakingpoint_weapons\models\SVD\BP_SVD.p3d";
		inertia = 0.345000;
		recoil = "recoil_dmr_01";
		initSpeed = -1.03;
		modes[] = {"Single", "far_optic1", "far_optic2"};
		bullet1[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Metal_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet2[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Metal_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet3[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Metal_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet4[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Metal_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet5[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Dirt_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet6[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Dirt_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet7[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Dirt_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet8[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Dirt_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet9[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Grass_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet10[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Grass_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet11[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Grass_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet12[]=
		{
			"\breakingpoint_jsrs\sounds\Shells\medium\Grass_4.ogg",
			2.0099001,
			1,
			10
		};
		soundBullet[]=
		{
			"bullet1",
			0.079999998,
			"bullet2",
			0.083999999,
			"bullet3",
			0.083999999,
			"bullet4",
			0.083999999,
			"bullet5",
			0.093000002,
			"bullet6",
			0.093000002,
			"bullet7",
			0.074000001,
			"bullet8",
			0.074000001,
			"bullet9",
			0.083999999,
			"bullet10",
			0.085000001,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound};
			class basesoundmodetype
			{
				soundclosure[]={};
			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_svd_shot_soundset",
					"jsrs_svd_shot2_soundset",
					"jsrs_svd_shell_soundset",
					"svd_InteriorTail_SoundSet",
					"jsrs_9x3mm_reflector_2",
					"jsrs_762mm_echo_soundset"
				};
			};
			reloadTime = 0.085000;
			//recoil = "recoil_single_ebr";
			//recoilProne = "recoil_single_prone_ebr";
			dispersion = 0.000742;
			minRange = 2;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 450;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.00001;
			aiRateOfFireDistance = 450;
		};
		class far_optic1: Single
		{
			showToPlayer = 0;
			minRange = 450;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1400;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1700;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
            mass = 160;
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName = "$STR_A3_CfgWeapons_EBR_base_F_WeaponSlotsInfo_MuzzleSlot0";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class CowsSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_PSO1", "BP_PSOP", "BP_PSO35"};
				iconScale = 0.1;
			};
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_GhillieWL", "BP_GhillieDes", "BP_GhillieSnw"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
		};

		linkedAttach[] = {"BP_PSO1"};
		chanceAttach[] =
        {
			{"BP_Harris",0.05},
			{"",0.50}
        };
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		reloadMagazineSound[] = {"A3\Sounds_F\weapons\Khaybar\reload_khaibar", 0.462341, 1, 30};
	};

	class BP_SVD_WDL: BP_SVD
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\svdk\svd_wdl_co.paa"};
	};

	class BP_SVD_DES: BP_SVD
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\svdk\svd_des_co.paa"};
	};

	class BP_SVD_URB: BP_SVD
	{
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\svdk\svd_urb_co.paa"};
	};

	class BP_SVDK: Rifle_Base_F_BP
	{
		scope = 2;
		maxZeroing = 1600;
		magazines[] = {"BP_93x64_SVDK"};
		reloadAction = "GestureReloadEBR";
		picture = "\breakingpoint_weapons\icons\gear_svdk_rifle_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\breakingpoint_weapons\anim\AFGDMR.rtm"};
		displayName = "SVDK Brenneke";
		descriptionShort = "High Power Russian semi-automatic Marksman Rifle";
		model = "\breakingpoint_weapons\models\SVDK\BP_SVDK.p3d";
		inertia = 0.480000;
		recoil = "recoil_m320";
		modes[] = {"Single", "far_optic1", "far_optic2"};
		bullet1[]=
		{
			"JSRS_Soundmod_Snd_Weapons\Sounds\Shells\big\Metal_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet2[]=
		{
			"JSRS_Soundmod_Snd_Weapons\Sounds\Shells\big\Metal_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet3[]=
		{
			"JSRS_Soundmod_Snd_Weapons\Sounds\Shells\big\Metal_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet4[]=
		{
			"JSRS_Soundmod_Snd_Weapons\Sounds\Shells\big\Metal_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet5[]=
		{
			"JSRS_Soundmod_Snd_Weapons\Sounds\Shells\big\Dirt_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet6[]=
		{
			"JSRS_Soundmod_Snd_Weapons\Sounds\Shells\big\Dirt_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet7[]=
		{
			"JSRS_Soundmod_Snd_Weapons\Sounds\Shells\big\Dirt_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet8[]=
		{
			"JSRS_Soundmod_Snd_Weapons\Sounds\Shells\big\Dirt_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet9[]=
		{
			"JSRS_Soundmod_Snd_Weapons\Sounds\Shells\big\Grass_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet10[]=
		{
			"JSRS_Soundmod_Snd_Weapons\Sounds\Shells\big\Grass_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet11[]=
		{
			"JSRS_Soundmod_Snd_Weapons\Sounds\Shells\big\Grass_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet12[]=
		{
			"JSRS_Soundmod_Snd_Weapons\Sounds\Shells\big\Grass_4.ogg",
			2.0099001,
			1,
			10
		};
		soundBullet[]=
		{
			"bullet1",
			0.079999998,
			"bullet2",
			0.083999999,
			"bullet3",
			0.083999999,
			"bullet4",
			0.083999999,
			"bullet5",
			0.093000002,
			"bullet6",
			0.093000002,
			"bullet7",
			0.074000001,
			"bullet8",
			0.074000001,
			"bullet9",
			0.083999999,
			"bullet10",
			0.085000001,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {StandardSound};
			class basesoundmodetype
			{
				soundclosure[]={};
			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_sniper_shake_soundset",
					"jsrs_svdk_shot_soundset",
					"jsrs_svdk_shot2_soundset",
					"jsrs_svdk_shell_soundset",
					"jsrs_12x7mm_reflector_2",
					"jsrs_dmr_echo_soundset",
					"svdk_InteriorTail_SoundSet"
				};
			};
			/*class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"DMR01_silencerShot_SoundSet",
					"DMR01_silencerTail_SoundSet",
					"DMR01_silencerInteriorTail_SoundSet"
				};
			};*/
		/*class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\SVD_s1.wav", 1.322020, 0.7, 2000};
				begin2[] = {"\breakingpoint_jsrs\sounds\SVD_s2.wav", 1.322020, 0.7, 2000};
				begin3[] = {"\breakingpoint_jsrs\sounds\SVD_s1.wav", 1.222020, 0.7, 2000};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};		*/
			reloadTime = 0.085000;
			//recoil = "recoil_single_ebr";
			//recoilProne = "recoil_single_prone_ebr";
			dispersion = 0.000977;
			minRange = 2;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 450;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.00001;
			aiRateOfFireDistance = 450;
		};
		class far_optic1: Single
		{
			showToPlayer = 0;
			minRange = 450;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1400;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1700;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
            mass = 190;
			allowedSlots[] = {901};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName = "$STR_A3_CfgWeapons_EBR_base_F_WeaponSlotsInfo_MuzzleSlot0";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			class CowsSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_PSO1", "BP_PSOP", "BP_PSO35"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot: SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"BP_Harris"};
				iconScale = 0.1;
			};
		};

		linkedAttach[] = {"BP_PSO35"};
		chanceAttach[] =
        {
			{"BP_Harris",0.07},
			{"",0.50}
        };
		drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 130};
		reloadMagazineSound[] = {"A3\Sounds_F\weapons\Khaybar\reload_khaibar", 0.462341, 1, 30};
	};

	class BP_SVDK_WDL: BP_SVDK
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\svdk\svdk_wdl_co.paa", "\breakingpoint_weapons\textures\svdk\svd_wdl_co.paa", "\breakingpoint_weapons\textures\svdk\ksvk_wdl_co.paa", "\breakingpoint_weapons\textures\fnfalm\fnfal_wdl_co.paa"};
	};

	class BP_SVDK_DES: BP_SVDK
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\svdk\svdk_des_co.paa", "\breakingpoint_weapons\textures\svdk\svd_des_co.paa", "\breakingpoint_weapons\textures\svdk\ksvk_des_co.paa", "\breakingpoint_weapons\textures\fnfalm\fnfal_des_co.paa"};
	};

	class BP_SVDK_URB: BP_SVDK
	{
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\svdk\svdk_urb_co.paa", "\breakingpoint_weapons\textures\svdk\svd_urb_co.paa", "\breakingpoint_weapons\textures\svdk\ksvk_urb_co.paa", "\breakingpoint_weapons\textures\fnfalm\fnfal_urb_co.paa"};
	};

	class BP_SVDK_AI: BP_SVDK
	{
		scope = 2;
		magazines[] = {"BP_500Rnd_762x51_AI"};
		inertia = 0.0000;
		aiDispersionCoefY = 0.100000;
		aiDispersionCoefX = 0.100000;
		modes[] = {"Single", "far_optic1", "far_optic2"};

		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\SVD_s1.wav", 1.322020, 0.4, 2200};
				begin2[] = {"\breakingpoint_jsrs\sounds\SVD_s2.wav", 1.322020, 0.3, 2200};
				begin3[] = {"\breakingpoint_jsrs\sounds\SVD_s1.wav", 1.222020, 0.3, 2200};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};
			reloadTime = 0.085000;
			recoil = "recoil_single_primary_prone_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			dispersion = 0.000777;
			minRange = 2;
			minRangeProbab = 1.000000;
			midRange = 250;
			midRangeProbab = 1.000000;
			maxRange = 450;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.00001;
			aiRateOfFireDistance = 450;
			aiDispersionCoefY = 0.100000;
			aiDispersionCoefX = 0.100000;
		};
		class far_optic1: Single
		{
			showToPlayer = 0;
			minRange = 450;
			minRangeProbab = 1.000000;
			midRange = 700;
			midRangeProbab = 1.000000;
			maxRange = 1000;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 1000;
		};
		class far_optic2: far_optic1
		{
			minRange = 1000;
			minRangeProbab = 1.000000;
			midRange = 1400;
			midRangeProbab = 1.000000;
			maxRange = 1700;
			maxRangeProbab = 1.000000;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1700;
		};
	};

	class BP_TranQRifle: Rifle_Base_F_BP
	{
		scope = 2;
		maxZeroing = 800;
		model = "\A3\Weapons_F_EPA\LongRangeRifles\DMR_01\DMR_01_F.p3d";
		dexterity = 1.680000;
		magazines[] = {"BP_10Rnd_762Rubber_Mag", "BP_10Rnd_762mk316_Mag", "BP_10Rnd_762x51_Mag", "BP_10Rnd_762m80a1_Mag", "BP_5Rnd_762x51_Mag", "BP_5Rnd_762mk316_Mag", "BP_5Rnd_762m80a1_Mag", "BP_10Rnd_762Rubber_Mag"};
		displayName = "Survivalist TranQ Rifle";
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F_EPA\LongRangeRifles\DMR_01\data\Anim\dmr_01.rtm"};
		picture = "\breakingpoint_weapons\icons\gear_trifle_rifle_x_ca.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		descriptionShort = "Long range tranquillizer rifle";
		inertia = 0.320000;
		recoil = "recoil_mx";
		modes[] = {"Single"};
		class Single : Mode_SemiAuto
		{
			sounds[] = {StandardSound};
 			class BaseSoundModeType
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6", 0.307946, 1, 10};
 				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7", 0.307946, 1, 10};
 				soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
 			};
 			class StandardSound: BaseSoundModeType
 			{
 				begin1[] = {"\breakingpoint_jsrs\sounds\M16sd_s1.wav", 1.422020, 1, 1200};
				begin2[] = {"\breakingpoint_jsrs\sounds\M16sd_s2.wav", 1.422020, 1, 1200};
				begin3[] = {"\breakingpoint_jsrs\sounds\M16sd_s1.wav", 1.422020, 0.89, 1200};
				soundBegin[] = {"begin1", 0.340000, "begin2", 0.330000, "begin3", 0.330000};
 			};
			reloadTime = 0.085000;
			//recoil = "recoil_single_ebr";
			//recoilProne = "recoil_single_prone_ebr";
			dispersion = 0.000777;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		    mass = 80;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"BP_muzzle_snds_B", "BP_300Sup"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"BP_L14X", "BP_M3AMRAD", "BP_NXS", "BP_M3A", "BP_M3A2", "BP_M3LR", "BP_M3AN", "BP_PS22", "BP_SOS", "optic_MRCO", "optic_Arco", "optic_hamr", "BP_optic_ACOG",  "BP_compm4s", "BP_OldComp"};
				iconScale = 0.1;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"BP_flashlight"};
				iconScale = 0.1;
			};
        };
	};
//--------------------------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//CLASS ADDING P90			|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//--------------------------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	class SMG_03_TR_BASE;
	class BP_P90TR_BASE: SMG_03_TR_BASE
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "BP_P90TR_BASE";
		displayName = "$STR_A3_CfgWeapons_SMG_03_TR_BASE0";
		model = "\A3\Weapons_F_Mod\SMGs\SMG_03\SMG_03_TR.p3d";
		modelOptics = "-";
		optics = 1;
		opticsZoomMin = 0.35;
		opticsZoomMax = 0.35;
		//dlc = "OfficialMod";
		magazines[] = {"BP_P90_50Rnd_570x28"};
		muzzles[] = {"this"};
		modes[] = {"Single","FullAuto"};
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Mod\SMGs\SMG_03\data\Anim\P90.rtm"};
		reloadAction = "GestureReload_smg_03";
		recoil = "recoil_P90";
		magazineReloadSwitchPhase = 0.4;
		inertia = 0.3;
		aimTransitionSpeed = 1.3;
		dexterity = 1.7;
		initSpeed = -1.1;
		maxZeroing = 800;
		picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_tr_ca.paa";
		UiPicture = "\A3\Weapons_F\data\UI\icon_regular_CA.paa";
		descriptionShort = "$STR_A3_CfgWeapons_SMG_03_TR_BASE1";
		class Library
		{
			libTextDesc = "$STR_A3_CfgWeapons_SMG_03_TR_BASE_Library0";
		};
		class OpticsModes
		{
			class Kolimator
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.25;
				opticsZoomInit = 0.75;
				memoryPointCamera = "opticView";
				opticsFlare = 0;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				cameraDir = "";
			};
		};
		reloadMagazineSound[] = {"A3\Sounds_F_Mod\arsenal\weapons\SMG\ADR_97\ADR_97_Reload",1.0,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F_Mod\arsenal\weapons\SMG\ADR_97\ADR_97_Firemode",1.0,1,5};
		drySound[] = {"A3\Sounds_F_Mod\arsenal\weapons\SMG\ADR_97\ADR_97_Dry",1.0,1,10};
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.7943282,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.7943282,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.7943282,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.7943282,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.7943282,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.7943282,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.7943282,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.7943282,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.7943282,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.7943282,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.7943282,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.7943282,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		class Single: Mode_SemiAuto
		{
			multiplier = 1;
			burst = 1;
			reloadTime = 0.0666667;
			dispersion = 0.001;
			soundContinuous = 0;
			autoFire = 0;
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 0;
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"ADR_97_Shot_SoundSet","ADR_97_Tail_SoundSet","ADR_97_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"ADR_97_silencerShot_SoundSet","ADR_97_silencerTail_SoundSet","ADR_97_silencerInteriorTail_SoundSet"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			multiplier = 1;
			burst = 1;
			reloadTime = 0.0666667;
			dispersion = 0.001;
			soundContinuous = 0;
			autoFire = 1;
			aiRateOfFire = 0.08;
			aiRateOfFireDistance = 0;
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"ADR_97_Shot_SoundSet","ADR_97_Tail_SoundSet","ADR_97_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"ADR_97_silencerShot_SoundSet","ADR_97_silencerTail_SoundSet","ADR_97_silencerInteriorTail_SoundSet"};
			};
		};
		class WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				iconPosition[] = {0.4,0.3};
				iconScale = 0.2;
			};
			class PointerSlot: PointerSlot
			{
				iconPosition[] = {0.33,0.37};
				iconScale = 0.25;
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] = {"BP_P90_Silencer"};
				iconPosition[] = {0.0,0.5};
				iconScale = 0.25;
			};
			mass = 50;
		};
	};
	class BP_P90C_BASE: BP_P90TR_BASE
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "BP_P90C_BASE";
		maxZeroing = 600;
		initSpeed = -1;
		inertia = 0.2;
		aimTransitionSpeed = 1.4;
		dexterity = 1.8;
		class Single: Single
		{
			dispersion = 0.0012;
		};
		class FullAuto: FullAuto
		{
			dispersion = 0.0012;
		};
	};
	class BP_P90TR_black:  BP_P90TR_BASE
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "BP_P90TR_black";
		scope = 2;
		displayName = "$STR_A3_CfgWeapons_SMG_03_TR_black0";
		picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_tr_black_ca.paa";
	};
	class BP_P90TR_camo: BP_P90TR_black
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "BP_P90TR_camo";
		displayName = "$STR_A3_CfgWeapons_SMG_03_TR_camo0";
		picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_tr_camo_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_camo_co.paa"};
	};
	class BP_P90TR_khaki: BP_P90TR_black
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "BP_P90TR_khaki";
		displayName = "$STR_A3_CfgWeapons_SMG_03_TR_khaki0";
		picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_tr_khaki_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_khaki_co.paa"};
	};
	class BP_P90TR_hex: BP_P90TR_BASE
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "BP_P90TR_hex";
		scope = 2;
		displayName = "$STR_A3_CfgWeapons_SMG_03_TR_hex0";
		picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_tr_hex_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_hex_co.paa"};
	};
	class BP_P90CTR_black: BP_P90C_BASE
	{
		scope = 2;
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "BP_P90CTR_black";
		displayName = "$STR_A3_CfgWeapons_SMG_03C_TR_black0";
		model = "\A3\Weapons_F_Mod\SMGs\SMG_03\SMG_03C_TR.p3d";
		picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_c_tr_black_ca.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot{};
			class PointerSlot: PointerSlot{};
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[] = {0.15,0.5};
			};
			mass = 40;
		};
	};
	class BP_P90CTR_camo: BP_P90TR_black
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "BP_P90CTR_camo";
		displayName = "$STR_A3_CfgWeapons_SMG_03C_TR_camo0";
		picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_c_tr_camo_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_camo_co.paa"};
	};
	class BP_P90CTR_khaki: BP_P90TR_black
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "BP_P90CTR_khaki";
		displayName = "$STR_A3_CfgWeapons_SMG_03C_TR_khaki0";
		picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_c_tr_khaki_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_khaki_co.paa"};
	};
	class BP_P90CTR_hex: BP_P90CTR_black
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "BP_P90CTR_hex";
		displayName = "$STR_A3_CfgWeapons_SMG_03C_TR_hex0";
		picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_c_tr_hex_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_hex_co.paa"};
	};
	class BP_P90_black: BP_P90TR_BASE
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "BP_P90_black";
		scope = 2;
		displayName = "$STR_A3_CfgWeapons_SMG_03_black0";
		model = "\A3\Weapons_F_Mod\SMGs\SMG_03\SMG_03.p3d";
		picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_black_ca.paa";
		class WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] = {"BP_P90_Silencer"};
				iconPosition[] = {0.0,0.5};
				iconScale = 0.25;
			};
			mass = 50;
		};
		class OpticsModes: OpticsModes
		{
			class Kolimator: Kolimator{};
			class IronSight: Kolimator
			{
				opticsID = 2;
				opticsFlare = 1;
				opticsDisablePeripherialVision = 0;
				memoryPointCamera = "eye";
				visionMode[] = {};
				opticsPPEffects[] = {};
			};
		};
	};
	class BP_P90_camo: BP_P90_black
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "BP_P90_camo";
		displayName = "$STR_A3_CfgWeapons_SMG_03_camo0";
		picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_camo_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_camo_co.paa"};
	};
	class BP_P90_khaki: BP_P90_black
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "BP_P90_khaki";
		displayName = "$STR_A3_CfgWeapons_SMG_03_khaki0";
		picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_khaki_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_khaki_co.paa"};
	};
	class BP_P90_hex: BP_P90_black
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "BP_P90_hex";
		displayName = "$STR_A3_CfgWeapons_SMG_03_hex0";
		picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_hex_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_hex_co.paa"};
	};
	class BP_P90C_black: BP_P90C_BASE
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "BP_P90C_black";
		scope = 2;
		displayName = "$STR_A3_CfgWeapons_SMG_03C_black0";
		picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_c_black_ca.paa";
		model = "\A3\Weapons_F_Mod\SMGs\SMG_03\SMG_03C.p3d";
		class WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] = {"BP_P90_Silencer"};
				iconPosition[] = {0.15,0.5};
				iconScale = 0.25;
			};
			mass = 40;
		};
		class OpticsModes: OpticsModes
		{
			class Kolimator: Kolimator{};
			class IronSight: Kolimator
			{
				opticsID = 2;
				opticsFlare = 1;
				opticsDisablePeripherialVision = 0;
				memoryPointCamera = "eye";
				visionMode[] = {};
				opticsPPEffects[] = {};
			};
		};
	};
	class BP_P90C_camo: BP_P90C_black
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "BP_P90C_camo";
		displayName = "$STR_A3_CfgWeapons_SMG_03C_camo0";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_camo_co.paa"};
		picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_c_camo_ca.paa";
	};
	class BP_P90C_khaki: BP_P90C_black
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "BP_P90C_khaki";
		displayName = "$STR_A3_CfgWeapons_SMG_03C_khaki0";
		picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_c_khaki_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_khaki_co.paa"};
	};
	class BP_P90C_hex: BP_P90C_black
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "BP_P90C_hex";
		displayName = "$STR_A3_CfgWeapons_SMG_03C_hex0";
		picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_c_hex_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_hex_co.paa"};
	};
	class muzzle_snds_570;
	class BP_P90_Silencer: muzzle_snds_570
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "BP_P90_Silencer";
		htMin = 1;
		htMax = 600;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		//dlc = "OfficialMod";
		scope = 2;
		displayName = "$STR_A3_cfgWeapons_muzzle_snds_570";
		picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model = "\A3\Weapons_F\acc\acca_snds_l_F.p3d";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 10;
			class MagazineCoef
			{
				initSpeed = 1.05;
			};
			class AmmoCoef
			{
				hit = 1;
				typicalSpeed = 1;
				airFriction = 1;
				visibleFire = 0.5;
				audibleFire = 0.3;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1;
			};
			soundTypeIndex = 1;
			muzzleEnd = "zaslehPoint";
			alternativeFire = "Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef = "0.8f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.1f";
				recoilCoef = "1.0f";
				recoilProneCoef = "1.0f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
		inertia = 0.2;
	};

//--------------------------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//CLASS CREATION ATTACHMENTS|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//--------------------------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	class BP_muzzle_snds_H_khk_F : muzzle_snds_H { //Sound Suppressor (6.5 mm, Khaki)
		_generalMacro = "muzzle_snds_H_khk_F";
		author = "Bohemia Interactive";
		displayName = "Sound Suppressor (6.5 mm, Khaki)";
		model = "\A3\Weapons_F_Exp\Acc\acca_snds_h_khk_F.p3d";
		picture = "\A3\Weapons_F_Exp\Acc\Data\UI\icon_muzzle_snds_H_khk_F_ca.paa";
	};
	class BP_muzzle_snds_H_snd_F : muzzle_snds_H { //Sound Suppressor (6.5 mm, Sand)
		_generalMacro = "muzzle_snds_H_snd_F";
		author = "Bohemia Interactive";
		displayName = "Sound Suppressor (6.5 mm, Sand)";
		model = "\A3\Weapons_F_Exp\Acc\acca_snds_h_snd_F.p3d";
		picture = "\A3\Weapons_F_Exp\Acc\Data\UI\icon_muzzle_snds_H_snd_F_ca.paa";
	};
	class BP_muzzle_snds_H_MG_blk_F : muzzle_snds_H_MG { //Sound Suppressor LMG (6.5 mm, Black)
		_generalMacro = "muzzle_snds_H_MG_blk_F";
		author = "Bohemia Interactive";
		displayName = "Sound Suppressor LMG (6.5 mm, Black)";
		model = "\A3\Weapons_F_Exp\Acc\acca_snds_lmg_blk_F.p3d";
		picture = "\A3\Weapons_F_Exp\Acc\Data\UI\icon_acca_snds_lmg_blk_F_ca.paa";
	};
	class BP_muzzle_snds_H_MG_khk_F : muzzle_snds_H_MG { //Sound Suppressor LMG (6.5 mm, Khaki)
		_generalMacro = "muzzle_snds_H_MG_khk_F";
		author = "Bohemia Interactive";
		displayName = "Sound Suppressor LMG (6.5 mm, Khaki)";
		model = "\A3\Weapons_F_Exp\Acc\acca_snds_lmg_khk_F.p3d";
		picture = "\A3\Weapons_F_Exp\Acc\Data\UI\icon_acca_snds_lmg_khk_F_ca.paa";
	};

	class BP_muzzle_snds_m_khk_F : BP_muzzle_snds_H_khk_F { //Sound Suppressor (5.56 mm, Khaki)
		_generalMacro = "muzzle_snds_m_khk_F";
		author = "Bohemia Interactive";
		displayName = "Sound Suppressor (5.56 mm, Khaki)";
	};
	class BP_muzzle_snds_m_snd_F : muzzle_snds_M { //Sound Suppressor (5.56 mm, Sand)
		_generalMacro = "muzzle_snds_m_snd_F";
		author = "Bohemia Interactive";
		displayName = "Sound Suppressor (5.56 mm, Sand)";
		model = "\A3\Weapons_F_Exp\Acc\acca_snds_m_snd_F.p3d";
		picture = "\A3\Weapons_F_Exp\Acc\Data\UI\icon_muzzle_snds_h_snd_F_ca.paa";
	};

	class BP_muzzle_snds_B_khk_F : BP_muzzle_snds_m_khk_F { //Sound Suppressor (7.62 mm, Khaki)
		_generalMacro = "muzzle_snds_B_khk_F";
		author = "Bohemia Interactive";
		displayName = "Sound Suppressor (7.62 mm, Khaki)";
	};
	class BP_muzzle_snds_B_snd_F : BP_muzzle_snds_m_snd_F { //Sound Suppressor (7.62 mm, Sand)
		_generalMacro = "muzzle_snds_B_snd_F";
		author = "Bohemia Interactive";
		displayName = "Sound Suppressor (7.62 mm, Sand)";
	};

	class BP_muzzle_snds_65_TI_blk_F : muzzle_snds_H { //Stealth Sound Suppressor (6.5 mm, Black)
		_generalMacro = "muzzle_snds_65_TI_blk_F";
		author = "Bohemia Interactive";
		displayName = "Stealth Sound Suppressor (6.5 mm, Black)";
		model = "\A3\Weapons_F_Exp\Acc\acca_snds_65_TI_blk_F.p3d";
		picture = "\A3\Weapons_F_Exp\Acc\Data\UI\icon_muzzle_snds_65_TI_blk_F_ca.paa";
	};
	class BP_muzzle_snds_65_TI_ghex_F : BP_muzzle_snds_65_TI_blk_F { //Stealth Sound Suppressor (6.5 mm, Green Hex)
		_generalMacro = "muzzle_snds_65_TI_ghex_F";
		author = "Bohemia Interactive";
		displayName = "Stealth Sound Suppressor (6.5 mm, Green Hex)";
		model = "\A3\Weapons_F_Exp\Acc\acca_snds_65_TI_ghex_F.p3d";
		picture = "\A3\Weapons_F_Exp\Acc\Data\UI\icon_muzzle_snds_65_TI_ghex_F_ca.paa";
	};
	class BP_muzzle_snds_65_TI_hex_F : BP_muzzle_snds_65_TI_blk_F { //Stealth Sound Suppressor (6.5 mm, Hex)
		_generalMacro = "muzzle_snds_65_TI_hex_F";
		author = "Bohemia Interactive";
		displayName = "Stealth Sound Suppressor (6.5 mm, Hex)";
		model = "\A3\Weapons_F_Exp\Acc\acca_snds_65_TI_hex_F.p3d";
		picture = "\A3\Weapons_F_Exp\Acc\Data\UI\icon_muzzle_snds_65_TI_hex_F_ca.paa";
	};

	class BP_muzzle_snds_58_blk_F : muzzle_snds_M { //Sound Suppressor (5.8 mm, Black)
		_generalMacro = "muzzle_snds_58_blk_F";
		author = "Bohemia Interactive";
		displayName = "Sound Suppressor (5.8 mm, Black)";
	};
	class BP_muzzle_snds_58_wdm_F : BP_muzzle_snds_58_blk_F { //Sound Suppressor (5.8 mm, Green Hex)
		_generalMacro = "muzzle_snds_58_wdm_F";
		author = "Bohemia Interactive";
		displayName = "Sound Suppressor (5.8 mm, Green Hex)";
		model = "\A3\Weapons_F_Exp\Acc\acca_snds_58_wdm_F.p3d";
		picture = "\A3\Weapons_F_Exp\Acc\Data\UI\icon_muzzle_snds_58_wdm_F_ca.paa";
	};

	class Zasleh2: ItemCore
	{
		scope = 2;
		model = "A3\weapons_f\data\zaslehsdl_proxy.p3d";
	};

	class BP_AK_ACO: ItemCore
	{
		scope = 2;
		displayName = "C-More Collimated optic";
		//picture = "\A3\weapons_F\Data\UI\gear_acco_Arco_CA.paa";
		model = "\A3\weapons_f\acc\acco_aco_OP_smg_F.p3d";
		descriptionShort = "";
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.010000;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 5;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class AIM
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.200000;
					opticsZoomMax = 0.500000;
					opticsZoomInit = 0.375000;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0.5;
					distanceZoomMin = 400;
					distanceZoomMax = 400;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"OpticsBlur1"};
				};
			};
		};
	};

	class BP_SOS: ItemCore
	{
		scope = 2;
		displayName = "Clearskeye Hunting Optic";
		picture = "\A3\weapons_F\Data\UI\gear_acco_Sniper_CA.paa";
		model = "\A3\Weapons_F\acc\acco_Sniper_F";
		descriptionShort = "Medium range fixed power optic";
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.050000;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 2;
			mass = 10;
			weaponInfoType = "RscWeaponRangeZeroingFOV";
			optics = 1;
			modelOptics = "\A3\Weapons_F\acc\reticle_sniper_F";
			class OpticsModes
			{
				class Snip
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {};
					opticsZoomMin = 0.040000;
					opticsZoomMax = 0.070000;
					opticsZoomInit = 0.070000;
					discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 100;
					distanceZoomMax = 800;
					discretefov[] = {0.070000, 0.040000};
					discreteInitIndex = 0;
					memoryPointCamera = "opticView";
					modelOptics[] = {"\A3\Weapons_F\acc\reticle_sniper_F", "\A3\Weapons_F\acc\reticle_sniper_z_F"};
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 0.5;
					cameraDir = "";
				};
				class Iron: Snip
				{
					opticsID = 2;
					opticsDisplayName = "";
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.375000;
					opticsZoomMax = 1.100000;
					opticsZoomInit = 0.750000;
					memoryPointCamera = "eye";
					visionMode[] = {};
					discretefov[] = {};
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};


	class BP_optic_ACOG: ItemCore
	{
		scope = 2;
		displayName = "ACOG (black)";
		picture = "\A3\weapons_F\Data\UI\gear_acco_hamr_CA.paa";
		model = "\breakingpoint_weapons\models\ACOG\BP_ACOG.p3d";
		descriptionShort = "Rifle Combat Optic (RCO)<br/>ACOG";
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.020000;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 10;
			RMBhint = "Rifle Combat Optics";
			optics = 1;
			modelOptics = "breakingpoint_weapons\scopes\Dagger_4x_acog.p3d";
			class OpticsModes
			{
				class ACOG
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera5"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.110000;
					opticsZoomMax = 0.110000;
					opticsZoomInit = 0.110000;
					memoryPointCamera = "opticView";
					distanceZoomMin = 300;
					distanceZoomMax = 300;
				};
				class Kolimator: ACOG
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.375000;
					opticsZoomMax = 1.100000;
					opticsZoomInit = 0.750000;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 100;
					distanceZoomMax = 100;
				};
			};
		};
	};

	class BP_ZF42: ItemCore
	{
		scope = 2;
		displayName = "Zeiss ZF42 Rifle Scope";
		picture = "\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
		model = "\breakingpoint_weapons\models\Zeiss\BP_Zeiss.p3d";
		descriptionShort = "Fixed 6x power German rifle scope";
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.035000;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 12;
			RMBhint = "Rifle Combat Optics";
			optics = 1;
			modelOptics = "breakingpoint_weapons\scopes\Dagger_6x_zf42.p3d";
			class OpticsModes
			{
				class ZF42
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.0450000;
					opticsZoomMax = 0.0450000;
					opticsZoomInit = 0.0450000;
					memoryPointCamera = "opticView";
					distanceZoomMin = 100;
					distanceZoomMax = 700;
					discreteDistance[] = {100,200,300,400,450,500,550,600,650,700};
					discreteDistanceInitIndex = 2;

				};
			};
		};
	};

	class BP_M3AMrad: ItemCore
	{
		scope = 2;
		displayName = "Leupold M3A MRAD Rifle Scope";
		picture = "\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
		model = "\breakingpoint_weapons\models\M3AMRAD\BP_M3AMRAD.p3d";
		descriptionShort = "Fixed-power Medium Range rifle optic with MRAD CCO";
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.035000;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 20;
			RMBhint = "Advanced Rifle Combat Optics";
			optics = 1;
			modelOptics = "\breakingpoint_weapons\scopes\bek_m3a.p3d";
			class OpticsModes
			{
				class M3A
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {};
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.025;
					opticsZoomMax = 0.025;
					opticsZoomInit = 0.025;
					discreteDistance[] = {100, 200, 300, 400, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 1000;
					discretefov[] = {0.025, 0.025}; //K9n fix - should be fixed
					discreteInitIndex = 0;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					cameraDir = "";
				};
				class MRAD: M3A
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.425000;
					opticsZoomMax = 1.100000;
					opticsZoomInit = 0.750000;
					discreteDistance[] = {50, 100, 200, 300};
					discreteDistanceInitIndex = 1;
					discretefov[] = {};
					memoryPointCamera = "eye";
					visionMode[] = {};
				};
			};
		};
	};

	class BP_flashlight: ItemCore
	{
		scope = 2;
		displayName = "Rifle Flashlight Attachment";
		descriptionUse = "Rifle Flashlight Attachment";
		picture = "\A3\weapons_F\Data\UI\gear_accv_flashlight_CA.paa";
		model = "\A3\weapons_f\acc\accv_Flashlight_F";
		descriptionShort = "Weapon mounted light attachment";
		inertia = 0.100000;
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				color[] = {1800, 1500, 1200};
				ambient[] = {0.900000, 0.780000, 0.600000};
				intensity = 40;
				size = 2;
				innerAngle = 20;
				outerAngle = 80;
				coneFadeCoef = 5;
				position = "flash dir";
				direction = "flash";
				useFlare = 1;
				flareSize = 0.400000;
				flareMaxDistance = "100.0f";
				dayLight = 1;
				class Attenuation
				{
					start = 0.500000;
					constant = 0;
					linear = 0;
					quadratic = 75;
					hardLimitStart = 20;
					hardLimitEnd = 80;
				};
				scale[] = {0};
			};
		};
	};

	class BP_PLight: acc_flashlight
	{
		scope = 2;
		mass = 5;
		displayName = "Pistol Flashlight Attachment";
		descriptionUse = "Pistol Flashlight Attachment";
		model = "\breakingpoint_weapons\models\Light\BP_PLight.p3d";
		inertia = 0.050000;
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				color[] = {1800, 1500, 1200};
				ambient[] = {9, 7.500000, 6};
				intensity = 25;
				size = 4;
				innerAngle = 20;
				outerAngle = 100;
				coneFadeCoef = 5;
				position = "flash dir";
				direction = "flash";
				useFlare = 1;
				flareSize = 1.400000;
				flareMaxDistance = "200.0f";
				dayLight = 1;
				class Attenuation
				{
					start = 0.500000;
					constant = 0;
					linear = 0;
					quadratic = 1;
					hardLimitStart = 10;
					hardLimitEnd = 120;
				};
				scale[] = {0};
			};
		};
	};

	class BP_compm4s: ItemCore
	{
		scope = 2;
		displayName = "Aimpoint CompM4 red dot";
		picture = "\A3\weapons_F\Data\UI\gear_acco_Arco_CA.paa";
		model = "\breakingpoint_weapons\models\AIM\BP_AIM.p3d";
		descriptionShort = "";
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.010000;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 5;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class AIM
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.200000;
					opticsZoomMax = 0.500000;
					opticsZoomInit = 0.275000;
					memoryPointCamera = "opticView";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0.5;
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"OpticsBlur1"};
				};
			};
		};
	};

	class BP_OldComp: ItemCore
	{
		scope = 2;
		displayName = "Old Red Dot Sight";
		picture = "\A3\weapons_F\Data\UI\gear_acco_Arco_CA.paa";
		model = "\breakingpoint_weapons\models\OldComp\BP_OldComp.p3d";
		descriptionShort = "An old Aimpoint sight with low battery";
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.010000;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 5;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class AIM
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.200000;
					opticsZoomMax = 0.500000;
					opticsZoomInit = 0.275000;
					memoryPointCamera = "opticView";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0.5;
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"OpticsBlur1"};
				};
			};
		};
	};

	class BP_m3lr: ItemCore
	{
		scope = 2;
		displayName = "Leupold TS-30A2 2.5-8x36mm Optic";
		picture = "\A3\weapons_F\Data\UI\gear_acco_Sniper_CA.paa";
		model = "\breakingpoint_weapons\models\LeupoldM3lr\BP_m3lr.p3d";
		descriptionShort = "Second focal plane MIL-dot reticle for the Mk12 SPR";
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.030000;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 2;
			mass = 10;
			optics = 1;
			modelOptics = "breakingpoint_weapons\scopes\bek_ts30.p3d";
			class OpticsModes
			{
				class m3lr
				{
					opticsID = 1;
					distanceZoomMin = 50;
					distanceZoomMax = 700;
					opticsZoomMin = 0.03125;
					opticsZoomMax = 0.1;
					opticsZoomInit = 0.1;
					opticsPPEffects[] = {};
					useModelOptics = 1;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 0.5;
					cameraDir = "";
					discreteDistance[] = {100, 200, 300, 400, 450, 500, 550, 600, 650, 700};
					discreteDistanceInitIndex = 2;
				};
				class Aim: m3lr
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0.5;
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					opticsZoomMin = 0.425000;
					opticsZoomMax = 1.100000;
					opticsZoomInit = 0.750000;
					memoryPointCamera = "eye";
					visionMode[] = {};
				};
			};
		};
	};

	class BP_EnfieldOptic2: ItemCore
	{
		scope = 2;
		displayName = "Weaver K4 Scope";
		picture = "\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
		model = "\breakingpoint_weapons\models\EnfieldOptic2\BP_Type4.p3d";
		descriptionShort = "Medium range rifle optic";
		inertia = 0.032000;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 15;
			optics = 1;
			modelOptics = "breakingpoint_weapons\scopes\Dagger_35x_No4.p3d";
			class OpticsModes
			{
				class K4
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {};
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.0625;
					opticsZoomMax = 0.0625;
					opticsZoomInit = 0.0625;
					distanceZoomMin = 50;
					distanceZoomMax = 400;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					cameraDir = "";
					discreteDistance[] = {100, 200, 300, 400};
					discreteDistanceInitIndex = 1;
				};
			};
		};
	};

	class BP_Unertl8x: ItemCore
	{
		scope = 2;
		displayName = "Unertl 8x Rifle Scope";
		picture = "\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
		model = "\breakingpoint_weapons\models\Unertl8x\BP_Unertl8x.p3d";
		descriptionShort = "Long range rifle optic for the M1903 Springfield";
		inertia = 0.050000;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 17;
			optics = 1;
			modelOptics = "breakingpoint_weapons\scopes\Dagger_8x_unt.p3d";
			class OpticsModes
			{
				class Unertl8x
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {};
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.035900;
					opticsZoomMax = 0.035900;
					opticsZoomInit = 0.035900;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					cameraDir = "";
					discreteDistance[] = {100, 200, 300, 400, 500, 550, 600, 650, 700};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 100;
					distanceZoomMax = 700;
				};
			};
		};
	};

	class BP_Unertl32x: ItemCore
	{
		scope = 2;
		displayName = "Unertl 32x Spotting Scope";
		picture = "\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
		model = "\breakingpoint_weapons\models\Unertl8x\BP_Unertl32x.p3d";
		descriptionShort = "Long range rifle optic/spotting scope<br/>Used with: Springfield M1903/AR10/Winchester Model 70/Remington Model 7";
		inertia = 0.050000;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 27;
			optics = 1;
			modelOptics = "breakingpoint_weapons\scopes\Dagger_8x_unt.p3d";
			class OpticsModes
			{
				class Unertl32x
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {};
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.008000;
					opticsZoomMax = 0.008000;
					opticsZoomInit = 0.008000;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					cameraDir = "";
					discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 850, 900, 950, 1000, 1050, 1100, 1150, 1200};
					discreteDistanceInitIndex = 6;
					distanceZoomMin = 100;
					distanceZoomMax = 1200;
				};
			};
		};
	};

	class BP_NXS: ItemCore
	{
		scope = 2;
		displayName = "Schmidt and Bender 5-25x56 PMII Rifle Scope";
		picture = "\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
		model = "\breakingpoint_weapons\models\PMII\BP_PMII.p3d";
		descriptionShort = "Extreme Variable Range rifle optic";
		inertia = 0.050000;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 2;
			mass = 20;
			weaponInfoType = "RscWeaponRangeZeroingFOV";
			optics = 1;
			modelOptics = "\breakingpoint_weapons\scopes\bek_pmii_r0.p3d";
			class OpticsModes
			{
				class Snip
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {};
					opticsZoomMin = 0.009000;
					opticsZoomMax = 0.050000;
					opticsZoomInit = 0.050000;
					discreteDistance[] = {200, 300, 400, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 1050, 1100, 1150, 1200, 1250, 1300, 1350, 1400, 1450, 1500, 1550, 1600, 1650, 1700, 1750, 1800, 1850, 1900, 1950, 2000, 2050, 2100, 2150, 2200, 2250, 2300};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 200;
					distanceZoomMax = 2300;
					discretefov[] = {0.050000, 0.016667, 0.009};
					discreteInitIndex = 0;
					memoryPointCamera = "opticView";
					modelOptics[] = {"\breakingpoint_weapons\scopes\bek_pmii_r0.p3d", "\breakingpoint_weapons\scopes\bek_pmii_r1.p3d", "\breakingpoint_weapons\scopes\bek_pmii_r2.p3d"};
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 0.5;
					cameraDir = "";
				};
			};
		};
	};

	class BP_M3A: ItemCore
	{
		scope = 2;
		displayName = "Leupold Ultra M3A 10x42mm Rifle Scope";
		picture = "\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
		model = "\breakingpoint_weapons\models\LeupoldM3A\BP_M3A.p3d";
		descriptionShort = "Fixed-power MIL-dot optic";
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.050000;
		class ItemInfo: InventoryOpticsItem_Base_F {
			opticType = 2;
			mass = 12;
			optics = 1;
			modelOptics = "\breakingpoint_weapons\scopes\bek_m3a.p3d";
			class OpticsModes
			{
				class M3A
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {};
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.025;
					opticsZoomMax = 0.025;
					opticsZoomInit = 0.025;
					discreteDistance[] = {100, 200, 300, 400, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 100;
					distanceZoomMax = 1000;
					memoryPointCamera = "eye";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					cameraDir = "";
				};
			};
		};
	};

	class BP_M3A2: BP_M3A
	{
		scope = 2;
		displayName = "Leupold Ultra M3A 10x42mm Rifle Scope (Black)";
		picture = "\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
		model = "\breakingpoint_weapons\models\LeupoldM3A\BP_M3A2.p3d";
	};

	class BP_M3AN: BP_M3A
	{
		scope = 2;
		displayName = "Leupold Ultra M3A 10x42mm Camo Rifle Scope";
		picture = "\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
		model = "\breakingpoint_weapons\models\LeupoldM3A\BP_M3AN.p3d";
	};

	class BP_MRT: ItemCore
	{
		scope = 2;
		displayName = "Leupold MRT 1.5-5x20mm Rifle Scope";
		picture = "\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
		model = "\breakingpoint_weapons\models\LeupoldMRT\BP_MRT.p3d";
		descriptionShort = "Variable power Short/Medium Range rifle optic";
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.040000;
		class ItemInfo: InventoryOpticsItem_Base_F {
			opticType = 2;
			mass = 10;
			optics = 1;
			modelOptics = "breakingpoint_weapons\scopes\Bek_MRT.p3d";
			class OpticsModes
			{
				class MRT
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {};
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.070900;
					opticsZoomMax = 0.175000;
					opticsZoomInit = 0.175000;
					discreteDistance[] = {50, 100, 200, 300, 400, 500};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 100;
					distanceZoomMax = 500;
					//discretefov[] = {0.175000, 0.070900};
					//discreteInitIndex = 0;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					cameraDir = "";
				};
			};
		};
	};

	class BP_M8: ItemCore
	{
		scope = 2;
		displayName = "Leupold M8 4x20mm Pistol Scope";
		picture = "\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
		model = "\breakingpoint_weapons\models\LeupoldM8\BP_M8.p3d";
		descriptionShort = "Fixed power Short/Medium Range pistol optic for the Smith and Wesson 44 Magnum";
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.020000;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 2;
			mass = 7;
			optics = 1;
			modelOptics = "breakingpoint_weapons\scopes\Dagger_8x_m8.p3d";
			class OpticsModes
			{
				class M8
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {};
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.070900;
					opticsZoomMax = 0.070900;
					opticsZoomInit = 0.070900;
					discreteDistance[] = {50, 100, 200};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 50;
					distanceZoomMax = 200;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					cameraDir = "";
				};
			};
		};
	};

	class BP_L14X: ItemCore
	{
		scope = 2;
		displayName = "Leupold Mark IV 4.5-14x50mm Rifle Scope";
		picture = "\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
		model = "\breakingpoint_weapons\models\Leupold14x\BP_Leupold14x.p3d";
		descriptionShort = "Leupold LR/T with TMR reticle";
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.050000;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 2;
			mass = 15;
			optics = 1;
			modelOptics = "\breakingpoint_weapons\scopes\bek_mkiv_near";
			class OpticsModes
			{
				class L14X
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {};
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.017857;
					opticsZoomMax = 0.0555556;
					opticsZoomInit = 0.0555556;
					discreteDistance[] = {100, 200, 300, 400, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 1050, 1100, 1150, 1200, 1250, 1300};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 100;
					distanceZoomMax = 1300;
					discretefov[] = {0.0555556, 0.017857};
					discreteInitIndex = 0;
					modelOptics[] = {"\breakingpoint_weapons\scopes\bek_mkiv_near.p3d", "\breakingpoint_weapons\scopes\bek_mkiv_far.p3d"};
					memoryPointCamera = "eye";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					cameraDir = "";
				};
			};
		};
	};

	class BP_VX2: ItemCore
	{
		scope = 2;
		displayName = "Leupold VX-2 4-12x40mm Rifle Scope";
		picture = "\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
		model = "\breakingpoint_weapons\models\LeupoldVX2\BP_VX2.p3d";
		descriptionShort = "Variable Medium/Long Range rifle optic";
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.070000;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 2;
			mass = 15;
			optics = 1;
			modelOptics = "breakingpoint_weapons\scopes\Dagger_8x_Duplex.p3d";
			class OpticsModes
			{
				class VX2
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {};
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.022800;
					opticsZoomMax = 0.073000;
					opticsZoomInit = 0.073000;
					discreteDistance[] = {100, 200, 300, 400, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 100;
					distanceZoomMax = 1000;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					cameraDir = "";
				};
				class Iron: VX2
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.425000;
					opticsZoomMax = 1.100000;
					opticsZoomInit = 0.750000;
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					discreteDistance[] = {};
					memoryPointCamera = "eye";
					visionMode[] = {};
				};
			};
		};
	};

	class BP_VX3: ItemCore
	{
		scope = 2;
		displayName = "Leupold VX-3 6.5-20x40mm Rifle Scope";
		picture = "\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
		model = "\breakingpoint_weapons\models\LeupoldVX3\BP_VX3.p3d";
		descriptionShort = "Variable Long Range rifle optic";
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.075000;
		class ItemInfo: InventoryOpticsItem_Base_F {
			opticType = 2;
			mass = 17;
			optics = 1;
			modelOptics = "breakingpoint_weapons\scopes\Dagger_12x_vx3.p3d";
			class OpticsModes
			{
				class VX3
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {};
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.009000;
					opticsZoomMax = 0.053000;
					opticsZoomInit = 0.053000;
					discreteDistance[] = {100, 200, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 1100, 1200, 1300, 1400, 1500, 1600};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 100;
					distanceZoomMax = 1600;
					//discretefov[] = {0.053000, 0.009000};
					//discreteInitIndex = 0;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					cameraDir = "";
				};
				class Iron: VX3
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.425000;
					opticsZoomMax = 1.100000;
					opticsZoomInit = 0.750000;
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
					//discretefov[] = {};
					memoryPointCamera = "eye";
					visionMode[] = {};
				};
			};
		};
	};

	class BP_PS22: ItemCore
	{
		scope = 2;
		displayName = "Night Vision Leupold Mark IV 4.5-14x50mm Rifle Scope";
		picture = "\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
		model = "\breakingpoint_weapons\models\LeupoldPS22\BP_PS22.p3d";
		descriptionShort = "Variable power Long Range rifle optic w/switchable Night Vision";
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.0370000;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 2;
			mass = 27;
			optics = 1;
			modelOptics = "breakingpoint_weapons\scopes\Dagger_12x_Round_Dot_Gen2.p3d";
			class OpticsModes
			{
				class PS22
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					discreteDistanceInitIndex = 1;
					opticsZoomMin = 0.017857;
					opticsZoomMax = 0.0555556;
					opticsZoomInit = 0.0555556;
					discreteDistance[] = {100, 200, 300, 400, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 1050, 1100, 1150, 1200, 1250, 1300};
					distanceZoomMin = 100;
					distanceZoomMax = 1300;
					discretefov[] = {0.0555556, 0.017857};
					discreteInitIndex = 0;
					modelOptics[] = {"\breakingpoint_weapons\scopes\bek_mkiv_near.p3d", "\breakingpoint_weapons\scopes\bek_mkiv_far.p3d"};
					visionMode[] = {"Normal", "NVG"};
					opticsPPEffects[] = {};
					opticsDisablePeripherialVision = 0.5;
					memoryPointCamera = "eye";
					opticsFlare = 1;
					cameraDir = "";
				};
			};
		};
	};

	class BP_PSO1: ItemCore
	{
		scope = 2;
		displayName = "PSO-1 4x50mm Rifle Scope";
		picture = "\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
		model = "\breakingpoint_weapons\models\PSO1\BP_PSO1.p3d";
		descriptionShort = "Fixed Power medium range rifle optic; batteries included";
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.065000;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 2;
			mass = 15;
			optics = 1;
			modelOptics = "breakingpoint_weapons\scopes\bek_pso_r0.p3d";
			class OpticsModes
			{
				class PSO1
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {};
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.062900;
					opticsZoomMax = 0.062900;
					opticsZoomInit = 0.062900;
					discreteDistance[] = {100,200,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000};//Real pso does not have 50m from 100-300
					discreteDistanceInitIndex = 2;
					modelOptics[] = {"breakingpoint_weapons\scopes\bek_pso_r0.p3d","breakingpoint_weapons\scopes\bek_pso_r1.p3d"};
					distanceZoomMin = 100;
					distanceZoomMax = 1000;
					memoryPointCamera = "opticView";
					discretefov[] = {0.062900, 0.062900};
					discreteInitIndex = 0;
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					cameraDir = "";
				};
				class Iron: PSO1
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.425000;
					opticsZoomMax = 1.100000;
					opticsZoomInit = 0.750000;
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					memoryPointCamera = "eye";
					visionMode[] = {};
				};
			};
		};
	};

	class BP_PSOP: ItemCore
	{
		scope = 2;
		displayName = "POSP 10x50mm Rifle Scope";
		picture = "\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
		model = "\breakingpoint_weapons\models\PSOP\BP_PSOP.p3d";
		descriptionShort = "Variable Long Range rifle optic";
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.000000;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 2;
			mass = 15;
			optics = 1;
			modelOptics = "\breakingpoint_weapons\models\PSOP\BP_pso3optics.p3d";//could test using PSO1 reticle
			class OpticsModes
			{
				class PSOP
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {};
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.026900;
					opticsZoomMax = 0.026900;
					opticsZoomInit = 0.026900;
					discreteDistance[] = {200,300,400,500,600,700,800,900,1000,1100,1200};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 200;
					distanceZoomMax = 1200;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					cameraDir = "";
				};
				class Iron: PSOP
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.425000;
					opticsZoomMax = 1.100000;
					opticsZoomInit = 0.750000;
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					memoryPointCamera = "eye";
					visionMode[] = {};
				};
			};
		};
	};

	class BP_PSO35: ItemCore
	{
		scope = 2;
		displayName = "PO-3.5x21P Rifle Scope";
		picture = "\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
		model = "\breakingpoint_weapons\models\PSO35\BP_PSO35.p3d";
		descriptionShort = "Fixed-power optic with 1.5m and 0.5m stadiametric rangefinders";
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.020000;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 2;
			mass = 15;
			optics = 1;
			modelOptics = "breakingpoint_weapons\scopes\bek_po35.p3d";
			class OpticsModes
			{
				class PSO35
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {};
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.07143;
					opticsZoomMax = 0.07143;
					opticsZoomInit = 0.07143;
					discreteDistance[] = {100,200,300,400};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 400;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					cameraDir = "";
				};
				class Iron: PSO35
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0.5;
					opticsZoomMin = 0.375000;
					opticsZoomMax = 1.100000;
					opticsZoomInit = 0.750000;
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					memoryPointCamera = "eye";
					visionMode[] = {};
				};
			};
		};
	};

	class BP_muzzle_snds_L: muzzle_snds_L
	{
		scope = 2;
		displayName = "$STR_A3_cfgWeapons_muzzle_snds_L0";
		picture = "\A3\weapons_F\Data\UI\gear_acca_snds_l_CA.paa";
		model = "\A3\weapons_f\acc\acca_snds_l_F";
		descriptionshort = "Standard pistol suppressor, compatible with all 9mm pistols";
		inertia = 0.100000;
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 7;
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class)
 			class MagazineCoef
			{
 				initSpeed = 1.001;
 			};
 			class AmmoCoef
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 0.1;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;
 			};
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash
 			class MuzzleCoef
			{
 				dispersionCoef = 1.0f;
 				artilleryDispersionCoef = 1.0f;
 				fireLightCoef = 0.1f;
 				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f;
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;
 			};
 		};
	};

	class BP_muzzle_snds_acp: muzzle_snds_acp
	{
	    scope = 2;
		descriptionshort = "Standard pistol suppressor, compatible with .45 Pistols";
		inertia = 0.100000;
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 8;
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class)
  			class MagazineCoef
			{
 				initSpeed = 1.001;
 			};
 			class AmmoCoef
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 0.1;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;
 			};
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash
 			class MuzzleCoef
			{
 				dispersionCoef = 1.0f;
 				artilleryDispersionCoef = 1.0f;
 				fireLightCoef = 0.1f;
 				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f;
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;
 			};
 		};
	};

	class BP_muzzle_snds_H_SN: muzzle_snds_H_MG
	{
	    scope = 2;
		displayname = "Tactical .338 Suppressor";
		descriptionshort = "High Caliber Sniper Rifle Suppressor for the AWSM";
		inertia = 0.200000;
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 20;
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class)
 			class MagazineCoef
			{
 				initSpeed = 1.001;
 			};
 			class AmmoCoef
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 0.3;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;
 			};
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash
 			class MuzzleCoef
			{
 				dispersionCoef = 1.1f;
 				artilleryDispersionCoef = 1.0f;
 				fireLightCoef = 0.1f;
 				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f;
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;
 			};
 		};
	};

	class BP_muzzle_snds_408: muzzle_snds_H_MG
	{
	    scope = 2;
		model = "\breakingpoint_weapons\models\408Sup\BP_408Sup.p3d";
		displayname = "Tactical .408 Suppressor";
		descriptionshort = "High Caliber Sniper Rifle Suppressor for the CheyTac M200 Intervention";
		inertia = 0.300000;
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 27;
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class)
 			class MagazineCoef
			{
 				initSpeed = 1.001;
 			};
 			class AmmoCoef
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 0.4;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;
 			};
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash
 			class MuzzleCoef
			{
 				dispersionCoef = 1.0f;
 				artilleryDispersionCoef = 1.0f;
 				fireLightCoef = 0.3f;
 				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f;
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;
				/*begin1[] = {"\breakingpoint_jsrs\sounds\L115A3_sd2.wav", 1.000000, 1, 900};
				begin2[] = {"\breakingpoint_jsrs\sounds\L115A3_sd3.wav", 1.000000, 1.1, 900};
				soundBegin[] = {"begin1", 0.500000, "begin2", 0.500000};*/
 			};
 		};
    };

    class BP_muzzle_snds_H: muzzle_snds_H
	{
	    scope = 2;
		displayname = "6.5mm Suppressor";
		model = "\breakingpoint_weapons\models\762sup2\BP_762Sup2.p3d";
		descriptionshort = "Standard rifle suppressor, compatible with all 6.5mm rifles";
		inertia = 0.0500000;
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 12;
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class)
 			class MagazineCoef
			{
 				initSpeed = 1.0100;
 			};
 			class AmmoCoef
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 0.15;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;
 			};
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash
 			class MuzzleCoef
			{
 				dispersionCoef = 1.2f;
 				artilleryDispersionCoef = 1.0f;
 				fireLightCoef = 0.3f;
 				recoilCoef = 0.8f;
 				recoilProneCoef = 1.0f;
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;
 			};
 		};
	};

	class BP_muzzle_snds_M: muzzle_snds_M
	{
		displayName = "KAC QDSS NT4 suppressor";
		descriptionshort = "5.56 Rifle suppressor";
		model = "\breakingpoint_weapons\models\556Sup\BP_556sup.p3d";
		inertia = 0.050000;
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 10;
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class)
 			class MagazineCoef
			{
 				initSpeed = 1.001;
 			};
 			class AmmoCoef
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 0.1;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;
 			};
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash
 			class MuzzleCoef
			{
 				dispersionCoef = 1.0f;
 				artilleryDispersionCoef = 1.0f;
 				fireLightCoef = 0.3f;
 				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f;
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;
 			};
 		};
	};

	class BP_muzzle_snds_M545: muzzle_snds_M
	{
		displayName = "PBS-5 suppressor";
		descriptionshort = "5.45 Rifle suppressor";
		model = "\breakingpoint_weapons\models\545Sup\BP_545.p3d";
		inertia = 0.050000;
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 10;
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class)
 			class MagazineCoef
			{
 				initSpeed = 1.001;
 			};
 			class AmmoCoef
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 0.1;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;
 			};
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash
 			class MuzzleCoef
			{
 				dispersionCoef = 1.0f;
 				artilleryDispersionCoef = 1.0f;
 				fireLightCoef = 0.3f;
 				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f;
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;
 			};
 		};
	};
	class BP_muzzle_snds_M12: BP_muzzle_snds_M
	{
		displayName = "OPS INC SPR Suppressor";
		descriptionShort = "Specialized 5.56 Suppressor";
		model = "\breakingpoint_weapons\models\556Sup2\BP_OPS.p3d";
		inertia = 0.100000;
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 12;
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class)
 			class MagazineCoef
			{
 				initSpeed = 1.001;
 			};
 			class AmmoCoef
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 0.1;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;
 			};
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash
 			class MuzzleCoef
			{
 				dispersionCoef = 1.0f;
 				artilleryDispersionCoef = 1.0f;
 				fireLightCoef = 0.3f;
 				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f;
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;
 			};
 		};
	};

	class BP_muzzle_snds_H_MG: muzzle_snds_H_MG
	{
		displayName = "LMG Suppressor";
		descriptionshort = "Customized for light machine guns.";
		picture = "\A3\weapons_F\Data\UI\gear_acca_snds_H_MG.paa";
		model = "\A3\Weapons_F\Machineguns\M200\lmg_suppressor";
		inertia = 0.100000;
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 20;
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class)
 			class MagazineCoef
			{
 				initSpeed = 1.001;
 			};
 			class AmmoCoef
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 0.1;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;
 			};
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash
 			class MuzzleCoef
			{
 				dispersionCoef = 1.1f;
 				artilleryDispersionCoef = 1.0f;
 				fireLightCoef = 0.3f;
 				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f;
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;
 			};
 		};
    };

	class BP_22Sup: muzzle_snds_B
	{
		displayName = ".22 Suppressor";
		descriptionshort = "Standard hunting rifle suppressor, compatible with CZ-455 Varmint.";
		picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model = "\breakingpoint_weapons\models\22Sup\22Sup.p3d";
		inertia = 0.100000;
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 10;
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class)
 			class MagazineCoef
			{
 				initSpeed = 1.001;
 			};
 			class AmmoCoef
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 0.01;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;
 			};
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash
 			class MuzzleCoef
			{
 				dispersionCoef = 1.0f;
 				artilleryDispersionCoef = 1.0f;
 				fireLightCoef = 0.1f;
 				recoilCoef = 0.7f;
 				recoilProneCoef = 0.7f;
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;
				/*begin1[] = {"A3\sounds_f\weapons\pistols\walter_st_1.wss", 0.600000, 1.2, 300};
				begin2[] = {"A3\sounds_f\weapons\pistols\walter_st_2.wss", 0.600000, 1.2, 300};
				begin3[] = {"A3\sounds_f\weapons\pistols\walter_st_2.wss", 0.600000, 1.2, 300};
				soundBegin[] = {"begin1", 0.330000, "begin2", 0.330000, "begin3", 0.340000};*/
 			};
 		};
	};

    class BP_muzzle_snds_B: muzzle_snds_B
	{
		displayName = "7.62mm Suppressor";
		descriptionshort = "Standard battle rifle suppressor, compatible with semi-auto 7.62mm rifles.";
		picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model = "\breakingpoint_weapons\models\762Sup\762Sup.p3d";
		inertia = 0.200000;
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 13;
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class)
 			class MagazineCoef
			{
 				initSpeed = 1.001;
 			};
 			class AmmoCoef
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 0.2;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;
 			};
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash
 			class MuzzleCoef
			{
 				dispersionCoef = 1.2f;
 				artilleryDispersionCoef = 1.0f;
 				fireLightCoef = 0.3f;
 				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f;
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;
 			};
 		};
	};

	class BP_762Sup2: BP_muzzle_snds_B
	{
		displayName = "7.62mm Marksman Suppressor";
		descriptionshort = "Custom sniper rifle suppressor, compatible with bolt-action 7.62mm rifles.";
		picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model = "\breakingpoint_weapons\models\762Sup\762Sup.p3d";
		inertia = 0.220000;
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 17;
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class)
 			class MagazineCoef
			{
 				initSpeed = 1.005;
 			};
 			class AmmoCoef
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 0.2;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;
 			};
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash
 			class MuzzleCoef
			{
 				dispersionCoef = 1.3f;
 				artilleryDispersionCoef = 1.0f;
 				fireLightCoef = 0.3f;
 				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f;
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;
 			};
 		};
	};

	class BP_300Sup: BP_muzzle_snds_B
	{
		displayName = ".300 Suppressor";
		descriptionshort = "Custom .300 Rifle Suppressor, compatible with M24A2/CZ-HA550.";
		picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model = "\breakingpoint_weapons\models\300Sup\300Sup.p3d";
		inertia = 0.220000;
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 15;
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class)
 			class MagazineCoef
			{
 				initSpeed = 1.01;
 			};
 			class AmmoCoef
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 0.2;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;
 			};
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash
 			class MuzzleCoef
			{
 				dispersionCoef = 1.0f;
 				artilleryDispersionCoef = 1.0f;
 				fireLightCoef = 0.3f;
 				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f;
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;
				/*begin1[] = {"\breakingpoint_jsrs\sounds\M24SD_s4.wav", 1.000000, 1, 700};
				begin2[] = {"\breakingpoint_jsrs\sounds\M24SD_s5.wav", 1.000000, 1, 700};
				begin3[] = {"\breakingpoint_jsrs\sounds\M24SD_s6.wav", 1.000000, 0.9, 700};
				begin4[] = {"\breakingpoint_jsrs\sounds\M24SD_s7.wav", 1.000000, 0.9, 700};
				soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000, "begin3", 0.250000, "begin4", 0.250000};*/
 			};
 		};
	};

    class BP_gemtech9 : BP_muzzle_snds_L
	{
		scope = 2;
		displayName = "9mm Suppressor";
		inertia = 0.100000;
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 15;
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class)
 			class MagazineCoef
			{
 				initSpeed = 1.001;
 			};
 			class AmmoCoef
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 0.1;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;
 			};
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash
 			class MuzzleCoef
			{
 				dispersionCoef = 1.0f;
 				artilleryDispersionCoef = 1.0f;
 				fireLightCoef = 0.3f;
 				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f;
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;
 			};
 		};
	};

	class BP_gemtech45: BP_muzzle_snds_acp
	{
		scope = 2;
		displayName = ".45 Suppressor";
		descriptionshort = "Custom .45 Suppressor";
		inertia = 0.100000;
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 15;
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class)
 			class MagazineCoef
			{
 				initSpeed = 1.001;
 			};
 			class AmmoCoef
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 0.1;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;
 			};
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash
 			class MuzzleCoef
			{
 				dispersionCoef = 1.0f;
 				artilleryDispersionCoef = 1.0f;
 				fireLightCoef = 0.3f;
 				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f;
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;
 			};
 		};
	};

	class BP_m9qd : BP_muzzle_snds_L
	{
		scope = 2;
		displayName = "Tactical QD Suppressor";
		descriptionShort = "Specialized tactical sound suppressor";
		picture = "\A3\weapons_F\Data\UI\gear_acca_snds_l_CA.paa";
		model = "\breakingpoint_weapons\models\M9QD\M9QD.p3d";
		inertia = 0.100000;
		class ItemInfo: InventoryMuzzleItem_Base_F {
			mass = 10;
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class)
 			class MagazineCoef
			{
 				initSpeed = 1.001;
 			};
 			class AmmoCoef
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 0.1;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;
 			};
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash
 			class MuzzleCoef
			{
 				dispersionCoef = 1.0f;
 				artilleryDispersionCoef = 1.0f;
 				fireLightCoef = 0.3f;
 				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f;
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;
 			};
 		};
	};

	class BP_Mk12Sup : BP_m9qd
	{
		displayName = "Mk12 DELTA 9mm Suppressor";
		descriptionShort = "Specialized tactical sound suppressor";
		picture = "\A3\weapons_F\Data\UI\gear_acca_snds_l_CA.paa";
		model = "\breakingpoint_weapons\models\M9\Mk12Sup.p3d";
		inertia = 0.150000;
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 10;
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class)
 			class MagazineCoef
			{
 				initSpeed = 1.001;
 			};
 			class AmmoCoef
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 0.1;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;
 			};
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash
 			class MuzzleCoef
			{
 				dispersionCoef = 1.0f;
 				artilleryDispersionCoef = 1.0f;
 				fireLightCoef = 0.3f;
 				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f;
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;
 			};
 		};
    };

	class BP_suppr9 : BP_muzzle_snds_L
	{
		displayName = "Osprey .45 Suppressor";
		descriptionShort = "Modern suppressor designed for the FNP Tac45";
		picture = "\A3\weapons_F\Data\UI\gear_acca_snds_l_CA.paa";
		model = "\A3\weapons_f\acc\acca_snds_osprey_F.p3d";
		inertia = 0.100000;
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 8;
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class)
 			class MagazineCoef
			{
 				initSpeed = 1.001;
 			};
 			class AmmoCoef
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 0.1;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;
 			};
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash
 			class MuzzleCoef
			{
 				dispersionCoef = 1.0f;
 				artilleryDispersionCoef = 1.0f;
 				fireLightCoef = 0.1f;
 				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f;
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;
 			};
 		};
	};

	class BP_762Muzzle: BP_muzzle_snds_B
	{
		displayName = "7.62 Muzzle Brake";
		descriptionshort = "Recoil reducing muzzle attachment";
		picture = "\breakingpoint_weapons\icons\M24integral_co.paa";
		model = "\breakingpoint_weapons\models\762MB\BP_762MB.p3d";
		inertia = 0.100000;
		class ItemInfo: InventoryMuzzleItem_Base_F {
			mass = 15;
 			soundTypeIndex = 2; // index of sound in sounds[] in weapon modes (inherited 1 from parent class)
 			class MagazineCoef
			{
 				initSpeed = 1.001;
 			};
 			class AmmoCoef
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 1.2;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;
 			};
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash
 			class MuzzleCoef
			{
 				dispersionCoef = 0.9f;
 				artilleryDispersionCoef = 1.0f;
 				fireLightCoef = 1.3f;
 				recoilCoef = 0.5f;
 				recoilProneCoef = 0.4f;
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;

 			};
 		};
	};

	class BP_CZmod_br: ItemCore
	{
		scope = 2;
		displayName = "CZ Precision Barrel";
		descriptionshort = "A precision heavy forged barrel for the 30-06 CZ rifles<br/>Improved accuracy and power";
		picture = "\breakingpoint_weapons\icons\CZMod_co.paa";
		model = "\breakingpoint_weapons\models\CZB\CZB.p3d";
		inertia = 0.100000;
		class ItemInfo: InventoryMuzzleItem_Base_F {
			mass = 17;
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class)
 			class MagazineCoef
			{
 				initSpeed = 1.001;
 			};
 			class AmmoCoef
			{
 				hit = 1.0200;
 				visibleFire = 0.3;
 				audibleFire = 1.2;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;
 			};
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash
 			class MuzzleCoef
			{
 				dispersionCoef = 0.015f;
 				artilleryDispersionCoef = 1.0f;
 				fireLightCoef = 1.2f;
  				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f;
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;
 			};
 		};
	};

	class BP_CZSup_br: ItemCore
	{
		scope = 2;
		displayName = "CZ Precision Barrel w/Suppressor";
		descriptionshort = "A precision heavy forged barrel with attached Suppressor for the 30-06 CZ rifles<br/>Improved accuracy and power with quiet performance";
		picture = "\breakingpoint_weapons\icons\CZMod_co.paa";
		model = "\breakingpoint_weapons\models\CZSup\CZSup.p3d";
		inertia = 0.150000;
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 20;
 			soundTypeIndex = 2; // index of sound in sounds[] in weapon modes (inherited 1 from parent class)
 			class MagazineCoef
			{
 				initSpeed = 1.001;
 			};
 			class AmmoCoef
			{
 				hit = 1.0010;
 				visibleFire = 0.3;
 				audibleFire = 0.2;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;
 			};
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash
 			class MuzzleCoef
			{
 				dispersionCoef = 0.030f;
 				artilleryDispersionCoef = 1.0f;
 				fireLightCoef = 0.3f;
 				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f;
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;
 			};
 		};
	};

	class BP_CZst_br: ItemCore
	{
		scope = 2;
		displayName = "CZ Standard Barrel";
		descriptionshort = "A standard forged barrel for the 30-06 CZ rifles";
		picture = "\breakingpoint_weapons\icons\CZMod_co.paa";
		model = "\breakingpoint_weapons\models\CZS\CZS.p3d";
		inertia = 0.000000;
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 10;
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class)
 			class MagazineCoef
			{
 				initSpeed = 1.000;
 			};
 			class AmmoCoef
			{
 				hit = 1.0000;
 				visibleFire = 1.0;
 				audibleFire = 1.0;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;
 			};
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash
 			class MuzzleCoef
			{
 				dispersionCoef = 0.04f;
 				artilleryDispersionCoef = 1.0f;
 				fireLightCoef = 1.0f;
 				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f;
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;
 			};
 		};
	};

	class BP_CZol_br: ItemCore
	{
		scope = 2;
		displayName = "CZ Old Barrel";
		descriptionshort = "An old poorly maintained barrel for the 30-06 CZ rifles";
		picture = "\breakingpoint_weapons\icons\CZMod_co.paa";
		model = "\breakingpoint_weapons\models\CZO\CZO.p3d";
		inertia = 0.100000;
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 10;
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class)
 			class MagazineCoef
			{
 				initSpeed = 0.9000;
 			};
 			class AmmoCoef
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 1.0;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;
 			};
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash
 			class MuzzleCoef {
 				dispersionCoef = 0.1f;
 				artilleryDispersionCoef = 1.0f;
 				fireLightCoef = 1.3f;
 				recoilCoef = 1.1f;
 				recoilProneCoef = 1.1f;
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;
 			};
 		};
	};

	class BP_R7S: ItemCore
	{
		scope = 2;
		displayName = "Standard .223 Barrel";
		descriptionshort = "A standard forged barrel for the Remington Model Seven rifles";
		picture = "\breakingpoint_weapons\icons\CZMod_co.paa";
		model = "\breakingpoint_weapons\models\Win70\BP_7BS.p3d";
		inertia = 0.100000;
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 10;
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class)
 			class MagazineCoef
			{
 				initSpeed = 1.000;
 			};
 			class AmmoCoef
			{
 				hit = 1.0000;
 				visibleFire = 0.3;
 				audibleFire = 1.0;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;
 			};
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash
 			class MuzzleCoef
			{
 				dispersionCoef = 0.01f;
 				artilleryDispersionCoef = 1.0f;
 				fireLightCoef = 1.0f;
 				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f;
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;
 			};
 		};
	};

	class BP_R7P: ItemCore
	{
		scope = 2;
		displayName = "Precision .223 Barrel w/muzzle brake";
		descriptionshort = "A heavy forged barrel for the Remington Model Seven rifles";
		picture = "\breakingpoint_weapons\icons\CZMod_co.paa";
		model = "\breakingpoint_weapons\models\Win70\BP_7BP.p3d";
		inertia = 0.100000;
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 15;
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class)
 			class MagazineCoef
			{
 				initSpeed = 1.001;
 			};
 			class AmmoCoef
			{
 				hit = 1.0010;
 				visibleFire = 0.3;
 				audibleFire = 1.1;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;
 			};
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash
 			class MuzzleCoef
			{
 				dispersionCoef = 0.005f;
 				artilleryDispersionCoef = 1.0f;
 				fireLightCoef = 1.3f;
 				recoilCoef = 0.7f;
 				recoilProneCoef = 0.7f;
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;
 			};
 		};
	};

	class BP_R7Sup: ItemCore
	{
		scope = 2;
		displayName = "Precision .223 Barrel w/superssor";
		descriptionshort = "A heavy forged barrel with suppressor for the Remington Model Seven rifles";
		picture = "\breakingpoint_weapons\icons\CZMod_co.paa";
		model = "\breakingpoint_weapons\models\Win70\BP_7BP.p3d";
		inertia = 0.100000;
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 15;
 			soundTypeIndex = 2; // index of sound in sounds[] in weapon modes (inherited 1 from parent class)
 			class MagazineCoef
			{
 				initSpeed = 1.001;
 			};
 			class AmmoCoef
			{
 				hit = 1.0010;
 				visibleFire = 0.3;
 				audibleFire = 0.01;
 				visibleFireTime = 0.5;
 				audibleFireTime = 0.1;
 				cost = 1.0;
 				typicalSpeed = 0.8;
 				airFriction = 1.0;
 			};
 			muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
 			alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash
 			class MuzzleCoef
			{
 				dispersionCoef = 0.005f;
 				artilleryDispersionCoef = 1.0f;
 				fireLightCoef = 1.3f;
 				recoilCoef = 0.7f;
 				recoilProneCoef = 0.7f;
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;
 			};
 		};
	};

	class BP_Wire: ItemCore
	{
		scope = 2;
		displayName = "Barbed Wire";
		descriptionshort = "A snarled bundle of barbed wire";
		picture = "\breakingpoint_weapons\icons\CZMod_co.paa";
		model = "\breakingpoint_weapons\models\hatchet\BP_wire.p3d";
		inertia = 0.000000;
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 10;
 			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class)
 			class MagazineCoef
			{
 				initSpeed = 1.001;
 			};
 			class AmmoCoef
			{
 				hit = 1.5000;
 				visibleFire = 0.3;
 				audibleFire = 0.01;
 				visibleFireTime = 0.5;
 				audibleFireTime = 1.0;
 				cost = 1.0;
 				typicalSpeed = 1.0;
 				airFriction = 1.0;
 			};
 			muzzleEnd = ""; // memory point in muzzle supressor's model
 			alternativeFire = "";  // class in cfgWeapons with model of muzzle flash
 			class MuzzleCoef
			{
 				dispersionCoef = 1.0f;
 				artilleryDispersionCoef = 1.0f;
 				fireLightCoef = 1.0f;
 				recoilCoef = 1.0f;
 				recoilProneCoef = 1.0f;
 				minRangeCoef = 1.0f;
				minRangeProbabCoef = 1.0f;
 				midRangeCoef = 1.0f;
				midRangeProbabCoef = 1.0f;
 				maxRangeCoef = 1.0f;
				maxRangeProbabCoef = 1.0f;
 			};
 		};
	};

	class BP_Bipod: ItemCore
	{
		scope = 2;
		displayName = "Harris Bipod";
		descriptionshort = "Stabilizing rifle attachment </br> Drastically reduced recoil when prone and increased overall weapon stability";
		picture = "\breakingpoint_weapons\icons\HarrisBipod_co.paa";
		model = "\breakingpoint_weapons\models\Harris\BP_Harris.p3d";
		inertia = -0.200000;
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 45;
 			soundTypeIndex = 0; // index of sound in sounds[] in weapon modes (inherited 1 from parent class)
 			class MuzzleCoef
			{
 				dispersionCoef = 0.9000f;
 				recoilCoef = 1.0f;//bipods should reduce recoil, change this with testing
 				recoilProneCoef = 0.3f;
 			};
 		};
	};

	/*class BP_Bayonet: ItemCore {
		scope = 2;
		displayName = "USMC Bayonet";
		descriptionshort = "Standard bayonet attachment for close quarters combat";
		picture = "\breakingpoint_weapons\icons\CZMod_co.paa";
		model = "\breakingpoint_weapons\models\Bayonet\BP_Bayonet.p3d";
		class ItemInfo: Iteminfo {
			mass = 12;
			muzzles[] = {"Bayonet"};
			class Bayonet: UGL_F {
				magazines[] = {"BP_Bayonet_Stab"};
				sound[] = {"breakingpoint_sfx\effects\Swing.wav", 1.994328, 0.95, 10};
				reloadMagazineSound[] = {"", 0.501187, 1, 20};
				drySound[] = {"", 1.000000, 1, 30};
				magazineReloadTime = 0;
				autoReload = 1;
				reloadTime = 0.100000;
				optics = 1;
				modelOptics = "-";
				cameraDir = "";
				memoryPointCamera = "eye";
				opticsZoomMin = 0.375000;
				opticsZoomMax = 1.100000;
				opticsZoomInit = 0.750000;
				weaponInfoType = "RscWeaponZeroing";
			};
		};
	};*/

	class BP_CQCKnife : ItemCore
	{
		scope = 2;
		displayName = "KA-BAR Combat Knife Mountable";
		descriptionUse = "KA-BAR Combat Knife";
		model = "\breakingpoint\models\bp_knifecqc.p3d";
		picture = "\breakingpoint\textures\icons\bp_knife_ca.paa";
		descriptionShort = "Standard USMC combat knife, mountable";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 5;
		};
	};

	class BP_CPad : ItemCore
	{
		scope = 2;
		inertia = -0.200000;
		displayName = "Saddle Cheekpiece";
		descriptionUse = "Saddle Cheekpiece";
		model = "\breakingpoint_weapons\models\Cheekpiece\bp_cheek.p3d";
		picture = "\breakingpoint_weapons\icons\m_cheek_ca.paa";
		descriptionShort = "Stock mounted cheekpiece for increased aiming stability";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 15;
		};
	};

	class BP_AFG : ItemCore
	{
		scope = 2;
		inertia = -0.230000;
		displayName = "Angled Foregrip";
		descriptionUse = "Angled Foregrip";
		model = "\breakingpoint_weapons\models\AFG\bp_afg.p3d";
		picture = "\breakingpoint_weapons\icons\m_afg_ca.paa";
		descriptionShort = "Rail mounted foregrip for increased weapon stability";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 10;
		};
	};

	class BP_AFG2 : ItemCore
	{
		scope = 2;
		inertia = -0.230000;
		displayName = "Angled Foregrip TEST";
		descriptionUse = "Angled Foregrip";
		model = "\breakingpoint_weapons\models\AFG\bp_afg.p3d";
		picture = "\breakingpoint_weapons\icons\m_afg_ca.paa";
		descriptionShort = "Rail mounted foregrip for increased weapon stability";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 10;

			class MuzzleCoef {
 				dispersionCoef = 12.9000f;
 				recoilCoef = 10.0f;
 				recoilProneCoef = 0.1f;

 			};
		};
	};

	class BP_Handle : ItemCore
	{
		scope = 2;
		inertia = 0.1000;
		displayName = "M4 Carry Handle";
		descriptionUse = "M4 Carry Handle";
		model = "\breakingpoint_weapons\models\Handle\bp_handle.p3d";
		picture = "\breakingpoint_weapons\icons\m_handle_ca.paa";
		descriptionShort = "Rail mounted carry handle with ironsight for M4A1";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 10;
			optics = 1;
			modelOptics = "\A3\Weapons_F_Beta\acc\acco_arco_F.p3d";
			class OpticsModes
			{
				class Handle
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.375000;
					opticsZoomMax = 1.100000;
					opticsZoomInit = 0.750000;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					cameraDir = "";
				};
			};
		};
	};

	class BP_Harris: ItemCore
    {
	    scope = 2;
	    displayName = "Light Bipod";
		descriptionShort = "Bipod for intermediate Rifle use";
	    picture = "\A3\Weapons_F_Mark\Data\UI\gear_accu_bipod_01_snd_CA.paa";
	    model = "\breakingpoint_weapons\models\Harris\BP_Harris.p3d";

	    class ItemInfo: InventoryUnderItem_Base_F
	    {
		    deployedPivot = "bipod";
		    hasBipod = true;
		    mass = 15;
		    soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down",db-3, 1, 20};
		    soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up",db-3, 1, 20};
	    };
		inertia = 0.1;
    };

	class BP_Harris2: ItemCore
    {
	    scope = 2;
	    displayName = "Heavy Bipod";
		descriptionShort = "Bipod for LMG and Sniper applications";
	    picture = "\A3\Weapons_F_Mark\Data\UI\gear_accu_bipod_01_snd_CA.paa";
	    model = "\breakingpoint_weapons\models\Harris\BP_Harris2.p3d";

	    class ItemInfo: InventoryUnderItem_Base_F
	    {
		    deployedPivot = "bipod";
		    hasBipod = true;
		    mass = 30;
		    soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down",db-3, 1, 20};
		    soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up",db-3, 1, 20};
	    };
		inertia = 0.25;
    };

	class BP_GhillieWL : ItemCore
	{
		scope = 2;
		displayName = "Woodland Rifle Ghillie Camo";
		descriptionUse = "Woodland Ghillie Camo";
		model = "\breakingpoint_weapons\models\GhillieWL\BP_GhillieWL.p3d";
		picture = "\breakingpoint_weapons\icons\ghilliewl_ca.paa";
		descriptionShort = "Rifle Ghillie camo";
		inertia = 0.050000;
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 25;
		};
	};

	class BP_GhillieDes : ItemCore
	{
		scope = 2;
		displayName = "Desert Ghillie Camo";
		descriptionUse = "Desert Ghillie Camo";
		model = "\breakingpoint_weapons\models\GhillieDes\BP_GhillieDes.p3d";
		picture = "\breakingpoint_weapons\icons\ghilliedes_ca.paa";
		descriptionShort = "Rifle Ghillie camo";
		inertia = 0.050000;
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 25;
		};
	};

	class BP_GhillieSnw : ItemCore
	{
		scope = 2;
		displayName = "Winter Ghillie Camo";
		descriptionUse = "Winter Ghillie Camo";
		model = "\breakingpoint_weapons\models\GhillieWint\BP_GhillieWint.p3d";
		picture = "\breakingpoint\textures\icons\gear_ghilliesnw_ca.paa";
		descriptionShort = "Rifle Ghillie camo";
		inertia = 0.050000;
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 25;
		};
	};
};

//--------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//CLASS CREATION MAGS|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//--------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

class CfgMagazines {
	class Default;	// External class reference
	class CA_Magazine;	// External class reference
	class BP_Magazine;  // External class reference
	class CA_LauncherMagazine;
	class ATMine_Range_Mag;
	class Chemlight_green;
	class Chemlight_red;
	class Chemlight_blue;
	class Chemlight_yellow;
	class 30Rnd_556x45_Stanag;
	class 10Rnd_762x51_Mag;
	class 11Rnd_45ACP_Mag;
	class 150Rnd_762x51_Box;
	class 150Rnd_762x51_Box_Tracer;
	class 200Rnd_65x39_Belt;
	class 200Rnd_65x39_Belt_Tracer_Green;
	class 200Rnd_65x39_Belt_Tracer_Red;
	class 200Rnd_65x39_Belt_Tracer_Yellow;
	class 100Rnd_65x39_caseless_mag;
	class 100Rnd_127x99_mag;
	class 20Rnd_556x45_UW_mag;
	class 20Rnd_762x51_Mag;
	class 30Rnd_45ACP_Mag_SMG_01;
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Green;
	class 30Rnd_556x45_Stanag_Tracer_Green;
	class 30Rnd_556x45_Stanag_Tracer_Red;
	class 30Rnd_556x45_Stanag_Tracer_Yellow;
	class 30Rnd_65x39_caseless_green;
	class 30Rnd_65x39_caseless_green_mag_Tracer;
	class 30Rnd_65x39_caseless_mag;
	class 30Rnd_65x39_caseless_mag_Tracer;
	class 16Rnd_9x21_Mag;
	class 30Rnd_9x21_Mag;
	class 5Rnd_127x108_APDS_Mag;
	class 5Rnd_127x108_Mag;
	class 6Rnd_45ACP_Cylinder;
	class 7Rnd_408_Mag;
	class 9Rnd_45ACP_Mag;
	class RPG32_F;
	class RPG32_HE_F;
	class NLAW_F;
	class Titan_AT;
	class Titan_AP;
	class Titan_AA;

	/*
		Magazines: Tin Cans
	*/

	class HandGrenade;	// External class reference
	class TrashJackDaniels : HandGrenade {};
	class TrashTinCan : HandGrenade {};
	class ItemSodaEmpty : HandGrenade {};

	class ChemG: Chemlight_green
	{
		mass = 5;
	};

	class ChemR: Chemlight_red
	{
		mass = 5;
	};

	class ChemY: Chemlight_yellow
	{
		mass = 5;
	};

	class ChemB: Chemlight_blue
	{
		mass = 5;
	};

	class Hatchet_Swing : CA_Magazine
	{
		scope = 2;
		autoReload = 0;
		flash = "";
		flashSize = 0;
		initSpeed = 85;
		maxLeadSpeed = 20;
		picture = "\breakingpoint_weapons\icons\m_satchel_ca.paa";
		//modelSpecial = "\breakingpoint_weapons\models\Hatchet\BP_hatchet_loaded.p3d";
		displayName = "Hatchet Swing";
		displayNameMagazine = "Hatchet Swing";
		shortNameMagazine = "Hatchet Swing";
		count = 100000;
		ammo = "BP_Hatchet_Swing_Ammo";
		mass = 0;
	};

	class Katana_Swing : Hatchet_Swing
	{
		displayName = "Katana Swing";
		displayNameMagazine = "Katana Swing";
		shortNameMagazine = "Katana Swing";
		ammo = "BP_Katana_Swing_Ammo";
	};

	class Pickaxe_Swing : Hatchet_Swing
	{
		displayName = "Pickaxe Swing";
		displayNameMagazine = "Pickaxe Swing";
		shortNameMagazine = "Pickaxe Swing";
		ammo = "BP_Pickaxe_Swing_Ammo";
	};

	class Hammer_Swing : Hatchet_Swing
	{
		displayName = "Hammer Swing";
		displayNameMagazine = "Hammer Swing";
		shortNameMagazine = "Hammer Swing";
		ammo = "BP_Hammer_Swing_Ammo";
	};

	class Hammer_Swing2 : Hatchet_Swing
	{
		displayName = "Modified Hammer Swing";
		displayNameMagazine = "Hammer Swing";
		shortNameMagazine = "Hammer Swing";
		ammo = "BP_Hammer_Swing_Ammo2";
	};

	class Shovel_Swing: Hatchet_Swing
	{
		displayName = "Shovel Swing";
		displayNameMagazine = "Shovel Swing";
		shortNameMagazine = "Shovel Swing";
		ammo = "BP_Shovel_Swing_Ammo";
	};

	class BP_Bayonet_Stab : Hatchet_Swing
	{
		displayName = "Stab";
		displayNameMagazine = "Stab";
		shortNameMagazine = "Stab";
		selectionFireAnim = "";
		initSpeed = 85;
		ammo = "BP_Bayonet";
	};

	class BP_Rifle_Butt : Hatchet_Swing
	{
		displayName = "Rifle Melee";
		displayNameMagazine = "Rifle Melee";
		shortNameMagazine = "Rifle Melee";
		selectionFireAnim = "";
		initSpeed = 85;
		ammo = "BP_Rifle_Melee";
	};

	class BP_Arrow_Mag: CA_Magazine
	{
		scope = 2;
		displayName = "Boarhead Bolt";
		picture = "\breakingpoint_weapons\icons\m_arrow_ca.paa"; //add different pics for each type
		mass = 1;
		ammo = "BP_Arrow_Ball";
		model = "\breakingpoint_weapons\models\crossbow\arrow.p3d";
		count = 1;
		initSpeed = 325;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		descriptionShort = "Classic boarhead hunting bolt for PSE TAC Elite Crossbow";
	};

	class BP_Arrow_Tranq: CA_Magazine
	{
		scope = 2;
		displayName = "Tranq Bolt";
		picture = "\breakingpoint_weapons\icons\m_arrow_t_ca.paa";
		mass = 1;
		ammo = "BP_Arrow_Ball_Tranq";
		model = "\breakingpoint_weapons\models\crossbow\arrow.p3d";
		count = 1;
		initSpeed = 325;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		descriptionShort = "Tranq tipped hunting bolt for PSE TAC Elite Crossbow";
	};

	class BP_Arrow_Poison: CA_Magazine
	{
		scope = 2;
		displayName = "Poison Bolt";
		picture = "\breakingpoint_weapons\icons\m_arrow_p_ca.paa";
		mass = 1;
		ammo = "BP_Arrow_Ball_Poison";
		model = "\breakingpoint_weapons\models\crossbow\arrow.p3d";
		count = 1;
		initSpeed = 325;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		descriptionShort = "Poison tipped hunting bolt for PSE TAC Elite Crossbow";
	};

	class BP_Arrow_Rambo: CA_Magazine
	{
		scope = 2;
		displayName = "Rambo Bolt";
		picture = "\breakingpoint_weapons\icons\m_arrow_r_ca.paa";
		mass = 1.3;
		ammo = "BP_Arrow_Ball_Rambo";
		model = "\breakingpoint_weapons\models\crossbow\arrow.p3d";
		count = 1;
		initSpeed = 290;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		descriptionShort = "Explosive tipped hunting bolt for PSE TAC Elite Crossbow";
	};

	class BP_Arrow_Fire: CA_Magazine
	{
		scope = 2;
		displayName = "Fire Bolt";
		picture = "\breakingpoint_weapons\icons\m_arrow_p_ca.paa";
		mass = 1;
		ammo = "BP_Arrow_Ball_Fire";
		model = "\breakingpoint_weapons\models\crossbow\arrow.p3d";
		count = 1;
		initSpeed = 325;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		descriptionShort = "Explosive Fire tipped hunting bolt for PSE TAC Elite Crossbow";
	};

	class BP_M84_Flash: HandGrenade
	{
		author = "Breaking Point";
		model = "\breakingpoint_weapons\models\m84\m84.p3d";
		displayName = "M84 Flashbang";
		picture = "\breakingpoint_weapons\icons\m_m84_r_ca.paa";
		displayNameShort = "Flashbang";
		ammo = "BP_Flashbang_Ammo";
		mass = 5;
	};
	class BP_AlarmClock_Black: HandGrenade
	{
		author = "Breaking Point";
		model = "\breakingpoint_weapons\models\AlarmClock\BP_AlarmClock.p3d";
		displayName = "Alarm Clock(Black)";
		picture = "\breakingpoint_weapons\icons\m_AlarmClock_r_ca.paa";
		displayNameShort = "Alarm Clock";

		descriptionShort = "";
		ammo = "BP_AlarmClock_Ammo";
		type = 256;
		mass = 2;
		scope = 3;
		value = 1;
		maxLeadSpeed = 7;
		initSpeed = 18;
		namesound = "empty";
		count = 1;
	};
	class BP_AlarmClock_Red: BP_AlarmClock_Black {
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\AlarmClock\AlarmClockRed_co.paa"};
		displayName = "Alarm Clock(Red)";
	};
	class 1Rnd_HE_Grenade_shell;
	class BP_1Rnd_40mm_Flashbang: 1Rnd_HE_Grenade_shell
	{
		author = "Breaking Point";
		displayName = "1Rnd 40mm Flashbang";
		displayNameShort = "1Rnd GL Flashbang";
		descriptionShort = "Flashbang";
		ammo = "BP_GL_Flashbang_Ammo";
	};
	/*
		Magazines: Guns
	*/

	class BP_10Rnd_50BW_Mag_F : CA_Magazine { //["Default"]
		ammo = "BP_50BW_Ball_F";
		author = "Bohemia Interactive";
		count = 10;
		descriptionShort = "Caliber: .50 BW<br />Rounds: 10<br />Used in: Type 115";
		displayName = ".50 BW 10Rnd Mag";
		initSpeed = 580;
		lastRoundsTracer = 0;
		mass = 12;
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_10Rnd_50BW_Mag_F_ca.paa";
		scope = 2;
		tracersEvery = 0;
	};

	class BP_30Rnd_545x39_Mag_F : CA_Magazine { //5.45 mm 30Rnd Mag
		ammo = "BP_B_545x39_Ball_F";
		author = "Bohemia Interactive";
		count = 30;
		descriptionShort = "Caliber: 5.45x39 mm<br />Rounds: 30<br />Used in: AKS-74U";
		displayName = "5.45 mm 30Rnd Reload Tracer (Yellow) Mag";
		initSpeed = 735;
		lastRoundsTracer = 4;
		mass = 8;
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_545x39_Mag_F_ca.paa";
		scope = 2;
		tracersEvery = 0;
	};
	class BP_30Rnd_545x39_Mag_Green_F : BP_30Rnd_545x39_Mag_F { //5.45 mm 30Rnd Tracer (Green) Mag
		ammo = "BP_B_545x39_Ball_Green_F";
		author = "Bohemia Interactive";
		displayName = "5.45 mm 30Rnd Reload Tracer (Green) Mag";
	};
	class BP_30Rnd_545x39_Mag_Tracer_F : BP_30Rnd_545x39_Mag_F { //5.45 mm 30Rnd Tracer (Yellow) Mag
		author = "Bohemia Interactive";
		displayName = "5.45 mm 30Rnd Tracer (Yellow) Mag";
		displayNameShort = "Tracer";
		lastRoundsTracer = 30;
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_545x39_Mag_Tracer_F_ca.paa";
		tracersEvery = 1;
	};
	class BP_30Rnd_545x39_Mag_Tracer_Green_F : BP_30Rnd_545x39_Mag_Tracer_F { //5.45 mm 30Rnd Tracer (Green) Mag
		ammo = "BP_B_545x39_Ball_Green_F";
		author = "Bohemia Interactive";
		displayName = "5.45 mm 30Rnd Tracer (Green) Mag";
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_545x39_Mag_Tracer_Green_F_ca.paa";
	};
	class BP_30Rnd_762x39_Mag_F : CA_Magazine { //7.62 mm 30Rnd Mag
		ammo = "BP_B_762x39_Ball_F";
		author = "Bohemia Interactive";
		count = 30;
		descriptionShort = "Caliber: 7.62x39 mm<br />Rounds: 30<br />Used in: AK-12, AK-12 GL, AKM";
		displayName = "7.62 mm 30Rnd Reload Tracer (Yellow) Mag";
		initSpeed = 715;
		lastRoundsTracer = 4;
		mass = 10;
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_762x39_Mag_F_ca.paa";
		scope = 2;
		tracersEvery = 0;
	};
	class BP_30Rnd_762x39_Mag_Green_F : BP_30Rnd_762x39_Mag_F { //7.62 mm 30Rnd Tracer (Green) Mag
		ammo = "BP_B_762x39_Ball_Green_F";
		author = "Bohemia Interactive";
		displayName = "7.62 mm 30Rnd Reload Tracer (Green) Mag";
	};
	class BP_30Rnd_762x39_Mag_Tracer_F : BP_30Rnd_762x39_Mag_F { //7.62 mm 30Rnd Tracer (Yellow) Mag
		author = "Bohemia Interactive";
		displayName = "7.62 mm 30Rnd Tracer (Yellow) Mag";
		displayNameShort = "Tracer";
		lastRoundsTracer = 30;
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_762x39_Mag_Tracer_F_ca.paa";
		tracersEvery = 1;
	};
	class BP_30Rnd_762x39_Mag_Tracer_Green_F : BP_30Rnd_762x39_Mag_Tracer_F { //7.62 mm 30Rnd Tracer (Green) Mag
		ammo = "BP_B_762x39_Ball_Green_F";
		author = "Bohemia Interactive";
		displayName = "7.62 mm 30Rnd Tracer (Green) Mag";
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_762x39_Mag_Tracer_Green_F_ca.paa";
	};
	class BP_200Rnd_556x45_LIM_Box_F : CA_Magazine { //LIM 5.56 mm 200Rnd Box
		ammo = "BP_556x45_Ball_Tracer_Yellow";
		author = "Bohemia Interactive";
		count = 200;
		descriptionShort = "Caliber: 5.56x45 mm<br />Rounds: 200<br />Used in: LIM-85";
		displayName = "5.56 mm 200Rnd Reload Tracer (Yellow) Box";
		initSpeed = 915;
		lastRoundsTracer = 4;
		mass = 40;
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_200Rnd_556x45_Box_F_ca.paa";
		scope = 2;
		tracersEvery = 4;
	};
	class BP_200Rnd_556x45_LIM_Box_Red_F : BP_200Rnd_556x45_LIM_Box_F { //LIM 5.56 mm 200Rnd Tracer (Red) Box
		ammo = "BP_556x45_Ball_Tracer_Red";
		author = "Bohemia Interactive";
		displayName = "5.56 mm 200Rnd Reload Tracer (Red) Box";
	};
	class BP_200Rnd_556x45_LIM_Box_Tracer_F : BP_200Rnd_556x45_LIM_Box_F { //LIM 5.56 mm 200Rnd Tracer (Yellow) Box
		author = "Bohemia Interactive";
		displayName = "5.56 mm 200Rnd Tracer (Yellow) Box";
		displayNameShort = "Tracer";
		lastRoundsTracer = 200;
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_200Rnd_556x45_Box_Tracer_F_ca.paa";
		tracersEvery = 1;
	};
	class BP_200Rnd_556x45_LIM_Box_Tracer_Red_F : BP_200Rnd_556x45_LIM_Box_Tracer_F { //LIM 5.56 mm 200Rnd Tracer (Red) Box
		ammo = "BP_556x45_Ball_Tracer_Red";
		author = "Bohemia Interactive";
		displayName = "5.56 mm 200Rnd Tracer (Red) Box";
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_200Rnd_556x45_Box_Tracer_Red_F_ca.paa";
	};

	class BP_150Rnd_556x45_Drum_Mag_F : CA_Magazine { //5.56 mm 150Rnd Mag
		ammo = "BP_556x45_Ball_Tracer_Red";
		author = "Bohemia Interactive";
		count = 150;
		descriptionShort = "Caliber: 5.56x45 mm<br />Rounds: 150<br />Used in: SPAR-16S";
		displayName = "5.56 mm 150Rnd Mag";
		initSpeed = 930;
		lastRoundsTracer = 4;
		mass = 30;
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_150Rnd_556x45_Drum_Mag_F_ca.paa";
		scope = 2;
		tracersEvery = 0;
	};


	class BP_150Rnd_556x45_Drum_Mag_Tracer_F : BP_150Rnd_556x45_Drum_Mag_F { //5.56 mm 150Rnd Tracer (Red) Mag
		author = "Bohemia Interactive";
		displayName = "5.56 mm 150Rnd Tracer (Red) Mag";
		displayNameShort = "Tracer";
		lastRoundsTracer = 150;
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_150Rnd_556x45_Drum_Mag_Tracer_F_ca.paa";
		tracersEvery = 1;
	};
	class BP_20Rnd_650x39_Cased_Mag_F : CA_Magazine { //6.5 mm 20Rnd Mag
		ammo = "BP_65x39_Case_green";
		author = "Bohemia Interactive";
		count = 20;
		descriptionShort = "Caliber: 6.5x39 mm<br />Rounds: 20<br />Used in: CMR-76";
		displayName = "6.5 mm 20Rnd Mag";
		initSpeed = 820;
		lastRoundsTracer = 0;
		mass = 7;
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_20Rnd_650x39_Cased_Mag_F_ca.paa";
		scope = 2;
		tracersEvery = 0;
	};
	class BP_30Rnd_580x42_Mag_F : CA_Magazine { //5.8 mm 30Rnd Mag
		ammo = "BP_580x42_Ball_F";
		author = "Bohemia Interactive";
		count = 30;
		descriptionShort = "Caliber: 5.8x42 mm<br />Rounds: 30<br />Used in: CAR-95, CAR-95 GL";
		displayName = "5.8 mm 30Rnd Mag";
		initSpeed = 930;
		lastRoundsTracer = 4;
		mass = 8;
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_580x42_Mag_F_ca.paa";
		scope = 2;
		tracersEvery = 0;
	};
	class BP_100Rnd_580x42_Mag_F : BP_30Rnd_580x42_Mag_F { //5.8 mm 100Rnd Mag
		count = 100;
		descriptionShort = "Caliber: 5.8x42 mm<br />Rounds: 100<br />Used in: CAR-95-1";
		displayName = "5.8 mm 100Rnd Mag";
		mass = 20;
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_100Rnd_580x42_Mag_F_ca.paa";
		tracersEvery = 4;
	};
	class BP_100Rnd_580x42_Mag_Tracer_F : BP_100Rnd_580x42_Mag_F { //5.8 mm 100Rnd Tracer (Green) Mag
		displayName = "5.8 mm 100Rnd Tracer (Green) Mag";
		displayNameShort = "Tracer";
		lastRoundsTracer = 100;
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_100Rnd_580x42_Mag_Tracer_F_ca.paa";
		tracersEvery = 1;
	};

	class BP_20Rnd_762x51_BPMag: 20Rnd_762x51_Mag
	{
	    ammo = "BP_762x51_Ball";
		initSpeed = 833;
		displayName = "20Rnd 7.62x51mm";
		descriptionShort = "7.62x51mm Rifle rounds.";
		mass = 15;
	};

	class BP_20Rnd_762x51_M80A1: 20Rnd_762x51_Mag
	{
	    ammo = "BP_762x51_M80A1";
		picture = "\breakingpoint_weapons\icons\BP_m80a1_ca.paa";
		initSpeed = 847;
		displayName = "20Rnd 7.62x51mm M80A1";
		descriptionShort = "Increased hard target penetration and soft target damage.";
		mass = 16;
	};

	class BP_20Rnd_762x51_Mk316Mod0: 20Rnd_762x51_Mag
	{
	    ammo = "BP_762x51_Mk316Mod0";
		picture = "\breakingpoint_weapons\icons\BP_MK316_ca.paa";
		initSpeed = 790;
		displayName = "20Rnd 7.62x51mm Mk316Mod0";
		descriptionShort = "Specifically designed for long-range sniping. Increased velocity and improved aerodynamics.";
		mass = 15;
	};

	class BP_30Rnd_762x51_BPMag: 20Rnd_762x51_Mag
	{
	    ammo = "BP_762x51_Ball";
		initSpeed = 833;
		count = 30;
		displayName = "30Rnd 7.62x51mm";
		descriptionShort = "7.62x51mm Rifle rounds.";
		mass = 17;
	};

	class BP_30Rnd_762x51_M80A1: 20Rnd_762x51_Mag
	{
	    ammo = "BP_762x51_M80A1";
		picture = "\breakingpoint_weapons\icons\BP_m80a1_ca.paa";
		initSpeed = 847;
		count = 30;
		displayName = "30Rnd 7.62x51mm M80A1";
		descriptionShort = "Increased hard target penetration and soft target damage.";
		mass = 18;
	};

	class BP_30Rnd_762x51_Mk316Mod0: 20Rnd_762x51_Mag
	{
	    ammo = "BP_762x51_Mk316Mod0";
		picture = "\breakingpoint_weapons\icons\BP_MK316_ca.paa";
		initSpeed = 790;
		count = 30;
		displayName = "30Rnd 7.62x51mm Mk316Mod0";
		descriptionShort = "Specifically designed for long-range sniping. Increased velocity and improved aerodynamics.";
		mass = 17;
	};

	class BP_5Rnd_762x51_Mag: 20Rnd_762x51_Mag
	{
	    ammo = "BP_762x51_Ball";
		initSpeed = 833;
		count = 5;
		displayName = "5Rnd 7.62x51mm";
		picture = "\breakingpoint_weapons\icons\m_5rnd_762_ca.paa";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		descriptionShort = "7.62x51mm Rifle rounds.";
		mass = 5;
	};

	class BP_5Rnd_762m80a1_Mag: 20Rnd_762x51_Mag
	{
	    ammo = "BP_762x51_M80A1";
		picture = "\breakingpoint_weapons\icons\m_5rnd_m80a1_ca.paa";
		initSpeed = 847;
		count = 5;
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		displayName = "5Rnd 7.62x51mm M80A1";
		descriptionShort = "Increased hard target penetration and soft target damage.";
		mass = 6;
	};

	class BP_5Rnd_762mk316_Mag: 20Rnd_762x51_Mag
	{
	    ammo = "BP_762x51_Mk316Mod0";
		initSpeed = 790;
		count = 5;
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		displayName = "5Rnd 7.62x51mm Mk316Mod0";
		picture = "\breakingpoint_weapons\icons\m_5rnd_mk316_ca.paa";
		descriptionShort = "Specifically designed for long-range sniping. Increased velocity and improved aerodynamics.";
		mass = 5;
	};

	class BP_10Rnd_762x51_Mag: 20Rnd_762x51_Mag
	{
	    ammo = "BP_762x51_Ball";
		initSpeed = 833;
		count = 10;
		displayName = "10Rnd 7.62x51mm";
		picture = "\breakingpoint_weapons\icons\m_5rnd_762_ca.paa";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		descriptionShort = "7.62x51mm Rifle rounds in a 10rnd magazine.";
		mass = 8;
	};

	class BP_10Rnd_762m80a1_Mag: 20Rnd_762x51_Mag
	{
	    ammo = "BP_762x51_M80A1";
		picture = "\breakingpoint_weapons\icons\m_5rnd_m80a1_ca.paa";
		initSpeed = 847;
		count = 10;
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		displayName = "10Rnd 7.62x51mm M80A1";
		descriptionShort = "Increased hard target penetration and soft target damage.";
		mass = 8;
	};

	class BP_10Rnd_762mk316_Mag: 20Rnd_762x51_Mag
	{
	    ammo = "BP_762x51_Mk316Mod0";
		initSpeed = 790;
		count = 10;
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		displayName = "10Rnd 7.62x51mm Mk316Mod0";
		picture = "\breakingpoint_weapons\icons\m_5rnd_mk316_ca.paa";
		descriptionShort = "Specifically designed for long-range sniping. Increased velocity and improved aerodynamics.";
		mass = 8;
	};

	class BP_5Rnd_762Rubber_Mag: 20Rnd_762x51_Mag
	{
	    ammo = "BP_762x51_Ball_Rubber";
		initSpeed = 550;
		count = 5;
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		displayName = "5Rnd .22 TranQ Rounds";
		picture = "\breakingpoint_weapons\icons\m_5rnd_tranq_ca.paa";
		descriptionShort = "Specialized long range tranquillizer rounds.";
		mass = 7;
	};

	class BP_10Rnd_762Rubber_Mag: 20Rnd_762x51_Mag
	{
	    ammo = "BP_762x51_Ball_Rubber";
		initSpeed = 650;
		count = 10;
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		displayName = "10Rnd 7.62x51mm TranQ+ Rounds";
		picture = "\breakingpoint_weapons\icons\m_5rnd_tranq_ca.paa";
		descriptionShort = "Specialized long range tranquillizer rounds";
		mass = 12;
	};

	class BP_150Rnd_762x51_Box: 150Rnd_762x51_Box
	{
		scope = 2;
		ammo = "BP_762x51_Ball";
		initSpeed = 833;
		displayName = "150Rnd 7.62mm Box";
		picture = "\breakingpoint_weapons\icons\m_m249_ca.paa";
		descriptionshort = "7.62x51mm box magazine";
		mass = 45;
	};

	class BP_200Rnd_556x45_MINIMI: CA_Magazine
	{
		scope = 2;
		displayName = "200Rnd 5.56mm Box";
		picture = "\breakingpoint_weapons\icons\m_m245_ca.paa";
		count = 200;
		initSpeed = 915;
		tracersEvery = 4;
		ammo = "BP_556x45_Ball";
		descriptionShort = "5.56 box magazine";
		mass = 35;
	};

	class BP_200Rnd_556x45_TRACER: BP_200Rnd_556x45_MINIMI
	{
		scope = 2;
		displayName = "200Rnd 5.56mm Box Tracer";
		picture = "\breakingpoint_weapons\icons\m_m245_ca.paa";
		count = 200;
		initSpeed = 915;
		tracersEvery = 1;
		ammo = "BP_556x45_Ball";
		descriptionShort = "5.56 box magazine";
		mass = 35;
	};

	class BP_100Rnd_762x51_MINIMI: CA_Magazine
	{
		scope = 2;
		displayName = "100Rnd 7.62mm Box";
		picture = "\breakingpoint_weapons\icons\m_m249_ca.paa";
		count = 100;
		initSpeed = 833;
		tracersEvery = 3;
		ammo = "BP_762x51_Ball";
		descriptionShort = "7.62x51mm box magazine";
		mass = 40;
	};

	class BP_500Rnd_762x51_AI: CA_Magazine
	{
		scope = 2;
		displayName = "";
		count = 500;
		initSpeed = 1533;
		tracersEvery = 0;
		maxLeadSpeed = 1000;
		ammo = "BP_762x51_AI";
		descriptionShort = "";
		mass = 55;
	};

	class BP_100Rnd_50Cal_AI: CA_Magazine
	{
		scope = 2;
		displayName = "";
		count = 100;
		initSpeed = 1533;
		tracersEvery = 0;
		maxLeadSpeed = 1000;
		ammo = "BP_50Cal_AI";
		descriptionShort = "";
		mass = 55;
	};

	class BP_762x51_Box_Tracer: 150Rnd_762x51_Box
	{
		tracersEvery = 1;
		ammo = "BP_762x51_Ball";
		displayName = "150Rnd 7.62mm Tracer Box";
		descriptionshort = "7.62x51mm box magazine";
		mass = 45;
	};

	class BP_556x45_Stanag: 30Rnd_556x45_Stanag
	{
		ammo = "BP_556x45_Ball";
		initSpeed = 954;
		displayName = "30Rnd 5.56x45mm NATO";
		descriptionShort = "Standard 5.56 NATO magazine";
		tracersEvery = 0;//removed tracer
		lastRoundsTracer = 0;
		mass = 10;
	};

	class BP_556x45_Stanag_Tracer: 30Rnd_556x45_Stanag
	{
		ammo = "BP_556x45_Ball";
		initSpeed = 954;
		displayName = "30Rnd Tracer 5.56x45mm NATO";
		descriptionShort = "Tracer 5.56 NATO magazine";
		tracersEvery = 1;
		lastRoundsTracer = 0;
		mass = 10;
	};

	class BP_556old_Stanag: 30Rnd_556x45_Stanag
	{
		ammo = "BP_556x45old_Ball";
		initSpeed = 720;
		displayName = "Old 30Rnd 5.56x45mm NATO";
		descriptionShort = "Surplus 5.56x45mm NATO magazine. Inconsistent performance";
		mass = 10;
	};

	class BP_556x45_StanagSD: 30Rnd_556x45_Stanag
	{
		ammo = "BP_556x45_Ball_SD";
		initSpeed = 335;
		displayName = "30Rnd 5.56x45mm NATO Subsonic";
		picture = "\breakingpoint_weapons\icons\m_stanag556_SD_x_ca.paa";
		descriptionShort = "Subsonic rounds for use with a Suppressor for maximum noise reduction.";
		mass = 10;
	};

	class BP_556x45_StanagM855A1: 30Rnd_556x45_Stanag
	{
		ammo = "BP_556x45_BallM855A1";
		initSpeed = 970;
		displayName = "30Rnd 5.56x45mm M855A1-EPR";
		picture = "\breakingpoint_weapons\icons\BP_M855A1_ca.paa";
		descriptionShort = "Enhanced Performance Round, next generation 5.56x45mm cartridge similar in performance to the 7.62x51mm NATO.";
		tracersEvery = 0;
		lastRoundsTracer = 0;
		mass = 12;
	};

	class BP_556x45_StanagMK262: 30Rnd_556x45_Stanag
	{
		ammo = "BP_556x45_BallMk262";
		initSpeed = 886;
		count = 20;
		lastRoundsTracer = 0;
		displayName = "20Rnd 5.56x45mm Mk262";
		picture = "\breakingpoint_weapons\icons\BP_MK262_ca.paa";
		descriptionShort = "Special designed marksman round for the Mk12 SPR, greater effective range and soft target damage";
		mass = 10;
	};

	class BP_556x45_Rubber: 30Rnd_556x45_Stanag
	{
		ammo = "BP_556x45_Ball_Rubber";
		initSpeed = 325;
		displayName = "30Rnd 5.56x45mm TranQ Rounds";
		picture = "\breakingpoint_weapons\icons\BP_556Rubber_ca.paa";
		descriptionShort = "5.56x45mm fast-acting Tranquillizer rounds.";
		mass = 10;
	};

	class BP_545x39_AK107: 30Rnd_556x45_Stanag
	{
		scope = 2;
		displayName = "30rnd 545x39mm Magazine";
		picture = "\A3\weapons_F\data\UI\m_30stanag_CA.paa";
		ammo = "BP_545x39_Ball";
		count = 30;
		initSpeed = 880;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		mass = 10;
		descriptionShort = "5.45x39mm ball";
	};
	class BP_545x39_HP_30rnd: 30Rnd_556x45_Stanag
	{
		scope = 2;
		displayName = "30rnd 545x39mm HP Magazine";
		picture = "\A3\weapons_F\data\UI\m_30stanag_CA.paa";
		ammo = "BP_545x39_HP";
		count = 30;
		initSpeed = 895;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		mass = 10;
		descriptionShort = "Hollow Point rounds";
		//magazineGroup[] = {"545Magazines"};//maggroup doesnt seem to work, shame
	};
	class BP_545x39_30rnd_7N22: 30Rnd_556x45_Stanag
	{
		scope = 2;
		displayName = "30rnd 545x39mm 7N22 Magazine";
		picture = "\breakingpoint_weapons\icons\BP_M855A1_ca.paa";
		ammo = "BP_545x39_7N22";
		count = 30;
		initSpeed = 890;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		mass = 11;
		descriptionShort = "7N22 boat-tail with steel-penetrator";

		//magazineGroup[] = {"545Magazines"};//maggroup doesnt seem to work, shame
	};
	class BP_545x39_30rnd_Ball_T: 30Rnd_556x45_Stanag
	{
		scope = 2;
		displayName = "30rnd 545x39mm 7T3 Tracer Magazine";
		picture = "\A3\weapons_F\data\UI\m_30stanag_CA.paa";
		ammo = "BP_545x39_Ball";
		count = 30;
		initSpeed = 880;
		tracersEvery = 1;//tracers enabled
		lastRoundsTracer = 0;
		mass = 10;
		descriptionShort = "30rnd 5.45x39mm Tracer magazine";
	};
	class BP_545x39_RPK107: 30Rnd_556x45_Stanag
	{
		scope = 2;
		displayName = "75Rnd RPK Drum";
		picture = "\A3\weapons_F\data\UI\m_30stanag_CA.paa";
		ammo = "BP_545x39_Ball";
		count = 75;
		initSpeed = 880;
		mass = 22;
		descriptionShort = "75 round drum magazine";
	};

	class BP_762x39_AKM: CA_Magazine
	{
		scope = 2;
		displayName = "30Rnd AKM Magazine";
		picture = "\A3\weapons_F\data\UI\m_30stanag_CA.paa";
		ammo = "BP_762x39_Ball";
		count = 30;
		mass = 15;
		initSpeed = 719;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		descriptionShort = "30Rnd 7.62x39mm magazine";
	};

	class BP_60Rnd_762x39_AKM: CA_Magazine
	{
		scope = 2;
		displayName = "60Rnd AKM Magazine";
		picture = "\A3\weapons_F\data\UI\m_30stanag_CA.paa";
		ammo = "BP_762x39_Ball";
		count = 60;
		mass = 23;
		initSpeed = 719;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		descriptionShort = "60Rnd 7.62x39mm dual magazine";
	};

	class BP_762x54_SVD: CA_Magazine
	{
		scope = 2;
		displayName = "10Rnd 7.62x54mm Russian";
		picture = "\breakingpoint_weapons\icons\m_svd_ca.paa";
		ammo = "BP_762x54_Ball";
		count = 10;
		mass = 12;
		initSpeed = 828;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		descriptionShort = "57-N-323S Ball magazine";
	};

	class BP_762x54_7N1_10rnd: CA_Magazine
	{
		scope = 2;
		displayName = "10Rnd 7.62x54mm 7N1";
		picture = "\breakingpoint_weapons\icons\m_svd_ca.paa";
		ammo = "BP_762x54_7N1";
		count = 10;
		mass = 11;
		initSpeed = 865;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		descriptionShort = "7N1 Sniper, Enhanced Aerodynamics";
	};

	class BP_762x54_7N13_10rnd: CA_Magazine
	{
		scope = 2;
		displayName = "10Rnd 7.62x54mm 7N13";
		picture = "\breakingpoint_weapons\icons\m_svd_ca.paa";
		ammo = "BP_762x54_7N13";
		count = 10;
		mass = 13;
		initSpeed = 828;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		descriptionShort = "7N13 AP, Heat-Strengthened penetrator";

	};

	class BP_93x64_SVDK: CA_Magazine
	{
		scope = 2;
		displayName = "10Rnd SVDK Magazine";
		picture = "\breakingpoint_weapons\icons\m_svd_ca.paa";
		ammo = "BP_93x64_Ball";
		count = 10;
		mass = 18;
		initSpeed = 762;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		descriptionShort = "10Rnd 9.3x64mmR magazine";
	};

	class BP_17Rnd_9x19_SD: CA_Magazine
	{
	    ammo = "BP_9x19_SD";
		count = 17;
		initSpeed = 330;
		displayName = "17Rnd 9mm Subsonic";
		picture = "\breakingpoint_weapons\icons\m_g17SD_ca.paa";
		descriptionShort = "Subsonic 9mm rounds to be used in conjunction with a Suppressor to minimize noise.";
		mass = 6;
	};

	class BP_30Rnd_65x39: 30Rnd_65x39_caseless_mag
	{
		ammo = "BP_65x39_Grendel";
		initSpeed = 786;
		displayName = "30Rnd 6.5x39mm Grendel";
		descriptionShort = "Caseless intermediate rifle rounds";
		lastRoundsTracer = 0;
		mass = 9;
	};

	class BP_10Rnd_65x39: BP_30Rnd_65x39
	{
		count = 10;
		displayName = "10Rnd 6.5x39mm Grendel";
		descriptionShort = "Caseless intermediate rifle rounds";
		lastRoundsTracer = 0;
		mass = 6;
	};

	class BP_20Rnd_65x47_Lapua: 30Rnd_65x39_caseless_mag
	{
	    ammo = "BP_65x47_Lapua";
		initSpeed = 880;
		displayName = "20Rnd 6.5x47mm Lapua";
		count = 20;
		lastRoundsTracer = 0;
		picture = "\breakingpoint_weapons\icons\m_30stanagLapua_caseless_ca.paa";
		descriptionShort = "Increased accuracy, velocity and stopping power over the standard 6.5x39mm round.";
		mass = 8;
	};

	class BP_10Rnd_65x47_Lapua: BP_20Rnd_65x47_Lapua
	{
		count = 10;
		displayName = "10Rnd 6.5x47mm Lapua";
		descriptionShort = "Increased accuracy, velocity and stopping power over the standard 6.5x39mm round.";
		mass = 6;
	};

	class BP_30Rnd_65x39_SD: 30Rnd_65x39_caseless_mag
	{
		ammo = "BP_65x39_SD";
		initSpeed = 335;
		displayName = "30Rnd 6.5x39mm Subsonic";
		picture = "\breakingpoint_weapons\icons\m_30stanagSD_caseless_ca.paa";
		descriptionShort = "Subsonic rounds for use with a Suppressor for maximum noise reduction.";
		mass = 7;
	};

	class BP_10Rnd_65x39_SD: 30Rnd_65x39_caseless_mag
	{
		ammo = "BP_65x39_SD";
		initSpeed = 335;
		count = 10;
		displayName = "10Rnd 6.5x39mm Subsonic";
		picture = "\breakingpoint_weapons\icons\m_30stanagSD_caseless_ca.paa";
		descriptionShort = "Subsonic rounds for use with a Suppressor for maximum noise reduction.";
		mass = 5;
	};

	class BP_100Rnd_65x39: 100Rnd_65x39_caseless_mag
	{
		scope = 2;
		displayName = "100Rnd 6.5x39mm Grendel";
		descriptionShort = "Used in the MXSW";
		initSpeed = 786;
		picture = "\A3\Weapons_F\Data\UI\M_100Rnd_65x39_CA.paa";
		count = 100;
		ammo = "BP_65x39_Grendel";
		mass = 20;
	};

	class 2000Rnd_65x39_Belt;

	class 2000Rnd_65x39_Belt_Tracer_Red : 2000Rnd_65x39_Belt
	{
		tracersEvery=1;
		ammo="B_65x39_Minigun_Caseless";
		displayName="6.5mm 2000Rnd LMG Tracer (Red) Belt";
		descriptionShort="Caliber: 6.5x39 mm Tracer - Red<br />Rounds: 2000<br />Used in: Vehicles";
		displaynameshort="Tracer";
		count=100;
	 };

	class BP_5Rnd_127x108_Mag: 5Rnd_127x108_Mag
	{
		scope = 2;
		displayName = "5Rnd 12.7x108mm";
		picture = "\A3\Weapons_F\Data\UI\M_5rnd_127x108_CA.paa";
		count = 5;
		ammo = "BP_127x108_APDS";
		initSpeed = 820;
		descriptionShort = "Armour-piercing anti materiel rounds designed for maximum hard target penetration";
		mass = 10;
	};

	class BP_10Rnd_338Lapua_Mag: 7Rnd_408_Mag
	{
		displayName = "10Rnd .338 Lapua Magnum";
		picture = "\breakingpoint_weapons\icons\m_338Lapua_ca.paa";
		count = 10;
		ammo = "BP_338_Lapua";
		initSpeed = 883;
		descriptionShort = "Specialized cartridge for military long range snipers.";
		mass = 12;
	};

    class BP_10Rnd_338LapuaOVP_Mag: 7Rnd_408_Mag
	{
		displayName = "10Rnd .338 Lapua Magnum ";
		picture = "\breakingpoint_weapons\icons\m_338Lapua_ca.paa";
		count = 10;
		ammo = "BP_338_LapuaOVP";
		initSpeed = 945;
		descriptionShort = "Specialized overpressure cartridge for military long range snipers.";
		mass = 14;
	};

	class BP_5Rnd_300M_Mag: 5Rnd_127x108_Mag
	{
		scope = 2;
		displayName = "5Rnd Match-Grade .300 WinMag";
		picture = "\breakingpoint_weapons\icons\m_300Match_ca.paa";
		count = 5;
		ammo = "BP_300M_WinMag";
		initSpeed = 993;
		descriptionShort = "Precision Mk248 Mod 1 Match-Grade rounds";
		mass = 5;
	};

	class BP_5Rnd_300_Mag: 5Rnd_127x108_Mag
	{
		scope = 2;
		displayName = "5Rnd .300 Winchester Magnum";
		picture = "\breakingpoint_weapons\icons\m_300_ca.paa";
		count = 5;
		ammo = "BP_300_WinMag";
		initSpeed = 874;
		descriptionShort = "High power sniper rounds";
		mass = 7;
	};

	class BP_5Rnd_Mauser_Mag: 5Rnd_127x108_Mag
	{
		scope = 2;
		displayName = "5Rnd 7.92x57mm Mauser";
		picture = "\breakingpoint_weapons\icons\m_300_ca.paa";
		count = 5;
		ammo = "BP_792x57_Mauser";
		initSpeed = 851;
		descriptionShort = "German high power rifle cartridge";
		mass = 7;
	};

	class BP_5Rnd_300AAC_Mag: 5Rnd_127x108_Mag
	{
		scope = 2;
		displayName = "5Rnd .300 Blackout Clip";
		picture = "\breakingpoint_weapons\icons\m_300_ca.paa";
		count = 5;
		ammo = "BP_300AAC_Ball";
		initSpeed = 723;
		descriptionShort = "Medium power intermediate rounds";
		mass = 5;
	};

	class BP_30Rnd_300AAC_Mag: 5Rnd_127x108_Mag
	{
		scope = 2;
		displayName = "30Rnd .300 Blackout Magazine";
		picture = "\breakingpoint_weapons\icons\m_300_ca.paa";
		count = 30;
		ammo = "BP_300AAC_Ball";
		initSpeed = 723;
		descriptionShort = "Medium power intermediate rounds";
		mass = 13;
	};

	class BP_10Rnd_300M_Mag: 5Rnd_127x108_Mag
	{
		scope = 2;
		displayName = "10Rnd Match-Grade .300 WinMag";
		picture = "\breakingpoint_weapons\icons\m_300Match_ca.paa";
		count = 10;
		ammo = "BP_300M_WinMag";
		initSpeed = 993;
		descriptionShort = "Precision Mk248 Mod 1 Match-Grade rounds.";
		mass = 8;
	};

	class BP_10Rnd_300_Mag: 5Rnd_127x108_Mag
	{
		scope = 2;
		displayName = "10Rnd .300 Winchester Magnum";
		picture = "\breakingpoint_weapons\icons\m_300_ca.paa";
		count = 10;
		ammo = "BP_300_WinMag";
		initSpeed = 874;
		descriptionShort = "High power sniper rounds.";
		mass = 7;
	};

	class BP_10Rnd_303_Mag: 5Rnd_127x108_Mag
	{
		scope = 2;
		displayName = "10Rnd .303 British";
		picture = "\breakingpoint_weapons\icons\m_303_ca.paa";
		count = 10;
		ammo = "BP_303B_Ball";
		initSpeed = 844;
		descriptionShort = "Standard high power British WWI rounds";
		mass = 10;
	};

	class BP_10Rnd_303_JSP_Mag: 5Rnd_127x108_Mag
	{
		scope = 2;
		displayName = "10Rnd .303 JSP";
		picture = "\breakingpoint_weapons\icons\m_303_ca.paa";
		count = 10;
		ammo = "BP_303B_JSP";
		initSpeed = 844;
		descriptionShort = ".303 Jacketed Soft Point rounds";
		mass = 10;
	};

	class BP_5Rnd_223_Mag: 5Rnd_127x108_Mag
	{
		scope = 2;
		displayName = "5Rnd Remington .223";
		picture = "\breakingpoint_weapons\icons\m_30-06_ca.paa";
		count = 5;
		ammo = "BP_223_Ball";
		initSpeed = 960;
		descriptionShort = "Remington .223 hunting rounds";
		mass = 5;
	};

	class BP_5Rnd_223BTHP_Mag: 5Rnd_127x108_Mag
	{
		scope = 2;
		displayName = "5Rnd Remington .223BTHP";
		picture = "\breakingpoint_weapons\icons\m_30-06_ca.paa";
		count = 5;
		ammo = "BP_223BTHP_Ball";
		initSpeed = 893;
		descriptionShort = "Boat Tail Hollow Point Remington .223 hunting rounds";
		mass = 5;
	};

	class BP_5Rnd_250_Mag: 5Rnd_127x108_Mag
	{
		scope = 2;
		displayName = "5Rnd Remington .22-250";
		picture = "\breakingpoint_weapons\icons\m_30-06_ca.paa";
		count = 5;
		ammo = "BP_250_Ball";
		initSpeed = 1219;
		descriptionShort = "Remington .22-250 hunting rounds";
		mass = 5;
	};

	class BP_5Rnd_3006_Mag: 5Rnd_127x108_Mag
	{
		scope = 2;
		displayName = "5Rnd Springfield 30-06";
		picture = "\breakingpoint_weapons\icons\m_30-06_ca.paa";
		count = 5;
		ammo = "BP_3006_Spring";
		initSpeed = 902;
		descriptionShort = "Standard Springfield rounds";
		mass = 7;
	};

	class BP_5Rnd_3006M_Mag: 5Rnd_127x108_Mag
	{
		scope = 2;
		displayName = "5Rnd Match-Grade 30-06";
		picture = "\breakingpoint_weapons\icons\m_30-06Match_ca.paa";
		count = 5;
		ammo = "BP_3006M_Spring";
		initSpeed = 938;
		descriptionShort = "Match-Grade Hot Loaded 30-06 rounds";
		mass = 7;
	};

	class BP_8Rnd_3006_Mag: 5Rnd_127x108_Mag
	{
		scope = 2;
		displayName = "8Rnd Springfield 30-06";
		picture = "\breakingpoint_weapons\icons\m_30-06_ca.paa";
		count = 8;
		ammo = "BP_3006_Spring";
		initSpeed = 902;
		reloadAction = "ReloadMagazine";
		descriptionShort = "Standard Springfield rounds";
		mass = 12;
	};

	class BP_8Rnd_3006M_Mag: 5Rnd_127x108_Mag
	{
		scope = 2;
		displayName = "8Rnd Match-Grade 30-06";
		picture = "\breakingpoint_weapons\icons\m_30-06Match_ca.paa";
		count = 8;
		ammo = "BP_3006M_Spring";
		initSpeed = 938;
		reloadAction = "ReloadMagazine";
		descriptionShort = "Match-Grade Hot Loaded 30-06 rounds";
		mass = 14;
	};

	class BP_20Rnd_3006_Mag: 5Rnd_127x108_Mag
	{
		scope = 2;
		displayName = "20Rnd Springfield 30-06";
		picture = "\breakingpoint_weapons\icons\m_30-06_ca.paa";
		count = 20;
		ammo = "BP_3006_Spring";
		initSpeed = 902;
		descriptionShort = "Standard Springfield 30-06 rounds";
		mass = 25;
	};

	class BP_20Rnd_3006M_Mag: 5Rnd_127x108_Mag
	{
		scope = 2;
		displayName = "20Rnd Match Grade 30-06";
		picture = "\breakingpoint_weapons\icons\m_30-06Match_ca.paa";
		count = 20;
		ammo = "BP_3006M_Spring";
		initSpeed = 938;
		descriptionShort = "Match-Grade Hot Loaded 30-06 rounds";
		mass = 27;
	};

	class BP_5Rnd_22_Mag: 5Rnd_127x108_Mag
	{
		scope = 2;
		displayName = "5Rnd .22LR";
		picture = "\breakingpoint_weapons\icons\m_22lr_ca.paa";
		count = 5;
		ammo = "BP_22LR_Ball";
		initSpeed = 300;
		descriptionShort = "Small caliber high velocity rimfire cartridge.";
		mass = 2;
	};

	class BP_25Rnd_22_Mag: 5Rnd_127x108_Mag
	{
		scope = 2;
		displayName = "25Rnd .22LR";
		picture = "\breakingpoint_weapons\icons\m_22lr_ca.paa";
		count = 25;
		ammo = "BP_22LR_Ball";
		initSpeed = 300;
		descriptionShort = "Small caliber high velocity rimfire cartridge.";
		mass = 7;
	};

	class BP_7Rnd_408Chey_Mag: 7Rnd_408_Mag
	{
	    ammo = "BP_408Chey_Ball";
		displayname = "7Rnd 408 CheyTac";
		initSpeed = 908;
		descriptionshort = "High Caliber Anti Materiel rounds";
		mass = 15;
	};

	class BP_10Rnd_127x99: 7Rnd_408_Mag
	{
	    ammo = "BP_127x99_Ball";
		displayname = "10Rnd .50BMG";
		picture = "\breakingpoint_weapons\icons\m_107_ca.paa";
		descriptionshort = "12.7x99mm Anti Materiel rounds";
		mass = 20;
		initSpeed = 815;
		count = 10;
	};

	class BP_10Rnd_127x99_RAUF: 7Rnd_408_Mag
	{
	    ammo = "BP_127x99_PEI";
		displayname = "10Rnd .50BMG Raufoss Mk211";
		picture = "\breakingpoint_weapons\icons\m_107mk_ca.paa";
		descriptionshort = "12.7x99mm Explosive Incendiary Armour Piercing rounds";
		mass = 20;
		initSpeed = 815;
		count = 10;
	};

	class 100Rnd_127x99_mag_Tracer_Yellow;

	class BP_100Rnd_127x99_box: 100Rnd_127x99_mag_Tracer_Yellow
	{
		displayName = "100Rnd 50cal Box";
		picture = "\breakingpoint_weapons\icons\BP_100Rnd_127x99_box.paa";
		descriptionShort = "Ammo box for the 50Cal Truck,Qilin, and Prowler";
		mass = 110;
	};

	class BP_17Rnd_9x19: 30Rnd_9x21_Mag
	{
	    ammo = "BP_9x19_Ball";
		count = 17;
		initSpeed = 390;
		displayName = "17Rnd 9x19mm Parabellum";
		descriptionshort = "";
		mass = 5;
	};

	class BP_19Rnd_9x19: 30Rnd_9x21_Mag
	{
	    ammo = "BP_9x19_Ball";
		count = 19;
		initSpeed = 390;
		displayName = "19Rnd 9x19mm Parabellum";
		descriptionshort = "";
		mass = 5;
	};

	class BP_33Rnd_9x19: 30Rnd_9x21_Mag
	{
	    ammo = "BP_9x19_Ball";
		count = 30;
		initSpeed = 390;
		displayName = "30Rnd 9x19mm Parabellum";
		descriptionshort = "Extended 9mm magazine";
		mass = 7;
	};

	class BP_33Rnd_9x19OVP: 30Rnd_9x21_Mag
	{
	    ammo = "BP_9x19OVP_Ball";
		displayName = "33Rnd 9x19mm +P+";
		descriptionuse = "33Rnd 9x19mm +P+";
		count = 33;
		initSpeed = 435;
		picture = "\breakingpoint_weapons\icons\m_g18OVP_ca.paa";
		descriptionshort = "Extended overpressure 9mm magazine.";
		mass = 7;
	};

	class BP_12Rnd_9x18: 30Rnd_9x21_Mag
	{
	    count = 12;
	    ammo = "BP_9x18_Ball";
		displayName = "12Rnd 9x18mm Makarov";
		descriptionshort = "Russian 9mm rounds";
		mass = 4;
	};

	class BP_30Rnd_9x21_Mag: 30Rnd_9x21_Mag
	{
        ammo = "BP_9x21_Ball";
		displayname = "30Rnd 9x19mm Parabellum";
		count = 30;
		descriptionshort = "Extended 9mm magazine";
		mass = 7;
	};

	class BP_16Rnd_9x21_Mag: 30Rnd_9x21_Mag
	{
		displayName = "15Rnd 9x19mm Parabellum";
		picture = "\A3\weapons_f\data\ui\M_16Rnd_9x21_CA.paa";
		type = 16;
		count = 15;
		descriptionShort = "Standard 9mm magazine";
		ammo = "BP_9x21_Ball";
		mass = 5;
	};

	class BP_15Rnd_9x21_Rubber: 30Rnd_9x21_Mag
	{
		displayName = "10Rnd TranQ pistol attachment ammo";
		picture = "\breakingpoint_weapons\icons\m_g17Rubber_ca.paa";
		type = 16;
		count = 10;
		initSpeed = 680;
		descriptionShort = "Fast acting Tranquillizer rounds for the 1911 TranQ pistol attachment";
		ammo = "BP_9x19_Rubber";
		mass = 5;
	};

	/*extern*/ class 3Rnd_UGL_FlareGreen_F;

	class BP_6Rnd_GreenFlare: 3Rnd_UGL_FlareGreen_F
	{
		ammo = "CMflare_Chaff_Ammo";
		count = 6;
		displayName = "Pistol Signal Flare";
		descriptionShort = "$STR_A3_CfgMagazines_6Rnd_GreenSignal_F1";
		displayNameShort = "$STR_A3_CfgMagazines_UGL_FlareGreen_F_dns";
		mass = 12;
		initSpeed = 340;
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		picture = "\A3\Weapons_F_Kart\Pistols\Pistol_Signal_F\Data\UI\M_6Rnd_GreenSignal_CA.paa";
	};

	class BP_6Rnd_RedFlare: BP_6Rnd_GreenFlare
	{
		ammo = "CMflare_Chaff_Ammo";
		displayName = "Pistol Signal Flare";
		descriptionShort = "$STR_A3_CfgMagazines_6Rnd_RedSignal_F1";
		displayNameShort = "$STR_A3_CfgMagazines_UGL_FlareRed_F_dns";
		picture = "\A3\Weapons_F_Kart\Pistols\Pistol_Signal_F\Data\UI\M_6Rnd_RedSignal_CA.paa";
	};

	/*class 5Rnd_127x108_Mag: 5Rnd_127x108_Mag
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};

	class 5Rnd_127x108_APDS_Mag: 5Rnd_127x108_APDS_Mag
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};

	class 7Rnd_408_Mag: 7Rnd_408_Mag
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};

	class 20Rnd_762x51_Mag: 20Rnd_762x51_Mag
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};

	class 30Rnd_556x45_Stanag: 30Rnd_556x45_Stanag
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};

    class 30Rnd_556x45_Stanag_Tracer_Green: 30Rnd_556x45_Stanag_Tracer_Green
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};

	class 30Rnd_556x45_Stanag_Tracer_Red: 30Rnd_556x45_Stanag_Tracer_Red
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};

	class 30Rnd_556x45_Stanag_Tracer_Yellow: 30Rnd_556x45_Stanag_Tracer_Yellow
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};

	class 100Rnd_65x39_caseless_mag_Tracer: 100Rnd_65x39_caseless_mag_Tracer
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};

	class 100Rnd_65x39_caseless_mag: 100Rnd_65x39_caseless_mag
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};

	class 30Rnd_65x39_caseless_mag: 30Rnd_65x39_caseless_mag
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};

	class 30Rnd_65x39_caseless_mag_Tracer: 30Rnd_65x39_caseless_mag_Tracer
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};

	class 30Rnd_65x39_caseless_green: 30Rnd_65x39_caseless_green
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};

	class 30Rnd_65x39_caseless_green_mag_Tracer: 30Rnd_65x39_caseless_green_mag_Tracer
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};

	class 50Rnd_762x51_Box: 50Rnd_762x51_Box
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};

	class 150Rnd_762x51_Box_Tracer: 150Rnd_762x51_Box_Tracer
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};

	class RPG32_F: RPG32_F
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};

	class RPG32_HE_F: RPG32_HE_F
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};

	class NLAW_F: NLAW_F
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};

	class Titan_AT: Titan_AT
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};

	class Titan_AP: Titan_AP
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};

	class Titan_AA: Titan_AA
	{
		initSpeed = 105;
		descriptionShort = "Enjoy your ban";
		ammo = "BP_9x19_Rubber";
	};*/

	class BP_15Rnd_9x19OVP: CA_Magazine
	{
	    ammo = "BP_9x19OVP_Ball";
		count = 15;
		initSpeed = 435;
		displayName = "15Rnd 9x19mm +P+";
		descriptionuse = "15Rnd 9x19mm +P+";
		picture = "\breakingpoint_weapons\icons\m_g17OVP_ca.paa";
		descriptionshort = "Overpressure rounds, increased velocity and stopping power.";
		mass = 5;
	};

	class BP_7Rnd_765x17: CA_Magazine
	{
	    ammo = "BP_765x17_Ball";
		count = 7;
		initSpeed = 310;
		displayName = "7Rnd 7.65mm Browning";
		descriptionuse = "7Rnd 7.65mm Browning";
		picture = "\A3\weapons_f\data\ui\M_30Rnd_9x21_CA.paa";
		descriptionshort = "";
		mass = 5;
	};

	class BP_20Rnd_765x17: BP_7Rnd_765x17
	{
	    ammo = "BP_765x17_Ball";
		count = 20;
		initSpeed = 310;
		displayName = "20Rnd 7.65mm Browning";
		descriptionuse = "20Rnd 7.65mm Browning";
		picture = "\A3\weapons_f\data\ui\M_30Rnd_9x21_CA.paa";
		descriptionshort = "High capacity 7.65mm magazine";
		mass = 17;
	};

	class BP_6Rnd_45_Mag: CA_Magazine
	{
	    ammo = "BP_45ACP";
		displayName = "6Rnd .45ACP";
		count = 6;
		initSpeed = 350;
		picture = "\breakingpoint_weapons\icons\m_revolverJHP_ca.paa";
		descriptionshort = "";
		mass = 7;
	};

	class BP_6Rnd_45JHP_Mag: CA_Magazine
	{
	    ammo = "BP_45JHP";
		displayName = "6Rnd .45JHP";
		count = 6;
		initSpeed = 373;
		picture = "\breakingpoint_weapons\icons\m_revolverJHP_ca.paa";
		descriptionshort = "High velocity Hollow Point rounds for increased soft target damage.";
		mass = 7;
	};

	class BP_7Rnd_45acp: CA_Magazine
	{
	    ammo = "BP_45ACP";
		displayName = "7Rnd .45ACP";
		initSpeed = 350;
		count = 7;
		picture = "\breakingpoint_weapons\icons\m_colt1911_ca.paa";
		descriptionshort = "Standard .45ACP magazine";
		mass = 7;
	};

	class BP_8Rnd_45gov: CA_Magazine
	{
	    ammo = "BP_45GOV";
		initSpeed = 617;
		count = 8;
		displayName = "8Rnd .45-70";
		picture = "\breakingpoint_weapons\icons\m_45govt_ca.paa";
		descriptionshort = "High power 300g hunting rounds";
		mass = 12;
	};

	class BP_7Rnd_45JHP: CA_Magazine
	{
	    ammo = "BP_45JHP";
		count = 7;
		initSpeed = 373;
		displayName = "7Rnd .45JHP+";
		descriptionuse = "7Rnd .45JHP+";
		picture = "\breakingpoint_weapons\icons\m_kim45JHP_ca.paa";
		descriptionshort = "High velocity Hollow Point rounds for increased soft target damage";
		mass = 8;
	};

	class BP_7Rnd_45Rubber: CA_Magazine
	{
	    ammo = "BP_45Rubber";
		displayName = "7Rnd .45ACP TranQ rounds";
		initSpeed = 350;
		count = 7;
		picture = "\breakingpoint_weapons\icons\BP_45Rubber_ca.paa";
		descriptionshort = ".45ACP fast-acting Tranquillizer rounds";
		mass = 7;
	};

	class BP_12Rnd_45cal: CA_Magazine
	{
		ammo = "BP_45ACP";
		displayName = "12Rnd .45ACP";
		initSpeed = 350;
		count = 12;
		picture = "\breakingpoint_weapons\icons\BP_45Rubber_ca.paa";
		descriptionshort = "Hi-Capacity .45ACP magazine";
		mass = 9;
	};

	class BP_12Rnd_45JHP: CA_Magazine
	{
		ammo = "BP_45JHP";
		displayName = "12Rnd .45JHP+";
		initSpeed = 373;
		count = 12;
		picture = "\breakingpoint_weapons\icons\m_kim45JHP_ca.paa";
		descriptionshort = "Hi-Capacity .45JHP magazine";
		mass = 9;
	};

	class BP_15Rnd_45cal: CA_Magazine
	{
		ammo = "BP_45ACP";
		displayName = "15Rnd .45ACP";
		initSpeed = 350;
		count = 15;
		picture = "\breakingpoint_weapons\icons\BP_45Rubber_ca.paa";
		descriptionshort = "Hi-Capacity .45ACP magazine";
		mass = 10;
	};

	class BP_15Rnd_45JHP: CA_Magazine
	{
		ammo = "BP_45JHP";
		displayName = "15Rnd .45JHP";
		count = 15;
		initSpeed = 373;
		picture = "\breakingpoint_weapons\icons\m_kim45JHP_ca.paa";
		descriptionshort = "Hi-Capacity .45JHP magazine";
		mass = 10;
	};

	class BP_15Rnd_9x19_M9: CA_Magazine
	{
		ammo = "BP_9x19_Ball";
		initSpeed = 390;
		picture = "\breakingpoint_weapons\icons\m_glock17_ca.paa";
		descriptionshort = "";
		mass = 5;
	};

	class BP_6Rnd_357_Mag: CA_Magazine
	{
		scope = 2;
		displayName = "6Rnd .357 Magnum";
		count = 6;
		mass = 5;
		picture = "\breakingpoint_weapons\icons\m_44SuperMag_ca.paa";
		ammo = "BP_357mag_ball";
	};

	class BP_5Rnd_500Mag : CA_Magazine
	{
		displayName = "5Rnd .500 Magnum";
		picture = "\breakingpoint_weapons\icons\m_44SuperMag_ca.paa";
		ammo = "BP_500Mag_ball";
		count = 5;
		initSpeed = 600;
		descriptionuse = "5Rnd .500 Magnum";
		mass = 5;
	};

	class BP_6Rnd_44Mag : CA_Magazine
	{
		displayName = "6Rnd .44 Magnum";
		picture = "\breakingpoint_weapons\icons\m_44SuperMag_ca.paa";
		ammo = "BP_44Mag_ball";
		initSpeed = 460;
		count = 6;
		descriptionuse = ".44 Magnum";
		descriptionshort = "High power magnum pistol cartridge";
		mass = 7;
	};

	class BP_8Rnd_Slug : CA_Magazine
	{
		scope = 2;
		displayName = "8Rnd Slugs";
		picture = "\A3\Weapons_F\Data\UI\M_12gauge_slugs_CA.paa";
		count = 8;
		initSpeed = 609;
		ammo = "BP_12Gauge_Slug";
		descriptionShort = "High Power 12 Gauge Slugs";
		mass = 12;
	};

	class BP_2Rnd_Slug : CA_Magazine
	{
		scope = 2;
		displayName = "2Rnd Slugs";
		picture = "\A3\Weapons_F\Data\UI\M_12gauge_slugs_CA.paa";
		count = 2;
		initSpeed = 609;
		ammo = "BP_12Gauge_Slug";
		descriptionShort = "High Power 12 Gauge Slugs";
		mass = 4;
	};

	class BP_8Rnd_Buckshot : CA_Magazine
	{
		scope = 2;
		displayName = "8Rnd 00 Buckshot";
		picture = "\A3\Weapons_F\Data\UI\M_12gauge_slugs_CA.paa";
		count = 8;
		initSpeed = 365;
		ammo = "BP_12Gauge_Buck";
		descriptionShort = "12ga 00 Buckshot";
		mass = 10;
	};

	class BP_2Rnd_Buckshot : CA_Magazine
	{
		scope = 2;
		displayName = "2Rnd 00 Buckshot";
		picture = "\A3\Weapons_F\Data\UI\M_12gauge_slugs_CA.paa";
		count = 2;
		initSpeed = 365;
		ammo = "BP_12Gauge_Buck";
		descriptionShort = "12ga 00 Buckshot";
		mass = 4;
	};

	class BP_8Rnd_MagBuckshot : CA_Magazine
	{
		scope = 2;
		displayName = "8Rnd Magnum 000 Buckshot";
		picture = "\A3\Weapons_F\Data\UI\M_12gauge_slugs_CA.paa";
		count = 8;
		initSpeed = 440;
		ammo = "BP_12Gauge_Buck2";
		descriptionShort = "12ga Magnum 000 Buckshot";
		mass = 15;
	};

	class BP_2Rnd_MagBuckshot : CA_Magazine
	{
		scope = 2;
		displayName = "2Rnd Magnum 000 Buckshot";
		picture = "\A3\Weapons_F\Data\UI\M_12gauge_slugs_CA.paa";
		count = 2;
		initSpeed = 440;
		ammo = "BP_12Gauge_Buck2";
		descriptionShort = "12ga Magnum 000 Buckshot";
		mass = 5;
	};

	class BP_IED1_Mag: ATMine_Range_Mag
	{
		mass = 70;
		ammo = "BP_IED";
		picture = "\breakingpoint_weapons\icons\ied_v1_ca.paa";
		displayName = "Proximity IED";
		model = "\A3\Weapons_F\explosives\IED_urban_small.p3d";
		descriptionShort = "Improvised Explosive Device";

		class Library {
			libTextDesc = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine_Library0";
		};
		descriptionUse = "$STR_A3_use_mine";
	};

	class BP_1Rnd_HE_shell: CA_Magazine
	{
		scope = 2;
		type = 16;
		displayName = "$STR_A3_CfgMagazines_1Rnd_HE_Grenade_shell0";
		displayNameShort = "$STR_A3_CfgMagazines_1Rnd_HE_Grenade_shell_dns";
		picture = "\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
		ammo = "BP_40mm_HE";
		initSpeed = 185;
		count = 1;
		nameSound = "";
		descriptionShort = "$STR_A3_CfgMagazines_1Rnd_HE_Grenade_shell1";
		mass = 4;
		reloadAction = "GestureReloadTrgUGL";
	};

	class BP_3Rnd_HE_shell: CA_Magazine
	{
		scope = 2;
		type = 16;
		displayName = "$STR_A3_CfgMagazines_3Rnd_HE_Grenade_shell0";
		descriptionShort = "$STR_A3_CfgMagazines_3Rnd_HE_Grenade_shell1";
		mass = 12;
		picture = "\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
		ammo = "BP_40mm_HE";
		initSpeed = 185;
		count = 3;
		nameSound = "";
		reloadAction = "GestureReloadTrgUGL";
	};

	class BP_UGL_FlareWhite: CA_Magazine
	{
		scope = 2;
		type = 16;
		displayName = "$STR_A3_CfgMagazines_UGL_FlareWhite_F_test1";
		displayNameShort = "$STR_A3_CfgMagazines_UGL_FlareWhite_F_dns";
		picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_CA.paa";
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		ammo = "BP_40mm_White";
		initSpeed = 80;
		count = 1;
		nameSound = "";
		descriptionShort = "$STR_A3_CfgMagazines_UGL_FlareWhite_F1";
		weaponPoolAvailable = 1;
		mass = 4;
	};

	class BP_UGL_FlareGreen: BP_UGL_FlareWhite
	{
		displayName = "$STR_A3_CfgMagazines_UGL_FlareGreen_F0";
		displayNameShort = "$STR_A3_CfgMagazines_UGL_FlareGreen_F_dns";
		ammo = "BP_40mm_Green";
		picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_Green_CA.paa";
		descriptionShort = "$STR_A3_CfgMagazines_UGL_FlareGreen_F1";
	};

	class BP_UGL_FlareRed: BP_UGL_FlareWhite
	{
		displayName = "$STR_A3_CfgMagazines_UGL_FlareGreen_F0";
		displayNameShort = "$STR_A3_CfgMagazines_UGL_FlareGreen_F_dns";
		ammo = "BP_40mm_Red";
		picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_Green_CA.paa";
		descriptionShort = "$STR_A3_CfgMagazines_UGL_FlareGreen_F1";
	};
	class Human_Trap_Mag: ATMine_Range_Mag
	{
		author = "Kol9yN";
		mass = 40;
		ammo = "Human_Trap_Ammo";
		picture = "\breakingpoint\textures\icons\bp_beartrap_ca.paa";
		displayName = "Human Trap";
		model = "\breakingpoint\models\bp_beartrap.p3d";
		descriptionShort = "it will break ur legs, and head maybe...";
		class Library
		{
			libTextDesc = "Traps";
		};
		descriptionUse = "$STR_A3_use_mine";
		allowedSlots[] = {901,701};
	};
	class BP_P90_50Rnd_570x28: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_A3_CfgMagazines_50Rnd_570x28_SMG_031";
		ammo = "BP_P90_570x28_Ball";
		count = 50;
		initSpeed = 715;
		picture = "\a3\weapons_f_mod\data\m_adr97mag_ca.paa";
		tracersEvery = 0;
		descriptionShort = "$STR_A3_CfgMagazines_50Rnd_570x28_SMG_032";
		mass = 12;
	};
};
//-----------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//CLASS CREATION BULLETS|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-----------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

class CfgAmmo {
	class Default;	// External class reference
	class BulletCore;	// External class reference
	class BulletBase;	// External class reference
	class ShotgunBase;  // External class reference
	class ShellBase;    // External class reference
	class FlareBase;    // External class reference
	class GrenadeBase;  // External class reference
	class Rocketbase;   // External class reference
	class MissileCore;   // External class reference
	class MineBase;     // External class reference
	class GrenadeHand_Stone;    // External class reference
	class B_762x51_Ball;
	class B_65x39_Caseless;
	class B_9x21_Ball;
	class B_408_Ball;
	class B_556x45_Ball;
	class B_45ACP_Ball;
	class B_127x108_Ball;
	class GrenadeHand;
	class G_40mm_HE;
	class SmokeShell;
	class B_570x28_Ball;

	class BP_P90_570x28_Ball: B_570x28_Ball
	{
		caliber = 0.559441;
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalSpeed = 715;
		airFriction = -0.001412;
		deflecting = 20;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		nvgOnly = 1;
		audibleFire = 25;
		visibleFire = 3;
		visibleFireTime = 5;
		dangerRadiusBulletClose = 8;
		suppressionRadiusBulletClose = 6;
		dangerRadiusHit = 12;
		suppressionRadiusHit = 8;
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 2;
			MedicalChance = 50;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 2;
			BleedingChance = 30;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_Flashbang_Ammo: GrenadeHand
	{
		scope = 1;
		hit = 0.001;
		indirectHit = 0.001;
		indirectHitRange = 0.01;
		model = "\breakingpoint_weapons\models\m84\m84.p3d";
		visibleFire = 0.5;
		audibleFire = 0.05;
		visibleFireTime = 1;
		fuseDistance = 5;
		ExplosionEffects = "simplefbExplosion";
		soundHit1[] = {"breakingpoint_jsrs\sounds\m84.wav",1,10};
		soundHit2[] = {"breakingpoint_jsrs\sounds\m84.wav",1,10};
		soundHit3[] = {"breakingpoint_jsrs\sounds\m84.wav",1,10};
		soundHit4[] = {"breakingpoint_jsrs\sounds\m84.wav",1,10};
		soundHit5[] = {"breakingpoint_jsrs\sounds\m84.wav",1,10};
		soundHit6[] = {"breakingpoint_jsrs\sounds\m84.wav",1,10};
		soundHit[] = {"breakingpoint_jsrs\sounds\m84.wav",1,10};
	//	explosionSoundEffect = "flashbang2";
		explosionTime = 1.5;
	};

	class BP_GL_Flashbang_Ammo: G_40mm_HE
	{
		scope = 1;
		hit = 0.001;
		indirectHit = 0.001;
		indirectHitRange = 0.01;
		model = "\A3\weapons_f\ammo\UGL_slug";
		visibleFire = 0.1;
		audibleFire = 0.05;
		visibleFireTime = 1;
		fuseDistance = 4;
		ExplosionEffects = "simplefbExplosion";
		soundHit[] = {"",0,1};
		explosionSoundEffect = "";
		explosionTime = 2.5;
	};

	/*class BP_CSGas_Green: SmokeShell
	{
		model = "\A3\Weapons_f\ammo\smokegrenade_green";
		smokeColor[] = {0.2125,0.6258,0.48909998,1};
	};*/

	class BP_Arrow_Ball: BulletBase
	{
		hit = 45;
		timeToLive = 30;
		cost = 1;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "";
		typicalSpeed = 325;
		airFriction = -0.000267;
		waterFriction = 0;
		whistleDist = 1;
		caliber = 0.5;
		deflecting = 0;
		model = "\breakingpoint_weapons\models\crossbow\arrow_tracer.p3d";
		tracerScale = 1;
		tracerStartTime = 0;
		tracerEndTime = 3;
		visibleFire = 1;
		audibleFire = 1;
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		legFracture = true;
		class CamShakeHit
		{
			power = 2;
			duration = 1;
			frequency = 25;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 4;
			MedicalChance = 70;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 2;
			BleedingChance = 60;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_Arrow_Ball_Poison: BulletBase
	{
		hit = 10;
		timeToLive = 30;
		cost = 1;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "";
		typicalSpeed = 325;
		airFriction = -0.000267;
		waterFriction = 0;
		whistleDist = 1;
		caliber = 0.5;
		deflecting = 0;
		model = "\breakingpoint_weapons\models\crossbow\arrow_tracer.p3d";
		tracerScale = 1;
		tracerStartTime = 0;
		tracerEndTime = 3;
		visibleFire = 1;
		audibleFire = 1;
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		legFracture = true;
		class CamShakeHit
		{
			power = 2;
			duration = 1;
			frequency = 25;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 100;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 1;
			BleedingChance = 100;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 1; // 0 - Disabled / 1 - Enabled
			InfectionChance = 100; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 1; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 100; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_Arrow_Ball_Rambo: GrenadeBase
	{
		hit = 37;
		timeToLive = 30;
		cost = 1;
		indirectHit = 34;
		indirectHitRange = 4;
		cartridge = "";
		typicalSpeed = 290;
		airFriction = -0.000267;
		waterFriction = 0;
		whistleDist = 1;
		caliber = 0.5;
		deflecting = 0;
		model = "\breakingpoint_weapons\models\crossbow\arrow_tracer.p3d";
		tracerScale = 1;
		tracerStartTime = 0;
		tracerEndTime = 3;
		visibleFire = 1;
		audibleFire = 1;
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		legFracture = true;
		explosive = 1;
		fuseDistance = 2;
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_1", 3.162278, 1, 1000};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_2", 3.162278, 1, 1000};
		soundHit3[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_3", 3.162278, 1, 1000};
		soundHit4[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_4", 3.162278, 1, 1000};
		soundHit5[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_5", 3.162278, 1, 1000};
		soundHit6[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_6", 3.162278, 1, 1000};
		multiSoundHit[] = {"soundHit1", 0.200000, "soundHit2", 0.200000, "soundHit3", 0.200000, "soundHit4", 0.100000, "soundHit5", 0.150000, "soundHit6", 0.150000};
		explosionSoundEffect = "DefaultExplosion";
		simulation = "shotShell";
		class CamShakeExplode
		{
			power = "(40*0.2)";
			duration = "((round (40^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((3 + 40^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 20;
			duration = "((round (20^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(0^0.25)";
			duration = "((round (0^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((0^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0;
			duration = 0.100000;
			frequency = 20;
			distance = 1;
		};
	};

	class BP_Arrow_Ball_Fire: BulletBase
	{
		hit = 10;
		timeToLive = 30;
		cost = 1;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "";
		typicalSpeed = 325;
		airFriction = -0.000267;
		waterFriction = 0;
		whistleDist = 1;
		caliber = 0.5;
		deflecting = 0;
		model = "\breakingpoint_weapons\models\crossbow\arrow_tracer.p3d";
		tracerScale = 1;
		tracerStartTime = 0;
		tracerEndTime = 3;
		visibleFire = 1;
		audibleFire = 1;
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		legFracture = true;
		class CamShakeHit
		{
			power = 2;
			duration = 1;
			frequency = 25;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 100;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 1;
			BleedingChance = 100;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class Throwable_base: Default
	{
		model = "\A3\Weapons_f\ammo\Handgrenade";
		hit = 10;
		indirectHit = 8;
		indirectHitRange = 6;
		explosive = 1;
		explosionEffectsRadius = 5;
		typicalspeed = 60;
		deflecting = 15;
		cost = 40;
		simulation = "shotGrenade";
		simulationStep = 0.05;
		shadow = 1;
		soundFly[] = {"",0.099999994,1,20};
		soundEngine[] = {"",1,1};
		explosionSoundEffect = "DefaultExplosion";
		CraterEffects = "GrenadeCrater";
		CraterWaterEffects = "ImpactEffectsWaterExplosion";
		explosionEffects = "GrenadeExplosion";
		visibleFire = 2;
		audibleFire = 0.25;
		visibleFireTime = 0;
		whistleDist = 28;
		explosionTime = 5;
		timeToLive = 6;
		class HitEffects
		{
			hitWater = "ImpactEffectsWaterRocket";
		};
		class CamShakeExplode
		{
			power = "(30*0.2)";
			duration = "((round (30^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((7 + 30^0.5)*8)";
		};
	};
	class bp_GrenadeHand_stone: Throwable_base
	{
		hit = 0.5;
		indirectHit = 0.2;
		indirectHitRange = 1;
		dangerRadiusHit = 6;
		suppressionRadiusHit = -1;
		CraterEffects = "NoCrater";
		explosionEffects = "NoExplosion";
		explosive = 0;
		soundHit[] = {"",1,1};
		cost = 1;
		whistleDist = 0;
		class CamShakeExplode
		{
			power = "(0*0.2)";
			duration = "((round (0^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((0 + 0^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 5;
			duration = "((round (5^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
	};

	class bp_throwable: bp_GrenadeHand_stone
	{
		model = "\A3\Weapons_f\ammo\Handgrenade";
		hit = 0.50000;
		explosionEffectsRadius = 0;
		explosionTime = 0;
		simulation = "shotShell";
		CraterEffects = "NoCrater";
		typicalspeed = 25;
		fuseDistance = 0;
		timeToLive = 45;
		indirectHit = 0;
		indirectHitRange = 0;
		deflecting = 10;
		soundHit1[] = {};
		soundHit2[] = {};
		soundHit3[] = {};
		soundHit4[] = {};
		soundHit5[] = {};
		soundHit6[] = {};
		soundImpactDefault1[] = {"A3\sounds_f\weapons\hits\concrete_3", 2.511886, 1, 10};
		impactGroundSoft[] = {"soundImpactDefault1", 1};
		impactGroundHard[] = {"soundImpactDefault1", 1};
		impactMan[] = {"soundImpactDefault1", 1};
		impactIron[] = {"soundImpactDefault1", 1};
		impactArmor[] = {"soundImpactDefault1", 1};
		impactBuilding[] = {"soundImpactDefault1", 1};
		impactFoliage[] = {"soundImpactDefault1", 1};
		impactWood[] = {"soundImpactDefault1", 1};
		impactGlass[] = {"soundImpactDefault1", 1};
		impactGlassArmored[] = {"soundImpactDefault1", 1};
		impactConcrete[] = {"soundImpactDefault1", 1};
		impactRubber[] = {"soundImpactDefault1", 1};
		impactPlastic[] = {"soundImpactDefault1", 1};
		impactDefault[] = {"soundImpactDefault1", 1};
		impactMetal[] = {"soundImpactDefault1", 1};
		impactMetalplate[] = {"soundImpactDefault1", 1};
		impactWater[] = {"soundImpactDefault1", 1};
		soundDefault1[] = {"A3\sounds_f\weapons\hits\concrete_3", 1.800000, 1, 10};
		soundDefault2[] = {"A3\sounds_f\weapons\hits\concrete_5", 1.800000, 1, 10};
		soundDefault3[] = {"A3\sounds_f\weapons\hits\concrete_7", 1.800000, 1, 10};
		soundDefault4[] = {"A3\sounds_f\weapons\hits\hard_ground_1", 1.812538, 1, 10};
		soundDefault5[] = {"A3\sounds_f\weapons\hits\hard_ground_2", 1.812538, 1, 10};
		soundGlass1[] = {"A3\sounds_f\weapons\hits\glass_5", 1.812538, 1, 100};
		soundGlass2[] = {"A3\sounds_f\weapons\hits\glass_6", 1.812538, 1, 100};
		soundGlass3[] = {"A3\sounds_f\weapons\hits\glass_arm_6", 1.858925, 1, 60};
		soundGlass4[] = {"A3\sounds_f\weapons\hits\glass_arm_7", 1.858925, 1, 60};
		soundRubber1[] = {"A3\sounds_f\weapons\hits\tyre_4", 0.891251, 1, 10};
		soundRubber2[] = {"A3\sounds_f\weapons\hits\tyre_7", 0.891251, 1, 10};
		soundWater1[] = {"A3\sounds_f\weapons\hits\water_4", 1.000000, 1, 10};
		hitDefault[] = {"soundDefault1", 0.200000, "soundDefault2", 0.200000, "soundDefault3", 0.200000, "soundDefault4", 0.200000, "soundDefault5", 0.200000};
		hitGlass[] = {"soundGlass1", 0.4000000, "soundGlass2", 0.400000, "soundGlass3", 0.100000, "soundGlass4", 0.100000};
		hitRubber[] = {"soundRubber1", 0.600000, "soundRubber2", 0.4000000};
		hitWater[] = {"soundWater1", 0.125000};
		class HitEffects
		{
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitMetal = "ImpactMetal";
			hitMetalPlate = "ImpactMetal";
			hitBuilding = "ImpactPlaster";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitConcrete = "ImpactConcrete";
			hitMan = "ImpactEffectsBlood";
			hitGroundSoft = "ImpactEffectsSmall";
			hitGroundHard = "ImpactEffectsHardGround";
			hitWater = "ImpactEffectsWater";
		};
	};

	class BP_ThrowingKnife: bp_throwable
	{
		hit = 10.50000;
		typicalspeed = 20;
		model = "\breakingpoint\models\bp_knife.p3d";
		soundHitBody1[] = {"\breakingpoint_jsrs\sounds\Knife1.wav", 1.584893, 1, 10};
		soundHitBody2[] = {"\breakingpoint_jsrs\sounds\Knife2.wav", 1.584893, 1, 10};
		hitMan[] = {"soundHitBody1", 0.500000, "soundHitBody2", 0.500000};
		class CamShakeHit
		{
			power = 4;
			duration = 3;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 50;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 2;
			BleedingChance = 50;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_InfectedNeedle: bp_throwable
	{
		model = "\breakingpoint\models\bp_morphine2.p3d";
		soundHitBody1[] = {"\breakingpoint_jsrs\sounds\Generic1.wav", 1.584893, 1, 10};
		soundHitBody2[] = {"\breakingpoint_jsrs\sounds\Generic1.wav", 1.584893, 0.8, 10};
		hitMan[] = {"soundHitBody1", 0.500000, "soundHitBody2", 0.500000};
		class CamShakeHit
		{
			power = 1;
			duration = 1;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 1;
			MedicalChance = 100;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 1;
			BleedingChance = 100;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 1; // 0 - Disabled / 1 - Enabled
			InfectionChance = 100; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_Book1: bp_throwable
	{
		model = "\breakingpoint\models\bp_book1.p3d";
		soundHitBody1[] = {"\breakingpoint_jsrs\sounds\Generic1.wav", 1.584893, 1, 10};
		soundHitBody2[] = {"\breakingpoint_jsrs\sounds\Generic1.wav", 1.584893, 0.8, 10};
		hitMan[] = {"soundHitBody1", 0.500000, "soundHitBody2", 0.500000};
		class CamShakeHit
		{
			power = 1;
			duration = 1;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 5;
			MedicalChance = 10;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 0;
			BleedingChance = 0;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_Book2: bp_throwable
	{
		model = "\breakingpoint\models\bp_book2.p3d";
		soundHitBody1[] = {"\breakingpoint_jsrs\sounds\Generic1.wav", 1.584893, 1, 10};
		soundHitBody2[] = {"\breakingpoint_jsrs\sounds\Generic1.wav", 1.584893, 0.8, 10};
		hitMan[] = {"soundHitBody1", 0.500000, "soundHitBody2", 0.500000};
		class CamShakeHit
		{
			power = 1;
			duration = 1;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 5;
			MedicalChance = 10;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 0;
			BleedingChance = 0;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_Book3: bp_throwable
	{
		model = "\breakingpoint\models\bp_book3.p3d";
		soundHitBody1[] = {"\breakingpoint_jsrs\sounds\Generic1.wav", 1.584893, 1, 10};
		soundHitBody2[] = {"\breakingpoint_jsrs\sounds\Generic1.wav", 1.584893, 0.8, 10};
		hitMan[] = {"soundHitBody1", 0.500000, "soundHitBody2", 0.500000};
		class CamShakeHit
		{
			power = 1;
			duration = 1;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 5;
			MedicalChance = 10;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 0;
			BleedingChance = 0;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_Mug: bp_throwable
	{
		model = "\breakingpoint\models\bp_mug.p3d";
		soundHitBody1[] = {"\breakingpoint_jsrs\sounds\Generic1.wav", 1.584893, 1, 10};
		soundHitBody2[] = {"\breakingpoint_jsrs\sounds\Generic1.wav", 1.584893, 0.8, 10};
		hitMan[] = {"soundHitBody1", 0.500000, "soundHitBody2", 0.500000};
		class CamShakeHit
		{
			power = 2;
			duration = 1;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 5;
			MedicalChance = 25;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 0;
			BleedingChance = 10;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_Brick1: bp_throwable
	{
		hit = 7.450000;
		legFracture = true;
		model = "\breakingpoint\models\bp_brick1.p3d";
		soundHitBody1[] = {"\breakingpoint_jsrs\sounds\Brick1.wav", 1.584893, 1, 10};
		soundHitBody2[] = {"\breakingpoint_jsrs\sounds\Crowbar1.wav", 1.584893, 0.8, 10};
		hitMan[] = {"soundHitBody1", 0.500000, "soundHitBody2", 0.500000};
		class CamShakeHit
		{
			power = 6;
			duration = 1;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 5;
			MedicalChance = 85;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 2;
			BleedingChance = 50;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 1; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 40; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_Brick2: bp_throwable
	{
		hit = 7.750000;
		legFracture = true;
		model = "\breakingpoint\models\bp_brick2.p3d";
		soundHitBody1[] = {"\breakingpoint_jsrs\sounds\Brick1.wav", 1.584893, 1, 10};
		soundHitBody2[] = {"\breakingpoint_jsrs\sounds\Crowbar1.wav", 1.584893, 0.8, 10};
		hitMan[] = {"soundHitBody1", 0.500000, "soundHitBody2", 0.500000};
		class CamShakeHit
		{
			power = 8;
			duration = 1;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 5;
			MedicalChance = 85;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 2;
			BleedingChance = 50;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 1; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 40; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_Pottery: bp_throwable
	{
		model = "\breakingpoint\models\bp_pottery.p3d";
		soundHitBody1[] = {"\breakingpoint_jsrs\sounds\Brick1.wav", 1.584893, 1, 10};
		soundHitBody2[] = {"\breakingpoint_jsrs\sounds\Crowbar1.wav", 1.584893, 0.8, 10};
		hitMan[] = {"soundHitBody1", 0.500000, "soundHitBody2", 0.500000};
		class CamShakeHit
		{
			power = 1;
			duration = 1;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 5;
			MedicalChance = 25;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 0;
			BleedingChance = 10;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_Videotape: bp_throwable
	{
		model = "\breakingpoint\models\bp_videotape.p3d";
		soundHitBody1[] = {"\breakingpoint_jsrs\sounds\Generic1.wav", 1.584893, 1, 10};
		soundHitBody2[] = {"\breakingpoint_jsrs\sounds\Generic1.wav", 1.584893, 0.8, 10};
		hitMan[] = {"soundHitBody1", 0.500000, "soundHitBody2", 0.500000};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 5;
			MedicalChance = 5;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 0;
			BleedingChance = 10;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_ZipDisk: bp_throwable
	{
		model = "\breakingpoint\models\bp_zipdisk.p3d";
        soundHitBody1[] = {"\breakingpoint_jsrs\sounds\Generic1.wav", 1.584893, 1, 10};
		soundHitBody2[] = {"\breakingpoint_jsrs\sounds\Generic1.wav", 1.584893, 0.8, 10};
		hitMan[] = {"soundHitBody1", 0.500000, "soundHitBody2", 0.500000};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 5;
			MedicalChance = 5;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 0;
			BleedingChance = 10;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_Rock: bp_throwable
	{
		hit = 4.750000;
		model = "\breakingpoint\models\bp_rock.p3d";
		soundHitBody1[] = {"\breakingpoint_jsrs\sounds\Brick1.wav", 1.584893, 1, 10};
		soundHitBody2[] = {"\breakingpoint_jsrs\sounds\Crowbar1.wav", 1.584893, 0.8, 10};
		hitMan[] = {"soundHitBody1", 0.500000, "soundHitBody2", 0.500000};
		class CamShakeHit
		{
			power = 4;
			duration = 1;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 5;
			MedicalChance = 65;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 1;
			BleedingChance = 50;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 1; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 25; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_Plate1: bp_throwable
	{
		hit = 2.750000;
		model = "\breakingpoint\models\bp_plate1.p3d";
		soundHitBody1[] = {"\breakingpoint_jsrs\sounds\Brick1.wav", 1.584893, 1, 10};
		soundHitBody2[] = {"\breakingpoint_jsrs\sounds\Crowbar1.wav", 1.584893, 0.8, 10};
		hitMan[] = {"soundHitBody1", 0.500000, "soundHitBody2", 0.500000};
		class CamShakeHit
		{
			power = 3;
			duration = 1;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 5;
			MedicalChance = 50;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 1;
			BleedingChance = 50;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_Plate2: bp_throwable
	{
		hit = 3.750000;
		model = "\breakingpoint\models\bp_plate2.p3d";
		soundHitBody1[] = {"\breakingpoint_jsrs\sounds\Brick1.wav", 1.584893, 1, 10};
		soundHitBody2[] = {"\breakingpoint_jsrs\sounds\Crowbar1.wav", 1.584893, 0.8, 10};
		hitMan[] = {"soundHitBody1", 0.500000, "soundHitBody2", 0.500000};
		class CamShakeHit
		{
			power = 3;
			duration = 1;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 5;
			MedicalChance = 50;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 1;
			BleedingChance = 50;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_TennisBall: bp_throwable
	{
		model = "\breakingpoint\models\bp_tennisball.p3d";
		soundHitBody1[] = {"\breakingpoint_jsrs\sounds\Tennis1.wav", 1.584893, 1, 10};
		soundHitBody2[] = {"\breakingpoint_jsrs\sounds\Tennis1.wav", 1.584893, 0.8, 10};
		hitMan[] = {"soundHitBody1", 0.500000, "soundHitBody2", 0.500000};
		class CamShakeHit
		{
			power = 5;
			duration = 1;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 5;
			MedicalChance = 95;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 1;
			BleedingChance = 50;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_EmptyCan: bp_throwable
	{
		hit = 0.750000;
		model = "\breakingpoint\models\bp_canempty.p3d";
		class CamShakeHit
		{
			power = 2;
			duration = 1;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 5;
			MedicalChance = 50;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 1;
			BleedingChance = 50;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_HammerTime: bp_throwable
	{
		hit = 7.750000;
		model = "\breakingpoint\models\bp_hammer.p3d";
		soundHitBody1[] = {"\breakingpoint_jsrs\sounds\Brick1.wav", 1.584893, 1, 10};
		soundHitBody2[] = {"\breakingpoint_jsrs\sounds\Crowbar1.wav", 1.584893, 0.8, 10};
		hitMan[] = {"soundHitBody1", 0.500000, "soundHitBody2", 0.500000};
		class CamShakeHit
		{
			power = 5;
			duration = 1;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 5;
			MedicalChance = 95;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 2;
			BleedingChance = 50;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_AlarmClock_Ammo: bp_throwable
	{
		model = "\breakingpoint_weapons\models\AlarmClock\BP_AlarmClock.p3d";
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		explosionEffectsRadius = 0;
		typicalspeed = 60;
		deflecting = 15;
		cost = 40;
		simulation = "shotShell";
		simulationStep = 0.05;
		shadow = 1;
		soundHit[] = {};
		soundHit1[] = {"breakingpoint_sfx\effects\AlarmClock1.ogg",10.5022777,1,50};
		soundHit2[] = {};
		soundHit3[] = {};
		multiSoundHit[] = {"soundHit1",1};
		soundFly[] = {"",0.1,1,20};
		soundEngine[] = {"",1,1};
		explosionSoundEffect = "";
		CraterEffects = "NoCrater";
		CraterWaterEffects = "ImpactGlassThin";
		explosionEffects = "NoExplosion";
		visibleFire = 0;
		audibleFire = 0;
		visibleFireTime = 0;
		whistleDist = 0;
		explosionTime = 5;
		timeToLive = 50;
		class CamShakeExplode{};
		class CamShakeHit
		{
			power = 2;
			duration = 1;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 5;
			MedicalChance = 50;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 1;
			BleedingChance = 50;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class Melee : BulletBase
	{
		timeToLive = 0.05;
		typicalSpeed = 70;
		airFriction = -0.00001;
		proxyShape = "";
		explosive = 0;
		cartridge = "";
		simulation = "shotRocket";
		model = "\A3\Weapons_F\empty.p3d";
		muzzleEffect = "";
		soundFly[] = {"", 0, 1};
		soundEngine[] = {"", 0, 1};
		visibleFire = 0.1;	// how much is visible when this weapon is fired
		audibleFire = 0.01;
		caliber = 0.22000;
		visibleFireTime = 0;	// how long is it visible
		maxControlRange = 1;	// max range for manual control, 0 = no control (passive weapon)
		soundDefault1[] = {};
		soundDefault2[] = {};
		soundDefault3[] = {};
		soundDefault4[] = {};
		soundDefault5[] = {};
		soundHitBody1[] = {};
		soundHitBody2[] = {};
		soundConcrete1[] = {};
		soundConcrete2[] = {};
		soundConcrete3[] = {};
		soundGlass1[] = {"A3\sounds_f\weapons\hits\glass_5", 1.812538, 1, 100};
		soundGlass2[] = {"A3\sounds_f\weapons\hits\glass_6", 1.812538, 1, 100};
		soundGlass3[] = {"A3\sounds_f\weapons\hits\glass_arm_6", 1.858925, 1, 10};
		soundGlass4[] = {"A3\sounds_f\weapons\hits\glass_arm_7", 1.858925, 1, 10};
		soundGroundHard1[] = {};
		soundGroundHard2[] = {};
		soundRubber1[] = {"A3\sounds_f\weapons\hits\tyre_4", 0.891251, 1, 10};
		soundRubber2[] = {"A3\sounds_f\weapons\hits\tyre_7", 0.891251, 1, 10};
		soundWater1[] = {"A3\sounds_f\weapons\hits\water_4", 1.000000, 1, 10};
		bulletFly1[] = {"", 0.000008, 1, 30};
		bulletFly2[] = {"", 0.794328, 1, 30};
		bulletFly3[] = {"", 0.794328, 1, 30};
		bulletFly4[] = {"", 0.794328, 1, 30};
		bulletFly5[] = {"", 0.794328, 1, 30};
		bulletFly6[] = {"", 0.794328, 1, 30};
		bulletFly7[] = {"", 0.794328, 1, 30};
		bulletFly8[] = {"", 0.794328, 1, 30};
		bulletFly[] = {"bulletFly1", 0.166000, "bulletFly2", 0.166000, "bulletFly3", 0.166000, "bulletFly4", 0.166000, "bulletFly5", 0.166000, "bulletFly6", 0.167000, "bulletFly7", 0.166000, "bulletFly8", 0.167000};
		hitDefault[] = {"soundDefault1", 0.200000, "soundDefault2", 0.200000, "soundDefault3", 0.200000, "soundDefault4", 0.200000, "soundDefault5", 0.200000};
		hitGlass[] = {"soundGlass1", 0.4000000, "soundGlass2", 0.400000, "soundGlass3", 0.100000, "soundGlass4", 0.100000};
		hitGroundHard[] = {"soundGroundHard1", 0.600000, "soundGroundHard2", 0.400000};
		hitConcrete[] = {"soundConcrete1", 0.33000, "soundConcrete2", 0.33000, "soundConcrete3", 0.34000};
		hitRubber[] = {"soundRubber1", 0.600000, "soundRubber2", 0.4000000};
		hitWater[] = {"soundWater1", 0.125000};
		hitMan[] = {"soundHitBody1", 0.500000, "soundHitBody2", 0.500000};
		supersonicCrackNear[] = {"", 0.354813, 1, 10};
		supersonicCrackFar[] = {"", 0.281838, 1, 10};
		cost = 0.01;
		deflecting = 0;
		effectsMissileInit = "";
		effectsMissile = "EmptyEffect";
		effectsSmoke = "";
		explosionEffects = "";
		craterEffects = "";
		class HitEffects
		{
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitMetal = "ImpactMetal";
			hitMetalPlate = "ImpactMetal";
			hitBuilding = "ImpactPlaster";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitConcrete = "ImpactConcrete";
			hitMan = "ImpactEffectsBlood";
			hitGroundSoft = "";
			hitGroundHard = "";
			hitWater = "ImpactEffectsWater";
			default_mat = "";
		};
	};

	class BP_Stab : BulletBase
	{
		hit = 5;
		//indirectHit = 10;
		//indirectHitRange = 1;
		explosive = "false";
		timeToLive = 0.05;
		typicalSpeed = 70;
		airFriction = -0.00001;
		soundFly[] = {"", 0, 1};
		soundEngine[] = {"", 0, 1};
		visibleFire = 0.1;	// how much is visible when this weapon is fired
		audibleFire = 0.01;
		caliber = 0.22000;
		visibleFireTime = 0;	// how long is it visible
		maxControlRange = 1;	// max range for manual control, 0 = no control (passive weapon)
		soundDefault1[] = {};
		soundDefault2[] = {};
		soundDefault3[] = {};
		soundDefault4[] = {};
		soundDefault5[] = {};
		soundHitBody1[] = {};
		soundHitBody2[] = {};
		soundConcrete1[] = {};
		soundConcrete2[] = {};
		soundConcrete3[] = {};
		soundGlass1[] = {"A3\sounds_f\weapons\hits\glass_5", 1.812538, 1, 10};
		soundGlass2[] = {"A3\sounds_f\weapons\hits\glass_6", 1.812538, 1, 10};
		soundGlass3[] = {"A3\sounds_f\weapons\hits\glass_arm_6", 1.858925, 1, 10};
		soundGlass4[] = {"A3\sounds_f\weapons\hits\glass_arm_7", 1.858925, 1, 10};
		soundGroundHard1[] = {};
		soundGroundHard2[] = {};
		soundRubber1[] = {"A3\sounds_f\weapons\hits\tyre_4", 0.891251, 1, 10};
		soundRubber2[] = {"A3\sounds_f\weapons\hits\tyre_7", 0.891251, 1, 10};
		soundWater1[] = {"A3\sounds_f\weapons\hits\water_4", 1.000000, 1, 10};
		hitDefault[] = {"soundDefault1", 0.200000, "soundDefault2", 0.200000, "soundDefault3", 0.200000, "soundDefault4", 0.200000, "soundDefault5", 0.200000};
		hitGlass[] = {"soundGlass1", 0.4000000, "soundGlass2", 0.400000, "soundGlass3", 0.100000, "soundGlass4", 0.100000};
		hitGroundHard[] = {"soundGroundHard1", 0.600000, "soundGroundHard2", 0.400000};
		hitConcrete[] = {"soundConcrete1", 0.33000, "soundConcrete2", 0.33000, "soundConcrete3", 0.34000};
		hitRubber[] = {"soundRubber1", 0.600000, "soundRubber2", 0.4000000};
		hitWater[] = {"soundWater1", 0.125000};
		hitMan[] = {"soundHitBody1", 0.500000, "soundHitBody2", 0.500000};
		supersonicCrackNear[] = {"", 0, 0, 0};
		supersonicCrackFar[] = {"", 0, 0, 0};
		deflecting = 0;
		explosionEffects = "ImpactBlood";
		craterEffects = "ImpactEffectsBlood";
		model = "\A3\Weapons_F\empty.p3d";
		class HitEffects
		{
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitMetal = "ImpactMetal";
			hitMetalPlate = "ImpactMetal";
			hitBuilding = "ImpactPlaster";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitConcrete = "ImpactConcrete";
			hitMan = "ImpactEffectsBlood";
			hitGroundSoft = "";
			hitGroundHard = "";
			hitWater = "ImpactEffectsWater";
			default_mat = "";
		};
	};

	class BP_Hatchet_Swing_Ammo : Melee
	{
		hit = 10;
		typicalSpeed = 85;
		timeToLive = 0.020;
		airFriction = -0.000001;
		soundFly[] = {"", 0, 1};
		soundEngine[] = {"", 0, 1};
		visibleFire = 0.1;	// how much is visible when this weapon is fired
		audibleFire = 0.01;
		caliber = 1.00000;
		deflecting = 0;
		model = "\A3\Weapons_F\empty.p3d";
		class Melee
		{
			damageHit = 0.35; // Hit Damage (Zombies)
			damageBlood = 3500; // Blood Damage (Players)
			anim = "GestureSwing";
			radius = 2.5; //Radius In Meters Of Targets
			angle = 50; //Angle Of Hit Detection
			sounds[] =
			{
				{"breakingpoint_jsrs\sounds\Hatchet1.wav", 1.384893, 1, 10},
				{"breakingpoint_jsrs\sounds\Hatchet1.wav", 1.184893, 0.7, 10},
				{"breakingpoint_jsrs\sounds\Hatchet1.wav", 1.284893, 1.1, 10}
			};
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 80;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 3;
			BleedingChance = 50;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 1; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 25; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_Katana_Swing_Ammo : Melee
	{
		hit = 12;
		typicalSpeed = 85;
		//explosive = 1;
		//explosionTime = 0.1;
		timeToLive = 0.020;
		airFriction = -0.000001;
		soundFly[] = {"", 0, 1};
		soundEngine[] = {"", 0, 1};
		visibleFire = 0.1;	// how much is visible when this weapon is fired
		audibleFire = 0.01;
		caliber = 1.70000;
		model = "\A3\Weapons_F\empty.p3d";
		class Melee
		{
			damageHit = 0.7; // Hit Damage (Zombies)
			damageBlood = 4700; // Blood Damage (Players)
			anim = "GestureSwing3";
			radius = 2.2; //Radius In Meters Of Targets
			angle = 82; //Angle Of Hit Detection
			sounds[] =
			{
				{"breakingpoint_jsrs\sounds\Machete1.wav", 1.284893, 1, 10},
				{"breakingpoint_jsrs\sounds\Machete1.wav", 1.184893, 1.1, 10},
				{"breakingpoint_jsrs\sounds\Machete1.wav", 1.584893, 0.8, 10}
			};

		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 4;
			MedicalChance = 70;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 4;
			BleedingChance = 50;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_Pickaxe_Swing_Ammo : Melee
	{
		hit = 10;
		typicalSpeed = 85;
		timeToLive = 0.020;
		airFriction = -0.000001;
		soundFly[] = {"", 0, 1};
		soundEngine[] = {"", 0, 1};
		visibleFire = 0.1;	// how much is visible when this weapon is fired
		audibleFire = 0.01;
		caliber = 1.52000;
		legFracture = false;
		deflecting = 0;
		explosionEffects = "";
		craterEffects = "";
		model = "\A3\Weapons_F\empty.p3d";
		class Melee
		{
			damageHit = 0.5; // Hit Damage (Zombies)
			damageBlood = 4500; // Blood Damage (Players)
			anim = "GestureSwing2";
			radius = 2.4; //Radius In Meters Of Targets
			angle = 50; //Angle Of Hit Detection
			sounds[] =
			{
				{"breakingpoint_jsrs\sounds\Machete1.wav", 1.284893, 1, 10},
				{"breakingpoint_jsrs\sounds\Machete1.wav", 1.184893, 1.1, 10},
				{"breakingpoint_jsrs\sounds\Machete1.wav", 1.584893, 0.8, 10}
			};
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 70;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 3;
			BleedingChance = 50;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 1; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 30; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_Hammer_Swing_Ammo : Melee
	{
		hit = 10;
		typicalSpeed = 85;
		//explosive = 1;
		//explosionTime = 0.1;
		timeToLive = 0.020;
		airFriction = -0.000001;
		soundFly[] = {"", 0, 1};
		soundEngine[] = {"", 0, 1};
		visibleFire = 0.1;	// how much is visible when this weapon is fired
		audibleFire = 0.02;
		caliber = 1.52000;
		legFracture = true;
		explosionEffects = "";
		craterEffects = "";
		model = "\A3\Weapons_F\empty.p3d";
		class Melee
		{
			damageHit = 0.8; // Hit Damage (Zombies)
			damageBlood = 4000; // Blood Damage (Players)
			anim = "GestureSwing2";
			radius = 2.7; //Radius In Meters Of Targets
			angle = 60; //Angle Of Hit Detection
			sounds[] =
			{
				{"breakingpoint_jsrs\sounds\Hatchet1.wav", 1.384893, 1, 10},
				{"breakingpoint_jsrs\sounds\Hatchet1.wav", 1.184893, 0.7, 10},
				{"breakingpoint_jsrs\sounds\Hatchet1.wav", 1.284893, 1.1, 10}
			};
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 1;
			MedicalChance = 95;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 1;
			BleedingChance = 50;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 1; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 100; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_Shovel_Swing_Ammo: Melee
	{
		hit = 10;
		typicalSpeed = 85;
		timeToLive = 0.02;
		airFriction = -0.00001;
		soundFly[] = {"",0,1};
		soundEngine[] = {"",0,1};
		visibleFire = 0.1;
		audibleFire = 0.02;
		caliber = 0.9;
		legFracture = 0;
		deflecting = 0;
		explosionEffects = "";
		craterEffects = "";
		model = "\A3\Weapons_F\empty.p3d";
		class Melee
		{
			damageHit = 0.8;
			damageBlood = 2850;
			anim = "GestureSwing2";
			radius = 2.5;
			angle = 70;
			sounds[] =
			{
				{"breakingpoint_jsrs\sounds\Hatchet1.wav", 1.384893, 1, 10},
				{"breakingpoint_jsrs\sounds\Hatchet1.wav", 1.184893, 0.7, 10},
				{"breakingpoint_jsrs\sounds\Hatchet1.wav", 1.284893, 1.1, 10}
			};
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 45;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 2;
			BleedingChance = 60;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 1; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.4; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 1; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 45; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_Hammer_Swing_Ammo2 : Melee
	{
		hit = 15;
		typicalSpeed = 85;
		timeToLive = 0.020;
		airFriction = -0.000001;
		soundFly[] = {"", 0, 1};
		soundEngine[] = {"", 0, 1};
		visibleFire = 0.1;	// how much is visible when this weapon is fired
		audibleFire = 0.02;
		caliber = 1.52000;
		legFracture = true;
		explosionEffects = "";
		craterEffects = "";
		model = "\A3\Weapons_F\empty.p3d";
		class Melee
		{
			damageHit = 1; // Hit Damage (Zombies)
			damageBlood = 5000; // Blood Damage (Players)
			anim = "GestureSwing2";
			radius = 2.7; //Radius In Meters Of Targets
			angle = 65; //Angle Of Hit Detection
			sounds[] =
			{
				{"breakingpoint_jsrs\sounds\Hatchet1.wav", 1.384893, 1, 10},
				{"breakingpoint_jsrs\sounds\Hatchet1.wav", 1.184893, 0.7, 10},
				{"breakingpoint_jsrs\sounds\Hatchet1.wav", 1.284893, 1.1, 10}
			};
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 85;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 3;
			BleedingChance = 50;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 1; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 100; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_Rifle_Melee : BP_Stab
	{
		hit = 4;
		explosive = "false";
		simulation = "shotShell";
		timeToLive = 0.015;
		class Melee
		{
			damageHit = 0.5; // Hit Damage (Zombies)
			damageBlood = 1000; // Blood Damage (Players)
			anim = "GestureMelee";
			radius = 2.2; //Radius In Meters Of Targets
			angle = 55; //Angle Of Hit Detection
			sounds[] =
			{
				{"breakingpoint_jsrs\sounds\Hatchet1.wav", 1.084893, 1, 10},
				{"breakingpoint_jsrs\sounds\Hatchet1.wav", 1.184893, 0.7, 10},
				{"breakingpoint_jsrs\sounds\Hatchet1.wav", 0.884893, 1.1, 10}
			};
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 2;
			MedicalChance = 70;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 1;
			BleedingChance = 30;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 1; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 12; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};
	class BP_Bayonet : BP_Stab
	{
		hit = 6;
		explosive = "false";
		simulation = "shotShell";
		timeToLive = 0.015;
		class Melee
		{
			damageHit = 0.6; // Hit Damage (Zombies)
			damageBlood = 2000; // Blood Damage (Players)
			anim = "GestureStab";
			radius = 2.2; //Radius In Meters Of Targets
			angle = 35; //Angle Of Hit Detection
			sounds[] =
			{
				{"breakingpoint_jsrs\sounds\Machete1.wav", 1.284893, 1, 10},
				{"breakingpoint_jsrs\sounds\Machete1.wav", 1.184893, 1.1, 10},
				{"breakingpoint_jsrs\sounds\Machete1.wav", 1.584893, 0.8, 10}
			};
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 60;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 3;
			BleedingChance = 50;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 1; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 15; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

		class BP_B_545x39_Ball_F : BulletBase {
		airFriction = -0.0013;
		caliber = 0.5;
		deflecting = 20;
		hit = 10.90;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		nvgOnly = 0;
		tracerEndTime = 1;
		tracerScale = 1;
		tracerStartTime = 0.05;
		typicalSpeed = 880;
		audibleFire = 14;
		visibleFire = 10;
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 45;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 2;
			BleedingChance = 85;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};
	class BP_B_545x39_Ball_Green_F : BP_B_545x39_Ball_F {
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class BP_B_762x39_Ball_F : BulletBase {
		airFriction = -0.001;
		caliber = 1.6;
		hit = 17.00;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 22;
		audibleFire = 26;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		nvgOnly = 0;
		tracerEndTime = 1;
		tracerScale = 1;
		tracerStartTime = 0.05;
		typicalSpeed = 730;
	};
	class BP_B_762x39_Ball_Green_F : BP_B_762x39_Ball_F {
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class BP_556x45_Ball_Tracer_Yellow: B_556x45_Ball{
		hit = 12.87;
		typicalSpeed = 940;
		indirectHit = 0;
		indirectHitRange = 0;
		simulationStep = 0.10;
		airFriction = -0.001670;
		caliber = 0.500000;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale = 1;
		tracerStartTime = 0.050000;
		tracerEndTime = 1.5;
		audibleFire = 17;
		visibleFire = 10;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball_far", 0.981838, 1, 150};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 2;
			MedicalChance = 70;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 1;
			BleedingChance = 75;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};
	class BP_556x45_Ball_Tracer_Red: B_556x45_Ball{
		hit = 12.87;
		typicalSpeed = 940;
		indirectHit = 0;
		indirectHitRange = 0;
		simulationStep = 0.10;
		airFriction = -0.001670;
		caliber = 0.500000;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 1;
		tracerStartTime = 0.050000;
		tracerEndTime = 1.5;
		audibleFire = 17;
		visibleFire = 10;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball_far", 0.981838, 1, 150};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 2;
			MedicalChance = 70;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 1;
			BleedingChance = 75;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};


	class BP_580x42_Ball_F : BulletBase {
		airFriction = -0.0011;
		caliber = 0.9;
		deflecting = 20;
		hit = 12.4;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		nvgOnly = 0;
		tracerEndTime = 1;
		tracerScale = 1;
		tracerStartTime = 0.05;
		typicalSpeed = 870;
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 2;
			MedicalChance = 70;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 1;
			BleedingChance = 75;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_762x51_Ball: B_762x51_Ball
	{
	    hit = 19.69;
		typicalSpeed = 833;
		simulationStep = 0.09;
		caliber = 1.5700000;
		airFriction = -0.000790;
		audibleFire = 25;
		visibleFire = 30;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball_far", 0.991838, 1, 150};
		class CamShakeHit
		{
			power = 5;
			duration = 1;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 60;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 3;
			BleedingChance = 50;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
    };

	class BP_762OVP_Ball: B_762x51_Ball
	{
	    hit = 20.99;
		typicalSpeed = 893;
		caliber = 1.7700000;
		airFriction = -0.000790;
		audibleFire = 25;
		visibleFire = 10;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball_far", 0.991838, 1, 150};
		class CamShakeHit
		{
			power = 5;
			duration = 1;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 70;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 3;
			BleedingChance = 70;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
    };

    class BP_762x51_M80A1: B_762x51_Ball
	{
	    hit = 21.21;
		typicalSpeed = 847;
		simulationStep = 0.12;
		airFriction = -0.000733;
		caliber = 2.1500000;
		audibleFire = 28;
		visibleFire = 10;
		legFracture = true;
		muzzleEffect = "BIS_Effects_HeavySniper";
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball_far", 1.191838, 1, 180};
		class CamShakeFire
		{
			power = 1;
			duration = 0.300000;
			frequency = 20;
			distance = 5;
		};
		class CamShakeHit
		{
			power = 7;
			duration = 1;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 70;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 3;
			BleedingChance = 95;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0.5; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 60; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_762x51_AI: B_762x51_Ball
	{
	    hit = 40.60;
		typicalSpeed = 1533;
		simulationStep = 0.95;
		airFriction = -0.000070;
		caliber = 5.1500000;
		audibleFire = 0;
		visibleFire = 0;
		legFracture = true;
		muzzleEffect = "BIS_Effects_HeavySniper";
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball_far", 0.691838, 1, 180};
		class CamShakeFire
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
		class CamShakeHit
		{
			power = 15;
			duration = 2;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 0;
			MedicalChance = 0;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 3;
			BleedingChance = 100;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_50Cal_AI: B_762x51_Ball  {
	    hit = 90.60;
		typicalSpeed = 1533;
		simulationStep = 0.95;
		airFriction = -0.000070;
		caliber = 7.1500000;
		audibleFire = 0;
		visibleFire = 0;
		legFracture = true;
		muzzleEffect = "BIS_Effects_HeavySniper";
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball_far", 0.691838, 1, 180};
		class CamShakeFire
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
		class CamShakeHit
		{
			power = 15;
			duration = 2;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 0;
			MedicalChance = 0;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 3;
			BleedingChance = 100;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_762OVP_M80A1: B_762x51_Ball
	{
	    hit = 23.60;
		typicalSpeed = 920;
		airFriction = -0.000770;
		caliber = 2.2500000;
		audibleFire = 28;
		visibleFire = 10;
		legFracture = true;
		muzzleEffect = "BIS_Effects_HeavySniper";
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball_far", 1.191838, 1, 180};
		class CamShakeFire
		{
			power = 1;
			duration = 0.300000;
			frequency = 20;
			distance = 5;
		};
		class CamShakeHit
		{
			power = 7;
			duration = 1;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 80;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 3;
			BleedingChance = 95;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_762x51_Mk316Mod0: B_762x51_Ball
	{
	    hit = 20.10;
		typicalSpeed = 790;
		simulationStep = 0.12;
		airFriction = -0.000600;
		caliber = 1.6700000;
		audibleFire = 25;
		visibleFire = 10;
		legFracture = true;
		muzzleEffect = "BIS_Effects_HeavySniper";
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball_far", 0.991838, 1, 170};
		class CamShakeHit
		{
			power = 7;
			duration = 1;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 80;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 3;
			BleedingChance = 75;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0.5; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 45; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_762OVP_Mk316Mod0: B_762x51_Ball
	{
	    hit = 22.10;
		typicalSpeed = 815;
		simulationStep = 0.12;
		airFriction = -0.000703;
		caliber = 1.6700000;
		audibleFire = 25;
		visibleFire = 10;
		legFracture = true;
		muzzleEffect = "BIS_Effects_HeavySniper";
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball_far", 0.991838, 1, 170};
		class CamShakeHit
		{
			power = 7;
			duration = 1;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 80;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 3;
			BleedingChance = 95;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_556x45_Ball: B_556x45_Ball //LEFT OFF HERE
	{
		hit = 12.87;
		typicalSpeed = 940;
		indirectHit = 0;
		indirectHitRange = 0;
		simulationStep = 0.10;
		airFriction = -0.001670;
		caliber = 0.500000;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale = 1;
		tracerStartTime = 0.050000;
		tracerEndTime = 1.5;
		audibleFire = 17;
		visibleFire = 10;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball_far", 0.981838, 1, 150};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 2;
			MedicalChance = 70;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 1;
			BleedingChance = 75;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_556OVP_Ball: B_556x45_Ball
	{
		hit = 13.87;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalSpeed = 985;
		airFriction = -0.00167;
		caliber = 0.700000;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale = 1;
		tracerStartTime = 0.050000;
		tracerEndTime = 1;
		audibleFire = 20;
		visibleFire = 10;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball_far", 0.981838, 1, 150};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 2;
			MedicalChance = 70;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 1;
			BleedingChance = 75;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_556x45old_Ball: B_556x45_Ball
	{
		hit = 10.87;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalSpeed = 820;
		airFriction = -0.001970;
		caliber = 0.500000;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale = 1;
		tracerStartTime = 0.050000;
		tracerEndTime = 1;
		audibleFire = 20;
		visibleFire = 10;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball_far", 0.981838, 1, 150};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 2;
			MedicalChance = 50;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 1;
			BleedingChance = 50;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_556x45_BallMk262: B_556x45_Ball
	{
		hit = 17.95;
		indirectHit = 0;
		typicalSpeed = 886;
		indirectHitRange = 0;
		simulationStep = 0.13;
		airFriction = -0.000982;
		caliber = 0.900000;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		legFracture = true;
		tracerScale = 1;
		tracerStartTime = 0.050000;
		tracerEndTime = 1;
		audibleFire = 19;
		visibleFire = 10;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball_far", 0.981838, 1, 150};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 60;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 2;
			BleedingChance = 75;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_556OVP_Mk262: B_556x45_Ball
	{
		hit = 18.95;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalSpeed = 910;
		airFriction = -0.000982;
		caliber = 0.900000;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		legFracture = true;
		tracerScale = 1;
		tracerStartTime = 0.050000;
		tracerEndTime = 1;
		lastRoundsTracer = 0;
		audibleFire = 20;
		visibleFire = 10;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball_far", 0.981838, 1, 150};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 90;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 3;
			BleedingChance = 75;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_556x45_BallM855A1: B_556x45_Ball
	{
		hit = 18.00;
		airFriction = -0.000982;
		simulationStep = 0.11;
		caliber = 1.350000;
		typicalSpeed = 970;
		audibleFire = 22;
		visibleFire = 10;
		lastRoundsTracer = 0;
		legFracture = true;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball_far", 1.181838, 1, 175};

		class CamShakeHit
		{
			power = 7;
			duration = 1;
			frequency = 20;
		};

		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 80;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 3;
			BleedingChance = 60;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
    };

	class BP_556x45_OVPM855A1: B_556x45_Ball
	{
		hit = 19.87;
		airFriction = -0.000982;
		caliber = 1.370000;
		typicalSpeed = 960;
		audibleFire = 27;
		visibleFire = 10;
		legFracture = true;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball_far", 1.181838, 1, 175};

		class CamShakeHit
		{
			power = 7;
			duration = 1;
			frequency = 20;
		};

		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 90;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 3;
			BleedingChance = 70;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
    };

	class BP_50BW_Ball_F : BulletBase { //["BulletCore","Default"]
		airFriction = -0.0012;
		caliber = 3.8;
		hit = 23.85;
		legFracture = true;
		class CamShakeHit
		{
			power = 10;
			duration = 1;
			frequency = 20;
		};
		//indirectHit = 12;
		//indirectHitRange = 0.2;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		nvgOnly = 0;
		tracerEndTime = 1;
		tracerScale = 1;
		tracerStartTime = 0.05;
		typicalSpeed = 550;
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 4;
			MedicalChance = 70;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 4;
			BleedingChance = 95;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 1; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 85; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_556x45_Ball_SD: B_556x45_Ball
	{
		hit = 16.75;
		audibleFire = 2.50000;
		visibleFire = 10;
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 1;
			MedicalChance = 90;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 2;
			BleedingChance = 45;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_NonLethal: B_556x45_Ball
	{
	    hit = 1.50;
		typicalSpeed = 680;
		airFriction = -0.003100;
		audibleFire = 1;
		visibleFire = 10;
		indirectHit = 0;
		indirectHitRange = 0;
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
	};

	class BP_Arrow_Ball_Tranq: BP_NonLethal
	{
		hit = 2;
		timeToLive = 30;
		cost = 1;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "";
		typicalSpeed = 325;
		airFriction = -0.000467;
		waterFriction = 0;
		whistleDist = 1;
		caliber = 0.5;
		deflecting = 1;
		model = "\breakingpoint_weapons\models\crossbow\arrow_tracer.p3d";
		tracerScale = 1;
		tracerStartTime = 0;
		tracerEndTime = 3;
		visibleFire = 1;
		audibleFire = 1;
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		legFracture = true;
		class CamShakeHit
		{
			power = 10;
			duration = 2;
			frequency = 20;
		};
			class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 2;
			MedicalChance = 80;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 0;
			BleedingChance = 15;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};

	};

	class BP_762x51_Ball_Rubber: BP_NonLethal
	{
		hit = 1.90;
		typicalSpeed = 650;
		simulationStep = 0.09;
		audibleFire = 5.00000;
		visibleFire = 10;
		indirectHit = 0;
		indirectHitRange = 0;
		caliber = 0.100000;
		airFriction = -0.001700;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball_far", 0.991838, 1, 150};
		class CamShakeHit
		{
			power = 10;
			duration = 2;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 1;
			MedicalChance = 60;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 0;
			BleedingChance = 15;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_556x45_Ball_Rubber: BP_NonLethal
	{
		hit = 1.25;
		audibleFire = 10.50000;
		visibleFire = 10;
		indirectHit = 0;
		indirectHitRange = 0;
		caliber = 0.100000;
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		class CamShakeHit
		{
			power = 10;
			duration = 2;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 1;
			MedicalChance = 80;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 0;
			BleedingChance = 15;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_545x39_Ball: B_556x45_Ball
	{
		hit = 10.90;
		cartridge = "FxCartridge_65";
		audibleFire = 14;
		visibleFire = 10;
		typicalSpeed = 880;
		simulationStep = 0.09;
		caliber = 0.500000;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 1.000000;
		tracerStartTime = 0.114000;//100m delay
		tracerEndTime = 1.7;
		airFriction = -0.001478;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball", 0.20000, 1, 30};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball_far", 1.000, 1, 150};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 45;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 2;
			BleedingChance = 85;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_545OVP_Ball: B_556x45_Ball
	{
		hit = 11.90;
		cartridge = "FxCartridge_65";
		audibleFire = 14;
		visibleFire = 10;
		typicalSpeed = 920;
		caliber = 0.500000;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 1.000000;
		tracerStartTime = 0.050000;
		tracerEndTime = 1;
		airFriction = -0.001453;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball", 0.20000, 1, 30};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball_far", 1.000, 1, 150};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 65;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 2;
			BleedingChance = 85;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};
	class BP_545x39_HP: B_556x45_Ball
	{
		hit = 12.75;
		cartridge = "FxCartridge_65";
		audibleFire = 14;
		visibleFire = 10;
		typicalSpeed = 895;
		simulationStep = 0.09;
		caliber = 0.2;//low value to simulate HP poor penetration
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 1;
		tracerStartTime = 0.125;
		tracerEndTime = 1;
		airFriction = -0.001687;//worse airfriction because HP, not JHP
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_545x39_Ball",0.2,1,30};//bekfix custom, perhaps unnecessary
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_545x39_Ball_far",1,1,150};
		class Medical
		{
			InstantBleeding = 1;
			MedicalState = 3;
			MedicalChance = 70;//bekfix inc this or lower 556
			BleedingLevel = 3;
			BleedingChance = 93;
			Infection = 0;
			InfectionChance = 0.5;
			Knockout = 0;
			KnockoutChance = 0.2;
			scale = 0;
		};
	};
	class BP_545x39_7N22: B_556x45_Ball
	{
		hit = 16.75;
		cartridge = "FxCartridge_65";
		audibleFire = 14;
		visibleFire = 10;
		typicalSpeed = 890;
		simulationStep = 0.09;
		caliber = 1.34;//high value for AP round
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 1;
		tracerStartTime = 0.125;
		tracerEndTime = 1;
		airFriction = -0.001435;//slightly better airfriction from boat-tail
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_545x39_Ball",0.2,1,30};//bekfix custom, perhaps unnecessary
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_545x39_Ball_far",1,1,150};
		class Medical
		{
			InstantBleeding = 1;
			MedicalState = 3;
			MedicalChance = 70;
			BleedingLevel = 3;
			BleedingChance = 60;
			Infection = 0;
			InfectionChance = 0.5;
			Knockout = 0;
			KnockoutChance = 0.2;
			scale = 0;
		};
	};

	class BP_762x39_Ball: BulletBase
	{
		hit = 17.00;
		indirectHit = 0;
		indirectHitRange = 0;
		simulationStep = 0.09;
		cartridge = "FxCartridge_762";
		visibleFire = 22;
		audibleFire = 26;
		visibleFireTime = 3;
		cost = 1.200000;
		airLock = 1;
		typicalSpeed = 719;
		caliber = 0.8500;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 0.600000;
		tracerStartTime = 0.007500;
		tracerEndTime = 5;
		airFriction = -0.00160;
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 25;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 2;
			BleedingChance = 35;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
		class CamShakeFire
		{
			power = 1;
			duration = 0.200000;
			frequency = 20;
			distance = 10;
		};
		class CamShakeHit
		{
			power = 5;
			duration = 1;
			frequency = 20;
		};
	};

	class BP_762x39OVP_Ball: BulletBase
	{
		hit = 18.00;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_762";
		visibleFire = 22;
		audibleFire = 30;
		visibleFireTime = 3;
		cost = 1.200000;
		airLock = 1;
		typicalSpeed = 760;
		caliber = 0.9500;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 0.600000;
		tracerStartTime = 0.007500;
		tracerEndTime = 5;
		airFriction = -0.00160;
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 65;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 2;
			BleedingChance = 65;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
		class CamShakeFire
		{
			power = 1;
			duration = 0.200000;
			frequency = 20;
			distance = 10;
		};
		class CamShakeHit
		{
			power = 5;
			duration = 1;
			frequency = 20;
		};
	};

	class BP_762x54_Ball: BulletBase
	{
		hit = 21.50;
		cartridge = "FxCartridge_762";
		visibleFire = 22;
		audibleFire = 35;
		simulationStep = 0.09;
		visibleFireTime = 3;
		cost = 1.200000;
		airLock = 1;
		typicalSpeed = 828;
		caliber = 1.65;
		legFracture = true;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 0.600000;
		tracerStartTime = 0.007500;
		tracerEndTime = 5;
		airFriction = -0.000760;
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 55;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 3;
			BleedingChance = 48;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 1; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 10; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
		class CamShakeHit
		{
			power = 7;
			duration = 1;
			frequency = 20;
		};
	};

	class BP_762x54_7N1: BulletBase
	{
		hit = 18.25;
		cartridge = "FxCartridge_762";
		visibleFire = 22;
		audibleFire = 35;
		simulationStep = 0.09;
		visibleFireTime = 3;
		cost = 1.200000;
		airLock = 1;
		typicalSpeed = 865;//faster, lighter bullet
		caliber = 1.65;
		legFracture = true;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 0.600000;
		tracerStartTime = 0.007500;
		tracerEndTime = 5;
		airFriction = -0.000590;
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 55;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 3;
			BleedingChance = 49;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 1; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 20; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};

		class CamShakeHit {
			power = 7;
			duration = 1;
			frequency = 20;
		};
	};

	class BP_762x54_7N13: BulletBase
	{
		hit = 23.78;
		cartridge = "FxCartridge_762";
		visibleFire = 22;
		audibleFire = 38;
		simulationStep = 0.09;
		visibleFireTime = 3;
		cost = 1.200000;
		airLock = 1;
		typicalSpeed = 828;
		caliber = 2.29;//ap round
		legFracture = true;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 0.600000;
		tracerStartTime = 0.007500;
		tracerEndTime = 5;
		airFriction = -0.000760;
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 62;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 3;
			BleedingChance = 55;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 1; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 35; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};

		class CamShakeHit {
			power = 7;
			duration = 1;
			frequency = 20;
		};
	};

	class BP_762x54_OVPBall: BulletBase
	{
		hit = 22.34;
		cartridge = "FxCartridge_762";
		visibleFire = 22;
		audibleFire = 35;
		visibleFireTime = 3;
		cost = 1.200000;
		airLock = 1;
		typicalSpeed = 895;
		caliber = 1.7;
		legFracture = true;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 0.600000;
		tracerStartTime = 0.007500;
		tracerEndTime = 5;
		airFriction = -0.00083;
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 80;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 3;
			BleedingChance = 75;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
		class CamShakeHit
		{
			power = 7;
			duration = 1;
			frequency = 20;
		};
	};

    class BP_93x64_Ball: BulletBase
	{
		hit = 33.07;
		cartridge = "FxCartridge_762";
		visibleFire = 22;
		audibleFire = 55;
		simulationStep = 0.10;
		visibleFireTime = 3;
		typicalSpeed = 762;
		caliber = 3.410000;
		legFracture = true;
		airFriction = -0.001175;
		muzzleEffect = "BIS_Effects_HeavySniper";
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 4;
			MedicalChance = 90;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 4;
			BleedingChance = 95;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 1; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 100; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
		class CamShakeFire
		{
			power = 4;
			duration = 0.500000;
			frequency = 20;
			distance = 10;
		};
		class CamShakeHit
		{
			power = 14;
			duration = 1;
			frequency = 20;
		};
	};

	class BP_93x64_OVPBall: BulletBase
	{
		hit = 33.07;
		cartridge = "FxCartridge_762";
		visibleFire = 22;
		audibleFire = 55;
		visibleFireTime = 3;
		typicalSpeed = 785;
		caliber = 2.910000;
		legFracture = true;
		airFriction = -0.000975;
		muzzleEffect = "BIS_Effects_HeavySniper";
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 4;
			MedicalChance = 95;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 4;
			BleedingChance = 95;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
		class CamShakeFire
		{
			power = 4;
			duration = 0.500000;
			frequency = 20;
			distance = 10;
		};
		class CamShakeHit
		{
			power = 7;
			duration = 1;
			frequency = 20;
		};
	};

	class BP_9x19_SD: B_9x21_Ball
	{
	    hit = 8.90;
		audibleFire = 2.050000;
		visibleFire = 10;
		simulationStep = 0.09;
		airFriction = -0.000767;
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 2;
			MedicalChance = 50;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 1;
			BleedingChance = 25;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_9x19_Rubber: BP_NonLethal
	{
		hit = 1.90;
		audibleFire = 4.050000;
		visibleFire = 10;
		simulationStep = 0.09;
		indirectHit = 0;
		indirectHitRange = 0;
		airFriction = -0.002767;
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		class CamShakeHit {
			power = 7;
			duration = 2;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 1;
			MedicalChance = 90;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 0;
			BleedingChance = 10;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_65x39_Grendel: B_65x39_Caseless
	{
	    hit = 14.75;
		typicalSpeed = 786;
		simulationStep = 0.115;
		audibleFire = 22;
		visibleFire = 10;
		airFriction = -0.000783;
		caliber = 0.800000;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_556x45_Ball_far", 1.101838, 1, 150};
		class CamShakeHit
		{
			power = 4;
			duration = 1;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 40;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 2;
			BleedingChance = 75;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_65x39_Case : BP_65x39_Grendel {
		cartridge = "FxCartridge_65";
	};
	class BP_65x39_Case_green : BP_65x39_Case {
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class BP_65x39_Case_yellow : BP_65x39_Case {
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};

	class BP_65x47_Lapua: B_65x39_Caseless
	{
	    hit = 18.55;
		typicalSpeed = 880;
		simulationStep = 0.13;
		audibleFire = 30;
		visibleFire = 10;
		airFriction = -0.000767;
		caliber = 1.370000;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		legFracture = true;
		muzzleEffect = "BIS_Effects_HeavySniper";
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball", 0.224813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball_far", 1.181838, 1, 175};
		class CamShakeHit
		{
			power = 7;
			duration = 1;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 80;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 3;
			BleedingChance = 75;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0.5; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 25; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_65x39_SD: B_65x39_Caseless
	{
	    hit = 11.50;
		typicalSpeed = 335;
		simulationStep = 0.09;
		audibleFire = 1.60000;
		visibleFire = 10;
		airFriction = -0.000467;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		class CamShakeHit
		{
			power = 2;
			duration = 1;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 1;
			MedicalChance = 90;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 3;
			BleedingChance = 85;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_338_Lapua: B_408_Ball
	{
	    hit = 52;
		cartridge = "FxCartridge_127";
		typicalSpeed = 883;
		simulationStep = 0.12;
		audibleFire = 45;
		visibleFire = 10;
		airFriction = -0.00056;
		caliber = 3.100000;
		legFracture = true;
		muzzleEffect = "BIS_Effects_HeavySniper";
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball", 0.424813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball_far", 1.481838, 1, 175};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 4;
			MedicalChance = 90;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 4;
			BleedingChance = 100;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 1; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 95; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
		class CamShakeFire
		{
			power = 8;
			duration = 0.500000;
			frequency = 20;
			distance = 10;
		};
		class CamShakeHit
		{
			power = 25;
			duration = 1;
			frequency = 20;
		};
    };

	class BP_338_LapuaOVP: B_408_Ball
	{
	    hit = 55;
		cartridge = "FxCartridge_127";
		typicalSpeed = 995;
		indirectHit = 15;
		simulationStep = 0.09;
		indirectHitRange = 0.400000;
		audibleFire = 47;
		visibleFire = 10;
		airFriction = -0.00056;
		caliber = 3.200000;
		legFracture = true;
		muzzleEffect = "BIS_Effects_HeavySniper";
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball", 0.524813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball_far", 1.581838, 1, 175};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 4;
			MedicalChance = 90;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 4;
			BleedingChance = 100;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 1; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 95; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
		class CamShakeFire
		{
			power = 12;
			duration = 0.500000;
			frequency = 20;
			distance = 30;
		};
		class CamShakeHit
		{
			power = 25;
			duration = 1;
			frequency = 20;
		};
    };

	class BP_300_WinMag: B_762x51_Ball
	{
	    hit = 26.19;
		typicalSpeed = 874;
		indirectHit = 0;
		indirectHitRange = 0.000000;
		simulationStep = 0.09;
		audibleFire = 32;
		visibleFire = 10;
		airFriction = -0.000800;
		caliber = 2.150000;
		legFracture = true;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball", 0.254813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball_far", 1.081838, 1, 180};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 4;
			MedicalChance = 70;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 3;
			BleedingChance = 85;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 1; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 65; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
		class CamShakeHit
		{
			power = 10;
			duration = 1;
			frequency = 20;
		};
	};

	class BP_792x57_Mauser: B_762x51_Ball
	{
	    hit = 20.75;
		typicalSpeed = 841;
		indirectHit = 0;
		indirectHitRange = 0.000000;
		simulationStep = 0.09;
		audibleFire = 35;
		visibleFire = 10;
		airFriction = -0.000808;
		caliber = 2.150000;
		legFracture = true;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball", 0.254813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball_far", 1.081838, 1, 180};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 4;
			MedicalChance = 70;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 3;
			BleedingChance = 95;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 1; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 55; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
		class CamShakeHit
		{
			power = 10;
			duration = 1;
			frequency = 20;
		};
	};

	class BP_300M_WinMag: B_408_Ball
	{
	    hit = 28.95;
		cartridge = "FxCartridge_127";
		typicalSpeed = 993;
		simulationStep = 0.12;
		indirectHit = 0;
		indirectHitRange = 0.000000;
		audibleFire = 35;
		visibleFire = 10;
		airFriction = -0.000815;
		caliber = 2.350000;
		legFracture = true;
		muzzleEffect = "BIS_Effects_HeavySniper";
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball_far", 1.191838, 1, 200};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 4;
			MedicalChance = 80;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 4;
			BleedingChance = 100;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.9; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 1; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 90; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
		class CamShakeHit
		{
			power = 12;
			duration = 1;
			frequency = 20;
		};
	};

	class BP_300AAC_Ball: B_762x51_Ball
	{
	    hit = 15.00;
		typicalSpeed = 723;
		simulationStep = 0.09;
		indirectHit = 0;
		indirectHitRange = 0;
		audibleFire = 12;
		visibleFire = 10;
		airFriction = -0.001462;
		caliber = 0.850000;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball", 0.254813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball_far", 1.081838, 1, 180};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 50;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 2;
			BleedingChance = 75;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.4; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_300AAC_OVPBall: B_762x51_Ball
	{
	    hit = 16.20;
		typicalSpeed = 767;
		simulationStep = 0.09;
		indirectHit = 0;
		indirectHitRange = 0;
		audibleFire = 12;
		visibleFire = 10;
		airFriction = -0.001462;
		caliber = 0.850000;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball", 0.254813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x51_Ball_far", 1.081838, 1, 180};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 70;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 3;
			BleedingChance = 75;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.4; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_223_Ball: B_408_Ball
	{
	    hit = 14.15;
		cartridge = "FxCartridge_762";
		typicalSpeed = 1056;
		simulationStep = 0.10;
		audibleFire = 15;
		visibleFire = 10;
		airFriction = -0.001294;
		caliber = 0.70000;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x54_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x54_Ball_far", 0.981838, 1, 150};
		class CamShakeHit
		{
			power = 3;
			duration = 1;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 55;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 2;
			BleedingChance = 65;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.1; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_223OVP_Ball: B_408_Ball
	{
	    hit = 15.95;
		cartridge = "FxCartridge_762";
		typicalSpeed = 980;
		simulationStep = 0.10;
		audibleFire = 17;
		visibleFire = 10;
		airFriction = -0.001294;
		caliber = 0.80000;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x54_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x54_Ball_far", 0.981838, 1, 150};
		class CamShakeHit
		{
			power = 4;
			duration = 1;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 55;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 2;
			BleedingChance = 65;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.1; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_223BTHP_Ball: B_408_Ball
	{
	    hit = 14.85;
		cartridge = "FxCartridge_762";
		typicalSpeed = 893;
		simulationStep = 0.13;
		audibleFire = 20;
		visibleFire = 10;
		airFriction = -0.000985;
		caliber = 0.90000;
		legFracture = true;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x54_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x54_Ball_far", 0.981838, 1, 150};
		class CamShakeHit
		{
			power = 3;
			duration = 1;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 95;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 2;
			BleedingChance = 65;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.1; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_223BTHP_OVPBall: B_408_Ball
	{
	    hit = 15.95;
		cartridge = "FxCartridge_762";
		typicalSpeed = 950;
		simulationStep = 0.13;
		audibleFire = 20;
		visibleFire = 10;
		airFriction = -0.000985;
		caliber = 0.60000;
		legFracture = true;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x54_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x54_Ball_far", 0.981838, 1, 150};
		class CamShakeHit
		{
			power = 3;
			duration = 1;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 95;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 3;
			BleedingChance = 65;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.1; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_250_Ball: B_408_Ball
	{
	    hit = 17.15;
		cartridge = "FxCartridge_762";
		typicalSpeed = 1219;
		simulationStep = 0.14;
		audibleFire = 20;
		visibleFire = 10;
		airFriction = -0.001505;
		caliber = 0.70000;
		legFracture = true;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x54_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x54_Ball_far", 0.981838, 1, 150};
		class CamShakeHit
		{
			power = 3;
			duration = 1;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 55;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 2;
			BleedingChance = 65;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.1; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_250OVP_Ball: B_408_Ball
	{
	    hit = 18.35;
		cartridge = "FxCartridge_762";
		typicalSpeed = 1268;
		simulationStep = 0.15;
		audibleFire = 20;
		visibleFire = 10;
		airFriction = -0.001505;
		caliber = 0.70000;
		legFracture = true;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x54_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x54_Ball_far", 0.981838, 1, 150};
		class CamShakeHit
		{
			power = 3;
			duration = 1;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 55;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 2;
			BleedingChance = 65;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.1; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_3006_Spring: B_408_Ball
	{
	    hit = 20.70;
		cartridge = "FxCartridge_762";
		typicalSpeed = 902;
		simulationStep = 0.09;
		audibleFire = 27;
		visibleFire = 10;
		airFriction = -0.000855;
		caliber = 1.270000;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x54_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x54_Ball_far", 0.981838, 1, 150};
		class CamShakeHit
		{
			power = 7;
			duration = 1;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 75;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 3;
			BleedingChance = 65;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.1; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_3006M_Spring: B_408_Ball
	{
	    hit = 22.25;
		cartridge = "FxCartridge_762";
		typicalSpeed = 938;
		simulationStep = 0.11;
		audibleFire = 26;
		visibleFire = 10;
		airFriction = -0.000908;
		caliber = 1.700000;
		legFracture = true;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x54_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x54_Ball_far", 1.181838, 1, 175};
		class CamShakeHit
		{
			power = 10;
			duration = 1;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 80;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 3;
			BleedingChance = 85;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 1; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 45; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_303B_Ball: B_762x51_Ball
	{
	    hit = 19.55;
		typicalSpeed = 818;
		caliber = 1.2700000;
		simulationStep = 0.09;
		airFriction = -0.001132;
		visibleFire = 10;
		audibleFire = 30;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x54_Ball", 0.214813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x54_Ball_far", 1.101838, 1, 150};
		class CamShakeHit
		{
			power = 7;
			duration = 1;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 2;
			MedicalChance = 90;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 2;
			BleedingChance = 85;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
    };

	class BP_303B_JSP: B_762x51_Ball
	{
		hit = 21.6;
		typicalSpeed = 844;
		caliber = 1.09;//bekfix lowered because SoftPoint
		simulationStep = 0.09;
		airFriction = -0.001132;
		visibleFire = 10;
		audibleFire = 30;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_762x54_Ball",0.214813,1,50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_762x54_Ball_far",1.101838,1,150};
		class CamShakeHit
		{
			power = 7;
			duration = 1;
			frequency = 20;
		};
		class Medical
		{
			InstantBleeding = 1;
			MedicalState = 2;
			MedicalChance = 93;
			BleedingLevel = 3;
			BleedingChance = 96;
			Infection = 0;
			InfectionChance = 0.5;
			Knockout = 0;
			KnockoutChance = 0.2;
			scale = 0;
		};
	};

	class BP_22LR_Ball: B_9x21_Ball
	{
	    hit = 9.65;
		typicalSpeed = 300; //old - 520, changed to 300 to make them subsonic.
		caliber = 0.200000;
		simulationStep = 0.09;
		audibleFire = 2;
		visibleFire = 10;
		airFriction = -0.001058; //old: "airFriction = -0.001832", changed to compensate "typicalspeed" decrease.
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 2;
			MedicalChance = 40;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 1;
			BleedingChance = 25;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_408Chey_Ball: B_408_Ball
	{
	    hit = 59;
		typicalSpeed = 908;
		airFriction = -0.000448;
		//explosive = 1;
		//explosionTime = 0.00001;
		caliber = 3.300000;
		simulationStep = 0.14;
		audibleFire = 60;
		visibleFire = 10;
		legFracture = true;
		muzzleEffect = "BIS_Effects_HeavyCaliber";
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_127x108_Ball", 0.254813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_127x108_Ball_far", 1.181838, 1, 200};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 2;
			MedicalChance = 50;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 3;
			BleedingChance = 100;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
		class CamShakeFire
		{
			power = 5;
			duration = 0.600000;
			frequency = 20;
			distance = 30;
		};
		class CamShakeHit
		{
			power = 55;
			duration = 1;
			frequency = 20;
		};
	};

	class BP_127x108_APDS: B_127x108_Ball
	{
		hit = 80;
		caliber = 3.600000;
		simulationStep = 0.12;
		typicalSpeed = 820;
		airFriction = -0.000450;
		audibleFire = 60;
		visibleFire = 10;
		indirectHit = 40;
		indirectHitRange = 0.810000;
		muzzleEffect = "BIS_Effects_HeavyCaliber";
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_127x108_Ball", 0.254813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_127x108_Ball_far", 1.281838, 1, 200};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 2;
			MedicalChance = 50;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 3;
			BleedingChance = 100;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
		class CamShakeFire
		{
			power = 35;
			duration = 0.400000;
			frequency = 20;
			distance = 30;
		};
		class CamShakePlayerFire
		{
			power = 50;
			duration = 0.400000;
			frequency = 20;
		};
		class CamShakeHit
		{
			power = 100;
			duration = 1;
			frequency = 20;
		};
	};

	class BP_127x99_Ball: BulletBase
	{
		hit = 85;
		typicalSpeed = 815;
		simulationStep = 0.12;
		indirectHit = 30;
		indirectHitRange = 0.300000;
		cartridge = "FxCartridge_127";
		visibleFire = 48;
		audibleFire = 70;
		visibleFireTime = 3;
		cost = 20;
		airFriction = -0.000611;
		caliber = 4.200000;
		model = "\A3\weapons_f\data\bullettracer\tracer_red";
		tracerScale = 1.200000;
		tracerStartTime = 0.065000;
		tracerEndTime = 1;
		nvgOnly = 1;
		legFracture = true;
		muzzleEffect = "BIS_Effects_HeavySniper";
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 2;
			MedicalChance = 50;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 3;
			BleedingChance = 100;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 1; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 75; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
		class CamShakePlayerFire
		{
			power = 30;
			duration = 0.300000;
			frequency = 20;
		};
		class CamShakeFire
		{
			power = 15;
			duration = 0.300000;
			frequency = 20;
			distance = 30;
		};
		class CamShakeHit
		{
			power = 50;
			duration = 1;
			frequency = 20;
		};
	};

	class BP_127x99_PEI: BP_127x99_Ball
	{
		hit = 130;
		indirectHit = 50;
		indirectHitRange = 1.000000;
		simulationStep = 0.12;
		cost = 20;
		typicalSpeed = 815;
		explosive = 0.050000;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		caliber = 5.5;
		model = "\A3\weapons_f\data\bullettracer\tracer_red";
		tracerScale = 1.200000;
		tracerStartTime = 0.065000;
		tracerEndTime = 3.500000;
		nvgOnly = 1;
		legFracture = true;
		muzzleEffect = "BIS_Effects_HeavyCaliber";
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 2;
			MedicalChance = 50;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 3;
			BleedingChance = 100;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 1; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 35; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
		class CamShakePlayerFire
		{
			power = 55;
			duration = 0.500000;
			frequency = 20;
		};
		class CamShakeFire
		{
			power = 15;
			duration = 0.500000;
			frequency = 20;
			distance = 30;
		};
		class CamShakeHit
		{
			power = 75;
			duration = 1;
			frequency = 20;
		};
	};

	class BP_9x19_Ball: B_9x21_Ball
	{
	    hit = 9.45;
		typicalSpeed = 390;
		simulationStep = 0.09;
		audibleFire = 10;
		visibleFire = 10;
		airFriction = -0.001900;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_9x19_Ball", 0.024813, 1, 20};
		supersonicCrackFar[] = {/*"\breakingpoint_jsrs\sounds\B_9x19_Ball_far", 1.081838, 1, 100*/};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 2;
			MedicalChance = 50;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 1;
			BleedingChance = 35;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_9x21_Ball: B_9x21_Ball
	{
		hit = 9.47;
		typicalSpeed = 320;
		audibleFire = 12;
		visibleFire = 10;
		simulationStep = 0.09;
		caliber = 0.4;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_9x19_Ball", 0.054813, 1, 20};
		supersonicCrackFar[] = {/*"\breakingpoint_jsrs\sounds\B_9x19_Ball_far", 1.081838, 1, 100*/};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 2;
			MedicalChance = 50;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 1;
			BleedingChance = 35;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_9x18_Ball: B_9x21_Ball
	{
	    hit = 9.35;
		typicalSpeed = 319;
		audibleFire = 8.00000;
		visibleFire = 10;
		simulationStep = 0.09;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_9x19_Ball", 0.114813, 1, 20};
		supersonicCrackFar[] = {/*"\breakingpoint_jsrs\sounds\B_9x19_Ball_far", 1.021838, 1, 100*/};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 2;
			MedicalChance = 30;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 1;
			BleedingChance = 25;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_9x19OVP_Ball: B_9x21_Ball
	{
	    hit = 9.80;
		typicalSpeed = 335;
		caliber = 0.3;
		audibleFire = 15;
		visibleFire = 10;
		legFracture = true;
		simulationStep = 0.10;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_9x19_Ball", 0.104813, 1, 20};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_9x19_Ball_far", 1.081838, 1, 100};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 2;
			MedicalChance = 80;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 1;
			BleedingChance = 85;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_765x17_Ball: B_9x21_Ball
	{
	    hit = 9.60;
		typicalSpeed = 310;
		caliber = 0.55;
		audibleFire = 10;
		visibleFire = 10;
		simulationStep = 0.09;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_9x19_Ball", 0.104813, 1, 20};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_9x19_Ball_far", 1.081838, 1, 100};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 2;
			MedicalChance = 90;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 1;
			BleedingChance = 85;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_45ACP: B_45ACP_Ball
	{
	    hit = 13.95;
		typicalSpeed = 280;
		audibleFire = 18;
		visibleFire = 10;
		simulationStep = 0.09;
		supersonicCrackNear[] = {/*"\breakingpoint_jsrs\sounds\B_45ACP_Ball", 0.124813, 1, 30*/};
		supersonicCrackFar[] = {/*"\breakingpoint_jsrs\sounds\B_45ACP_Ball_far", 1.081838, 1, 75*/};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 50;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 2;
			BleedingChance = 50;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.5; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_45GOV: B_45ACP_Ball
	{
	    hit = 20.65;
		typicalSpeed = 617;
		caliber = 1.4;
		audibleFire = 23;
		visibleFire = 10;
		airFriction = -0.001918;
		legFracture = true;
		simulationStep = 0.09;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_45ACP_Ball", 0.124813, 1, 30};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_45ACP_Ball_far", 1.081838, 1, 75};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 4;
			MedicalChance = 70;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 3;
			BleedingChance = 85;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 1; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 50; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
		class CamShakeHit
		{
			power = 20;
			duration = 1;
			frequency = 20;
		};
	};

	class BP_45JHP: B_45ACP_Ball
	{
	    hit = 15.99;
		typicalSpeed = 350;
		airFriction = -0.002000;
		audibleFire = 12;
		visibleFire = 10;
		legFracture = true;
		simulationStep = 0.09;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_45ACP_Ball", 0.124813, 1, 30};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_45ACP_Ball_far", 1.081838, 1, 75};
		class CamShakeHit
		{
			power = 5;
			duration = 1;
			frequency = 20;
		};

		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 90;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 3;
			BleedingChance = 75;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.1; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_45Rubber: BP_NonLethal
	{
		class CamShakeHit
		{
			power = 20;
			duration = 3;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 0; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 5;
			MedicalChance = 97;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 1;
			BleedingChance = 25;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.1; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_357mag_ball: B_45ACP_Ball
	{
		hit = 14.100000;
		cartridge = "FxCartridge_Small";
		typicalSpeed = 450;
		airFriction = -0.001500;
		audibleFire = 25.00000;
		visibleFire = 10;
		simulationStep = 0.09;
		caliber = 0.300000;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_9x19_Ball", 0.274813, 1, 40};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_9x19_Ball_far", 1.101838, 1, 150};
		class CamShakeHit
		{
			power = 5;
			duration = 1;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 30;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 2;
			BleedingChance = 95;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_500Mag_ball : Bulletbase
	{
		hit = 20.85;
		cartridge = "FxCartridge_Small";
		typicalSpeed = 600;
		airFriction = -0.0011;
		caliber = 1.950000;
		audibleFire = 35.00000;
		visibleFire = 10;
		legFracture = true;
		simulationStep = 0.09;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_9x19_Ball", 0.274813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_9x19_Ball_far", 1.201838, 1, 150};
		class CamShakeHit
		{
			power = 10;
			duration = 1;
			frequency = 20;
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 4;
			MedicalChance = 75;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 3;
			BleedingChance = 95;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 1; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 75; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_44Mag_ball : Bulletbase
	{
		hit = 18.00;
		cartridge = "FxCartridge_Small";
		typicalSpeed = 460;
		indirectHit = 0;
		indirectHitRange = 0.000000;
		airFriction = -0.001900;
		caliber = 1.640000;
		simulationStep = 0.09;
		visibleFire = 18.00000;
		audibleFire = 35.00000;
		legFracture = true;
		supersonicCrackNear[] = {"\breakingpoint_jsrs\sounds\B_9x19_Ball", 0.274813, 1, 50};
		supersonicCrackFar[] = {"\breakingpoint_jsrs\sounds\B_9x19_Ball_far", 1.201838, 1, 225};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 4;
			MedicalChance = 70;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 3;
			BleedingChance = 85;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
		class CamShakeFire
		{
			power = 3;
			duration = 0.500000;
			frequency = 20;
			distance = 10;
		};
		class CamShakeHit
		{
			power = 10;
			duration = 1;
			frequency = 20;
		};
	};

	class BP_12Gauge_Slug: BulletBase
	{
		hit = 23;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_slug";
		typicalSpeed = 609;
		visibleFire = 10;
		audibleFire = 27;
		airFriction = -0.00215;
		caliber = 1.4;
		deflecting = 30;
		simulation = "shotShell";
		model = "";
		explosive = "false";
		legFracture = true;
		simulationStep = 0.09;
		muzzleEffect = "";
		effectsMissile = "";
		class CamShakeHit
		{
			power = 10;
			duration = 1;
			frequency = 20;
		};
	};

	class BP_12Gauge_Buck: BulletBase
	{
		hit = 9.50;
		//indirectHit = 4;
		//indirectHitRange = 0.400000;
		cartridge = "FxCartridge_slug";
		cost = 5;
		typicalSpeed = 365;
		visibleFire = 4;
		audibleFire = 25;
		airFriction = -0.003000;
		caliber = 0.3;
		deflecting = 60;
		simulation = "shotSpread";
		model = "";
		explosive = "false";
		simulationStep = 0.09;
		muzzleEffect = "";
		effectsMissile = "";
		class CamShakeHit
		{
			power = 10;
			duration = 1;
			frequency = 20;
		};
	};

	class BP_12Gauge_Buck2: BulletBase
	{
		hit = 9.90;
		//indirectHit = 4;
		//indirectHitRange = 0.400000;
		cartridge = "FxCartridge_slug";
		cost = 5;
		typicalSpeed = 440;
		visibleFire = 4;
		audibleFire = 27;
		airFriction = -0.002000;
		caliber = 0.6;
		deflecting = 60;
		simulation = "shotSpread";
		model = "";
		explosive = "false";
		legFracture = true;
		simulationStep = 0.09;
		muzzleEffect = "";
		effectsMissile = "";
		class CamShakeFire
		{
			power = 6;
			duration = 0.500000;
			frequency = 20;
			distance = 1;
		};
		class CamShakeHit
		{
			power = 10;
			duration = 1;
			frequency = 20;
		};
	};


	class BP_40mm_HE: GrenadeBase
	{
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_1", 3.162278, 1, 2000};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_2", 3.162278, 1, 2000};
		soundHit3[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_3", 3.162278, 1, 2000};
		soundHit4[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_4", 3.162278, 1, 2000};
		soundHit5[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_5", 3.162278, 1, 2000};
		soundHit6[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_6", 3.162278, 1, 2000};
		multiSoundHit[] = {"soundHit1", 0.200000, "soundHit2", 0.200000, "soundHit3", 0.200000, "soundHit4", 0.100000, "soundHit5", 0.150000, "soundHit6", 0.150000};
		explosionSoundEffect = "DefaultExplosion";
		simulation = "shotShell";
		model = "\A3\weapons_f\ammo\UGL_slug";
		hit = 47;
		indirectHit = 45;
		indirectHitRange = 4;
		visibleFire = 1;
		audibleFire = 3;
		visibleFireTime = 3;
		explosive = 1;
		cost = 10;
		deflecting = 5;
		airFriction = -0.001000;
		fuseDistance = 10;
		whistleDist = 16;
		typicalSpeed = 185;
		caliber = 2;
		class CamShakeExplode
		{
			power = "(40*0.2)";
			duration = "((round (40^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((3 + 40^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 20;
			duration = "((round (20^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(0^0.25)";
			duration = "((round (0^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((0^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0;
			duration = 0.100000;
			frequency = 20;
			distance = 1;
		};
	};

	class BP_40mm_White: FlareBase
	{
		hit = 10;
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = {0.500000, 0.500000, 0.500000, 0.500000};
		useFlare = 1;
		deflecting = 30;
		smokeColor[] = {1, 1, 1, 0.500000};
		effectFlare = "CounterMeasureFlare";
		brightness = 12;
		size = 1;
		triggerTime = 3;
		triggerSpeedCoef = 1;
	};

	class BP_40mm_Green: BP_40mm_White
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = {0.250000, 0.500000, 0.250000, 0};
	};

	class BP_40mm_Red: BP_40mm_White
	{
		model = "\A3\Weapons_F\Ammo\UGL_Flare";
		lightColor[] = {0.500000, 0.250000, 0.250000, 0};
	};

	class BP_IED: MineBase
	{
		hit = 50;
		indirectHit = 20;
		indirectHitRange = 10;
		audibleFire = 50;
		model = "\A3\Weapons_F\explosives\IED_urban_small.p3d";
		modelModelDisabled = "\A3\Weapons_F\explosives\IED_urban_small.p3d";
		icon = "iconExplosiveAP";
		defaultMagazine = "BP_IED1_Mag";
		soundHit[] = {"A3\Sounds_F\weapons\Mines\mine_debris_1", 3.162278, 1, 1500};
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\electron_trigger_1", 0.862341, 1, 50};
		soundActivation[] = {"A3\Sounds_F\weapons\mines\electron_activate_mine_1", 0.862341, 1, 50};
		explosionEffects = "MineExplosion";
		CraterEffects = "MineCrater";
		whistleDist = 20;
		mineTrigger = "RemoteTrigger";
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 5;
			MedicalChance = 70;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 3;
			BleedingChance = 95;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0.2; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};
	class BP_TripMine_Ammo : MineBase
	{
		hit=100;
		indirectHit=85;
		indirectHitRange=15;
		explosive = 1;
		model="\A3\Weapons_F\explosives\mine_AP_tripwire";
		mineModelDisabled="\A3\Weapons_F\explosives\mine_AP_tripwire_d";
		defaultMagazine="";
		icon="iconExplosiveAP";
		soundHit[]={"A3\Sounds_F\weapons\mines\mine_3",3.16228,1,1500};
		underwaterHitRangeCoef=2;
		explosionAngle=360;
		explosionEffects="MineExplosion";
		CraterEffects="MineCrater";
		whistleDist=8;
		cost=200;
		mineTrigger="WireTrigger";
		mineInconspicuousness=50;
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 70;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 3;
			BleedingChance = 95;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 0; // 0 - Disabled / 1 - Enabled
			InfectionChance = 0.5; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 1; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 1; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};

	class BP_Signal_Green: FlareBase
	{
		hit = 2;
		model = "\A3\Weapons_F_Kart\Ammo\tracer_green.p3d";
		lightColor[] = {0.250000, 0.500000, 0.250000, 0};
		useFlare = 1;
		deflecting = 30;
		smokeColor[] = {1, 1, 1, 0.500000};
		effectFlare = "CounterMeasureFlare";
		brightness = 12;
		size = 3;
		triggerTime = 0.600000;
		triggerSpeedCoef = 1;
		timeToLive = 15;
		dayLight = 1;
	};

	class BP_Signal_Red: BP_Signal_Green
	{
		model = "\A3\Weapons_F_Kart\Ammo\tracer_red.p3d";
		lightColor[] = {0.500000, 0.250000, 0.250000, 0};
	};
	class Human_Trap_Ammo: MineBase
	{
		hit = 0.1;
		indirectHit = 1;
		indirectHitRange = 0.4;
		model = "\breakingpoint\models\bp_beartrap.p3d";
		mineModelDisabled = "\breakingpoint\models\bp_beartrap.p3d";
		icon = "iconExplosiveAP";
		defaultMagazine = "Human_Trap_Mag";
		soundHit1[] = {"\breakingpoint_sfx\gore\Fracture_0.ogg",3.1622777,1,1500};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\mines\AP_mines_explosion_02",3.1622777,1,2000};
		multiSoundHit[] = {"soundHit1",0.5,"soundHit2",0.5};
		soundTrigger[] = {"\breakingpoint_sfx\gore\Fracture_0.ogg",0.56234133,1,30};
		//soundActivation[] = {"A3\Sounds_F\weapons\mines\electron_activate_mine_1",0.56234133,1,20};
		//soundDeactivation[] = {"A3\Sounds_F\weapons\Mines\deactivate_mine_3a",1.9952624,1,20};
		explosionEffects = "simplefbExplosion"; //MineExplosion
		CraterEffects = "";
		whistleDist = 0;
		cost = 200;
		mineInconspicuousness = 1;
		mineTrigger = "RangeTriggerShort";
		//legFracture = true;
		class AnimationSources
		{
			class LeftShutter
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};

			class RightShutter
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
		};
		class Medical
		{
			//Instant Bleeding (Bullet will always make you bleed on impact)
			InstantBleeding = 1; // 0 - Disabled / 1 - Enabled

			//Medical State Level (Bullet Hit will always put you in this state)
			// 0 - None / 1 - Pain / 2 - Small Bandage / 3 - Field Dressing / 4 - Blood SFX / 5 - BloodSplash SFX
			MedicalState = 3;
			MedicalChance = 100;

			// Bleeding Level (Rate of blood loss)
			// 0 - 30bps / 1 - 50bps / 2 - 100bps / 3 - 175bps /4 - 175bps Surgery Kit
			BleedingLevel = 3;
			BleedingChance = 100;

			// Infection (Bullet Wound Chance Of Infection)
			Infection = 1; // 0 - Disabled / 1 - Enabled
			InfectionChance = 1; //Between 0 -> 100

			// Knockout (Bullet Wound Chance Of Knockout)
			Knockout = 0; // 0 - Disabled / 1 - Enabled
			KnockoutChance = 0; //Between 0 -> 100

			//Blood Damage Scale
			scale = 0;
		};
	};
};

class CfgMineTriggers
{
	/*extern*/ class RangeTrigger;

	class BP_ShortTrigger: RangeTrigger
	{
		mineTriggerRange = 5;
		mineTriggerActivationRange = 10;
	};
};
