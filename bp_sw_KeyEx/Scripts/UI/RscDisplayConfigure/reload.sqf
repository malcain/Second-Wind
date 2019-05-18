disableserialization;
params["_display"];

_dsc = _display displayCtrl 202;

lnbClear _dsc;
			
{
	_displayName = _x select 0;
	_pluginPrefix = _x select 1;
	_varSuffix = _x select 2;
	_defaultKeys = _x select 3;
	
	_variable = _pluginPrefix + "_KEYBIND_" + _varSuffix;
	_defaultKey = uiNamespace getVariable [_variable,_defaultKeys];
	
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
		_text = _prefix + ([_dik] call (uiNamespace getVariable["KEX_fnc_dikToHuman",{diag_log "No diktohuman";}]));
		
		// add "" around key ("X", "Shift+X", ect...)
		if(_text != "") then {
			_keyText = _keyText + ", " + str(_text);
		};
	} forEach _defaultKey;
	
	if(_keyText != "") then {
		_keyText = _keyText select[2];
	};
	
	_rowIndex = _dsc lnbAddRow [_displayName,_keyText];
	_dsc lnbSetData [[_rowIndex,0],_variable];
} forEach (uiNamespace getVariable ["DS_PLUGIN_CONTROLS",[]]);