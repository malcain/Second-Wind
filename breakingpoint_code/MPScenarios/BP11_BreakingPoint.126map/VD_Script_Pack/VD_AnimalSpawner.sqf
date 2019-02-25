_VD_Animalspawn = {

  waitUntil {count ((allPlayers select {lifeState _x != "DEAD-RESPAWN"}) - entities "HeadlessClient_F") > 0};

  _allplayer = (allPlayers select {lifeState _x != "DEAD-RESPAWN"}) - entities "HeadlessClient_F";
  _player = selectRandom _allplayer;

_pos1 = [getPosATL _player, 500, 1200, 0, 0, 0.9	, 0] call BIS_fnc_findSafePos; // the first two numbers are the minimum and maximum range that the animals spawn related to the players position
_type = ["Goat_random_F","Sheep_random_F"] call BIS_fnc_selectRandom;

_animals = createGroup east;
 	_animal = _animals createUnit [_type, _pos1, [], 1, "FORM"];
	_animal setVariable ["BIS_fnc_animalBehaviour_disable", true];
	_animal setSpeaker "NoVoice";
  _animal disableAI "FSM";
	_animal disableAI "AIMINGERROR";
	_animal disableAI "SUPPRESSION";
	_animal disableAI "AUTOTARGET";
	_animal disableAI "TARGET";
	_animal setCombatMode "BLUE";
	_animal setBehaviour "CARELESS";
[_animals, _pos1, 250] call BIS_fnc_taskPatrol;
sleep 1000;
sleep random 1000;
waituntil {{_x distance _animal > 800}foreach allplayers - entities [["allplayers"], ["HeadlessClient_F"], true, true]};


{	deleteVehicle _x;
}forEach units _animals;
call _VD_Animalspawn;
};

waitUntil {count ((allPlayers select {lifeState _x != "DEAD-RESPAWN"}) - entities "HeadlessClient_F") > 0};


call _VD_Animalspawn;
