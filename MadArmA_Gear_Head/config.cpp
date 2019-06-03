class CfgPatches
{
	class Max_Gear_Head
	{
		units[]={};
		weapons[]=
		{
			"H_MM_Buzzard_Gasmask_01",
			"H_MM_Helmet_01"
		};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class H_MM_Buzzard_Gasmask_01: ItemCore
	{
		scope=2;
		author="IN005";
		weaponPoolAvailable=1;
		displayName="Buzzard Gasmask";
		picture="";
		model="\MadArmA_Gear_Head\Buzzard_Gasmask\Buzzard_Gasmask";
		class ItemInfo: HeadgearItem
		{
			mass=30;
			allowedSlots[]={901};
			uniformModel="\MadArmA_Gear_Head\Buzzard_Gasmask\Buzzard_Gasmask";
			modelSides[]={6};
			armor="0";
			passThrough=1;
		};
	};
	class H_MM_Helmet_01: ItemCore
	{
		scope=2;
		author="IN005";
		weaponPoolAvailable=1;
		displayName="Selfmade Helmet";
		picture="";
		model="\MadArmA_Gear_Head\SelfMade_Helmet_01\helmet_01";
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformModel="\MadArmA_Gear_Head\SelfMade_Helmet_01\helmet_01";
			modelSides[]={6};
			armor=2;
			passThrough=0.89999998;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=4;
					passThrough=0.85000002;
				};
			};
		};
	};
	class H_MM_Helmet_02: ItemCore
	{
		scope=2;
		author="IN005";
		weaponPoolAvailable=1;
		displayName="Nomad Old Drivers Helmet";
		descriptionShort="Light armor";
		picture="\breakingpoint_ui\icons\NomadIcon.paa";
		model="\MadArmA_Gear_Head\Old_Drivers_Helmet\old_drivers_hat";
		class ItemInfo: HeadgearItem
		{
			mass=40;
			allowedSlots[]={901};
			uniformModel="\MadArmA_Gear_Head\Old_Drivers_Helmet\old_drivers_hat";
			modelSides[]={6};
			armor=2;
			passThrough=0.85000002;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=4;
					passThrough=0.85000002;
				};
			};
		};
	};
};
class cfgMods
{
	author="IN005";
	timepacked="1497711647";
};
