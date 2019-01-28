_building = _this select 0;
_buildingPos = getPosATL _building;
_buildingType = 	typeOf _building;
_buildingSize = ((sizeOf _buildingType)+5);

_buildingNetID = netID _building;
_buildingIndex = BP_Buildings find _buildingNetID;

if (_buildingIndex == -1) exitWith {}; // Building not found

_buildingData = BP_BuildingsData select _buildingIndex;
_buildingData params ["_objects","_buildingID","_buildingUID","_playerID","_lock","_unlockAttempts","_explosive","_reinforcement"]; 

//Logging
//["houseKilled: %1", _building] call BP_fnc_debugConsoleFormat;


if (_reinforcement > 0) then
{
    _buildingData set [7,_reinforcement-1];
	BP_BuildingsData set [_buildingIndex,_buildingData];
    [_building] call BPServer_fnc_saveHouse;

} else {
	
	//Unlock House
	//_buildingNetID setVariable ["bis_disabled_Door",0];
	//BP_BuildingsLocks set [_buildingIndex,0];
	//publicVariable "BP_BuildingsLocks";
	
	//Spawn Objects
	{
		_x params ["_object","_idKey","_type","_ownerID","_playerID","_worldspace","_inventory","_fuel"];

		_worldspace params ["_dir","_pos"];
		
		if (isNull _object) then
		{
			//Log
			//["Created %1 ID: %2 Pos: %3",_type,_idKey,_pos] call BP_fnc_debugConsoleFormat;
			
			//Create Object
			_object = createVehicle [_type, _pos, [], 0, "CAN_COLLIDE"];
			_object setDir _dir;
			_object setPosATL _pos;
			_object enableSimulation true;
			
			//Set Owner ID
			if (_ownerID != "0") then { _object setVariable ["CharacterID", _ownerID, false]; };
			
			//Set Player ID
			if (_playerID != "0") then { _object setVariable ["PlayerID", _playerID, false]; };
			
			//Set Object UID
			_object setVariable ["ObjectID","0"];
			_object setVariable ["ObjectUID",_idKey];

			//Setup Fuel
			if (_object isKindOf "BP_BarrelFuel") then {
				_object setFuelCargo _fuel;
				//Fuel Barrels have no Inventory
				_inventory = [];
			};
			
			//Setup Object Inventory
			if !(_inventory isEqualTo []) then 
			{
				//Set Object Inventory
				[_object,_inventory] call BP_fnc_setObjectInventory;

				//Update Local Inventory for Gear Saving Checks
				_object setVariable ["lastInventory",_inventory];
			};
			
			//Add Object to Server Monitor
			0 = BP_serverObjectMonitor pushBack (netID _object);
		};
		_objects set [_forEachIndex,[_object,_idKey,_type,_ownerID,_playerID,_worldspace,_inventory,_fuel]];
	} forEach _objects;
	
	//Update Buildings Local Cached Objects
	_buildingData set [0,_objects];
	
	//Delete House
	[_buildingNetID] call BPServer_fnc_deleteHouse;

	//Process Storage Damage
	_deleteTypes = ["BP_LootBox","WeaponHolder","WeaponHolderSimulated"];
	_nearbyStorage = nearestObjects [_buildingPos, ["BP_LootBox","WeaponHolder","WeaponHolderSimulated","BP_Storage"],_buildingSize];
	{
		_type = (typeOf _x);
		if (_type in _deleteTypes) then {
			deleteVehicle _x;
		} else {
			_rnd = floor (random 100);
			if (_rnd < 70) then { deleteVehicle _x; };
		};
	} count _nearbyStorage;
};
