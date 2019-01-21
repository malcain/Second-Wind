/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https:www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/

_inVehicle = ((vehicle player) != player);
_isHostage = player getVariable ["med_hostage", false];
_isWater = (surfaceIsWater (getPosATL player));

if (BP_isUndead) exitWith {};
if (time - BP_lastCheckBit > 5) then
{
	BP_lastCheckBit = time;
	r_interrupt = true;
	r_action_rest = false;
		
	if (surfaceIsWater (getPosATL player)) exitWith {};

	//Make Sure Player Is In a Vehicle
	if ((vehicle player) == player) then
	{
		//Make Player Unequip Weapon
		player action ["SwitchWeapon", player, player, 100];
		player switchCamera cameraView;
			
		//Turn Into Zombie Remote Server Event
		["medZombie",(netID player),(netID player)] remoteExecCall ["BPServer_fnc_medicalUpdate",2];
	};
};