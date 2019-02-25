//function name:  CALC_INTERMEDIATE_POS.sqf
//Put this in init:   CALC_INTERMEDIATE_POS = compile preprocessFileLineNumbers "Scripts\CALC_INTERMEDIATE_POS.sqf";
//Example call:   _newPos = [dude, destPosition, 20] call CALC_INTERMEDIATE_POS;  
// 
private ["_unit","_dest","_segmentDistance"];

_unit = _this select 0;    
_dest = _this select 1;  
_segmentDistance = _this select 2;

_segmentDest = _dest;

if ((_unit distance _dest) > _segmentDistance) then
{
    _compassDir = [_unit, _dest] call BIS_fnc_dirTo;
    _newX = (getPos _unit select 0) + (sin _compassDir * _segmentDistance);
    _newY = (getPos _unit select 1) + (cos _compassDir * _segmentDistance);

    _newPos = [_newX, _newY, 0];
    
    _segmentDest = [(_newPos select 0)+(5-random(10)), (_newPos select 1)+(5-random(10)), 0];
};

_segmentDest