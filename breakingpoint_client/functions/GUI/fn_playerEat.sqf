/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/

_isHostage = player getVariable ["med_hostage", false];

if (time - BP_lastCheckBit > 1 && time - r_lastCheckEat > 5) then {
	BP_lastCheckBit = time;
	r_lastCheckEat = time;
	if (!r_player_unconscious and !_isHostage) then {
		_foodClass = "";
		{
			if (_x in magazines player) exitWith { _foodClass = _x; };
		} count AllFood;
		if (_foodClass == "") exitWith {
			cutText ["You don't have any food.", "PLAIN DOWN"];
			_handled = true;
		};
		[_foodClass] spawn BP_fnc_eat;
	};
};