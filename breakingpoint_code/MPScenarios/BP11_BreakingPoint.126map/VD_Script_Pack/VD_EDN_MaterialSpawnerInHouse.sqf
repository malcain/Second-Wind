if (!isServer) exitWith {};

_VD_EDN_MatboxSpawnerIH = {
  waitUntil {count ((allPlayers select {lifeState _x != "DEAD-RESPAWN"}) - entities "HeadlessClient_F") > 0};

  _allplayer = (allPlayers select {lifeState _x != "DEAD-RESPAWN"}) - entities "HeadlessClient_F";
  _player = selectRandom _allplayer;
_housesarray = _player nearObjects ["House", 2000];

_cnth = count _housesarray;

  if (_cnth == 0) exitwith {call _VD_EDN_MatboxSpawnerIH;;};
  _objhouse = selectRandom _housesarray;

_allpositions = _objhouse buildingPos -1;
_cnt = count _allpositions;

  if (_cnt == 0) exitwith {call _VD_EDN_MatboxSpawnerIH;};
_VD_EDN_MatboxSpawnInhouse = selectRandom _allpositions;
_VD_EDN_Matbox = "Box_FIA_Support_F" createVehicle _VD_EDN_MatboxSpawnInhouse;
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
sleep 100;

waituntil {{_x distance _VD_EDN_Matbox > 1000}foreach (allPlayers select {lifeState _x != "DEAD-RESPAWN"}) - entities "HeadlessClient_F"};

if (_VD_EDN_Matbox distance _VD_EDN_MatboxSpawnInhouse <= 2) then {deleteVehicle _VD_EDN_Matbox;

call _VD_EDN_MatboxSpawnerIH;}

else {call _VD_EDN_MatboxSpawnerIH;};
};
waitUntil {count ((allPlayers select {lifeState _x != "DEAD-RESPAWN"}) - entities "HeadlessClient_F") > 0};

call _VD_EDN_MatboxSpawnerIH;
