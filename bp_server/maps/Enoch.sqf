/*
	Breaking Point: Second Wind
	Created By Malcain

	Copyright © 2018-2019
	All rights reserved.
*/

//Houses
{_x hideObjectGlobal true; _x setdamage 0.8; } foreach (nearestTerrainObjects [[11150.2,1186.28,0],["house"],5]);
{_x hideObjectGlobal true; _x setdamage 0.8; } foreach (nearestTerrainObjects [[1829.8,7318.14,0],["house"],10]);
{_x hideObjectGlobal true; _x setdamage 0.8; } foreach (nearestTerrainObjects [[8882.12,6609.32,0],["house"],2]);
{_x hideObjectGlobal true; _x setdamage 0.8; } foreach (nearestTerrainObjects [[9729.9,8533.81,0],["house"],8]);
{_x hideObjectGlobal true; _x setdamage 0.8; } foreach (nearestTerrainObjects [[7904.18,9754.86,0],["house"],32]);
{_x setdamage 1; } foreach (nearestTerrainObjects [[7668.91,5970.21,0],["house"],30]);
{_x setHitIndex [1, 1];} foreach (nearestTerrainObjects [[7640.91,5997.19,0],["house"],4,false]);
{_x setHitIndex [1, 1];} foreach (nearestTerrainObjects [[9840.21,8481.02,0],["house"],4,false]);
{_x hideObjectGlobal true; _x setdamage 0.8; } foreach (nearestTerrainObjects [[3173.73,7056.57,0],["house"],5]);


/*
//Replacements
call{params ["_pos", "_typs", "_distance"];
_pos = this;
_typs = ["tree"];
_distance = 400; 
_treesArray = nearestTerrainObjects [_pos, _typs, _distance, false, true];

{
_woodType = str _x;
_birchTiny = [["t_piceaabies_1s"],_woodType] call BP_fnc_inStringArray;
_birchSmall = [["t_piceaabies_1f"],_woodType] call BP_fnc_inStringArray;
_birch = [["t_piceaabies_2s","t_piceaabies_2f"],_woodType] call BP_fnc_inStringArray;
_birchTall = [["t_piceaabies_3s","t_piceaabies_3f"],_woodType] call BP_fnc_inStringArray;
//_fagussy = [["t_fagussylvatica_2d","t_fagussylvatica_3d","t_pinussylvestris_3d"],_woodType] call BP_fnc_inStringArray;

 switch (true) do { 
 case (_birchTiny) : {[_x, "t_piceaabies_1sb"] call BP_fnc_replaceBuilding;}; 
 case (_birchSmall) : {[_x, "d_picea_stem1"] call BP_fnc_replaceBuilding;}; 
 case (_birch) : {[_x, "t_piceaabies_2d"] call BP_fnc_replaceBuilding;};
 case (_birchTall) : {[_x, "t_piceaabies_3d"] call BP_fnc_replaceBuilding;};
 }; 
} forEach _treesArray;

{_x setdamage 0.8;} foreach (nearestTerrainObjects [_pos,["house"],8,false]);
};
*/
//{_x setHitIndex [0, 1];_x setHitIndex [1, 1];_x setHitIndex [2, 1];_x setHitIndex [3, 1];_x setHitIndex [4, 1];_x setHitIndex [5, 1];_x setHitIndex [6, 1];_x setHitIndex [7, 1];_x setHitIndex [8, 1];_x setHitIndex [9, 1];_x setHitIndex [10, 1];_x setHitIndex [11, 1];_x setHitIndex [12, 1];_x setHitIndex [13, 1];_x setHitIndex [14, 1];_x setHitIndex [15, 1];} foreach (nearestTerrainObjects [[203.732,5928.09,3.13272],["house","building","hospital"],20,false]);
/*
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
*/