if (!isNull objectParent player) exitWith {surface_obj setpos [0,0,0]};

_ins = lineIntersectsSurfaces [AGLToASL (player modelToWorld [0, 0, 1]),AGLToASL (player modelToWorld [0, 0, -0.2]),player,surface_obj,true,1,"GEOM","NONE"];

if (count _ins isEqualTo 0) exitWith {surface_obj setpos [0,0,0]};

(_ins select 0) params ["_pos", "_surfno", "_obj"];

if (isNull _obj) exitWith {surface_obj setpos [0,0,0]};

surface_obj setMass 0;
surface_obj setPosASL _pos;
surface_obj setVectorUp _surfno;
_obj disableCollisionWith surface_obj;