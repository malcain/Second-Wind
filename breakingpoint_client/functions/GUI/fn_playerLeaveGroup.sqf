/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/

if (time - BP_lastCheckBit > 1) then
{
	BP_lastCheckBit = time;
	if (!r_player_unconscious) then {
		[] spawn BP_fnc_groupDel;
	};
};
