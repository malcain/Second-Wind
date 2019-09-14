/*

*/
diag_log "Preinit.sqf";
with uiNamespace do {
	KEYBIND_DATA = [];
	 
	_config = configFile >> "CfgKeybindsEx";
	for "_i" from 0 to count(_config)-1 do {
		_entry = _config select _i; //Dropdown category
		if(isClass _entry) then
		{
			_entry_name = configName _entry; // this is the tag
			_dropdown_display_name = getText(_entry >> "displayName"); //This is for the combo entry name
			
			for "_j" from 0 to count(_entry)-1 do {
				
				_binding = _entry select _j;
				
				if(isClass _binding) then
				{
					_variable = configName _binding;
				
					_arrayData = getArray(_binding >> "defaultKeys");
					{
						_number = _x select 0;
						if(_number isEqualType "") then {
							_number = call compile _number;
						};
						_x set[0,_number];
						_arrayData set[_forEachIndex,_x];
					} forEach _arrayData;
					
					
					KEYBIND_DATA pushback [
						getText(_binding >> "displayName"),
						_entry_name,
						_variable,
						_arrayData,
						getText(_binding >> "tooltip"),
						getText(_binding >> "code")
						
					];
				};
			};
		};
	};
};