/*
Vandeansons Dynamic Spawner Scripts
Shipwreck Spawner (Marker placed)
V3 - 21.09.2018
Settings: Check VD_Settings.sqf for settings!
*/
if (!isServer) exitwith {};
_WreckSpawner = {
  if (count VD_SW_MrkrArray == 0) exitWith {copyToClipboard str VD_SW_MrkrArrayBL; hint format ["VD Error Message: Not enough shipwreck markers available in the array 'VD_SW_SpawnAmountMrkr' VD_Settings.sqf, under 'Section 2.5: Ship Wrecks' for the requested %1 SW spawns! Or all markers where placed wrong on the map and have been removed from the array - place/move the markers on your map and start the script again. The blacklisted markers have been copied to your Clipboard, open notepad and Ctr + p to paste the array of blacklisted marker variable names.",VD_SW_SpawnAmountMrkr,VD_SW_MrkrArrayBL];VD_SW_MrkrArray = VD_SW_MrkrArrayBL; VD_SW_MrkrArrayBL = VD_SW_MrkrArrayBL - VD_SW_MrkrArrayBL;};
_WreckMrkr = selectrandom VD_SW_MrkrArray;

  VD_SW_MrkrArray = VD_SW_MrkrArray - [_WreckMrkr];
  VD_SW_MrkrArrayBL = VD_SW_MrkrArrayBL + [_WreckMrkr];
_WreckPos = [getMarkerPos _WreckMrkr, 1, 100, 1, 0, 0.9, 1, [], []] call BIS_fnc_findSafePos;


  _Wreck =  selectRandom VD_SW_Wrecks createVehicle _WreckPos;
  _Wreck allowDamage false;
  _Wreck setDir (random 359);



_LootCrate = "Box_IND_Ammo_F" createVehicle ([getpos _Wreck, 15, 25, 0, 0, 10,0, [], []] call BIS_fnc_findSafePos);

_LootCrate allowDamage false;
[_LootCrate] call VD_LootCrateT1;;

    _Object1 = selectrandom VD_SW_WreckClutter createVehicle ([getpos _Wreck, 5, 25, 0, 0, 10, 0,[],[]] call BIS_fnc_findSafePos);
    _Object2 = selectrandom VD_SW_WreckClutter createVehicle ([getpos _Wreck, 5, 25, 0, 0, 10, 0,[],[]] call BIS_fnc_findSafePos);
    _Object3 = selectrandom VD_SW_WreckClutter createVehicle ([getpos _Wreck, 5, 25, 0, 0, 10, 0,[],[]] call BIS_fnc_findSafePos);
    _Object4 = selectrandom VD_SW_WreckClutter createVehicle ([getpos _Wreck, 5, 25, 0, 0, 10, 0,[],[]] call BIS_fnc_findSafePos);
    _Object5 = selectrandom VD_SW_WreckClutter createVehicle ([getpos _Wreck, 5, 25, 0, 0, 10, 0,[],[]] call BIS_fnc_findSafePos);
    _Object6 = selectrandom VD_SW_WreckClutter createVehicle ([getpos _Wreck, 5, 25, 0, 0, 10, 0,[],[]] call BIS_fnc_findSafePos);
    _Object7 = selectrandom VD_SW_WreckClutter createVehicle ([getpos _Wreck, 5, 25, 0, 0, 10, 0,[],[]] call BIS_fnc_findSafePos);


_Objects = [];
    _Objects append  [_Object1,_Object2,_Object3,_Object4,_Object5,_Object6,_Object7];
    _Objects append [_LootCrate];
    {_x allowDamage false;
    _x setDir (random 359);}foreach _Objects;

    _Objects append [_Wreck];


{_x setVectorUp surfaceNormal position _x} foreach _Objects;
{_x enableDynamicSimulation true} foreach _Objects;

if (_wreck distance _WreckPos > 100)
exitwith {

{deleteVehicle _x} foreach _Objects;
if (VD_Debug_Hints_Allowed) then {hint format ["VD Error Message: Marker %1 not placed on the map or named wrong! It is also possible that % is placed wrong (not near a shore), removed from marker pool and placed in temporary blacklist until script restart. Place or move marker and start script again. Script loop will continue in 10 seconds with the remaining %2 markers",_WreckMrkr, count VD_SW_MrkrArray];};
call _WreckSpawner;
};

Sleep VD_UptimeFix;
Sleep (random VD_UptimeRnd);

waituntil {{_x distance _Wreck > VD_DeletionSaveZone}foreach (allPlayers select {lifeState _x != "DEAD-RESPAWN"}) - entities "HeadlessClient_F"};

{deleteVehicle _x} foreach _Objects;
VD_SW_MrkrArray = VD_SW_MrkrArray + [_WreckMrkr];
  VD_SW_MrkrArrayBL = VD_SW_MrkrArrayBL - [_WreckMrkr];
call _WreckSpawner;
};
VD_SW_MrkrArrayBL = [];
call _WreckSpawner;
