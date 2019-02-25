// by ALIAS

_al_throwable = _this select 0;
_shooter	  = _this select 1;
_ince_grenade = _this select 2;
_emp_grenade  = _this select 3;
_toxi_grenade = _this select 4;
_stun_grenade = _this select 5;

switch (typeOf _al_throwable) do 
{
	case _emp_grenade: {if (enable_emp_grenade) then{[[_al_throwable], "AL_grenades\al_emp_life.sqf"] remoteExec ["execVM"]}};
	case _stun_grenade: {if (enable_stun_grenade) then{[[_al_throwable,5], "AL_grenades\al_stun_life.sqf"] remoteExec ["execVM"]}};
	case _toxi_grenade: {if (enable_toxic_grenade) then{[[_al_throwable,22], "AL_grenades\al_toxic_life.sqf"] remoteExec ["execVM"]}};
	case _ince_grenade: {if (enable_incendiary_grenade) then {[[_al_throwable,34], "AL_grenades\al_incend_life.sqf"] remoteExec ["execVM"]}};
};