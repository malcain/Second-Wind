//scriptName "Functions\geometry\fn_trueZoom.sqf";
/************************************************************
	By Killzone_Kid
************************************************************/

	(
        [0.5,0.5] 
        distance2D  
        worldToScreen 
        positionCameraToWorld 
        [0,3,4]
    ) * (
        getResolution 
        select 5
    ) / 2