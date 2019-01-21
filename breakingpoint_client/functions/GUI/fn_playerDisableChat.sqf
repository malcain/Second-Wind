/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/

if (time - BP_lastCheckBit > 1) then
{
	BP_lastCheckBit = time;

	cutText ["You have been removed from all chat channels.", "PLAIN DOWN"];
};