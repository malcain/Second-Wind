//////////////////////////////////////////////////////////
// JBOY_getFreshestScentMarker.sqf
// Created by: johnnyboy
//
params["_dog","_currentMarker","_scentMarkerArray"];
_nearestObj = objNull;
_lastTime = _currentMarker getvariable "dropTime";
{
//hint format ["(_x getvariable dropTime)=%1, _lastTime=%2, _x=%3, _currentMarker=%4, _scentMarkerArray=%5",(_x getvariable "dropTime"),_lastTime, _x, _currentMarker, _scentMarkerArray];
//diag_log  ["(_x getvariable dropTime)=%1, _lastTime=%2, _x=%3, _currentMarker=%4, _scentMarkerArray=%5",(_x getvariable "dropTime"),_lastTime, _x, _currentMarker, _scentMarkerArray];
    if ((_x getvariable "dropTime") > _lastTime) then
    {
        _nearestObj = _x;
        _lastTime = _x getvariable "dropTime";
    };
} foreach _scentMarkerArray;
_nearestObj
