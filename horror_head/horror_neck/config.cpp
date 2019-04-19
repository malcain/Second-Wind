class CfgPatches
{
	class Horror_Neck_pat
	{
		units[]={};
		weapons[]={};
		requiredVersion=0;
		requiredAddons[]={"A3_Characters_F_Heads"};
		version="1.0";
		author="";
	};
};

class CfgFaces
{
	class Man_A3
	{	
		class Bloody_Neck
		{
			identityTypes[]={};
			disabled=0;			
			author="";
			head="Horror_Head_Neck";
			displayname="Bloody Neck";
			material="";
			materialWounded1="";
			materialWounded2="";
			

			texture =;
			textureHL =;
			materialHL = "";
			textureHL2 = "";
			materialHL2 = "";
		};	
	};
};

class CfgHeads
{
	class Wounds;
	class Default_A3;
	class DefaultHead_A3: Default_A3
	{
		class Wounds;
	};
	class Horror_Head_Neck: DefaultHead_A3
	{
		model = "\Horror_Head\Horror_neck\Horror_Head_Neck.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};		
	};
};