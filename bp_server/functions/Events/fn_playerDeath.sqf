/*
	Breaking Point Arma 3 Public-Alpha Build
	Created By Deathlyrage, Valtiel and Nohrt

	More Detailed Credits Listed Here:
		http://thezombieinfection.com/wiki/index.php?title=Credits

	Copyright © 2013-2015, The Zombie Infection (thezombieinfection.com)
	All rights reserved.
*/

//["playerDeath: %1",_this] call BP_fnc_debugConsoleFormat;

params [["_characterID","0",[""]],"_playerNetID",["_playerID","",[""]],["_playerName","Unknown",[""]],["_playerInventory","[]",[""]],"_killerNetID",["_killWeapon","",[""]],["_killDistance","0",[""]]];

// Resolve Player & Killer Objects from Net ID's
_player = (objectFromNetID _playerNetID);
_killer = (objectFromNetID _killerNetID);

_isHostage = _player getVariable ["med_hostage", false];

_isUnconscious = _player getVariable ["med_unconscious", false];
_perpetrator = _player getVariable ["hostage_perpetrator", "0"];
_isHostageKill = (_player != _killer && (_isHostage or _isUnconscious) && _perpetrator != "0");

if (_isHostageKill) then
{
	_perpetrator = objectFromNetID _perpetrator;

	if (_killer == _perpetrator) then
	{
		_isHostageKill = false;
	}
	else
	{
		_killer = _perpetrator;
	};
};

// Invalid Character ID
if (_characterID == "0" or _playerID == "") exitWith { [_player] call BPServer_fnc_unitCleanup; };

// Invalid Player Object Reference - Write Death and Exit
if (isNull _player) exitWith { 
	BP_DeadTickets pushBack (["CHILD:301:%1:",_characterID] call BPServer_fnc_callExtensionTicket);
};

// Backup Position
_position = getPosATL _player;

//Fetch Detailed Player Information
_playerClass = _player getVariable ["class",0];
_playerFactionName = _playerClass call BP_fnc_getFactionName;
_playerFactionLevel = _player call BP_fnc_getFactionLevel;
_playerFactionPoints = _player call BP_fnc_getFactionPoints;
_playerTraitorFlag = _player getVariable ["traitorFlag",false];
_playerUniform = (uniform _player);

// Initial Vars and Conversion
_deathType = _player getVariable ["deathType",0];
_playerInventory = parseSimpleArray _playerInventory;
_playerKill = false;

// Delete Nearby Simulated Weapon Holders
[_position] spawn {
	sleep 1;
	{ deleteVehicle _x; } count (nearestObjects [(_this select 0), ["WeaponHolderSimulated"],10]);
};

// Set Death Variables
_player setVariable ["processedDeath",diag_tickTime];
_player setVariable ["body",objNull];
_player setVariable ["bodyName", _playerName,true];
//Already Set On Client in BP_fnc_death;
//_player setVariable ["med_isDead",true,true];
//_player setVariable ["deathType",_deathType,true];
_player setVariable ["inv",_playerInventory];

// Set Legion Death Details
_groupID = _player getVariable ["group","0"];
if (_groupID != "0") then
{
	//Fetch Local Group Tag + Name
	_groupTag = _player getVariable ["groupTag",""];
	_groupName = _player getVariable ["groupName",""];

	//Make It Global
	_player setVariable ["groupTag",_groupTag,true];
	_player setVariable ["groupName",_groupName,true];
};

// Handle Suicide
if (_killer == _player) then { _killer = objNull; 
_freshSpawn = _player getVariable ["freshSpawn",false];
	if (_freshSpawn) then {
	_player setVariable ["freshSpawnGrave", true ,true]; }; };

// Process Kill Results
if (!isNull _killer) then
{
	//if (_killer isKindOf "BP_Stronghold_AI") then {
	//	// Handle Player Killed by Stronghold AI
	//	[_playerID,_playerName,"0","Stronghold AI",_killWeapon,_killDistance] call BPServer_fnc_killLog;
	
	// Kills Log
	_killerName = (name _killer);
	_killerID = (getPlayerUID _killer);
	[_playerID,_playerName,_killerID,_killerName,_killWeapon,_killDistance] call BPServer_fnc_killLog;
	
	// Headshot Check
	if (_deathType == 16 && !_isHostageKill) then
	{
		//Fetch Current Headshot Count
		_headshots = _killer getVariable ["headShots",0];
		
		//Update Headshots
		_killer setVariable ["headShots",(_headshots + 1)];
	};
	
	// Fresh Spawn Check
	_player call BPServer_fnc_freshSpawnCheck;
	_freshSpawn = _player getVariable ["freshSpawn",false];
	if (_freshSpawn) then {
	_player setVariable ["freshSpawnGrave", true ,true]; };
	if (_freshSpawn and _killerClass != 7) exitWith {
		["playerDeath: Player: %1 was killed by %2. Stats Skipped. Fresh Spawn was killed.~0001",(name _player),(name _killer)] call BP_fnc_debugConsoleFormat;
		BP_GameError = 6;
		(owner _killer) publicVariableClient "BP_GameError";
	};
	
	_killerGroupID = _killer getVariable ["group","0"];
	_playerGroupID = _player getVariable ["group","0"];
	if ((_killerGroup == _playerGroup) and (_playerGroupID != "0") and (_killerGroupID != "0")) exitWith {
		["playerDeath: Player: %1 was killed by %2. Stats Skipped. Group member was killed.~0001",(name _player),(name _killer)] call BP_fnc_debugConsoleFormat;
		BP_GameError = 7;
		(owner _killer) publicVariableClient "BP_GameError";
	};
	
	// Faction System
	_pointsChange = [_player,_killer] call BP_fnc_getFactionKillPoints;
	
	//Recent Kills
	_recentKills = _killer getVariable ["recentKills",[]];
	if (_playerID in _recentKills) then {
		if (_pointsChange > 0) then { _pointsChange = 0; }; 
		["playerDeath: Player: %1 was killed by %2. Point Gain Skipped. Killer has killed this person in this server session.~0001",(name _player),(name _killer)] call BP_fnc_debugConsoleFormat;
	} else {
		0 = _recentKills pushBack _playerID;
		_killer setVariable ["recentKills",_recentKills,false];
	};
	
	//Killer
	_killerClass = _killer getVariable ["class",0];
	_killerFactionName = _killerClass call BP_fnc_getFactionName;
	_killerFactionLevel = _killer call BP_fnc_getFactionLevel;
	_killerFactionPoints = _killer call BP_fnc_getFactionPoints;
	_killerTraitorFlag = _killer getVariable ["traitorFlag",false];
	_killerUniform = (uniform _killer);
	
	//Faction Player Kills None Player
	if (_playerClass == 0 and _killerClass != 0) then { _pointsChange = 25; };
	
	// If Player in Traitor Uniform and Doesn't Have Traitor Flag, Flag Anyway Due to Desync
	if (!_playerTraitorFlag) then { if (_playerUniform in BP_TraitorClothing) then { _playerTraitorFlag = true; }; };
	
	// If Killer in Traitor Uniform and Doesn't Have Traitor Flag, Flag Anyway Due to Desync
	if (!_killerTraitorFlag) then { if (_killerUniform in BP_TraitorClothing) then { _killerTraitorFlag = true; }; };
	
	// Check Traitor Flag
	if (_playerTraitorFlag) then { _pointsChange = getNumber (configFile >> "CfgFactions" >> _killerFactionName >> "Points" >> "Kill" >> _playerFactionName >> "Level_0"); };

	//Zombie Walking Player Killing
	if ((_playerUniform in BP_ZombieClothing) || {_killerUniform in BP_ZombieClothing}) then {
		if (!_isHostageKill && _pointsChange < 0) then { _pointsChange = 0; };
	};
	
	_theOrder = [1,4,5];
	_anarchists = [2,6];
	_outsiders = [3,7];
	
	//Adjust point rate for rival factions accordingly to the amount of strongholds captured.
	if !(_killerClass in _outsiders) then {
		if (_pointsChange > 0 ) then {
			if (_killerClass in _theOrder) then {
				_pointsChange = _pointsChange * (0.6 + 0.1 * (cntStrongholds select 0));
			} else {
				_pointsChange = _pointsChange * (0.6 + 0.1 * (cntStrongholds select 1));
			};
		};
	};
	//Mission Config Custom Points Division
	_pointsChange = _pointsChange * BP_Factions_PointsRatio;
	
			//Check if mixed group points off for killing
		_disableMixedGroupPointsGain = getNumber (configFile >> "CfgBreakingPointServerSettings" >> "MixedGroupPointsGain" >> "disableMixedGroupPointsGain");
		_pointsOff = false;
		if(_disableMixedGroupPointsGain == 1 && _pointsChange > 0 && !_playerTraitorFlag) then
		{
			_killerGroupID = _killer getVariable ["group","0"];
			if(_killerGroupID != "0") then
			{
				_groupMembers = [];
				_groupMemberClass = -1;
				{
					_groupID = _x getVariable ["group","0"];
						if(_groupID == _killerGroupID) then
						{
							0 = _groupMembers pushBack _x;
						};
				} count allPlayers;		
				if (count _groupMembers > 1) then
				{
					for [{_i=0}, {_i < (count _groupMembers) && !_pointsOff}, {_i = _i + 1}] do {
						_groupMemberClass = (_groupMembers select _i) getVariable ["class",0];
						if(((_groupMemberClass in _theOrder) && (_playerClass in _theOrder)) || ((_groupMemberClass in _anarchists) && (_playerClass in _anarchists))) then {
							_pointsOff = true;
						} else {
							_pointsOff = false;
						};
					};
				};
			};
		};
	
	//Check if mixed group points off for killing
	if(_pointsOff) then	{
		_pointsChange = 0;
	};
	
	/*if((_killerFactionLevel <= 1) and (_pointsChange < -1200)) then {
	_pointsChange = -1200;
	} else {
	if((_killerFactionLevel == 2) and (_pointsChange < -2500)) then {
	_pointsChange = -2500; };
	};*/
	if (_pointsChange < -400) then {
		_pointsChange = -500 * _killerFactionLevel min -500;
	};
	//reduce penalty for killing level 1
	if (_playerFactionLevel == 1 && _pointsChange < -1000) then { _pointsChange = _pointsChange*0.75 }; 
	
	//Add Points (Global)
	[_killer,_pointsChange] call BPServer_fnc_addFactionPoints;
	
	//Fetch Current Kill Count
	_kills = _killer getVariable ["humanKills",0];
	
	//Update Kills
	_killer setVariable ["humanKills",(_kills + 1)];

	//Always Update Killer Stats
	_killer call BPServer_fnc_statsSync;

	//Log Kill
	["playerDeath: Points:%1 | Victim: %2 (%3) %4 Lvl %5 | Killer: %6 (%7) %8 Lvl %9 ~0001",_pointsChange,_playerName,_playerID,_playerFactionName,_playerFactionLevel,_killerName,_killerID,_killerFactionName,_killerFactionLevel] call BP_fnc_debugConsoleFormat;

	_playerKill = true;
} else {
	["playerDeath: Player: %1 (%2) killed himself.~0001",_playerName,_playerID] call BP_fnc_debugConsoleFormat;
};

// Process Survivalist + Hunter + Scavenger Point Loss On Death
_playerPointLoss = 0;

// Log Death Message
["playerDied: Class: %1 | Faction: %2 | Level: %3 | Points: %4",_playerClass,_playerFactionName,_playerFactionLevel,_playerFactionPoints] call BP_fnc_debugConsoleFormat;

// Lose Survivalist Points on Death
if (_playerFactionName == "Survivalist") then 
{
	_survivalist = _player getVariable ["survivalist",0];
	call {
		//Level 4
		if (_playerFactionLevel == 4) exitWith { if (_playerKill) then { _playerPointLoss = 604; } else { _playerPointLoss = 453; }; };
		//Level 3
		if (_playerFactionLevel == 3) exitWith { if (_playerKill) then { _playerPointLoss = 472; } else { _playerPointLoss = 354; }; };
		//Level 2
		if (_playerFactionLevel == 2) exitWith { if (_playerKill) then { _playerPointLoss = 252; } else { _playerPointLoss = 189; }; };
		//Level 1
		if (_playerFactionLevel == 1) then {
			if (_survivalist < 112) exitwith {_playerPointLoss = _survivalist};
			if (_playerKill) then { _playerPointLoss = 112 } else { _playerPointLoss = 84 };
		};
	};
	_playerPointLoss = _playerPointLoss * BP_Factions_PointsRatio;
	_player setVariable ["survivalist",(_survivalist - _playerPointLoss)];
} else {
	// Lose Hunter Points on Death
	if (_playerFactionName == "Hunter" and _playerKill) then
	{
		_hunter = _player getVariable ["hunter",0];
		call {
			//Level 3 and 4
			if (_playerFactionLevel >= 3) exitWith { _playerPointLoss = 60 };
			//Level 2
			if (_playerFactionLevel == 2) exitWith { _playerPointLoss = 40 };
			//Level 1
			if (_hunter < 25) then {_playerPointLoss = _hunter} else {_playerPointLoss = 20 };
		};
		_playerPointLoss = _playerPointLoss * BP_Factions_PointsRatio;
		_player setVariable ["hunter",(_hunter - _playerPointLoss)];
	} else {
		// Lose scavenger Points on Death
		if (_playerFactionName == "Scavenger" and _playerKill) then
		{
			_scavenger = _player getVariable ["scavenger",0];
			call {
				//Level 3 and 4
				if (_playerFactionLevel >= 3) exitWith { _playerPointLoss = 70 };
				//Level 2
				if (_playerFactionLevel == 2) exitWith { _playerPointLoss = 50 };
				//Level 1
				if (_playerFactionLevel == 1) then {
					if (_scavenger < 30) then {_playerPointLoss = _scavenger} else {_playerPointLoss = 30 };
				};
			};
			_playerPointLoss = _playerPointLoss * BP_Factions_PointsRatio;
			_player setVariable ["scavenger",(_scavenger - _playerPointLoss)];
		};
	};
};


// Update Player Stats
_player call BPServer_fnc_statsSync;

// Register Character Death
BP_DeadTickets pushBack (["CHILD:301:%1:",_characterID] call BPServer_fnc_callExtensionTicket);

// Remove Killed Player From Faction Chat Channels
_player call BPServer_fnc_radioManageRemove;

// Clear Dog Ownership On Player Death
_dog = _player getVariable ["dog",objNull];
if (!isNull _dog) then {
	_dog setVariable ["CharacterID","0",true];
	_player setVariable ["dog",objNull,true];
};

//End Of BPServer_fnc_playerDeath;
