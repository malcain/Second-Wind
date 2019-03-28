/*
	Breaking Point: Second Wind
	Created By Malcain

	Copyright © 2018-2019
	All rights reserved.
*/

/*//Fuel Sources
{_x setFuelCargo 0;} foreach (nearestTerrainObjects [[3369.46,3744.21,0],["FUELSTATION","Land_FuelStation_01_pump_F","Land_FuelStation_01_pump_malevil_F"],10]);
//Houses
{_x hideobjectglobal true;} foreach (nearestTerrainObjects [[2307.99,1669.74,0.649002],["house"],8,false]);
{_x hideobjectglobal true;} foreach (nearestTerrainObjects [[2307.99,1669.74,0.649002],["house"],8,false]);
{_x hideobjectglobal true;} foreach (nearestTerrainObjects [[3334.44,1300.31,0],["house"],8]);
{_x setHitIndex [0, 1];_x setHitIndex [1, 1];_x setHitIndex [2, 1];_x setHitIndex [3, 1];_x setHitIndex [4, 1];_x setHitIndex [5, 1];_x setHitIndex [6, 1];_x setHitIndex [7, 1];_x setHitIndex [8, 1];_x setHitIndex [9, 1];_x setHitIndex [10, 1];_x setHitIndex [11, 1];_x setHitIndex [12, 1];_x setHitIndex [13, 1];_x setHitIndex [14, 1];_x setHitIndex [15, 1];} foreach (nearestTerrainObjects [[203.732,5928.09,3.13272],["house","building","hospital"],20,false]);
{_x setHitIndex [1, 1];} foreach (nearestTerrainObjects [[794.606,6041.62,8.465],["house"],33,false]);
{_x setHitIndex [0, 1];_x setHitIndex [1, 1];_x hideobjectglobal true;} foreach (nearestTerrainObjects [[923.681,5956.54,0],["house"],12,false]);
{_x setdamage 0.8; _x setHitIndex [1, 1];} foreach (nearestTerrainObjects [[861.235,5969.65,0],["house"],7,false]);
{_x hideobjectglobal true;} foreach (nearestTerrainObjects [[2820.19,3623.53,8.081],["house"],20,false]);

//Replacements
call{params ["_pos", "_typs", "_distance"];
_pos = [1344.69,1599.69,3.063];
_typs = ["house"];
_distance = 8; 
_housesArray = nearestTerrainObjects [_pos, _typs, _distance, false, true];

{ 
 diag_log format ["Found: %1, Type: %2", _x, typeOf _x]; 
 switch (typeOf _x) do { 
 case "Land_Cargo_HQ_V4_F" : {[_x, "Land_Cargo_HQ_V2_F"] call BP_fnc_replaceBuilding;}; 
 }; 
}forEach _housesArray;

{_x setdamage 0.8;} foreach (nearestTerrainObjects [_pos,["house"],8,false]);
};

call{params ["_pos", "_typs", "_distance"];
_pos = [6758.59,1662.89,3.66];
_typs = ["house"];
_distance = 7; 
_housesArray = nearestTerrainObjects [_pos, _typs, _distance, false, true];

{ 
 diag_log format ["Found: %1, Type: %2", _x, typeOf _x]; 
 switch (typeOf _x) do { 
 case "Land_Supermarket_01_F" : {[_x, "Land_Supermarket_01_malden_F"] call BP_fnc_replaceBuilding;}; 
 }; 
}forEach _housesArray;};

call{params ["_pos", "_typs", "_distance"];
_pos = [4265.21,1334.29,0];
_typs = ["house"];
_distance = 15; 
_housesArray = nearestTerrainObjects [_pos, _typs, _distance, false, true];
 
{ 
 diag_log format ["Found: %1, Type: %2", _x, typeOf _x]; 
 switch (typeOf _x) do { 
 case "Land_i_Shed_Ind_F" : {[_x, "Land_U_Shed_Ind_F"] call BP_fnc_replaceBuilding;}; 
 }; 
}forEach _housesArray;

{_x setdamage 0.8;} foreach (nearestTerrainObjects [_pos,["house"],15,false]);
}

call{params ["_pos", "_typs", "_distance"];
_pos = [396.076,5874.01,0];
_typs = ["house"];
_distance = 15; 
_housesArray = nearestTerrainObjects [_pos, _typs, _distance, false, true];
 
{ 
 diag_log format ["Found: %1, Type: %2", _x, typeOf _x]; 
 switch (typeOf _x) do { 
 case "Land_i_Shed_Ind_F" : {[_x, "Land_U_Shed_Ind_F"] call BP_fnc_replaceBuilding;}; 
 }; 
}forEach _housesArray;

{_x setdamage 0.8} foreach (nearestTerrainObjects [_pos,["house"],15,false]);
};


call{params ["_pos", "_typs", "_distance"];
_pos = [3621.46,3592.08,1.41];
_typs = ["house"];
_distance = 15; 
_housesArray = nearestTerrainObjects [_pos, _typs, _distance, false, true];
 
{ 
 diag_log format ["Found: %1, Type: %2", _x, typeOf _x]; 
 switch (typeOf _x) do { 
 case "Land_Barracks_01_camo_F" : {[_x, "Land_i_Barracks_V1_F"] call BP_fnc_replaceBuilding;}; 
 }; 
}forEach _housesArray;
};*/