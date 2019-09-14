// by ALIAS

private ["_blow_source","_fire_press","_life_time"];

if (!isServer) exitWith {};

_blow_source	= _this select 0;
_fire_press		= _this select 1;
_life_time		= _this select 2;
_inflict_damage	= _this select 3;
_kill_source_end= _this select 4;

if (!isNil {_blow_source getVariable "on_alias_fire"}) exitWith {};
_blow_source setVariable ["on_alias_fire",true,true];
waitUntil {!isNil "allPlayers_on"};

[_life_time,_blow_source,_kill_source_end] spawn 
{
	_life_dur = _this select 0;
	_source_det = _this select 1;
	_kill_source_end = _this select 2;
	sleep _life_dur;
	_source_det setVariable ["on_alias_fire",nil,true];
	sleep 0.5;
	if (_kill_source_end) then {_blow_source setDamage 1};
};

[[_blow_source,_fire_press,_life_time],"AL_fire\al_small_fire_sfx.sqf"] remoteExec ["execvm",0,true];

if (_inflict_damage) then 
{
	while {_blow_source getVariable "on_alias_fire"} do 
	{
		_near_foc_footmobil = _blow_source nearEntities [list_man,5];
		if (count _near_foc_footmobil >0) then 
		{
			{
				if !(_x in allPlayers_on) then 
				{
					if (_x distance _blow_source < 2) then 
						{
							if (isNil{_x getVariable "killed_by_fire"}) then 
								{
									_rnd_lf = 10+(random 20);
									[_x,_rnd_lf,_rnd_lf-1] execVM "AL_fire\al_unit_fire.sqf"
								};
						} 
						else 
							{
								_x setBehaviour "AWARE"; _x enableFatigue false; _x forcespeed 10;_x setUnitPos "UP"; _x setSkill ["commanding", 1];[_x] joinSilent grpNull;
								_reldir = _x getDir _blow_source;
								_fct = [1,-1] call BIS_fnc_selectRandom;
								_avoid_fire = _blow_source getPos [5+random 5,(_reldir + 140 + (random 40)*_fct)];
								_x doMove _avoid_fire;
							}
				}
			} foreach _near_foc_footmobil
		};
	sleep 3;
	};
};