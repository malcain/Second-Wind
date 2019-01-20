private["_display","_folder","_file"];
params["_data","_class","_type"];

diag_log "initDisplay.sqf";

_params = _data;

if !(_data isEqualType []) then {
	_params = [_data];
};

_folder = "\breakingpoint_KeyEx\Scripts\UI\" + _class + "\";
_file = _folder + _type + ".sqf";

_params call compile preprocessfilelinenumbers _file;