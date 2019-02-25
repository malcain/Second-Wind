// JBOY_watchNextWP.sqf
// Put this in waypoint where unit pauses, and he will look to next waypoint.
//_null = [this] call JBOY_watchNextWP;
if (!isServer)  exitwith {};
params["_unit"];
_grp = group _unit;
_index = currentWaypoint _grp;
_nextWPpos = [];
if ((count waypoints _grp) == _index) then
{
    _nextWPpos = waypointPosition [_grp,0];
} else {
    _nextWPpos = waypointPosition [_grp,_index + 1];
};
_unit dowatch _nextWPpos;
