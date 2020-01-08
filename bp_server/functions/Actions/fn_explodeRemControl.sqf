/*
	Breaking Point Arma 3 Public-Alpha Build
	Created By Deathlyrage, Valtiel and Nohrt

	More Detailed Credits Listed Here:
		http://thezombieinfection.com/wiki/index.php?title=Credits

	Copyright © 2013-2015, The Zombie Infection (thezombieinfection.com)
	All rights reserved.
*/

params ["_targetNetID","_playerNetID"];

_target = objectFromNetID _targetNetID;
_player = objectFromNetID _playerNetID;

//Invalid Checks
if (isNull _target) exitWith {};
if (!alive _target) exitWith {};
if (isNull _player) exitWith {};
if (!alive _player) exitWith {};

_unitType = typeOf _player; 
_unitPos = getPosATL _player; 
_grp = createGroup west; 
_grp setBehaviour "CARELESS"; 
_grp setCombatMode "BLUE"; 
_unit = _grp createUnit [_unitType, _unitPos, [], 0, "CAN_COLLIDE"]; 

_unit hideObjectGlobal true;
_unit moveInDriver _target;

_player remoteControl _unit;		// will remoteControl it, camera will remain at player.

//_unitID = (netID _unit);
//_unitID