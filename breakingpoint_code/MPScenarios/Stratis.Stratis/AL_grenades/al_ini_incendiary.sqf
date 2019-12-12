// by ALIAS

waitUntil {!isNil "incend_damage"};
player setVariable ["set_on_fire",false];
player setVariable ["time_in_fire",0];

_pct_unit = ["leftfoot","rightfoot","pelvis","leftforearmroll","rightshoulder"];
fire_obj_player = [];
{
	_part_fire = "Land_HelipadEmpty_F" createVehiclelocal [0,0,0];
	_part_fire attachTo [player, [0,0,0],_x];
	fire_obj_player pushBack _part_fire;
} forEach _pct_unit;

fnc_check_anim = {
	private ["_state_p","_count","_tip"];
	_tip = ["01","02","03","05"] call BIS_fnc_selectRandom;	
	[player,[_tip,100]] remoteExec ["say3d"];
	_count = 0;
	while {player getVariable "set_on_fire"} do 
	{
		_state_p = animationState player;
		player setDamage ((getdammage player) + incend_damage);
		if (_state_p in off_fire) then {_count = (player getVariable "time_in_fire")+1; player setVariable ["time_in_fire",_count]};
		if (rain>0) then {_count=(player getVariable "time_in_fire")+(linearConversion [0.1,1,rain,0.1,0.5,true]); player setVariable ["time_in_fire",_count]};
		if (surfaceIsWater getPos player) then {_count = (player getVariable "time_in_fire")+2;	player setVariable ["time_in_fire",_count]};
		sleep 1;
	};
	player say3d ["NoSound",100];
};

while {!isNull player} do 
{
	waitUntil {alive player};
	waitUntil {player getVariable "set_on_fire"};
	[[player,fire_obj_player],"AL_fire\fire_on_player.sqf"] remoteExec ["execVM"];
	[] spawn fnc_check_anim;
	waitUntil {!(player getVariable "set_on_fire")};
	player setVariable ["time_in_fire",0];
	if (!alive player) then {[fire_obj_player select 2,["05",100]] remoteExec ["say3d"];player setVariable ["set_on_fire",false]};
	sleep 1
};