/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/

params ["_campFire",["_isTerrainObj",false]];

[player,100,true,(getPosATL player)] spawn BP_fnc_zombieAlert;

if (_isTerrainObj) exitwith {
	player removeAction s_player_igniteCampFire;
	s_player_igniteCampFire = -1;
	//Create new
	_pos = getposATL _campFire;
	_dir = getDir _campFire;
	BP_hasFire = createVehicle ["BP_LargeCampFire", _pos, [], 0, "CAN_COLLIDE"];
	BP_hasFire setDir _dir;
	BP_hasFire enableDynamicSimulation true;
	BP_hasFire inflame true;

	player reveal BP_hasFire;
	
	[(netID BP_hasFire),(netID _campFire)] remoteExecCall ["BPServer_fnc_cleanupCampFire",2];
};

//diag_log format ["Campfire Cleanup %1", _campFire];

waituntil {sleep 5; (isnull _campFire or {inflamed _campFire})};

if (isnull _campFire) exitwith {};

[(netID _campFire)] remoteExecCall ["BPServer_fnc_cleanupCampFire",2];