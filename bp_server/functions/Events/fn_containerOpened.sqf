params ["_containerNetID",["_playerNetID",nil]];

_container = objectFromNetID _containerNetID;

if (isNull _container) exitWith {};

//Fetch Info From Container
_lootSpawned = _container getVariable ["lootSpawned",true];

//Validation Checking
if (_lootSpawned) exitWith {};

if !(isNil "_playerNetID") then {
	_player = objectFromNetID _playerNetID;
	_pointsGain = 1 + (round (random 1));
	[_player,_pointsGain,false] call BPServer_fnc_addFactionPoints;
};

[_container] call BPServer_fnc_containerSpawnLoot;
/*
//Enable Simulation on Container and Nearby Objects
_nearByObj = nearestObjects [(getPosATL _container), ["BP_LootBox","WeaponHolder","WeaponHolderSimulated","BP_DeadBody","BP_DeadBodyX","CAManBase","BP_SaveObject"],8];
if !(_container in _nearByObj) then { _index = _nearByObj pushBack _container; };
{
	//if !(simulationEnabled _x) then {
	//	_x enableSimulationGlobal true;
	//};
	
	//Spawn In Loot If It's a Loot Box
	//if (_x isKindOf "BP_LootBox") then
	//{
	//	[_x] call BPServer_fnc_containerSpawnLoot;
	//};
} forEach _nearByObj;
*/