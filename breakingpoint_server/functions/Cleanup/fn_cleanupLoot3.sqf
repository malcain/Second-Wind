scriptName "BP_fnc_cleanupLoot3";

// Loot 3.0 vehicle
{
	//if (_x getVariable ["spawned",true]) then {
		_nearby = [(getPosATL _x),175] call BP_fnc_nearbyPlayers;
		if (!_nearby) then { 
			_x setVariable ["spawned",false,true];
		};
	//};
} count entities "Land_House_Logic";

//Update Timer
//BP_Cleanup_lastLoot3_0 = diag_tickTime;