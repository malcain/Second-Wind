//////////////////////////////////////////////////////////////////
// Visual enhancement for BreakingPoint.
// Created by: Malcain
//////////////////////////////////////////////////////////////////

// Script to enable shadows and texture quality whenever you use optics.
// Should not negatively affect FPS.

//waitUntil { !isNull(findDisplay 46); };
//waitUntil {!isNull player; sleep 5; };

// Variables
_dvs_vpref = getShadowDistance; // detect player's preferred shadow distance
if (_dvs_vpref == 100) then {_dvs_vpref = 60}; //workaround, as getShadowDistance command doesn't return values lower than 100...
_dvs_zf = 1350; // zoom number to increase shadow distance to when scope used 
//_dvs_azf = 60; // zoom number to increase shadow distance to when in aircraft 
_zoomed = "n"; // start off not zoomed in

// Initial shadowdistance 
_oldvdist = _dvs_vpref;
_vdist = _dvs_vpref;
sleep 2;

// Adjust shadowdistance when zooming/unzooming scopes
while {true} do {
_zoom = round (call BP_fnc_trueZoom * 10) / 10;
_cameraview = cameraView; //update cameraview variable
if ((_cameraview == "GUNNER") and (_zoomed == "y")) then {
sleep 0.1;
	if (_zoom >= 3) then {
	_vdist = _dvs_zf;
	} else {
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

//if (vehicle player iskindof "air") then {_vdist = _dvs_azf; if (_vdist > _airmax) then {_vdist = _airmax};}; //aircraft shadow distance
//debug zoom
//hintSilent format ["CURRENT ZOOM: %1x",_zoom];

// Change shadowdistance if it has changed since last time
if (_vdist != _oldvdist or getShadowDistance != _vdist) then 
{
setShadowDistance _vdist;
};

_oldvdist = _vdist;

sleep 0.15;
};