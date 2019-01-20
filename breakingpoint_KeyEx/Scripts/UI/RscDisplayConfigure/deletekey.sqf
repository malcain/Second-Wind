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

//--- get keybind value from uiNamespace 
_variable = _pluginPrefix + "_KEYBIND_" + _varSuffix;
_defaultKey = uiNamespace getVariable [_variable,+_defaultKeys];

//--- if we are deleting a proper item, delete it and update the uiNamespace variable
_ctrlKeyList = _display displayCtrl 102;
_keyIndex = lbCurSel _ctrlKeyList;
if(_keyIndex >= 0) then {
	_defaultKey deleteAt _keyIndex;
	_ctrlKeyList lbDelete _keyIndex;
	uiNamespace setVariable [_variable,_defaultKey];
};