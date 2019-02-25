/*
Vandeansons Dynamic Spawner Scripts
Heli Crashsite spawner
V1 - 21.09.2018
Settings: Check VD_Settings.sqf for settings!
*/

if (!isServer) exitwith {};


_VD_CS_Check = {
  waitUntil {count ((allPlayers select {lifeState _x != "DEAD-RESPAWN"}) - entities "HeadlessClient_F") > 0};

  _allplayer = (allPlayers select {lifeState _x != "DEAD-RESPAWN"}) - entities "HeadlessClient_F";
  _player = selectRandom _allplayer;

_VD_CS_Spawn = [getPosATL _player, VD_SpawnMinDist, VD_SpawnMaxDist, 1, 0, 0.9, 0, ["VD_Debug_BlacklistArea_1","VD_Debug_BlacklistArea_2","VD_Debug_BlacklistArea_3","VD_Debug_BlacklistArea_4"]] call BIS_fnc_findSafePos;

_Mrkr = selectrandom VD_CS_Spawn_Array;
VD_CS_Spawn_Array - [_Mrkr];

_VD_CS_SpawnMrkr = createMarker [_Mrkr, _VD_CS_Spawn];
_cnt = count VD_CS_Spawn_ArrayBL;
_playerdist = _player distance [0,0,0];
if (_cnt == 0) then {VD_CS_Spawn_ArrayBL append [_Mrkr];[_player]call _VD_CS_Spawner} else {

  if (_playerdist < 500 || {_VD_CS_Spawn distance (getmarkerpos _x) < VD_CS_spawnDistToOtherCS}foreach VD_CS_Spawn_ArrayBL) then {deleteMarker _VD_CS_SpawnMrkr; VD_CS_Spawn_Array append [_Mrkr]; call _VD_CS_Check;} else {VD_CS_Spawn_ArrayBL append [_Mrkr];call _VD_CS_Spawner};

};

};

_VD_CS_Spawner ={

_stufftodelete = [];
sleep 1;

_wreck = selectRandom VD_CS_Wrecks createVehicle _VD_CS_Spawn;
_wreck setDir (random 360);
_wreck setVectorUp surfaceNormal position _wreck;
_wreck allowDamage false;
_stufftodelete append [_wreck];


_wreck addAction ["Check Cargospace", {if (50 >= (random 100))
  then {
    params ["_target"];
    _target = _this select 0;
    removeAllActions _target;
    call VD_CS_CargoLoot}
else {
    params ["_target"];
    _target = _this select 0;
    hint "Nothing..."; removeAllActions _target};
if (50 >= (random 100))

then {for "_i" from 1 to (random 3)
do {
    params ["_target"];
    _target = _this select 0;
    removeAllActions _target;
    call VD_AI_Hunter_Spawner};}

else {
  params ["_target"];
  _target = _this select 0;
  removeAllActions _target};
  }, [], 1.5, true, true, "", "true", 5, false, "", ""];


if(50>=random 100) then {
_SmokeFire = "test_EmptyObjectForSmoke" createVehicle (position _wreck);
_SmokeFire attachTo [_wreck, [0, -3, -1]];
_stufftodelete append [_SmokeFire];
};
sleep 0.3;
_lootspot1 = "GroundWeaponHolder" createVehicle ([getPosATL _wreck, 5, 9, 0.5, 0, 0.9, 0] call BIS_fnc_findSafePos);
_lootspot1 addItemCargoGlobal [selectrandom VD_itemArray1, 1];
_stufftodelete append [_lootspot1];
sleep 1;
_lootspot2 = "GroundWeaponHolder" createVehicle ([getPosATL _wreck, 5, 9, 0.5, 0, 0.9, 0] call BIS_fnc_findSafePos);
_lootspot2 addItemCargoGlobal [selectrandom VD_itemArray1, 1];
_stufftodelete append [_lootspot2];
sleep 1;
_lootspot3 = "GroundWeaponHolder" createVehicle ([getPosATL _wreck, 5, 9, 0.5, 0, 0.9, 0] call BIS_fnc_findSafePos);
_lootspot3 addItemCargoGlobal [selectrandom VD_itemArray1, 1];
_stufftodelete append [_lootspot3];
sleep 1;
_lootspot4 = "GroundWeaponHolder" createVehicle ([getPosATL _wreck, 5, 9, 0.5, 0, 0.9, 0] call BIS_fnc_findSafePos);
_lootspot4 addItemCargoGlobal [selectrandom VD_itemArray1, 1];
_stufftodelete append [_lootspot4];

sleep 1;
_lootspot5 = "GroundWeaponHolder" createVehicle ([getPosATL _wreck, 5, 9, 0.5, 0, 0.9, 0] call BIS_fnc_findSafePos);
_weapon5 = selectRandom VD_WeaponArrayAll;
_magazines5 = getArray (configFile >> "CfgWeapons" >> _weapon5 >> "magazines");
waituntil {(count _magazines5) > 0};
_mag5 = selectRandom _magazines5;
_lootspot5 addMagazineCargoGlobal [_mag5, 1+ (random 2)];
_lootspot5 addWeaponCargoGlobal [_weapon5, 1];
_stufftodelete append [_lootspot5];
sleep 1;
_lootspot6 = "GroundWeaponHolder" createVehicle ([getPosATL _wreck, 5, 9, 0.5, 0, 0.9, 0] call BIS_fnc_findSafePos);
_weapon6 = selectRandom VD_WeaponArrayAll;
_magazines6 = getArray (configFile >> "CfgWeapons" >> _weapon6 >> "magazines");
waituntil {(count _magazines6) > 0};
_mag6 = selectRandom _magazines6;
_lootspot6 addMagazineCargoGlobal [_mag6, 1+ (random 2)];
_lootspot6 addWeaponCargoGlobal [_weapon6, 1];
_stufftodelete append [_lootspot6];

_lootspot7 = "GroundWeaponHolder" createVehicle ([getPosATL _wreck, 5, 9, 0.5, 0, 0.9, 0] call BIS_fnc_findSafePos);
_lootspot7 addItemCargoGlobal [selectrandom VD_EquipmentUniforms, 1];
_stufftodelete append [_lootspot7];
sleep 1;
_lootspot8 = "GroundWeaponHolder" createVehicle ([getPosATL _wreck, 5, 9, 0.5, 0, 0.9, 0] call BIS_fnc_findSafePos);
_lootspot8 addItemCargoGlobal [selectrandom VD_EquipmentVests, 1];
_stufftodelete append [_lootspot8];
sleep 1;
_lootspot9 = "GroundWeaponHolder" createVehicle ([getPosATL _wreck, 5, 9, 0.5, 0, 0.9, 0] call BIS_fnc_findSafePos);
_lootspot9 addItemCargoGlobal [selectrandom VD_EquipmentHeadgears, 1];
_stufftodelete append [_lootspot9];
sleep 1;
_lootspot10 = "GroundWeaponHolder" createVehicle ([getPosATL _wreck, 5, 9, 0.5, 0, 0.9, 0] call BIS_fnc_findSafePos);
_lootspot10 addBackpackCargoGlobal [selectrandom VD_EquipmentBackpacks, 1];
_stufftodelete append [_lootspot10];

_lootspot11 = "GroundWeaponHolder" createVehicle ([getPosATL _wreck, 5, 9, 0.5, 0, 0.9, 0] call BIS_fnc_findSafePos);
_lootspot11 addItemCargoGlobal [selectrandom VD_ExplosivesArray, 1];
_stufftodelete append [_lootspot11];
_AIcount = (random 5);
if (10 >= (random 100)) then {for "_i" from 1 to _AIcount do {[_VD_CS_Spawn,1,3] call VD_AI_Spawner};};


{_x enableDynamicSimulation true}foreach _stufftodelete;


sleep VD_UptimeFix;
sleep (random VD_UptimeRnd);


waituntil {{_x distance _wreck > VD_DeletionSaveZone}foreach (allPlayers select {lifeState _x != "DEAD-RESPAWN"}) - entities "HeadlessClient_F"};

{deleteVehicle _x} foreach _stufftodelete;
deleteMarker _VD_CS_SpawnMrkr;
VD_CS_Spawn_Array - [_Mrkr];
VD_CS_Spawn_ArrayBL append [_Mrkr];

call _VD_CS_Check;

};
  waitUntil {count ((allPlayers select {lifeState _x != "DEAD-RESPAWN"}) - entities "HeadlessClient_F") > 0};
call _VD_CS_Check;
