/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/

_waterSource = _this select 3;

private ["_sfx","_dis"];

_inVehicle = !isNull objectParent player;
if (_inVehicle) exitwith {};

player playActionNow "PutDown";

_dis=6;
_sfx = "drink";
[player,_sfx,0,false,_dis] call BP_fnc_objSpeak;
[player,_dis,true,(getPosATL player)] spawn BP_fnc_zombieAlert;

if (random 15 < 3) then { 
	r_player_infected = true; 
	player say3D ["z_cough_5",350,1.1];
	//[player,"cough",0,false,9] call BP_fnc_objSpeak;
};

BP_thirst = 0;

player setVariable ["messing",[BP_hunger,BP_thirst]];

//cutText [format["You have consumed a %1.",_text], "PLAIN DOWN"];

//Save Updated Medical Values
call BP_fnc_medSave;

sleep 1;

player playActionNow "BP_Act_Man_Drink_Erc_x3_Gesture";

_nearbyLeak = nearestObjects [player, ["Land_HelipadEmpty_F"], 10];
if (count _nearbyLeak > 0) exitwith {};
_waterSource call BP_fnc_waterLeakSFX;
