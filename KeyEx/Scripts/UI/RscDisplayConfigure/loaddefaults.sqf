disableserialization;
params["_display"];

//--- get the index for the keybind options for this setting
_index = uiNamespace getVariable ["DS_PLUGIN_CONTROLS_CURINDEX",0];
//--- get the keybind options from the master list
_controlData = (uiNamespace getVariable ["DS_PLUGIN_CONTROLS",[]]) select _index;

_displayName = _controlData select 0;
_pluginPrefix = _controlData select 1;
_varSuffix = _controlData select 2;
_defaultKeys = _controlData select 3;

//--- get the variable name to reset
_variable = _pluginPrefix + "_KEYBIND_" + _varSuffix;

//--- clear the listbox, update the variable, and update the listbox with the default keys
_ctrlKeyList = _display displayCtrl 102;
lbClear _ctrlKeyList;
uiNamespace setVariable [_variable,+_defaultKeys];

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
	_displayText = _prefix + ([_dik] call (uiNamespace getVariable["KEX_fnc_dikToHuman",{diag_log "No diktohuman";}]));
	
	_index = _ctrlKeyList lbAdd _displayText;
	_ctrlKeyList lbSetData [_index,str(_x)];
	
} forEach _defaultKeys;