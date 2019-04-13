class CfgFunctions
{
	class BreakingPoint_Client
	{
		tag = "BP";
		file = "\breakingpoint_client\functions";
		requiredAddons[] = {"breakingpoint_client"};
		class Misc {
			file = "\breakingpoint_client\functions\Misc";
			class customChat {};
			class switchMove {};
			class resetSelfActions {};
		};
		class Actions
		{
			file = "\breakingpoint_client\functions\Actions";
			class houseExplosiveAdd {};
			class houseInfo {};
			class loadTurretAmmo {};
			class medicAnim {};
			class windCheck {};
			class trapUpdate {};
			class constructStorage {};
			class constructTrap {};
			class build {};
			class fireMake {};
			class firePack {};
			class flipVehicle {};
			class forceSave {};
			class fuelFill {};
			class groupAdd {};
			class groupDel {};
			class hostageAdd {};
			class hostageDel {};
			class hostageEscape {};
			class hostageFood {};
			class hostageWater {};
			class playerFood {};
			class playerWater {};
			class partRemove {};
			class siphonFuel {};
			class lootBody {};
			class eatBody {};
			class objectDestroy {};
			class objectIgnite {};
			class unpack {};
			class waterFill {};
			class groupFix {};
			class tameDog {};
			class safeLock {};
			class houseLock {};
			class houseUnlock {};
			class houseReset {};
			class vehicleEnterDriver {};
			class vehicleEnterPassenger {};
		};
		class Safe {
			file = "\breakingpoint_client\functions\Safe";
			class safeKeypad {};
			class safeKeypadSet {};
		};
		class Strongholds {
			file = "\breakingpoint_client\functions\Strongholds";
			class strongholdCheck {};
			class strongholdEnter {};
			class strongholdLeave {};
		};
		class Dog {
			file = "\breakingpoint_client\functions\Dog";
			//Event Handlers
			class dogInit {};
			class dogLocal {};
			class dogHandleDamage {};
			class dogKilled {};
			
			//Utility Functions
			class dogFindTargetAgent {};
			class dogNameSet {};
			class loadDog {};
			class spawnDog {};
		};
		class Dog_Actions {
			file = "\breakingpoint_client\functions\Actions\dog";
			class dogFeed {};
			class dogFollow {};
			class dogMove {};
			class dogSpeak {};
			class dogSpeed {};
			class dogStay {};
			class dogTrackAnimal {};
			class dogTrackPlayer {};
			class dogAlertPlayer {};
			class dogAlertStorage {};
			class dogAlertVehicle {};
			class dogCombatMode {};
			class dogWarn {};
		};
		class Television_Actions {
			file = "\breakingpoint_client\functions\Actions\television";
			class teleOn {};
			class teleOff {};
			class teleFull {};
			class teleCam {};
		};
		class Events {
			file = "\breakingpoint_client\functions\Events";
			class onFactionPoints {};
			class onDraw3D {};
		};
		class Group {
			file = "\breakingpoint_client\functions\Group";
			class groupIconInit {};
			class groupIconUpdate {};
			class groupIconDraw {};
		};
		class Towing {
			file = "\breakingpoint_client\functions\Towing";
			class towStart {};
			class towEnd {};
			class towSource {};
			class towTarget {};
		};
		class General {
			file = "\breakingpoint_client\functions\General";
			class eyeDir {};
			class losChance {};
			class losCheck {};
			class angleCheck {};
			class attackCheck {};
			class buildingUpdate {};
			class addMagazine {};
			class fileExists {};
			class pickupBike {};
			class dropWeaponHolderMag {};
		};
		class GUI {
			file = "\breakingpoint_client\functions\GUI";
			class onPause {};
			class skipBriefing { preInit = 1; };
			class spaceInterrupt {};
			class spaceInterruptInv {};
			class updateGui {};
			class UpdateUI {};
			class loginError {};
			class gameError {};
			class vonChannelID {};
			class vonEvent {};
		};
		class Inventory {
			file = "\breakingpoint_client\functions\Inventory";
			class magazineCheck {};
			class onInventoryOpened {};
			class onInventoryClosed {};
			class inventorySelectItem {};
			class inventoryTakeAll {};
			class inventoryChangeSkin {};
			class onTakeItem {};
			class onPutItem {};
		};
		class Sound {
			file = "\breakingpoint_client\functions\Sound";
			class playMPSound {};
		};
		class Storage {
			file = "\breakingpoint_client\functions\Storage";
			class onStorageInit {};
			class onStorageKilled {};
			class onStorageLocal {};
		};
		class Player {
			file = "\breakingpoint_client\functions\Player";
			class death {};
			class fired {};
			class updateVars {};
			class spawnCheck {};
			class medSave {};
			class resetPlayerNamespace {};
		};
		class Vehicle {
			file = "\breakingpoint_client\functions\Vehicle";
			class vehicleDamage {};
			class vehicleInit {};
			class vehicleInteract {};
			class vehicleKilled {};
			class vehicleEngine {};
		};
	};
};