// by ALIAS
// [leak] execvm "AL_Leaks\water_leak.sqf";
// null=[this] execvm "AL_Leaks\water_leak.sqf";

if (!isServer) exitWith {};
_leak_obj = _this select 0;
if (!isNil {_leak_obj getVariable "is_ON"}) exitWith {};
_leak_obj setVariable ["is_ON",true,true];
[[_leak_obj],"AL_Leaks\water_leak_sfx.sqf"] remoteExec ["execvm",0,true];