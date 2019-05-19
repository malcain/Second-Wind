/*
	BP: Second Wind

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	by Malcain
*/

class CfgPatches 
{
	class BP_SW_Ruins
	{
		units[] = {};
		weapons[] = {}; 
		requiredVersion = 0.1;
		requiredAddons[]=
		{
			"A3_Structures_F_Exp"
		};
	};
};

class CfgVehicles
{
	
//External Class Refs
class House;
class House_F: House
	{
		class DestructionEffects;
	};
class Ruins_F;
class House_Small_F: House_F
{
	class DestructionEffects;
};

/*class Infrastructure_base_F;
class Infrastructure_base_F
{
	class DestructionEffects;
};*/

//Religious Tanoa
class Church;
class Church_F: Church
{
	class DestructionEffects;
};
class Land_Church_03_ruins_F: Ruins_F
{
	author="$STR_A3_Bohemia_Interactive";
	mapSize=42.419998;
	class SimpleObject
	{
		eden=0;
		animate[]={};
		hide[]={};
		verticalOffset=3.8540001;
		verticalOffsetWorld=0;
		init="''";
	};
	editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Land_Church_03_F.jpg";
	_generalMacro="Land_Church_03_ruins_F";
	scope=2;
	scopeCurator=0;
	displayName="$STR_A3_CfgVehicles_Land_Church_02_ruins_F0";
	model="\A3\Structures_F_Exp\Cultural\Church_03\Church_03_ruins_F.p3d";
	DLC="Expansion";
	icon="iconObject_1x3";
	editorCategory="EdCat_Ruins_Tanoa";
	editorSubcategory="EdSubcat_Religious";
};

class Land_Church_03_F: Church_F
{
	author="$STR_A3_Bohemia_Interactive";
	mapSize=20.43;
	class SimpleObject
	{
		eden=0;
		animate[]={};
		hide[]={};
		verticalOffset=7.2389998;
		verticalOffsetWorld=0;
		init="''";
	};
	editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Land_Church_03_F.jpg";
	_generalMacro="Land_Church_03_F";
	scope=2;
	scopeCurator=2;
	displayName="$STR_A3_CfgVehicles_Land_Church_03_F0";
	model="\A3\Structures_F_Exp\Cultural\Church_03\Church_03_F.p3d";
	DLC="Expansion";
	icon="iconObject_4x5";
	editorCategory="EdCat_Structures_Tanoa";
	editorSubcategory="EdSubcat_Religious";
	vehicleClass="Structures_Cultural";
	destrType="DestructBuilding";
	armor=400;
	explosionShielding=4.5;
	cost=50000;
	numberOfDoors=0;
	numberOfWindows=0;
	class DestructionEffects: DestructionEffects
	{
		class Ruin1
		{
			simulation="ruin";
			type="\A3\Structures_F_Exp\Cultural\Church_03\Church_03_ruins_F.p3d";
			position="";
			intensity=1;
			interval=1;
			lifeTime=1;
		};
	};
	class HitPoints
	{
	};
	class Damage
	{
		tex[]={};
		mat[]={};
	};
	class AnimationSources
	{
	};
	class UserActions
	{
	};
};

class Land_Mausoleum_01_ruins_F: Ruins_F
{
	author="$STR_A3_Bohemia_Interactive";
	mapSize=42.419998;
	class SimpleObject
	{
		eden=0;
		animate[]={};
		hide[]={};
		verticalOffset=3.8540001;
		verticalOffsetWorld=0;
		init="''";
	};
	editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Land_Mausoleum_01_F.jpg";
	_generalMacro="Land_Mausoleum_01_ruins_F";
	scope=2;
	scopeCurator=0;
	displayName="$STR_A3_CfgVehicles_Land_Mausoleum_01_F0";
	model="\A3\Structures_F_Exp\Cultural\Cemeteries\Mausoleum_01_ruins_F.p3d";
	DLC="Expansion";
	icon="iconObject_1x3";
	editorCategory="EdCat_Ruins_Tanoa";
	editorSubcategory="EdSubcat_Religious";
};

class Land_Mausoleum_01_F: House_Small_F
{
	author="$STR_A3_Bohemia_Interactive";
	mapSize=9.4399996;
	class SimpleObject
	{
		eden=0;
		animate[]={};
		hide[]={};
		verticalOffset=2.1989999;
		verticalOffsetWorld=0;
		init="''";
	};
	editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Land_Mausoleum_01_F.jpg";
	_generalMacro="Land_Mausoleum_01_F";
	scope=2;
	scopeCurator=2;
	displayName="$STR_A3_CfgVehicles_Land_Mausoleum_01_F0";
	model="\A3\Structures_F_Exp\Cultural\Cemeteries\Mausoleum_01_F.p3d";
	DLC="Expansion";
	icon="iconObject_1x1";
	editorCategory="EdCat_Structures_Tanoa";
	editorSubcategory="EdSubcat_Religious";
	vehicleClass="Structures_Cultural";
	destrType="DestructBuilding";
	armor=400;
	explosionShielding=4.5;
	numberOfDoors=0;
	numberOfWindows=0;
	class DestructionEffects: DestructionEffects
	{
		class Ruin1
		{
			simulation="ruin";
			type="\A3\Structures_F_Exp\Cultural\Cemeteries\Mausoleum_01_ruins_F.p3d";
			position="";
			intensity=1;
			interval=1;
			lifeTime=1;
		};
	};
	class HitPoints
	{
	};
	class Damage
	{
		tex[]={};
		mat[]={};
	};
	class AnimationSources
	{
	};
	class UserActions
	{
	};
};

//Slum Village Tanoa
class Land_Slum_01_ruins_F: Ruins_F
{
	author="$STR_A3_Bohemia_Interactive";
	mapSize=6.27;
	class SimpleObject
	{
		eden=0;
		animate[]={};
		hide[]={};
		verticalOffset=0.412;
		verticalOffsetWorld=0;
		init="''";
	};
	editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Land_Slum_01_F.jpg";
	_generalMacro="Land_Slum_01_ruins_F";
	scope=2;
	scopeCurator=0;
	displayName="$STR_A3_CfgVehicles_Land_Slum_01_F0";
	model="\A3\Structures_F_Exp\Civilian\Slum_01\Slum_01_ruins_F.p3d";
	DLC="Expansion";
	icon="iconObject_2x1";
	editorCategory="EdCat_Ruins_Tanoa";
	editorSubcategory="EdSubcat_Residential_Village";
};
class Land_Slum_01_F: House_Small_F
{
	author="$STR_A3_Bohemia_Interactive";
	mapSize=11.86;
	class SimpleObject
	{
		eden=0;
		animate[]=
		{
			
			{
				"door_1_rot",
				0
			},
		
			{
				"door_1_locked_rot",
				0
			}
		};
		hide[]={};
		verticalOffset=-0.074000001;
		verticalOffsetWorld=0;
		init="''";
	};
	editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Land_Slum_01_F.jpg";
	_generalMacro="Land_Slum_01_F";
	scope=2;
	scopeCurator=2;
	displayName="$STR_A3_CfgVehicles_Land_Slum_01_F0";
	model="\A3\Structures_F_Exp\Civilian\Slum_01\Slum_01_F.p3d";
	DLC="Expansion";
	icon="iconObject_3x2";
	editorCategory="EdCat_Structures_Tanoa";
	editorSubcategory="EdSubcat_Residential_Village";
	vehicleClass="Structures_Village";
	destrType="DestructDefault";
	armor=400;
	explosionShielding=4.5;
	cost=50000;
	numberOfDoors=1;
	numberOfWindows=0;
	class DestructionEffects: DestructionEffects
	{
		class Ruin1
		{
			simulation="ruin";
			type="\A3\Structures_F_Exp\Civilian\Slum_01\Slum_01_ruins_F.p3d";
			position="";
			intensity=1;
			interval=1;
			lifeTime=1;
		};
	};
	class HitPoints
	{
	};
	class Damage
	{
		tex[]={};
		mat[]={};
	};
	class AnimationSources
	{
		class Door_1_sound_source
		{
			source="user";
			initPhase=0;
			animPeriod=1;
			sound="OldWoodDoorsSound";
			soundPosition="Door_1_trigger";
		};
		class Door_1_noSound_source
		{
			source="user";
			initPhase=0;
			animPeriod=1;
		};
		class Door_1_locked_source
		{
			source="user";
			initPhase=0;
			animPeriod=0.80000001;
		};
	};
	class UserActions
	{
		class OpenDoor_1
		{
			displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
			displayName="$STR_DN_OUT_O_DOOR";
			position="Door_1_trigger";
			priority=11;
			actionNamedSel="Door_1_action";
			radius=1.75;
			aiMaxRange=5.25;
			onlyForPlayer=0;
			condition="((this animationSourcePhase 'Door_1_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
			statement="([this, 1, 1] call BIS_fnc_Door)";
		};
		class CloseDoor_1: OpenDoor_1
		{
			displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
			displayName="$STR_DN_OUT_C_DOOR";
			priority=11;
			condition="((this animationSourcePhase 'Door_1_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_1', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
			statement="([this, 1, 0] call BIS_fnc_Door)";
		};
	};
	actionBegin1="OpenDoor_1";
	actionEnd1="OpenDoor_1";
};

class Land_Slum_02_ruins_F: Ruins_F
{
	author="$STR_A3_Bohemia_Interactive";
	mapSize=6.27;
	class SimpleObject
	{
		eden=0;
		animate[]={};
		hide[]={};
		verticalOffset=0.412;
		verticalOffsetWorld=0;
		init="''";
	};
	editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Land_Slum_02_F.jpg";
	_generalMacro="Land_Slum_02_ruins_F";
	scope=2;
	scopeCurator=0;
	displayName="$STR_A3_CfgVehicles_Land_Slum_02_F0";
	model="\A3\Structures_F_Exp\Civilian\Slum_02\Slum_02_ruins_F.p3d";
	DLC="Expansion";
	icon="iconObject_2x1";
	editorCategory="EdCat_Ruins_Tanoa";
	editorSubcategory="EdSubcat_Residential_Village";
};
class Land_Slum_02_F: House_Small_F
{
	author="$STR_A3_Bohemia_Interactive";
	mapSize=11.51;
	class SimpleObject
	{
		eden=0;
		animate[]={};
		hide[]={};
		verticalOffset=0.37599999;
		verticalOffsetWorld=0;
		init="''";
		};
	editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Land_Slum_02_F.jpg";
	_generalMacro="Land_Slum_02_F";
	scope=2;
	scopeCurator=2;
	displayName="$STR_A3_CfgVehicles_Land_Slum_02_F0";
	model="\A3\Structures_F_Exp\Civilian\Slum_02\Slum_02_F.p3d";
	DLC="Expansion";
	icon="iconObject_4x5";
	editorCategory="EdCat_Structures_Tanoa";
	editorSubcategory="EdSubcat_Residential_Village";
	vehicleClass="Structures_Village";
	destrType="DestructDefault";
	armor=400;
	explosionShielding=4.5;
	cost=50000;
	numberOfDoors=0;
	numberOfWindows=0;
	class DestructionEffects: DestructionEffects
	{
		class Ruin1
		{
			simulation="ruin";
			type="\A3\Structures_F_Exp\Civilian\Slum_02\Slum_02_ruins_F.p3d";
			position="";
			intensity=1;
			interval=1;
			lifeTime=1;
		};
	};
	class HitPoints
	{
	};
	class Damage
	{
		tex[]={};
		mat[]={};
	};
	class AnimationSources
	{
	};
	class UserActions
	{
	};
};


class Land_Slum_03_ruins_F: Ruins_F
{
	author="$STR_A3_Bohemia_Interactive";
	mapSize=6.27;
	class SimpleObject
	{
		eden=0;
		animate[]={};
		hide[]={};
		verticalOffset=0.412;
		verticalOffsetWorld=0;
		init="''";
	};
	editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Land_Slum_03_F.jpg";
	_generalMacro="Land_Slum_03_ruins_F";
	scope=2;
	scopeCurator=0;
	displayName="$STR_A3_CfgVehicles_Land_Slum_03_F0";
	model="\A3\Structures_F_Exp\Civilian\Slum_03\Slum_03_ruins_F.p3d";
	DLC="Expansion";
	icon="iconObject_2x1";
	editorCategory="EdCat_Ruins_Tanoa";
	editorSubcategory="EdSubcat_Residential_Village";
};
class Land_Slum_03_F: House_Small_F
{
	author="$STR_A3_Bohemia_Interactive";
	mapSize=17.43;
	class SimpleObject
	{
		eden=0;
		animate[]=
		{
			
			{
				"door_1_rot",
				0
			},
			
			{
				"door_1_handle_rot_1",
				0
			},
			
			{
				"door_1_handle_rot_2",
				0
			},
			
			{
				"door_1_locked_rot",
				0
			},
			
			{
				"door_1_handle_locked_rot",
				0
			},
			
			{
				"door_2_rot",
				0
			},
			
			{
				"door_2_handle_rot_1",
				0
			},
			
			{
				"door_2_handle_rot_2",
				0
			},
			
			{
				"door_2_locked_rot",
				0
			},
			
			{
				"door_2_handle_locked_rot",
				0
			}
		};
		hide[]={};
		verticalOffset=1.266;
		verticalOffsetWorld=0;
		init="''";
	};
	editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Land_Slum_03_F.jpg";
	_generalMacro="Land_Slum_03_F";
	scope=2;
	scopeCurator=2;
	displayName="$STR_A3_CfgVehicles_Land_Slum_03_F0";
	model="\A3\Structures_F_Exp\Civilian\Slum_03\Slum_03_F.p3d";
	DLC="Expansion";
	icon="iconObject_1x1";
	editorCategory="EdCat_Structures_Tanoa";
	editorSubcategory="EdSubcat_Residential_Village";
	vehicleClass="Structures_Village";
	destrType="DestructDefault";
	armor=400;
	explosionShielding=4.5;
	cost=50000;
	numberOfDoors=2;
	numberOfWindows=0;
	class DestructionEffects: DestructionEffects
	{
		class Ruin1
		{
			simulation="ruin";
			type="\A3\Structures_F_Exp\Civilian\Slum_03\Slum_03_ruins_F.p3d";
			position="";
			intensity=1;
			interval=1;
			lifeTime=1;
		};
	};
	class HitPoints
	{
	};
	class Damage
	{
		tex[]={};
		mat[]={};
	};
	class AnimationSources
	{
		class Door_1_sound_source
		{
			source="user";
			initPhase=0;
			animPeriod=1;
			sound="OldWoodDoorsSound";
			soundPosition="Door_1_trigger";
		};
		class Door_1_noSound_source
		{
			source="user";
			initPhase=0;
			animPeriod=1;
		};
		class Door_1_locked_source
		{
			source="user";
			initPhase=0;
			animPeriod=0.80000001;
		};
		class Door_2_sound_source
		{
			source="user";
			initPhase=0;
			animPeriod=1;
			sound="OldWoodDoorsSound";
			soundPosition="Door_2_trigger";
		};
		class Door_2_noSound_source
		{
			source="user";
			initPhase=0;
			animPeriod=1;
		};
		class Door_2_locked_source
		{
			source="user";
			initPhase=0;
			animPeriod=0.80000001;
		};
	};
	class UserActions
	{
		class OpenDoor_1
		{
			displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
			displayName="$STR_DN_OUT_O_DOOR";
			position="Door_1_trigger";
			priority=11;
			actionNamedSel="Door_1_action";
			radius=1.75;
			aiMaxRange=5.25;
			onlyForPlayer=0;
			condition="((this animationSourcePhase 'Door_1_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
			statement="([this, 1, 1] call BIS_fnc_Door)";
		};
		class CloseDoor_1: OpenDoor_1
		{
			displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
			displayName="$STR_DN_OUT_C_DOOR";
			priority=11;
			condition="((this animationSourcePhase 'Door_1_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_1', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
			statement="([this, 1, 0] call BIS_fnc_Door)";
		};
		class OpenDoor_2
		{
			displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
			displayName="$STR_DN_OUT_O_DOOR";
			position="Door_2_trigger";
			priority=11;
			actionNamedSel="Door_2_action";
			radius=1.75;
			aiMaxRange=5.25;
			onlyForPlayer=0;
			condition="((this animationSourcePhase 'Door_2_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
			statement="([this, 2, 1] call BIS_fnc_Door)";
		};
		class CloseDoor_2: OpenDoor_2
		{
			displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
			displayName="$STR_DN_OUT_C_DOOR";
			priority=11;
			condition="((this animationSourcePhase 'Door_2_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_2', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
			statement="([this, 2, 0] call BIS_fnc_Door)";
		};
	};
	actionBegin1="OpenDoor_1";
	actionEnd1="OpenDoor_1";
	actionBegin2="OpenDoor_2";
	actionEnd2="OpenDoor_2";
};
class Land_Slum_04_ruins_F: Ruins_F
{
	author="$STR_A3_Bohemia_Interactive";
	mapSize=6.27;
	class SimpleObject
	{
		eden=0;
		animate[]={};
		hide[]={};
		verticalOffset=0.412;
		verticalOffsetWorld=0;
		init="''";
	};
	editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Land_Slum_04_F.jpg";
	_generalMacro="Land_Slum_04_ruins_F";
	scope=2;
	scopeCurator=0;
	displayName="$STR_A3_CfgVehicles_Land_Slum_04_F0";
	model="\A3\Structures_F_Exp\Civilian\Slum_04\Slum_04_ruins_F.p3d";
	DLC="Expansion";
	icon="iconObject_2x1";
	editorCategory="EdCat_Ruins_Tanoa";
	editorSubcategory="EdSubcat_Residential_Village";
};
class Land_Slum_04_F: House_Small_F
{
	author="$STR_A3_Bohemia_Interactive";
	mapSize=12.94;
	class SimpleObject
	{
		eden=0;
		animate[]={};
		hide[]={};
		verticalOffset=0.56400001;
		verticalOffsetWorld=0;
		init="''";
	};
	editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Land_Slum_04_F.jpg";
	_generalMacro="Land_Slum_04_F";
	scope=2;
	scopeCurator=2;
	displayName="$STR_A3_CfgVehicles_Land_Slum_04_F0";
	model="\A3\Structures_F_Exp\Civilian\Slum_04\Slum_04_F.p3d";
	DLC="Expansion";
	icon="iconObject_1x1";
	editorCategory="EdCat_Structures_Tanoa";
	editorSubcategory="EdSubcat_Residential_Village";
	vehicleClass="Structures_Village";
	destrType="DestructDefault";
	armor=400;
	explosionShielding=4.5;
	cost=50000;
	numberOfDoors=0;
	numberOfWindows=0;
	//replaceDamaged="Land_i_Stone_HouseSmall_V1_dam_F";
	class DestructionEffects: DestructionEffects
	{
		class Ruin1
		{
			simulation="ruin";
			type="\A3\Structures_F_Exp\Civilian\Slum_04\Slum_04_ruins_F.p3d";
			position="";
			intensity=1;
			interval=1;
			lifeTime=1;
		};
	};
	class HitPoints
	{
	};
	class Damage
	{
		tex[]={};
		mat[]={};
	};
	class AnimationSources
	{
	};
	class UserActions
	{
	};
};


//Garage Tanoa

class Land_GarageShelter_01_ruins_F: Ruins_F
{
	author="$STR_A3_Bohemia_Interactive";
	mapSize=6.27;
	class SimpleObject
	{
		eden=0;
		animate[]={};
		hide[]={};
		verticalOffset=0.412;
		verticalOffsetWorld=0;
		init="''";
	};
	editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Land_GarageShelter_01_F.jpg";
	_generalMacro="Land_GarageShelter_01_ruins_F";
	scope=2;
	scopeCurator=0;
	displayName="$STR_A3_CfgVehicles_Land_GarageShelter_01_F0";
	model="\A3\Structures_F_Exp\Civilian\Garages\GarageShelter_01_ruins_F.p3d";
	DLC="Expansion";
	icon="iconObject_2x1";
	editorCategory="EdCat_Ruins_Tanoa";
	editorSubcategory="EdSubcat_Residential_Village";
};
class Land_GarageShelter_01_F: House_Small_F
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=15.01;
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"door_1_rot",
					0
				},
				
				{
					"door_1_handle_rot_1",
					0
				},
				
				{
					"door_1_handle_rot_2",
					0
				},
				
				{
					"door_1_locked_rot",
					0
				},
				
				{
					"door_1_handle_locked_rot",
					0
				},
				
				{
					"door_2_rot",
					0
				},
				
				{
					"door_2_handle_rot_1",
					0
				},
				
				{
					"door_2_handle_rot_2",
					0
				},
				
				{
					"door_2_locked_rot",
					0
				},
				
				{
					"door_2_handle_locked_rot",
					0
				}
			};
			hide[]={};
			verticalOffset=1.35;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Land_GarageShelter_01_F.jpg";
		_generalMacro="Land_GarageShelter_01_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgVehicles_Land_GarageShelter_01_F0";
		model="\A3\Structures_F_Exp\Civilian\Garages\GarageShelter_01_F.p3d";
		DLC="Expansion";
		icon="iconObject_5x4";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Residential_Village";
		vehicleClass="Structures_Village";
		armor=400;
		explosionShielding=2.5;
		cost=50000;
		numberOfDoors=2;
		numberOfWindows=0;
		destrType="DestructDefault";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation="ruin";
				type="\A3\Structures_F_Exp\Civilian\Garages\GarageShelter_01_ruins_F.p3d";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
		};
		class HitPoints
		{
		};
		class Damage
		{
			tex[]={};
			mat[]={};
		};
		class AnimationSources
		{
			class Door_1_sound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericDoorsSound";
				soundPosition="Door_1_trigger";
			};
			class Door_1_noSound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Door_1_locked_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
			class Door_2_sound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericDoorsSound";
				soundPosition="Door_2_trigger";
			};
			class Door_2_noSound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Door_2_locked_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
		};
		class UserActions
		{
			class OpenDoor_1
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName="$STR_DN_OUT_O_DOOR";
				position="Door_1_trigger";
				priority=11;
				actionNamedSel="Door_1_action";
				radius=1.75;
				aiMaxRange=5.25;
				onlyForPlayer=0;
				condition="((this animationSourcePhase 'Door_1_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
				statement="([this, 1, 1] call BIS_fnc_Door)";
			};
			class CloseDoor_1: OpenDoor_1
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName="$STR_DN_OUT_C_DOOR";
				priority=11;
				condition="((this animationSourcePhase 'Door_1_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_1', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
				statement="([this, 1, 0] call BIS_fnc_Door)";
			};
			class OpenDoor_2
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName="$STR_DN_OUT_O_DOOR";
				position="Door_2_trigger";
				priority=11;
				actionNamedSel="Door_2_action";
				radius=1.75;
				aiMaxRange=5.25;
				onlyForPlayer=0;
				condition="((this animationSourcePhase 'Door_2_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
				statement="([this, 2, 1] call BIS_fnc_Door)";
			};
			class CloseDoor_2: OpenDoor_2
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName="$STR_DN_OUT_C_DOOR";
				priority=11;
				condition="((this animationSourcePhase 'Door_2_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_2', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
				statement="([this, 2, 0] call BIS_fnc_Door)";
			};
		};
		actionBegin1="OpenDoor_1";
		actionEnd1="OpenDoor_1";
		actionBegin2="OpenDoor_2";
		actionEnd2="OpenDoor_2";
	};
	
	//Tanoa small houses
	
	class Land_House_Small_04_ruins_F: Ruins_F
{
	author="$STR_A3_Bohemia_Interactive";
	mapSize=6.27;
	class SimpleObject
	{
		eden=0;
		animate[]={};
		hide[]={};
		verticalOffset=0.412;
		verticalOffsetWorld=0;
		init="''";
	};
	editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Land_House_Small_04_F.jpg";
	_generalMacro="Land_House_Small_04_ruins_F";
	scope=2;
	scopeCurator=0;
	displayName="$STR_A3_CfgVehicles_Land_House_Small_04_F0";
	model="\A3\Structures_F_Exp\Civilian\House_Small_04\House_Small_04_ruins_F.p3d";
	DLC="Expansion";
	icon="iconObject_2x1";
	editorCategory="EdCat_Ruins_Tanoa";
	editorSubcategory="EdSubcat_Residential_Village";
};

/*class Land_House_Small_04_F: House_Small_F
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=18.75;
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"door_1a_rot",
					0
				},
				
				{
					"door_1a_handle_rot_1",
					0
				},
				
				{
					"door_1a_handle_rot_2",
					0
				},
				
				{
					"door_1a_locked_rot",
					0
				},
				
				{
					"door_1a_handle_locked_rot",
					0
				},
				
				{
					"door_1b_rot",
					0
				},
				
				{
					"door_1b_handle_rot_1",
					0
				},
				
				{
					"door_1b_handle_rot_2",
					0
				},
				
				{
					"door_1b_locked_rot",
					0
				},
				
				{
					"door_1b_handle_locked_rot",
					0
				},
				
				{
					"door_2a_rot",
					0
				},
				
				{
					"door_2a_handle_rot_1",
					0
				},
				
				{
					"door_2a_handle_rot_2",
					0
				},
				
				{
					"door_2a_locked_rot",
					0
				},
				
				{
					"door_2a_handle_locked_rot",
					0
				},
				
				{
					"door_2b_rot",
					0
				},
				
				{
					"door_2b_handle_rot_1",
					0
				},
				
				{
					"door_2b_handle_rot_2",
					0
				},
				
				{
					"door_2b_locked_rot",
					0
				},
				
				{
					"door_2b_handle_locked_rot",
					0
				},
				
				{
					"door_3_rot",
					0
				},
				
				{
					"door_3_handle_rot_1",
					0
				},
				
				{
					"door_3_handle_rot_2",
					0
				},
				
				{
					"door_3_locked_rot",
					0
				},
				
				{
					"door_3_handle_locked_rot",
					0
				}
			};
			hide[]={};
			verticalOffset=1.066;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Land_House_Small_04_F.jpg";
		_generalMacro="Land_House_Small_04_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgVehicles_Land_House_Small_04_F0";
		model="\A3\Structures_F_Exp\Civilian\House_Small_04\House_Small_04_F.p3d";
		DLC="Expansion";
		icon="iconObject_4x5";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Residential_City";
		vehicleClass="Structures_Town";
		armor=400;
		explosionShielding=2.5;
		destrType="DestructDefault";
		cost=50000;
		numberOfDoors=3;
		numberOfWindows=0;
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation="ruin";
				type="\A3\Structures_F_Exp\Civilian\House_Small_04\House_Small_04_ruins_F.p3d";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
		};
		class HitPoints
		{
		};
		class Damage
		{
			tex[]={};
			mat[]={};
		};
		class AnimationSources
		{
			class Door_1_sound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericBigDoorsSound";
				soundPosition="Door_1_trigger";
			};
			class Door_1_noSound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Door_1_locked_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
			class Door_2_sound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericBigDoorsSound";
				soundPosition="Door_2_trigger";
			};
			class Door_2_noSound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Door_2_locked_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
			class Door_3_sound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericDoorsSound";
				soundPosition="Door_3_trigger";
			};
			class Door_3_noSound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Door_3_locked_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
		};
		class UserActions
		{
			class OpenDoor_1
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName="$STR_DN_OUT_O_DOOR";
				position="Door_1_trigger";
				priority=11;
				actionNamedSel="Door_1_action";
				radius=1.75;
				aiMaxRange=5.25;
				onlyForPlayer=0;
				condition="((this animationSourcePhase 'Door_1_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
				statement="([this, 1, 1] call BIS_fnc_Door)";
			};
			class CloseDoor_1: OpenDoor_1
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName="$STR_DN_OUT_C_DOOR";
				priority=11;
				condition="((this animationSourcePhase 'Door_1_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_1', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
				statement="([this, 1, 0] call BIS_fnc_Door)";
			};
			class OpenDoor_2
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName="$STR_DN_OUT_O_DOOR";
				position="Door_2_trigger";
				priority=11;
				actionNamedSel="Door_2_action";
				radius=1.75;
				aiMaxRange=5.25;
				onlyForPlayer=0;
				condition="((this animationSourcePhase 'Door_2_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
				statement="([this, 2, 1] call BIS_fnc_Door)";
			};
			class CloseDoor_2: OpenDoor_2
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName="$STR_DN_OUT_C_DOOR";
				priority=11;
				condition="((this animationSourcePhase 'Door_2_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_2', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
				statement="([this, 2, 0] call BIS_fnc_Door)";
			};
			class OpenDoor_3
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName="$STR_DN_OUT_O_DOOR";
				position="Door_3_trigger";
				priority=11;
				actionNamedSel="Door_3_action";
				radius=1.75;
				aiMaxRange=5.25;
				onlyForPlayer=0;
				condition="((this animationSourcePhase 'Door_3_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
				statement="([this, 3, 1] call BIS_fnc_Door)";
			};
			class CloseDoor_3: OpenDoor_3
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName="$STR_DN_OUT_C_DOOR";
				priority=11;
				condition="((this animationSourcePhase 'Door_3_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_3', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
				statement="([this, 3, 0] call BIS_fnc_Door)";
			};
		};
		actionBegin1="OpenDoor_1";
		actionEnd1="OpenDoor_1";
		actionBegin2="OpenDoor_2";
		actionEnd2="OpenDoor_2";
		actionBegin3="OpenDoor_3";
		actionEnd3="OpenDoor_3";
	};*/
	
	class Land_House_Small_05_ruins_F: Ruins_F
{
	author="$STR_A3_Bohemia_Interactive";
	mapSize=6.27;
	class SimpleObject
	{
		eden=0;
		animate[]={};
		hide[]={};
		verticalOffset=0.412;
		verticalOffsetWorld=0;
		init="''";
	};
	editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Land_House_Small_05_F.jpg";
	_generalMacro="Land_House_Small_05_ruins_F";
	scope=2;
	scopeCurator=0;
	displayName="$STR_A3_CfgVehicles_Land_House_Small_05_F0";
	model="\A3\Structures_F_Exp\Civilian\House_Small_05\House_Small_05_ruins_F.p3d";
	DLC="Expansion";
	icon="iconObject_2x1";
	editorCategory="EdCat_Ruins_Tanoa";
	editorSubcategory="EdSubcat_Residential_Village";
};
/*class Land_House_Small_05_F: House_Small_F
{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=16.57;
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"door_1_rot",
					0
				},
				
				{
					"door_1_locked_rot",
					0
				},
				
				{
					"door_2_rot",
					0
				},
				
				{
					"door_2_locked_rot",
					0
				}
			};
			hide[]={};
			verticalOffset=1.247;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Land_House_Small_05_F.jpg";
		_generalMacro="Land_House_Small_05_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgVehicles_Land_House_Small_05_F0";
		model="\A3\Structures_F_Exp\Civilian\House_Small_05\House_Small_05_F.p3d";
		DLC="Expansion";
		icon="iconObject_5x4";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Residential_City";
		vehicleClass="Structures_Town";
		armor=400;
		explosionShielding=2.5;
		destrType="DestructDefault";
		cost=50000;
		numberOfDoors=2;
		numberOfWindows=0;
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation="ruin";
				type="\A3\Structures_F_Exp\Civilian\House_Small_05\House_Small_05_ruins_F.p3d";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
		};
		class HitPoints
		{
		};
		class Damage
		{
			tex[]={};
			mat[]={};
		};
		class AnimationSources
		{
			class Door_1_sound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="OldWoodDoorsSound";
				soundPosition="Door_1_trigger";
			};
			class Door_1_noSound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Door_1_locked_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
			class Door_2_sound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="OldWoodDoorsSound";
				soundPosition="Door_2_trigger";
			};
			class Door_2_noSound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Door_2_locked_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
		};
		class UserActions
		{
			class OpenDoor_1
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName="$STR_DN_OUT_O_DOOR";
				position="Door_1_trigger";
				priority=11;
				actionNamedSel="Door_1_action";
				radius=1.75;
				aiMaxRange=5.25;
				onlyForPlayer=0;
				condition="((this animationSourcePhase 'Door_1_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
				statement="([this, 1, 1] call BIS_fnc_Door)";
			};
			class CloseDoor_1: OpenDoor_1
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName="$STR_DN_OUT_C_DOOR";
				priority=11;
				condition="((this animationSourcePhase 'Door_1_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_1', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
				statement="([this, 1, 0] call BIS_fnc_Door)";
			};
			class OpenDoor_2
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName="$STR_DN_OUT_O_DOOR";
				position="Door_2_trigger";
				priority=11;
				actionNamedSel="Door_2_action";
				radius=1.75;
				aiMaxRange=5.25;
				onlyForPlayer=0;
				condition="((this animationSourcePhase 'Door_2_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
				statement="([this, 2, 1] call BIS_fnc_Door)";
			};
			class CloseDoor_2: OpenDoor_2
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName="$STR_DN_OUT_C_DOOR";
				priority=11;
				condition="((this animationSourcePhase 'Door_2_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_2', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
				statement="([this, 2, 0] call BIS_fnc_Door)";
			};
		};
		actionBegin1="OpenDoor_1";
		actionEnd1="OpenDoor_1";
		actionBegin2="OpenDoor_2";
		actionEnd2="OpenDoor_2";
};*/
	
	//Tanoa Industrial
	
class Land_Warehouse_03_ruins_F: Ruins_F
{
	author="$STR_A3_Bohemia_Interactive";
	mapSize=6.27;
	class SimpleObject
	{
		eden=0;
		animate[]={};
		hide[]={};
		verticalOffset=0.412;
		verticalOffsetWorld=0;
		init="''";
	};
	editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Land_Warehouse_03_F.jpg";
	_generalMacro="Land_Warehouse_03_ruins_F";
	scope=2;
	scopeCurator=0;
	displayName="$STR_A3_CfgVehicles_Land_Warehouse_03_F0";
	model="\A3\Structures_F_Exp\Commercial\Warehouses\Warehouse_03_ruins_F.p3d";
	DLC="Expansion";
	icon="iconObject_2x1";
	editorCategory="EdCat_Ruins_Tanoa";
	editorSubcategory="EdSubcat_Residential_Village";
};

class Land_Warehouse_03_F: House_F
{
	author="$STR_A3_Bohemia_Interactive";
	mapSize=23.33;
	editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Land_Warehouse_03_F.jpg";
	_generalMacro="Land_Warehouse_03_F";
	scope=2;
	scopeCurator=2;
	displayName="$STR_A3_CfgVehicles_Land_Warehouse_03_F0";
	model="\A3\Structures_F_Exp\Commercial\Warehouses\Warehouse_03_F.p3d";
	DLC="Expansion";
	icon="iconObject_3x2";
	editorCategory="EdCat_Structures_Tanoa";
	editorSubcategory="EdSubcat_Industrial";
	vehicleClass="Structures_Town";
	armor=400;
	explosionShielding=2.5;
	destrType="DestructDefault";
	keepInEPESceneAfterDeath=1;
	cost=50000;
	numberOfDoors=5;
	numberOfWindows=14;
	class DestructionEffects: DestructionEffects
	{
		class Ruin1
		{
			simulation="ruin";
			type="\A3\Structures_F_Exp\Commercial\Warehouses\Warehouse_03_ruins_F.p3d";
			position="";
			intensity=1;
			interval=1;
			lifeTime=1;
		};
	};
};
	
class Land_WaterTower_01_ruins_F: Ruins_F
{
	author="$STR_A3_Bohemia_Interactive";
	mapSize=6.27;
	class SimpleObject
	{
		eden=0;
		animate[]={};
		hide[]={};
		verticalOffset=0.412;
		verticalOffsetWorld=0;
		init="''";
	};
	editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Land_WaterTower_01_F.jpg";
	_generalMacro="Land_WaterTower_01_ruins_F";
	scope=2;
	scopeCurator=0;
	displayName="$STR_A3_CfgVehicles_Land_WaterTower_01_F0";
	model="\A3\Structures_F_Exp\Infrastructure\WaterSupply\WaterTower_01_ruins_F.p3d";
	DLC="Expansion";
	icon="iconObject_2x1";
	editorCategory="EdCat_Ruins_Tanoa";
	editorSubcategory="EdSubcat_Residential_Village";
};

class Land_WaterTower_01_F: House_F
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=4.5100002;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=4.3439999;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Land_WaterTower_01_F.jpg";
		_generalMacro="Land_WaterTower_01_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgVehicles_Land_WaterTower_01_F0";
		model="\A3\Structures_F_Exp\Infrastructure\WaterSupply\WaterTower_01_F.p3d";
		DLC="Expansion";
		icon="iconObject_1x1";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Utilities";
		armor=200;
		explosionShielding=2;
		destrType="DestructDefault";
		ladders[]=
		{
			
			{
				"Ladder_1_start",
				"Ladder_1_end",
				2.5,
				"Ladder_1_action"
			}
		};
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation="ruin";
				type="\A3\Structures_F_Exp\Infrastructure\WaterSupply\WaterTower_01_ruins_F.p3d";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
		};
	};


class Land_WoodenShelter_01_ruins_F: Ruins_F
{
	author="$STR_A3_Bohemia_Interactive";
	mapSize=13.41;
	class SimpleObject
	{
		eden=0;
		animate[]={};
		hide[]={};
		verticalOffset=2.4749999;
		verticalOffsetWorld=0;
		init="''";
	};
	editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Land_WoodenShelter_01_F.jpg";
	_generalMacro="Land_WoodenShelter_01_ruins_F";
	scope=2;
	scopeCurator=0;
	displayName="$STR_A3_CfgVehicles_Land_WoodenShelter_01_F0";
	model="\A3\Structures_F_Exp\Commercial\Market\WoodenShelter_01_ruins_F.p3d";
	DLC="Expansion";
	icon="iconObject_2x3";
	editorCategory="EdCat_Ruins_Tanoa";
	editorSubcategory="EdSubcat_Market";
};
	
class Land_WoodenShelter_01_F: House_F
{
	author="$STR_A3_Bohemia_Interactive";
	mapSize=4.1900001;
	class SimpleObject
	{
		eden=0;
		animate[]={};
		hide[]={};
		verticalOffset=1.114;
		verticalOffsetWorld=0;
		init="''";
	};
	editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Land_WoodenShelter_01_F.jpg";
	_generalMacro="Land_WoodenShelter_01_F";
	scope=2;
	scopeCurator=2;
	displayName="$STR_A3_CfgVehicles_Land_WoodenShelter_01_F0";
	model="\A3\Structures_F_Exp\Commercial\Market\WoodenShelter_01_F.p3d";
	DLC="Expansion";
	icon="iconObject_5x4";
	editorCategory="EdCat_Structures_Tanoa";
	editorSubcategory="EdSubcat_Market";
	vehicleClass="Structures_Town";
	armor=200;
	explosionShielding=2;
	destrType="DestructDefault";
	class DestructionEffects: DestructionEffects
	{
		class Ruin1
		{
			simulation="ruin";
			type="\A3\Structures_F_Exp\Commercial\Market\WoodenShelter_01_ruins_F.p3d";
			position="";
			intensity=1;
			interval=1;
			lifeTime=1;
		};
	};
};
	
class Land_Shed_07_ruins_F: Ruins_F
{
	author="$STR_A3_Bohemia_Interactive";
	mapSize=13.41;
	class SimpleObject
	{
		eden=0;
		animate[]={};
		hide[]={};
		verticalOffset=2.4749999;
		verticalOffsetWorld=0;
		init="''";
	};
	editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Land_Shed_07_F.jpg";
	_generalMacro="Land_Shed_07_ruins_F";
	scope=2;
	scopeCurator=0;
	displayName="$STR_A3_CfgVehicles_Land_Shed_07_F0";
	model="\A3\Structures_F_Exp\Civilian\Sheds\Shed_07_ruins_F.p3d";
	DLC="Expansion";
	icon="iconObject_2x3";
	editorCategory="EdCat_Ruins_Tanoa";
	editorSubcategory="EdSubcat_Market";
};

class Land_Shed_07_F: House_Small_F
{
	author="$STR_A3_Bohemia_Interactive";
	mapSize=10.5;
	class SimpleObject
	{
		eden=0;
		animate[]={};
		hide[]={};
		verticalOffset=1.3940001;
		verticalOffsetWorld=0;
		init="''";
	};
	editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Land_Shed_07_F.jpg";
	_generalMacro="Land_Shed_07_F";
	scope=2;
	scopeCurator=2;
	displayName="$STR_A3_CfgVehicles_Land_Shed_07_F0";
	model="\A3\Structures_F_Exp\Civilian\Sheds\Shed_07_F.p3d";
	DLC="Expansion";
	icon="iconObject_2x1";
	editorCategory="EdCat_Structures_Tanoa";
	editorSubcategory="EdSubcat_Residential_Village";
	vehicleClass="Structures_Village";
	armor=140;
	explosionShielding=4;
	destrType="DestructDefault";
	cost=10000;
	numberOfDoors=0;
	numberOfWindows=0;
	class DestructionEffects: DestructionEffects
	{
	class Ruin1
		{
			simulation="ruin";
			type="\A3\Structures_F_Exp\Civilian\Sheds\Shed_07_ruins_F.p3d";
			position="";
			intensity=1;
			interval=1;
			lifeTime=1;
		};
	};
	class HitPoints
	{
	};
	class Damage
	{
		tex[]={};
		mat[]={};
	};
	class AnimationSources
	{
	};
	class UserActions
	{
	};
};
};