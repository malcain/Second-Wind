// by ALIAS

if (!isServer) exitWith {};

_grenade	= _this select 0;
_life_grd	= _this select 1;

[[_grenade],"AL_grenades\al_incendiary_grenade.sqf"] remoteExec ["execVM"];
waitUntil {vectorMagnitude velocity _grenade < 0.25};
sleep 1;

_lamps = nearestObjects [position _grenade,street_lapms,20];
_buildings_fly = nearestObjects [position _grenade,buildings_list,6];
[_grenade,6,_life_grd,false] execvm "AL_fire\al_damage_fire.sqf";
if (count _buildings_fly >0) then { {_x setDamage [(building_dam+getDammage _x),false]} foreach _buildings_fly};
if (count _lamps >0) then{[_lamps] spawn {_lamps = _this select 0; {_x setDamage 0.9} forEach _lamps}};

_timer = 0;
while {_timer < 29} do 
{
	_near_foc_footmobil = _grenade nearEntities [list_man,15];
	_vik_fly = nearestObjects [position _grenade,vik_list,7];
	if (count _vik_fly >0) then	{[_vik_fly] spawn {_vik_fly = _this select 0;{[_x,round (10+random 60),true,true] execVM "AL_fire\al_vehicle_fire.sqf";sleep round (1+random 3)} foreach _vik_fly}};
	if (count _near_foc_footmobil >0) then 
	{
		{
			if (!(_x in allPlayers_on)and(_x==(vehicle _x)))then 
			{
				if (_x distance _grenade <= 7) then 
				{
					if (isNil {_x getVariable "killed_by_fire"}) then {_x disableAI "FSM"; _rnd_lf = round(10+(random 20)); [_x,_rnd_lf,_rnd_lf-5] execVM "AL_fire\al_unit_fire.sqf"};
				};	
				_x setBehaviour "AWARE"; _x enableFatigue false; _x setUnitPos "UP"; _x setSkill ["commanding", 1];[_x] joinSilent grpNull;
				_reldir = _x getDir _grenade;
				_fct = [1,-1] call BIS_fnc_selectRandom;
				_avoid_foc = _grenade getPos [round(200+random 300),round(_reldir + 140 + (random 40)*_fct)];
				_x doMove _avoid_foc;
			}
		} foreach _near_foc_footmobil
	};
	sleep 5;
	_timer = _timer+4;
};
sleep 4;
deleteVehicle _grenade;