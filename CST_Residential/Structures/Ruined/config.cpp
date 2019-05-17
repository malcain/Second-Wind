class CfgPatches
{
	class CST_Residential_Structures_Ruined
	{
		units[]=
		{
			"Land_dulni_bs",
			"Land_Dulni_bs_ruins"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
		magazines[]={};
		ammo[]={};
	};
};
class CfgVehicles
{
	class HouseBase;
	class House: HouseBase
	{
		class DestructionEffects;
	};
	class Ruins;
	class Land_dulni_bs: House
	{
		scope=2;
		armor=500;
		model="\CST\CST_Residential\Structures\Ruined\dulni_bs.p3d";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation="ruin";
				type="\CST\CST_Residential\Structures\Ruined\dulni_bs_ruins.p3d";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
		};
		displayName="Prison old";
		editorCategory="EdCat_Structures";
		editorSubcategory="EdSubcat_Historical";
	};
	class Land_Dulni_bs_ruins: Ruins
	{
		scope=1;
		vehicleClass="Ruins";
		model="\CST\CST_Residential\Structures\Ruined\Dulni_bs_ruins.p3d";
		displayName="Dulni_bs_ruins";
	};
};
