// by ALIAS

private ["_source","_diameter","_life_time","_sleep_int"];

_source		= _this select 0;
_diameter	= _this select 1;
_life_time	= _this select 2;
//_hide_destr_veg	= _this select 3;
_hide_destr_veg	= true;

_obj_x = nearestTerrainObjects [position _source,list_vegetation,10];
_hide_veg = _obj_x;

if (count _obj_x >0) then 
{
	//_sleep_int = _life_time/(count _obj_x);
	sleep 5;
	while {count _obj_x > 0} do 
	{
		_jeton = _obj_x call BIS_fnc_selectRandom;
		_jeton setDamage [1,false];// _jeton enableSimulation false;
		_obj_x = _obj_x - [_jeton];
		sleep 1+random 2;
	};
};
sleep 5;
if (_hide_destr_veg) then {if (count _hide_veg >0) then {{_x hideObjectGlobal true; sleep 0.2} foreach _hide_veg}};