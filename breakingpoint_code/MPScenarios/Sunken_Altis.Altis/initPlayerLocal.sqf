/*execVM "AL_farty\al_ini_fnc_toxic.sqf"
// by ALIAS
waitUntil {!isNil "enable_emp_grenade"};
if (enable_toxic_grenade) then {execVM "AL_grenades\al_ini_toxic.sqf"};
if (enable_incendiary_grenade) then {execVM "AL_grenades\al_ini_incendiary.sqf"};

waitUntil {!isNil "allPlayers_on"};

player addEventHandler ["Fired",{private ["_al_throwable"]; _al_throwable = _this select 6; _shooter = _this select 0;
[_al_throwable,_shooter,"Chemlight_red","Chemlight_blue","Chemlight_green","Chemlight_yellow"] execvm "AL_grenades\al_grenade.sqf"}];

//["ace_firedPlayer", {private ["_al_throwable"]; _al_throwable = _this select 6; _shooter = _this select 0;
//[_al_throwable,_shooter,"Chemlight_red","Chemlight_blue","Chemlight_green","Chemlight_yellow"] execvm "AL_grenades\al_grenade.sqf"}] call CBA_fnc_addEventHandler; 

//["Fired", {private ["_al_throwable"]; _al_throwable = _this select 6; _shooter = _this select 0;
//[_al_throwable,_shooter,"Chemlight_red","Chemlight_blue","Chemlight_green","Chemlight_yellow"] execvm "AL_grenades\al_grenade.sqf"}] call BP_fnc_fired; 
//_unit addEventHandler ["Fired", {_this call BP_fnc_fired;}];
