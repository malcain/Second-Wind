// by ALIAS

if (!isServer) exitWith {};

_grenade	= _this select 0;
_life_grd	= _this select 1;

waitUntil {vectorMagnitude velocity _grenade < 0.25};
sleep 0.5;
[[_grenade],"AL_grenades\al_toxic_grenade.sqf"] remoteExec ["execVM"];
_timer = 0;

while {_timer < _life_grd} do 
{
	_near_foc_footmobil = _grenade nearEntities [list_man,30];
	_vik_fly = nearestObjects [position _grenade,vik_list,30];
	
	{
		_pasageri = fullCrew _x;
		if (count _pasageri > 0) then 
		{
			{if !(isPlayer (_x select 0)) then {_near_foc_footmobil=_near_foc_footmobil+[_x select 0]}} foreach _pasageri
		};
	} foreach _vik_fly;
	//hint str (count _near_foc_footmobil);
	if (count _near_foc_footmobil >0) then 
	{
		{
			if !(_x in allPlayers_on) then 
			{
				if ((headgear _x == tox_prot)or(goggles _x==tox_prot)or(uniform _x==tox_prot)or(vest _x==tox_prot)or(Backpack _x==tox_prot) or (tox_prot in (assigneditems _x + items _x))) then
				{} else 
				{
				if (_x distance _grenade <= 15) then 
				{
					_tuse=["NoSound","NoSound","tuse_1","NoSound","NoSound","tuse_2","NoSound","NoSound","tuse_3","NoSound","NoSound","tuse_4","NoSound","NoSound","tuse_5","NoSound","NoSound","tuse_6","NoSound","NoSound","tuse_7","NoSound","NoSound","tuse_8","NoSound","NoSound","tuse_9","NoSound","NoSound","tuse_91","NoSound","NoSound","tuse_92","NoSound","NoSound","tuse_93","NoSound","NoSound"] call BIS_fnc_selectRandom;
					[_x,[_tuse,100]] remoteExec ["say3d"];
					_x setDamage (tox_damage+(getDammage _x));
					_x setSkill ["aimingAccuracy", 0.01];
				};
				_x setBehaviour "AWARE"; _x enableFatigue false; _x forcespeed 10;_x setUnitPos "UP"; _x setSkill ["commanding", 1]; [_x] joinSilent grpNull;
				_reldir = _x getDir _grenade;
				_fct = [1,-1] call BIS_fnc_selectRandom;
				_avoid_tox = _grenade getPos [100+random 100,(_reldir + 140 + (random 40)*_fct)];
				_x doMove _avoid_tox;
				};
			}
		} foreach _near_foc_footmobil
	};
	sleep 1;
	_timer = _timer+1;
};
deleteVehicle _grenade;