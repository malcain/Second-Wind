// JBOY_DogSmashGrassLoop.sqf
if (!isServer)  exitwith {};
// dmy = [_dude] call JBOY_DogSmashGrassLoop;
params["_dude"];
// *************************************************************************************************
/*
To Do:
- Run one of these per tracking dog
- Start this loop if dog.scentTrailDetectionOn
- When do we restart this loop once tracking started?  After tracked prey is dead?
- How do we tell player trail split (two different prey to track)?
- What if handler choose to not Track this trail at this time?   When do we restart this loop?
   We don't want the dog to keep back into scentDetected mode for same trail when player chooses not to track...but player may want to track later?
   Maybe Track whimpers if no known ScentMarker for dog, or resumes tracking on Track if there is one.
   If encounters new trail (different prey), then option given to switch who to track (by direction), so maybe detection can keep running
   looking for new prey trail...

*/
_trailNear = false;
_yy = 0;
diag_log "JBOY_DogSmashGrassLoop START";
//while {(_dude getVariable "vCommand") in ["heel","moveThere"] and alive _dude and !_trailNear} do
_scentMarker = objNull;
while { alive _dude and !_trailNear } do
{
    if (true) then 
    {
        _scentMarkers = nearestObjects [_dude, ["Sign_Arrow_Large_Cyan_F"], 100] ;
        if ((count _scentMarkers) > 0) then
        {
            _scentMarker = _scentMarkers select 0;
            _trailNear = true;
        };
    };
    sleep 1;
};
_masher = createAgent ["C_man_p_beggar_F", [0,0,0], [], 0, "CAN_COLLIDE"];
//hideObject _masher;
_masher setUnitPos "DOWN";
_masher setDir (getDir _scentMarker);
_masher setBehaviour "CARELESS";
_masher allowDamage false;
_prey = _scentMarker getvariable "prey";
_firstMarker = _scentMarker;
waituntil {sleep 2; count (_prey getVariable "trail") > 4};
_trail = _prey getVariable "trail";

while { alive _dude and _scentMarker != (_trail select ((count _trail) - 1)) } do
{
    _trail = _prey getVariable "trail";
    _nextScentMarker = _trail select ((_trail find (_scentMarker)) +1);
diag_log [_scentMarker, _nextScentMarker];
diag_log [_trail];
    _masher setDir ([_scentMarker, _nextScentMarker] call BIS_fnc_dirTo);
    _masher setpos getpos _scentMarker;
    while {(_masher distance _nextScentMarker) > 1} do
    {
        _masher setpos (_masher modelToWorld [0,2.3,0]);
        sleep .3;
    };
diag_log [_scentMarker, (_trail select ((count _trail) - 1))];
    if (_scentMarker == (_trail select ((count _trail) - 1))) then
    {
        _scentMarker = _firstMarker;
    } else
    {
        _scentMarker = _nextScentMarker;
    };
diag_log [_firstMarker,  _scentMarker, _nextScentMarker];
    sleep .2;
};

diag_log "JBOY_DogSmashGrassLoop END";
