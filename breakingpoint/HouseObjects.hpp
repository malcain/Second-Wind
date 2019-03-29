/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/

//Base Class
class BP_HouseObject : BP_SaveObject
{
	scope = private;
	mapSize = 0.7;
	accuracy = 0.2;
	vehicleClass = "Survival";
	destrType = "DestructNo";
	hideDistance = 50;
};

class BP_Stove : BP_HouseObject 
{
	scope = public;
	model = "\breakingpoint\models\BP_ovenObject.p3d";
	displayName = "Stove";
};

class BP_BarrelWater : BP_HouseObject 
{
	scope = public;
	//model = "\A3\Structures_F\Items\Vessels\BarrelWater_F.p3d";
	model = "\plp_containers\plp_ct_WoodBarrel.p3d";
	displayName = "Water Barrel";
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"\plp_containers\StcWoodBarrels\plp_ct_WoodBarrelDark_co.paa"
	};
};

class BP_BarrelFuel : BP_HouseObject 
{
	scope = public;
	model = "\A3\Structures_F\Items\Vessels\MetalBarrel_F.p3d";
	displayName = "Fuel Barrel";
    transportMaxMagazines = 0;
    transportMaxWeapons = 0;
    transportMaxBackpacks = 0;
	fuelCapacity = 125;
    transportFuel = 125;
};

class BP_BarrelFuel_Ranger : BP_BarrelFuel 
{
	model="\plp_containers\plp_ctf_ServiceBarrel.p3d";
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"\plp_containers\StcServiceBarrels\plp_cts_ServiceBarrelBP.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"\plp_containers\StcServiceBarrels\plp_ct_ServiceBarrelBP.rvmat"
	};
	fuelCapacity = 140;
    transportFuel = 140;
};

class BP_BarrelFuel_Outlaw : BP_BarrelFuel 
{
	model="\plp_containers\plp_ctf_Barrel.p3d";
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"\plp_containers\StcBarrels\plp_ct_BarrelRusty_Fuel.paa"
	};
};

class BP_BarrelFuel_Nomad : BP_BarrelFuel 
{
	model="\plp_containers\plp_ctf_Barrel.p3d";
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"\plp_containers\StcBarrels\plp_ct_BarrelBlue_Fuel.paa"
	};
};

class BP_BarrelFuel_Hunter : BP_BarrelFuel 
{
	model="\plp_containers\plp_ctf_Barrel.p3d";
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"\plp_containers\StcBarrels\plp_ct_BarrelOlive_Fuel.paa"
	};
};

class BP_BarrelFuel_Survivalist : BP_BarrelFuel 
{
	model="plp_containers\StcBarrels\plp_cts_BarrelOlive.p3d";
};

class BP_BarrelFuel_Scavenger : BP_BarrelFuel 
{
	model="\plp_containers\plp_ctf_Barrel.p3d";
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"\plp_containers\StcBarrels\plp_ct_BarrelRusty_Fuel.paa"
	};
};


class BP_Television: BP_HouseObject 
{
	scope = public;
	model = "\breakingpoint\models\bp_television1.p3d";
	displayName = "Old Television";
	hiddenSelections[] = {"base","screen"};
	hiddenSelectionsTextures[] = {"breakingpoint\textures\objects\television_co.paa","breakingpoint\textures\objects\television_screen0_co.paa"};
};
