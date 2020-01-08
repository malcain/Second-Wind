/*
	Breaking Point Arma 3 Public-Alpha Build
	Created By Deathlyrage, Valtiel and Nohrt

	More Detailed Credits Listed Here:
		http://thezombieinfection.com/wiki/index.php?title=Credits

	Copyright © 2013-2015, The Zombie Infection (thezombieinfection.com)
	All rights reserved.
*/

private ["_character","_inv","_medical","_stats","_isLight","_characterID","_equippedWeapons","_weapons","_magazines","_items","_storage","_playerGear","_backpack","_playerBackp","_timeSync","_playerPos","_lastPos""_kills","_killsH","_headShots","_ranger","_outlaw","_hunter","_nomad","_survivalist","_scavenger"];

if (!initialized) exitWith {};

// Load Passed Params
_character = _this;

["logoutSync: Character: %1",_character] call BP_fnc_debugConsoleFormat;

// Invalid Sync Checks
if (isNull _character) exitWith {};
_characterID = _character getVariable ["CharacterID","0"];
if (_characterID == "0") exitWith { ["logoutSync: Cannot Sync Character %1 has no characterID. ~1001",(name _character)] call BP_fnc_debugConsoleFormat; };

// Undead Don't Save
if (_character getVariable ["class",0] == 7) exitWith {};

//Check if inside vehicle
//_vehicle = objectParent _character;
//_isInVehicle = !isNull _vehicle;

//Save Character Gear
_backpack = (backpack _character);
_vest = (vest _character);
_uniform = (uniform _character);
_headgear = (headgear _character);
_goggles = (goggles _character);
_nvg = (hmd _character);

_inv = _character call BP_fnc_getSaveInventory;

_inv params ["_weaponsData","_containerData","_partialMags","_extraWeapons","_assignedItems"];
	
_storage = [_backpack,_vest,_uniform,_headgear,_goggles,_nvg];
_playerGear = [_assignedItems,_storage,_weaponsData,_containerData,_partialMags,_extraWeapons];

[_character,_playerGear] call BPServer_fnc_gearSync;

/*if (_isInVehicle) then {

	_vehicleItems = getItemCargo _vehicle;
	_itemTypes = _vehicleItems select 0;
	_itemCount = _vehicleItems select 1;
	//clearItemCargoGlobal _vehicle;
	if (count _vehicleItems > 0) then {
		{
			if !(_x in _playerGear) then {
				_num = _itemCount select _forEachIndex;
				[_vehicle, _x, _num] call BP_fnc_removeItemCargo;
			};
		} forEach _itemTypes;
	};
	
	_vehicleWeaps = getWeaponCargo _vehicle;
	_weapTypes = _vehicleWeaps select 0;
	_weapCount = _vehicleWeaps select 1;
	if (count _vehicleWeaps > 0) then {
		{
			if !(_x in _playerGear) then {
				_num = _weapCount select _forEachIndex;
				[_vehicle, _x, _num] call BP_fnc_removeWeaponCargo;
			};
		} forEach _weapTypes;
	};
	
	_vehiclePacks = getBackpackCargo _vehicle;
	_packTypes = _vehiclePacks select 0;
	_packCount = _vehiclePacks select 1;
	if (count _vehiclePacks > 0) then {
		{
			if !(_x in _playerGear) then {
				_num = _packCount select _forEachIndex;
				[_vehicle, _x, _num] call BP_fnc_removeBackpackCargo;
			};
		} forEach _packTypes;
	};
	
};
*/
