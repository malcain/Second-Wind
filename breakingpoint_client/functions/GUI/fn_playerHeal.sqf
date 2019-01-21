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
					r_action_restTime = 0;
					r_action_rest = true;
					
					player action ["SwitchWeapon", player, player, 100];
					player switchcamera cameraView;
					sleep 1;
					
					_primary = primaryWeapon player;
					_handgun = handgunWeapon player;
					_current = currentWeapon player;

					if (_current == "") then {
						player playMoveNow "AmovPercMstpSnonWnonDnon_AmovPsitMstpSnonWnonDnon_ground";
					} else {
						if (_primary == _current) then {
							player playMoveNow "AmovPsitMstpSlowWrflDnon_Smoking";
						} else {
							if (_handgun == _current) then {
								player playMoveNow "AmovPercMstpSnonWpstDnon_AmovPsitMstpSnonWpstDnon_ground";
							};
						};
					};
				};
			};
		};
	};