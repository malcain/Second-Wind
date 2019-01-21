/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/

_isHostage = player getVariable ["med_hostage", false];

if (time - BP_lastCheckBit > 1) then
{
	BP_lastCheckBit = time;
	if (!r_player_unconscious and !_isHostage) then {
		_drinkClass = "";
		{
			if (_x in magazines player) exitWith { _drinkClass = _x; };
		} count AllDrinks;
		if (_drinkClass == "") exitWith {
			cutText ["You don't have any drinks.", "PLAIN DOWN"];
			_handled = true;
		};
		[_drinkClass] spawn BP_fnc_drink;
	};
};