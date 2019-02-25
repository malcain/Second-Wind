/*
Vandeansons Dynamic Spawner Scripts
Bandit Camp Spawner (Placed with markers)
V2 - 21.09.2018
Settings: Check VD_Settings.sqf for settings!
*/
if (!isServer) exitwith {};

_VD_BC_SpawnerMrkr ={
_VD_BCSpawn = selectRandom VD_BC_MrkrArray;
VD_BC_MrkrArray = VD_BC_MrkrArray - [_VD_BCSpawn];

_VD_BC_Fireplace = "Campfire_burning_F"  createVehicle getMarkerPos _VD_BCSpawn;
sleep 0.3;


_composition = selectrandom VD_BC_Comp_Array;

[getpos _VD_BC_Fireplace, 0, call _composition] call BIS_fnc_ObjectsMapper;

_alignpos = getpos _VD_BC_Fireplace;
_objects = _alignpos nearobjects 40;
{_x allowDamage false;_x setVectorUp surfaceNormal position _x;} foreach _objects;

_nearBuildings = _alignpos nearObjects ["CampEast", 40];

_nearBuilding1 = _nearBuildings select 0;
_buildpositions1 = _nearBuilding1 buildingPos -1;
_buildpos1 = _buildpositions1 select 3;
_itemBox2 = "Box_IND_Ammo_F" createVehicle selectRandom _buildpositions1;
_itemBox2 allowDamage false;
{[_x] call VD_lootCrateT1} foreach [_itembox2];


if (count _nearbuildings >= 2) then {
_nearBuilding2 = _nearBuildings select 1;
_buildpositions2 = _nearBuilding2 buildingPos -1;
_buildpos2 = _buildpositions2 select 3;
_itemBox3 = "Box_IND_Ammo_F" createVehicle _buildpos2;
_itemBox3 allowDamage false;
{[_x] call VD_lootCrateT1} foreach [_itembox3];
};
sleep 1;

_bandits1 = createGroup east;
_bandits2 = createGroup east;
_bandits3 = createGroup east;
_bandits4 = createGroup east;

{if (3 >= (random 10)) then {"B_G_Survivor_F" createUnit [([getPosATL _VD_BC_Fireplace, 5, 15, 0, 0, 100, 0] call BIS_fnc_findSafePos), _x, "", 1, "private"];};"B_G_Survivor_F" createUnit [([getPosATL _VD_BC_Fireplace, 2, 15, 0, 0, 100, 0] call BIS_fnc_findSafePos), _x, "", 1, "private"];} foreach [_bandits1, _bandits2,_bandits3,_bandits4];

{[_x] call VD_equipper;}forEach units _bandits1;
{[_x] call VD_equipper;}forEach units _bandits2;
{[_x] call VD_equipper;}forEach units _bandits3;
{[_x] call VD_equipper;}forEach units _bandits4;

{[_x,getpos _VD_BC_Fireplace,5] call BIS_fnc_taskPatrol;}foreach [_bandits1, _bandits2];
{[_x, getPos _VD_BC_Fireplace] call BIS_fnc_taskDefend;}foreach [_bandits3, _bandits4];

_bandits1 enableDynamicSimulation true;
_bandits2 enableDynamicSimulation true;
_bandits3 enableDynamicSimulation true;
_bandits4 enableDynamicSimulation true;
{_x enableDynamicSimulation true}foreach _objects;

sleep VD_UptimeFix;
sleep (random VD_UptimeRnd);

waituntil {{_x distance _VD_BC_Fireplace > VD_DeletionSaveZone}foreach (allPlayers select {lifeState _x != "DEAD-RESPAWN"}) - entities "HeadlessClient_F"};


{deleteVehicle _x}forEach units _bandits1;
{deleteVehicle _x}forEach units _bandits2;
{deleteVehicle _x}forEach units _bandits3;
{deleteVehicle _x}forEach units _bandits4;

deleteVehicle _VD_BC_Fireplace;
{deleteVehicle _x}foreach _objects;

VD_BC_MrkrArray = VD_BC_MrkrArray + [_VD_BCSpawn];

};

call _VD_BC_SpawnerMrkr;
