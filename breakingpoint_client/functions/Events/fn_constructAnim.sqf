/*
	BreakingPoint: Second Wind

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

*/
params ["_animation"]; //Animation names MUST BE in lower case
r_action = false;
_handgun = handgunWeapon player;
_weapon = currentWeapon player;

if (_weapon in BP_MeleeWeapons or (_weapon == _handgun)) then
{
	player action ["SwitchWeapon", player, player, 100];
	player switchcamera cameraView;
	sleep 2.4;
};

player playMoveNow _animation;

if (_animation isEqualTo "bp_cutbody") then {
	_dis=30;
	[player,"gut",0,false,_dis] call BP_fnc_objSpeak;
	[player,_dis,true,(getPosATL player)] spawn BP_fnc_zombieAlert;
};

r_interrupt = false;
_animState = animationState player;
r_doLoop = true;
_started = false;
_finished = false;
//[player,"bandage",0,false] call BP_fnc_objSpeak;
while {r_doLoop} do {
	_animState = animationState player;
	_isRepair = (_animState isEqualTo _animation);
	if (_isRepair) then {
		_started = true;
	};
	if (_started and !_isRepair) then {
		r_doLoop = false;
		_finished = true;
	};
	if (!isNull (findDisplay 602)) then { closeDialog 0; };
	if (r_interrupt) then {
		r_doLoop = false;
	};
	
	if (r_player_dead) exitWith {};
	
	sleep 0.1;
};
r_doLoop = false;

if (!_finished) then {
	r_interrupt = false;
	player switchMove "";
	player playActionNow "stop";
};

_finished