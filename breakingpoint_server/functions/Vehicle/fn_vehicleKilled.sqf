params ["_vehicle","_killer"];

if (isNull _vehicle) exitWith {};

//Fetch UID
_objectUID = _vehicle getVariable ["ObjectUID","0"];

//Log Destruction
["vehicleKilled(remoteexec): Vehicle: %1 | Killer: %2",_vehicle,_killer] call BP_fnc_debugConsoleFormat;

/*_nearbyPlayers = crew _vehicle;
{
_x action ["Eject",vehicle _x];
_x setVariable ["fire",_x, true];
[_x,5] spawn BP_fnc_medicalKnockDown;
[(netID _x),(netID _x),"Player"] remoteExecCall ["BPServer_fnc_igniteEntity",2];
} forEach _nearbyPlayers;*/

//Remove All Event Handlers
_vehicle removeAllEventHandlers "FiredNear";
_vehicle removeAllEventHandlers "HandleDamage";
_vehicle removeAllEventHandlers "Killed";
_vehicle removeAllEventHandlers "Local";
_vehicle removeAllEventHandlers "Fired";
_vehicle removeAllEventHandlers "GetOut";
_vehicle removeAllEventHandlers "GetIn";
_vehicle removeAllEventHandlers "Local";

//Add To Destroy Queue
[_object] call BPServer_fnc_destroyQueueAdd;

//Save Vehicle as Destroyed
["CHILD:501:%1:",_objectUID] call BPServer_fnc_callExtensionAsync;