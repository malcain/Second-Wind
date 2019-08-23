class CfgPatches
{
	class breakingpoint_dlcweapons_cfg
	{
		units[] = {};
		weapons[] = {
			"sgun_HunterShotgun_01_F",
			"sgun_HunterShotgun_01_sawedoff_F"
			};
		requiredVersion = 0.1;
		//"A3_Data_F_Sams_Loadorder"
		requiredAddons[] = {"A3_Weapons_F_Enoch","breakingpoint_jsrs","A3_Anims_F","A3_Anims_F_Config_Sdr","breakingpoint_weapons","A3_Weapons_F","a3_sounds_f","a3_sounds_f_exp","a3_weapons_f_exp","jsrs_soundmod_framework","A3_characters_F","A3_Data_F","breakingpoint_ui","A3_Weapons_F_Mod"};
	};
};
	

class Cfgweapons
{
		class sgun_HunterShotgun_01_base_F ;
		class sgun_HunterShotgun_01_sawedoff_base_F ;
		class sgun_HunterShotgun_01_F : sgun_HunterShotgun_01_base_F
		{
		magazineWell[] = {"bp_2rng_shotgun"};
		};
	
		class sgun_HunterShotgun_01_sawedoff_F : sgun_HunterShotgun_01_sawedoff_base_F
		{
		magazineWell[] = {"bp_2rng_shotgun"};
		};
		
		class DMR_06_hunter_base_F;
		class srifle_DMR_06_hunter_F : DMR_06_hunter_base_F
		{
			displayName = "Mk14, 7,62x51mm (Classic)";
			modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
			magazineWell[] = {"bp_762x51_boltrifle"};
			multiplier = 1;
		class Single
		{
		dispersion = 0.000435;
		class BaseSoundModeType
		{
		};
		class StandardSound
		{
			soundSetShot[] = {"DMR06_Shot_SoundSet","DMR06_tail_SoundSet","DMR06_InteriorTail_SoundSet"};
		};
		class SilencedSound
		{
			SoundSetShot[] = {"jsrs_mk14_shot_silenced_soundset","jsrs_mk14_shell_soundset","jsrs_7x62mm_SD_reflector_1"};
		};
		sounds[] = {"StandardSound","SilencedSound"};
		reloadTime = 0.085;
		recoil = "recoil_single_dmr";
		recoilProne = "recoil_single_prone_dmr";
		minRange = 2;
		minRangeProbab = 0.3;
		midRange = 350;
		midRangeProbab = 0.7;
		maxRange = 500;
		maxRangeProbab = 0.05;
		multiplier = 1;
		burst = 1;
		burstRangeMax = -1;
		sound[] = {"",10,1};
		soundBegin[] = {"sound",1};
		soundBeginWater[] = {"sound",1};
		soundClosure[] = {"sound",1};
		soundEnd[] = {};
		soundLoop[] = {};
		soundContinuous = 0;
		weaponSoundEffect = "";
		ffCount = 1;
		ffMagnitude = 0.5;
		ffFrequency = 11;
		flash = "gunfire";
		flashSize = 0.1;
		autoFire = 0;
		useAction = 0;
		useActionTitle = "";
		showToPlayer = 1;
		artilleryDispersion = 1;
		artilleryCharge = 1;
		canShootInWater = 0;
		displayName = "Single";
		textureType = "semi";
		aiDispersionCoefY = 1.7;
		aiDispersionCoefX = 1.4;
		soundBurst = 0;
		requiredOpticType = -1;
		aiRateOfFire = 2;
		aiRateOfFireDispersion = 1;
		aiRateOfFireDistance = 500;
	};
	class single_close_optics1
	{
		requiredOpticType = 1;
		showToPlayer = 0;
		minRange = 2;
		minRangeProbab = 0.05;
		midRange = 300;
		midRangeProbab = 0.8;
		maxRange = 500;
		maxRangeProbab = 0.01;
		aiRateOfFire = 2;
		aiRateOfFireDistance = 300;
		dispersion = 0.000435;
		class BaseSoundModeType
		{
		};
		class StandardSound
		{
			soundSetShot[] = {"DMR06_Shot_SoundSet","DMR06_tail_SoundSet","DMR06_InteriorTail_SoundSet"};
		};
		class SilencedSound
		{
			SoundSetShot[] = {"jsrs_mk14_shot_silenced_soundset","jsrs_mk14_shell_soundset","jsrs_7x62mm_SD_reflector_1"};
		};
		sounds[] = {"StandardSound","SilencedSound"};
		reloadTime = 0.085;
		recoil = "recoil_single_dmr";
		recoilProne = "recoil_single_prone_dmr";
		multiplier = 1;
		burst = 1;
		burstRangeMax = -1;
		sound[] = {"",10,1};
		soundBegin[] = {"sound",1};
		soundBeginWater[] = {"sound",1};
		soundClosure[] = {"sound",1};
		soundEnd[] = {};
		soundLoop[] = {};
		soundContinuous = 0;
		weaponSoundEffect = "";
		ffCount = 1;
		ffMagnitude = 0.5;
		ffFrequency = 11;
		flash = "gunfire";
		flashSize = 0.1;
		autoFire = 0;
		useAction = 0;
		useActionTitle = "";
		artilleryDispersion = 1;
		artilleryCharge = 1;
		canShootInWater = 0;
		displayName = "Single";
		textureType = "semi";
		aiDispersionCoefY = 1.7;
		aiDispersionCoefX = 1.4;
		soundBurst = 0;
		aiRateOfFireDispersion = 1;
	};
	class single_medium_optics1
	{
		minRange = 300;
		minRangeProbab = 0.05;
		midRange = 500;
		midRangeProbab = 0.7;
		maxRange = 700;
		maxRangeProbab = 0.05;
		aiRateOfFire = 2;
		aiRateOfFireDistance = 500;
		requiredOpticType = 1;
		showToPlayer = 0;
		dispersion = 0.000435;
		class BaseSoundModeType
		{
		};
		class StandardSound
		{
			soundSetShot[] = {"DMR06_Shot_SoundSet","DMR06_tail_SoundSet","DMR06_InteriorTail_SoundSet"};
		};
		class SilencedSound
		{
			SoundSetShot[] = {"jsrs_mk14_shot_silenced_soundset","jsrs_mk14_shell_soundset","jsrs_7x62mm_SD_reflector_1"};
		};
		sounds[] = {"StandardSound","SilencedSound"};
		reloadTime = 0.085;
		recoil = "recoil_single_dmr";
		recoilProne = "recoil_single_prone_dmr";
		multiplier = 1;
		burst = 1;
		burstRangeMax = -1;
		sound[] = {"",10,1};
		soundBegin[] = {"sound",1};
		soundBeginWater[] = {"sound",1};
		soundClosure[] = {"sound",1};
		soundEnd[] = {};
		soundLoop[] = {};
		soundContinuous = 0;
		weaponSoundEffect = "";
		ffCount = 1;
		ffMagnitude = 0.5;
		ffFrequency = 11;
		flash = "gunfire";
		flashSize = 0.1;
		autoFire = 0;
		useAction = 0;
		useActionTitle = "";
		artilleryDispersion = 1;
		artilleryCharge = 1;
		canShootInWater = 0;
		displayName = "Single";
		textureType = "semi";
		aiDispersionCoefY = 1.7;
		aiDispersionCoefX = 1.4;
		soundBurst = 0;
		aiRateOfFireDispersion = 1;
	};
	class single_far_optics1
	{
		requiredOpticType = 2;
		minRange = 300;
		minRangeProbab = 0.05;
		midRange = 700;
		midRangeProbab = 0.5;
		maxRange = 1000;
		maxRangeProbab = 0.05;
		aiRateOfFire = 4;
		aiRateOfFireDistance = 600;
		showToPlayer = 0;
		dispersion = 0.000435;
		class BaseSoundModeType
		{
		};
		class StandardSound
		{
			soundSetShot[] = {"DMR06_Shot_SoundSet","DMR06_tail_SoundSet","DMR06_InteriorTail_SoundSet"};
		};
		class SilencedSound
		{
			SoundSetShot[] = {"jsrs_mk14_shot_silenced_soundset","jsrs_mk14_shell_soundset","jsrs_7x62mm_SD_reflector_1"};
		};
		sounds[] = {"StandardSound","SilencedSound"};
		reloadTime = 0.085;
		recoil = "recoil_single_dmr";
		recoilProne = "recoil_single_prone_dmr";
		multiplier = 1;
		burst = 1;
		burstRangeMax = -1;
		sound[] = {"",10,1};
		soundBegin[] = {"sound",1};
		soundBeginWater[] = {"sound",1};
		soundClosure[] = {"sound",1};
		soundEnd[] = {};
		soundLoop[] = {};
		soundContinuous = 0;
		weaponSoundEffect = "";
		ffCount = 1;
		ffMagnitude = 0.5;
		ffFrequency = 11;
		flash = "gunfire";
		flashSize = 0.1;
		autoFire = 0;
		useAction = 0;
		useActionTitle = "";
		artilleryDispersion = 1;
		artilleryCharge = 1;
		canShootInWater = 0;
		displayName = "Single";
		textureType = "semi";
		aiDispersionCoefY = 1.7;
		aiDispersionCoefX = 1.4;
		soundBurst = 0;
		aiRateOfFireDispersion = 1;
		};	
			class WeaponSlotsInfo
			{
				mass = 165;
				class MuzzleSlot
				{
					linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
					compatibleItems[] = {"BP_muzzle_snds_B"};
					iconScale = 0.1;
				};
				class CowsSlot
				{
					compatibleItems[] =
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
					"BP_compm4s",
					"BP_OldComp"
					};
					linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
					iconScale = 0.1;
				};
				class UnderBarrelSlot
				{
					compatibleItems[] = {"BP_Harris"};
					linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
					iconScale = 0.1;
				};
			}; 
		};
		
		class arifle_MSBS65_UBS_base_F ;
		class arifle_MSBS65_UBS_F : arifle_MSBS65_UBS_base_F
				{
				magazineWell[] = {"bp_65x39_mxrifle"};
				};			
				
};

class CfgMagazineWells
{
	class UBS_12GA
	{
			bpubsammo[]=
			{
			"BP_8Rnd_MagBuckshot",
			"BP_8Rnd_Buckshot",
			"BP_8Rnd_Slug"
			};
		};
};
