class CfgPatches
{
	class OptionWheel
	{
		name="OptionWheel";
		author="Alkanet";
		url="https://steamcommunity.com/id/AlkanetSwe/";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Functions_F"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgFunctions
{
	class OptionWheel
	{
		class Basics
		{
			file="OptionWheel\functions";
			class setWheel
			{
			};
			class setWheelCursor
			{
			};
			class setWheelKey
			{
			};
			class removeWheel
			{
			};
		};
		class buttonPress
		{
			file="OptionWheel\functions\buttonPress";
			class buttonUp
			{
			};
			class buttonDown
			{
			};
		};
	};
};
class RscTextCenter
{
	access=0;
	type=0;
	idc=-1;
	style=2;
	x=0;
	y=0;
	w=0.1;
	h=0.050000001;
	font="TahomaB";
	sizeEx=0.039999999;
	colorBackground[]={0,0,0,0};
	colorText[]={1,1,1,1};
	text="";
	fixedWidth=0;
	shadow=0;
};
class RscTitles
{
	class AlkWheel
	{
		idd=-1;
		duration=99999;
		onLoad="uiNamespace setVariable ['AlkWheel_HUD', _this select 0]";
		class controls
		{
			class mouseCursor
			{
				idc=9275;
				x="( safeZoneX + ( safeZoneWAbs / 2 )) - ( 0.15 / 2 )";
				y="( safeZoneY + (safeZoneH / 2)) - (0.15 / 2)";
				w=0.15000001;
				h=0.15000001;
				colorBackground[]={0,0,0,1};
				font="EtelkaNarrowMediumPro";
				colorText[]={1,1,1,1};
				sizeEx="safezoneW / 40";
				type=0;
				style="2048 + 48";
				text="OptionWheel\data\optionWheelCursor.paa";
			};
		};
	};
};
class cfgMods
{
	author="Alkanet";
	timepacked="1562000295";
};
