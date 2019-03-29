

_veh = _this select 0;
_caller = _this select 1;

//_vehPos = (GetPos _veh);
_getOutPos = (_veh ModelToWorld (_veh SelectionPosition 'cargoramp'));  // get world pos from model ramp selection
_vehDirBack = ((GetDir _veh) - 180);

// get safe pos behind ramp
_getOutPos = [(_getOutPos select 0) + ((sin _vehDirBack)*3), (_getOutPos select 1) + ((cos _vehDirBack)*3), (_getOutPos select 2) - 1];

//_caller Action ['GetOut', _veh];
TitleText['','BLACK OUT'];
UnassignVehicle _caller;
//_caller EnableCollisionWith _veh;
MoveOut _caller;
if !( SurfaceIsWater(_getOutPos) ) then { _caller SetPos _getOutPos; } else { _caller SetPosASL _getOutPos; };
_caller SetDir _vehDirBack;
_caller SwitchMove 'GetOutHelicopterCargoRfl';
TitleText['','BLACK IN'];
Sleep 2;
//_caller DisableCollisionWith _veh;  // broken command?


//GetInHelicopterCargoRfl
