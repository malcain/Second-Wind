
_VD_EDN_Lootbox1 = "Box_FIA_Support_F" createVehicle getPos player;
_VD_EDN_Lootbox1 setVehicleVarName "VD_EDN_Lootbox1"; VD_EDN_Lootbox1 = _VD_EDN_Lootbox1;
clearMagazineCargoGlobal _VD_EDN_Lootbox1;
clearWeaponCargoGlobal _VD_EDN_Lootbox1;
clearItemCargoGlobal _VD_EDN_Lootbox1;
clearBackpackCargoGlobal _VD_EDN_Lootbox1;
_VD_EDN_Lootbox1 allowDamage false;

[_VD_EDN_Lootbox1, "Drag","\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa","\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa","_this distance _target < 3","_caller distance _target < 3",{},{},{call Movebox;},{},[],1,0,false,false] call bis_fnc_holdActionAdd;
[_VD_EDN_Lootbox1, "Load In","\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa","\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa","_this distance _target < 3","_caller distance _target < 3",{},{},{call LoadIn;},{},[],1,0,false,false] call bis_fnc_holdActionAdd;
//[_VD_EDN_Lootbox1, "Stabilize Base","\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa","\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa","_this distance _target < 3","_caller distance _target < 3",{},{},{call disabledmg;},{},[],1,0,false,false] call bis_fnc_holdActionAdd;
