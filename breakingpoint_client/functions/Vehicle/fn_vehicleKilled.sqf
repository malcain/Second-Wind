/*
	Function: BP_fnc_vehicleKilled

	Parameters:
		0: Vehicle (OBJECT)
		1: Killer (OBJECT)
	
	Method: Call VIA Event Handler
*/

params ["_vehicle","_killer"];

if (isNull _vehicle) exitWith {};

["vehicleKilled: Vehicle: %1 | Killer: %2",_vehicle,_killer] call BP_fnc_debugConsoleFormat;


/*{
//_x action ["Eject",vehicle _x]; 
_veh = vehicle _x;
[["Eject",_veh] remoteExec ["action",_x];
_x setVariable ["fire",_x,true];
//sleep 0.1;
//[_x,2] remoteExecCall ["BP_fnc_medicalKnockDown",2];
[(netID _x),(netID _x),"Player"] remoteExecCall ["BPServer_fnc_igniteEntity",2];
} forEach crew _vehicle;*/

if (local _vehicle) then {
	{ 
		_x action ["Eject",_vehicle];
		//[_this,2] call BP_fnc_medicalKnockDown;
		//_x setVariable ["fire",_x,true];
		//[(netID _x),(netID _x),"Player"] remoteExecCall ["BPServer_fnc_igniteEntity",2];

	} forEach crew _vehicle;
	//Don't Use NetID Here to allow for both vehicles / event handlers to use the same code
	[_vehicle,_killer] remoteExecCall ["BP_fnc_vehicleKilled",2];
};

//Commented These because they are global
//_vehicle removeAllMPEventHandlers "MPKilled";
//_vehicle removeAllMPEventHandlers "MPHit";
//_vehicle removeAllMPEventHandlers "MPRespawn";
_vehicle removeAllEventHandlers "FiredNear";
_vehicle removeAllEventHandlers "HandleDamage";
_vehicle removeAllEventHandlers "Explosion";
_vehicle removeAllEventHandlers "Killed";
_vehicle removeAllEventHandlers "Fired";
_vehicle removeAllEventHandlers "GetOut";
_vehicle removeAllEventHandlers "GetIn";
_vehicle removeAllEventHandlers "Local";
_vehicle removeAllEventHandlers "Engine";