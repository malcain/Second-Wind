//VANDEANSONS DYNAMIC TRADERCAMP SPAWNER
//SEPT 3, 218
//VERSION 1
//DEPENDENCIES: RAVAGE & CBA

if (!isServer) exitwith {};
  VD_Back = {
  removeAllActions VD_trader1;
  VD_AttTraderID0 = VD_trader1 addAction ["Buy Attachments",{call VD_AttachmentStore}, nil, 1.5, true, true, "", "true", 2, false, "", ""];
  VD_BkPckTraderID0 = VD_trader1 addAction ["Buy Backpacks",{call VD_BackpackStore}, nil, 1.5, true, true, "", "true", 2, false, "", ""];
  VD_ExplTraderID0 = VD_trader1 addAction ["Buy Explosives",{call VD_ExplosivesStore}, nil, 1.5, true, true, "", "true", 2, false, "", ""];
  };

  VD_BackpackStore = {
  RswnBackpackCosts = 90 +(selectrandom [0,1,2,3,4,5,6,7,8,9,10]);
  RswnBackpackCosts1 = 90 +(selectrandom [0,1,2,3,4,5,6,7,8,9,10]);
  RswnBackpackCosts2 = 90 +(selectrandom [0,1,2,3,4,5,6,7,8,9,10]);
  RswnBackpackCosts3 = 90 +(selectrandom [0,1,2,3,4,5,6,7,8,9,10]);
  RswnBackpackCosts4 = 90 +(selectrandom [0,1,2,3,4,5,6,7,8,9,10]);


  cnRswnBackpack = "B_Respawn_TentA_F";
  cnRswnBackpack1 = "B_Respawn_TentDome_F";
  cnRswnBackpack2 = "B_Respawn_Sleeping_bag_F";
  cnRswnBackpack3 = "B_Respawn_Sleeping_bag_brown_F";
  cnRswnBackpack4 = "B_Respawn_Sleeping_bag_blue_F";

  RswnBackpack = getText (configFile >> "CfgVehicles" >> cnRswnBackpack >> "DisplayName");
  RswnBackpack1 = getText (configFile >> "CfgVehicles" >> cnRswnBackpack1 >> "DisplayName");
  RswnBackpack2 = getText (configFile >> "CfgVehicles" >> cnRswnBackpack2 >> "DisplayName");
  RswnBackpack3 = getText (configFile >> "CfgVehicles" >> cnRswnBackpack3 >> "DisplayName");
  RswnBackpack4 = getText (configFile >> "CfgVehicles" >> cnRswnBackpack4 >> "DisplayName");


  if (count RswnBackpack > 0) then {VD_traderRPBP1 = VD_trader1 addAction [format ["Buy %1 for %2",RswnBackpack,RswnBackpackCosts],"call VD_BuyRswnBackpack"];};
  if (count RswnBackpack1 > 0) then {VD_traderRPBP2 = VD_trader1 addAction [format ["Buy %1 for %2",RswnBackpack1,RswnBackpackCosts1],"call VD_BuyRswnBackpack1"];};
  if (count RswnBackpack2 > 0) then {VD_traderRPBP3 = VD_trader1 addAction [format ["Buy %1 for %2",RswnBackpack2,RswnBackpackCosts2],"call VD_BuyRswnBackpack2"];};
  if (count RswnBackpack3 > 0) then {VD_traderRPBP4 = VD_trader1 addAction [format ["Buy %1 for %2",RswnBackpack3,RswnBackpackCosts3],"call VD_BuyRswnBackpack3"];};
  if (count RswnBackpack4 > 0) then {VD_traderRPBP5 = VD_trader1 addAction [format ["Buy %1 for %2",RswnBackpack4,RswnBackpackCosts4],"call VD_BuyRswnBackpack4"];};
  VD_traderRPBP6 = VD_trader1 addAction ["Back","call VD_Back"];
  VD_trader1 removeaction VD_AttTraderID0;
  VD_trader1 removeaction VD_BkPckTraderID0;
  VD_trader1 removeaction VD_ExplTraderID0;

  VD_BuyRswnBackpack = {
    params ["_target", "_caller"];
    _target = _this select 0;
    _caller = _this select 1;

    CurrentCash = {"rvg_money" == _x} count magazines _caller;
    if (CurrentCash >= RswnBackpackCosts) then {
    for "_i" from 1 to (RswnBackpackCosts) do {
    	_caller removemagazine "rvg_money";};
  _caller addBackpack cnRswnBackpack;
      hint format ["Bought %1", RswnBackpack];
    	VD_trader1 removeaction VD_traderRPBP1;
    }
    else
    {
    	hint "Not enough money!";
    };
  };

  VD_BuyRswnBackpack1 = {
    params ["_target", "_caller"];
    _target = _this select 0;
    _caller = _this select 1;
    CurrentCash = {"rvg_money" == _x} count magazines _caller;
  if (CurrentCash >= RswnBackpackCosts1) then {
  for "_i" from 1 to (RswnBackpackCosts1) do {
  	_caller removemagazine "rvg_money";};
    _caller addBackpack cnRswnBackpack1; hint format ["Bought %1", RswnBackpack1];

  	VD_trader1 removeaction VD_traderRPBP2;
  }
  else
  {
  	hint "Not enough money!";
  };
  };

  VD_BuyRswnBackpack2 = {
    params ["_target", "_caller"];
    _target = _this select 0;
    _caller = _this select 1;
    CurrentCash = {"rvg_money" == _x} count magazines _caller;
    if (CurrentCash >= RswnBackpackCosts2) then {
    for "_i" from 1 to (RswnBackpackCosts2) do {
    	_caller removemagazine "rvg_money";};
      _caller addBackpack cnRswnBackpack2; hint format ["Bought %1", RswnBackpack2];
    	VD_trader1 removeaction VD_traderRPBP3;
    }
    else
    {
    	hint "Not enough money!";
    };
  };

  VD_BuyRswnBackpack3 = {
    params ["_target", "_caller"];
    _target = _this select 0;
    _caller = _this select 1;
    CurrentCash = {"rvg_money" == _x} count magazines _caller;
    if (CurrentCash >= RswnBackpackCosts3) then {
    for "_i" from 1 to (RswnBackpackCosts3) do {
    	_caller removemagazine "rvg_money";};
      _caller addBackpack cnRswnBackpack3; hint format ["Bought %1", RswnBackpack3];
    	VD_trader1 removeaction VD_traderRPBP4;
    }
    else
    {
    	hint "Not enough money!";
    };
  };

  VD_BuyRswnBackpack4 = {
    params ["_target", "_caller"];
    _target = _this select 0;
    _caller = _this select 1;
    CurrentCash = {"rvg_money" == _x} count magazines _caller;
    if (CurrentCash >= RswnBackpackCosts4) then {
    for "_i" from 1 to (RswnBackpackCosts4) do {
    	_caller removemagazine "rvg_money";};
      _caller addBackpack cnRswnBackpack4; hint format ["Bought %1", RswnBackpack4];
    	VD_trader1 removeaction VD_traderRPBP5;
    }
    else
    {
    	hint "Not enough money!";
    };
  };
  };






//////
//AttachmentsStore
///

VD_AttachmentStore = {
AttachmentCosts = 90 +(selectrandom [0,1,2,3,4,5,6,7,8,9,10]);
AttachmentCosts1 = 90 +(selectrandom [0,1,2,3,4,5,6,7,8,9,10]);
AttachmentCosts2 = 90 +(selectrandom [0,1,2,3,4,5,6,7,8,9,10]);
AttachmentCosts3 = 90 +(selectrandom [0,1,2,3,4,5,6,7,8,9,10]);
AttachmentCosts4 = 90 +(selectrandom [0,1,2,3,4,5,6,7,8,9,10]);


cnAttachment = selectRandom VD_EquipmentMuzzles;
cnAttachment1 = selectRandom VD_EquipmentOptics;
cnAttachment2 = selectRandom VD_EquipmentMuzzles;
cnAttachment3 = selectRandom VD_EquipmentBipods;
cnAttachment4 = selectRandom VD_EquipmentFlashlights;

Attachment = getText (configFile >> "CfgWeapons" >> cnAttachment >> "DisplayName");
Attachment1 = getText (configFile >> "CfgWeapons" >> cnAttachment1 >> "DisplayName");
Attachment2 = getText (configFile >> "CfgWeapons" >> cnAttachment2 >> "DisplayName");
Attachment3 = getText (configFile >> "CfgWeapons" >> cnAttachment3 >> "DisplayName");
Attachment4 = getText (configFile >> "CfgWeapons" >> cnAttachment4 >> "DisplayName");


if (count Attachment > 0) then {VD_AttTraderID1 = VD_trader1 addAction [format ["Buy %1 for %2",Attachment,AttachmentCosts],"call VD_BuyAttachment"];};
if (count Attachment1 > 0) then {VD_AttTraderID2 = VD_trader1 addAction [format ["Buy %1 for %2",Attachment1,AttachmentCosts1],"call VD_BuyAttachment1"];};
if (count Attachment2 > 0) then {VD_AttTraderID3 = VD_trader1 addAction [format ["Buy %1 for %2",Attachment2,AttachmentCosts2],"call VD_BuyAttachment2"];};
if (count Attachment3 > 0) then {VD_AttTraderID4 = VD_trader1 addAction [format ["Buy %1 for %2",Attachment3,AttachmentCosts3],"call VD_BuyAttachment3"];};
if (count Attachment4 > 0) then {VD_AttTraderID5 = VD_trader1 addAction [format ["Buy %1 for %2",Attachment4,AttachmentCosts4],"call VD_BuyAttachment4"];};
VD_AttTraderID6 = VD_trader1 addAction ["Back","call VD_Back"];
VD_trader1 removeaction VD_AttTraderID0;
VD_trader1 removeaction VD_BkPckTraderID0;
VD_trader1 removeaction VD_ExplTraderID0;

VD_BuyAttachment = {
  params ["_target", "_caller"];
  _target = _this select 0;
  _caller = _this select 1;

  CurrentCash = {"rvg_money" == _x} count magazines _caller;
  if (CurrentCash >= AttachmentCosts && _caller canadd cnAttachment && _caller canadd cnAttachment) then {
  for "_i" from 1 to (AttachmentCosts) do {
  	_caller removemagazine "rvg_money";};
    _caller additem cnAttachment; hint format ["Bought %1", Attachment];
  	VD_trader1 removeaction VD_AttTraderID1;
  }
  else
  {
  	hint "Not enough money or not enough space in your inventory!";
  };
};

VD_BuyAttachment1 = {
  params ["_target", "_caller"];
  _target = _this select 0;
  _caller = _this select 1;
  CurrentCash = {"rvg_money" == _x} count magazines _caller;
if (CurrentCash >= AttachmentCosts1 && _caller canadd cnAttachment1) then {
for "_i" from 1 to (AttachmentCosts1) do {
	_caller removemagazine "rvg_money";};
  _caller additem cnAttachment1; hint format ["Bought %1", Attachment1];
	VD_trader1 removeaction VD_AttTraderID2;
}
else
{
	hint "Not enough money or not enough space in your inventory!";
};
};

VD_BuyAttachment2 = {
  params ["_target", "_caller"];
  _target = _this select 0;
  _caller = _this select 1;
  CurrentCash = {"rvg_money" == _x} count magazines _caller;
  if (CurrentCash >= AttachmentCosts2 && _caller canadd cnAttachment2) then {
  for "_i" from 1 to (AttachmentCosts2) do {
  	_caller removemagazine "rvg_money";};
    _caller additem cnAttachment2; hint format ["Bought %1", Attachment2];
  	VD_trader1 removeaction VD_AttTraderID3;
  }
  else
  {
  	hint "Not enough money or not enough space in your inventory!";
  };
};

VD_BuyAttachment3 = {
  params ["_target", "_caller"];
  _target = _this select 0;
  _caller = _this select 1;
  CurrentCash = {"rvg_money" == _x} count magazines _caller;
  if (CurrentCash >= AttachmentCosts3 && _caller canadd cnAttachment3) then {
  for "_i" from 1 to (AttachmentCosts3) do {
  	_caller removemagazine "rvg_money";};
    _caller additem cnAttachment3; hint format ["Bought %1", Attachment3];
  	VD_trader1 removeaction VD_AttTraderID4;
  }
  else
  {
  	hint "Not enough money or not enough space in your inventory!";
  };
};

VD_BuyAttachment4 = {
  params ["_target", "_caller"];
  _target = _this select 0;
  _caller = _this select 1;
  CurrentCash = {"rvg_money" == _x} count magazines _caller;
  if (CurrentCash >= AttachmentCosts4 && _caller canadd cnAttachment4) then {
  for "_i" from 1 to (AttachmentCosts4) do {
  	_caller removemagazine "rvg_money";};
    _caller additem cnAttachment4; hint format ["Bought %1", Attachment4];
  	VD_trader1 removeaction VD_AttTraderID5;
  }
  else
  {
  	hint "Not enough money or not enough space in your inventory!";
  };
};
};

////
//Explosives TRADERCAMP///////
///////////
VD_ExplosivesStore = {
VD_ExplosivesCosts = 190 +(selectrandom [0,1,2,3,4,5,6,7,8,9,10]);
VD_ExplosivesCosts1 = 190 +(selectrandom [0,1,2,3,4,5,6,7,8,9,10]);
VD_ExplosivesCosts2 = 190 +(selectrandom [0,1,2,3,4,5,6,7,8,9,10]);
VD_ExplosivesCosts3 = 190 +(selectrandom [0,1,2,3,4,5,6,7,8,9,10]);
VD_ExplosivesCosts4 = 190 +(selectrandom [0,1,2,3,4,5,6,7,8,9,10]);

VD_cnExplosives = selectRandom VD_ExplosivesArray;
VD_cnExplosives1 = selectRandom VD_ExplosivesArray;
VD_cnExplosives2 = selectRandom VD_GrenadesArray;
VD_cnExplosives3 = selectRandom VD_GrenadesArray;
VD_cnExplosives4 = selectRandom VD_GrenadesArray;

VD_Explosives = getText (configFile >> "CfgMagazines" >> VD_cnExplosives >> "DisplayName");
VD_Explosives1 = getText (configFile >> "CfgMagazines" >> VD_cnExplosives1 >> "DisplayName");
VD_Explosives2 = getText (configFile >> "CfgMagazines" >> VD_cnExplosives2 >> "DisplayName");
VD_Explosives3 = getText (configFile >> "CfgMagazines" >> VD_cnExplosives3 >> "DisplayName");
VD_Explosives4 = getText (configFile >> "CfgMagazines" >> VD_cnExplosives4 >> "DisplayName");

VD_ExplTraderID1 = VD_trader1 addAction [format ["Buy %1 for %2",VD_Explosives,VD_ExplosivesCosts],"call VD_BuyExplosives"];
VD_ExplTraderID2 = VD_trader1 addAction [format ["Buy %1 for %2",VD_Explosives1,VD_ExplosivesCosts1],"call VD_BuyExplosives1"];
VD_ExplTraderID3 = VD_trader1 addAction [format ["Buy %1 for %2",VD_Explosives2,VD_ExplosivesCosts2],"call VD_BuyExplosives2"];
VD_ExplTraderID4 = VD_trader1 addAction [format ["Buy %1 for %2",VD_Explosives3,VD_ExplosivesCosts3],"call VD_BuyExplosives3"];
VD_ExplTraderID5 = VD_trader1 addAction [format ["Buy %1 for %2",VD_Explosives4,VD_ExplosivesCosts4],"call VD_BuyExplosives4"];
VD_ExplTraderID6 = VD_trader1 addAction ["Back","call VD_Back"];
VD_trader1 removeaction VD_AttTraderID0;
VD_trader1 removeaction VD_BkPckTraderID0;
VD_trader1 removeaction VD_ExplTraderID0;

VD_BuyExplosives = {
  params ["_target", "_caller"];
  _target = _this select 0;
  _caller = _this select 1;
  CurrentCash = {"rvg_money" == _x} count magazines _caller;
  if (CurrentCash >= VD_ExplosivesCosts && _caller canAdd VD_cnExplosives) then {
  for "_i" from 1 to (VD_ExplosivesCosts) do {
  	_caller removemagazine "rvg_money";};
    _caller additem VD_cnExplosives; hint format ["Bought %1", VD_Explosives];
  	VD_trader1 removeaction VD_ExplTraderID1;
  }
  else
  {
  	hint "Not enough money or not enough space in your inventory!";
  };
};

VD_BuyExplosives1 = {
  params ["_target", "_caller"];
  _target = _this select 0;
  _caller = _this select 1;
  CurrentCash = {"rvg_money" == _x} count magazines _caller;
if (CurrentCash >= VD_ExplosivesCosts1 && _caller canAdd VD_cnExplosives1) then {
for "_i" from 1 to (VD_ExplosivesCosts1) do {
	_caller removemagazine "rvg_money";};
  _caller additem VD_cnExplosives1; hint format ["Bought %1", VD_Explosives1];
	VD_trader1 removeaction VD_ExplTraderID2;
}
else
{
	hint "Not enough money or not enough space in your inventory!";
};
};

VD_BuyExplosives2 = {
  params ["_target", "_caller"];
  _target = _this select 0;
  _caller = _this select 1;
  CurrentCash = {"rvg_money" == _x} count magazines _caller;
  if (CurrentCash >= VD_ExplosivesCosts2 && _caller canAdd VD_cnExplosives2) then {
  for "_i" from 1 to (VD_ExplosivesCosts2) do {
  	_caller removemagazine "rvg_money";};
    _caller additem VD_cnExplosives2; hint format ["Bought %1",VD_Explosives2];
  	VD_trader1 removeaction VD_ExplTraderID3;
  }
  else
  {
  	hint "Not enough money or not enough space in your inventory!";
  };
};

VD_BuyExplosives3 = {
  params ["_target", "_caller"];
  _target = _this select 0;
  _caller = _this select 1;
  CurrentCash = {"rvg_money" == _x} count magazines _caller;
  if (CurrentCash >= VD_ExplosivesCosts3 && _caller canAdd VD_cnExplosives3) then {
  for "_i" from 1 to (VD_ExplosivesCosts3) do {
  	_caller removemagazine "rvg_money";};
    _caller additem VD_cnExplosives3; hint format ["Bought %1", VD_Explosives3];
  	VD_trader1 removeaction VD_ExplTraderID4;
  }
  else
  {
  	hint "Not enough money or not enough space in your inventory!";
  };
};

VD_BuyExplosives4 = {
  params ["_target", "_caller"];
  _target = _this select 0;
  _caller = _this select 1;
  CurrentCash = {"rvg_money" == _x} count magazines _caller;
  if (CurrentCash >= VD_ExplosivesCosts4 && _caller canAdd VD_cnExplosives4) then {
  for "_i" from 1 to (VD_ExplosivesCosts4) do {
  	_caller removemagazine "rvg_money";};
    _caller additem VD_cnExplosives4; hint format ["Bought %1", VD_Explosives4];
  	VD_trader1 removeaction VD_ExplTraderID5;
  }
  else
  {
  	hint "Not enough money or not enough space in your inventory!";
  };
};
};
////
//CAMPSPAWNER
///
_VD_traderspawner = {

VD_TC_Spawnpoint = selectRandom VD_TC_MarkerArray;

VD_markerTC = createMarker ["TraderCamp", getmarkerpos VD_TC_Spawnpoint];
VD_markerTC setMarkerShape "ICON";
VD_markerTC setMarkerType "hd_dot";
VD_markerTC setMarkerText "Trader Camp";
hint "Hello Survivors, we have set up our Tradingpost at this location!";
VD_TC_markerspawned = true;

//1 FIREPLACE, TENTS, CAMONETS SPAWNER
_fireplace = "Campfire_burning_F" createVehicle getMarkerPos VD_TC_Spawnpoint;
_fireplace allowDamage false;

[getpos _fireplace, 0, call VD_TC_compo] call BIS_fnc_ObjectsMapper;

_alignpos = getpos _fireplace;
_objects = _alignpos nearobjects 40;
{_x allowDamage false;_x setVectorUp surfaceNormal position _x;} foreach _objects;



{_x enableDynamicSimulation true}foreach _objects;

//////////////////

//traderteleport

_pen1 = _fireplace nearObjects ["Land_PencilYellow_F", 20];
_pen2 = _fireplace nearObjects ["Land_PenBlack_F", 20];
_pen3 = _fireplace nearObjects ["Land_PenRed_F", 20];
_pen4 = _fireplace nearObjects ["Land_PencilBlue_F", 20];
_pen5 = _fireplace nearObjects ["Land_PencilGreen_F", 20];
_Objects append _pen1, _pen2, _pen3, _pen4, _pen5;

_pos1 = getpos selectrandom _pen1;
_pos2 = getpos selectrandom _pen2;
_pos3 = getpos selectrandom _pen3;
_pos4 = getpos selectrandom _pen4;
_pos5 = getpos selectrandom _pen5;

{waituntil {count _x >= 1}foreach [_pen1, _pen2, _pen3, _pen4, _pen5];};
_trader1 setpos _pos1;
_trader1 setdir 80;
sleep 0.5;
_trader2 setpos _pos2;
_trader2 setdir 170;
sleep 0.5;
_trader3 setpos _pos3;
_trader3 setdir 150;
sleep 0.5;
VD_trader1 setpos _pos4;

_traders enableDynamicSimulation true;
sleep 0.2;


////////////////////////////////////////
//8. TIMER IN SECONDS UNTIL THE CAMP DESPAWNS AND RESPAWNS AGAIN
///////////////////////////////////////////////////////
Sleep (random VD_UptimeRnd);
Sleep VD_UptimeFix;


waituntil {{_x distance _fireplace > VD_DeletionSaveZone}foreach (allPlayers select {lifeState _x != "DEAD-RESPAWN"}) - entities "HeadlessClient_F"};

deleteMarker VD_markerTC;
{deletevehicle _x}foreach _objects;

call _VD_traderspawner;
};

_traderspawn = selectRandom VD_TC_MarkerArray;

_traders = createGroup Civilian;
_trader1 = _traders createUnit ["C_man_polo_2_F", getMarkerPos _traderspawn, [], 0.1, "NONE"];
_trader2 = _traders createUnit ["C_man_polo_2_F", getMarkerPos _traderspawn, [], 0.1, "NONE"];
_trader3 = _traders createUnit ["C_man_polo_2_F", getMarkerPos _traderspawn, [], 0.1, "NONE"];
_trader1 setVariable ["isTrader", "rvg_gear_s", true];
_trader2 setVariable ["isTrader", "rvg_arms_s", true];
_trader3 setVariable ["isTrader", "rvg_supplies_s", true];
VD_trader1 = _traders createUnit ["C_man_polo_2_F", getMarkerPos _traderspawn, [], 0, "NONE"];
VD_AttTraderID0 = VD_trader1 addAction ["Buy Attachments",{call VD_AttachmentStore}, nil, 1.5, true, true, "", "true", 2, false, "", ""];
VD_ExplTraderID0 = VD_trader1 addAction ["Buy Explosives",{call VD_ExplosivesStore}, nil, 1.5, true, true, "", "true", 2, false, "", ""];
VD_BkPckTraderID0 = VD_trader1 addAction ["Buy Backpacks",{call VD_BackpackStore}, nil, 1.5, true, true, "", "true", 2, false, "", ""];

{[_x] call VD_TC_Equipper;_x allowDamage false;_x disableai "MOVE";} forEach units _traders;


call _VD_traderspawner;
