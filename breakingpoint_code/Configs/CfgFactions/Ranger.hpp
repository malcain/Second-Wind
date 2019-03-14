/*
  Breaking Point Mod for Arma 3

  Released under Arma Public Share Like Licence (APL-SA)
  https://www.bistudio.com/community/licenses/arma-public-license-share-alike

  Alderon Games Pty Ltd
*/

class Ranger : BP_BaseFaction 
{
	name = "Ranger";
	icon = "\breakingpoint_ui\icons\RangerIcon.paa";
	
	class Levels : Levels {
		class Level_Base : Level_Base {
			class Spawn {
				//Array Of Toolbelt Items
				toolbelt[] = {};
				//Array Of Random (Clothing,Backpack,Vest)
				primary[] = {};
				launcher[] = {};
				handgun[] = {};
				clothing[] = {};
				backpack[] = {};
				vest[] = {};
				uniform[] = {};
				headgear[]={""};
				nvg[]={""};
				facewear[]={""};
			};
			class Uniform : BP_BaseGear {
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
			class Spawn
			{
				//Array Of Toolbelt Items
				toolbelt[] = {};
				//Array Of Random (Clothing,Backpack,Vest)
				primary[] = {};
				launcher[] = {};
				handgun[] = {};
				clothing[] = {"BP_Guardian_F"};
				backpack[] = {};
				vest[] = {};
				uniform[] = {"BP_Guardian_F"};
				headgear[]={""};
				nvg[]={""};
				facewear[]={""};
			};
			class Uniform : BP_BaseGear {
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
		
		class Level_1 : Level_Base {
			class Spawn
			{
				//Array Of Toolbelt Items
				toolbelt[] = {"ItemCompass"};
				//Array Of Random (Clothing,Backpack,Vest)
				primary[] = {};
				launcher[] = {};
				handgun[] = {};
				clothing[] = {"BP_Guardian_1"};
				backpack[] = {"BP_AssaultPack_blk"};
				vest[] = {};
				uniform[] = {"BP_Guardian_1"};
				headgear[]={""};
				nvg[]={""};
				facewear[]={""};
			};
			class Uniform : BP_BaseGear {
				//Array Of Weapons Inside Uniform
				weapons[] = {};
				//Array Of Magazines Inside Uniform
				magazines[] = {"ItemBandage","ItemBandage"};
				//Array Of Items Inside Uniform ( Add to Spawn Toolbelt If they should be assigned )
				items[] = {};
			};
			class Vest : BP_BaseGear {};
			class Backpack : BP_BaseGear {
				//Array Of Weapons Inside Backpack
				weapons[] = {};
				//Array Of Magazines Inside Backpack
				magazines[] = {"ItemPainkiller","ItemPainkiller"};
				//Array Of Items Inside Backpack ( Add to Spawn Toolbelt If they should be assigned )
				items[] = {};
			};
		};
		class Level_2 : Level_Base {
			class Spawn {
				//Array Of Toolbelt Items
				toolbelt[] = {"ItemCompass"};
				//Array Of Random (Clothing,Backpack,Vest)
				primary[] = {};
				launcher[] = {};
				handgun[] = {};
				clothing[] = {"BP_Guardian_2"};
				backpack[] = {"BP_FieldPack_blk"};
				vest[] = {};
				uniform[] = {"BP_Guardian_2"};
				headgear[]={""};
				nvg[]={""};
				facewear[]={""};
			};
			class Uniform : BP_BaseGear {
				//Array Of Weapons Inside Uniform
				weapons[] = {};
				//Array Of Magazines Inside Uniform
				magazines[] = {"ItemBandage","ItemBandage"};
				//Array Of Items Inside Uniform ( Add to Spawn Toolbelt If they should be assigned )
				items[] = {};
			};
			class Vest : BP_BaseGear {};
			class Backpack : BP_BaseGear  {
				//Array Of Weapons Inside Backpack
				weapons[] = {};
				//Array Of Magazines Inside Backpack
				magazines[] = {"ItemPainkiller","ItemPainkiller","ItemMorphine","ItemFieldDressing"};
				//Array Of Items Inside Backpack ( Add to Spawn Toolbelt If they should be assigned )
				items[] = {};
			};
		};
		class Level_3 : Level_Base {
			class Spawn {
				//Array Of Toolbelt Items
				toolbelt[] = {"ItemCompass"};
				//Array Of Random (Clothing,Backpack,Vest)
				primary[] = {};
				launcher[] = {};
				handgun[] = {"BP_1911"};
				clothing[] = {"BP_Guardian_3"};
				backpack[] = {"BP_Mpack"};
				vest[] = {};
				uniform[] = {"BP_Guardian_3"};
				headgear[]={""};
				nvg[]={""};
				facewear[]={""};
			};
			class Uniform : BP_BaseGear  {
				//Array Of Weapons Inside Uniform
				weapons[] = {};
				//Array Of Magazines Inside Uniform
				magazines[] = {"BP_7Rnd_45acp","BP_7Rnd_45acp"};
				//Array Of Items Inside Uniform ( Add to Spawn Toolbelt If they should be assigned )
				items[] = {};
			};
			class Vest : BP_BaseGear {};
			class Backpack : BP_BaseGear 
			{
				//Array Of Weapons Inside Backpack
				weapons[] = {};
				//Array Of Magazines Inside Backpack
				magazines[] = {};
				//Array Of Items Inside Backpack ( Add to Spawn Toolbelt If they should be assigned )
				items[] = {};
			};
		};
		class Level_4 : Level_Base {
			class Spawn {
				//Array Of Toolbelt Items
				toolbelt[] = {"ItemCompass"};
				//Array Of Random (Clothing,Backpack,Vest)
				primary[] = {};
				launcher[] = {};
				handgun[] = {"BP_1911"};
				clothing[] = {"BP_Guardian_4_Lizard"};
				backpack[] = {"BP_Bergen_Hero"};
				vest[] = {"CUP_V_C_Police_Holster"};
				uniform[] = {"BP_Guardian_4_Lizard","BP_Guardian_4","BP_Guardian_4_Camo"};
				headgear[] = {"CUP_H_NAPA_Fedora", "CUP_H_C_Policecap_01"};
				nvg[] = {"", "TRYK_G_Shades_Blue_NV"};
				facewear[] = {"CFP_Neck_Plain3", "CFP_Scarfbeard_grey", "CFP_Scarfbeardshades_grey", "CFP_Scarfshades_grey", "LOG_Shemagh_Gry", "L_Shemagh_Red"};
			};
			class Uniform : BP_BaseGear  {
				//Array Of Weapons Inside Uniform
				weapons[] = {};
				//Array Of Magazines Inside Uniform
				magazines[] = {"BP_7Rnd_45acp","BP_7Rnd_45acp"};
				//Array Of Items Inside Uniform ( Add to Spawn Toolbelt If they should be assigned )
				items[] = {};
			};
			class Vest : BP_BaseGear {};
			class Backpack : BP_BaseGear 
			{
				//Array Of Weapons Inside Backpack
				weapons[] = {};
				//Array Of Magazines Inside Backpack
				magazines[] = {};
				//Array Of Items Inside Backpack ( Add to Spawn Toolbelt If they should be assigned )
				items[] = {};
			};
		};
	};
	
	class Points
	{
		base = 0;
		min = -3000;
		max = 11000;
		//Dont Include Level 0 ( Evil ) It's auto detected if < base value.
		levels[]={0,2000,5000,10000};
		class Aid {
			class scavenger {
				food = -10;
				drink = -10;
				bandage = -10;
				dressing = -20;
				morphine = -20;
				surgery = -75;
				gut = 0;
			};
			class Ranger {
				food = 10;
				drink = 10;
				bandage = 10;
				dressing = 15;
				morphine = 15;
				surgery = 30;
				gut = -2500;
			};
			class Nomad {
				food = 10;
				drink = 10;
				bandage = 10;
				dressing = 15;
				morphine = 15;
				surgery = 30;
				gut = -1000;
			};
			class Survivalist {
				food = 10;
				drink = 10;
				bandage = 10;
				dressing = 15;
				morphine = 15;
				surgery = 30;
				gut = -1000;
			};
			class Outlaw {
				food = -10;
				drink = -10;
				bandage = -10;
				dressing = -20;
				morphine = -20;
				surgery = -50;
				gut = 0;
			};
			class Hunter {
				food = -10;
				drink = -10;
				bandage = -10;
				dressing = -25;
				morphine = -25;
				surgery = -100;
				gut = 0;
			};
		};
		class Destroy {
			vehicle = 10;
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
			class None {
					storage = 40;
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
				BP_Dog_Ranger = -250;
				BP_Dog_Nomad = 0;
				BP_Dog_Hunter = 25;
				BP_Dog_Outlaw = 0;
				BP_Dog_Survivalist = 0;
			};
			
			class Gut
			{
				BP_Chicken = 0;
				BP_Sheep = 0;
				BP_Dog = 0;
				BP_Dog_scavenger = 0;
				BP_Dog_Ranger = -250;
				BP_Dog_Nomad = 0;
				BP_Dog_Hunter = 5;
				BP_Dog_Outlaw = 0;
				BP_Dog_Survivalist = 0;
			};
		};
		class Kill {
			class scavenger {
				Level_0 = 25;
				Level_1 = 25;
				Level_2 = 75;
				Level_3 = 150;
				Level_4 = 150;
			};
			class Ranger {
				Level_0 = 150;
				Level_1 = -1000;
				Level_2 = -2000;
				Level_3 = -3000;
				Level_4 = -3000;
			};
			class Outlaw {
				Level_0 = 50;
				Level_1 = 50;
				Level_2 = 100;
				Level_3 = 150;
				Level_4 = 200;
			};
			class Hunter {
				Level_0 = 75;
				Level_1 = 75;
				Level_2 = 125;
				Level_3 = 175;
				Level_4 = 250;
			};
			class Nomad {
				Level_0 = 100;
				Level_1 = -500;
				Level_2 = -1000;
				Level_3 = -2500;
				Level_4 = -2500;
			};
			class Survivalist {
				Level_0 = 100;
				Level_1 = -500;
				Level_2 = -1000;
				Level_3 = -2000;
				Level_4 = -2000;
			};
		};
	};
};