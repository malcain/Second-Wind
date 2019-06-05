class CfgPatches
{
	class BP_SW_KeyEx
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"A3_Data_F","A3_Ui_F","A3_Functions_F"};
		fileName = "BP_SW_KeyEx.pbo";
		requiredVersion = 0.1;
		author[]= {"Kegan Hollern"};
	};
};


class CfgFunctions {
	class UI {
		tag = "KEX";
		class ui {
			file = "\bp_sw\BP_SW_KeyEx\Scripts\UI";
			class initDisplay {};
			class dikToHuman {};
		};
		class functions
		{
			file = "\bp_sw\BP_SW_KeyEx\Scripts\Functions";
			class preinit {
				preinit = 1;
				preStart = 1; //that way keybind definitions can be modified at main menu
			};
			class keypress {};
			class reinit {}; //used if the event handler is removed
		};
	};
	
};
/* Example of KeybindsEx usage in mod configs*/
class CfgKeybindsEx {
	class breakingpoint_FactionStats {
		displayName = "Open Diary"; //Tab Display Name
		class Diary { //Unique Identifier for this Keybind
			displayName = "Open Diary"; //Display name of this keybinding
			tooltip = "Opens your Diary with progress"; //Tooltip
			defaultKeys[] = {{0x24,0}}; //All default keys format is DIK_CODE,Special. Note that 0 means no special key (ctrl,shift,alt)
			code = "call BP_fnc_loadFactionStatsDiary;"; //Code to run when this keybind is pressed
		};
	};
	class breakingpoint_Heal {
		displayName = "Heal"; //Tab Display Name
		class Heal { //Unique Identifier for this Keybind
			displayName = "Heal"; //Display name of this keybinding
			tooltip = "Sit to Heal"; //Tooltip
			defaultKeys[] = {{0x23,0}}; //All default keys format is DIK_CODE,Special. Note that 0 means no special key (ctrl,shift,alt)
			code = "call BP_fnc_playerHeal;"; //Code to run when this keybind is pressed
		};
	};
	class breakingpoint_Jump {
		displayName = "Jump"; //Tab Display Name
		class Jump { //Unique Identifier for this Keybind
			displayName = "Jump"; //Display name of this keybinding
			tooltip = "Jump over walls and other obstacles."; //Tooltip
			defaultKeys[] = {{0x2F,0}}; //All default keys format is DIK_CODE,Special. Note that 0 means no special key (ctrl,shift,alt)
			code = "call BP_fnc_playerJump;"; //Code to run when this keybind is pressed
		};
	};
	class breakingpoint_Parkour {
		displayName = "Parkour"; //Tab Display Name
		class Parkour { //Unique Identifier for this Keybind
			displayName = "Parkour"; //Display name of this keybinding
			tooltip = "Climb on/over the walls and other obstacles."; //Tooltip
			defaultKeys[] = {{0x21,0}}; //All default keys format is DIK_CODE,Special. Note that 0 means no special key (ctrl,shift,alt)
			code = "[player] call BP_fnc_detectMove;"; //Code to run when this keybind is pressed
		};
	};
	class breakingpoint_Eat  {
		displayName = "Eat "; //Tab Display Name
		class Eat { //Unique Identifier for this Keybind
			displayName = "Eat "; //Display name of this keybinding
			tooltip = "Consumes random food if in inventory."; //Tooltip
			defaultKeys[] = {{0x51,0}}; //All default keys format is DIK_CODE,Special. Note that 0 means no special key (ctrl,shift,alt)
			code = "call BP_fnc_playerEat;"; //Code to run when this keybind is pressed
		};
	};
	class breakingpoint_Drink  {
		displayName = "Drink"; //Tab Display Name
		class Drink { //Unique Identifier for this Keybind
			displayName = "Drink"; //Display name of this keybinding
			tooltip = "Consumes random drink if in inventory."; //Tooltip
			defaultKeys[] = {{0x4F,0}}; //All default keys format is DIK_CODE,Special. Note that 0 means no special key (ctrl,shift,alt)
			code = "call BP_fnc_playerDrink;"; //Code to run when this keybind is pressed
		};
	};
	class breakingpoint_Bandage  {
		displayName = "Bandage"; //Tab Display Name
		class Bandage { //Unique Identifier for this Keybind
			displayName = "Bandage"; //Display name of this keybinding
			tooltip = "Uses a Small Bandage if in inventory."; //Tooltip
			defaultKeys[] = {{0x16,0}}; //All default keys format is DIK_CODE,Special. Note that 0 means no special key (ctrl,shift,alt)
			code = "call BP_fnc_playerBandage;"; //Code to run when this keybind is pressed
		};
	};
	class breakingpoint_Autorun  {
		displayName = "Autorun"; //Tab Display Name
		class Autorun { //Unique Identifier for this Keybind
			displayName = "Autorun"; //Display name of this keybinding
			tooltip = "Automatic fast movement with mouse steering. Cancelled with any action."; //Tooltip
			defaultKeys[] = {{0x52,0}}; //All default keys format is DIK_CODE,Special. Note that 0 means no special key (ctrl,shift,alt)
			code = "call BP_fnc_playerAutorun;"; //Code to run when this keybind is pressed
		};
	};
	class breakingpoint_Autoswim  {
		displayName = "Autoswim"; //Tab Display Name
		class Autoswim { //Unique Identifier for this Keybind
			displayName = "Autoswim"; //Display name of this keybinding
			tooltip = "Automatic swimming with mouse steering. Cancelled with any action."; //Tooltip
			defaultKeys[] = {{0x4C,0}}; //All default keys format is DIK_CODE,Special. Note that 0 means no special key (ctrl,shift,alt)
			code = "call BP_fnc_playerAutoswim;"; //Code to run when this keybind is pressed
		};
	};
	class breakingpoint_Earplugs  {
		displayName = "Earplugs"; //Tab Display Name
		class Earplugs { //Unique Identifier for this Keybind
			displayName = "Earplugs"; //Display name of this keybinding
			tooltip = "Automatically lowers sound volume for use in vehicles and helicopters. Using the key again will revert to normal volume."; //Tooltip
			defaultKeys[] = {{0x19,0}}; //All default keys format is DIK_CODE,Special. Note that 0 means no special key (ctrl,shift,alt)
			code = "call BP_fnc_playerEarplugs;"; //Code to run when this keybind is pressed
		};
	};
	class breakingpoint_LeaveGroup {
		displayName = "Leave Group"; //Tab Display Name
		class LeaveGroup { //Unique Identifier for this Keybind
			displayName = "Leave Group"; //Display name of this keybinding
			tooltip = "Leave current player group"; //Tooltip
			defaultKeys[] = {{0x47,0}}; //All default keys format is DIK_CODE,Special. Note that 0 means no special key (ctrl,shift,alt)
			code = "call BP_fnc_playerLeaveGroup;"; //Code to run when this keybind is pressed
		};
	};
	/*class breakingpoint_ZombieMovement  {
		displayName = "Zombie Movement"; //Tab Display Name
		class Test { //Unique Identifier for this Keybind
			displayName = "Zombie Movement"; //Display name of this keybinding
			tooltip = "Currently disabled"; //Tooltip
			defaultKeys[] = {{0x16,0}}; //All default keys format is DIK_CODE,Special. Note that 0 means no special key (ctrl,shift,alt)
			code = "call BP_fnc_playerZombieMovement;"; //Code to run when this keybind is pressed
		};
	};
	class breakingpoint_DisableChat  {
		displayName = "DisableChat"; //Tab Display Name
		class Test { //Unique Identifier for this Keybind
			displayName = "DisableChat"; //Display name of this keybinding
			tooltip = "Disables the Faction specific chat channel(s)"; //Tooltip
			defaultKeys[] = {{0x16,0}}; //All default keys format is DIK_CODE,Special. Note that 0 means no special key (ctrl,shift,alt)
			code = "call BP_fnc_playerDisableChat;"; //Code to run when this keybind is pressed
		};
	};*/
};



// Control Imports
class RscListNBox;
class RscControlsGroup;


class RscDisplayMission
{
	onKeyDown = "_this call (uiNamespace getVariable 'KEX_fnc_Keypress');";
	onMouseButtonDown = "_this call (uiNamespace getVariable 'KEX_fnc_mousepress');";
};
class RscDisplayConfigure { //Keybindings
	onLoad = "[_this,'RscDisplayConfigure','onload'] call (uiNamespace getVariable 'KEX_fnc_initDisplay')";
	onUnload = "[_this,'RscDisplayConfigure','onexit'] call (uiNamespace getVariable 'KEX_fnc_initDisplay')";
	class Controls {
		class KeyboardGroup: RscControlsGroup {
			class controls {
				class KEX_CustomKeys: RscListNBox {
					idc = 202;
					mainCollumW = 0.450000;
					secndCollumW = 0.550000;
					drawSideArrows = 0;
                    idcLeft = -1;
                    idcRight = -1;
					rowHeight = 0.042;
					columns[] = {0,0.43};
					x = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "3.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "15.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};

			};
		};
	};
};