/*
	Breaking Point Arma 3 Public-Alpha Build
	Created By Deathlyrage, Valtiel and Nohrt

	More Detailed Credits Listed Here:
		http://thezombieinfection.com/wiki/index.php?title=Credits

	Copyright © 2013-2015, The Zombie Infection (thezombieinfection.com)
	All rights reserved.
*/

params ["_sourceNetID","_targetNetID","_type"];

_player = objectFromNetID _sourceNetID;
_object = objectFromNetID _targetNetID;

if (isNull _player) exitWith {};
if (isNull _object) exitWith {};

_objectPos = getPosATL _object;
_fireObj = _object getVariable ["fire",objNull];
if !(isNull _fireObj) exitWith {};

if (_type == "Zombie") exitwith 
{
_fireObj = createVehicle ["BP_SmallFire", _objectPos, [], 0, "CAN_COLLIDE"];
_fireObj attachTo [_object, [-0.1, 0.1, 0.15], "Pelvis"];
_fireObj setVectorDirAndUp [ [0.5, 0.5, 0], [-0.5, 0.5, 0] ];
_object setVariable ["fire",_fireObj,true];
};

_fireObj = createVehicle ["BP_SmallFire", _objectPos, [], 0, "CAN_COLLIDE"];
_fireObj attachTo [_object, [-0.1, 0.1, 0.15], "Pelvis"];
_fireObj setVectorDirAndUp [ [0.5, 0.5, 0], [-0.5, 0.5, 0] ];
_object setVariable ["fire",_fireObj,true];

//Zombie fire bolt kill, fire accidents (self damage)
if (_player isEqualTo  _object) exitWith {};

//Faction Point Loss
_pointsChange = [_player,_object] call BP_fnc_getFactionKillPoints;

//Mission Config Custom Points Division
_pointsChange = _pointsChange * BP_Factions_PointsRatio;

//Don't Add Positive Points unless it's defined.
if (_type != "Explode" and _pointsChange > 0) exitWith {};
	
//Add Points (Global)
[_player,_pointsChange] call BPServer_fnc_addFactionPoints;