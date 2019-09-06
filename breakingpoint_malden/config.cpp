
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
	class House_F;
	
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
};