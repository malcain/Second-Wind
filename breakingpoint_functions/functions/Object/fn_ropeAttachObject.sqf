/*
	BreakingPoint: Second Wind

	Released under Arma Public License No Derivatives (APL-ND)
	https://www.bistudio.com/community/licenses/arma-public-license-nd

	by Malcain
*/

params ["_object"];

//_valid = underwater _object;

//Check for Invalid Object Ref
//if (isNull _object or !_valid) exitWith {false};

//_validTypes = ["BP_LootBox","GroundWeaponHolder","WeaponHolderSimulated"];

//if !(_object in _validTypes) exitWith {false};

_playerID = clientOwner;
[_object, _playerID] remoteExecCall ["BPServer_fnc_changeOwner", 2];

private ["_dropRope","_ropeCarrier","_ropeHolder","_ropeLength","_AttachmentPoint","_rope"];

		//create carrier
		player forcewalk true;
		_ropeCarrier = "PaperCar" createVehicle position player;
		waitUntil {if (alive _ropeCarrier) exitWith {true}; false};
		hideObject _ropeCarrier;
		_ropeCarrier disablecollisionwith player; 
		_ropeCarrier allowDamage false;
		sleep 0.3; 
		_ropeCarrier attachTo [player,[0,0,0.14],"Pelvis"];
		//_ropeCarrier attachTo [player,[-0.025,-0.05,0.02],"RightHand"];
		//_ropeCarrier attachTo [player,[0,0,0.2],"LeftHand"];

		//drop action
	_dropRope = player addAction ["Cut rope",
		{
			detach (_this select 3 select 0);
			(_this select 3 select 0) setVelocity [0,0,-0.1];
			(_this select 0) removeAction (_this select 2);
		},[_ropeCarrier]
	];

		_carrierPoint = [0,-0.04,0];
		_AttachmentPoint = [0,0,0];
		// Different offsets for boats
		switch true do {
			//case (_object isKindOf "Rubber_duck_base_F") : {_AttachmentPoint = [0,2.4,-0.6]};
			case (_object isKindOf "Boat_Armed_01_Base_F") : {_AttachmentPoint = "slingLoadCargo1"};
			//case (_object isKindOf "Boat_Civil_01_Base_F") : {_AttachmentPoint = [0,3.58,-0.14]};
			case (_object isKindOf "Ship") : {_AttachmentPoint = [0,0,-0.9]};
			//case (_object isKindOf "ASH_MKVSOC") : {_AttachmentPoint = [-0.15,10.6,-1.2]};
			default {_AttachmentPoint = [0,0,0]};
		};


		// Create rope
		sleep 0.2;
		_rope = ropeCreate [_ropeCarrier,_carrierPoint,_object,_AttachmentPoint,10];
		//_object setMass 45;
		_object disablecollisionwith player;
		//Drop rope event
		while {true} do {
			if ((!alive player) or (!isNull objectParent player)) then
				{
					detach _ropeCarrier;
					_ropeCarrier setVelocity [0,0,-0.1];
					player removeAction _dropRope;
				};
			if ((position player select 2) > 0.5 && {!isTouchingGround player}) then {
				detach _ropeCarrier;
				_ropeCarrier setVelocity [0,0,-0.1];
				player removeAction _dropRope;
			};
		    if (str ("PaperCar" countType attachedObjects player) == "0") exitWith {false};
		    sleep 0.5;
		 };

		//delete carrier
		detach _ropeCarrier;
		//deleteVehicle _ropeCarrier;

		//placeholder rope
		//_ropeLength = ropeLength _rope;
		ropeDestroy _rope;
		//_ropeHolder = ropeCreate [_ropeCarrier,_AttachmentPoint,_object,[-0.2,0,0],_ropeLength];
		player forcewalk false;
		
/*_item attachTo [player, [-0.15,0.06,0.01],"lefthand"];
sleep 0.2;
_item setVectorDirAndUp [[5,5,5],[2,1,1]];

_item attachTo [player,[0.1, -0.25, 0.3], "Spine3"];
sleep 0.2;
_item setVectorDirAndUp [ [1, 0, 0], [0, 1, -1]*/