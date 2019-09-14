// by ALIAS

if (!isServer) exitWith {};
_obj_leak = _this select 0;
_ob_sound = _this select 1;
if (!isNil {_obj_leak getVariable "is_ON"}) exitWith {};
_obj_leak setVariable ["is_ON",true,true];
[[_obj_leak,_ob_sound],"AL_Leaks\cave_leak_effect.sqf"] remoteExec ["execvm",0,true];