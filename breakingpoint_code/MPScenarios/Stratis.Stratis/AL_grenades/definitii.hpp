class RscPicture
{
    access = 0;
    idc = -1;
    type = CT_STATIC;
    style = ST_PICTURE;
    colorBackground[] = {0,0,0,0};
    colorText[] = {1,1,1,1};
    font = "PuristaLight";
    sizeEx = 0;
    lineSpacing = 0;
    text = "";
    fixedWidth = 0;
    shadow = 0;
};

class equipment_prot_tox {
	idd = -1;
	movingEnable = 0;
	duration = 10000;
	fadein = 0;
	fadeout = 0;	
	name = "equipment_prot_tox";
	controls[] = {"Picture"};
	class Picture: RscPicture
	{
		x=safeZoneX; y=safeZoneY; w=safeZoneW; h=safeZoneH;
		idc = 1200;
		text = "AL_grenades\al_helmet.paa";
	};
};

class orb_1 {
	idd = -1;
	movingEnable = 0;
	duration = 30;
	fadein = 0;
	fadeout = 0;
	name = "orb_1";
	controls[] = {"Picture"};
	class Picture: RscPicture
	{
		x=safeZoneX; y=safeZoneY; w=safeZoneW; h=safeZoneH;
		idc = 1200;
		text = "AL_grenades\orb_1.jpg";
	};
};

class orb_2 {
	idd = -1;
	movingEnable = 0;
	duration = 30;
	name = "orb_2";
	controls[] = {"Picture"};
	class Picture: RscPicture
	{
		idc = 1200;
		text = "AL_grenades\orb_2.jpg";
		x=safeZoneX; y=safeZoneY; w=safeZoneW; h=safeZoneH;
	};
};

class orb_3 {
	idd = -1;
	movingEnable = 0;
	duration = 30;
	name = "orb_3";
	controls[] = {"Picture"};
	class Picture: RscPicture
	{
		idc = 1200;
		text = "AL_grenades\orb_3.jpg";
		x=safeZoneX; y=safeZoneY; w=safeZoneW; h=safeZoneH;
	};
};