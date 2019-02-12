private ["_pos", "_range"];

_pos = _this;
_range = 20;

_units = _pos nearEntities ["CAManBase", _range];

{
	if((alive _x) && (isPlayer _x))then
	{
		private ["_e", "_pos2"];
		_e = eyePos _x;
		_pos2 = [_pos select 0,_pos select 1,(_pos select 2)+0.4];

		if (!lineIntersects [_e, ATLtoASL _pos2,_x]) then
		{
			private ["_a","_s"];
			_a = [_x, _pos] call BIS_fnc_relativeDirTo;
			_s = (_range-(_x distance _pos))/_range;
			if (_a < 40 OR _a >310) then
			{
				[_x,0,_s] remoteExec ["BP_fnc_flash_effect", _x];
			} else {
				[_x,1,_s] remoteExec ["BP_fnc_flash_effect", _x]; 
			};
		};
	};
} foreach _units;