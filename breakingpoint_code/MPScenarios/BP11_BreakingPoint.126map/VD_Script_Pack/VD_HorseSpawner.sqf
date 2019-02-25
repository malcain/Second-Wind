VD_BindupHorse = {
  params ["_target", "_caller", "_actionId"];
  _target = _this select 0;
  _caller = _this select 1;
  _actionId = _this select 2;
    _target removeAction _actionid;
_target allowdamage false;
_target disableai 'MOVE';
[_target, "Release","\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_unbind_ca.paa","\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_unbind_ca.paa","_this distance _target < 3","_caller distance _target < 3",{},{},{call VD_ReleaseHorse;},{},[],1,0,false,false] call bis_fnc_holdActionAdd;
};

VD_ReleaseHorse = {
  params ["_target", "_caller", "_actionId"];
  _target = _this select 0;
  _caller = _this select 1;
  _actionId = _this select 2;
  _target removeAction _actionid;
_target allowdamage true;
_target enableai 'MOVE';
[_target, "Tie down","\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_unbind_ca.paa","\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_unbind_ca.paa","_this distance _target < 3","_caller distance _target < 3",{},{},{call VD_BindupHorse;},{},[],1,0,false,false] call bis_fnc_holdActionAdd;
};

waitUntil {count ((allPlayers select {lifeState _x != "DEAD-RESPAWN"}) - entities "HeadlessClient_F") > 0};

_allplayer = (allPlayers select {lifeState _x != "DEAD-RESPAWN"}) - entities "HeadlessClient_F";
_player = selectRandom _allplayer;

_pos1 = [getPosATL _player, 500, 2000, 1, 0, 0.9,0, ["VD_Debug_BlacklistArea_1","VD_Debug_BlacklistArea_2","VD_Debug_BlacklistArea_3","VD_Debug_BlacklistArea_4"]] call BIS_fnc_findSafePos; // the first two numbers are the minimum and maximum range that the animals spawn related to the players position
_type = ["dbo_horse_NS"] call BIS_fnc_selectRandom;

_animals = createGroup civilian;
 	_animal = _animals createUnit [_type, _pos1, [], 1, "FORM"];
  [_animal, "Tie down","\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_unbind_ca.paa","\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_unbind_ca.paa","_this distance _target < 3","_caller distance _target < 3",{},{},{call VD_BindupHorse;},{},[],1,0,false,false] call bis_fnc_holdActionAdd;
