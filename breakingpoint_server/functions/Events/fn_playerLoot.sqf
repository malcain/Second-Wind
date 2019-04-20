/*
	Breaking Point Arma 3 Public-Alpha Build
	Created By Deathlyrage, Valtiel and Nohrt

	More Detailed Credits Listed Here:
		http://thezombieinfection.com/wiki/index.php?title=Credits

	Copyright © 2013-2015, The Zombie Infection (thezombieinfection.com)
	All rights reserved.
*/
params ["_playerNetID","_bodyNetID"];
_player = objectFromNetID _playerNetID;
_body = objectFromNetID _bodyNetID;

//Invalid Player
if (isNull _player) exitWith {};

//Invalid Body
if (isNull _body) exitWith {};

//Make Body Immortal
_body allowDamage false;
if !(simulationEnabled _body) then { _body enableSimulationGlobal true; };
//_isAi = _body getVariable ["ai",false];

//Detect terrain foliage' grave type depends on.
_dirtArray = ["#islandbeachSurface","#islandreddirtSurface","#islandmarshSurface","#islandwheatSurface","#islandmudSurface"];
_rockyArray = ["#islandasphaltSurface","#islandcliffSurface"];
_isDirt = surfaceType position _player in _dirtArray;
_isRocky = ((isOnRoad _player) or ((getposatl _player select 2) > 1) or {surfaceType position _player in _rockyArray});

//Undead Body Harvesting
if (_player getVariable ["class",0] == 7) exitWith
{
	//Clear Body Inventory
	_body setVariable ["inv",[]];
	_body hideObjectGlobal true;

	_body setVariable ["processedDeath",-100 ];
	
	//Delete Body
	deleteVehicle _body;
};

//Backup Body Data
_bodyPos = getPosATL _body;
_bodyName = _body getVariable ["bodyName",""];
_bodyInv = _body getVariable ["inv",[]];
_bodyDeathType = _body getVariable ["deathType",0];
_freshSpawn = _body getVariable ["freshSpawnGrave",false];

//Fetch Faction Information
_playerClass = _player getVariable ["class",0];
_playerFactionName = _playerClass call BP_fnc_getFactionName;
_playerFactionLevel = _player call BP_fnc_getFactionLevel;
_playerFactionPoints = _player call BP_fnc_getFactionPoints;
_playerTraitorFlag = _player getVariable ["traitorFlag",false];
_playerUniform = (uniform _player);
_playername = name _player;

//Clear Body Inventory
_body setVariable ["inv",[]];
_body hideObjectGlobal true;

//Delete Body
deleteVehicle _body;

//Determine Remains Type Based Off Faction
_remainsType = "BP_DeadBody";
if (_playerFactionName == "Hunter" || {_playerFactionName == "Outlaw"} || _playerFactionName == "Scavenger") then {
_remainsType = "BP_SkeletonRemains";
} else {
if (_isRocky) then { _remainsType = "BP_GraveRocks"; } else { 
	if (_isDirt) then {_remainsType = "BP_GraveDirt";} else {_remainsType = "BP_GraveForest";};
	};
};

//Ensure Remains Doesn't Glitch Under The Ground
if ((_bodyPos select 2) < 0) then { _bodyPos set [2,0]; };

//Create Remains
_remains = createVehicle [_remainsType, _bodyPos, [], 0, "CAN_COLLIDE"];
_remains setPosATL _bodyPos;
_remains setVariable ["processedDeath",diag_tickTime];
_remins enableDynamicSimulation true;

//Scavenger points gain
if (_playerFactionName == "Scavenger") then {
	// Fresh Spawn Check
	if (_freshSpawn) then {
		["playerDeath: Player: %1 was killed by %2. Stats Skipped. Fresh Spawn was killed.~0001",(_bodyName),(_playername)] call BP_fnc_debugConsoleFormat;
		BP_GameError = 6;
		(owner _player) publicVariableClient "BP_GameError";
	} else {
		//Check player's remains are not his own
		if (_bodyName == _playername) then { 
			[_player,0] call BPServer_fnc_addFactionPoints; 
		} else {
			_pointsChange = 200 * (0.5 + 0.25 * (cntStrongholds select 1));
			[_player,_pointsChange] call BPServer_fnc_addFactionPoints;
		};
	};
};

//Load Remains Gear
[_remains, _bodyInv] call BP_fnc_setFullInventory;