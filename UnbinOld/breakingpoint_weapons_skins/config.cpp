/*
	Breaking Point - Custom Weapons Config Class
			Created By Deathlyrage and Valtiel
*/

#define true	1
#define false	0

#define private		0
#define protected		1
#define public		2

#define ReadAndWrite		0
#define ReadAndCreate		1
#define ReadOnly		2
#define ReadOnlyVerified		3

class CfgPatches {
	class breakingpoint_weapons_skins {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"breakingpoint_weapons_cfg"};
	};
};

class CfgWeapons
{
	class BP_G17;
	class BP_G17_Soviet : BP_G17
	{
		displayName = "Glock 17 (Soviet)";
		picture = "\breakingpoint_weapons\icons\gear_g17_rifle_x_ca.paa";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\breakingpoint_weapons\textures\soviet\glock17_co.paa"};
	};
};