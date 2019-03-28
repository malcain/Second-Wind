params ["_oldBuilding", "_replacer"];

_pos = getPos _oldBuilding; 
_dir = getDir _oldBuilding; 
_oldBuilding hideObjectGlobal true;  
_newBuilding = _replacer createVehicle _pos; 
_newBuilding setDir _dir; 
_newBuilding setPos _pos;
_newBuilding setVariable ['state',1];