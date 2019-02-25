// by ALIAS

if (!isServer) exitWith {};
_al_grenade = _this select 0;
_rang_fire = 10;

_poz_g = position _al_grenade;
_list_man = _poz_g nearEntities [list_man_emp,_rang_fire];
_list_car = _poz_g nearEntities [list_car_emp,_rang_fire];
_list_lit = nearestObjects [_poz_g,list_light_emp,_rang_fire];
_list_build = nearestObjects [_poz_g,cladiri,_rang_fire];

_delay_check = 0.001;

{_x setDamage 1;sleep _delay_check} forEach _list_lit;
{[[_x],"AL_grenades\tgt_sfx.sqf"] remoteExec ["execVM"]; sleep _delay_check} forEach _list_car;
{
	[[_x],"AL_grenades\tgt_sfx.sqf"] remoteExec ["execVM"];
	if (emp_dam>0) then {_x setDamage ((getDammage _x) + emp_dam)};
	sleep _delay_check
} forEach _list_man;