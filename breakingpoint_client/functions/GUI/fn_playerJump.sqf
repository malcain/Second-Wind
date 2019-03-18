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
		private ["_onLadder","_canDo","_max_height","_height","_vel","_dir","_speed"];
		r_interrupt = true;
		r_action_rest = false;
		_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;
		_canDo = (!r_action_refuel and !r_action_gut and !r_action_siphon and !r_action_repair and !r_player_unconscious and !_isHostage and !_onLadder);

		if (player == (vehicle player) && {isTouchingGround player} && {stance player != "PRONE"} && {_canDo} && {!_onLadder}) then {
			_max_height = 4.3;
			//_height = 6-((load player)*10);
			_height = 4.0;
			_vel = velocity player;
			_dir = direction player;
			_speed = 0.4;
			If (_height > _max_height) then {_height = _max_height};// MAXIMUM HEIGHT OF JUMP
			player setVelocity [(_vel select 0)+(sin _dir*_speed),(_vel select 1)+(cos _dir*_speed),(_vel select 2)+_height];
			//player playActionNow "BP_Jump";

			_binocs = binocular player;
			_curweap = currentWeapon player;
			
			if (_curweap == "" || _curweap == _binocs) then {
				player playActionNow "BP_HolsterWeap_Jump";
			} else {
					if (_curweap == (primaryWeapon player)) then {
						player playActionNow "BP_Weap_Jump";
						}
						else
						{
							if (_curweap == (handGunWeapon player)) then {
								player playActionNow "BP_Pst_Jump";
							}
								else
								{
									if (_curweap == (secondaryWeapon player)) then {
										player playActionNow "BP_MeleeWeap_Jump";
									};
								};
						};
				};
		};
	};
