// by ALIAS

if (!isServer) exitWith {};

_grenade	= _this select 0;
_life_grd	= _this select 1;

//waitUntil {vectorMagnitude velocity _grenade < 0.25};
sleep 2;
[[_grenade],"AL_grenades\al_stun_grenade.sqf"] remoteExec ["execVM"];

_near_foc_footmobil = _grenade nearEntities [list_man,15];

	if (count _near_foc_footmobil >0) then 
	{
		{
			if !(_x in allPlayers_on) then 
			{
				if (_x != vehicle _x) then {} else 
				{
					_tipat = ["NoSound","NoSound","01","NoSound","NoSound","04","NoSound","NoSound"] call BIS_fnc_selectRandom;
					_x disableAI "ALL";
					_move = ["ApanPknlMstpSnonWnonDnon_G02","ApanPknlMstpSnonWnonDnon_G01","ApanPknlMstpSnonWnonDnon_G03"] call BIS_fnc_selectRandom;
					[_x, _move] remoteExec ["switchMove"];
					[_x,_tipat] remoteExec ["say3d"];
				}
			}
		} foreach _near_foc_footmobil
	};			
sleep _life_grd;
deleteVehicle _grenade;
sleep 5;
{if (alive _x) then {_x switchMove "";_x enableAI "ALL"}} foreach _near_foc_footmobil;
