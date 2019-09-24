/*
	BP: Second Wind

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	by Malcain
*/

params ["_vehicle","_inVehicle"];

_crew = crew _vehicle;
_playerClass = player getVariable ["class",0];
_theOrder = [1,4,5];
_anarchists = [2,6];
_outsiders = [0,3,7];
_TRAITORS = false;
_crewClass = 0;

if (_inVehicle) then {
	//Disable shoulder flashlight in vehicle
	_lightOn = player getVariable ["lightOn", nil];
	if (!isNil "_lightOn") exitwith {
		deleteVehicle _lightOn;
		player setVariable ["lightOn",Nil];
	};
	
	//Mixed checks
{
	_crewClass = _x getVariable ["class",0];
	if(((_crewClass in _theOrder) && !(_playerClass in _theOrder)) || ((_crewClass in _anarchists) && !(_playerClass in _anarchists)) || ((_crewClass in _outsiders) && !(_playerClass in _outsiders))) exitWith {
		_TRAITORS = true;
	};
} foreach _crew;

	if (_TRAITORS) then {
		{
			_crewClass = _x getVariable ["class",0];
			_traitorFlag = _x getVariable ["traitorFlag",false];
			if (!_traitorFlag and !(_crewClass in _outsiders)) then {
				_x setVariable ["traitorFlag",true,true];
			};
		} foreach _crew;
	};
};

if (missionDifficulty > 2) exitwith {};

if ((_vehicle iskindof "C_Quadbike_01_F") or {_vehicle iskindof "Bicycle_F"}) exitwith {};

//_inVehicle = (!isNull objectParent player);

if (_inVehicle) exitwith {
	oldCamView = cameraView;
	player switchCamera "INTERNAL";
};

if (!isNil "oldCamView" && !_inVehicle) then {
	player switchCamera oldCamView;
};


/*[] spawn
{
	waitUntil {
		sleep 0.2; 
		if (cameraView isEqualTo "EXTERNAL") then
		{
		player switchCamera "INTERNAL";
		};
		
		isNull objectParent player;
	};
};*/

/*[] spawn
{

	waitUntil {!isNull (findDisplay 46)};

	BP_1stPersonVeh = (findDisplay 46) displayAddEventHandler ["KeyDown", {
		_keyOver = false;
		params['_display','_key','_shift','_ctrl','_alt'];
		if (!isNull objectParent player) then {
			if (inputAction 'personView' > 0 || {inputAction 'optics'}) then {
				player switchCamera 'INTERNAL';
				_keyOver = true;
			};
		};
		/*if (_key in [DIK_NUMPADENTER, DIK_DECIMAL, DIK_ABNT_C2] && {inputAction 'personView' isEqualTo 0} && {isNull objectParent player}) then {
			player switchCamera 'INTERNAL';
			_keyOver = true;
		};
		_keyOver
	}];
};*/