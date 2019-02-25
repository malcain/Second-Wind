if (isServer) then {

  _VD_EDN_MatboxSpawner = {
    waitUntil {count ((allPlayers select {lifeState _x != "DEAD-RESPAWN"}) - entities "HeadlessClient_F") > 0};

    _allplayer = (allPlayers select {lifeState _x != "DEAD-RESPAWN"}) - entities "HeadlessClient_F";
    _player = selectRandom _allplayer;

_roadsnearby = _player nearRoads 2000;
_roadcnt = count _roadsnearby;
if (_roadcnt == 0) exitwith {call _VD_EDN_MatboxSpawner;};
_VD_EDN_MatboxSpawn = selectRandom _roadsnearby;

_cntRoad = count _roadsnearby;
if (_cntRoad >= 1 && _player distance _VD_EDN_MatboxSpawn >= 500) then {

_VD_EDN_Matbox = "Box_FIA_Support_F" createVehicle getpos _VD_EDN_MatboxSpawn;
_VD_EDN_Matbox allowDamage false;

clearMagazineCargoGlobal _VD_EDN_Matbox;
clearWeaponCargoGlobal _VD_EDN_Matbox;
clearItemCargoGlobal _VD_EDN_Matbox;
clearBackpackCargoGlobal _VD_EDN_Matbox;
_VD_EDN_Matbox addItemCargoGlobal [selectRandom VD_EDN_MatArray, (random 50)];
_VD_EDN_Matbox addItemCargoGlobal [selectRandom VD_EDN_MatArray, (random 50)];
_VD_EDN_Matbox addItemCargoGlobal [selectRandom VD_EDN_MatArray, (random 50)];
_VD_EDN_Matbox addItemCargoGlobal [selectRandom VD_EDN_MatArray, (random 50)];

[_VD_EDN_Matbox, "Drag","\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa","\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa","_this distance _target < 3","_caller distance _target < 3",{},{},{call Movebox;},{},[],1,0,false,false] call bis_fnc_holdActionAdd;
[_VD_EDN_Matbox, "Load In","\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa","\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa","_this distance _target < 3","_caller distance _target < 3",{},{},{call LoadIn;},{},[],1,0,false,false] call bis_fnc_holdActionAdd;
sleep 5;


waituntil {{_x distance _VD_EDN_Matbox > 1000}foreach (allPlayers select {lifeState _x != "DEAD-RESPAWN"}) - entities "HeadlessClient_F"};

if (_VD_EDN_Matbox distance _VD_EDN_MatboxSpawn <= 2) then {deleteVehicle _VD_EDN_Matbox;

call _VD_EDN_MatboxSpawner;}

}
else {call _VD_EDN_MatboxSpawner;};
};
waitUntil {count ((allPlayers select {lifeState _x != "DEAD-RESPAWN"}) - entities "HeadlessClient_F") > 0};
call _VD_EDN_MatboxSpawner;
