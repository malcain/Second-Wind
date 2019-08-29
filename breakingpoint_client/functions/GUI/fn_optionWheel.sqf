/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/
_key = _this;

[_key,false] call OptionWheel_fnc_setWheelKey;

/*
_inVehicle = ((vehicle player) != player);
_isHostage = player getVariable ["med_hostage", false];
if (time - BP_lastCheckBit > 1) then
	{
		BP_lastCheckBit = time;
		private ["_onLadder","_canDo","_max_height","_min_height","_height","_vel","_dir","_speed"];
		r_interrupt = true;
		//r_action_rest = false;
		_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
		_canDo = (!r_action_refuel and !r_action_gut and !r_action_siphon and !r_action_repair and !r_player_unconscious and !_isHostage and !_onLadder);

		if (player == (vehicle player) && {isTouchingGround player} && {stance player != "PRONE"} && {_canDo} && {!_onLadder}) then {
			
		};
	};
*/