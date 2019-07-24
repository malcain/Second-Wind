/*
	by Malcain
*/
params ["_center"];

_center spawn {

	_sectorArray = nearestObjects [_this, ["Land_HelipadEmpty_F"], 500];

	_oldZoom = -1; 
	_zoomViewFactor = globViewDist; 
	_inView = false;
	_distance = player distance _this;
	_oldDistance = _distance;
 
	sleep 1;

	while {_distance < 1250} do {
		_distance = player distance _this;
		_angleFactor = linearConversion [900,50,_distance,30,90,true];
		
		{
			_inView = [position player, getDir player, _angleFactor, position _x] call BP_fnc_inAngleSector;
			//exit loop check if true
			if (_inView) exitwith {};
		} count _sectorArray;

		if (_inView) then {
			_zoom = round (call BP_fnc_trueZoom * 10) / 10; 

			//hint str format ["%1",_zoom_factor];
 
			if (_zoom != _oldZoom or {abs(_distance - _oldDistance) > 25}) then {
				_distanceFactor = linearConversion [400,1250,_distance,550,1100,true];
				_zoomViewFactor = linearConversion [0.2,1.2,_zoom,_distanceFactor,globViewDist,true];
				setViewDistance _zoomViewFactor;
				_oldDistance = _distance;
			};
			_oldZoom = _zoom;
			
		} else {
			_oldZoom = -1;
			if (viewDistance != globViewDist) then { setViewDistance globViewDist; };
		};

		sleep 0.1;

	};

setViewDistance globViewDist;
dvdArray call BP_fnc_dvdCheck;

};