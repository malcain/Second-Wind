/*
	Author: Malcain

	Description:
	Proper shark depth changes according to target's depth. Scheduled environment.

*/

params ["_shark","_tPosDepth","_sharkPos"];

_sharkPos = getPosASLW _shark;
_sharkDepth = _sharkPos select 2;
_tPosDepth = -0.5 - random 4;
_heightDiff = abs(_tPosDepth - _sharkDepth);
_pitch = (_shark call BIS_fnc_getPitchBank) select 0;
if (_heightDiff < 1.5) exitwith {
	if (_pitch != 0) then {
		[_shark, 0, 0] call BIS_fnc_setPitchBank;
	};
};
if ((getPosATL _shark) select 2 < 4) exitWith { 
	if (_pitch < 0) then {
		[_shark, 0, 0] call BIS_fnc_setPitchBank;
	}; 
};

//magic arma workarounds
if ((_tPosDepth - _sharkDepth) > 1) then {
	[_shark, 30, 0] call BIS_fnc_setPitchBank;
	waitUntil { sleep 0.2; _tPosDepth <= (getPosASLW _shark) select 2; };
} else {
	if ((_sharkDepth - _tPosDepth) > 1) then { 
		[_shark, -30, 0] call BIS_fnc_setPitchBank; 
		waitUntil { sleep 0.2; _tPosDepth >= (getPosASLW _shark) select 2; };
	};
};

[_shark, 0, 0] call BIS_fnc_setPitchBank;