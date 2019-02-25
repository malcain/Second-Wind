


Movebox = {
  params ["_target", "_caller", "_actionId"];
  _target = _this select 0;
  _caller = _this select 1;

_target attachto [_caller];
removeallactions _target;
_caller playAction "GrabDrag";
_caller forceWalk true;
[_caller, "Drop","\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa","\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa","_this distance _target < 3","_caller distance _target < 3",{},{},{call Dropbox;},{},[],1,0,false,false] call bis_fnc_holdActionAdd;

};

Dropbox = {
  params ["_target", "_caller", "_actionId"];
  _target = _this select 0;
  _caller = _this select 1;
detach _target;
_caller forceWalk false;
_caller switchmove "";
removeallactions _target;
[_target, "Drag","\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa","\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa","_this distance _target < 3","_caller distance _target < 3",{},{},{call Movebox;},{},[],1,0,false,false] call bis_fnc_holdActionAdd;
[_target, "Load In","\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa","\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa","_this distance _target < 3","_caller distance _target < 3",{},{},{call LoadIn;},{},[],1,0,false,false] call bis_fnc_holdActionAdd;
[_target, "Destroy this Box","\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa","\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa","_this distance _target < 3","_caller distance _target < 3",{},{},{call deleteMatbox},{},[],7,0,false,false] call bis_fnc_holdActionAdd;
};


LoadIn = {
  params ["_target", "_caller", "_actionId"];
  _target = _this select 0;
  _caller = _this select 1;

removeallactions _target;
_loadableCar = nearestObject [_caller, "Car"];
if (_target distance _loadableCar < 5) then {
_loadableCar setVectorUp surfaceNormal position _loadableCar;
_pos = getPos _loadableCar;
_target setpos _pos;
_target attachto [_loadableCar,[0,-2,0.7]];
[_target, "Loud Out","\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa","\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa","_this distance _target < 10","_caller distance _target < 10",{},{},{call unLoad;},{},[],1,0,false,false] call bis_fnc_holdActionAdd;
} else {hint "Get closer to your Vehicle!";
[_target, "Drag","\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa","\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa","_this distance _target < 3","_caller distance _target < 3",{},{},{call Movebox;},{},[],1,0,false,false] call bis_fnc_holdActionAdd;
[_target, "Load In","\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa","\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa","_this distance _target < 3","_caller distance _target < 3",{},{},{call LoadIn;},{},[],1,0,false,false] call bis_fnc_holdActionAdd;
};
};


unLoad = {
  params ["_target", "_caller","_actionId"];
  _target = _this select 0;
  _caller = _this select 1;
detach _target;
_target setpos ([getPosATL _target, 4, 4, 1, 0, 0.9, 0] call BIS_fnc_findSafePos);
removeallactions _target;

[_target, "Drag","\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa","\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa","_this distance _target < 3","_caller distance _target < 3",{},{},{call Movebox;},{},[],1,0,false,false] call bis_fnc_holdActionAdd;
[_target, "Load In","\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa","\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa","_this distance _target < 3","_caller distance _target < 3",{},{},{call LoadIn;},{},[],1,0,false,false] call bis_fnc_holdActionAdd;
};

deleteMatbox = {
params ["_target"];
_target = _this select 0;
removeallactions _target;
deletevehicle _target;
};

disabledmg = {
  params ["_target"];
    params ["_caller"];
  _target = _this select 0;
    _caller = _this select 1;
  removeallactions _target;
_houses = _caller nearObjects ["Static", 30];
{_x allowDamage false} foreach _houses;

[_target, "Drag","\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa","\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa","_this distance _target < 3","_caller distance _target < 3",{},{},{call Movebox;},{},[],1,0,false,false] call bis_fnc_holdActionAdd;
[_target, "Load In","\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa","\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa","_this distance _target < 3","_caller distance _target < 3",{},{},{call LoadIn;},{},[],1,0,false,false] call bis_fnc_holdActionAdd;

};

VD_EDN_BPMover = {
  _allplayer = allplayers - entities [["allplayers"], ["HeadlessClient_F"], true, true];
  _player = selectRandom _allplayer;

_BPfile = selectRandom VD_EDN_BP_Array;
_houses = _player nearObjects ["House", 300];
_cnth = count _houses;
if (_cnth >= 1) then {
_objhouse = selectRandom _houses;
_allpositions = _objhouse buildingPos -1;
_cnt = count _allpositions;

if (_cnt > 0) then {
  _buildPos = selectRandom _allpositions;
  _BPfile setPos _buildPos;

sleep 1800;

waituntil {{_x distance _buildPos > 900}foreach allplayers - entities [["allplayers"], ["HeadlessClient_F"], true, true]};
_cntBP2 = count VD_EDN_BP_Array;
  if (_cntBP2 > 0) then {sleep 1800; call VD_EDN_BPMover;} else {};
}
else {call VD_EDN_BPMover;};
}
 else {call VD_EDN_BPMover};
};

VD_AI_Hunter_Spawner ={



_VD_AI_HuntFnc = {
    if (_VD_AI_bandit1 distance VD_AI_player > 200)

  then {
  {deleteVehicle _x}forEach units _VD_AI_bandits;}

   else {

     _VD_AI_Playerpos2 = getpos _caller;
        _VD_AI_wp2 = _VD_AI_bandits addWaypoint [_VD_AI_Playerpos2, 1];
            _VD_AI_wp2 setWaypointType "MOVE";
            _VD_AI_wp2 setWaypointSpeed "FULL";
            _VD_AI_wp2 setWaypointBehaviour "SAFE";
            _VD_AI_wp2 setWaypointFormation "COLUMN";
      waituntil {
        _VD_AI_bandit1 distance _VD_AI_Playerpos2 < 10 || {!alive _x}foreach units _VD_AI_Bandits;};
        deleteWaypoint [_VD_AI_bandits, 1];
        if ({!alive _x}foreach units _VD_AI_Bandits) then {} else  {call _VD_AI_HuntFnc;};



    };};

    params ["_target", "_caller","_actionId"];
    _target = _this select 0;
    _caller = _this select 1;

_VD_AI_AISpawn = [_caller, 250, 350, 0.9, 0, 0.9, 0] call BIS_fnc_findSafePos;
_VD_AI_Playerpos1 = getPos _caller;
_VD_AI_bandits = createGroup east;
_VD_AI_bandit1 = _VD_AI_bandits createUnit ["O_G_Survivor_F", _VD_AI_AISpawn, [], 1, "NONE"];
if (100 >= (random 100)) then {_VD_AI_VD_AI_bandit2 = _VD_AI_bandits createUnit ["O_G_Survivor_F", _VD_AI_AISpawn, [], 1, "NONE"];};
if (100 >= (random 100)) then {_VD_AI_bandit3 = _VD_AI_bandits createUnit ["O_G_Survivor_F", _VD_AI_AISpawn, [], 1, "NONE"];};
if (90 >= (random 100)) then {_VD_AI_bandit4 = _VD_AI_bandits createUnit ["O_G_Survivor_F", _VD_AI_AISpawn, [], 1, "NONE"];};
if (50 >= (random 100)) then {_VD_AI_bandit5 = _VD_AI_bandits createUnit ["O_G_Survivor_F", _VD_AI_AISpawn, [], 1, "NONE"];};
if (10 >= (random 100)) then {_VD_AI_bandit6 = _VD_AI_bandits createUnit ["O_G_Survivor_F", _VD_AI_AISpawn, [], 1, "NONE"];};

{[_x] call VD_equipper;} foreach units _VD_AI_bandits;


_VD_AI_wp1 = _VD_AI_bandits addWaypoint [_VD_AI_Playerpos1, 0];
    _VD_AI_wp1 setWaypointType "MOVE";
    _VD_AI_wp1 setWaypointSpeed "FULL";
    _VD_AI_wp1 setWaypointBehaviour "SAFE";
    _VD_AI_wp1 setWaypointFormation "COLUMN";

    waituntil {
      _VD_AI_bandit1 distance _caller < 10 || {!alive _x}foreach units _VD_AI_Bandits;};
    deleteWaypoint [_VD_AI_bandits, 0];

    if ({!alive _x}foreach units _VD_AI_Bandits) then {} else  {call _VD_AI_HuntFnc;};
};



  VD_HuntFnc = {

    params ["_target", "_caller","_actionId"];
    _target = _this select 0;
    _caller = _this select 1;
    if ({!alive _x}foreach units _bandits1) then {}
else{
      if (_bandit1 distance _caller > 200)
    then {
    {deleteVehicle _x}forEach units _bandits1;}
     else {
       _Playerpos2 = getpos _caller;
          _wp2 = _bandits1 addWaypoint [_Playerpos2, 1];
              _wp2 setWaypointType "MOVE";
              _wp2 setWaypointSpeed "FULL";
              _wp2 setWaypointBehaviour "SAFE";
              _wp2 setWaypointFormation "COLUMN";
        waituntil {
          _bandit1 distance _Playerpos2 < 10};
              deleteWaypoint [_bandits1, 1];
        call VD_HuntFnc;
      };};};


VD_AI_Spawner ={
                  _SpawnPos = [_this select 0, _this select 1, _this select 2, 0.9, 0, 0.9, 0] call BIS_fnc_findSafePos;
                  _Group = createGroup east;
                  _Unit1 = _Group createUnit ["O_G_Survivor_F", _SpawnPos, [], 1, "NONE"];
                  {[_x] call VD_equipper} foreach units _Group;
                  [_Group, _SpawnPos] call BIS_fnc_taskDefend;
                  _Group enableDynamicSimulation true;
                };




VD_AI_Spawn = {
  params ["_target","_caller"];
        _AISpawn = [getPosATL _caller, 100, 250, 0.9, 0, 0.9, 0] call BIS_fnc_findSafePos;
        _bandits1 = createGroup east;
        _bandit1 = _bandits1 createUnit ["O_G_Survivor_F", _AISpawn, [], 1, "NONE"];
        if (50 >= (random 100)) then {_bandit2 = _bandits1 createUnit ["O_G_Survivor_F", _AISpawn, [], 1, "NONE"];};
        if (50 >= (random 100)) then {_bandit3 = _bandits1 createUnit ["O_G_Survivor_F", _AISpawn, [], 1, "NONE"];};
        if (5 >= (random 100)) then {_bandit4 = _bandits1 createUnit ["O_G_Survivor_F", _AISpawn, [], 1, "NONE"];};
        if (5 >= (random 100)) then {_bandit5 = _bandits1 createUnit ["O_G_Survivor_F", _AISpawn, [], 1, "NONE"];};
        if (5 >= (random 100)) then {_bandit6 = _bandits1 createUnit ["O_G_Survivor_F", _AISpawn, [], 1, "NONE"];};

        {[_x] call VD_equipper} foreach units _bandits1;



        _wp1 = _bandits1 addWaypoint [_target, 0];
            _wp1 setWaypointType "MOVE";
            _wp1 setWaypointSpeed "FULL";
            _wp1 setWaypointBehaviour "SAFE";
            _wp1 setWaypointFormation "COLUMN";

            waituntil {
              _bandit1 distance _target < 10};
            deleteWaypoint [_bandits1, 0];
          call VD_HuntFnc;

      };

VD_HO_Loot =

{
  params ["_target","_caller"];

  _target = _this select 0;
  _caller = _this select 1;

  _caller switchMove "AinvPknlMstpSnonWrflDr_medic5",1;
  sleep 9.090;

  _lootspot1 = "Groundweaponholder" createVehicle (getpos _target);
  removeallactions _target;

  _weapon = selectrandom VD_WeaponArrayRifles;
  _magazines = getArray (configFile >> "CfgWeapons" >> _weapon >> "magazines");
  waituntil {(count _magazines) > 0};
  _mag = selectRandom _magazines;
  _lootspot1 addMagazineCargoGlobal [_mag, 2 +random 4];
 _lootspot1 addWeaponCargo [_weapon,1];

 _weapon1 = selectrandom VD_WeaponArrayPistols;
 _magazines1 = getArray (configFile >> "CfgWeapons" >> _weapon1 >> "magazines");
 waituntil {(count _magazines1) > 0};
 _mag1 = selectRandom _magazines1;
 _lootspot1 addMagazineCargoGlobal [_mag1, 2 +random 4];
_lootspot1 addWeaponCargo [_weapon1,1];

  _lootspot1 addItemCargoGlobal [selectrandom VD_itemArray1, 1];
  _lootspot1 addItemCargoGlobal [selectrandom VD_itemArray1, 1];
  _lootspot1 addItemCargoGlobal [selectrandom VD_itemArray1, 1];
 _lootspot1 addItemCargoGlobal [_weapon call BIS_fnc_compatibleItems, 1];
 _lootspot1 addItemCargoGlobal [_weapon call BIS_fnc_compatibleItems, 1];




};

VD_lootCrateT1 =
{

  clearMagazineCargoGlobal (_this select 0);
  clearWeaponCargoGlobal (_this select 0);
  clearItemCargoGlobal (_this select 0);
  clearBackpackCargoGlobal (_this select 0);
  _weapon = selectrandom VD_WeaponArrayRifles;
  _weapon1 = selectrandom VD_WeaponArrayRifles;
  (_this select 0) additemCargoGlobal [selectRandom VD_currencyArray, 50 +random 50];
  (_this select 0) additemCargoGlobal [selectRandom VD_itemArray1, 1 +random 1];
  (_this select 0) additemCargoGlobal [selectRandom VD_itemArray1, 1 +random 1];
  (_this select 0) additemCargoGlobal [selectRandom VD_EquipmentVests, 1 +random 1];
  (_this select 0) additemCargoGlobal [selectRandom VD_EquipmentUniforms, 1 +random 1];
  (_this select 0) additemCargoGlobal [selectRandom VD_EquipmentHeadgears, 1 +random 1];
  (_this select 0) addBackpackCargoGlobal [selectRandom VD_EquipmentBackpacks, 1 +random 1];
  (_this select 0) addMagazineCargoGlobal [selectRandom VD_explosivesArray, 1 +random 2];
  (_this select 0) addMagazineCargoGlobal [selectRandom VD_GrenadesArray, 1 +random 2];
  (_this select 0) additemCargoGlobal [selectRandom VD_itemArray1, 1 +random 1];
  (_this select 0) additemCargoGlobal [selectRandom VD_medicalArray, 1 +random 1];
  (_this select 0) addItemCargoGlobal [_weapon call BIS_fnc_compatibleItems, 1];
  (_this select 0) addItemCargoGlobal [_weapon1 call BIS_fnc_compatibleItems, 1];
    (_this select 0) addItemCargoGlobal [_weapon call BIS_fnc_compatibleItems, 1];
  (_this select 0) addItemCargoGlobal [_weapon1 call BIS_fnc_compatibleItems, 1];
  (_this select 0) addWeaponCargo [_weapon,1 +random 1];
  _magazines = getArray (configFile >> "CfgWeapons" >> _weapon >> "magazines");
  waituntil {(count _magazines) > 0};
  _mag = selectRandom _magazines;
  (_this select 0) addMagazineCargoGlobal [_mag, 2 +random 4];
  (_this select 0) addWeaponCargo [_weapon1,1 +random 1];
  _magazines1 = getArray (configFile >> "CfgWeapons" >> _weapon1 >> "magazines");
    waituntil {(count _magazines1) > 0};
  _mag1 = selectRandom _magazines1;
  (_this select 0) addMagazineCargoGlobal [_mag1, 2 +random 4];

};
VD_lootCrateT3 =
{
clearMagazineCargoGlobal _x;
clearWeaponCargoGlobal _x;
clearItemCargoGlobal _x;
clearBackpackCargoGlobal _x;
  _weapon = selectrandom VD_WeaponArrayRifles;
  _x addWeaponCargo [_weapon,1 +random 1];
  _magazines = getArray (configFile >> "CfgWeapons" >> _weapon >> "magazines");
  waituntil {(count _magazines) > 0};
  _mag = selectRandom _magazines;
    _x addMagazineCargoGlobal [_mag, 2 +random 4];
    _x addItemCargoGlobal [_weapon call BIS_fnc_compatibleItems, 1];
if (4 >= (random 10)) then {_x addweaponCargoGlobal [selectrandom VD_WeaponArrayRifles,1];};
if (4 >= (random 10)) then {_x additemCargoGlobal [selectrandom VD_itemArray1,1];};
if (4 >= (random 10)) then {_x additemCargoGlobal [selectrandom VD_itemArray1,1];};
if (4 >= (random 10)) then {_x additemCargoGlobal [selectrandom VD_medicalArray,1];};
if (4 >= (random 10)) then {_x addweaponCargoGlobal [selectrandom VD_WeaponArrayRifles,1];};
if (4 >= (random 10)) then {_x additemCargoGlobal [selectrandom VD_itemArray1,1];};
if (4 >= (random 10)) then {_x additemCargoGlobal [selectrandom VD_itemArray1,1];};
if (4 >= (random 10)) then {_x additemCargoGlobal [selectrandom VD_medicalArray,1];};
if (4 >= (random 10)) then {_x additemCargoGlobal [selectRandom VD_EquipmentVests, 1 +random 1];};
if (2 >= (random 10)) then {_x additemCargoGlobal [selectRandom VD_EquipmentUniforms, 1 +random 1];};
if (2 >= (random 10)) then {_x additemCargoGlobal [selectRandom VD_EquipmentHeadgears, 1 +random 1];};
if (2 >= (random 10)) then {_x addBackpackCargoGlobal [selectRandom VD_EquipmentBackpacks, 1 +random 1];};
if (2 >= (random 10)) then {_x addMagazineCargoGlobal [selectRandom VD_explosivesArray, 1 +random 2];};
if (2 >= (random 10)) then {_x addMagazineCargoGlobal [selectRandom VD_GrenadesArray, 1 +random 2];};
};


VD_Player_Equipper = {
  removeUniform player;
  player forceAddUniform selectRandom VD_EquipmentUniforms;

  if(9>=random 10) then{
  player addVest selectRandom VD_EquipmentVests;};

  player linkitem "itemMap";
  player linkitem "itemRadio";
  player addweapon "binocular";
  if(4>=random 10) then{player addBackpack selectRandom VD_EquipmentBackpacks;};

  if(7>=random 10) then{player addHeadgear selectRandom VD_EquipmentHeadgears;};


if (100>= random 100) then{
  _rifle = selectRandom VD_WeaponArrayRifles;
  [player, _rifle, 1 +(random 3), 0] call BIS_fnc_addWeapon;
  _MuzzleSlot = getArray (configFile / "CfgWeapons" >> _rifle >> "WeaponSlotsInfo" >> "MuzzleSlot" >> "compatibleItems");
  if (count _MuzzleSlot >= 1) then {_Muzzle = selectRandom _MuzzleSlot;
  if (floor (random 10) < 2) then {player addPrimaryWeaponItem _Muzzle;};
  };

  _CowsSlot = getArray (configFile / "CfgWeapons" >> _rifle >> "WeaponSlotsInfo" >> "CowsSlot" >> "compatibleItems");
  if (count _CowsSlot >= 1) then {_Optic = selectRandom _CowsSlot;
  if (floor (random 10) < 2) then {player addPrimaryWeaponItem _Optic;};
  };

  _PointerSlot = getArray (configFile / "CfgWeapons" >> _rifle >> "WeaponSlotsInfo" >> "PointerSlot" >> "compatibleItems");
  if (count _pointerslot >= 1) then {_Pointer = selectRandom _PointerSlot;
  if (floor (random 10) < 2) then {player addPrimaryWeaponItem _Pointer;};
  };

  _UnderBarrelSlot = getArray (configFile / "CfgWeapons" >> _rifle >> "WeaponSlotsInfo" >> "UnderBarrelSlot" >> "compatibleItems");
  if (count _UnderBarrelSlot >= 1) then {  _UnderBarrel = selectRandom _UnderBarrelSlot;
  if (floor (random 10) < 2) then {player addPrimaryWeaponItem _UnderBarrel;};
   };
};

_pistol = selectRandom VD_WeaponArrayPistols;
[player, _pistol, 2 +random 3, 0] call BIS_fnc_addWeapon;
  _Side_Weapon_MuzzleSlot = getArray (configFile / "CfgWeapons" >> _pistol >> "WeaponSlotsInfo" >> "MuzzleSlot" >> "compatibleItems");
  if (count _Side_Weapon_MuzzleSlot >= 1) then { _Side_Weapon_Muzzle = selectRandom _Side_Weapon_MuzzleSlot;
  if (floor (random 10) < 2) then {player addHandgunItem _Side_Weapon_Muzzle;};
  };
  _Side_Weapon_CowsSlot = getArray (configFile / "CfgWeapons" >> _pistol >> "WeaponSlotsInfo" >> "CowsSlot" >> "compatibleItems");
  if (count _Side_Weapon_CowsSlot >= 1) then {_Side_Weapon_Optic = selectRandom _Side_Weapon_CowsSlot;
  if (floor (random 10) < 2) then {player addHandgunItem _Side_Weapon_Optic;};
  };
  _Side_Weapon_PointerSlot = getArray (configFile / "CfgWeapons" >> _pistol >> "WeaponSlotsInfo" >> "PointerSlot" >> "compatibleItems");
    if (count _Side_Weapon_PointerSlot >= 1) then {_Side_Weapon_Pointer = selectRandom _Side_Weapon_PointerSlot;
  if (floor (random 10) < 2) then {player addHandgunItem _Side_Weapon_Pointer;};
  };
  for "_i" from 1 to (random 20) do {player addItemToUniform selectRandom VD_currencyArray;};
  if(9>=random 10) then{  player additem selectRandom VD_medicalArray;};
  if(1>=random 10) then{  player additem selectRandom VD_medicalArray;};
  player addItem selectRandom VD_itemArray1;
  player addItem selectRandom VD_itemArray1;
  player addItem selectRandom VD_GrenadesArray;
};

VD_Equipper = {
  removeUniform _x;
  _x forceAddUniform selectRandom VD_EquipmentUniforms;
if(2>=random 10) then{_x linkitem "itemMap"};
if(2>=random 10) then{_x linkitem "itemRadio"};
if(2>=random 10) then{_x addweapon "binocular"};
  if(9>=random 10) then{
  _x addVest selectRandom VD_EquipmentVests;
};

  if(4>=random 10) then{
  _x addBackpack selectRandom VD_EquipmentBackpacks;
  if(1>=random 10) then{_x addItemToBackpack selectRandom VD_explosivesArray;};};

  _x addHeadgear selectRandom VD_EquipmentHeadgears;


if (VD_AIChanceRifle >=random 100) then {
  _rifle =  selectRandom VD_WeaponArrayRifles;
  [_x, _rifle, 2 +random 2, 0] call BIS_fnc_addWeapon;

  _MuzzleSlot = getArray (configFile / "CfgWeapons" >> _rifle >> "WeaponSlotsInfo" >> "MuzzleSlot" >> "compatibleItems");
  if (count _MuzzleSlot >= 1) then {  _Muzzle = selectRandom _MuzzleSlot;
  if (floor (random 10) < 2) then {_x addPrimaryWeaponItem _Muzzle;};
  };

  _CowsSlot = getArray (configFile / "CfgWeapons" >> _rifle >> "WeaponSlotsInfo" >> "CowsSlot" >> "compatibleItems");
  if (count _CowsSlot >= 1) then {_Optic = selectRandom _CowsSlot;
  if (floor (random 10) < 2) then {_x addPrimaryWeaponItem _Optic;};
  };

  _PointerSlot = getArray (configFile / "CfgWeapons" >> _rifle >> "WeaponSlotsInfo" >> "PointerSlot" >> "compatibleItems");
  if (count _pointerslot >= 1) then {_Pointer = selectRandom _PointerSlot;
  if (floor (random 10) < 2) then {_x addPrimaryWeaponItem _Pointer;};
  };

  _UnderBarrelSlot = getArray (configFile / "CfgWeapons" >> _rifle >> "WeaponSlotsInfo" >> "UnderBarrelSlot" >> "compatibleItems");
  if (count _UnderBarrelSlot >= 1) then {  _UnderBarrel = selectRandom _UnderBarrelSlot;
  if (floor (random 10) < 2) then {_x addPrimaryWeaponItem _UnderBarrel;};
   };};

if (VD_AIChancePistol >=random 100) then {
   _pistol = selectRandom VD_WeaponArrayPistolsAI;
  [_x, _pistol, 2 +(random 2), 0] call BIS_fnc_addWeapon;
  _Side_Weapon_MuzzleSlot = getArray (configFile / "CfgWeapons" >> _pistol >> "WeaponSlotsInfo" >> "MuzzleSlot" >> "compatibleItems");
  if (count _Side_Weapon_MuzzleSlot >= 1) then { _Side_Weapon_Muzzle = selectRandom _Side_Weapon_MuzzleSlot;
if (floor (random 10) < 2) then {_x addHandgunItem _Side_Weapon_Muzzle;};
};
  _Side_Weapon_CowsSlot = getArray (configFile / "CfgWeapons" >> _pistol >> "WeaponSlotsInfo" >> "CowsSlot" >> "compatibleItems");
  if (count _Side_Weapon_CowsSlot >= 1) then {_Side_Weapon_Optic = selectRandom _Side_Weapon_CowsSlot;
  if (floor (random 10) < 2) then {_x addHandgunItem _Side_Weapon_Optic;};
};
  _Side_Weapon_PointerSlot = getArray (configFile / "CfgWeapons" >> _pistol >> "WeaponSlotsInfo" >> "PointerSlot" >> "compatibleItems");
    if (count _Side_Weapon_PointerSlot >= 1) then {_Side_Weapon_Pointer = selectRandom _Side_Weapon_PointerSlot;
  if (floor (random 10) < 2) then {_x addHandgunItem _Side_Weapon_Pointer;};
};};

  for "_i" from 1 to (random VD_AIChanceMoney) do {_x addItem selectRandom VD_currencyArray;};
  _x addItem selectRandom VD_itemArray1;

_x additem selectRandom VD_medicalArray;
  if(2>=random 10) then{  _x additem selectRandom VD_medicalArray;};
    _x addItem selectRandom VD_itemArray1;
    _x addItem selectRandom VD_GrenadesArray;
};

VD_CS_CargoLoot =

{
  params ["_target","_caller"];

  _target = _this select 0;
  _caller = _this select 1;

  _caller switchMove "AinvPknlMstpSnonWrflDr_medic5",1;
  sleep 9.090;
if (5 >= 10) then {hint "Empty...";} else {hint "Something dropped to the ground!";
_lootspot1 = "Box_IND_Ammo_F" createVehicle getpos _caller;
clearMagazineCargoGlobal _lootspot1;
clearWeaponCargoGlobal _lootspot1;
clearItemCargoGlobal _lootspot1;
clearBackpackCargoGlobal _lootspot1;
_lootspot1 allowDamage false;
  _weapon = selectrandom VD_WeaponArrayRifles;
    _weapon1 = selectrandom VD_WeaponArrayRifles;
  _magazines = getArray (configFile >> "CfgWeapons" >> _weapon >> "magazines");
  waituntil {(count _magazines) > 0};
  _mag = selectRandom _magazines;
  _magazines1 = getArray (configFile >> "CfgWeapons" >> _weapon1 >> "magazines");
  waituntil {(count _magazines1) > 0};
  _mag1 = selectRandom _magazines1;
    if (10 >= 10) then { _lootspot1 addItemCargoGlobal [selectrandom VD_itemArray1, 1];};
if (10 >= 10) then { _lootspot1 addItemCargoGlobal [selectrandom VD_itemArray1, 1];};
if (10 >= 10) then {   _lootspot1 addItemCargoGlobal [selectrandom VD_currencyArray, (random 100)];};
  if (10 >= 10) then {
    _lootspot1 addWeaponCargoGlobal [_weapon, 1];
    _lootspot1 addItemCargoGlobal [_weapon call BIS_fnc_compatibleItems, 1];
  _lootspot1 addItemCargoGlobal [selectrandom VD_WeaponArrayRifles call BIS_fnc_compatibleItems, 1];
  _lootspot1 addMagazineCargoGlobal [_mag, 2 +random 4];};
  if (10 >= 10) then {   _lootspot1 addMagazineCargoGlobal [_mag1, 2 +random 4];};
  if (10 >= 10) then {  _lootspot1 addMagazineCargoGlobal [selectrandom VD_explosivesArray, (random 4)];};
  if (10 >= 10) then {  _lootspot1 addMagazineCargoGlobal [selectrandom VD_explosivesArray, (random 4)];};
  if (10 >= 10) then {  _lootspot1 addMagazineCargoGlobal [selectrandom VD_GrenadesArray, (random 4)];};
    if (10 >= 10) then {  _lootspot1 addMagazineCargoGlobal [selectrandom VD_GrenadesArray, (random 4)];};
};
};

VD_TC_Equipper = {
  removeUniform _x;
  _x forceAddUniform selectRandom VD_EquipmentUniforms;
  _x addVest selectRandom VD_EquipmentVests;

};

VD_AI_SpawnerScav = {

_VD_wpFnc = {
if (_unit distance _player > 1000)
  then {
  {deleteVehicle _x}forEach units _group;}
   else {
     _nextarea = [_unit, 50, 300, 1, 0, 0.3, 0] call BIS_fnc_findSafePos;
     _nearhouse = nearestBuilding _nextarea buildingPos -1;

if (count _nearhouse < 1) then {call _VD_wpFnc;} else {
     _nextpos = selectrandom _nearhouse;
          _wp = _group addWaypoint [_nextpos, 0,2];
            _wp setWaypointType "MOVE";
            _wp setWaypointSpeed "FULL";
            _wp setWaypointBehaviour "CARELESS";

         waituntil {
           _unit distance _nextpos < 20 || {!alive _x}foreach units _group || _unit distance _player > 1000};
           sleep 10;
           if (_unit distance _nextpos > 2) then {sleep 5};
         deleteWaypoint [_group, 2];

         if ({!alive _x}foreach units _group || _unit distance player > 1000) then {
           if (_unit distance _player > 300) then {{deleteVehicle _x}forEach units _group;};

           } else  {call _VD_wpFnc;};
    };};
  };

  _player = _this select 0;


  _PosList = selectbestplaces [position player,500,"houses",10,1];
  _PosSelect = _PosList select (floor random (count _PosList));
  _Pos =  _PosSelect select 0;
  _spawnposgroup = [_Pos, 1, 5, 1, 0, 0.9, 0] call BIS_fnc_findSafePos;
    _group = creategroup east;
    _unit = _group createUnit ["O_G_Soldier_lite_F", _spawnposgroup, [], 3, "FORM"];
    {[_x] call VD_equipper}foreach units _group;
call _VD_wpFnc;
};
///////////////////


hint "fnc ready";
