
class CfgPatches 
{
	class breakingpoint_malden
	{
		units[] = {};
		weapons[] = {}; 
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"A3_Map_Malden",
			"A3_Structures_F_Argo",
			"A3_Data_F_Enoch_Loadorder"
		};
	};
};
class CfgWorlds
{
	class CAWorld;

	class Malden: CAWorld
	{
		class AmbientA3
		{
			maxCost=500;
			delete Radius440_500;
			delete Radius40_60;
			delete Radius30_40;
			delete Radius15_20;
			delete Radius6_10;
		};
	};
};

class CfgVehicles
{
	class House;
	class House_F;
	class House_Small_F;
	class Lamps_base_F;
	class PowerLines_Wires_base_F;
	class PowerLines_Small_base_F;
	class Land_LampAirport_off_F;
	
	//Fuel Pumps
	class Land_FuelStation_01_pump_F: House_F
	{
		transportFuel=0;
	
	/*
	class DestructionEffects
		{
			class FuelStationSmk1
			{
				simulation="particles";
				type="FuelStationSmk1";
				position="";
				intensity=0.15000001;
				interval=1;
				lifeTime=0.001;
			};
			class Light1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="DestructionFire";
				intensity=0.001;
				interval=1;
				lifeTime=0.5;
			};
			class FuelFire1
			{
				simulation="particles";
				type="FuelFire1";
				position="DestructionFire";
				intensity=0.15000001;
				interval=1;
				lifeTime=0.5;
			};
			class FuelDestr
			{
				simulation="destroy";
				type="FuelStationDestr";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
			class FuelSmoke1
			{
				simulation="particles";
				type="FuelFire1";
				position="ObjectDestructionSmokeFuelS";
				intensity=0.15000001;
				interval=1;
				lifeTime=0.5;
			};
			class FuelSmoke2
			{
				simulation="particles";
				type="ObjectDestructionSmokeFuelS1_2";
				position="DestructionFire";
				intensity=0.15000001;
				interval=1;
				lifeTime=0.5;
			};
		};
		*/
	};

	class Land_FuelStation_01_pump_malevil_F: House_F
	{
		transportFuel=0;
	};

	class Land_FuelStation_02_pump_F: House_F
	{
		transportFuel=0;
	};

	class Land_FuelStation_03_pump_F: House_F
	{
		transportFuel=0;
	};
	
	//Electricity
	
	/*class Land_PowerWireSmall_direct_F: PowerLines_Wires_base_F
	{
		model="\A3\Weapons_F\empty.p3d";
	};
	class Land_PowerWireSmall_Left_F: PowerLines_Wires_base_F
	{
		model="\A3\Weapons_F\empty.p3d";
	};
	class Land_PowerWireSmall_Right_F: PowerLines_Wires_base_F
	{
		model="\A3\Weapons_F\empty.p3d";
	};*/
	class Land_HighVoltageColumnWire_F: PowerLines_Wires_base_F
	{
		model="\A3\Weapons_F\empty.p3d";
	};
	class Land_PowerWireBig_direct_F: PowerLines_Wires_base_F
	{
		model="\A3\Weapons_F\empty.p3d";
	};
	class Land_PowerWireBig_direct_short_F: PowerLines_Wires_base_F
	{
		model="\A3\Weapons_F\empty.p3d";
	};
	class Land_PowerWireBig_end_F: PowerLines_Wires_base_F
	{
		model="\A3\Weapons_F\empty.p3d";
	};
	class Land_PowerWireBig_left_F: PowerLines_Wires_base_F
	{
		model="\A3\Weapons_F\empty.p3d";
	};
	class Land_PowerWireBig_right_F: PowerLines_Wires_base_F
	{
		model="\A3\Weapons_F\empty.p3d";
	};
	
	class Land_PowerPoleWooden_L_F: PowerLines_Small_base_F
	{
		_generalmacro="Land_PowerPoleWooden_L_off_F";
		author="Bohemia Interactive";
		cost=1000;
		displayname="Wooden Power Pole (Lamp) [off]";
		model="\A3\Structures_F\Ind\PowerLines\PowerPoleWooden_L_off_F.p3d";
		scope=1;
	};
	class Land_LampStreet_F: Lamps_base_F
	{
		mapSize=3.77;
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="Land_LampStreet_off_F";
		scope=1;
		displayName="$STR_A3_CfgVehicles_Land_LampStreet_off_F0";
		model="\A3\Structures_F\Civ\Lamps\LampStreet_off_F.p3d";
	};
	class Land_LampStreet_small_F: Lamps_base_F
	{
		mapSize=0.68;
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="Land_LampStreet_small_off_F";
		scope=1;
		displayName="$STR_A3_CfgVehicles_Land_LampStreet_small_off_F0";
		model="\A3\Structures_F\Civ\Lamps\LampStreet_small_off_F.p3d";
	};
	class Land_LampAirport_F: Land_LampAirport_off_F
	{
		mapSize=3.68;
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="Land_LampAirport_off_F";
		scope=1;
		displayName="$STR_A3_CfgVehicles_Land_LampAirport_off_F0";
		model="\A3\Structures_F\Civ\Lamps\LampAirport_off_F.p3d";
	};
	class Land_LampAirport_intact_F: Land_LampAirport_F
	{
		displayName="Lamp Airport [intact]";
		model="\A3\Structures_F\Civ\Lamps\LampAirport_F.p3d";
		scope=2;
	};
	class Land_LampDecor_F: Lamps_base_F
	{
		mapSize=1.32;
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="Land_LampDecor_off_F";
		scope=1;
		displayName="$STR_A3_CfgVehicles_Land_LampDecor_off_F0";
		model="\A3\Structures_F\Civ\Lamps\LampDecor_off_F.p3d";
	};
	class Land_LampHalogen_F: Lamps_base_F
	{
		mapSize=1.59;
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="Land_LampHalogen_off_F";
		scope=1;
		displayName="$STR_A3_CfgVehicles_Land_LampHalogen_off_F0";
		model="\A3\Structures_F\Civ\Lamps\LampHalogen_off_F.p3d";
		class reflectors
		{
			class Light_1
			{
				ambient[]={0,0,0};
				color[]={0,0,0};
				coneFadeCoef=4;
				direction="Light_1_dir";
				flareMaxDistance=0;
				flareSize=0;
				hitpoint="Light_1_hitpoint";
				innerAngle=100;
				intensity=0;
				outerAngle=165;
				position="Light_1_pos";
				selection="Light_1_hide";
				size=0;
				useFlare=0;
			};
			class Light_2
			{
				ambient[]={0,0,0};
				color[]={0,0,0};
				coneFadeCoef=4;
				direction="Light_2_dir";
				flareMaxDistance=0;
				flareSize=0;
				hitpoint="Light_2_hitpoint";
				innerAngle=100;
				intensity=0;
				outerAngle=165;
				position="Light_2_pos";
				selection="Light_2_hide";
				size=0;
				useFlare=0;
			};
			class Light_3
			{
				ambient[]={0,0,0};
				color[]={0,0,0};
				coneFadeCoef=4;
				direction="Light_3_dir";
				flareMaxDistance=0;
				flareSize=0;
				hitpoint="Light_3_hitpoint";
				innerAngle=100;
				intensity=0;
				outerAngle=165;
				position="Light_3_pos";
				selection="Light_3_hide";
				size=0;
				useFlare=0;
			};
		};
	};
	class Land_LampHalogen_intact_F: Land_LampHalogen_F
	{
		scope=2;
		displayName="Lamp Halogen [intact]";
		model="\A3\Structures_F\Civ\Lamps\LampHalogen_F.p3d";
		class reflectors
		{
			class Light_1
			{
				ambient[]={2.5,4,6};
				color[]={2500,4000,6000};
				coneFadeCoef=4;
				direction="Light_1_dir";
				flareMaxDistance=130;
				flareSize=2;
				hitpoint="Light_1_hitpoint";
				innerAngle=100;
				intensity=2;
				outerAngle=165;
				position="Light_1_pos";
				selection="Light_1_hide";
				size=1;
				useFlare=1;
			};
			class Light_2
			{
				ambient[]={2.5,4,6};
				color[]={2500,4000,6000};
				coneFadeCoef=4;
				direction="Light_2_dir";
				flareMaxDistance=130;
				flareSize=2;
				hitpoint="Light_2_hitpoint";
				innerAngle=100;
				intensity=2;
				outerAngle=165;
				position="Light_2_pos";
				selection="Light_2_hide";
				size=1;
				useFlare=1;
			};
			class Light_3
			{
				ambient[]={2.5,4,6};
				color[]={2500,4000,6000};
				coneFadeCoef=4;
				direction="Light_3_dir";
				flareMaxDistance=130;
				flareSize=2;
				hitpoint="Light_3_hitpoint";
				innerAngle=100;
				intensity=2;
				outerAngle=165;
				position="Light_3_pos";
				selection="Light_3_hide";
				size=1;
				useFlare=1;
			};
		};
	};
	class Land_LampHarbour_F: Lamps_base_F
	{
		mapSize=0.80000001;
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="Land_LampHarbour_off_F";
		scope=1;
		displayName="$STR_A3_CfgVehicles_Land_LampHarbour_off_F0";
		model="\A3\Structures_F\Civ\Lamps\LampHarbour_off_F.p3d";
	};
	class Land_LampShabby_F: Lamps_base_F
	{
		mapSize=0.79000002;
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="Land_LampShabby_off_F";
		scope=1;
		displayName="$STR_A3_CfgVehicles_Land_LampShabby_off_F0";
		model="\A3\Structures_F\Civ\Lamps\LampShabby_off_F.p3d";
	};
	
	//Turbines
	
	class Land_wpp_Turbine_V1_F: House_F
	{
		scope=2;
		simulation="ruin";
		submerged=0;
		submergespeed=0;
		timetolive="1e+010";
		airfriction0[]={0.01,0.01,0.01};
		airfriction1[]={0.01,0.01,0.01};
		airfriction2[]={0.01,0.01,0.01};
		airrotation=0;
		disappearatcontact=0;
		gravityfactor=1;
	};
	class Land_wpp_Turbine_V2_F: House_F
	{
		scope=2;
		simulation="ruin";
		submerged=0;
		submergespeed=0;
		timetolive="1e+010";
		airfriction0[]={0.01,0.01,0.01};
		airfriction1[]={0.01,0.01,0.01};
		airfriction2[]={0.01,0.01,0.01};
		airrotation=0;
		disappearatcontact=0;
		gravityfactor=1;
	};
	
	//Havens
	
	//Enoch
	class Land_House_1W01_F : House_F
	{
		armor = 5000;
	};
	class Land_House_1W02_F : House_F
	{
		armor = 5000;
	};
	class Land_House_1W03_F : House_F
	{
		armor = 5000;
	};
	class Land_House_1W04_F : House_F
	{
		armor = 5000;
	};
	class Land_House_1W05_F : House_F
	{
		armor = 5000;
	};
	class Land_House_1W06_F : House_F
	{
		armor = 5000;
	};
	class Land_House_1W07_F : House_F
	{
		armor = 5000;
	};
	class Land_House_1W08_F : House_F
	{
		armor = 5000;
	};
	class Land_House_1W09_F : House_F
	{
		armor = 5000;
	};
	class Land_House_1W10_F : House_F
	{
		armor = 5000;
	};
	class Land_House_1W11_F : House_F
	{
		armor = 5000;
	};
	class Land_House_1W12_F : House_F
	{
		armor = 5000;
	};
	class Land_House_2W01_F : House_F
	{
		armor = 5000;
	};
	class Land_House_2W03_F : House_F
	{
		armor = 5000;
	};
	class Land_House_2W04_F : House_F
	{
		armor = 5000;
	};
	class Land_Camp_House_01_brown_F : House_F
	{
		armor = 5000;
	};
	class Land_Workshop_03_F : House_F
	{
		armor = 5000;
	};
	//Malden
	class i_House_Big_02_b_base_F: House_F 
	{
		class UserActions 
		{
			class OpenDoor_1
			{
				condition="((this animationPhase 'Door_1_rot') < 0.5) && ((this getVariable ['bis_disabled_Door',0]) != 1) && ((this animationPhase 'Hitzone_1_hide') < 0.99999				)";
				statement="([this, 'Door_1_rot', 'Door_Handle_1_rot_1', 'Door_Handle_1_rot_2'] call BIS_fnc_DoorOpen)";
			};
			class OpenDoor_2
			{
				condition="((this animationPhase 'Door_2_rot') < 0.5) && ((this getVariable ['bis_disabled_Door',0]) != 1)";
				statement="([this, 'Door_2_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorOpen)";
			};
			class OpenDoor_3
			{
				condition="((this animationPhase 'Door_3_rot') < 0.5) && ((this getVariable ['bis_disabled_Door',0]) != 1)";
				statement="([this, 'Door_3_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorOpen)";
			};
			class OpenDoor_4
			{
				condition="((this animationPhase 'Door_4_rot') < 0.5) && ((this getVariable ['bis_disabled_Door',0]) != 1)";
				statement="([this, 'Door_4_rot', 'Door_Handle_4_rot_1', 'Door_Handle_4_rot_2'] call BIS_fnc_DoorOpen)";
			};
			class OpenDoor_5
			{
				condition="((this animationPhase 'Door_5_rot') < 0.5) && ((this getVariable ['bis_disabled_Door',0]) != 1)";
				statement="([this, 'Door_5_rot', 'Door_Handle_5_rot_1', 'Door_Handle_5_rot_2'] call BIS_fnc_DoorOpen)";
			};
			class OpenDoor_6
			{
				condition="((this animationPhase 'Door_6_rot') < 0.5) && ((this getVariable ['bis_disabled_Door',0]) != 1)";
				statement="([this, 'Door_6_rot', 'Door_Handle_6_rot_1', 'Door_Handle_6_rot_2'] call BIS_fnc_DoorOpen)";
			};

			class CloseDoor_1: OpenDoor_1 
			{
				condition="((this animationPhase 'Door_1_rot') >= 0.5) && ((this getVariable ['bis_disabled_Door',0]) != 1) && ((this animationPhase 'Hitzone_1_hide') < 0.99999				)";
				statement="([this, 'Door_1_rot', 'Door_Handle_1_rot_1', 'Door_Handle_1_rot_2'] call BIS_fnc_DoorClose)";
			};
			class CloseDoor_2: OpenDoor_2 
			{
				condition="((this animationPhase 'Door_2_rot') >= 0.5) && ((this getVariable ['bis_disabled_Door',0]) != 1)";
				statement="([this, 'Door_2_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorClose)";
			};
			class CloseDoor_3: OpenDoor_3 
			{
				condition="((this animationPhase 'Door_3_rot') >= 0.5) && ((this getVariable ['bis_disabled_Door',0]) != 1)";
				statement="([this, 'Door_3_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorClose)";
			};
			class CloseDoor_4: OpenDoor_4 
			{
				condition="((this animationPhase 'Door_4_rot') >= 0.5) && ((this getVariable ['bis_disabled_Door',0]) != 1)";
				statement="([this, 'Door_4_rot', 'Door_Handle_4_rot_1', 'Door_Handle_4_rot_2'] call BIS_fnc_DoorClose)";
			};
			class CloseDoor_5: OpenDoor_5 
			{
				condition="((this animationPhase 'Door_6_rot') >= 0.5) && ((this getVariable ['bis_disabled_Door',0]) != 1)";
				statement="([this, 'Door_5_rot', 'Door_Handle_5_rot_1', 'Door_Handle_5_rot_2'] call BIS_fnc_DoorClose)";
			};
			class CloseDoor_6: OpenDoor_6 
			{
				condition="((this animationPhase 'Door_6_rot') >= 0.5) && ((this getVariable ['bis_disabled_Door',0]) != 1)";
				statement="([this, 'Door_6_rot', 'Door_Handle_6_rot_1', 'Door_Handle_6_rot_2'] call BIS_fnc_DoorClose)";
			};

			class OpenLockedDoor_1: OpenDoor_1
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				condition="((this animationPhase 'Door_1_rot') < 0.1) && ((this getVariable ['bis_disabled_Door',0]) == 1) && ((this animationPhase 'Hitzone_1_hide') < 0.99999				)";
				statement="([this, 'Door_Handle_1_rot_1', 'Door_Locked_1_rot'] spawn BIS_fnc_LockedDoorOpen)";
			};
			class OpenLockedDoor_2: OpenDoor_2
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				condition="((this animationPhase 'Door_2_rot') < 0.1) && ((this getVariable ['bis_disabled_Door',0]) == 1)";
				statement="([this, 'Door_Handle_2_rot_1', 'Door_Locked_2_rot'] spawn BIS_fnc_LockedDoorOpen)";
			};
			class OpenLockedDoor_3: OpenDoor_3
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				condition="((this animationPhase 'Door_3_rot') < 0.1) && ((this getVariable ['bis_disabled_Door',0]) == 1)";
				statement="([this, 'Door_Handle_3_rot_1', 'Door_Locked_3_rot'] spawn BIS_fnc_LockedDoorOpen)";
			};
			class OpenLockedDoor_4: OpenDoor_4
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				condition="((this animationPhase 'Door_4_rot') < 0.1) && ((this getVariable ['bis_disabled_Door',0]) == 1)";
				statement="([this, 'Door_Handle_4_rot_1', 'Door_Locked_4_rot'] spawn BIS_fnc_LockedDoorOpen)";
			};
			class OpenLockedDoor_5: OpenDoor_5
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				condition="((this animationPhase 'Door_5_rot') < 0.1) && ((this getVariable ['bis_disabled_Door',0]) == 1)";
				statement="([this, 'Door_Handle_5_rot_1', 'Door_Locked_5_rot'] spawn BIS_fnc_LockedDoorOpen)";
			};
			class OpenLockedDoor_6: OpenDoor_6
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				condition="((this animationPhase 'Door_6_rot') < 0.1) && ((this getVariable ['bis_disabled_Door',0]) == 1)";
				statement="([this, 'Door_Handle_6_rot_1', 'Door_Locked_6_rot'] spawn BIS_fnc_LockedDoorOpen)";
			};

		};
	};
	class Land_i_House_Big_02_b_blue_F: i_House_Big_02_b_base_F {};
	class Land_i_House_Big_02_b_brown_F: i_House_Big_02_b_base_F {};
	class Land_i_House_Big_02_b_pink_F: i_House_Big_02_b_base_F {};
	class Land_i_House_Big_02_b_white_F: i_House_Big_02_b_base_F {};
	class Land_i_House_Big_02_b_whiteblue_F: i_House_Big_02_b_base_F {};
	class Land_i_House_Big_02_b_yellow_F: i_House_Big_02_b_base_F {};
	
	class i_House_Big_01_b_base_F: House_F
	{
		class UserActions
		{
			class OpenDoor_1
				{
					condition="((this animationPhase 'Door_1_rot') < 0.5) && ((this getVariable ['bis_disabled_Door',0]) != 1) && ((this animationPhase 'Hitzone_1_hide') < 0.99999				)";
					statement="([this, 'Door_1_rot', 'Door_Handle_1_rot_1', 'Door_Handle_1_rot_2'] call BIS_fnc_DoorOpen)";
				};
			class OpenDoor_2
				{
					condition="((this animationPhase 'Door_2_rot') < 0.5) && ((this getVariable ['bis_disabled_Door',0]) != 1)";
					statement="([this, 'Door_2_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorOpen)";
				};
			class OpenDoor_3
				{
					condition="((this animationPhase 'Door_3_rot') < 0.5) && ((this getVariable ['bis_disabled_Door',0]) != 1)";
					statement="([this, 'Door_3_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorOpen)";
				};
			class CloseDoor_1 : OpenDoor_1
				{
					condition="((this animationPhase 'Door_1_rot') >= 0.5) && ((this getVariable ['bis_disabled_Door',0]) != 1) && ((this animationPhase 'Hitzone_1_hide') < 0.99999				)";
					statement="([this, 'Door_1_rot', 'Door_Handle_1_rot_1', 'Door_Handle_1_rot_2'] call BIS_fnc_DoorClose)";
				};
			class CloseDoor_2 : OpenDoor_2
				{
					condition="((this animationPhase 'Door_2_rot') >= 0.5) && ((this getVariable ['bis_disabled_Door',0]) != 1)";
					statement="([this, 'Door_2_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorClose)";
				};
			class CloseDoor_3 : OpenDoor_3
				{
					condition="((this animationPhase 'Door_3_rot') >= 0.5) && ((this getVariable ['bis_disabled_Door',0]) != 1)";
					statement="([this, 'Door_3_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorClose)";
				};
			class OpenLockedDoor_1 : OpenDoor_1
				{
					displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					condition="((this animationPhase 'Door_1_rot') < 0.1) && ((this getVariable ['bis_disabled_Door',0]) == 1) && ((this animationPhase 'Hitzone_1_hide') < 0.99999				)";
					statement="([this, 'Door_Handle_1_rot_1', 'Door_Locked_1_rot'] spawn BIS_fnc_LockedDoorOpen)";
				};
			class OpenLockedDoor_2 : OpenDoor_2
				{
					displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					condition="((this animationPhase 'Door_2_rot') < 0.1) && ((this getVariable ['bis_disabled_Door',0]) == 1)";
					statement="([this, 'Door_Handle_2_rot_1', 'Door_Locked_2_rot'] spawn BIS_fnc_LockedDoorOpen)";
				};
			class OpenLockedDoor_3 : OpenDoor_3
				{
					displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					condition="((this animationPhase 'Door_3_rot') < 0.1) && ((this getVariable ['bis_disabled_Door',0]) == 1)";
					statement="([this, 'Door_Handle_3_rot_1', 'Door_Locked_3_rot'] spawn BIS_fnc_LockedDoorOpen)";
				};


		};

	};
	class Land_i_House_Big_01_b_blue_F: i_House_Big_01_b_base_F {};
	class Land_i_House_Big_01_b_brown_F: i_House_Big_01_b_base_F {};
	class Land_i_House_Big_01_b_pink_F: i_House_Big_01_b_base_F {};
	class Land_i_House_Big_01_b_white_F: i_House_Big_01_b_base_F {};
	class Land_i_House_Big_01_b_whiteblue_F: i_House_Big_01_b_base_F {};
	class Land_i_House_Big_01_b_yellow_F: i_House_Big_01_b_base_F {};
	
	class i_House_Small_01_b_base_F: House_F
	{
		class UserActions
		{
			class OpenDoor_1
				{
					condition="((this animationPhase 'Door_1_rot') < 0.5) && ((this getVariable ['bis_disabled_Door',0]) != 1) && ((this animationPhase 'Hitzone_1_hide') < 0.99999				)";
					statement="([this, 'Door_1_rot', 'Door_Handle_1_rot_1', 'Door_Handle_1_rot_2'] call BIS_fnc_DoorOpen)";
				};
			class OpenDoor_2
				{
					condition="((this animationPhase 'Door_2_rot') < 0.5) && ((this getVariable ['bis_disabled_Door',0]) != 1)";
					statement="([this, 'Door_2_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorOpen)";
				};
			class OpenDoor_3
				{
					condition="((this animationPhase 'Door_3_rot') < 0.5) && ((this getVariable ['bis_disabled_Door',0]) != 1)";
					statement="([this, 'Door_3_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorOpen)";
				};
			class OpenDoor_4
				{
					condition="((this animationPhase 'Door_4_rot') < 0.5) && ((this getVariable ['bis_disabled_Door',0]) != 1)";
					statement="([this, 'Door_4_rot', 'Door_Handle_4_rot_1', 'Door_Handle_4_rot_2'] call BIS_fnc_DoorOpen)";
				};
			class CloseDoor_1 : OpenDoor_1
				{
					condition="((this animationPhase 'Door_1_rot') >= 0.5) && ((this getVariable ['bis_disabled_Door',0]) != 1) && ((this animationPhase 'Hitzone_1_hide') < 0.99999				)";
					statement="([this, 'Door_1_rot', 'Door_Handle_1_rot_1', 'Door_Handle_1_rot_2'] call BIS_fnc_DoorClose)";
				};
			class CloseDoor_2 : OpenDoor_2
				{
					condition="((this animationPhase 'Door_2_rot') >= 0.5) && ((this getVariable ['bis_disabled_Door',0]) != 1)";
					statement="([this, 'Door_2_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorClose)";
				};
			class CloseDoor_3 : OpenDoor_3
				{
					condition="((this animationPhase 'Door_3_rot') >= 0.5) && ((this getVariable ['bis_disabled_Door',0]) != 1)";
					statement="([this, 'Door_3_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorClose)";
				};
			class CloseDoor_4 : OpenDoor_4
				{
					condition="((this animationPhase 'Door_4_rot') >= 0.5) && ((this getVariable ['bis_disabled_Door',0]) != 1)";
					statement="([this, 'Door_4_rot', 'Door_Handle_4_rot_1', 'Door_Handle_4_rot_2'] call BIS_fnc_DoorClose)";
				};
			class OpenLockedDoor_1 : OpenDoor_1
				{
					displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					condition="((this animationPhase 'Door_1_rot') < 0.1) && ((this getVariable ['bis_disabled_Door',0]) == 1) && ((this animationPhase 'Hitzone_1_hide') < 0.99999				)";
					statement="([this, 'Door_Handle_1_rot_1', 'Door_Locked_1_rot'] spawn BIS_fnc_LockedDoorOpen)";
				};
			class OpenLockedDoor_2 : OpenDoor_2
				{
					displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					condition="((this animationPhase 'Door_2_rot') < 0.1) && ((this getVariable ['bis_disabled_Door',0]) == 1)";
					statement="([this, 'Door_Handle_2_rot_1', 'Door_Locked_2_rot'] spawn BIS_fnc_LockedDoorOpen)";
				};
			class OpenLockedDoor_3 : OpenDoor_3
				{
					displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					condition="((this animationPhase 'Door_3_rot') < 0.1) && ((this getVariable ['bis_disabled_Door',0]) == 1)";
					statement="([this, 'Door_Handle_3_rot_1', 'Door_Locked_3_rot'] spawn BIS_fnc_LockedDoorOpen)";
				};
			class OpenLockedDoor_4 : OpenDoor_4
				{
					displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					condition="((this animationPhase 'Door_4_rot') < 0.1) && ((this getVariable ['bis_disabled_Door',0]) == 1)";
					statement="([this, 'Door_Handle_4_rot_1', 'Door_Locked_4_rot'] spawn BIS_fnc_LockedDoorOpen)";
				};

		};

	};
	class Land_i_House_Small_01_b_blue_F: i_House_Small_01_b_base_F {};
	class Land_i_House_Small_01_b_pink_F: i_House_Small_01_b_base_F {};
	class Land_i_House_Small_01_b_whiteblue_F: i_House_Small_01_b_base_F {};
	class Land_i_House_Small_01_b_white_F: i_House_Small_01_b_base_F {};
	class Land_i_House_Small_01_b_brown_F: i_House_Small_01_b_base_F {};
	class Land_i_House_Small_01_b_yellow_F: i_House_Small_01_b_base_F {};
	
	class i_House_Small_02_b_base_F: House_F
	{
		class UserActions
		{
			class OpenDoor_1
				{
					condition="((this animationPhase 'Door_1_rot') < 0.5) && ((this getVariable ['bis_disabled_Door',0]) != 1) && ((this animationPhase 'Hitzone_1_hide') < 0.99999				)";
					statement="([this, 'Door_1_rot', 'Door_Handle_1_rot_1', 'Door_Handle_1_rot_2'] call BIS_fnc_DoorOpen)";
				};
			class OpenDoor_2
				{
					condition="((this animationPhase 'Door_2_rot') < 0.5) && ((this getVariable ['bis_disabled_Door',0]) != 1)";
					statement="([this, 'Door_2_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorOpen)";
				};
			class OpenDoor_3
				{
					condition="((this animationPhase 'Door_3_rot') < 0.5) && ((this getVariable ['bis_disabled_Door',0]) != 1)";
					statement="([this, 'Door_3_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorOpen)";
				};
			class CloseDoor_1 : OpenDoor_1
				{
					condition="((this animationPhase 'Door_1_rot') >= 0.5) && ((this getVariable ['bis_disabled_Door',0]) != 1) && ((this animationPhase 'Hitzone_1_hide') < 0.99999				)";
					statement="([this, 'Door_1_rot', 'Door_Handle_1_rot_1', 'Door_Handle_1_rot_2'] call BIS_fnc_DoorClose)";
				};
			class CloseDoor_2 : OpenDoor_2
				{
					condition="((this animationPhase 'Door_2_rot') >= 0.5) && ((this getVariable ['bis_disabled_Door',0]) != 1)";
					statement="([this, 'Door_2_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorClose)";
				};
			class CloseDoor_3 : OpenDoor_3
				{
					condition="((this animationPhase 'Door_3_rot') >= 0.5) && ((this getVariable ['bis_disabled_Door',0]) != 1)";
					statement="([this, 'Door_3_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorClose)";
				};
			class OpenLockedDoor_1 : OpenDoor_1
				{
					displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					condition="((this animationPhase 'Door_1_rot') < 0.1) && ((this getVariable ['bis_disabled_Door',0]) == 1) && ((this animationPhase 'Hitzone_1_hide') < 0.99999				)";
					statement="([this, 'Door_Handle_1_rot_1', 'Door_Locked_1_rot'] spawn BIS_fnc_LockedDoorOpen)";
				};
			class OpenLockedDoor_2 : OpenDoor_2
				{
					displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					condition="((this animationPhase 'Door_2_rot') < 0.1) && ((this getVariable ['bis_disabled_Door',0]) == 1)";
					statement="([this, 'Door_Handle_2_rot_1', 'Door_Locked_2_rot'] spawn BIS_fnc_LockedDoorOpen)";
				};
			class OpenLockedDoor_3 : OpenDoor_3
				{
					displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					condition="((this animationPhase 'Door_3_rot') < 0.1) && ((this getVariable ['bis_disabled_Door',0]) == 1)";
					statement="([this, 'Door_Handle_3_rot_1', 'Door_Locked_3_rot'] spawn BIS_fnc_LockedDoorOpen)";
				};
		};

	};
	class Land_i_House_Small_02_b_blue_F: i_House_Small_02_b_base_F {};
	class Land_i_House_Small_02_b_pink_F: i_House_Small_02_b_base_F {};
	class Land_i_House_Small_02_b_whiteblue_F: i_House_Small_02_b_base_F {};
	class Land_i_House_Small_02_b_white_F: i_House_Small_02_b_base_F {};
	class Land_i_House_Small_02_b_brown_F: i_House_Small_02_b_base_F {};
	class Land_i_House_Small_02_b_yellow_F: i_House_Small_02_b_base_F {};
	
	class i_Stone_Shed_01_b_base_F: House_F
	{
		class UserActions
		{
			class OpenDoor_1
				{
					condition="((this animationPhase 'Door_1_rot') < 0.5) && ((this getVariable ['bis_disabled_Door',0]) != 1) && ((this animationPhase 'Hitzone_1_hide') < 0.99999				)";
					statement="([this, 'Door_1_rot', 'Door_Handle_1_rot_1', 'Door_Handle_1_rot_2'] call BIS_fnc_DoorOpen)";
				};
			class OpenDoor_2
				{
					condition="((this animationPhase 'Door_2_rot') < 0.5) && ((this getVariable ['bis_disabled_Door',0]) != 1)";
					statement="([this, 'Door_2_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorOpen)";
				};
			class CloseDoor_1 : OpenDoor_1
				{
					condition="((this animationPhase 'Door_1_rot') >= 0.5) && ((this getVariable ['bis_disabled_Door',0]) != 1) && ((this animationPhase 'Hitzone_1_hide') < 0.99999				)";
					statement="([this, 'Door_1_rot', 'Door_Handle_1_rot_1', 'Door_Handle_1_rot_2'] call BIS_fnc_DoorClose)";
				};
			class CloseDoor_2 : OpenDoor_2
				{
					condition="((this animationPhase 'Door_2_rot') >= 0.5) && ((this getVariable ['bis_disabled_Door',0]) != 1)";
					statement="([this, 'Door_2_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorClose)";
				};
			class OpenLockedDoor_1 : OpenDoor_1
				{
					displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					condition="((this animationPhase 'Door_1_rot') < 0.1) && ((this getVariable ['bis_disabled_Door',0]) == 1) && ((this animationPhase 'Hitzone_1_hide') < 0.99999				)";
					statement="([this, 'Door_Handle_1_rot_1', 'Door_Locked_1_rot'] spawn BIS_fnc_LockedDoorOpen)";
				};
			class OpenLockedDoor_2 : OpenDoor_2
				{
					displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					condition="((this animationPhase 'Door_2_rot') < 0.1) && ((this getVariable ['bis_disabled_Door',0]) == 1)";
					statement="([this, 'Door_Handle_2_rot_1', 'Door_Locked_2_rot'] spawn BIS_fnc_LockedDoorOpen)";
				};
		};

	};
	class Land_i_Stone_Shed_01_b_clay_F: i_Stone_Shed_01_b_base_F {};
	class Land_i_Stone_Shed_01_b_raw_F: i_Stone_Shed_01_b_base_F {};
	class Land_i_Stone_Shed_01_b_white_F: i_Stone_Shed_01_b_base_F {};
	
	//Replacements
	
	class Cargo_House_base_F;
	class Cargo_HQ_base_F;
	class Cargo_Patrol_base_F;
	class Cargo_Tower_base_F;
	class Land_Cargo_House_V1_F: Cargo_House_base_F
	{
		model="\A3\Structures_F\Mil\Cargo\Cargo_House_V2_F.p3d";
	};
	class Land_Cargo_House_V3_F: Cargo_House_base_F
	{
		model="\A3\Structures_F\Mil\Cargo\Cargo_House_V2_F.p3d";
	};
	class Land_Cargo_HQ_V1_F: Cargo_HQ_base_F
	{
		model="\A3\Structures_F\Mil\Cargo\Cargo_HQ_V2_F.p3d";
	};
	class Land_Cargo_HQ_V3_F: Cargo_HQ_base_F
	{
		model="\A3\Structures_F\Mil\Cargo\Cargo_HQ_V2_F.p3d";
	};
	class Land_Cargo_Patrol_V1_F: Cargo_Patrol_base_F
	{
		model="\A3\Structures_F\Mil\Cargo\Cargo_Patrol_V2_F.p3d";
	};
	class Land_Cargo_Patrol_V3_F: Cargo_Patrol_base_F
	{
		model="\A3\Structures_F\Mil\Cargo\Cargo_Patrol_V2_F.p3d";
	};
	class Land_Cargo_Tower_V1_F: Cargo_Tower_base_F
	{
		model="\A3\Structures_F\Mil\Cargo\Cargo_Tower_V2_F.p3d";
	};
	class Land_Cargo_Tower_V1_No1_F: Land_Cargo_Tower_V1_F
	{
		model="\A3\Structures_F\Mil\Cargo\Cargo_Tower_V2_F.p3d";
	};
	class Land_Cargo_Tower_V1_No2_F: Land_Cargo_Tower_V1_F
	{
		model="\A3\Structures_F\Mil\Cargo\Cargo_Tower_V2_F.p3d";
	};
	class Land_Cargo_Tower_V1_No3_F: Land_Cargo_Tower_V1_F
	{
		model="\A3\Structures_F\Mil\Cargo\Cargo_Tower_V2_F.p3d";
	};
	class Land_Cargo_Tower_V1_No4_F: Land_Cargo_Tower_V1_F
	{
		model="\A3\Structures_F\Mil\Cargo\Cargo_Tower_V2_F.p3d";
	};
	class Land_Cargo_Tower_V1_No5_F: Land_Cargo_Tower_V1_F
	{
		model="\A3\Structures_F\Mil\Cargo\Cargo_Tower_V2_F.p3d";
	};
	class Land_Cargo_Tower_V1_No6_F: Land_Cargo_Tower_V1_F
	{
		model="\A3\Structures_F\Mil\Cargo\Cargo_Tower_V2_F.p3d";
	};
	class Land_Cargo_Tower_V1_No7_F: Land_Cargo_Tower_V1_F
	{
		model="\A3\Structures_F\Mil\Cargo\Cargo_Tower_V2_F.p3d";
	};
	class Land_Cargo_Tower_V3_F: Cargo_Tower_base_F
	{
		model="\A3\Structures_F\Mil\Cargo\Cargo_Tower_V2_F.p3d";
	};
};