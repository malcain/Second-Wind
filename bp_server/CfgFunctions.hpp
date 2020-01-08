/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/

class CfgFunctions
{
	//Server Override For Client Functions and Event Handlers
	class BreakingPoint_Client 
	{
		tag = "BP";
		requiredAddons[] = {"breakingpoint_code"};
		class Storage {
			file = "\bp_server\functions\Storage";
			class onStorageInit {};
			class onStorageLocal {};
			class onStorageKilled {};
		};
		class Dog {
			file = "\bp_server\functions\Dog";
			class dogInit {};
			class dogLocal {};
			class dogHandleDamage {};
			class dogKilled {};
			class dogHurt {};
			delete dogFindTargetAgent;
			delete dogNameSet;
			delete loadDog;
			delete spawnDog;
		};
		class Vehicle {
			file = "\bp_server\functions\Vehicle";
			class vehicleDamage {};
			class vehicleEngine {};
			class vehicleFuel {};
			class vehicleInit {};
			class vehicleInteract {};
			class vehicleKilled {};
			class vehicleRepair {};
			class vehicleRemove {};
			class vehicleLocal {};
			class spawnVehicle {};
		};
		class Client_Init {
			file = "\bp_server\functions\Client\Init";
			class initUpdateUI {};
		};
	};

	class BPServer
	{
		clientOnly = 0;
		class Server
		{
			class PreInit {
				description = "Server Pre-Init";
				file = "\bp_server\preInit.sqf";
				preInit = 1;
			};
			class PostInit {
				description = "Server Post-Init";
				file = "\bp_server\postInit.sqf";
				postInit = 1;
			};
		};
		class Anomalies {
			file = "\bp_server\functions\Anomalies";
			class smuggler {};
			class smugglerSpawn {};
			class smugglerInitSpawn {};
		};
		class Creatures {
			file = "\bp_server\functions\Creatures";
			class depthToTarget {};
			class huntingBehavior {};
			class roamingDepth {};
		};
		class Effects {
			file = "\bp_server\functions\Effects";
			class underwaterBleeding {};
		};
		class General {
			file = "\bp_server\functions\General";
			class objectUID {};
			class unitCleanup {};
			class checkObject {};
			class eventKill {};
			class radioCheck {};
			class customChat {};
			class getMagazineNames {};
			class getMagazineIDs {};
			class getMagazineLocality {};
			class playerCheck {};
			class freshSpawnCheck {};
			class spawnServerLoot {};
			class setTimerCallback {};
		};
		class Simulation {
			file = "\bp_server\functions\Simulation";
			class checkSimulation {};
			class checkSimulationLocal {};
			class checkVehicleSimulation {};
		};
		class Faction {
			file = "\bp_server\functions\Faction";
			class addFactionPoints {};
			class radioManage {};
			class radioManageRemove {};
			class nearbyFactions {};
			class changeFace {};
		};
		class Strongholds {
			file = "\bp_server\functions\Strongholds";
			class captureStart {};
			class extendCapture {};
			class finishCapture {};
			class captureSave {};
			class captureLoad {};
		};
		class Actions {
			file = "\bp_server\functions\Actions";
			class hostageGive {};
			class hostageAdd {};
			class playerGive {};
			class groupInvite {};
			class groupLeaveTimer {};
			class dogGive {};
			class explodeRemControl {};
			class flash {};
		};
		class Traps {
			file = "\bp_server\functions\Traps";
			class publishTrap {};
			class deleteTrap {};
		};
		class Weather {
			file = "\bp_server\functions\Weather";
			class realWeather {};
			class realWeatherAltis {};
			class monsoon {};
			class monsoonHunt {};
		};
		class Loot {
			file = "\bp_server\functions\Loot";
			class containerSpawnLoot {};
			class dynamicLoot {};
		};
		class Queue {
			file = "\bp_server\functions\Queue";
			class updateQueueAdd {};
			class updateQueueDel {};
			class updateQueueProcess {};
			class destroyQueueAdd {};
			class destroyQueueDel {};
			class destroyQueueProcess {};
		};
		class Cleanup {
			file = "\bp_server\functions\Cleanup";
			class cleanupLoot {};
			class cleanupLoot3 {};
			class cleanupLootAll {};
			class cleanupRestart {};
			class cleanupCampFire {};
		};
		class Rcon {
			file = "\bp_server\functions\Rcon";
			class rconLock {};
			class rconUnlock {};
		};
		class Updates {
			file = "\bp_server\functions\Updates";
			class updateAll {};
			class updateTime {};
			class updateWeapons {};
			class updateMagazines {};
			class updateScripts {};
			class updateTraps {};
		};
		class Database {
			file = "\bp_server\functions\Database";
			class callExtension {};
			class callExtensionAsync {};
			class callExtensionAsyncLow {};
			class callExtensionAsyncCB {};
			class callExtensionDirect {};
			class callExtensionTicket {};
			class callExtensionResult {};
			class callExtensionArray {};
		};
		class Database_General {
			file = "\bp_server\functions\Database\General";
			class killLog {};
			class combatLog {};
			class storageLog {};
			class adminLog {};
		};
		class Database_Object {
			file = "\bp_server\functions\Database\Object";
			class updateObject {};
			class updateObjectForce {};
			class updateNearbyObjects {};
			class updateObjectDamage {};
			class updateObjectInventory {};
			class updateObjectPosition {};
		};
		class Database_Player {
			file = "\bp_server\functions\Database\Player";
			class dogSync {};
			class gearSync {};
			class logoutSync {};
			class medSync {};
			class posSync {};
			class statsSync {};
		};
		class Login {
			file = "\bp_server\functions\Login";
			class checkLogin {};
			class playerLogin {};
			class playerLoginAI {};
			class playerSetup {};
			class playerGearSet {};
			class factionGear {};
			class sendLogin {};
			class setupUnit {};
		};
		class Combatlog {
			file = "\bp_server\functions\Combatlog";
			class discoMorph {};
			class discoKilled {};
		};
		class Object {
			file = "\bp_server\functions\Object";
			class deleteObj {};
			class publishObj {};
			class destroyObj {};
			class lockObj {};
			class unlockObj {};
		};
		class Houses {
			file = "\bp_server\functions\Houses";
			class lockHouse {};
			class unlockHouse {};
			class publishHouse {};
			class deleteHouse {};
			class upgradeHouse {};
			class saveHouse {};
			class houseKilled {};
			class houseHandleDamage {};
		};
		class Events {
			file = "\bp_server\functions\Events";
			class onPlayerConnect {};
			class onPlayerDisconnect {};
			class traitorFlag {};
			class playerDeath {};
			class playerDeathReg {};
			class playerRespawn {};
			class playerLoot {};
			class medicalUpdate {};
			class setLocalVar {};
			class handleDisconnect {};
			class headGore {};
			class setPosATL {};
			class containerOpened {};
			class containerClosed {};
			class containerTakeAll {};
			class containerSpawn {};
			class simulationToggle {};
			class igniteEntity {};
			class checkHealRecent {};
			class changeOwner {};
		};
		class Wrecks {
			file = "\bp_server\functions\Wrecks";
			class helicrashCleanup {};
			class spawnCrashHeli {};
			class spawnCrashCargo {};
			class spawnCrashCar {};
			class spawnFerry {};
			class spawnHeliCargo {};
		};
	};
};

