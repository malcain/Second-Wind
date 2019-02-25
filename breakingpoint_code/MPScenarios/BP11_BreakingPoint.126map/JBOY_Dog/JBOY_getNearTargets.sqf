// JBOY_getNearTargets.sqf
// **********************************************
// Get alive near targets (men or animals).  nearEntities command only returns living objects.
// 
// **********************************************
if (!isServer)  exitwith {};
params["_pos","_objTypes","_radius"];
_nearTargets = [];
if ("CAManBase" in _objTypes) then
{
    _nearTargets = _pos nearEntities ["CAManBase", _radius];
};
if (count _nearTargets == 0) then {
    _nearTargets = _pos nearEntities [_objTypes, _radius];
};
_returnTargets = [];
{if (isNull attachedTo _x) then {_returnTargets pushBack _x;};} foreach _nearTargets;
//hint format ["_returnTargets=%1",_returnTargets];
_returnTargets
