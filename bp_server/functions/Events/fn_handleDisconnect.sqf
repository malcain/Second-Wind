/*
	Breaking Point Arma 3 Public-Alpha Build
	Created By Deathlyrage, Valtiel and Nohrt

	More Detailed Credits Listed Here:
		http://thezombieinfection.com/wiki/index.php?title=Credits

	Copyright © 2013-2015, The Zombie Infection (thezombieinfection.com)
	All rights reserved.
*/

params [["_playerObj",objNull,[objNull]],"_sessionID",["_playerID","",[""]],["_playerName","",[""]]];

//Make Sure Input is Valid
if (isNull _playerObj) exitWith {};
if (_playerID == "") exitWith {};

//Handle Headless Client Disconnection
/*
if (_playerObj isKindOf "HeadlessClient_F") exitWith {
	//Flag HC as Disconnected
	BP_HC_Connected = false;
	publicVariable "BP_HC_Connected";

	//Remove ID, Object and Cleanup
	BP_HC_ID = 0;
	BP_HC_PID = "0";
	BP_HC_OBJ = objNull;

	_group = (group _playerObj);
	deleteVehicle _playerObj;
	deleteGroup _group;

	//Remove Stronghold AI
	{ deleteVehicle _x; } count entities "BP_Stronghold_AI";

	true
};
*/

//Fetch Object Ref Values
_characterID = _playerObj getVariable ["CharacterID","0"];
_isDead = _playerObj getVariable ["med_isDead",false];

//Clear Active Server
["CHILD:203:%1:%2:",_characterID,_playerID] call BPServer_fnc_callExtensionAsyncLow;

//Handle Player Logic Disconnection
if (_playerObj isKindOf "BP_PlayerLogic" || _playerObj isKindOf "BP_Player_Unit") exitWith
{
	//Cleanup Body
	_body = _playerObj getVariable ["body",objNull];
	if (!isNull _body) then {
		_group = (group _body);
		deleteVehicle _body;
		deleteGroup _group;

		//Check Body Isn't In Undead Queue
		_index = BP_UndeadQueue find (netID _body);
		if (_index >= 0) then { BP_UndeadQueue deleteAt _index; };
	};

	//Check Logic Isn't In Undead Queue
	_index = BP_UndeadQueue find (netID _playerObj);
	if (_index >= 0) then { BP_UndeadQueue deleteAt _index; };

	//Delete Game Logic
	_group = (group _playerObj);
	deleteVehicle _playerObj;
	deleteGroup _group;

	true
};

// Handle Players Disconnecting Inside Vehicles
//_isInVehicle = (vehicle _playerObj != _playerObj);
_vehicle = objectParent _playerObj;
_isInVehicle = !isNull _vehicle;
if (_isInVehicle) then {
	//Handle Player Ejecting From Vehicle
	_playerObj action ["getOut", _vehicle]; // _playerObj action ["Eject", vehicle _playerObj];
	[_vehicle] call BPServer_fnc_updateQueueAdd;
};

_playerObj enableFatigue false;
_playerObj disableConversation true;
_playerObj setVariable ["BIS_noCoreConversations", true];
{ _playerObj disableAI _x; } count ["FSM","MOVE","ANIM","TARGET","AUTOTARGET","AIMINGERROR","SUPPRESSION"];
_playerObj setBehaviour "CARELESS";
doStop _playerObj;

//Logging
["handleDisconnect: Player: %1 (%2) | CharID: %3 ~0001", _playerName,_playerID,_characterID] call BP_fnc_debugConsoleFormat;

//Save & Delete Dog - NOT USED, DONE IN DOG LOCAL EVENT HANDLER
//_dog = _playerObj getVariable ["dog",objNull];
//_dog call BPServer_fnc_dogSync;
//if (!isNull _dog) then { deleteVehicle _dog; };

//Exit If Invalid Char ID or In Debug and Delete
if (_characterID == "0" || {_playerObj call BP_fnc_isInDebug}) exitWith {
	_group = (group _playerObj);
	deleteVehicle _playerObj;
	deleteGroup _group;
	true
};

//Set Object Ref Values
_playerObj setVariable ["bodyName",_playerName,true];
_playerObj setVariable ["playerID",_playerID];

//Handle Combat Logging (Hostage,Unconscious,Traitor)
if (!_isDead || {alive _playerObj}) then
{
	//Backup Inventory
	_inventory = _playerObj call BP_fnc_getFullInventory;
	_playerObj setVariable ["inv",_inventory];

	// Combat Logging / Hostage Check
	_isHostage = _playerObj getVariable ["med_hostage",false];
	_isUnconcious = _playerObj getVariable ["med_unconscious",false];
	_isTraitorFlag = _playerObj getVariable ["traitorFlag",false];
	_isUndead = (_playerObj getVariable ["class",0] == 7);
	_needsSurgery = (_playerObj getVariable ["med_bleedingLevel",0] > 2);

	if (_isHostage || {_isUnconcious} || {_isTraitorFlag} || {_isUndead} || {_needsSurgery}) then
	{
		//Logging
		["handleDisconnect: Combat Log: %1 ~0001", _playerName] call BP_fnc_debugConsoleFormat;
		
		// Process Survivalist + Hunter + Scavenger Point Loss On Death
		_playerPointLoss = 0;
		//Always max point loss for combatlogging until better solution.
		_playerKill = true;

		// Lose Survivalist Points on Death
		//Fetch Detailed Player Information
		_playerClass = _playerObj getVariable ["class",0];
		_playerFactionName = _playerClass call BP_fnc_getFactionName;
		_playerFactionLevel = _playerObj call BP_fnc_getFactionLevel;
		_playerFactionPoints = _playerObj call BP_fnc_getFactionPoints;
	
		// Log Death Message
		["playerDied: Class: %1 | Faction: %2 | Level: %3 | Points: %4",_playerClass,_playerFactionName,_playerFactionLevel,_playerFactionPoints] call BP_fnc_debugConsoleFormat;
	
		if (_playerFactionName == "Survivalist") then 
		{
			_survivalist = _playerObj getVariable ["survivalist",0];
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
			_playerObj setVariable ["survivalist",(_survivalist - _playerPointLoss)];
			["playerCombatLogLoss: Player: %1 | Pointloss: %2",_playerObj,_playerPointLoss] call BP_fnc_debugConsoleFormat;
		} else {
			// Lose Hunter Points on Death
			if (_playerFactionName == "Hunter" and _playerKill) then
			{
				_hunter = _playerObj getVariable ["hunter",0];
				call {
					//Level 3 and 4
					if (_playerFactionLevel >= 3) exitWith { _playerPointLoss = 100 };
					//Level 2
					if (_playerFactionLevel == 2) exitWith { _playerPointLoss = 50 };
					//Level 1
					if (_hunter < 25) then {_playerPointLoss = _hunter} else {_playerPointLoss = 25 };
				};
				_playerPointLoss = _playerPointLoss * BP_Factions_PointsRatio;
				_playerObj setVariable ["hunter",(_hunter - _playerPointLoss)];
			} else {
				// Lose scavenger Points on Death
				if (_playerFactionName == "Scavenger" and _playerKill) then
				{
					_scavenger = _playerObj getVariable ["scavenger",0];
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
					_playerObj setVariable ["scavenger",(_scavenger - _playerPointLoss)];
				};	
			};
		};

		//Save Stats
		_playerObj call BPServer_fnc_statsSync;

		// Keep A Cache List Of All Dead People In Case Hive Extension is Failing
		BP_DeadCharacters pushBack _characterID;

		//Register Combat Logger Death
		BP_DeadTickets pushBack (["CHILD:301:%1:",_characterID] call BPServer_fnc_callExtensionTicket);

		//Kill The Body Entity
		_playerObj setDamage 1;

		//Set Specific Variables
		_playerObj setVariable ["processedDeath",diag_tickTime];
		_playerObj setVariable ["med_isDead",true,true];
		//_playerObj setVariable ["deathType",_deathType,true];

		//Commented as Shouldn't be nessesary if Uni / Vest / Backpack is deleted
		//clearMagazineCargoGlobal (backpackContainer _playerObj);
		//clearMagazineCargoGlobal (vestContainer _playerObj);
		//clearMagazineCargoGlobal (uniformContainer _playerObj);

		//Remove Stuff
		removeUniform _playerObj;
		removeVest _playerObj;
		removeBackpack _playerObj;
		removeAllWeapons _playerObj;
		removeAllItems _playerObj;
		removeHeadgear _playerObj;
		removeGoggles _playerObj;
		removeAllAssignedItems _playerObj;

		//Register Combat Logger Death Entry
		[_playerID,_playerName,_characterID] call BPServer_fnc_combatLog;
	} else {
		//Combat Logging AI
		if (_isInVehicle) then {
			["handleDisconnect: Deleting Unit: %1 ~0001", _playerName] call BP_fnc_debugConsoleFormat;
			[_playerObj] call BPServer_fnc_unitCleanup;
			//Save Unit
			_playerObj call BPServer_fnc_logoutSync;
		} else {
			["handleDisconnect: Combat Log AI: %1 ~0001", _playerName] call BP_fnc_debugConsoleFormat;
			[_playerID,_playerObj] call BPServer_fnc_discoMorph;
		};
	};
};

//Return True If The EH has Handled Control Over the Unit
true
