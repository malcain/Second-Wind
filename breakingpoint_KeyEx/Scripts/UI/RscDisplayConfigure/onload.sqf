disableserialization;
params["_display"];

//--- setup some variables
uiNamespace setVariable ["DS_PLUGIN_CONTROLS_CURINDEX",nil];
uiNamespace setVariable ["VARS_TO_UPDATE",[]];

_preinit_value = uiNamespace getVariable ["KEYBIND_DATA",[]];
if(count(_preinit_value) > 0) then {
	uiNamespace setVariable ["DS_PLUGIN_CONTROLS",uiNamespace getVariable "KEYBIND_DATA"];
} else {
	uiNamespace setVariable ["DS_PLUGIN_CONTROLS", [
		[
			"Example Keybind", //Display Name
			"DS", //Plugin Prefix
			"EXMAPLE_KEYBIND", //Storage Variable
			[[0x06,0],[0x0F,0]], //Default Keys
			"This is for testing purposes", //Tooltip (unused)
			"true" //code to run on exec (unused)
		]
	]];
};
//--- hide custom lnb
_dsc = _display displayCtrl 202;
_dsc ctrlShow false;

//--- setup cancel button to prevent saving
_cancel = _display displayCtrl 2;
_cancel buttonSetAction "uiNamespace setVariable ['VARS_TO_UPDATE',[]];";

//--- load default initDisplay
['onLoad',_data,'RscDisplayConfigure','GUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');

//--- start delayed setup (this is to fix some weird bug)
[] spawn {
	disableserialization;
	waitUntil{!isNull (findDisplay 4)};
	_display = findDisplay 4;
	
	//--- update combo box with KeybindsEx Controls group
	_combo = _display displayCtrl 108;
	_combo lbAdd "Keybinds Ex";
	
	//TODO: Rework this so we can have multiple dropdown segments
	
	//--- setup event when the KeybindsEx controls group is switched too
	_combo ctrlAddEventHandler ["LBSelChanged",{
		disableserialization;
		params["_ctrl","_index"];
		_display = ctrlParent _ctrl;
		_list = _display displayCtrl 102;
		_dsc = _display displayCtrl 202;
		if((_ctrl lbText _index) == "Keybinds Ex") then {
			//Opening KeybindsEx controls, hide default list and show the lnbList
			_list ctrlShow false;
			_dsc ctrlShow true;
		} else {
			//Closing, show default list and hide lnbList
			_list ctrlShow true;
			_dsc ctrlShow false;
		};
	}];
	
	//--- Setup events for lnbList (for setting up custom actions)
	_dsc = _display displayCtrl 202;
	_dsc ctrlAddEventHandler ["LBSelChanged",{
		disableserialization;
		params["_ctrl","_index"];
		// the lnbList was just clicked, so we need to configure some controls
		
		//--- set the current key index from the lnbList for later use
		uiNamespace setVariable ["DS_PLUGIN_CONTROLS_CURINDEX",_index];
		
		//--- load the keybind options
		_controlData = (uiNamespace getVariable ["DS_PLUGIN_CONTROLS",[]]) select _index;
		_displayName = _controlData select 0;
		_pluginPrefix = _controlData select 1;
		_varSuffix = _controlData select 2;
		_defaultKeys = _controlData select 3;
		
		//--- get the key data from the uinamespace
		_variable = _pluginPrefix + "_KEYBIND_" + _varSuffix;
		_defaultKey = uiNamespace getVariable [_variable,+_defaultKeys];
		
		uiNamespace setVariable [_variable + "_ORIG",_defaultKey];
		
		//--- open the configuration display
		_configuractiondisplay = (ctrlParent _ctrl) createDisplay "RscDisplayConfigureAction"; //idd 131
		
		//--- setup keybind event for adding keys
		_configuractiondisplay displayAddEventHandler ["KeyDown",{
			disableserialization;
			params["_display","_dik","_shift","_ctrl","_alt"];
			
			if(([_dik] call (uiNamespace getVariable ["KEX_fnc_dikToHuman",{diag_log "No DickToHuman";}])) == "") exitWith {false};
			
			//--- get current keybind options item index
			_index = uiNamespace getVariable ["DS_PLUGIN_CONTROLS_CURINDEX",0];
			
			//--- load the keybind options
			_controlData = (uiNamespace getVariable ["DS_PLUGIN_CONTROLS",[]]) select _index;
			_displayName = _controlData select 0;
			_pluginPrefix = _controlData select 1;
			_varSuffix = _controlData select 2;
			_defaultKeys = _controlData select 3;
			
			//--- get the key data from the uinamespace
			_variable = _pluginPrefix + "_KEYBIND_" + _varSuffix;
			_defaultKey = uiNamespace getVariable [_variable,+_defaultKeys];
			
			//--- calculate "extra"
			_extra = 0;
			if(_shift) then {
				_extra = 1;
			};
			if(_ctrl) then {
				_extra = 2;
			};
			if(_ctrl && _shift) then {
				_extra = 4;
			};
			if(_alt) then {
				_extra = 3;
			};
			
			//--- setup data array to be added to the variable
			_finalData = [_dik,_extra];
			
			//--- check if data array is already in the variable
			_alreadyExists = false;
			{
				if(_x isEqualTo _finalData) exitWith {
					_alreadyExists = true;
				};
			} forEach _defaultKey;
			
			//--- if it does not exist, add it and update UI
			if(!_alreadyExists) then {
				
				_defaultKey pushback _finalData;
				uiNamespace setVariable [_variable,_defaultKey];
				
				_ctrlKeyList = _display displayCtrl 102;
				
				lbClear _ctrlKeyList;
				
				{
					_dik = _x select 0;
					_extra = _x select 1; //Shift+ or Ctrl+ or Alt+ (0,1,2,3)
					
					
					
					//config extra to human-readable
					_prefix = switch(_extra) do {
						case 1: {"Shift+"};
						case 2: {"Ctrl+"};
						case 3: {"Alt+"};
						case 4: {"Ctrl+Shift+"};
						default {""};
					};
					//--- TODO convert _dik from DIK to human-readable key
					_displayText = _prefix + ([_dik] call (uiNamespace getVariable ["KEX_fnc_dikToHuman",{diag_log "No DickToHuman";}]));
					
					_index = _ctrlKeyList lbAdd _displayText;
					_ctrlKeyList lbSetData [_index,str(_x)];
					
				} forEach _defaultKey;
			};
			true;
		}];
		
		//--- setup the action name
		_ctrlActionName = _configuractiondisplay displayCtrl 101;
		_ctrlActionName ctrlSetText _displayName;
		
		//--- disable prev and next buttons (we wont be using these because fuck that)
		_ctrlPrev = _configuractiondisplay displayCtrl 108;
		_ctrlPrev ctrlEnable false;
		_ctrlNext = _configuractiondisplay displayCtrl 109;
		_ctrlNext ctrlEnable false;
		
		//--- add special keys to the special key list
		_ctrlSpecialKeyList = _configuractiondisplay displayCtrl 103;
		_ctrlSpecialKeyList lbAdd "Prim. Mouse Btn.";
		_ctrlSpecialKeyList lbAdd "Sec. Mouse Btn.";
		
		//--- setup the cancel button to wipe the variable so changes are not updated
		_ctrlCancel = _configuractiondisplay displayCtrl 107;
		_ctrlCancel buttonSetAction "uiNamespace setVariable ['" + _variable + "',uiNamespace getVariable ['" + _variable + "_ORIG',nil]];(findDisplay 131) closeDisplay 0;";
		
		//--- load data into the listbox of keys
		_ctrlKeyList = _configuractiondisplay displayCtrl 102; //listbox of keys
		
		{
			_dik = _x select 0;
			_extra = _x select 1; //Shift+ or Ctrl+ or Alt+ (0,1,2,3)
			
			
			
			//config extra to human-readable
			_prefix = switch(_extra) do {
				case 1: {"Shift+"};
				case 2: {"Ctrl+"};
				case 3: {"Alt+"};
				case 4: {"Ctrl+Shift+"};
				default {""};
			};
			//--- TODO convert _dik from DIK to human-readable key
			_displayText = _prefix + ([_dik] call (uiNamespace getVariable ["KEX_fnc_dikToHuman",{diag_log "No DickToHuman";}]));
			
			_index = _ctrlKeyList lbAdd _displayText;
			_ctrlKeyList lbSetData [_index,str(_x)];
			
		} forEach _defaultKey;
		
		
		//--- setup the deletekey action
		_ctrlDeleteKey = _configuractiondisplay displayCtrl 104; //delete selected key
		_ctrlDeleteKey buttonSetAction "[(findDisplay 131),'RscDisplayConfigure','deletekey'] call (uiNamespace getVariable ['KEX_fnc_initDisplay',{diag_log 'No initDisplay';}]);";
		
		//--- change the undo button into a clear button because fuck undoing
		_ctrlClearKey = _configuractiondisplay displayCtrl 106; //delete all keys
		_ctrlClearKey ctrlSetText "Clear";
		_ctrlClearKey buttonSetAction "[(findDisplay 131),'RscDisplayConfigure','clearkey'] call (uiNamespace getVariable ['KEX_fnc_initDisplay',{diag_log 'No initDisplay';}]);";
		
		//--- setup the default action
		_ctrlDefault = _configuractiondisplay displayCtrl 105; //load default keys
		_ctrlDefault buttonSetAction "[(findDisplay 131),'RscDisplayConfigure','loaddefaults'] call (uiNamespace getVariable ['KEX_fnc_initDisplay',{diag_log 'No initDisplay';}]);";

		//--- start thread that waits for the UI to exit and looks to see if we are updating it
		[_this,_configuractiondisplay] spawn {
			disableserialization;
			params["_data","_display"];
			_ctrl = _data select 0;
			_index = _data select 1;
			
			//--- load the keybind options
			_controlData = (uiNamespace getVariable ["DS_PLUGIN_CONTROLS",[]]) select _index;
			_displayName = _controlData select 0;
			_pluginPrefix = _controlData select 1;
			_varSuffix = _controlData select 2;
			_defaultKeys = _controlData select 3;
			
			//--- get the key data from the uinamespace
			_variable = _pluginPrefix + "_KEYBIND_" + _varSuffix;
			
			waituntil{isNull _display};
			
			
			if(!isNil {uiNamespace getVariable _variable}) then {
			
				_toUpdate = uiNamespace getVariable ["VARS_TO_UPDATE",[]];
				if !(_variable in _toUpdate) then {
					_toUpdate pushBack _variable;
					uiNamespace setVariable ["VARS_TO_UPDATE",_toUpdate];
				};
				
				[(findDisplay 4),'RscDisplayConfigure','reload'] call (uiNamespace getVariable ['KEX_fnc_initDisplay',{diag_log 'No initDisplay';}]);
			};
		};
	}];
	
	//--- load listbox with items from profile
	{
		//--- get keybind options
		_displayName = _x select 0;
		_pluginPrefix = _x select 1;
		_varSuffix = _x select 2;
		_defaultKeys = _x select 3;
		_tooltip = _x select 4;
		
		//--- define storage variable name
		_variable = _pluginPrefix + "_KEYBIND_" + _varSuffix;
		
		//--- get value from profile and save it to the uiNamespace
		_defaultKey = profileNamespace getVariable [_variable,+_defaultKeys];
		uiNamespace setVariable [_variable,+_defaultKey];
		//--- build text for the lnbList row
		_keyText = "";
		{
			_dik = _x select 0;
			_extra = _x select 1; //Shift+ or Ctrl+ or Alt+ (0,1,2,3)
			
			//config extra to human-readable
			_prefix = switch(_extra) do {
				case 1: {"Shift+"};
				case 2: {"Ctrl+"};
				case 3: {"Alt+"};
				case 4: {"Ctrl+Shift+"};
				default {""};
			};
			//--- TODO convert _dik from DIK to human-readable key
			_text = _prefix + ([_dik] call (uiNamespace getVariable ["KEX_fnc_dikToHuman",{diag_log "No DickToHuman";}]));
			
			// add "" around key ("X", "Shift+X", ect...)
			if(_text != "") then {
				_keyText = _keyText + ", " + str(_text);
			};
		} forEach _defaultKey;
		
		if(_keyText != "") then {
			_keyText = _keyText select[2];
		};
		
		//--- add text to row and stor lnbData
		_dsc lnbAddRow [_displayName,_keyText];
		_dsc lbSetToolTip [((lnbSize _dsc) select 0),_tooltip];
	} forEach (uiNamespace getVariable ["DS_PLUGIN_CONTROLS",[]]);
	
};