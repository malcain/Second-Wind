disableserialization;
params["_display"];

{
	profileNamespace setVariable [_x,uiNamespace getVariable [_x,[]]];
} forEach (uiNamespace getVariable ["VARS_TO_UPDATE",[]]);

saveProfileNamespace;
["onUnload",_data,"RscDisplayConfigure",'GUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');