private["_response"];
_key = _this select 1;
_shift = _this select 2;
_ctrl = _this select 3;
_alt = _this select 4;

_value = false;

{
	_tag = _x select 1;
	_variable = _x select 2;
	_defaults = _x select 3;
	_code = _x select 5;
	
	_keyData = profileNamespace getVariable [_tag + "_KEYBIND_" + _variable,_defaults];
	{
		_dik = _x select 0;
		_entry = _x select 1;
		if(_key == _dik) then {
			_continue = true;
			/*if(_entry == 0) then {_continue = true;};
			if(_entry == 1 && _shift) then {_continue = true;};
			if(_entry == 2 && _ctrl) then {_continue = true;};
			if(_entry == 3 && _alt) then {_continue = true;};
			if(_entry == 4 && _ctrl && _shift) then {_continue = true;};*/
			if(_entry == 0 && !_alt && !_ctrl) then {_continue = true;};
			if(_entry == 1 && !_alt && !_ctrl) then {_continue = true;};
			if(_entry == 2 && _ctrl && !_alt) then {_continue = true;};
			if(_entry == 3 && _alt  && !_ctrl) then {_continue = true;};
			if(_entry == 4 && _ctrl && !_alt) then {_continue = true;};
			/*if(_entry == 0 && !_shift && !_alt && !_ctrl) then {_continue = true;};
			if(_entry == 1 && _shift && !_alt && !_ctrl) then {_continue = true;};
			if(_entry == 2 && _ctrl && !_alt && !_shift) then {_continue = true;};
			if(_entry == 3 && _alt && !_shift && !_ctrl) then {_continue = true;};
			if(_entry == 4 && _ctrl && _shift && !_alt) then {_continue = true;};*/
			if(_continue) then {
				_response = call compile _code;
				if(isNil {_response}) then {
					_value = true;
				} else {
					if(_response isEqualType true) then {
						_value = _value || _response;
					} else {
						_value = true;
					};
				};
			};
		};
	} forEach _keyData;
	
} forEach (uiNamespace getVariable["KEYBIND_DATA",[]]);
_value;