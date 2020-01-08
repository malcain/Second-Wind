
//Fetch Input Params
params [["_type","",[""]],"_pos","_dynamic",["_damage",0,[0]],["_fuel",0,[0]]];

//Input Checks
if (_type == "") exitWith {objNull};

//Spawn Vehicle
_vehicle = createVehicle [_type, _pos, [], 0, "CAN_COLLIDE"];
_vehicle setVariable ["BIS_enableRandomization", false];
if (_vehicle isKindOf "Ship" && {!surfaceIsWater _pos}) then {
	_pos = [_pos, 0, 100, 3, 2, 0, 0] call BIS_fnc_findSafePos;
	if (count _pos2D < 3) then {
		_vehicle setVehiclePosition [_pos, [], 0, "CAN_COLLIDE"];
	};
} else {
	_vehicle setVehiclePosition [_pos, [], 0, "CAN_COLLIDE"];
};
_vehicle enableDynamicSimulation true;

if (isNull _vehicle) exitWith {objNull};
if (!alive _vehicle) exitWith {objNull};
		
//Clear Inventory
removeAllWeapons _vehicle;
clearWeaponCargoGlobal  _vehicle;
clearMagazineCargoGlobal  _vehicle;
clearBackpackCargoGlobal _vehicle;
clearItemCargoGlobal _vehicle;

//Ensure Vehicle Is Spawned Correctly on The Ground
if (!_dynamic) then { _vehicle setVelocity [0,0,2]; };

//Ensure Damage is low enough so the vehicle doesn't explode on spawn
if (_damage > 0.85) then { _damage = 0.85; };

//Clear Ammo & Set Fuel / Damage
if (!(_vehicle isKindOf "Bicycle_F") && !(_vehicle iskindof "C_Quadbike_01_F")) then {
	_vehicle setVehicleAmmo 0;
	_vehicle setFuel _fuel;
	_vehicle setDamage _damage;
};

//Enable Rope Attachment
_vehicle enableRopeAttach true;

//Generate Data
_databasePos = _vehicle call BP_fnc_databasePos;
_vehicle setVariable ["ObjectUID","0"];
_databasePos = _vehicle call BP_fnc_databasePos;
_inventory = [];
_hitPoints = [];

//if (_uniqueID == "0") exitWith {objNull};

//Add Vehicle to Server Monitor
0 = BP_serverObjectMonitor pushBack (netID _vehicle);

//Put Vehicle In Database
_id = ["CHILD:500:%1:%2:%3:%4:%5:%6:",_type,_damage,_databasePos,_inventory,_hitPoints,_fuel] call BPServer_fnc_callExtension;
_id = str(_id#0);
_vehicle setVariable ["ObjectUID",_id];

if (_id == "0") exitWith {objNull};

//Return Vehicle
_vehicle