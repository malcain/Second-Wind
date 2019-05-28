#include "basicdefines_A3.hpp"
class DefaultEventhandlers;
#include "cfgPatches.hpp"

class CfgVehicleClasses
{
    class breakingpoint_sw_object
    {
        displayName = "breakingpoint sw object";
    };
};

class cfgVehicles
{
	class House;
	class House_F: House
	{
		class DestructionEffects;
	};
	class Ruins_F;	
	class Logic;
	class Module_F: Logic
	{
		class ArgumentsBaseUnits
		{
			class Units;
		};
		class ModuleDescription
		{
			class AnyBrain;
		};
	};
	
	class bp_Skeleton_Base : House_F
	{
		author="Sterben_TOP";
		scope = 2;
		displayName = "bp_Skeleton_Base";
		model = \bp_sw\bp_sw_box\bp_Skeleton_Base.p3d;

		mapSize = 20.27;
		vehicleClass = "breakingpoint_sw_object";
	};

	class ReammoBox_F;
	class BP_Bag3: ReammoBox_F
	{
		author="Sterben_TOP";
		scope = 2;
		icon = "iconCrate";
		model = "\bp_sw\bp_sw_box\bp_bag3.p3d";
		displayName = "BP_Bag3";
		isGround=1;
		
		transportMaxWeapons=12;
		transportMaxMagazines=64;
		transportMaxBackpacks=12;
		
		maximumLoad=2000;
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		supplyRadius=0.6;
		cost=0;
		armor=200;
		waterLinearDampingCoefY=1;
		waterAngularDampingCoef=0.1;
		
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
	};
	class bp_Skeleton_2: ReammoBox_F
	{
		author="Sterben_TOP";
		scope = 2;
		icon = "iconCrate";
		model = "\bp_sw\bp_sw_box\bp_Skeleton_2.p3d";
		displayName = "bp_Skeleton_2";
		isGround=1;
		
		transportMaxWeapons=12;
		transportMaxMagazines=64;
		transportMaxBackpacks=12;
		
		maximumLoad=2000;
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		supplyRadius=0.6;
		cost=0;
		armor=200;
		waterLinearDampingCoefY=1;
		waterAngularDampingCoef=0.1;
		
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
	};
	class bp_Skeleton_1: ReammoBox_F
	{
		author="Sterben_TOP";
		scope = 2;
		icon = "iconCrate";
		model = "\bp_sw\bp_sw_box\bp_Skeleton_1.p3d";
		displayName = "bp_Skeleton_1";
		isGround=1;
		
		transportMaxWeapons=12;
		transportMaxMagazines=64;
		transportMaxBackpacks=12;
		
		maximumLoad=2000;
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		supplyRadius=0.6;
		cost=0;
		armor=200;
		waterLinearDampingCoefY=1;
		waterAngularDampingCoef=0.1;
		
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
	};
	class bp_Skeleton_3: ReammoBox_F
	{
		author="Sterben_TOP";
		scope = 2;
		icon = "iconCrate";
		model = "\bp_sw\bp_sw_box\bp_Skeleton_3.p3d";
		displayName = "bp_Skeleton_3";
		isGround=1;
		
		transportMaxWeapons=12;
		transportMaxMagazines=64;
		transportMaxBackpacks=12;
		
		maximumLoad=2000;
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		supplyRadius=0.6;
		cost=0;
		armor=200;
		waterLinearDampingCoefY=1;
		waterAngularDampingCoef=0.1;
		
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
	};
	
	class All
	{
	};
	class Static: All
	{
	};
	class Building: Static
	{
	};
	class NonStrategic: Building
	{
	};
	class platform_wlk: NonStrategic
	{
		model="\bp_sw\bp_sw_box\bp_platform.p3d";
		armor=20000;
		scope=2;
		displayName="platform wlk";
		icon="iconObject";
		mapSize=0.7;
		accuracy=0.2;
		hiddenSelections[]=
		{
			"camo"
		};
	};
};