/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/

params ["_dog","_combatMode"];
_target = objNull;
_radius = 80;
_attackRange = 60;

_playerGroup = player getVariable ["group","0"];
_playerClass = player getVariable ["class",0];
_playerFactionName = _playerClass call BP_fnc_getFactionName;

//Nomad perk
if (_playerClass isEqualTo 4) then {
	_factionLevel = player call BP_fnc_getFactionLevel;
	_radius = (_factionLevel*0.75) * _radius max 80;
	_attackRange = (_factionLevel*0.7) * _attackRange max 60;
};
_playerEntities = _dog nearEntities ["BP_Man",_radius];
_entities = _dog nearEntities ["zZombie_Base",_attackRange];

//Remove Invalid Entities From List
_playerEntities = _playerEntities - [player];
/*{
	if (_x == player) then { _playerEntities = _playerEntities - [_x]; };
} count _playerEntities;*/


//Check and Process Player Attacks
if (_combatMode > 0) then
{
	//Scan For Players
	if (isNull _target) then
	{
		{
			_targetGroup = _x getVariable ["group","0"];
			_traitorFlag = _x getVariable ["traitorFlag",false];
			_traitorUniform = (uniform _x in BP_TraitorClothing);
			_targetClass = _x getVariable ["class",0];
			_targetFactionName = _targetClass call BP_fnc_getFactionName;
			_killPoints = getNumber (configFile >> "CfgFactions" >> _playerFactionName >> "Points" >> "Kill" >> _targetFactionName >> "Level_1");
			_factionTarget = (_traitorFlag or _traitorUniform or _killPoints > -1);
			
			if ((_targetGroup == "0" or _targetGroup != _playerGroup) and _factionTarget) then
			{
				_distance = _dog distance _x;
				if (_distance > _attackRange) exitwith {
					if (random 100 < 35) then {
						[_dog,"dog_growl",0,false,75] call BP_fnc_objSpeak;
					};
				}; 
				//Check Distance Against Target if null or not
				if (!(isNull _target)) then 
				{
					//Resign Target If Another One Is Closer
					if (_distance < (_dog distance _target)) then { _target = _x; };
				} else {
					//Assign Target because we have none
					_target = _x;
				};
			};
		} count _playerEntities;
	};

	//Scan For Zombies
	if (isNull _target && {_combatMode isEqualTo 2}) then
	{
		{
			if (!(isNull _target)) then {
				//Resign Target If Another One Is Closer to Player
				if ((player distance _x) < (player distance _target)) then {	_target = _x; };
			} else {
				//Assign Target because we have none
				_target = _x;
			};
		} count _entities;
	};
};

_target