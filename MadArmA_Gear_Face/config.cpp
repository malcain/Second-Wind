class CfgPatches
{
	class Max_FaceGear
	{
		units[]={};
		weapons[]=
		{
			"G_MM_FaceFork",
			"G_MM_Hockey_Mask",
			"G_MM_Catchers_Mask",
			"G_MM_Crow_Dazzle_Mask",
			"G_MM_bandana_fur_co",
			"G_MM_bandana_dirty_co",
			"G_MM_bandana_dirty_2_co",
			"G_MM_bandana_dirty_3_co",
			"G_MM_bandana_bloody_co",
			"G_MM_bandana_worn_co",
			"G_MM_bandana_worn_2_co"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F"
		};
	};
};
class CfgGlasses
{
	class None;
	class G_MM_FaceFork: None
	{
		scope=2;
		author="IN005";
		weaponPoolAvailable=1;
		displayName="Scavenger Face Fork";
		picture="\breakingpoint_ui\icons\ScavengerIcon.paa";
		model="\MadArmA_Gear_Face\FaceFork\FaceFork";
	};
	class G_MM_Hockey_Mask: None
	{
		scope=2;
		author="Olrik-Jhornar & IN005";
		weaponPoolAvailable=1;
		displayName="Scavenger Hockey Mask";
		picture="\breakingpoint_ui\icons\ScavengerIcon.paa";
		model="\MadArmA_Gear_Face\Hockey_Mask\Mask";
		mat[]=
		{
			"MadArmA_Gear_Face\Hockey_Mask\texture\hockey_leather.rvmat",
			"MadArmA_Gear_Face\Hockey_Mask\texture\hockey_mask.rvmat"
		};
	};
	class G_MM_Catchers_Mask: None
	{
		scope=2;
		author="IN005";
		weaponPoolAvailable=1;
		displayName="Scavenger Catchers Mask";
		picture="\breakingpoint_ui\icons\ScavengerIcon.paa";
		model="\MadArmA_Gear_Face\Catchers_Mask\Mask";
	};
	class G_MM_Crow_Dazzle_Mask: None
	{
		scope=2;
		author="IN005";
		weaponPoolAvailable=1;
		displayName="Scavenger Crow Dazzle Mask";
		picture="\breakingpoint_ui\icons\ScavengerIcon.paa";
		model="\MadArmA_Gear_Face\Crow_Dazzle_Mask\Crow_Dazzle_Mask";
	};
	class G_Balaclava_blk: None
	{
	};
	class G_Bandanna_blk: G_Balaclava_blk
	{
	};
	class G_MM_bandana_fur_co: G_Bandanna_blk
	{
		scope=2;
		author="IN005";
		weaponPoolAvailable=1;
		displayName="Bandana Fur";
		picture="\A3\Characters_F_Bootcamp\Data\UI\icon_G_BandMask_tan_ca.paa";
		model="\A3\Characters_F_Bootcamp\Guerrilla\g_bandana_clean.p3d";
		hiddenSelectionsTextures[]=
		{
			"MadArmA_Gear_Face\ArmA_Bandana_Retexture\bandmask_fur_co.paa"
		};
	};
	class G_MM_bandana_dirty_co: G_MM_bandana_fur_co
	{
		scope=2;
		author="IN005";
		weaponPoolAvailable=1;
		displayName="Bandana Dirty";
		picture="\A3\Characters_F_Bootcamp\Data\UI\icon_G_BandMask_tan_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"MadArmA_Gear_Face\ArmA_Bandana_Retexture\bandmask_dirty_co.paa"
		};
	};
	class G_MM_bandana_dirty_2_co: G_MM_bandana_fur_co
	{
		scope=2;
		author="IN005";
		weaponPoolAvailable=1;
		displayName="Bandana Dirty";
		picture="\A3\Characters_F_Bootcamp\Data\UI\icon_G_BandMask_tan_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"MadArmA_Gear_Face\ArmA_Bandana_Retexture\bandmask_dirty_2_co.paa"
		};
	};
	class G_MM_bandana_dirty_3_co: G_MM_bandana_fur_co
	{
		scope=2;
		author="IN005";
		weaponPoolAvailable=1;
		displayName="Bandana Dirty";
		picture="\A3\Characters_F_Bootcamp\Data\UI\icon_G_BandMask_tan_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"MadArmA_Gear_Face\ArmA_Bandana_Retexture\bandmask_dirty_3_co.paa"
		};
	};
	class G_MM_bandana_bloody_co: G_MM_bandana_fur_co
	{
		scope=2;
		author="IN005";
		weaponPoolAvailable=1;
		displayName="Bandana Bloody";
		picture="\A3\Characters_F_Bootcamp\Data\UI\icon_G_BandMask_tan_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"MadArmA_Gear_Face\ArmA_Bandana_Retexture\bandmask_bloody_co.paa"
		};
	};
	class G_MM_bandana_worn_co: G_MM_bandana_fur_co
	{
		scope=2;
		author="IN005";
		weaponPoolAvailable=1;
		displayName="Outlaw Bandana Worn";
		picture="\A3\Characters_F_Bootcamp\Data\UI\icon_G_BandMask_tan_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"MadArmA_Gear_Face\ArmA_Bandana_Retexture\bandmask_worn_co.paa"
		};
	};
};
class cfgMods
{
	author="IN005";
	timepacked="1497712237";
};
