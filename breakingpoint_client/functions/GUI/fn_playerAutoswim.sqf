/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/

_isHostage = player getVariable ["med_hostage", false];

if (BP_isUndead) exitWith {};
	
if (_isHostage) exitWith {};

//_animspeedcoef = getAnimSpeedCoef player;

if (time - BP_lastCheckBit > 1) then
{
	BP_lastCheckBit = time;
	r_interrupt = true;
	r_action_rest = false;
		
	if ((getPosASL player select 2) > -1) exitWith {};
	if ((getterrainheightASL position player) > -1.5) exitWith {};
	
	if (!BP_AutoRun && {!r_fracture_legs} && {!(r_hit_legs > 0)}) then 
	{
		BP_AutoRun = true;
		
		if (!isNull BP_AutoRunThread) then
		{
			terminate BP_AutoRunThread;
			BP_AutoRunThread = scriptNull;
		};
		
		//Autoswim speed depends on player's carrying weight.
		_weight = loadAbs player;
		if (_weight < 670) then {
			player setanimspeedcoef 1.5;
		} else {
			if (_weight >= 780) then {
				player setanimspeedcoef 1;
			} else {
				player setanimspeedcoef 1.25;
			};
		};
		
		BP_AutoRunThread = [] spawn 
		{
			r_interrupt = false;

			waitUntil
			{
				//No Resting While Autorunning
				if (r_action_rest) then { r_action_rest = false; };
				
				//No Autorun While Hostage
				if (player getVariable ["med_hostage",false]) exitWith {true};
				
				//Don't Autorun While TranQ
				if (r_player_unconscious) exitWith {true};
				
				player playActionNow "FastF";
				
				//Delay
				sleep 0.05;
				
				//Condition Checks
				(r_interrupt || {!BP_AutoRun} || {!alive player} || {r_fracture_legs} || {r_hit_legs > 0} || {(getterrainheightASL getPosATL player) > -1.5});
			};
			
			player setanimspeedcoef 1;
			BP_AutoRun = false;
		};
		[BP_AutoRunThread] call BP_fnc_addThreadHandle;
	};
};