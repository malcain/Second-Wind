#define true 1
#define false 0

class rscDogDialog
{
	idd= 15501;
	movingEnable = false;
	enableSimulation = true;
	fadein=0;
	duration = 1e+011;
	fadeout=0;
	onLoad= "";
	onUnload= "";

	controlsBackground[]={};
	
	controls[]=
	{
		RscCommandList,
		RscDogFrame,
		RscDogTitleText
	};
	objects[]={};
	
	class RscDogFrame: IGUIBack
{
	idc = 0;
	x = 0.175 * safezoneW + safezoneX;
	y = 0.45 * safezoneH + safezoneY;
	w = 0.1 * safezoneW;
	h = 0.3325 * safezoneH; // 0.2425 for 9 options, add .03 to make room for another option
	colorBackground[] = {0,0,0,0.5};
};

	class RscCommandList: RscListBox
{
	idc = 1;
	onLBSelChanged  = "_this spawn JBOY_fnc_DogCommandSel;";
	colorBackground[] = {1,1,1,0.2};
	colorText[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	colorScrollbar[] = {1,0,0,0};
	colorSelect[] = {0,0,0,1};
	colorSelect2[] = {0,0,0,1};
	colorSelectBackground[] = {1,1,1,0.25};
	colorSelectBackground2[] = {1,1,1,1};
	shadow = 0;
	x = 0.18 * safezoneW + safezoneX;
	y = 0.4825 * safezoneH + safezoneY;
	w = 0.091 * safezoneW;  
	h = 0.29 * safezoneH;  // 0.2 for 9 options.  Add same # to both to increase size
};

	class RscDogTitleText: RscStructuredText
{
	idc = 2;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,1};
	x = 0.175 * safezoneW + safezoneX;
	y = 0.45 * safezoneH + safezoneY;
	w = 0.1 * safezoneW;
	h = 0.025 * safezoneH;
	text = $STR_JBOY_DOG_KeyMenuTitle;
	//text = " <t align='center'>"+$STR_JBOY_DOG_KeyMenuTitle+"</t> ";
	size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
};

};