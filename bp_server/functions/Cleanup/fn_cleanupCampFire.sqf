params ["_campFireID","_worldCampFireID"];

_campFire = objectFromNetID _campFireID;
_worldCampFire = objectFromNetID _worldCampFireID;

if (isNull _campFire) exitWith {};

if (!isNull _worldCampFire) then {
_worldCampFire hideObjectGlobal true;
};

_campFire spawn {

_campFire = _this;

sleep 40;
if (isnull _campFire or {!inflamed _campFire}) exitWith {};

_pos = getposATL _campFire;
_eFire = "#particlesource" createVehicle position _campFire; 
_eFire setParticleClass "MediumFireBP"; 
_eFire setPosATL _pos;
//_fireplace = createVehicle ["Land_HelipadEmpty_F", _pos, [], 0, "CAN_COLLIDE"];

_eSmoke = "#particlesource" createVehicle position _campFire; 
_eSmoke setParticleClass "MediumDestructionSmoke"; 
_eSmoke setPosATL _pos;

sleep 15;

if (isnull _campFire or {!inflamed _campFire}) exitWith {
	deleteVehicle _eFire;
	deleteVehicle _eSmoke;
};
_burntGround = createVehicle ["Land_DirtPatch_01_4x4_F", _pos, [], 0, "CAN_COLLIDE"]; //Land_DirtPatch_05_F
_burntGround setDir (random 360);

sleep 75;

deleteVehicle _eFire;
deleteVehicle _eSmoke;
//deleteVehicle _fireplace;
if (!isNull _campFire) then {
	deleteVehicle _campFire;
};

};