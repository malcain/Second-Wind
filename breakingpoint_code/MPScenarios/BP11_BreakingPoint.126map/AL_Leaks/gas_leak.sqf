// by ALIAS

if (!isServer) exitWith {};
_obj_leak = _this select 0;
_unghi	  = _this select 1;
_damag	  = _this select 2;
_color	  = _this select 3;

if (!isNil {_obj_leak getVariable "is_ON"}) exitWith {};
_obj_leak setVariable ["is_ON",true,true];
[[_obj_leak,_unghi,_damag,_color],"AL_Leaks\gas_leak_effect.sqf"] remoteExec ["execvm",0,true];