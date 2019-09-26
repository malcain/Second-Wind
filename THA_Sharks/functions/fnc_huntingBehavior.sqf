/*
	Author: Jon Hillenbrand - FEINT <http://www.FEINTGAMES.com/Contact>

	Description:
	This script switches between the default Arma AI fish behavior and the hunting behavior.

	This is called by init_shark.sqf

	Parameter(s):
	_this select 0:	OBJECT - Controlled animal (THE SHARK).

*/

private ["_shark","_debug","_nearestTarget","_positionTarget","_waterDepth","_distance","_relativeDir","_targetPos","_dayOrNight","_attackVariable","_manDirection","_sharkDir","_nearestTargetDir","_newDir","_damage","_pen"];
_shark = _this select 0;
_debug = false;

for "_i" from 1 to 12 step 0 do
{

	//disable animal behaviour
	//_shark setVariable ["BIS_fnc_animalBehaviour_disable", true];

	if (_debug) then {player sideChat "Sharky searching"};

	_nearestTarget = objNull;
	_nearTargets = _shark nearEntities [["BP_Player","BP_Dog","Tuna_F","Turtle_F","Mullet_F"], 275];
	if (count _nearTargets > 0) then {
		_nearestTarget = selectRandom _nearTargets;
	};
	
	/*_nearestTarget = getPos _shark nearestObject "Tuna_F";
	//if (_nearestTarget isEqualTo objNull) then {_nearestTarget = getPos _shark nearestObject "Mackerel_F"};
	//if (_nearestTarget isEqualTo objNull) then {_nearestTarget = getPos _shark nearestObject "Salema_F"};*/

	//Target found check
	if !(_nearestTarget isEqualTo objNull) then
	{

		//Out of water check
		_targetDepth = (getPosASLW _nearestTarget) select 2;
		if ((isTouchingGround (vehicle _nearestTarget)) or (vehicle _nearestTarget != _nearestTarget) or (_targetDepth > -1.4)) exitWith {
			//Roaming
			_myPlaces = selectBestPlaces [position _shark, 125, "waterDepth interpolate [2,3,0,1]", 5, 50];
			_roamPos = (selectRandom _myPlaces) select 0;
			_shark doMove _roamPos;
			//_shark setDestination [_roamPos, "LEADER PLANNED", true];
			//roaming depth
			if (random 100 < 15) then {
				//Change depth
				[_shark] call SHARK_fnc_roamingDepth;
				//[_shark] call BPServer_fnc_roamingDepth;
			};
		};

		if (_debug) then {player sideChat format ["Sharky found %1",typeOf _nearestTarget]};

		//Chase the target
		waitUntil
		{

			//Change depth
			[_shark,_nearestTarget] call SHARK_fnc_depthToTarget;
			//[_shark,_nearestTarget] call BPServer_fnc_depthToTarget;

			if ((!alive _shark) or (!alive _nearestTarget)) exitWith {true};
			
			//Attack distance
			_distance = _shark distance _nearestTarget;
			if (_distance <= 4.5) exitWith {true};

			//Out of water check
			if ((isTouchingGround _nearestTarget) or (vehicle _nearestTarget != _nearestTarget)) exitWith {true};

			//Direction
			//_relativeDir = _shark getDir _nearestTarget;
			//if (_relativeDir > 360) then {_relativeDir = _relativeDir - 360};
			//_targetPos = _shark getPos [_distance,_relativeDir];
			_targetPos = position _nearestTarget;
			//_shark setDestination [_targetPos, "LEADER PLANNED", true];
			_shark doMove _targetPos;

			sleep 1.5;
			false;
		};


		//Out of water check
		if ((isTouchingGround (vehicle _nearestTarget)) or (vehicle _nearestTarget != _nearestTarget)) exitWith {
			//Roaming
			_myPlaces = selectBestPlaces [position _shark, 125, "waterDepth interpolate [2,3,0,1]", 5, 50];
			_roamPos = (selectRandom _myPlaces) select 0;
			_shark doMove _roamPos;
			//_shark setDestination [_roamPos, "LEADER PLANNED", true];
			//roaming depth
			if (random 100 < 15) then {
				//Change depth
				[_shark] call SHARK_fnc_roamingDepth;
				//[_shark] call BPServer_fnc_roamingDepth;
			};
		};

		//Check attack angle view
		_tPos = getPosASLW _nearestTarget;
		_sharkPos = getPosASLW _shark;
		_inAngle = [_sharkPos,(getDir _shark),120,_tPos] call BIS_fnc_inAngleSector;
		_inView = false;
		if (_inAngle) then {
			//LOS check
			_cantSee = [_shark,_nearestTarget] call BP_fnc_losCheck;
			if (!_cantSee) then {
				_inView = true;
			};
		};
		
		//bite anim
		_shark switchMove selectRandom ["GreatWhite_Byte","GreatWhite_ByteLeft","GreatWhite_ByteRight"];
		//run attack script only when in view
		if ((_nearestTarget isKindOf "BP_Player") and (!_inView)) exitWith {};

		//Attack
		if ((alive _nearestTarget) and (alive _shark)) then {
			//fast swim
			_shark switchMove "GreatWhite_S3";
			// sleep 0.1;

			//turn shark towards the target
			_manDirection = _shark getDir _nearestTarget;
			if (_manDirection >= 360) then {_manDirection = _manDirection - 360};
			//if (_manDirection = 30) then {_shark switchMove "GreatWhite_TurnRight"};
			//if (_manDirection = -30) then {_shark switchMove "GreatWhite_TurnLeft"};
			_shark setDir _manDirection;


			//Attach to shark's mouth
			if (_nearestTarget isKindOf "BP_Player") then {
				_nearestTarget attachTo [_shark,[0,1.8,-0.6]]
			} else {
				_nearestTarget attachTo [_shark,[0,1.8,-0.5]]
			};

			//Bleeding
			[_nearestTarget,_shark] spawn SHARK_fnc_underwaterBleeding;
			//[_nearestTarget,_shark] spawn BPServer_fnc_underwaterBleeding;

			//Victim dir
			_sharkDir = getDir _shark;
			_nearestTargetDir = getDir _nearestTarget;
			_newDir = (-1 * _sharkDir) + _nearestTargetDir;
			_nearestTarget setDir _newDir;

			if !(_nearestTarget isKindOf "BP_Player") then {
				//bite sounds
				_nearPlayers = _shark nearEntities ["BP_Player", 50];
				if (count _nearPlayers > 0) then {
					[_shark,"bonecrunch"] remoteExec ['say3D',_nearPlayers,false]
				};
				//kill
				_nearestTarget setDamage 1;
				_shark switchMove "GreatWhite_Byte";
				sleep 3.5;
				deleteVehicle _nearestTarget;
			} else {
				//bite sounds
				_nearPlayers = _shark nearEntities ["BP_Player", 50];
				if (count _nearPlayers > 0) then {
					[_nearestTarget,"Scared_diver"] remoteExec ['say3D',_nearPlayers,false]
				};
				
				//tow victim
				[_shark,0,-5] call BIS_fnc_setPitchBank;
				sleep 0.25;
				[_shark,0,5] call BIS_fnc_setPitchBank;
				sleep 0.25;
				[_shark,0,-5] call BIS_fnc_setPitchBank;
				sleep 0.25;
				[_shark,0,5] call BIS_fnc_setPitchBank;
				sleep 0.25;
				[_shark,0,0] call BIS_fnc_setPitchBank;

				detach _nearestTarget;
				_nearestTarget setUnconscious true;
				_shark switchMove "GreatWhite_S1";
				sleep 1;
				_nearestTarget setUnconscious false;
				sleep 0.5;
				_nearestTarget switchMove "AdvePercMstpSnonWnonDnon";
				BP_MedicalEvent = ["medSharkAttack",(netID _nearestTarget),(netID _nearestTarget)];
				(owner _nearestTarget) publicVariableClient "BP_MedicalEvent";
			};
		};
	} else {
		//Roaming
		_myPlaces = selectBestPlaces [position _shark, 125, "waterDepth interpolate [2,3,0,1]", 5, 50];
		_roamPos = (selectRandom _myPlaces) select 0;
		_shark doMove _roamPos;
		//_shark setDestination [_roamPos, "LEADER PLANNED", true];
		
		//roaming depth
		if (random 100 < 15) then {
			//Change depth
			[_shark] call SHARK_fnc_roamingDepth;
			//[_shark] call BPServer_fnc_roamingDepth;
		};
	};

	// exit if shark is dead
	if !(alive _shark) exitWith {};

	if (_debug) then {player sideChat "Sharky Sleeping"};

	//_shark setVariable ["BIS_fnc_animalBehaviour_disable", false];
	//[_shark] call BIS_fnc_animalBehaviour;
	sleep 10;
};

