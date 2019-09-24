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
if (_shark distance _target > 10) then {_heightDiff = _heightDiff/2};
if (_heightDiff < 2) exitwith {};
if ((getPosATL _shark) select 2 < 4.5 && {_targetDepth <= _sharkDepth}) exitWith {};

_speed = 3;
if (player distance2D _shark < 3.5) then {_speed = 1};

_dir = getdir _shark;

//magic arma workarounds
if ((_targetDepth - _sharkDepth) > 1) then {
	_swimmerObj = "B_diver_exp_F" createVehicleLocal [0,0,0];
	_swimmerObj setmass 0.000001; 
	_swimmerObj hideObject true;
	_shark disableCollisionWith _swimmerObj;
	//_swimmerObj setposASLW _sharkPos;
	_swimmerObj attachTo [_shark, [0,0,0]];
	sleep 0.1;
	detach _swimmerObj;
	_swimmerObj setdir _dir;
	_shark attachTo [_swimmerObj, [0,-1,0]];
	while {sleep 0.1; (getPosASLW _swimmerObj) select 2 <= _targetDepth}
	do {
		_relDir = _swimmerObj getdir player;
		_swimmerObj setFormDir _relDir;
		_swimmerObj setVelocityModelSpace [0,_speed,2];
	};
	sleep 0.1;
	detach _shark;
	deletevehicle _swimmerObj;
} else {
	if ((_sharkDepth - _targetDepth) > 1) then {
		if ((getPosATL _shark) select 2 < 3) exitWith {};
		_swimmerObj = "B_diver_exp_F" createVehicleLocal [0,0,0];
		_swimmerObj setmass 0.000001; 
		_swimmerObj hideObject true;
		_shark disableCollisionWith _swimmerObj;
		//_swimmerObj setposASLW _sharkPos;
		_swimmerObj attachTo [_shark, [0,0,0]];
		sleep 0.1;
		detach _swimmerObj;
		_swimmerObj setdir _dir;
		_shark attachTo [_swimmerObj, [0,-1,0]];
		while {sleep 0.1; (getPosASLW _swimmerObj) select 2 >= _targetDepth}
		do {
			if ((getPosATL _shark) select 2 < 3) exitWith {};
			_relDir = _swimmerObj getdir player;
			_swimmerObj setFormDir _relDir;
			_swimmerObj setVelocityModelSpace [0,_speed,-2];
		};
		sleep 0.1;
		detach _shark;
		deletevehicle _swimmerObj;
	};
};