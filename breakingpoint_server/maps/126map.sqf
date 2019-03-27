//Fuel Sources
{_x setFuelCargo 0;} foreach (nearestTerrainObjects [[3369.46,3744.21,0],["FUELSTATION","Land_FuelStation_01_pump_F","Land_FuelStation_01_pump_malevil_F"],10]);
//Houses
{_x setHitIndex [0, 1];_x setHitIndex [1, 1];} foreach (nearestTerrainObjects [[2307.99,1669.74,0.649002],["house"],8,false]);
{_x setHitIndex [0, 1];} foreach (nearestTerrainObjects [[3334.44,1300.31,0],["house"],8,false]);
{_x setHitIndex [0, 1];_x setHitIndex [1, 1];_x setHitIndex [2, 1];_x setHitIndex [3, 1];_x setHitIndex [4, 1];_x setHitIndex [5, 1];_x setHitIndex [6, 1];_x setHitIndex [7, 1];_x setHitIndex [8, 1];_x setHitIndex [9, 1];_x setHitIndex [10, 1];_x setHitIndex [11, 1];_x setHitIndex [12, 1];_x setHitIndex [13, 1];_x setHitIndex [14, 1];_x setHitIndex [15, 1];} foreach (nearestTerrainObjects [[203.732,5928.09,3.13272],["house","building","hospital"],20,false]);


//Replacements
call{params ["_pos", "_typs", "_distance"];
_pos = [1344.69,1599.69,3.063];
_typs = ["house"];
_distance = 8; 
_housesArray = nearestTerrainObjects [_pos, _typs, _distance, false, true];
 
_replaceBuilding = { 
params ["_oldBuilding", "_replacer"]; 
_pos = getPos _oldBuilding; 
_dir = getDir _oldBuilding; 
_oldBuilding hideObjectGlobal true;  
_newBuilding = _replacer createVehicle _pos; 
_newBuilding setDir _dir; 
_newBuilding setPos _pos;
_newBuilding setVariable ['state',1];}; 
 

{ 
 diag_log format ["Found: %1, Type: %2", _x, typeOf _x]; 
 switch (typeOf _x) do { 
 case "Land_Cargo_HQ_V4_F" : {[_x, "Land_Cargo_HQ_V2_F"] call _replaceBuilding;}; 
 }; 
}forEach _housesArray;

{_x setdamage 0.8;} foreach (nearestTerrainObjects [_pos,["house"],8,false]);
};

call{params ["_pos", "_typs", "_distance"];
_pos = [396.076,5874.01,0];
_typs = ["house"];
_distance = 15; 
_housesArray = nearestTerrainObjects [_pos, _typs, _distance, false, true];
 
_replaceBuilding = { 
params ["_oldBuilding", "_replacer"]; 
_pos = getPos _oldBuilding; 
_dir = getDir _oldBuilding; 
_oldBuilding hideObjectGlobal true;  
_newBuilding = _replacer createVehicle _pos; 
_newBuilding setDir _dir; 
_newBuilding setPos _pos;}; 
 

{ 
 diag_log format ["Found: %1, Type: %2", _x, typeOf _x]; 
 switch (typeOf _x) do { 
 case "Land_i_Shed_Ind_F" : {[_x, "Land_U_Shed_Ind_F"] call _replaceBuilding;}; 
 }; 
}forEach _housesArray;

{_x setdamage 0.8} foreach (nearestTerrainObjects [_pos,["house"],15,false]);
};