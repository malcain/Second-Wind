// by ALIAS

if (!isServer) exitWith {};

_grenade	= _this select 0;
//_life_grd	= _this select 1;

waitUntil {vectorMagnitude velocity _grenade < 0.25};
sleep 1;
[[_grenade],"AL_grenades\al_emp_grenade.sqf"] remoteExec ["execVM"];

_near_foc_footmobil = _grenade nearEntities [list_man,30];
_vik_fly = nearestObjects [position _grenade,vik_list,30];
_lamps = nearestObjects [position _grenade,street_lapms,30];
_turrets = nearestObjects [position _grenade,static_turrets_emp,30];

if (count _lamps >0) then
{
	[_lamps] spawn 
	{
		_lamps = _this select 0;
		{_x setDamage 0.9; [[_x],"AL_grenades\emp_sparky.sqf"] remoteExec ["execVM"]; sleep 0.1} forEach _lamps
	};
};

if (count _vik_fly >0) then
{
	[_vik_fly] spawn 
	{
		_vik_fly = _this select 0;
		{_x disableTIEquipment true; _x disableNVGEquipment true;_x setHitPointDamage ["hitturret",1]; _x setHitPointDamage ["hitEngine",1]; _x disableTIEquipment true; _x disableNVGEquipment true; [[_x],"AL_grenades\emp_tgt_sfx.sqf"] remoteExec ["execVM"]; sleep 0.1} forEach _vik_fly
	};
};

if (count _turrets >0) then
{
	[_turrets] spawn 
	{
		_turrets=_this select 0;
		{_x setDamage 1;[[_x],"AL_grenades\emp_sparky.sqf"] remoteExec ["execVM"];sleep 0.1} forEach _turrets
	};
};

if (count _near_foc_footmobil >0) then
{
	{
		//if !(_x in allPlayers_on) then 
		//{
			[[_x],"AL_grenades\emp_tgt_sfx.sqf"] remoteExec ["execVM"];
			removeGoggles _x; _x removeWeaponGlobal "Rangefinder"; _x removeWeaponGlobal "Laserdesignator"; _x removeItem "Rangefinder"; _x unassignItem "ItemGPS"; _x removeItem "ItemGPS"; _x unassignItem "ItemRadio"; _x removeItem "ItemRadio";
			_x unassignItem "NVGoggles"; _x removeItem "NVGoggles"; _x unassignItem "NVGoggles_OPFOR"; _x removeItem "NVGoggles_OPFOR"; _x unassignItem "NVGoggles_INDEP"; _x removeItem "NVGoggles_INDEP";
			_x unassignItem "O_NVGoggles_hex_F"; _x removeItem "O_NVGoggles_hex_F"; _x unassignItem "O_NVGoggles_urb_F"; _x removeItem "O_NVGoggles_urb_F"; _x unassignItem "O_NVGoggles_ghex_F"; _x removeItem "O_NVGoggles_ghex_F";
			_x unassignItem "NVGoggles_tna_F"; _x removeItem "NVGoggles_tna_F"; _x unassignItem "NVGogglesB_blk_F"; _x removeItem "NVGogglesB_blk_F"; _x unassignItem "NVGogglesB_grn_F"; _x removeItem "NVGogglesB_grn_F";
			_x unassignItem "NVGogglesB_gry_F"; _x removeItem "NVGogglesB_gry_F"; _x unassignItem "Integrated_NVG_F"; _x removeItem "Integrated_NVG_F"; _x unassignItem "Integrated_NVG_TI_0_F"; _x removeItem "Integrated_NVG_TI_0_F";
			_x unassignItem "Integrated_NVG_TI_1_F"; _x removeItem "Integrated_NVG_TI_1_F"; _x removePrimaryWeaponItem "acc_pointer_IR"; 		
			if (headgear _x in special_helmet_emp) then {removeHeadgear _x};
			if (secondaryWeapon _x in special_launchers_emp) then {_x removeWeaponGlobal (secondaryWeapon _x)};
			if (_x distance _grenade< 13) then 
			{
				_say_some = [true, false] call BIS_fnc_selectRandom;
				if (_say_some) then {_x say3D ["electrocuted",100]};
				_x setDamage ((getDammage _x) + emp_damage);
				_gun = currentWeapon _x;
				if (!isNil "_gun") then {_wh = "GroundWeaponHolder_Scripted" createVehicle position _x; _x action ["DropWeapon", _wh, currentWeapon _x]};
			};
			_x setBehaviour "AWARE"; _x enableFatigue false; _x forcespeed 10;_x setUnitPos "UP"; _x setSkill ["commanding", 1];[_x] joinSilent grpNull;
			_reldir = _x getDir _grenade;
			_fct = [1,-1] call BIS_fnc_selectRandom;
			_avoid_tox = _grenade getPos [20+random 20,(_reldir + 140 + (random 40)*_fct)];
			_x doMove _avoid_tox;
		//}
	} foreach _near_foc_footmobil
};

hideObjectGlobal _grenade;
sleep 5;
deleteVehicle _grenade;