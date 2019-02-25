
/*
L O B B Y
Adjust your personal settings
*/

/*Section 1: General*/
VD_Debug_Hints_Allowed = true; //for mission making - throws hint at you if something is not right - WIP, currently applicable for VD_SW_SpawnerMrkr.sqf

VD_SpawnMinDist = 700; //the closest any site will spawn to any player

VD_SpawnMaxDist = 8000;//the furhest away from a player any site will spawn

VD_UptimeFix = 2500; // fix time before a site is despawned and respawned

VD_UptimeRnd = 1000; // random time added after fix time has expired until site despawn and respawn. e.g. additional time would be between 0 and 1000 seconds.

VD_DeletionSaveZone = 900; //a site will not despawn as long as any player is XYZ meters close


/*Section 1.1: AI*/

VD_AIChanceRifle = 30; // chance in % for AI to spawn with Rifle (0-100)
VD_AIChancePistol = 100; // chance in % for AI to spawn with Pistol (0-100)
VD_AIChanceMoney = 20; // maximum random amount of money AI may spawn with


/*Section 2: Site specific settings*/

/*Section 2.1: Hideouts*/

VD_HO_AmountOfSpawns = 10; //amount of sites to spawn, set to 0 to disable
VD_HO_Spawn_Array = ["VD_HO_Spawn_1", "VD_HO_Spawn_2", "VD_HO_Spawn_3", "VD_HO_Spawn_4", "VD_HO_Spawn_5", "VD_HO_Spawn_6", "VD_HO_Spawn_7", "VD_HO_Spawn_8", "VD_HO_Spawn_9","VD_HO_Spawn_10","VD_HO_Spawn_11","VD_HO_Spawn_12","VD_HO_Spawn_13","VD_HO_Spawn_14","VD_HO_Spawn_15","VD_HO_Spawn_16","VD_HO_Spawn_17","VD_HO_Spawn_18","VD_HO_Spawn_19","VD_HO_Spawn_20"];
VD_HO_DistanceCheck = 700;
/*Section 2.2: Crashsites*/

VD_CS_AmountOfSpawns = 10; //amount of sites to spawn, set to 0 to disable
VD_CS_spawnDistToOtherCS = 1000; // set mimimum distance in meters required between sites

VD_CS_Spawn_Array = ["VD_CS_Spawn_1", "VD_CS_Spawn_2", "VD_CS_Spawn_3", "VD_CS_Spawn_4", "VD_CS_Spawn_5", "VD_CS_Spawn_6", "VD_CS_Spawn_7", "VD_CS_Spawn_8", "VD_CS_Spawn_9","VD_CS_Spawn_10","VD_CS_Spawn_11","VD_CS_Spawn_12","VD_CS_Spawn_13","VD_CS_Spawn_14","VD_CS_Spawn_15","VD_CS_Spawn_16","VD_CS_Spawn_17","VD_CS_Spawn_18","VD_CS_Spawn_19","VD_CS_Spawn_20"];


/*Section 2.3: Basebuilding EDN Fortification*/
VD_EDN_Basebuilding = false; // set to true if Basebuilding script should run. set to false if not. seperate mod file needed, see forum post.
VD_EDN_MatboxAmount = 8;  // enter how many times the material box spawner should execute (each execution spawns 1 Material box in a house and 1 on the road)

/* Section2.4: Bandit Camp:*/

VD_BC_MrkrArray = ["VD_BC_Mrkr_1","VD_BC_Mrkr_2","VD_BC_Mrkr_3","VD_BC_Mrkr_4","VD_BC_Mrkr_5","VD_BC_Mrkr_6","VD_BC_Mrkr_7","VD_BC_Mrkr_8","VD_BC_Mrkr_9","VD_BC_Mrkr_10","VD_BC_Mrkr_11"];
VD_BC_CampSpawnAmountRnd = 0; //amount of sites to spawn at random positions (no markers), set to 0 to disable
VD_BC_CampSpawnAmountMrkr = 0; //amount of sites to spawn at preplaced markers, set to 0 to disable
VD_BC_DistanceCheck = 800;

/*Section2.5: Ship Wrecks*/

/*note that SW spawn even in the smallest puddle, not only on the coast where it makes sense, depending on your map, you might want to use markers only instead*/

/*place ALL markers below at the coast of your map, add more markers in this array (following the format) if you want to spawn more wrecks - amount of markers should always be double of spawned wrecks! The script finds suitable places near the marker, hence marker placement must not be 100% exact*/

VD_SW_MrkrArray = ["VD_SW_Mrkr_1","VD_SW_Mrkr_2","VD_SW_Mrkr_3","VD_SW_Mrkr_4","VD_SW_Mrkr_5","VD_SW_Mrkr_6","VD_SW_Mrkr_7","VD_SW_Mrkr_8","VD_SW_Mrkr_9","VD_SW_Mrkr_10","VD_SW_Mrkr_11","VD_SW_Mrkr_12","VD_SW_Mrkr_13","VD_SW_Mrkr_14","VD_SW_Mrkr_15","VD_SW_Mrkr_16","VD_SW_Mrkr_17","VD_SW_Mrkr_18","VD_SW_Mrkr_19","VD_SW_Mrkr_20"];

VD_SW_SpawnAmountRnd = 0;// set number: amount of Shipwrecks that should spawn randomly

VD_SW_DistanceCheck = 1000;

VD_SW_SpawnAmountMrkr = 0;// set number: amount of Shipwrecks that should spawn at placed markers - I recommend to always place double amount of markers as desired shipwrecks, to ensure changing spawnpositions at respawn. Hence, if you have more than or nearly 20 wrecks spawning, you should add additional markers to the array "VD_SW_MrkrArray" above and place the additional markers in your map

/*Section 2.6: Trader Camp*/
//add or remove markers here (one marker = TC refreshes at the same place). multiple Markers will make the site change position from time to time

VD_TC_MarkerArray = ["VD_TC_Mrkr_1","VD_TC_Mrkr_2","VD_TC_Mrkr_3","VD_TC_Mrkr_4","VD_TC_Mrkr_5","VD_TC_Mrkr_6","VD_TC_Mrkr_7"];

/*Section 2.7: Huntable Animals*/

VD_AS_AmountOfSpawns = 8;

/*Section 2.8: Rideable Horses*/
/*Requirements:
Scripts: VD_DBO_Horse_Spawner.sqf
Mods: DBO_Horses on steam
*/

VD_DBO_Horses_AmountOfSpawns = 50; //amount of horses to spawn, set to 0 to disable

/*Section 2.9: Feral dog pack by JBDOG*/
VD_JBDOG_AmountOfSpawns = 10;


/*Section 3: blacklist weapons or items or equipment from the loot arrays, enter as = ["classnameofitem","lastclassname"]; MIND THE COMMA!
Or exclude defined groups of items, e.g. Vanilla items or Mod specific items*/

//Remove Vanilla Weapons:

VD_NoVanillaPistols = true; //set to true to not spawn vanilla weapons
VD_NoVanillaRifles = true; //set to true to not spawn vanilla weapons
VD_NoVanillaLaunchers = true; //set to true to not spawn vanilla weapons

VD_NoVanillaVests = true;
VD_NoVanillaBackpacks = false;
VD_NoVanillaHeadgears = true;
VD_NoVanillaGoggles = false;
VD_NoVanillaUniforms = true;

//remove Ravaged Vanilla weaponState

VD_NoRavagedRifles = false; //set to true to not spawn ravaged vanilla equipment (sorry EO...;)

VD_NoRavageVests = false;
VD_NoRavageBackpacks = false;
VD_NoRavageHeadgears = false;
VD_NoRavageGoggles = false;
VD_NoRavageUniforms = false;

//LIB

VD_NoLIBRifles = false;
VD_NoLIBPistols = false;
VD_NoLIBLaunchers = true;
VD_NoLIBGoggles = true;
VD_NoLIBUniforms = true;
VD_NoLIBBackpacks = true;
VD_NoLIBHeadgears = false;
VD_NoLIBVests = true;

//CUP

VD_NoCUPLaunchers = true;
VD_NoCUPRifles = true;
VD_NoCUPPistols = true;

VD_NoCUPVests = true;
VD_NoCUPBackpacks = true;
VD_NoCUPHeadgears = true;
VD_NoCUPGoggles = true;
VD_NoCUPUniforms = true;


//weaponS
VD_WeaponArrayRiflesBlacklist = [];
VD_WeaponArrayPistolsBlacklist = [];
VD_WeaponArrayLaunchersBlacklist = [];

//Equipment
VD_EquipmentVestsBlacklist = [];
VD_EquipmentUniformsBlacklist = [];
VD_EquipmentBackpacksBlacklist = ["Horse_bergen","Horse_bergenru","horse_tack"];
VD_EquipmentHeadgearsBlacklist = [];
VD_EquipmentGogglesBlacklist = [];

//weapon attachments
VD_EquipmentMuzzlesBlacklist = [];
VD_EquipmentOpticsBlacklist = [];
VD_EquipmentFlashlightsBlacklist = [];
VD_EquipmentBipodsBlacklist = [];

/*Section 4: manually add classnames to Arrays*/

//Weapons
VD_WeaponArrayRiflesAdditional = [];
VD_WeaponArrayPistolsAdditional = [];
VD_WeaponArrayLaunchersAdditional = [];

//Equipment
VD_EquipmentVestsAdditional = [];
VD_EquipmentUniformsAdditional = [];
VD_EquipmentBackpacksAdditional = [];
VD_EquipmentHeadgearsAdditional = [];
VD_EquipmentGogglesAdditional = [];
//weapon attachments
VD_EquipmentMuzzlesAdditional = [];
VD_EquipmentOpticsAdditional = [];
VD_EquipmentFlashlightsAdditional = [];
VD_EquipmentBipodsAdditional = [];

/*Section 5: overwrite Arrays*/

//Weapons
VD_WeaponArrayRiflesReplace = [];
VD_WeaponArrayPistolsReplace = [];
VD_WeaponArrayLaunchersReplace = [];

//Equipment
VD_EquipmentVestsReplace = [];
VD_EquipmentUniformsReplace = [];
VD_EquipmentBackpacksReplace = [];
VD_EquipmentHeadgearsReplace = [];
VD_EquipmentGogglesReplace = [];
//weapon attachments
VD_EquipmentMuzzlesReplace = [];
VD_EquipmentOpticsReplace = [];
VD_EquipmentFlashlightsReplace = [];
VD_EquipmentBipodsReplace = [];



/*Dynamic Simulation: FPS saver, AI units will only become active if player is XYZ meters close or within view distance (scoped and non scoped)*/
enableDynamicSimulationSystem true; // dont change, FPS saver
DynSimDistManual = false; // set true if you want to define the distance from AI to player for dynamic simulation enabling yourself below
                          // set false if you want AI to become active in view distance, considers if you are looking through a scope and if there is fog)
DynSimDistManualRange = 2000; // if DynSimDistManual = true, this number is the distance to the player where the AI becomes active (in meters)

/*dont change*/
if (DynSimDistManual) then {"Group" setDynamicSimulationDistance DynSimDistManualRange;};

if (!DynSimDistManual) then {while {true} do {
		if (cameraView isEqualTo "GUNNER") then {
	            "Group" setDynamicSimulationDistance (viewDistance - (viewDistance * fog));
                     // Scoped
		} else {
		    "Group" setDynamicSimulationDistance ((viewDistance * 0.8) - (viewDistance * fog));
                    // Not scoped
		};
		uiSleep 0.25;
	};};

	if (DynSimDistManual) then {"Prop" setDynamicSimulationDistance DynSimDistManualRange;};

	if (!DynSimDistManual) then {while {true} do {
			if (cameraView isEqualTo "GUNNER") then {
		            "Prop" setDynamicSimulationDistance (viewDistance - (viewDistance * fog));
	                     // Scoped
			} else {
			    "Prop" setDynamicSimulationDistance ((viewDistance * 0.8) - (viewDistance * fog));
	                    // Not scoped
			};
			uiSleep 0.25;
		};};


/*dont change*/
if (DynSimDistManual) then {"Group" setDynamicSimulationDistance DynSimDistManualRange;};

if (!DynSimDistManual) then {while {true} do {
		if (cameraView isEqualTo "GUNNER") then {
	            "Group" setDynamicSimulationDistance (viewDistance - (viewDi
