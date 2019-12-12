/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/

params ["_building"];

//Check Building Isn't Null
if (isNull _building) exitWith {};

//Get Type and Config
_type = typeOf _building;
_config = configFile >> "CfgBuildingLoot" >> _type;
/*if (isClass (missionConfigFile >> "CfgBuildingLoot" >> _type)) then
{
	_config = missionConfigFile >> "CfgBuildingLoot" >> _type;
};*/

//Check Building has class in config
if !(isClass _config) exitWith {};

//Check Building Isn't Haven
if ((netID _building) in BP_Buildings) exitWith {};

//Get Size and Pos
_buildingSize = ((sizeOf _type)+5);
_buildingPos = getPosATL _building;

//if (!BP_Zeds) exitWith {};
//if (BP_LocalZeds > BP_ZedMaxLocal) exitWith {};
//if (BP_NearbyZombies > BP_ZedMaxNearby) exitWith {};
//if (BP_SpawnZombies > BP_ZedMaxNearby) exitWith {};
//if (BP_RemoteZeds > BP_GlobalZeds) exitWith {};
//if (BP_GlobalZeds > BP_ZedMaxGlobal) exitWith {};

//Zombies Don't Spawn In Faction Strongholds ( 100m )
//_nearStrongholdRadius = _buildingPos call BP_fnc_strongholdNearbyRadius;
//if (_nearStrongholdRadius < 100) exitWith {};

//_min = getNumber (_config >> "minRoaming");
//_max = getNumber (_config >> "maxRoaming");
_min = 0;
_max = 2;

//Zedz Don't Spawn in busy positions && no more than _max Zedz for each house
_zedsNearby = count (_buildingPos nearEntities ["CAManBase",_buildingSize+35]);
_noZedNearby = _zedsNearby < _max;
_posFree = ((count (_buildingPos nearEntities ["CAManBase",2])) == 0);
if (!_noZedNearby or !_posFree) exitWith {};

//Check if zedz have already spawned here earlier
//_nearByObj = count (nearestObjects [_buildingPos, ["BP_LootBox","WeaponHolder","WeaponHolderSimulated"],_buildingSize]);
_nearByObj = _buildingPos nearSupplies _buildingSize;

if (count _nearByObj > 0) exitWith {};

//Zombies Only Spawn in Cleared Buildings with no other zombies
//_clean = {alive _x} count (_buildingPos nearEntities ["zZombie_Base",_buildingSize]) == 0;
//if (!_clean) exitWith {};

//_zombieChance = getNumber (_config >> "zombieChance");

_positions = getArray (_config >> "zombiePos");

if (_positions isEqualTo []) exitWith {};

_chanceRnd = (floor random 100);

if (_chanceRnd < 55) exitwith {};

_unitTypes = getArray (_config >> "zombieClass");
//Spawn outside or inside.
if (_chanceRnd > 80 or {_chanceRnd < 30}) then {
	_nearestRoad = selectRandom ((position _building) nearRoads 15);
	if !(isNil "_nearestRoad") then {
		_position = [_nearestRoad, 1, 3, 1, 0] call BIS_fnc_findSafePos;
		if (count _position > 2) exitwith {};
		[_position,_unitTypes,false] call BP_fnc_zombieGenerate;
	} else {
		_position = [_buildingPos, 1, 20, 3, 0] call BIS_fnc_findSafePos;
		if (_position isEqualTo []) exitwith {};
		[_position,_unitTypes,false] call BP_fnc_zombieGenerate;
	};
} else {
	_position = selectRandom _positions;
	[(_building modelToWorld _position),_unitTypes,false] call BP_fnc_zombieGenerate;
};

