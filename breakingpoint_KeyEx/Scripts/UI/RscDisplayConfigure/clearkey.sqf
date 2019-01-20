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

//--- get the variable name to wipe
_variable = _pluginPrefix + "_KEYBIND_" + _varSuffix;

//--- clear the keylist and clear the uiNamespace variable
_ctrlKeyList = _display displayCtrl 102;
lbClear _ctrlKeyList;
uiNamespace setVariable [_variable,[]];