// JBOY_getNearEnemies.sqf
// **********************************************
// Get alive near targets (men or animals).  nearEntities command only returns living objects.
// **********************************************
if (!isServer)  exitwith {};
params["_man","_radius"];
_nearEntities = [];
_nearEntities = _man nearEntities ["CAManBase", _radius];
_nearTargets = [];
{
    if (([side _man, side _x] call BIS_fnc_sideIsEnemy) 
         and alive _x 
         //and side _man knowsabout _x
         ) then
    {
        _nearTargets pushBack _x;
    };
} foreach _nearEntities;
diag_log ["in JBOY_getNearEnemies",_nearTargets];
_nearTargets
