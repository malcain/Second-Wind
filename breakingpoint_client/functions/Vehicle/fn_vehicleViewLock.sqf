/*
	BP: Second Wind

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	by Malcain
*/

//params ["_unit","_role","_vehicle","_turret"];
params ["_vehicle","_inVehicle"];

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