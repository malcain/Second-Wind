/*
  Breaking Point Mod for Arma 3

  Released under Arma Public Share Like Licence (APL-SA)
  https://www.bistudio.com/community/licenses/arma-public-license-share-alike

  Alderon Games Pty Ltd
*/
	class Outlaw : BP_BaseFaction 
	{
		name = "Outlaw";
		icon = "\breakingpoint_ui\icons\OutlawIcon.paa";
		
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
			
			class Level_0 : Level_Base {
				class Spawn {
					//Array Of Toolbelt Items
					toolbelt[] = {};
					//Array Of Random (Clothing,Backpack,Vest)
					primary[] = {};
					launcher[] = {};
					handgun[] = {};
					clothing[] = {"BP_Rebel_F"};
					backpack[] = {};
					vest[] = {};
					uniform[] = {"BP_Rebel_F"};
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
				class Spawn {
					//Array Of Toolbelt Items
					toolbelt[] = {};
					//Array Of Random (Clothing,Backpack,Vest)
					primary[] = {};
					launcher[] = {};
					handgun[] = {};
					clothing[] = {"BP_Rebel_1"};
					backpack[] = {};
					vest[] = {};
					uniform[] = {"BP_Rebel_1"};
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
				class Vest : BP_BaseGear {};
				class Backpack : BP_BaseGear {
					//Array Of Weapons Inside Backpack
					weapons[] = {};
					//Array Of Magazines Inside Backpack
					magazines[] = {"ItemPainkiller", "ItemMatchbox"};
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
					launcher[] = {};
					handgun[] = {};
					clothing[] = {"BP_Rebel_2"};
					backpack[] = {"BP_Rpack"};
					vest[] = {};
					uniform[] = {"BP_Rebel_2"};
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
				class Backpack : BP_BaseGear 
				{
					//Array Of Weapons Inside Backpack
					weapons[] = {};
					//Array Of Magazines Inside Backpack
					magazines[] = {"ItemPainkiller","ItemMatchbox"};
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
					launcher[] = {};
					handgun[] = {};
					clothing[] = {"BP_Rebel_3"};
					backpack[] = {"BP_Rpack2"};
					vest[] = {};
					uniform[] = {"BP_Rebel_3"};
					headgear[]={""};
					nvg[]={""};
					facewear[]={""}; //"CUP_FR_NeckScarf5", "CUP_FR_NeckScarf2"
				};
				class Uniform : BP_BaseGear  {
					//Array Of Weapons Inside Uniform
					weapons[] = {};
					//Array Of Magazines Inside Uniform
					magazines[] = {"ItemBandage","ItemFieldDressing","BlueprintIED1"};
					//Array Of Items Inside Uniform ( Add to Spawn Toolbelt If they should be assigned )
					items[] = {};
				};
				class Vest : BP_BaseGear {};
				class Backpack : BP_BaseGear {
					//Array Of Weapons Inside Backpack
					weapons[] = {};
					//Array Of Magazines Inside Backpack
					magazines[] = {"HandGrenade","ItemMatchbox"};
					//Array Of Items Inside Backpack ( Add to Spawn Toolbelt If they should be assigned )
					items[] = {};
				};
			};
			class Level_4 : Level_Base {
				class Spawn {
					//Array Of Toolbelt Items
					toolbelt[] = {"rvg_bandana_4","TRYK_US_ESS_Glasses_NV","CUP_H_TKI_Lungee_Open_06"};
					//Array Of Random (Clothing,Backpack,Vest)
					primary[] = {};
					launcher[] = {};
					handgun[] = {};
					clothing[] = {"BP_Rebel_4"};
					backpack[] = {"BP_Rpack2"};
					vest[]={};
					uniform[] = {"BP_Rebel_4","BP_Rebel_4_Agenda","BP_Rebel_4_Orange","BP_Rebel_4_ChocChip","BP_Rebel_4_Classic"};
					headgear[] = {""};//{"CUP_H_TKI_Lungee_Open_06","CUP_H_TKI_Lungee_Open_04","CUP_H_TKI_Lungee_06"};
					nvg[]={"","TRYK_US_ESS_Glasses_NV","TRYK_ESS_BLKTAN_NV"};
					facewear[]={"rvg_bandana_4","rvg_bandana_5","rvg_bandana_3","rvg_bandanaShades_4","rvg_bandanaAvi_4"};
				};
				class Uniform : BP_BaseGear  {
					//Array Of Weapons Inside Uniform
					weapons[] = {};
					//Array Of Magazines Inside Uniform
					magazines[] = {"ItemBandage","ItemFieldDressing","BlueprintIED1"};
					//Array Of Items Inside Uniform ( Add to Spawn Toolbelt If they should be assigned )
					items[] = {};
				};
				class Vest : BP_BaseGear {
					//Array Of Weapons Inside Backpack
					weapons[] = {};
					//Array Of Magazines Inside Backpack
					magazines[] = {"BP_2Rnd_Buckshot"};
					//Array Of Items Inside Backpack ( Add to Spawn Toolbelt If they should be assigned )
					items[] = {};
				};
				class Backpack : BP_BaseGear {
					//Array Of Weapons Inside Backpack
					weapons[] = {"BP_Lupara"};
					//Array Of Magazines Inside Backpack
					magazines[] = {"HandGrenade","ItemMatchbox"};
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
					food = 5;
					drink = 5;
					bandage = 10;
					dressing = 15;
					morphine = 10;
					surgery = 25;
					gut = -500;
				};
				class Ranger {
					food = -10;
					drink = -10;
					bandage = -10;
					dressing = -20;
					morphine = -20;
					surgery = -50;
					gut = 50;
				};
				class Nomad {
					food = -10;
					drink = -10;
					bandage = -10;
					dressing = -20;
					morphine = -20;
					surgery = -50;
					gut = 0;
				};
				class Survivalist {
					food = -10;
					drink = -10;
					bandage = -10;
					dressing = -20;
					morphine = -20;
					surgery = -50;
					gut = 0;
				};
				class Outlaw {
					food = 5;
					drink = 5;
					bandage = 10;
					dressing = 15;
					morphine = 15;
					surgery = 30;
					gut = -500;
				};
				class Hunter {
					food = -5;
					drink = -5;
					bandage = -5;
					dressing = -10;
					morphine = -10;
					surgery = -25;
					gut = 50;
				};
			};
			class Destroy {
				vehicle = 25;
				class scavenger {
					storage = 0;
				};
				class Ranger {
					storage = 50;
				};
				class Nomad {
					storage = 50;
				};
				class Survivalist {
					storage = 200;
				};
				class Outlaw {
					storage = 0;
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
					Level_0 = 75;
					Level_1 = -250;
					Level_2 = -500;
					Level_3 = -1200;
					Level_4 = -1700;
				};
				class Ranger {
					Level_0 = 50;
					Level_1 = 50;
					Level_2 = 100;
					Level_3 = 175;
					Level_4 = 200;
				};
				class Outlaw {
					Level_0 = 75;
					Level_1 = -300;
					Level_2 = -600;
					Level_3 = -1500;
					Level_4 = -2000;
				};
				class Hunter {
					Level_0 = 25;
					Level_1 = 25;
					Level_2 = 100;
					Level_3 = 200;
					Level_4 = 250;
				};
				class Nomad {
					Level_0 = 25;
					Level_1 = 25;
					Level_2 = 75;
					Level_3 = 125;
					Level_4 = 150;
				};
				class Survivalist {
					Level_0 = 25;
					Level_1 = 25;
					Level_2 = 50;
					Level_3 = 125;
					Level_4 = 150;
				};
			};
		};
	};