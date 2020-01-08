/*
	BP: SecondWind

	Released under APL-ND

	by Malcain
*/

#define VSoft		0
#define VArmor		1
#define VAir		2

#define private		0
#define protected		1
#define public		2

#define ReadAndWrite		0
#define ReadAndCreate		1
#define ReadOnly		2
#define ReadOnlyVerified		3

class CfgPatches {
	class bp_server {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"breakingpoint_code"};
	};
};

#include "CfgFunctions.hpp"
#include "CfgHelicrash.hpp"
#include "CfgCargocrash.hpp"
#include "CfgVehicleSpawns.hpp"

class CfgBreakingPointServerSettings
{
	class StorageObjects
	{
		storageLimit = 10;		// Storage object Limit
		immortalHavens = 0;		// make havens immortal 0 = Off 1 = On
	};
	class CustomLoot
	{
		customLootSetting = 1;	// 0 = SC off 		1 = SC on (default)	 	2 = ghosthotel weapon insted of SC
	};
	class MixedGroupPointsGain
	{
		disableMixedGroupPointsGain = 1;	//turns point gain for mixed group off, point lose still on 0 = off , 1 = on
	};
	class groupLeaveTimer
	{
		groupLeaveTimeOut = 600;	//time in seconds between leaving group and joining new/old one if  0 => Off
	};
	class applyMedicine
	{
		medicalCooldown = 1800;	//time in seconds for point gain on medical assistance
	};
	class BreakingPointExt
	{
		//Do not change this number unless you really know what you are doing!!!
		version = "0.001";
	};
};

class CfgDifficultyPresets
{
	class Regular
	{
		class Options
		{
			// Simulation
			reducedDamage = 0;    // Reduced damage (0 = disabled, 1 = enabled)

            //Situational awareness
			groupIndicators = 0;      // Group indicators   (0 = never, 1 = limited distance, 2 = always)
			friendlyTags = 0;         // Friendly name tags (0 = never, 1 = limited distance, 2 = always)
			enemyTags = 0;            // Enemy name tags    (0 = never, 1 = limited distance, 2 = always)
			detectedMines = 0;        // Detected mines     (0 = never, 1 = limited distance, 2 = always)
			commands = 0;             // Commands           (0 = never, 1 = fade out, 2 = always)
			waypoints = 1;            // Waypoints          (0 = never, 1 = fade out, 2 = always)
            tacticalPing = 0;       //Tactical Ping (0 = disabled, 1 = enabled)


			// Personal awareness
			weaponInfo = 1;           // Weapon info        (0 = never, 1 = fade out, 2 = always)
			stanceIndicator = 0;      // Stance indicator   (0 = never, 1 = fade out, 2 = always)
			staminaBar = 0;        // Stamina bar (0 = disabled, 1 = enabled)
			weaponCrosshair = 0;   // Weapon crosshair (0 = disabled, 1 = enabled)
			visionAid = 0;        // Vision aid (0 = disabled, 1 = enabled)

			// View
			thirdPersonView = 1;   // 3rd person view (0 = disabled, 1 = enabled)
			cameraShake = 1;       // Camera shake (0 = disabled, 1 = enabled)

			// Multiplayer
			scoreTable = 0;        // Score table (0 = disabled, 1 = enabled)
			deathMessages = 0;     // Killed by (0 = disabled, 1 = enabled)
			vonID = 1;             // VON ID (0 = disabled, 1 = enabled)

			// Misc
			mapContent = 0;        // Extended map content (0 = disabled, 1 = enabled)
			autoReport = 0;        // Automatic reporting (0 = disabled, 1 = enabled)
			multipleSaves = 0;     // Multiple saves (0 = disabled, 1 = enabled)
		};	
	};
	
	class Veteran
	{
		class Options
		{
			waypoints=1;		// Waypoints Veteran(1PP) (0 = never, 1 = fade out, 2 = always)
		};
	};
};
