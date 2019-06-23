// by ALIAS
// execVM "AL_fire\setup_fire_player.sqf";

waitUntil {!isNil "damage_playeron_fire"};
player setVariable ["set_on_fire",false];
player setVariable ["time_in_fire",0];

fnc_check_anim = {
	private ["_state_p","_count","_tip"];
	_tip = ["01","02","03","05"] call BIS_fnc_selectRandom;	
	[player,[_tip,100]] remoteExec ["say3d"];
	_count = 0;
	while {player getVariable "set_on_fire"} do 
	{
		_state_p = animationState player;
		player setDamage ((getdammage player) + damage_playeron_fire);
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
	/*
	if (player_onFire_from_vanillafire) then {waitUntil {(isBurning player) or (player getVariable "set_on_fire")}}
	else {waitUntil {player getVariable "set_on_fire"}};
	if (player_onFire_from_vanillafire) then {if (isBurning player) then {player setVariable ["set_on_fire",true]}};
	*/
	hint "bro";
	[[player,fire_obj_player],"AL_fire\fire_on_player.sqf"] remoteExec ["execVM"];
	[] spawn fnc_check_anim;
	waitUntil {!(player getVariable "set_on_fire")};
	player setVariable ["time_in_fire",0];
	if (!alive player) then {[fire_obj_player select 2,["05",100]] remoteExec ["say3d"]};
	sleep 5;
};