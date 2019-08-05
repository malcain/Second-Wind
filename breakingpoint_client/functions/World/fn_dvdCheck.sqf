/*
	BP: Second Wind

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	by Malcain
*/

_checkArray = _this;

_checkArray spawn {

	_checkArray = _this;
	_dvdActive = false;
	
	while {true} do {
		{
			if (player distance _x < 950) exitwith {
				_x call BP_fnc_dvd;
				_dvdActive = true;
			};
		} count _this;
		
		//if dvd is active, exit the loop
		if (_dvdActive) exitwith {};
		
		sleep 15;
	};
	
};
