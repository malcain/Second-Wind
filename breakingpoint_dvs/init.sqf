//////////////////////////////////////////////////////////////////
// Function file for [Combined Operations]
// Created by: [Das Attorney]
//////////////////////////////////////////////////////////////////

waitUntil { !isNull(findDisplay 46); };
waitUntil { !isNull player };

sleep 3;

_min_dist = 60; // The minimum viewdistance which will be used 
_max_dist = 1500; // Shadowdistance will never go higher than this.
_pref_dist = getShadowDistance; // The preferred shadowdistance which will be used. Shadowdistance will go higher than this whenever optics are used.
_scope_zoom_factor = 1350; // The factor to increase the viewdistance by when using scopes/binoculars.
_aircraft_zoom_factor = 60; // The factor to increase the viewdistance by when flying aircraft.
//waitUntil { !isNull player };

nul = [player,_min_dist,_pref_dist,_max_dist,_scope_zoom_factor,_aircraft_zoom_factor] execVM "\DVD_103\dynamic_view_distance.sqf";