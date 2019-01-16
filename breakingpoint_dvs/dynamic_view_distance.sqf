//////////////////////////////////////////////////////////////////
// Visual enhancement for BreakingPoint.
// Created by: Malcain
//////////////////////////////////////////////////////////////////

// Script to enable shadows and texture quality whenever you use optics.
// Should not negatively affect FPS.


// Variables
//dvd_vmin = _this select 1; // minimum shadow distance
_dvs_vpref = _this select 2; // preferred shadow distance
//dvd_vmax = _this select 3; // maximum shadow distance
_dvs_zf = _this select 4; // zoom number to increase viewdistance to when scope used 
_dvs_azf = _this select 5; // zoom number to increase viewdistance to when in aircraft 
_zoomed = "n"; // start off not zoomed in

KK_fnc_trueZoom = {
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
};

// Initial shadowdistance 
_oldvdist = _dvs_vpref;
_vdist = _dvs_vpref;
//setShadowDistance  dvs_vpref;
sleep 2;

// Adjust shadowdistance when zooming/unzooming scopes
while {true} do {
_zoom = round (call KK_fnc_trueZoom * 10) / 10;
_cameraview = cameraView;
if ((_cameraview == "GUNNER") and (_zoomed == "y")) then {
sleep 0.1;
if (_zoom >= 3) then {
_vdist = _dvs_zf; } else {
_vdist = _dvs_vpref;
};
};
if ((_cameraview == "GUNNER") and (_zoomed == "n")) then {
sleep 0.01;
if (_zoom >= 3) then {
_vdist = _dvs_zf; 
};
_zoomed="y"};
if (((_cameraview == "INTERNAL") or (_cameraview == "EXTERNAL")) and (_zoomed == "y")) then {
_vdist = _dvs_vpref;
_zoomed="n"};

//if (vehicle player iskindof "air") then {_vdist = dvs_azf; if (_vdist > _airmax) then {_vdist = _airmax};};
//debug zoom
//hintSilent format ["CURRENT ZOOM: %1x",_zoom];
// Change shadowdistance - if it has changed since last time
if (_vdist != _oldvdist) then 
{
setShadowDistance _vdist;
};
_oldvdist = _vdist;

sleep 0.2;
};