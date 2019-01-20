class CfgPatches
{
	class breakingpoint_KeyEx
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"A3_Data_F","A3_Ui_F","A3_Functions_F"};
		fileName = "breakingpoint_KeyEx.pbo";
		requiredVersion = 0.1;
		author[]= {"Kegan Hollern"};
	};
};


class CfgFunctions {
	class UI {
		tag = "KEX";
		class ui {
			file = "\breakingpoint_KeyEx\Scripts\UI";
			class initDisplay {};
			class dikToHuman {};
		};
		class functions
		{
			file = "\breakingpoint_KeyEx\Scripts\Functions";
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
	class breakingpoint_KeyEx {
		displayName = "KeybindsEx"; //Tab Display Name
		class Test { //Unique Identifier for this Keybind
			displayName = "Test KeyEx"; //Display name of this keybinding
			tooltip = "Display a test message from KeyEx"; //Tooltip
			defaultKeys[] = {{0x16,0}}; //All default keys format is DIK_CODE,Special. Note that 0 means no special key (ctrl,shift,alt)
			code = "hint 'test';"; //Code to run when this keybind is pressed
		};
	};

};



// Control Imports
class RscListNBox;
class RscControlsGroup;


class RscDisplayMission
{
	onKeyDown = "_this call (uiNamespace getVariable 'KEX_fnc_Keypress');";
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