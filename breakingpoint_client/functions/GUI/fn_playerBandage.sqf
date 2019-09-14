/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/

_inVehicle = ((vehicle player) != player);
_isHostage = player getVariable ["med_hostage", false];
_isWater = (surfaceIsWater (getPosATL player));

if (time - BP_lastCheckBit > 1) then
{
	BP_lastCheckBit = time;
	_needsFieldBandage = r_player_cardiac;
	if (!r_player_unconscious and !_isHostage) then {
		if (!_needsFieldBandage) then {
			if ("ItemBandage" in magazines player) then {
				["ItemBandage"] spawn BP_fnc_useMeds;
			} else {
				if ("ItemFieldDressing" in magazines player) then {
					["ItemFieldDressing"] spawn BP_fnc_useMeds;
				} else {
					cutText ["You don't have any bandages.", "PLAIN DOWN"];
				};
			};
		} else {
			if ("ItemFieldDressing" in magazines player) then {
				["ItemFieldDressing"] spawn BP_fnc_useMeds;
			} else {
				cutText ["You don't have any field dressings.", "PLAIN DOWN"];
			};
		};
	};
};