//////////////////////////////////////////////////////////
// JBOY_getClosestObjFromArray.sqf
// Created by: johnnyboy
//
params["_dude","_nearObjects"];
_nearestObj = objNull;
_lastDistance = 9999999;
{
    if ((_x distance _dude) <_lastDistance and alive _x) then
    {
        _nearestObj = _x;
        _lastDistance = _x distance _dude;
    };
} foreach _nearObjects;
_nearestObj
