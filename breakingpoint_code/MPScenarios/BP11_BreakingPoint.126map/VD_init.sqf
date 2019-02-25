if (!isserver) exitWith {};

  //add all spawned items including Ravage to ZEUS
    [] spawn {while {true} do {{
    _x addCuratorEditableObjects [allUnits,true];
    _x addCuratorEditableObjects [vehicles,true];
    _x addCuratorEditableObjects [allMissionObjects "All",true];
   } forEach allCurators;sleep 1;};};


execVM "VD_Settings.sqf";
execVM "VD_Script_Pack\VD_Arrays.sqf";sleep 1;
execvm "VD_Script_Pack\VD_Functions.sqf";
execvm "VD_Script_Pack\VD_BC_Composition.sqf";
execVM "VD_Script_Pack\VD_TCSpawner.sqf";


waitUntil {count ((allPlayers select {lifeState _x != "DEAD-RESPAWN"}) - entities "HeadlessClient_F") > 0};


//execVM "VD_Script_Pack\VD_TaskSystem\VD_Task_System.sqf";

//if (VD_HO_AmountOfSpawns >= 1) then {for "_i" from 1 to VD_HO_AmountOfSpawns do {execvm "VD_Script_Pack\VD_HO_Spawner.sqf"; sleep 1;};};

if (VD_DBO_Horses_AmountOfSpawns >= 1) then {for "_i" from 1 to VD_DBO_Horses_AmountOfSpawns do {execVM "VD_Script_Pack\VD_HorseSpawner.sqf";sleep 1;};};

if (VD_AS_AmountOfSpawns >= 1) then {for "_i" from 1 to VD_AS_AmountOfSpawns do {execvm "VD_Script_Pack\VD_AnimalSpawner.sqf";};};

if (VD_JBDOG_AmountOfSpawns >= 1) then {call compile preprocessFileLineNumbers "JBOY_Dog\JBOY_DogInit.sqf"; sleep 2;for "_i" from 1 to VD_JBDOG_AmountOfSpawns do {execvm "VD_Script_Pack\VD_JBDOG_FeraldogSpawn.sqf";};};

/*if (VD_CS_AmountOfSpawns >= 1) then {for "_i" from 1 to VD_CS_AmountOfSpawns do {execvm "VD_Script_Pack\VD_CS_Spawner.sqf"; sleep 1;};};

sleep 1;

if (VD_SW_SpawnAmountMrkr >= 1) then {for "_i" from 1 to VD_SW_SpawnAmountMrkr do {execvm "VD_Script_Pack\VD_SW_SpawnerMrkr.sqf"; sleep 1;};};

if (VD_SW_SpawnAmountRnd >= 1) then {for "_i" from 1 to VD_SW_SpawnAmountRnd do {execvm "VD_Script_Pack\VD_SW_Spawner.sqf"; sleep 1;};};

sleep 1;
if (VD_BC_CampSpawnAmountMrkr >= 1) then {for "_i" from 1 to VD_BC_CampSpawnAmountMrkr do {execVM "VD_Script_Pack\VD_BC_SpawnerMrkr.sqf";sleep 1;};};

if (VD_BC_CampSpawnAmountRnd >= 1) then {for "_i" from 1 to VD_BC_CampSpawnAmountRnd do {execVM "VD_Script_Pack\VD_BC_Spawner.sqf"; sleep 1;};};
sleep 1;
if (VD_EDN_Basebuilding) then {execvm "VD_Script_Pack\VD_EDN_BlueprintArray.sqf";
for "_i" from 1 to VD_EDN_MatboxAmount do {execvm "VD_Script_Pack\VD_EDN_MaterialSpawner.sqf"; sleep 2;};
sleep 1;
for "_i" from 1 to VD_EDN_MatboxAmount do {execvm "VD_Script_Pack\VD_EDN_MaterialSpawnerInHouse.sqf"; sleep 2;};};*/
