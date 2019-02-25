/*
Vandeansons Dynamic Spawner Scripts
Heli Crashsite spawner
V1 - 21.09.2018
Settings: Check VD_Settings.sqf for settings!
*/

if (!isServer) exitwith {};
  _PosFinder = {
                waitUntil {count ((allPlayers select {lifeState _x != "DEAD-RESPAWN"}) - entities "HeadlessClient_F") > 0};
                _Player = (selectRandom [(allPlayers select {lifeState _x != "DEAD-RESPAWN"}) - entities "HeadlessClient_F"]) select 0;
                _SpawnPos = [getPosATL _Player, VD_SpawnMinDist, VD_SpawnMaxDist, 1, 0, 0.9, 0, ["VD_Debug_BlacklistArea_1","VD_Debug_BlacklistArea_2","VD_Debug_BlacklistArea_3","VD_Debug_BlacklistArea_4"]] call BIS_fnc_findSafePos;
                _NearHideOuts = _SpawnPos nearObjects ["Campfire_burning_F", VD_HO_DistanceCheck];
                _NearTrees = nearestTerrainObjects [_SpawnPos, ["Tree"], 50];
                  if (count _NearTrees >= 75 && count _NearHideOuts == 0)
                  then {call _HideOutSpawner}
                  else {call _PosFinder};
                };

_HideOutSpawner ={
                  _Objects = [];
                  _CampFire = "Campfire_burning_F" createVehicle _SpawnPos;
                  _PosTent1 = [(getpos _CampFire select 0) + 5*sin(0), (getpos _CampFire select 1) + 5*cos(0), 0];
                  _PosTent2 = [(getpos _CampFire select 0) + 5*sin(90), (getpos _CampFire select 1) + 5*cos(90), 0];
                  _PosLootcrate = [(getpos _CampFire select 0) + 4*sin(0), (getpos _CampFire select 1) + 4*cos(0), 0];

                  _Tent1 = selectRandom VD_BCtentsSmall createVehicle _PosTent1;
                  _Tent2 = selectRandom VD_BCtentsSmall createVehicle _PosTent2;

                  _Objects append [_CampFire,_Tent1,_Tent2];

                  {_x allowDamage false;_x setDir (random 359);_x setVectorUp surfaceNormal position _x;} foreach _Objects;
                  _AIcount = (random 5);
                    if (15 >= (random 100)) then {for "_i" from 1 to _AIcount do {[_SpawnPos,1,3] call VD_AI_Spawner};};

                  _Tent1 addAction ["Loot tent", {call VD_HO_Loot; if (1 >= (random 10)) then {call VD_AI_Spawn};}, [], 1.5, true, true, "", "true", 3, false, "", ""];
                  _Tent2 addAction ["Loot tent", {call VD_HO_Loot; if (5 >= (random 10)) then {call VD_AI_Spawn};}, [], 1.5, true, true, "", "true", 3, false, "", ""];

                  sleep VD_UptimeFix;
                  sleep (random VD_UptimeRnd);

                  waituntil {{_x distance _CampFire > VD_DeletionSaveZone}foreach (allPlayers select {lifeState _x != "DEAD-RESPAWN"}) - entities "HeadlessClient_F"};

                  {deleteVehicle _x} foreach _Objects;

                  call _PosFinder;
                };

waitUntil {count ((allPlayers select {lifeState _x != "DEAD-RESPAWN"}) - entities "HeadlessClient_F") > 0};
call _PosFinder;
