// JBOY_Dog_getEnemyFromArray.sqf
// **********************************************
// From input array of enemy candidates, return only those that are enemy of dog's side 
// **********************************************
if (!isServer)  exitwith {};
params["_sideDog","_potentialTargets"];
_enemies = [];
{
    if ([_sideDog, side _x] call BIS_fnc_sideIsEnemy and alive _x) then
    {
        _enemies pushBack _x;
    };
} foreach _potentialTargets;
_enemies
