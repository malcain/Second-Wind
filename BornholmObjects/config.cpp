class CfgPatches
{
	class bornholmobjects
	{
		units[]=
		{
			"Land_bo_A_TVTower_Base",//
			"Land_bo_Misc_ChickenCoop",//
			"Land_bo_misc_deerstand",//
			"Land_bo_Misc_Hutch",//
			"Land_bo_pumpa",//watercolum
			"Land_bo_seno_balik",//
			"Land_bo_Shed_wooden",//
			"Land_bo_stanek_3",//
			"Land_bo_Wall_L5_10m_EP1"//sandwall
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
		};
	};
};
class CfgAddons
{
	class clan_sign_tutorial
	{
		list[]=
		{
			"Land_bo_A_TVTower_Base",
			"Land_bo_A_TVTower_Mid",//
			"Land_bo_A_TVTower_Top",//
			"Land_bo_Misc_ChickenCoop",
			"Land_bo_misc_deerstand",
			"Land_bo_Misc_Hutch",
			"Land_bo_pumpa",
			"Land_bo_seno_balik",
			"Land_bo_Shed_wooden"
		};
	};
};
class CfgVehicleClasses
{
	class bornholmobjects
	{
		displayName="Bornholm Objects";
	};
};
class CfgVehicles
{
	class House;
	class Ruins_F;
	class Sign_F;
	class ladder: House
	{
		class DestructionEffects
		{
		};
		model="\es\bornholmobjects\Data\Proxy\ladder";
		ladders[]=
		{
			
			{
				"start",
				"end"
			}
		};
	};
	class LadderLong: House
	{
		class DestructionEffects
		{
		};
		model="\es\bornholmobjects\Data\Proxy\LadderLong";
		ladders[]=
		{
			
			{
				"start",
				"end"
			}
		};
	};

	class Land_bo_A_TVTower_Base: House
	{
		scope=2;
		armor=1000;
		destrType="DestructNo";
		model="\es\bornholmobjects\bo_A_TVTower_Base";
		displayName="TV Tower";
		class AnimationSources
		{
			class dvere1
			{
				animPeriod=1;
				initPhase=1;
			};
			class dvere2
			{
				animPeriod=1;
				initPhase=1;
			};
		};
		ladders[]=
		{
			
			{
				"start",
				"end"
			}
		};
		class UserActions
		{
			class OpenDoors1
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName="$STR_DN_OUT_O_DOOR";
				position="dvere1_akce";
				priority=0.40000001;
				radius=3;
				onlyForPlayer=0;
				condition="((this animationPhase 'Dvere1') < 0.5)";
				statement="(this animate ['Dvere1', 1])";
			};
			class CloseDoors1
			{
				displayNameDefault="Close door";
				displayName="$STR_DN_OUT_C_DOOR";
				position="dvere1_akce";
				priority=0.40000001;
				radius=3;
				onlyForPlayer=0;
				condition="((this animationPhase 'Dvere1') >= 0.5)";
				statement="(this animate ['Dvere1', 0])";
			};
			class OpenDoors2
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName="$STR_DN_OUT_O_DOOR";
				position="dvere2_akce";
				priority=0.40000001;
				radius=3;
				onlyForPlayer=0;
				condition="((this animationPhase 'Dvere2') < 0.5)";
				statement="(this animate ['Dvere2', 1])";
			};
			class CloseDoors2
			{
				displayNameDefault="Close door";
				displayName="$STR_DN_OUT_C_DOOR";
				position="dvere2_akce";
				priority=0.40000001;
				radius=3;
				onlyForPlayer=0;
				condition="((this animationPhase 'Dvere2') >= 0.5)";
				statement="(this animate ['Dvere2', 0])";
			};
		};
		actionBegin1="OpenDoors1";
		actionEnd1="OpenDoors1";
		actionBegin2="OpenDoors2";
		actionEnd2="OpenDoors2";
		featureSize=150;
	};
	class Land_bo_A_TVTower_Mid: House
	{
		scope=2;
		armor=1000;
		destrType="DestructNo";
		model="\es\bornholmobjects\bo_A_TVTower_Mid";
		featureSize=150;
		class MarkerLights
		{
			class RedStill
			{
				color[]={1,0.1,0.1};
				ambient[]={0.1,0.0099999998,0.0099999998};
				intensity=800;
				name="cerveny pozicni";
				blinking=0;
				useFlare=1;
				flareSize=1.5;
				flareMaxDistance=5000;
				activeLight=0;
				dayLight=1;
				drawLight=0;
				class Attenuation
				{
					start=0;
					constant=2;
					linear=10;
					quadratic=20;
					hardLimitStart=5;
					hardLimitEnd=6;
				};
			};
		};
	};
	class Land_bo_A_TVTower_Top: House
	{
		scope=2;
		armor=1000;
		destrType="DestructNo";
		model="\es\bornholmobjects\bo_A_TVTower_Top";
		featureSize=150;
		class MarkerLights
		{
			class RedLight
			{
				color[]={1,0.1,0.1};
				ambient[]={0.1,0.0099999998,0.0099999998};
				intensity=800;
				name="lys1";
				blinking=1;
				blinkingPattern[]={2,1};
				blinkingStartsOn=1;
				blinkingPatternGuarantee=1;
				useFlare=0;
				flareSize=1.5;
				flareMaxDistance=5000;
				activeLight=1;
				dayLight=1;
				drawLight=0;
				class Attenuation
				{
					start=0;
					constant=2;
					linear=10;
					quadratic=20;
					hardLimitStart=5;
					hardLimitEnd=6;
				};
			};
		};
	};
	
	class Land_bo_Misc_ChickenCoop: House
	{
		armor=400;
		model="\ES\BornholmObjects\bo_Misc_ChickenCoop.p3d";
		displayName="Chicken Coop";
		scope=2;
	};
	class Land_bo_misc_deerstand: House
	{
		armor=500;
		model="\ES\BornholmObjects\bo_misc_deerstand.p3d";
		displayName="Deerstand";
		scope=2;
		ladders[]=
		{
			
			{
				"start1",
				"end1"
			}
		};
	};
	class Land_bo_Misc_Hutch: House
	{
		armor=600;
		model="\ES\BornholmObjects\bo_Misc_Hutch.p3d";
		displayName="Shed";
		scope=2;
	};
	class Land_bo_pumpa: House
	{
		armor=600;
		model="\ES\BornholmObjects\bo_pumpa.p3d";
		displayName="Small well";
		scope=2;
	};
	class Land_bo_seno_balik: House
	{
		armor=500;
		model="\ES\BornholmObjects\bo_seno_balik.p3d";
		displayName="Hayball";
		scope=2;
	};
	class Land_bo_Shed_wooden: House
	{
		armor=500;
		model="\ES\BornholmObjects\bo_Shed_wooden.p3d";
		displayName="Shed";
		scope=2;
	};
	class Land_bo_stanek_3: House
	{
		armor=500;
		model="\ES\BornholmObjects\bo_stanek_3.p3d";
		displayName="Shed";
		scope=2;
	};
	class Land_bo_Wall_L5_10m_EP1: House
	{
		armor=150;
		model="\ES\BornholmObjects\bo_Wall_L5_10m_EP1.p3d";
		displayName="Fence";
		scope=2;
	};
};
