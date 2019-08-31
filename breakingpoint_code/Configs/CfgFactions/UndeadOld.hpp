/*
  Breaking Point Mod for Arma 3

  Released under Arma Public Share Like Licence (APL-SA)
  https://www.bistudio.com/community/licenses/arma-public-license-share-alike

  Alderon Games Pty Ltd
*/

class Undead : BP_BaseFaction
{
	name = "Undead";
		
	class Levels : Levels
	{
		class Level_Base : Level_Base 
		{
			class Spawn 
			{
				//Array Of Toolbelt Items
				toolbelt[] = {};
				//Array Of Random (Clothing,Backpack,Vest)
				primary[] = {};
				launcher[] = {};
				handgun[] = {};
				clothing[] = 
				{
					"BP_Refugee_1_Z",
					"BP_Guardian_1_Z",
					"BP_Rebel_1_Z",
					"BP_Hunter_1_Z",
					"BP_Survivalist_1_Z"
				};
				backpack[] = {};
				vest[] = {};
				uniform[] = 
				{
					"BP_Refugee_1_Z",
					"BP_Guardian_1_Z",
					"BP_Rebel_1_Z",
					"BP_Hunter_1_Z",
					"BP_Survivalist_1_Z"
				};
				headgear[]={""};
				nvg[]={""};
				facewear[]={""};
			};
			class Uniform : BP_BaseGear 
			{
				//Array Of Weapons Inside Uniform
				weapons[] = {};
				//Array Of Magazines Inside Uniform
				magazines[] = {};
				//Array Of Items Inside Uniform ( Add to Spawn Toolbelt If they should be assigned )
				items[] = {};
			};
			class Vest : BP_BaseGear {};
			class Backpack : BP_BaseGear {};
		};
		
		class Level_0 : Level_Base 
		{
			maxHealth = 24000;
			regenRate = 60;
			class Spawn : Spawn
			{
				clothing[] = 
				{
					"BP_Refugee_F_Z",
					"BP_Guardian_F_Z",
					"BP_Rebel_F_Z",
					"BP_Hunter_F_Z",
					"BP_Survivalist_F_Z"
				};
				uniform[] = 
				{
					"BP_Refugee_F_Z",
					"BP_Guardian_F_Z",
					"BP_Rebel_F_Z",
					"BP_Hunter_F_Z",
					"BP_Survivalist_F_Z"
				};
				headgear[]={""};
				nvg[]={""};
				facewear[]={""};
			};
		};
		
		class Level_1 : Level_Base 
		{
			maxHealth = 24000;
			regenRate = 60;
			class Spawn : Spawn
			{
				clothing[] = 
				{
					"BP_Refugee_1_Z",
					"BP_Guardian_1_Z",
					"BP_Rebel_1_Z",
					"BP_Hunter_1_Z",
					"BP_Survivalist_1_Z"
				};
				uniform[] = 
				{
					"BP_Refugee_1_Z",
					"BP_Guardian_1_Z",
					"BP_Rebel_1_Z",
					"BP_Hunter_1_Z",
					"BP_Survivalist_1_Z"
				};
				headgear[]={""};
				nvg[]={""};
				facewear[]={""};
			};
		};
		
		class Level_2 : Level_Base 
		{
			maxHealth = 32000;
			regenRate = 90;
			class Spawn : Spawn
			{
				clothing[] = 
				{
					"BP_Refugee_2_Z",
					"BP_Guardian_2_Z",
					"BP_Rebel_2_Z",
					"BP_Hunter_2_Z",
					"BP_Survivalist_2_Z"
				};
				uniform[] = 
				{
					"BP_Refugee_2_Z",
					"BP_Guardian_2_Z",
					"BP_Rebel_2_Z",
					"BP_Hunter_2_Z",
					"BP_Survivalist_2_Z"
				};
				headgear[]={""};
				nvg[]={""};
				facewear[]={""};
			};
		};
		
		class Level_3 : Level_Base 
		{
			maxHealth = 40000;
			regenRate = 120;
			class Spawn : Spawn
			{
				clothing[] = 
				{
					"BP_Refugee_3_Z",
					"BP_Guardian_3_Z",
					"BP_Rebel_3_Z",
					"BP_Hunter_3_Z",
					"BP_Survivalist_3_Z"
				};
				uniform[] = 
				{
					"BP_Refugee_3_Z",
					"BP_Guardian_3_Z",
					"BP_Rebel_3_Z",
					"BP_Hunter_3_Z",
					"BP_Survivalist_3_Z"
				};
				headgear[]={""};
				nvg[]={""};
				facewear[]={""};
			};
		};
		
		class Level_4 : Level_Base 
		{
			maxHealth = 48000;
			regenRate = 120;
			class Spawn : Spawn
			{
				clothing[] = 
				{
					"BP_Refugee_3_Z",
					"BP_Guardian_3_Z",
					"BP_Rebel_3_Z",
					"BP_Hunter_3_Z",
					"BP_Survivalist_3_Z"
				};
				uniform[] = 
				{
					"BP_Refugee_3_Z",
					"BP_Guardian_3_Z",
					"BP_Rebel_3_Z",
					"BP_Hunter_3_Z",
					"BP_Survivalist_3_Z"
				};
				headgear[]={""};
				nvg[]={""};
				facewear[]={""};
			};
		};
	};
	
	class Points
	{
		base = 0;
		min = -3000;
		max = 11000;
		//Dont Include Level 0 ( Evil ) It's auto detected if < base value.
		levels[] = {0,2000,5000,10000};
		class Aid {
			class scavenger 
			{
				food = 10;
				drink = 10;
				bandage = 10;
				dressing = 25;
				morphine = 25;
				surgery = 50;
				gut = 50;
			};
			class Ranger 
			{
				food = 10;
				drink = 10;
				bandage = 10;
				dressing = 25;
				morphine = 25;
				surgery = 50;
				gut = 50;
			};
			class Nomad 
			{
				food = 10;
				drink = 10;
				bandage = 10;
				dressing = 25;
				morphine = 25;
				surgery = 50;
				gut = 50;
			};
			class Survivalist 
			{
				food = 25;
				drink = 25;
				bandage = 10;
				dressing = 25;
				morphine = 25;
				surgery = 75;
				gut = 50;
			};
			class Outlaw
			{
				food = 0;
				drink = 0;
				bandage = 0;
				dressing = 0;
				morphine = 0;
				surgery = 0;
				gut = 50;
			};
			class Hunter 
			{
				food = -5;
				drink = -5;
				bandage = -5;
				dressing = -10;
				morphine = -25;
				surgery = -50;
				gut = 50;
			};
		};
		class Destroy {
			vehicle = 50;
			class scavenger {
				storage = 50;
			};
			class Ranger {
				storage = 0;
			};
			class Nomad {
				storage = 0;
			};
			class Survivalist {
				storage = 0;
			};
			class Outlaw {
				storage = 50;
			};
			class Hunter {
				storage = 50;
			};
			class Engineer {
				storage = 50;
			};
		};
		class Hunt
		{
			//Animal Classname = Points Gained / Lost
			class Kill
			{
				BP_Chicken = 0;
				BP_Sheep = 0;
				BP_Dog = 0;
				BP_Dog_scavenger = 0;
				BP_Dog_Ranger = 0;
				BP_Dog_Nomad = 0;
				BP_Dog_Hunter = 0;
				BP_Dog_Outlaw = 0;
				BP_Dog_Survivalist = 0;
				BP_Dog_Engineer = 0;
			};
			
			class Gut
			{
				BP_Chicken = 0;
				BP_Sheep = 0;
				BP_Dog = 0;
				BP_Dog_scavenger = 0;
				BP_Dog_Ranger = 0;
				BP_Dog_Nomad = 0;
				BP_Dog_Hunter = 0;
				BP_Dog_Outlaw = 0;
				BP_Dog_Survivalist = 0;
				BP_Dog_Engineer = 0;
			};
		};
		class Kill {
			class scavenger {
				Level_0 = 100;
				Level_1 = 100;
				Level_2 = 100;
				Level_3 = 100;
				Level_4 = 100;
			};
			class Ranger {
				Level_0 = 100;
				Level_1 = 100;
				Level_2 = 100;
				Level_3 = 100;
				Level_4 = 100;
			};
			class Outlaw {
				Level_0 = 100;
				Level_1 = 100;
				Level_2 = 100;
				Level_3 = 100;
				Level_4 = 100;
			};
			class Hunter {
				Level_0 = 100;
				Level_1 = 100;
				Level_2 = 100;
				Level_3 = 100;
				Level_4 = 100;
			};
			class Nomad {
				Level_0 = 100;
				Level_1 = 100;
				Level_2 = 100;
				Level_3 = 100;
				Level_4 = 100;
			};
			class Survivalist {
				Level_0 = 100;
				Level_1 = 100;
				Level_2 = 100;
				Level_3 = 100;
				Level_4 = 100;
			};
			class Engineer {
				Level_0 = 100;
				Level_1 = 100;
				Level_2 = 100;
				Level_3 = 100;
				Level_4 = 100;
			};
			class Undead {
				Level_0 = 0;
				Level_1 = 0;
				Level_2 = 0;
				Level_3 = 0;
				Level_4 = 0;
			};
		};
	};
};