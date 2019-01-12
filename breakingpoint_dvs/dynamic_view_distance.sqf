//////////////////////////////////////////////////////////////////
// Visual enhancement for BreakingPoint.
// Created by: Malcain
//////////////////////////////////////////////////////////////////

// Script to enable shadows and texture quality whenever you use optics.
// Should not negatively affect FPS.


// Variables
//dvd_vmin = _this select 1; // minimum draw distance
_dvs_vpref = _this select 2; // preferred draw distance
//dvd_vmax = _this select 3; // maximum draw distance
//dvd_fmin = _this select 4; // min framerate
//dvd_fpref = _this select 5; // preferred framerate
//dvd_avtime = _this select 6; // how often to adjust viewdistance (sec) ~10
_dvs_zf = _this select 7; // zoom number to increase viewdistance to when scope used 
_dvs_azf = _this select 8; // zoom number to increase viewdistance to when in aircraft 
_zoomed = "n"; // start off not zoomed in

//Set up
//_airmax = dvd_vmax * dvs_azf;

/*dvd_avtime = floor dvd_avtime; 
if (dvd_avtime < 2) then {dvd_avtime = 2};
dvd_steps = (dvs_vpref-dvd_vmin)/(dvd_fpref-dvd_fmin);*/

// Background process to determine average fps over dvd_avtime seconds and adjust view distance accordingly
//dvd_lastfps = diag_fps;
/*[] spawn {while {dvd > 0} do {
_sum = 0; 
for "_c" from 1 to dvd_avtime do {
	_sum = (_sum + diag_fps); 
	sleep 1 };
dvd_avfps = floor (_sum/dvd_avtime); // Average fps over dvd_avtime sec
//if (diag_fpsMin > dvd_avfps) then {dvd_scope = 1} else {dvd_scope = 0};
//dvd_lastfps = dvd_avfps;
};
};*/

// Initial shadowdistance 
_oldvdist = _dvs_vpref;
_vdist = _dvs_vpref;
//setShadowDistance  dvs_vpref;
//sleep (dvd_avtime * 1.5 ); // free up CPU for other init stuff and wait for 1st run through background process
sleep 5;

// Adjust shadowdistance when zooming/unzooming scopes
while {true} do {
/*if ((cameraView == "GUNNER") and (_zoomed == "y")) then {
sleep 0.1;
_scopefps = diag_fps;
if ((_scopefps - dvd_avfps) >= 15) then {
_vdist = dvs_zf; };
};*/
if ((cameraView == "GUNNER") and (_zoomed == "n")) then {
sleep 0.01;
//_scopefps = diag_fps;
//if ((_scopefps - dvd_avfps) >= 15) then {
_zeroing = currentZeroing player; 
if (_zeroing >= 300 or (currentWeapon player == "binocular") or (currentWeapon player == "rangefinder")) then {
_vdist = _dvs_zf; 
};
_zoomed="y"};
if (((cameraView == "INTERNAL") or (cameraView == "EXTERNAL")) and (_zoomed == "y")) then {
_vdist = _dvs_vpref;
_zoomed="n"};

//if (vehicle player iskindof "air") then {_vdist = dvs_azf; if (_vdist > _airmax) then {_vdist = _airmax};};

// Change shadowdistance - if it has changed since last time
if (_vdist != _oldvdist) then 
{
setShadowDistance _vdist;
//};
};
_oldvdist = _vdist;

sleep 0.2;
};