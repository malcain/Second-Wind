/*
	Breaking Point Arma 3 Public-Alpha Build
	Created By Deathlyrage, Valtiel and Nohrt

	More Detailed Credits Listed Here:
		http://thezombieinfection.com/wiki/index.php?title=Credits

	Copyright © 2013-2015, The Zombie Infection (thezombieinfection.com)
	All rights reserved.
*/

params ["_attackerID","_masterID","_dogBlood"];

_attacker = objectFromNetID _attackerID;
_master = objectFromNetID _masterID;

["DogHurt: attacker: %1, master: %2",_attacker,_master] call BP_fnc_debugConsoleFormat;

if (isNull _attacker) exitWith {};
if (isNull _master) exitWith {};

//Points Gain
_attackerClassID = _attacker getVariable ["class",0];
_attackerFaction = _attackerClassID call BP_fnc_getFactionName;

_masterClassID = _master getVariable ["class",0];
_masterFaction = _masterClassID call BP_fnc_getFactionName;

_pointsChange = getNumber (configFile >> "CfgFactions" >> _attackerFaction >> "Points" >> "Kill" >> _masterFaction >> "Dog");

["DogHurt: masterFaction: %1, master: %2",_masterFaction,_master] call BP_fnc_debugConsoleFormat;
if (_masterFaction == "Nomad" && {_dogBlood <= 0} && {_pointsChange >= 0}) then {
	//Nomad point loss.
	_masterFactionPoints = _master call BP_fnc_getFactionPoints;
	if (_masterFactionPoints >= 50) then {
		_masterFactionLevel = _master call BP_fnc_getFactionLevel;
		_pointLoss = (-30 * _masterFactionLevel) max -90;
		[_master,_pointLoss] call BPServer_fnc_addFactionPoints;
		//Sync Stats
		_master call BPServer_fnc_statsSync;
	};
};

if (_attacker == _master && _masterFaction == "Nomad") exitwith {[_attacker,-50] call BPServer_fnc_addFactionPoints; _attacker call BPServer_fnc_statsSync;};

if (_pointsChange < 0 && _dogBlood <= 0) then {
	_pointsChange = _pointsChange * 2;
};

if (_pointsChange > 0 && _dogBlood > 0) then {
	_pointsChange = 0;
};

if (_pointsChange != 0) then 
{
	//Add Points (Global)
	[_attacker,_pointsChange] call BPServer_fnc_addFactionPoints;

	//Sync Stats
	_attacker call BPServer_fnc_statsSync;
};
