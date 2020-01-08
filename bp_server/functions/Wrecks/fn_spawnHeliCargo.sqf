/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/

private ["_waypointObj","_waypointPos","_positionEnd","_preWaypointPos","_wp","_index","_RandStartPos","_preWaypoints","_crashDamage","_heliModel","_crashModel","_heliStart","_crashName","_lootTable","_positionEnd","_crashwreck","_landingzone","_aigroup","_helipilot","_pos","_crash","_num","_config","_weights"];

//_RandStartPos = getArray (missionConfigFile >> "BreakingPoint" >> "CfgSettings" >> "HeliCrash" >> "RandStartPos");
_RandStartPos = [[random worldSize, -800, 400],[-800, random worldSize, 400],[random worldSize, worldSize + 800, 400],[worldSize + 800, random worldSize, 400]];
_waypointObj = _this select 0;
_waypointPos = (getPosATL _waypointObj) findEmptyPosition [0,100];
_preWaypoints = 1;

_crashDamage = 0.25;

//_models = selectRandom BP_CargoCrashModels;
_models = ["BP_Chinook","Land_Wreck_Transport_BP"];

_heliModel = _models select 0;
_crashModel = _models select 1;

//Random-Startpositions
_heliStart = selectRandom _RandStartPos;

_crashName = getText (configFile >> "CfgVehicles" >> _heliModel >> "displayName");
_lootTables = getArray (configFile >> "CfgHelicrash" >> "loots");
_lootTable = selectRandom _lootTables;

//Select Random Position and Delete it out of the array
//_roll = floor random (count BP_CargoCrashCrashpoints);
//_positionEnd = BP_CargoCrashCrashpoints deleteAt _roll;
_positionEnd = [-800,random 11000,0];

["spawnCargoHeli: model %1 %2 started flying from %3 to %4 NOW!(TIME:%5||LT:%6)~0001", _heliModel, _crashName, _heliStart, _waypointPos, round(time), _lootTable] call BP_fnc_debugConsoleFormat;

//Spawn the AI-Heli flying in the air
_crashwreck = createVehicle [_heliModel,_heliStart, [], 0, "FLY"];
_crashwreck setVariable ["permaLoot",true];
_crashwreck engineOn true;
_crashwreck flyInHeight 80;
_crashwreck forceSpeed 320;
_crashwreck setSpeedMode "FULL";
_crashwreck allowDamage false;

//Create an Invisible Landingpad at the Crashside-Coordinates
_landingzone = createVehicle ["Land_HelipadEmpty_F", [_positionEnd select 0, _positionEnd select 1,0], [], 0, "CAN_COLLIDE"];

//Only a Woman could crash a Heli this way...
_aigroup = createGroup civilian;
_helipilot = _aigroup createUnit ["C_man_polo_BP",getPos _crashwreck,[],0,"FORM"];
_helipilot setVariable ["permaLoot",true,true];
_helipilot moveInDriver _crashwreck;
_helipilot assignAsDriver _crashwreck;
_helipilot allowDamage false;

//Delay for Init
sleep 0.5;

//Add Waypoint
_preWaypointPos = _waypointPos;
if (!surfaceIsWater _preWaypointPos) then {
	//Create Care Pkg
	_carePkg = "BP_CarePkg" createVehicle (getPosATL _crashwreck);
	[_carePkg,"CarePackage",11,15] call BP_fnc_spawnLootBox;
	_carePkg allowDamage false;
	_carePkg setVariable ["permaLoot",true,true];
	_crashwreck setSlingLoad _carePkg;
	["spawnCrashSite: Adding Pre-POC-Waypoint #%1 on %2~0001", _preWaypointPos,str(_preWaypointPos)] call BP_fnc_debugConsoleFormat;
	_wp = _aigroup addWaypoint [_preWaypointPos,0];
	_wp setWaypointType "MOVE";
	_wp setWaypointBehaviour "CARELESS";
	//Wait Until Near Waypoint
	["spawnCrashSite: Waiting Until Reached Waypoint Pos %1",_preWaypointPos] call BP_fnc_debugConsoleFormat;
	waituntil {sleep 2; ((getPosATL _crashwreck) distance _preWaypointPos) <= 150};
	["spawnCrashSite: Reached Waypoint Pos %1",_preWaypointPos] call BP_fnc_debugConsoleFormat;
	//Delay 2 Seconds to get to a closer position to the waypoint
	sleep 2;

	//Drop Care Pkg
	_cargo = (getSlingLoad _crashwreck);
	_cargoPos = (getPos _cargo);
	["spawnCrashSite: Preparing to Drop Cargo %1 @ Position %2",_cargo,_cargoPos] call BP_fnc_debugConsoleFormat;
	if (!isNull _cargo) then {
		//Cut The Ropes Of Sling Load
		["spawnCrashSite: Cutting Ropes %1",(ropes _crashwreck)] call BP_fnc_debugConsoleFormat;
		{ ropeCut [_x, 5]; } count (ropes _crashwreck);

		//Delay deployment of parachute to allow the package to gain some distance from the chopper
		sleep 2.5;

		//Create Parachute
		["spawnCrashSite: Deploying Parachute"] call BP_fnc_debugConsoleFormat;
		//_para = "B_Parachute_02_F" createVehicle [0, 0, 10000];
		_para = createVehicle ["B_Parachute_02_F", [0,0,0], [], 0, "FLY"];
		_para setDir getDir _cargo;
		_para setPos getPos _cargo;
		//_cargo attachTo [_para, [0,2,0]];
		_cargo attachTo [_para, [0,0,0.9]];

		//Handle Parachute Cleanup when Crate Hits Ground
		_handle = [_para,_cargo] spawn {
			_para = _this select 0;
			_cargo = _this select 1;

			//Wait Until Cargo Touching Ground
			_fallTime = diag_tickTime;
			waitUntil {sleep 1;((getPosATL _cargo) select 2 < 1 || (isTouchingGround _cargo) || ((diag_tickTime - _fallTime) > 25))};

			//Deattach Crate and Delete Parachute
			detach _cargo;
			deleteVehicle _para;

			//Start Smoke
			//_smokeObj = createVehicle ["BP_SmokeShell", [0, 0, 0], [], 0, "CAN_COLLIDE"];
			//_smokeObj attachTo [_cargo, [0,0.4,0]];
			//_smokeObj setVariable ["permaLoot",true];
			//Chemlight
			//if (SunOrMoon < 1) then {
				_chemClassRnd = selectRandom ["Chemlight_blue","Chemlight_yellow","Chemlight_red"];
				_supplyLight =  createVehicle [_chemClassRnd, [0, 0, 0], [], 0, "CAN_COLLIDE"];
				_supplyLight attachTo [_cargo, [0,0.4,0]];
			//};
		};
	};
};

["spawnCrashSite: Landing Zone: %1",(position _landingzone)] call BP_fnc_debugConsoleFormat;

_wp = _aigroup addWaypoint [position _landingzone,0];
_wp setWaypointType "MOVE";
_wp setWaypointBehaviour "CARELESS";
_crashwreck forceSpeed 360;

sleep 15;
if (speed _crashwreck < 5) exitWith {
	_helipilot setDamage 1;
	_crashwreck setDamage 1;
};

//Get some more Speed when close to the Crashpoint and go on even if Heli died or hit the ground
waituntil {sleep 2; (_crashwreck distance _positionEnd) <= 150 || not alive _crashwreck || (getPosATL _crashwreck select 2) < 5 || (damage _crashwreck) >= _crashDamage};

_crashwreck flyInHeight 50;
//_crashwreck forceSpeed 15;
//_crashwreck setSpeedMode "LIMITED";

_crashwreck engineOn false;
_crashwreck setFuel 0;

sleep 5;

//Giving the crashed Heli some time to find its "Parkingposition"
_helipilot setDamage 1;
_crashwreck setDamage 1;

//Enough time to fall to ground level
_fallTime = diag_tickTime;

waitUntil {sleep 1; isTouchingGround _crashwreck || ((diag_tickTime - _fallTime) > 30)};

["spawnCrashSite: %1 just exploded at %2!, ~0001", _crashName, str(getPosATL _crashwreck)] call BP_fnc_debugConsoleFormat;

//Get position of the helis wreck, but make sure its on the ground;
_pos = [getPos _crashwreck select 0, getPos _crashwreck select 1,0];
//_pos = getPosATL _crashwreck;

sleep 5;

//Clean Up the Crashsite
deleteVehicle _crashwreck;
deleteVehicle _helipilot;
deleteVehicle _landingzone;

["spawnCrashSite: Cleaned up Cargo Heli %1 @ %2...~0001",_crashModel,_pos] call BP_fnc_debugConsoleFormat;
