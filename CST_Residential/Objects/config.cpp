class CfgPatches
{
	class CST_Residential_Objects
	{
		units[]={};
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
	};
	class Land_KBud: House
	{
		model="\CST\CST_Residential\Objects\KBud.p3d";
		animated=1;
		destrType="DestructTent";
		armor=20;
		class AnimationSources
		{
			class Dvere1
			{
				animPeriod=1;
			};
		};
		class UserActions
		{
			class OpenDoors
			{
				displayName="$STR_DN_OUT_O_DOOR";
				position="osa_dvere1";
				radius=2.5;
				onlyForPlayer=1;
				condition="this animationPhase ""Dvere1"" < 0.5";
				statement="this animate [""Dvere1"", 1]";
			};
			class CloseDoors
			{
				displayName="$STR_DN_OUT_C_DOOR";
				position="osa_dvere1";
				radius=2.5;
				onlyForPlayer=1;
				condition="this animationPhase ""Dvere1"" >= 0.5";
				statement="this animate [""Dvere1"", 0]";
			};
		};
		actionBegin1="OpenDoors";
		actionEnd1="OpenDoors";
	};
};
