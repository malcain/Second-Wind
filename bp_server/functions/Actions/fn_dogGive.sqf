/*
	Breaking Point Arma 3 Public-Alpha Build
	Created By Deathlyrage, Valtiel and Nohrt

	More Detailed Credits Listed Here:
		http://thezombieinfection.com/wiki/index.php?title=Credits

	Copyright © 2013-2015, The Zombie Infection (thezombieinfection.com)
	All rights reserved.
*/

params ["_targetNetID","_playerNetID","_classname"];

//_target = objectFromNetID _targetNetID;
_player = objectFromNetID _playerNetID;

//Invalid Checks
//if (isNull _target) exitWith {};
if (isNull _player) exitWith {};

_playerClass = _player getVariable ["class",0];

if (_playerClass == 4) then {
[_player,7] call BPServer_fnc_addFactionPoints;
//Sync Stats
_player call BPServer_fnc_statsSync;
};


//Food
/*if (_classname in AllFood) exitWith 
{
	_foodVal = 1 - (_hunger / SleepFood);
	//["playerGive: (FOOD) Messing: %1 | Food: %2 | FoodVal: %3",_messing,_hunger,_foodVal] call BP_fnc_debugConsoleFormat;
	if (_foodVal < 0.50) then 
	{
		//Clear Hunger Level To Avoid Spam Exploit
		_hunger = 0;
		_target setVariable ["messing",[_hunger,_thirst]];
		
		//Give Player Food
		BP_PlayerGive = [_classname];
		(owner _target) publicVariableClient "BP_PlayerGive";
	
		//Calculate Faction Points
		private ["_playerClassID","_playerFactionName","_targetClassID","_targetFactionName"];
		_playerClassID = _player getVariable ["class",0];
		_playerFactionName = _playerClassID call BP_fnc_getFactionName;
		_targetClassID = _target getVariable ["class",0];
		_targetFactionName = _targetClassID call BP_fnc_getFactionName;
		
		//Add Points (Global)
		_pointsChange = getNumber (configFile >> "CfgFactions" >> _playerFactionName >> "Points" >> "Aid" >> _targetFactionName >> "food");
		[_player,_pointsChange] call BPServer_fnc_addFactionPoints;
		
		//Sync Player
		if (_pointsChange != 0) then { _player call BPServer_fnc_statsSync; };

	} else {
		//Not Hungry
		BP_GameError = 2;
		(owner _player) publicVariableClient "BP_GameError";
	
		//Give Food Back
		_player addMagazines [_classname,1];
	};
};
*/