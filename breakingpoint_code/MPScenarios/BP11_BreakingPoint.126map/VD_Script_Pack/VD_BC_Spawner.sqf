/*
Vandeansons Dynamic Spawner Scripts
Bandit Camp Spawner
V2 - 29.10.2018
Settings: Check VD_Settings.sqf for settings!
*/
//

if (!isServer) exitwith {};


_VD_BC_Check = {

waitUntil {count ((allPlayers select {lifeState _x != "DEAD-RESPAWN"}) - entities "HeadlessClient_F") > 0};

_allplayer = (allPlayers select {lifeState _x != "DEAD-RESPAWN"}) - entities "HeadlessClient_F";
_player = selectRandom _allplayer;



_VD_BC_Spawn = [getPosATL _player, VD_SpawnMinDist, VD_SpawnMaxDist, 0, 0, 0.4, 0, ["VD_Debug_BlacklistArea_1","VD_Debug_BlacklistArea_2","VD_Debug_BlacklistArea_3","VD_Debug_BlacklistArea_4"]] call BIS_fnc_findSafePos;

_isFlatEmpty = !(_VD_BC_Spawn isFlatEmpty  [20, -1, 0.2, 20, -1, false] isEqualTo []);

_nearcamps = _VD_BC_Spawn nearObjects ["Campfire_burning_F", VD_BC_DistanceCheck];
_cntfp = count _nearcamps;


if (_isFlatEmpty) then {

  if (_cntfp == 0) then {call _VD_BC_Spawner}

  else {call _VD_BC_Check};

}
 else {call _VD_BC_Check};

};

_VD_BC_Spawner ={
_itemboxes = [];
_VD_BC_Fireplace = "Campfire_burning_F" createVehicle _VD_BC_Spawn;

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
_itemboxes append [_itemBox2];
{[_x] call VD_lootCrateT1} foreach [_itembox2];


if (count _nearbuildings >= 2) then {
_nearBuilding2 = _nearBuildings select 1;
_buildpositions2 = _nearBuilding2 buildingPos -1;
_buildpos2 = _buildpositions2 select 3;
_itemBox3 = "Box_IND_Ammo_F" createVehicle _buildpos2;
_itemBox3 allowDamage false;
_itemboxes append [_itemBox3];
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
{deleteVehicle _x}forEach _itemboxes;

deleteVehicle _VD_BC_Fireplace;
{deleteVehicle _x}foreach _objects;
sleep 5;
call _VD_BC_Check;
};
waitUntil {count ((allPlayers select {lifeState _x != "DEAD-RESPAWN"}) - entities "HeadlessClient_F") > 0};
call _VD_BC_Check;
