/*
	BP: Second Wind

	Released under Arma Public License No Derivatives (APL-ND)
	https://www.bohemia.net/community/licenses/arma-public-license-nd

	by Malcain
*/

params ["_unit_check","_obj_tele"];

_dice_tele = random 6;
_floor_dice = floor _dice_tele;
_poz_1 = [];
_poz_2 = [];
_poz_3 = [];
_poz_4 = [];
_poz_5 = [];

switch (_floor_dice) do 
{
	case 0: {_poz_1 = [getpos _obj_tele,0,300,5,0,0,0] call BIS_fnc_findSafePos;
			[_unit_check,_poz_1] spawn BP_fnc_anomTeleport;
			//sleep 0.1;
			//_unit_check setDammage ((getDammage _unit_check) + (random 0.25));
			//_unit_check call fn_final_scream;
			};
	case 1: {_poz_1 = [getpos _obj_tele,300,1200,5,0,0,0] call BIS_fnc_findSafePos;
			[_unit_check,_poz_1] spawn BP_fnc_anomTeleport;
			//sleep 0.1;
			//_unit_check setDammage ((getDammage _unit_check) + (random 0.25));
			//_unit_check call fn_final_scream;
			};
	case 2: {_poz_1 = [getpos _obj_tele,300,1200,5,0,0,0] call BIS_fnc_findSafePos;_poz_2 = [getpos _obj_tele,300,1200,5,0,0,0] call BIS_fnc_findSafePos;
			[_unit_check,_poz_1] spawn BP_fnc_anomTeleport;
			[_unit_check,_poz_2] spawn BP_fnc_anomTeleport;
			//sleep 0.1;
			//_unit_check setDammage ((getDammage _unit_check) + (random 0.25));
			//_unit_check call fn_final_scream;
			};
	case 3: {_poz_1 = [getpos _obj_tele,300,1200,5,0,0,0] call BIS_fnc_findSafePos;_poz_2 = [getpos _obj_tele,300,1200,5,0,0,0] call BIS_fnc_findSafePos;_poz_3 = [getpos _obj_tele,300,1200,5,0,0,0] call BIS_fnc_findSafePos;
			[_unit_check,_poz_1] spawn BP_fnc_anomTeleport;
			[_unit_check,_poz_2] spawn BP_fnc_anomTeleport;			
			[_unit_check,_poz_3] spawn BP_fnc_anomTeleport;
			//sleep 0.1;
			//_unit_check setDammage ((getDammage _unit_check) + (random 0.25));
			//_unit_check call fn_final_scream;
			};
	case 4: {_poz_1 = [getpos _obj_tele,300,1200,5,0,0,0] call BIS_fnc_findSafePos;_poz_2 = [getpos _obj_tele,300,1200,5,0,0,0] call BIS_fnc_findSafePos;_poz_3 = [getpos _obj_tele,300,1200,5,0,0,0] call BIS_fnc_findSafePos;_poz_4 = [getpos _obj_tele,300,1200,5,0,0,0] call BIS_fnc_findSafePos;
			[_unit_check,_poz_1] spawn BP_fnc_anomTeleport;
			[_unit_check,_poz_2] spawn BP_fnc_anomTeleport;			
			[_unit_check,_poz_3] spawn BP_fnc_anomTeleport;		
			[_unit_check,_poz_4] spawn BP_fnc_anomTeleport;
			//sleep 0.1;
			//_unit_check setDammage ((getDammage _unit_check) + (random 0.25));
			//_unit_check call fn_final_scream;
			};
	case 5: {_poz_1 = [getpos _obj_tele,300,1200,5,0,0,0] call BIS_fnc_findSafePos;_poz_2 = [getpos _obj_tele,300,1200,5,0,0,0] call BIS_fnc_findSafePos;_poz_3 = [getpos _obj_tele,300,1200,5,0,0,0] call BIS_fnc_findSafePos;_poz_4 = [getpos _obj_tele,300,1200,5,0,0,0] call BIS_fnc_findSafePos;_poz_5 = [getpos _obj_tele,300,1200,5,0,0,0] call BIS_fnc_findSafePos;
			[_unit_check,_poz_1] spawn BP_fnc_anomTeleport;
			[_unit_check,_poz_2] spawn BP_fnc_anomTeleport;			
			[_unit_check,_poz_3] spawn BP_fnc_anomTeleport;		
			[_unit_check,_poz_4] spawn BP_fnc_anomTeleport;			
			[_unit_check,_poz_5] spawn BP_fnc_anomTeleport;
			//sleep 0.1;
			//_unit_check setDammage ((getDammage _unit_check) + (random 0.25));
			//_unit_check call fn_final_scream;
			};
};