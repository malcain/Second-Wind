/*
	Breaking Point - Primary Config Class
				Created By Deathlyrage
*/

#define private		0
#define protected		1
#define public		2

#define true	1
#define false	0

#define ReadAndWrite		0
#define ReadAndCreate		1
#define ReadOnly		2
#define ReadOnlyVerified		3

class CfgPatches {
	class breakingpoint_vehicles {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {};
	};
};

class CfgVehicles {
	class Logic;	// External class reference
	class O_soldier_F; //External class reference

	class BP_PlayerLogic : Logic {
		displayName = "Breaking Point: Player Logic";
		author = "Deathlyrage";
		
		class EventHandlers {
			init = "";
			local = "";
		};
	};

	class BP_HeadlessClient : Logic {
		displayName = "Survivor";
		author = "Deathlyrage";
		
		class EventHandlers {
			init = "";
			local = "";
		};
	};
};
