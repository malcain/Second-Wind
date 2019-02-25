/* ----------------------------------------------------------------------------
Function: AZC_fnc_Delete
Author: AZCoder
Version: 2.0
Created: 10/25/2015
Dependencies: AZC_fnc_Delete (this function must be able to call itself with this name)
Description:
	Deletes objects, markers, groups provided as a parameter (single or array). Removes crew in the case of vehicles in addition to the vehicles.
	
Parameters:
	_objArray	-- a subarray of types object, marker, group, or array of objects/groups to delete (see examples)
	_distance	-- (optional) distance from player before deleting (default: not checked)
	_wait		-- (optional) seconds to wait before deleting (default: 0 seconds)

Returns: nothing.

Examples:
	// the following would delete an object named helo1, a group of tanks, and a marker
	// once the player is 500m or greater in distance, and a minimum of 10 seconds has passed
	[[helo1,grpTank,"mrkSpawnPoint"],500,10] spawn AZC_fnc_Delete;
---------------------------------------------------------------------------- */
private ["_objArray","_object","_distance","_wait"];
_objArray = _this select 0;
if (count _this > 1) then { _distance = _this select 1; } else { _distance = 0; };
if (count _this > 2) then { _wait = _this select 2; } else { _wait = 0; };

// need to determine if array of objects/groups was passed, or just a single item
_object = _objArray;
if (typeName _objArray == "ARRAY") then
{
	if (count _objArray == 1) then
	{
		_object = _objArray select 0;
	};
};

switch (typeName _object) do
{
	case "STRING": 	{
						[_object,_distance,_wait] spawn
						{
							private ["_timer"];
							_timer = time + (_this select 2);
							waitUntil { (player distance (getMarkerPos (_this select 0)) > (_this select 1)) && (time > _timer) };
							deleteMarker (_this select 0);
						};
					};

	case "OBJECT": 	{
						[_object,_distance,_wait] spawn
						{
							private ["_timer","_obj"];
							_obj = _this select 0;
							_timer = time + (_this select 2);
							waitUntil { (player distance (getPos _obj) > (_this select 1)) && (time > _timer) };
							{ deleteVehicle _x; } forEach crew _obj + [_obj];
						};
					};

	case "GROUP":	{
						[_object,_distance,_wait] spawn
						{
							private ["_timer","_obj","_lead"];
							_obj = _this select 0;
							_lead = (units _obj select 0);
							_timer = time + (_this select 2);
							waitUntil { (player distance (getPos _lead) > (_this select 1)) && (time > _timer) };
							{
								deleteVehicle (vehicle _x);
								deleteVehicle _x;
							} forEach units _obj;
							deleteGroup _obj;
						};
					};

	case "ARRAY":	{ 
						// recursive call if array passed as parameter for _objArray
						{ [[_x],_distance,_wait] call AZC_fnc_Delete; } forEach _object;
					};
};
