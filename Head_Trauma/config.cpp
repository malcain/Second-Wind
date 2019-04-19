
class CfgPatches
{
	class Head_Trauma_patch
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	
	
	
	class Axe_In_Head: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="Axe_In_Head";
		picture="\Head_Trauma\UI\Axe_In_HeadUI_ca.paa";
		model="\Head_Trauma\Axe_In_Head.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\Head_Trauma\Axe_In_Head.p3d";
			modelSides[]={3,1};
			armor="6*0.5";
			passThrough=0.80000001;
		};
	};
		class peg_nail: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="Peg";
		picture="\Head_Trauma\UI\peg_nailUI_ca.paa";
		model="\Head_Trauma\peg_nail.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\Head_Trauma\peg_nail.p3d";
			modelSides[]={3,1};
			armor="6*0.5";
			passThrough=0.80000001;
		};
	};	
		class Human_Face_Mask: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="Human_Face_Mask";
		picture="\Head_Trauma\UI\Human_Face_MaskUI.paa";
		model="\Head_Trauma\Human_Face_Mask.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\Head_Trauma\Human_face_mask.p3d";
			modelSides[]={3,1};
			armor="6*0.5";
			passThrough=0.80000001;
		};
	};	
	
};