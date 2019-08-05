/*
	Breaking Point: The Wilds

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	by Malcain
*/

private ["_dog","_veh"];
_dog = _this select 0;
_veh = _this select 1;
//_dog setFSMVariable ["_command","getin"];

_dog enableCollisionWith _veh;
_attachPos = [];
_attachDir = 0;

/*if (!local _veh) then {
_playerID = clientOwner;
[_veh, _playerID] remoteExecCall ["BPServer_fnc_changeOwner", 2];
};*/

//Check cargo
_cargoStateArr = fullCrew [_veh, "cargo"];
_valid = true;

switch true do {
    case (_veh isKindOf "Offroad_01_unarmed_base_F"): //Pickup
        {
			_attachPos = [0, -1.25, -.67];
        };
	case (_veh isKindOf "Offroad_01_military_base_F" and ((typeOf _veh) find "_armed")<0):   // unarmed military offroads
        {
			_attachPos = [0, -1.25, -.67]; // Right rear cargo position 1 [.45, -1.6, -.67]
        };
    case (_veh isKindOf "Offroad_01_military_base_F"):   // armed military offroads
        {
			_attachPos = [-0.65, -0.8, -1.2];  
			_attachDir = -90;
        };
	case (_veh isKindOf "C_Offroad_01_comms_F"): //Forest Ranger Truck
        {
			_cargoStateArr = fullCrew [_veh, "turret"];
			_attachPos = [-0.035, -1.5, -.8];
			_attachDir = 180;
			_cargo = 0;
			_cargo2 = 1;
			{
				if ((_x select 2 == _cargo or _x select 2 == _cargo2) && {!isNull (_x select 0)}) exitwith {_valid = false}
			} count _cargoStateArr;
			if (!_valid) exitwith {};
            _veh lockCargo [_cargo, true];  //lock cargo
			_veh lockCargo [_cargo2, true];  //lock cargo
        };
    case ((_veh isKindOf "Offroad_02_unarmed_base_F") or (_veh isKindOf "C_Offroad_02_unarmed_F") ): //MB 4WD Jeep (open). 
        {
			_cargoStateArr = fullCrew [_veh, "turret"];
            _attachPos = [-0.97,-0.7,-0.6];
			_attachDir = -70;
			_cargo = 2;
			{
				if (_x select 2 == _cargo && {!isNull (_x select 0)}) exitwith {_valid = false}
			} count _cargoStateArr;
			if (!_valid) exitwith {};
            _veh  lockCargo [_cargo, true];  //lock cargo
        };
	case (_veh isKindOf "LSV_01_unarmed_base_F"): // Prowler
        {
			_cargoStateArr = fullCrew [_veh, "turret"];
			_attachPos = [-1.2, -0.3, -1.15];   
			_attachDir = -75;
			_cargo = 2;
			{
				if (_x select 2 == _cargo && {!isNull (_x select 0)}) exitwith {_valid = false}
			} count _cargoStateArr;
			if (!_valid) exitwith {};
            _veh  lockCargo [_cargo, true]; //lock cargo
        };
	case (_veh isKindOf "O_T_LSV_02_armed_F"):   //Qilin
        {
			_attachPos = [-0.11, -0.8, -0.7];   
			_attachDir = 0;
        };
	case (_veh isKindOf "B_MRAP_01_F"):   //Vannad
        {
			_attachPos = [0, -3, -0.55];   
			_attachDir = 0;
        };
	case (_veh isKindOf "I_MRAP_03_F"):   //Vodnik
        {
			_attachPos = [0, -1.1, -0.65];   
			_attachDir = 0;
        };
	case (_veh isKindOf "C_Quadbike_01_F"):   //Quadbike
        {
			_attachPos = [0,-1.42,-0.445]; 
			_attachDir = 180;
			_cargo = 0;
			{
				if (_x select 2 == _cargo && {!isNull (_x select 0)}) exitwith {_valid = false}
			} count _cargoStateArr;
			if (!_valid) exitwith {};
            _veh lockCargo [_cargo, true];  //lock cargo
        };
	case (_veh isKindOf "I_G_Van_01_fuel_F"):   //Fueltruck
        {
			_attachPos = [0.90, 0.35, -0.44];   
			_attachDir = 70;
			_cargo = 0;
			_cargo2 = 1;
			{
				if ((_x select 2 == _cargo or _x select 2 == _cargo2) && {!isNull (_x select 0)}) exitwith {_valid = false}
			} count _cargoStateArr;
			if (!_valid) exitwith {};
            _veh lockCargo [_cargo, true];  //lock cargo
			_veh lockCargo [_cargo2, true];  //lock cargo
        };
	case ((_veh isKindOf "C_Hatchback_01_sport_F") or (_veh isKindOf "C_Hatchback_01_F")):   //Hatchbacks
        {
			_attachPos = [-0.35,-2.3,-0.7]; 
			_attachDir = -115;
        };
	case (_veh isKindOf "C_SUV_01_F"):   //SUV
        {
			_attachPos = [-0.35,-2.3,-0.95];  
			_attachDir = -90;
        };
	case ((_veh isKindOf "O_Truck_02_transport_F") or (_veh isKindOf "O_Truck_02_covered_F")):   //zamaK
        {
			_attachPos = [0, -3.8, -0.82];   
			_attachDir = 180;
        };
    case (_veh isKindOf "Rubber_duck_base_F"):   //PBX
        {
			_attachPos = [0,.3,-1.04];
			_attachDir = 8;
        };
	case (_veh isKindOf "C_Boat_Transport_02_F"):   //RHIB
		{
			_attachPos = [-0.02, 0.9, 0];
			//_attachPos2 = [0.3, 3, -0.6]; 
			//_attachDir2 = 40;

        };
	case (_veh isKindOf "C_Scooter_Transport_01_F"):   //Scooter
        {
			_attachPos = [-0.7, -1.16, -0.955]; 
			_attachDir = -90;
        };
	case (_veh isKindOf "C_Boat_Civil_01_police_F"):   //SpeedBoat
        {
			_attachPos = [-0.6, -1, -0.955]; 
			_attachDir = -115;
        };
    case (_veh isKindOf "Heli_Light_01_unarmed_base_F"):   //Littlebird
        {
			_attachPos = [.82,0.7,-0.84];
			_attachDir = 90;
			//_attachPos = [.95,1.7,-.86];
			_cargo = 2;
			{
				if (_x select 2 == _cargo && {!isNull (_x select 0)}) exitwith {_valid = false}
			} count _cargoStateArr;
			if (!_valid) exitwith {};
            _veh lockCargo [_cargo, true];  //lock cargo
        };
	case (_veh isKindOf "I_Heli_Transport_02_F"):   // Merlin
        {
			_attachPos = [0.2, 1.5, -2.2];   
			_attachDir = -90;
        };
	case (_veh isKindOf "plane"):   // Ceasar
        {
			_attachPos = [0.5,0.22,-0.55];
			_attachDir = 90;
			_cargo = 0;
			_cargo2 = 1;
			{
				if ((_x select 2 == _cargo or _x select 2 == _cargo2) && {!isNull (_x select 0)}) exitwith {_valid = false}
			} count _cargoStateArr;
			if (!_valid) exitwith {};
            _veh lockCargo [_cargo, true];  //lock cargo
			_veh lockCargo [_cargo2, true];  //lock cargo
        };
}; 

if (!_valid or {_attachPos isEqualTo []}) exitwith {
	_dogHandle = player getVariable ["dogID", 0];
	_dog playMoveNow "Dog_Idle_Bark";
	[_dog,"dog_fail",0,false] call BP_fnc_objSpeak;
	_dogHandle setFSMVariable ["_command","return"];
};

_dog attachto [_veh,_attachPos];
_dog setdir _attachDir;
//_dog doWatch (_dog modelToWorld [0,-10,3]);

