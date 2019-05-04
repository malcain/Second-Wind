/*
  Breaking Point Mod for Arma 3

  Released under Arma Public Share Like Licence (APL-SA)
  https://www.bistudio.com/community/licenses/arma-public-license-share-alike

  Alderon Games Pty Ltd
*/
	class Survivalist : BP_BaseFaction
	{
	    name = "Survivalist";
		description = "Insert Epic Heroic Description Here";
		icon = "\breakingpoint_ui\icons\SurvivalistIcon.paa";
		
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
					clothing[] = {"BP_Survivalist_F"};
					backpack[] = {};
					vest[] = {};
					uniform[] = {"BP_Survivalist_F"};
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
					toolbelt[] = {};
					//Array Of Random (Clothing,Backpack,Vest)
					primary[] = {};
					launcher[] = {};
					handgun[] = {};
					clothing[] = {"BP_Survivalist_1"};
					backpack[] = {"BP_AssaultPack_grs"};
					vest[] = {};
					uniform[] = {"BP_Survivalist_1"};
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
					toolbelt[] = {"ItemMap"};
					//Array Of Random (Clothing,Backpack,Vest)
					primary[] = {};
					launcher[] = {};
					handgun[] = {};
					clothing[] = {"BP_Survivalist_2"};
					backpack[] = {"BP_Kitbag_drt"};
					vest[] = {"V_VPack_BP"};
					uniform[] = {"BP_Survivalist_2"};
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
				class Vest : BP_BaseGear  {
					//Array Of Weapons Inside Backpack
					weapons[] = {};
					//Array Of Magazines Inside Backpack
					magazines[] = {"ItemKnife","BP_15Rnd_9x21_Rubber","BP_15Rnd_9x21_Rubber","BP_15Rnd_9x21_Rubber"};
					//Array Of Items Inside Backpack ( Add to Spawn Toolbelt If they should be assigned )
					items[] = {};
				};
				class Backpack : BP_BaseGear  {
					//Array Of Weapons Inside Backpack
					weapons[] = {"BP_TranQPistol"};
					//Array Of Magazines Inside Backpack
					magazines[] = {"ItemPainkiller","ItemPainkiller","ItemFieldDressing"};
					//Array Of Items Inside Backpack ( Add to Spawn Toolbelt If they should be assigned )
					items[] = {};
				};
			};
			class Level_3 : Level_Base {
				class Spawn {
					//Array Of Toolbelt Items
					toolbelt[] = {"ItemMap"};
					//Array Of Random (Clothing,Backpack,Vest)
					primary[] = {};
					launcher[] = {};
					handgun[] = {};
					clothing[] = {"BP_Survivalist_3"};
					backpack[] = {"BP_Kitbag_grs"};
					vest[] = {"V_CPack_BP"};
					uniform[] = {"BP_Survivalist_3"};
					headgear[]={""};
					nvg[]={""};
					facewear[]={""};
				};
				class Uniform : BP_BaseGear  {
					//Array Of Weapons Inside Uniform
					weapons[] = {};
					//Array Of Magazines Inside Uniform
					magazines[] = {"ItemBandage","ItemBandage"};
					//Array Of Items Inside Uniform ( Add to Spawn Toolbelt If they should be assigned )
					items[] = {};
				};
				class Vest : BP_BaseGear {
					//Array Of Weapons Inside Backpack
					weapons[] = {};
					//Array Of Magazines Inside Backpack
					magazines[] = {"BP_10Rnd_762Rubber_Mag","BP_10Rnd_762Rubber_Mag"};
					//Array Of Items Inside Backpack ( Add to Spawn Toolbelt If they should be assigned )
					items[] = {};
				};
				class Backpack : BP_BaseGear 
				{
					//Array Of Weapons Inside Backpack
					weapons[] = {"BP_TranQRifle"};
					//Array Of Magazines Inside Backpack
					magazines[] = {"ItemAntibiotic","ItemDuctTape","ItemKnife","PartWoodPile"};
					//Array Of Items Inside Backpack ( Add to Spawn Toolbelt If they should be assigned )
					items[] = {"Binocular", "BP_SOS"};
				};
			};
			class Level_4 : Level_Base {
				class Spawn {
					//Array Of Toolbelt Items
					toolbelt[] = {"ItemMap"};
					//Array Of Random (Clothing,Backpack,Vest)
					primary[] = {};
					launcher[] = {};
					handgun[] = {};
					clothing[] = {"BP_Survivalist_4"};
					backpack[] = {"BP_Kitbag_grs"};
					vest[] = {"V_CPack_BP"};
					uniform[] = {"BP_Survivalist_4","BP_Survivalist_4_Dirt","BP_Survivalist_4_Stone","BP_Survivalist_4_Classic","BP_Survivalist_4_Tree","BP_Survivalist_4_Snow"};
					headgear[]={""};
					nvg[]={""};
					facewear[]={""};
				};
				class Uniform : BP_BaseGear  {
					//Array Of Weapons Inside Uniform
					weapons[] = {};
					//Array Of Magazines Inside Uniform
					magazines[] = {"ItemBandage","ItemBandage"};
					//Array Of Items Inside Uniform ( Add to Spawn Toolbelt If they should be assigned )
					items[] = {};
				};
				class Vest : BP_BaseGear {
					//Array Of Weapons Inside Backpack
					weapons[] = {};
					//Array Of Magazines Inside Backpack
					magazines[] = {"BP_10Rnd_762Rubber_Mag","BP_10Rnd_762Rubber_Mag","BP_15Rnd_9x21_Rubber"};
					//Array Of Items Inside Backpack ( Add to Spawn Toolbelt If they should be assigned )
					items[] = {};
				};
				class Backpack : BP_BaseGear 
				{
					//Array Of Weapons Inside Backpack
					weapons[] = {"BP_TranQRifle","BP_TranQPistol"};
					//Array Of Magazines Inside Backpack
					magazines[] = {"ItemAntibiotic","ItemDuctTape","ItemKnife","PartWoodPile"};
					//Array Of Items Inside Backpack ( Add to Spawn Toolbelt If they should be assigned )
					items[] = {"Binocular", "BP_SOS"};
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
					dressing = -15;
					morphine = -15;
					surgery = -30;
					gut = -1000;
				};
				class Ranger {
					food = 10;
					drink = 10;
					bandage = 10;
					dressing = 20;
					morphine = 20;
					surgery = 40;
					gut = -2000;
				};
				class Nomad {
					food = 10;
					drink = 10;
					bandage = 10;
					dressing = 20;
					morphine = 20;
					surgery = 40;
					gut = -2000;
				};
				class Survivalist {
					food = 15;
					drink = 15;
					bandage = 15;
					dressing = 25;
					morphine = 25;
					surgery = 50;
					gut = -3000;
				};
				class Outlaw {
					food = -10;
					drink = -10;
					bandage = -10;
					dressing = -15;
					morphine = -15;
					surgery = -30;
					gut = -1000;
				};
				class Hunter {
					food = -10;
					drink = -10;
					bandage = -10;
					dressing = -20;
					morphine = -30;
					surgery = -100;
					gut = 0;
				};
			};
			class Destroy {
				vehicle = 0;
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
					BP_Dog_Ranger = 0;
					BP_Dog_Nomad = 0;
					BP_Dog_Hunter = 0;
					BP_Dog_Outlaw = 0;
					BP_Dog_Survivalist = 0;
				};
				
				class Gut
				{
					Animal = 12;
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
					Level_1 = 0;
					Level_2 = 0;
					Level_3 = 0;
					Level_4 = 0;
				};
				class Ranger {
					Level_0 = 50;
					Level_1 = -1000;
					Level_2 = -2000;
					Level_3 = -3000;
					Level_4 = -3000;
				};
				class Outlaw {
					Level_0 = 25;
					Level_1 = 0;
					Level_2 = 0;
					Level_3 = 0;
					Level_4 = 0;
				};
				class Hunter {
					Level_0 = 0;
					Level_1 = 0;
					Level_2 = 0;
					Level_3 = 0;
					Level_4 = 0;
				};
				class Nomad {
					Level_0 = 50;
					Level_1 = -1000;
					Level_2 = -2000;
					Level_3 = -3000;
					Level_4 = -3000;
				};
				class Survivalist {
					Level_0 = 50;
					Level_1 = -1000;
					Level_2 = -2000;
					Level_3 = -3500;
					Level_4 = -3500;
				};
			};
		};
	};