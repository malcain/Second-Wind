// by ALIAS

private ["_unit_afect","_life_time","_kill_vik","_crew_fire"];

//if (!isServer) exitwith {};

_unit_afect = _this select 0;
_life_time	= _this select 1;
_kill_vik	= _this select 2;
_crew_fire	= _this select 3;

sleep 2+random 2;

if (!isNil {_unit_afect getVariable "on_alias_fire"}) exitWith {};
_unit_afect setVariable ["on_alias_fire",true,true];

if (_unit_afect isKindOf "TANK") then 
{
	if (selectRandom [true,false]) then // when true tank explodes from fire
		{
			[[_unit_afect,_life_time],"AL_fire\al_vehicle_fire_sfx.sqf"] remoteExec ["execvm",0,true];
			[_unit_afect,_life_time,_kill_vik] spawn 
			{
				_unit_afect = _this select 0;
				_life_time	= _this select 1;		
				_kill_vik	= _this select 2;		
				sleep _life_time;
				if (_kill_vik) then {_unit_afect setDamage 1}
			};
			_pasageri = fullCrew _unit_afect;
			if (count _pasageri > 0) then 
			{
				{
					if (isPlayer (_x select 0)) then {(_x select 0) setVariable ["set_on_fire",true,true]} else {_kill_time= 5+random 15; [_x select 0,_kill_time,30] execvm "AL_fire\al_unit_fire_car.sqf"}
				} forEach _pasageri
			};
		} else 
			{
				[[_unit_afect,_life_time],"AL_fire\al_vehicle_fire_sfx_tank.sqf"] remoteExec ["execvm",0,true];
			}
} else 
	{
		[[_unit_afect,_life_time],"AL_fire\al_vehicle_fire_sfx.sqf"] remoteExec ["execvm",0,true];
		[_unit_afect,_life_time,_kill_vik] spawn 
		{
			_unit_afect = _this select 0;
			_life_time	= _this select 1;		
			_kill_vik	= _this select 2;		
			sleep _life_time;
			if (_kill_vik) then {_unit_afect setDamage 1}
		};
		_pasageri = fullCrew _unit_afect;
		if (count _pasageri > 0) then 
		{
			{
				if (isPlayer (_x select 0)) then {(_x select 0) setVariable ["set_on_fire",true,true]} else {_kill_time= 5+random 15; [_x select 0,_kill_time,30] execvm "AL_fire\al_unit_fire_car.sqf"}
			} forEach _pasageri
		};
	}