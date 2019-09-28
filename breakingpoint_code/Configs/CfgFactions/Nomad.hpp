/*
  Breaking Point Mod for Arma 3

  Released under Arma Public Share Like Licence (APL-SA)
  https://www.bistudio.com/community/licenses/arma-public-license-share-alike

  Alderon Games Pty Ltd
*/

	class Nomad : BP_BaseFaction 
	{
	    name = "Nomad";
		description = "Insert Epic Heroic Description Here";
		icon = "\breakingpoint_ui\icons\NomadIcon.paa";
		
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
				regenRateSitting = 20;
				class Spawn
				{
					//Array Of Toolbelt Items
					toolbelt[] = {};
					//Array Of Random (Clothing,Backpack,Vest)
					primary[] = {};
					launcher[] = {"MeleeHatchet"};
					handgun[] = {};
					clothing[] = {"BP_Refugee_F"};
					backpack[] = {};
					vest[] = {};
					uniform[] = {"BP_Refugee_F"};
					headgear[]={""};
					nvg[]={""};
					facewear[]={""};
				};
				class Uniform : BP_BaseGear {
					//Array Of Weapons Inside Uniform
					weapons[] = {};
					//Array Of Magazines Inside Uniform
					magazines[] = {"ChemY"};
					//Array Of Items Inside Uniform ( Add to Spawn Toolbelt If they should be assigned )
					items[] = {};
				};
				class Vest : BP_BaseGear {};
				class Backpack : BP_BaseGear {};
			};
			
			class Level_1 : Level_Base {
				regenRateSitting = 25;
				class Spawn
				{
					//Array Of Toolbelt Items
					toolbelt[] = {"ItemMap"};
					//Array Of Random (Clothing,Backpack,Vest)
					primary[] = {};
					launcher[] = {"MeleeHatchet"};
					handgun[] = {};
					clothing[] = {"BP_Refugee_1"};
					backpack[] = {"BP_AssaultPack_blk"};
					vest[] = {};
					uniform[] = {"BP_Refugee_1"};
					headgear[]={"BP_Woolcap_brn","BP_Woolhat_blk","BP_Woolcap_khk"};
					nvg[]={""};
					facewear[]={""};
				};
				class Uniform : BP_BaseGear {
					//Array Of Weapons Inside Uniform
					weapons[] = {};
					//Array Of Magazines Inside Uniform
					magazines[] = {"ItemPainkiller","ItemPainkiller","ItemBandage","ItemBandage"};
					//Array Of Items Inside Uniform ( Add to Spawn Toolbelt If they should be assigned )
					items[] = {};
				};
				class Vest : BP_BaseGear {};
				class Backpack : BP_BaseGear {
					//Array Of Weapons Inside Backpack
					weapons[] = {};
					//Array Of Magazines Inside Backpack
					magazines[] = {"ChemY","ChemY","ChemY"};
					//Array Of Items Inside Backpack ( Add to Spawn Toolbelt If they should be assigned )
					items[] = {};
				};
			};
			class Level_2 : Level_Base {
				regenRateSitting = 30;
				class Spawn {
					//Array Of Toolbelt Items
					toolbelt[] = {"ItemMap"};
					//Array Of Random (Clothing,Backpack,Vest)
					primary[] = {};
					launcher[] = {"MeleeHatchet"};
					handgun[] = {};
					clothing[] = {"BP_Refugee_2"};
					backpack[] = {"BP_CampPack"};
					vest[] = {};
					uniform[] = {"BP_Refugee_2"};
					headgear[]={"BP_Bandit_Bandanna"};
					nvg[]={""};
					facewear[]={""};
				};
				class Uniform : BP_BaseGear {
					//Array Of Weapons Inside Uniform
					weapons[] = {};
					//Array Of Magazines Inside Uniform
					magazines[] = {"ItemPainkiller","ItemPainkiller","ItemFieldDressing","ItemBandage"};
					//Array Of Items Inside Uniform ( Add to Spawn Toolbelt If they should be assigned )
					items[] = {};
				};
				class Vest : BP_BaseGear {};
				class Backpack : BP_BaseGear  {
					//Array Of Weapons Inside Backpack
					weapons[] = {};
					//Array Of Magazines Inside Backpack
					magazines[] = {"ChemY","ChemY","ChemY","ItemKnife"};
					//Array Of Items Inside Backpack ( Add to Spawn Toolbelt If they should be assigned )
					items[] = {};
				};
			};
			class Level_3 : Level_Base {
				regenRateSitting = 35;
				class Spawn {
					//Array Of Toolbelt Items
					toolbelt[] = {"ItemMap"};
					//Array Of Random (Clothing,Backpack,Vest)
					primary[] = {"BP_CZ455"};
					launcher[] = {"MeleeHatchet"};
					handgun[] = {"Binocular"};
					clothing[] = {"BP_Refugee_3"};
					backpack[] = {"BP_Hpack"};
					vest[] = {};
					uniform[] = {"BP_Refugee_3"};
					headgear[]={""};
					nvg[]={""};
					facewear[]={""};
				};
				class Uniform : BP_BaseGear  {
					//Array Of Weapons Inside Uniform
					weapons[] = {};
					//Array Of Magazines Inside Uniform
					magazines[] = {"ItemAntibiotic","ItemPainkiller","ItemPainkiller","ItemFieldDressing","ItemBandage"};
					//Array Of Items Inside Uniform ( Add to Spawn Toolbelt If they should be assigned )
					items[] = {};
				};
				class Vest : BP_BaseGear {};
				class Backpack : BP_BaseGear 
				{
					//Array Of Weapons Inside Backpack
					weapons[] = {};
					//Array Of Magazines Inside Backpack
					magazines[] = {"BP_5Rnd_22_Mag","BP_5Rnd_22_Mag","BP_5Rnd_22_Mag","ItemDuctTape","ItemKnife","ChemY","ChemY","ChemY"};
					//Array Of Items Inside Backpack ( Add to Spawn Toolbelt If they should be assigned )
					items[] = {"BP_MRT"};
				};
			};
			class Level_4 : Level_Base {
				regenRateSitting = 35;
				class Spawn {
					//Array Of Toolbelt Items
					toolbelt[] = {"ItemMap"};
					//Array Of Random (Clothing,Backpack,Vest)
					primary[] = {"BP_CZ455"};
					launcher[] = {"MeleeHatchet"};
					handgun[] = {"Binocular"};
					clothing[] = {"BP_Refugee_4"};
					backpack[] = {"BP_Hpack"};
					vest[] = {"V_TacChestrig_oli_BP"};
					uniform[] = {"BP_Refugee_4"};
					headgear[] = {"H_MM_Helmet_02"};
					nvg[] = {""};//{"TRYK_HRPIGEAR_NV"};
					facewear[] = {""};
				};
				class Uniform : BP_BaseGear  {
					//Array Of Weapons Inside Uniform
					weapons[] = {};
					//Array Of Magazines Inside Uniform
					magazines[] = {"ItemAntibiotic","ItemPainkiller","ItemPainkiller","ItemFieldDressing","ItemBandage"};
					//Array Of Items Inside Uniform ( Add to Spawn Toolbelt If they should be assigned )
					items[] = {};
				};
				class Vest : BP_BaseGear {};
				class Backpack : BP_BaseGear 
				{
					//Array Of Weapons Inside Backpack
					weapons[] = {};
					//Array Of Magazines Inside Backpack
					magazines[] = {"BP_5Rnd_22_Mag","BP_5Rnd_22_Mag","BP_5Rnd_22_Mag","ItemDuctTape","ItemKnife","ChemY","ChemY","ChemY"};
					//Array Of Items Inside Backpack ( Add to Spawn Toolbelt If they should be assigned )
					items[] = {"BP_MRT"};
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
					food = -50;
					drink = -50;
					bandage = -50;
					dressing = -100;
					morphine = -100;
					surgery = -200;
					gut = 100;
				};
				class Ranger {
					food = 10;
					drink = 10;
					bandage = 5;
					dressing = 10;
					morphine = 15;
					surgery = 15;
					gut = -3500;
				};
				class Nomad {
					food = 10;
					drink = 10;
					bandage = 5;
					dressing = 10;
					morphine = 15;
					surgery = 15;
					gut = -3500;
				};
				class Survivalist {
					food = 10;
					drink = 10;
					bandage = 5;
					dressing = 10;
					morphine = 15;
					surgery = 15;
					gut = -3500;
				};
				class Outlaw {
					food = -50;
					drink = -50;
					bandage = -50;
					dressing = -100;
					morphine = -100;
					surgery = -200;
					gut = 100;
				};
				class Hunter {
					food = -50;
					drink = -50;
					bandage = -50;
					dressing = -100;
					morphine = -100;
					surgery = -200;
					gut = 100;
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
					Animal = 0;
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
					Level_1 = 40;
					Level_2 = 60;
					Level_3 = 80;
					Level_4 = 100;
					Dog = 10;
				};
				class Ranger {
					Level_0 = 25;
					Level_1 = -700;
					Level_2 = -1500;
					Level_3 = -3000;
					Level_4 = -3000;
					Dog = -25;
				};
				class Outlaw {
					Level_0 = 25;
					Level_1 = 40;
					Level_2 = 60;
					Level_3 = 80;
					Level_4 = 100;
					Dog = 10;
				};
				class Hunter {
					Level_0 = 40;
					Level_1 = 40;
					Level_2 = 60;
					Level_3 = 80;
					Level_4 = 100;
					Dog = 10;
				};
				class Nomad {
					Level_0 = 50;
					Level_1 = -1500;
					Level_2 = -2500;
					Level_3 = -3500;
					Level_4 = -3500;
					Dog = -25;
				};
				class Survivalist {
					Level_0 = 25;
					Level_1 = -700;
					Level_2 = -1500;
					Level_3 = -2500;
					Level_4 = -2500;
					Dog = -25;
				};
			};
		};
	};