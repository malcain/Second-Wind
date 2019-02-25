/*
Vandeansons Dynamic Spawner Scripts
Shipwreck Spawner (Marker placed)
V3 - 21.09.2018
Settings: Check VD_Settings.sqf for settings!
*/
if (!isServer) exitwith {};
_PosFinder =
{sleep 3;
waitUntil {count ((allPlayers select {lifeState _x != "DEAD-RESPAWN"}) - entities "HeadlessClient_F") > 0};

_Player = (selectRandom [(allPlayers select {lifeState _x != "DEAD-RESPAWN"}) - entities "HeadlessClient_F"]) select 0;


_WreckPos = [getpos _Player, 500, 15000, 1, 0, 0.1, 1,["VD_SW_BlacklistArea_1","VD_SW_BlacklistArea_2","VD_SW_BlacklistArea_3","VD_SW_BlacklistArea_4","VD_SW_BlacklistArea_5","VD_SW_BlacklistArea_6","VD_SW_BlacklistArea_7"],[]] call BIS_fnc_findSafePos;

_NearWrecks = _WreckPos nearObjects ["Box_IND_Ammo_F", VD_SW_DistanceCheck];
_DistCheck = count _NearWrecks;


if (_DistCheck == 0) then {call _WreckSpawner}
else {call _PosFinder};
};


_WreckSpawner = {


  _Wreck =  selectRandom VD_SW_Wrecks createVehicle _WreckPos;
  _Wreck allowDamage false;
  _Wreck setDir (random 359);


_LootCrate = "Box_IND_Ammo_F" createVehicle ([getpos _Wreck, 15, 25, 0, 0, 10,0, [], []] call BIS_fnc_findSafePos);

_LootCrate allowDamage false;
[_LootCrate] call VD_LootCrateT1;;

    _Object1 = selectrandom VD_SW_WreckClutter createVehicle ([getpos _Wreck, 5, 25, 0, 0, 10, 0,[],[]] call BIS_fnc_findSafePos);
    _Object2 = selectrandom VD_SW_WreckClutter createVehicle ([getpos _Wreck, 5, 25, 0, 0, 10, 0,[],[]] call BIS_fnc_findSafePos);
    _Object3 = selectrandom VD_SW_WreckClutter createVehicle ([getpos _Wreck, 5, 25, 0, 0, 10, 0,[],[]] call BIS_fnc_findSafePos);
    _Object4 = selectrandom VD_SW_WreckClutter createVehicle ([getpos _Wreck, 5, 25, 0, 0, 10, 0,[],[]] call BIS_fnc_findSafePos);
    _Object5 = selectrandom VD_SW_WreckClutter createVehicle ([getpos _Wreck, 5, 25, 0, 0, 10, 0,[],[]] call BIS_fnc_findSafePos);
    _Object6 = selectrandom VD_SW_WreckClutter createVehicle ([getpos _Wreck, 5, 25, 0, 0, 10, 0,[],[]] call BIS_fnc_findSafePos);
    _Object7 = selectrandom VD_SW_WreckClutter createVehicle ([getpos _Wreck, 5, 25, 0, 0, 10, 0,[],[]] call BIS_fnc_findSafePos);


_Objects = [];
    _Objects append  [_Object1,_Object2,_Object3,_Object4,_Object5,_Object6,_Object7];
    _Objects append [_LootCrate];
    {_x allowDamage false;
    _x setDir (random 359);}foreach _Objects;

    _Objects append [_Wreck];


{_x setVectorUp surfaceNormal position _x} foreach _Objects;
{_x enableDynamicSimulation true} foreach _Objects;

if (_wreck distance _WreckPos > 100)
exitwith {
{deleteVehicle _x} foreach _Objects;
call _PosFinder;
};

sleep VD_UptimeFix;
sleep (random VD_UptimeRnd);

waituntil {{_x distance _Wreck > VD_DeletionSaveZone}foreach (allPlayers select {lifeState _x != "DEAD-RESPAWN"}) - entities "HeadlessClient_F"};

{deleteVehicle _x} foreach _Objects;

call _PosFinder;
};

call _PosFinder;
