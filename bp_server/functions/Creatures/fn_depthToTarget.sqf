/*
	Author: Malcain

	Description:
	Proper shark depth changes according to target's depth. Scheduled environment.

*/

params ["_shark","_target","_targetDepth","_sharkPos"];

_sharkPos = getPosASLW _shark;
_sharkDepth = _sharkPos select 2;
_targetDepth = getPosASLW _target select 2;
_heightDiff = abs(_targetDepth - _sharkDepth);
_pitch = (_shark call BIS_fnc_getPitchBank) select 0;
if (_shark distance _target > 10) then {_heightDiff = _heightDiff/2};
if (_heightDiff < 1.8) exitwith {
	if (_pitch != 0) then {
		[_shark, 0, 0] call BIS_fnc_setPitchBank;
	}; 
};
if ((getPosATL _shark) select 2 < 4.5 && {_targetDepth <= _sharkDepth}) exitWith { 
	if (_pitch != 0) then {
		[_shark, 0, 0] call BIS_fnc_setPitchBank;
	};
};

_dir = getdir _shark;

//magic arma workarounds
if ((_targetDepth - _sharkDepth) > 1) then {
	[_shark, 30, 0] call BIS_fnc_setPitchBank;
	//while {sleep 0.1; (getPosASLW _shark) select 2 <= _targetDepth} do {
		//_relDir = _shark getdir player;
		//_shark setFormDir _relDir;
	//};
} else {
	if ((_sharkDepth - _targetDepth) > 1) then {
		if ((getPosATL _shark) select 2 < 3) exitWith {
			if (_pitch != 0) then {
				[_shark, 0, 0] call BIS_fnc_setPitchBank;
			};
		};
		
		[_shark, -30, 0] call BIS_fnc_setPitchBank;
		//while {sleep 0.1; (getPosASLW _shark) select 2 >= _targetDepth} do {
			//if ((getPosATL _shark) select 2 < 3) exitWith {};
			//_relDir = _shark getdir player;
			//_shark setFormDir _relDir;
		//};
	};
};