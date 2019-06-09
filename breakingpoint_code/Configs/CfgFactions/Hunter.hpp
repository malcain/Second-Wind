/*
  Breaking Point Mod for Arma 3

  Released under Arma Public Share Like Licence (APL-SA)
  https://www.bistudio.com/community/licenses/arma-public-license-share-alike

  Alderon Games Pty Ltd
*/

	class Hunter : BP_BaseFaction
	{
		name = "Hunter";
		icon = "\breakingpoint_ui\icons\HunterIcon.paa";
		
		class Levels : Levels {
			class Level_Base : Level_Base {
				class Spawn {
					//Array Of Toolbelt Items
					toolbelt[] = {};
					//Array Of Random (Clothing,Backpack,Vest)
					primary[] = {};
					launcher[] = {"MeleeHatchet"};
					handgun[] = {};
					clothing[] = {};
					backpack[] = {};
					vest[] = {};
					uniform[] = {};
					headgear[] = {};
					nvg[] = {};
					facewear[] = {};
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
			
			class Level_0 : Level_Base {
				class Spawn {
					//Array Of Toolbelt Items
					toolbelt[] = {};
					//Array Of Random (Clothing,Backpack,Vest)
					primary[] = {};
					launcher[] = {"MeleeClub"};
					handgun[] = {};
					clothing[] = {"BP_Hunter_1"};
					backpack[] = {};
					vest[] = {};
					uniform[] = {"BP_Hunter_1"};
					headgear[] = {""};
					nvg[] = {""};
					facewear[] = {""};
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
				class Spawn {
					//Array Of Toolbelt Items
					toolbelt[] = {};
					//Array Of Random (Clothing,Backpack,Vest)
					primary[] = {};
					launcher[] = {"MeleeClub"};
					handgun[] = {};
					clothing[] = {"BP_Hunter_1"};
					backpack[] = {"BP_AssaultPack_khk"};
					vest[] = {};
					uniform[] = {"BP_Hunter_1"};
					headgear[] = {""};
					nvg[] = {""};
					facewear[] = {""};
				};
				class Uniform : BP_BaseGear  {
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
					magazines[] = {"ItemPainkiller","ItemKnife"};
					//Array Of Items Inside Backpack ( Add to Spawn Toolbelt If they should be assigned )
					items[] = {};
				};
			};
			class Level_2 : Level_Base {
				class Spawn {
					//Array Of Toolbelt Items
					toolbelt[] = {};
					//Array Of Random (Clothing,Backpack,Vest)
					primary[] = {};
					launcher[] = {"MeleeClub"};
					handgun[] = {};
					clothing[] = {"BP_Hunter_2"};
					backpack[] = {"BP_AssaultPack_sgg"};
					vest[] = {};
					uniform[] = {"BP_Hunter_2"};
					headgear[] = {""};
					nvg[] = {""};
					facewear[] = {""};
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
				class Backpack : BP_BaseGear 
				{
					//Array Of Weapons Inside Backpack
					weapons[] = {};
					//Array Of Magazines Inside Backpack
					magazines[] = {"ItemPainkiller","ItemKnife"};
					//Array Of Items Inside Backpack ( Add to Spawn Toolbelt If they should be assigned )
					items[] = {};
				};
			};
			class Level_3 : Level_Base {
				class Spawn {
					//Array Of Toolbelt Items
					toolbelt[] = {};
					//Array Of Random (Clothing,Backpack,Vest)
					primary[] = {};
					launcher[] = {"MeleeClub"};
					handgun[] = {};
					clothing[] = {"BP_Hunter_3"};
					backpack[] = {"BP_AssaultPack_mcamo"};
					vest[] = {};
					uniform[] = {"BP_Hunter_3"};
					headgear[] = {""};
					nvg[] = {""};
					facewear[] = {""};
				};
				class Uniform : BP_BaseGear  {
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
					magazines[] = {"ItemPainkiller","ItemKnife","ItemInfectedNeedle","ItemInfectedNeedle","ItemInfectedNeedle","ItemInfectedNeedle","ItemInfectedNeedle"};
					//Array Of Items Inside Backpack ( Add to Spawn Toolbelt If they should be assigned )
					items[] = {};
				};
			};
			class Level_4 : Level_Base {
				class Spawn {
					//Array Of Toolbelt Items
					toolbelt[] = {};
					//Array Of Random (Clothing,Backpack,Vest)
					primary[] = {};
					launcher[] = {"MeleeClub"};
					handgun[] = {};
					clothing[] = {"BP_Hunter_4"};
					backpack[] = {"BP_AssaultPack_mcamo"};
					vest[] = {};
					uniform[] = {"BP_Hunter_4","BP_Hunter_4_Green"};
					headgear[] = {"BP_Shemag_bandit","H_Shemag_olive"};
					nvg[] = {"TRYK_Shemagh_G_NV"};
					facewear[] = {""};//{"rvg_balaclava_4", "rvg_balaclavaLow_4", "rvg_balaclavaLow_1"};
				};
				class Uniform : BP_BaseGear  {
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
					magazines[] = {"ItemPainkiller","ItemKnife","ItemInfectedNeedle","ItemInfectedNeedle","ItemInfectedNeedle","ItemInfectedNeedle","ItemInfectedNeedle"};
					//Array Of Items Inside Backpack ( Add to Spawn Toolbelt If they should be assigned )
					items[] = {};
				};
			};
		};
		
		class Points {
			base = 0;
			min = -3000;
			max = 11000;
			//Dont Include Level 0 ( Evil ) It's auto detected if < base value.
			levels[]={0,2000,5000,10000};
			class Aid
			{
				class scavenger {
					food = 0;
					drink = 0;
					bandage = 0;
					dressing = 0;
					morphine = 0;
					surgery = 0;
					gut = 200;
				};
				class Ranger {
					food = 0;
					drink = 0;
					bandage = -10;
					dressing = -15;
					morphine = -15;
					surgery = -25;
					gut = 300;
				};
				class Nomad {
					food = 0;
					drink = 0;
					bandage = -10;
					dressing = -15;
					morphine = -15;
					surgery = -25;
					gut = 200;
				};
				class Survivalist {
					food = 0;
					drink = 0;
					bandage = -10;
					dressing = -15;
					morphine = -15;
					surgery = -50;
					gut = 300;
				};
				class Outlaw {
					food = 0;
					drink = 0;
					bandage = 0;
					dressing = 0;
					morphine = 0;
					surgery = 0;
					gut = 200;
				};
				class Hunter {
					food = 0;
					drink = 0;
					bandage = 0;
					dressing = 0;
					morphine = 0;
					surgery = 0;
					gut = 200;
				};
			};
			class Destroy {
				vehicle = 25;
				class scavenger {
					storage = 50;
				};
				class Ranger {
					storage = 50;
				};
				class Nomad {
					storage = 50;
				};
				class Survivalist {
					storage = 50;
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
					BP_Dog_Ranger = 0;
					BP_Dog_Nomad = 0;
					BP_Dog_Hunter = 0;
					BP_Dog_Outlaw = 0;
					BP_Dog_Survivalist = 0;
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
				};
			};
			class Kill {
				class scavenger {
					Level_0 = 25;
					Level_1 = 25;
					Level_2 = 75;
					Level_3 = 100;
					Level_4 = 100;
				};
				class Ranger {
					Level_0 = 25;
					Level_1 = 25;
					Level_2 = 75;
					Level_3 = 125;
					Level_4 = 150;
				};
				class Outlaw {
					Level_0 = 25;
					Level_1 = 25;
					Level_2 = 75;
					Level_3 = 100;
					Level_4 = 100;
				};
				class Hunter {
					Level_0 = 25;
					Level_1 = 25;
					Level_2 = 75;
					Level_3 = 100;
					Level_4 = 150;
				};
				class Nomad {
					Level_0 = 25;
					Level_1 = 25;
					Level_2 = 75;
					Level_3 = 100;
					Level_4 = 100;
				};
				class Survivalist {
					Level_0 = 25;
					Level_1 = 25;
					Level_2 = 75;
					Level_3 = 100;
					Level_4 = 125;
				};
			};
		};
	};