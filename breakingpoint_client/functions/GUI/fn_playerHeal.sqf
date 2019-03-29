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
		if ((vehicle player) == player) then 
		{
			if (!r_player_unconscious and !_isHostage and !_isWater) then 
			{
				[] spawn
				{
					//r_action_restTime = 0;
					//r_action_rest = true;
					
					//player action ["SwitchWeapon", player, player, 100];
					//player switchcamera cameraView;
					//sleep 1;
					
					_handgun = handgunWeapon player;
					_primary = primaryWeapon player;
					_secondary = secondaryWeapon player;
					_current = currentWeapon player;

					if (_current == "") then {
						player playMoveNow "amovpercmstpsnonwnondnon_amovpsitmstpsnonwnondnon_ground";
						sleep 1; //give time for animation to finish
						r_action_restTime = 0;
						r_action_rest = true;
					} else {
						player action ["SwitchWeapon", player, player, 100];
						player switchcamera cameraView;
						//Different sleep time for different cases - to make animation pass correctly.
						if (_current == _primary or {_current == _secondary}) then {
							if (stance player isEqualTo "CROUCH") then {
							sleep 2.9;
							} else {
							sleep 2.5;
							};
						} else {
							if (_current == _handgun or {stance player isEqualTo "CROUCH"}) then {
								sleep 2;
							} else {
								sleep 1.3;
							};
						};
						player playMoveNow "amovpercmstpsnonwnondnon_amovpsitmstpsnonwnondnon_ground";
						sleep 2; //give time for animation to finish
						r_action_restTime = 0;
						r_action_rest = true;
						/*if (_primary == _current) then {
							player playMoveNow "AmovPsitMstpSlowWrflDnon_Smoking";
						} else {
							if (_handgun == _current) then {
								player playMoveNow "AmovPercMstpSnonWpstDnon_AmovPsitMstpSnonWpstDnon_ground";
							};
						};*/
					};
				};
			};
		};
	};