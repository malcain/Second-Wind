/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/

_entity = _this select 3;

if (isNull _entity) exitWith {};

player removeAction s_player_destroyVehicle;
s_player_destroyVehicle = -1;
player removeAction s_player_destroySafe;
s_player_destroySafe = -1;
player removeAction s_player_explodeRemoteVeh;
s_player_explodeRemoteVeh = -1;

_leaveReturn = ["Are you sure you would like to activate IED remote control of this vehicle? It's detonation is irreversible. ","Remote IED Vehicle Control",nil,true] call BIS_fnc_guiMessage;
if (!_leaveReturn) exitWith {};

_hasIED = "BP_IED1_Mag" in magazines player;
if (!_hasIED) exitWith {};

player removeMagazine "BP_IED1_Mag";

//_unitID = [(netID _entity),(netID player)] remoteExecCall ["BPServer_fnc_explodeRemControl",2];
[(netID _entity),(netID player)] remoteExecCall ["BPServer_fnc_explodeRemControl",2];

sleep 1;
//_unit = objectFromNetID _unitID;
_entity switchCamera "External";	// fix the camera to the vehicle and not to unit !

sleep 1;

_unit = driver _entity;
_unit addAction ["Detonate Vehicle", {[BP_characterID,(netID (_this select 3)),"Explode",(netID player)] remoteExecCall ["BPServer_fnc_deleteObj",2];},_entity, 0, false, true, "", ""];

waitUntil { sleep 1.5; !(alive _entity) || !(alive player) || isnull ((UAVControl _entity) select 0)};
	
objNull remoteControl _unit;		// removes the remoteControlling
sleep 1;
deletevehicle _unit;
sleep 0.5;

if (!isNull _entity && {alive _entity}) then {
	[BP_characterID,(netID _entity),"Explode",(netID player)] remoteExecCall ["BPServer_fnc_deleteObj",2];
};

sleep 1;
player switchCamera "internal";