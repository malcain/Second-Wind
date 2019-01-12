//////////////////////////////////////////////////////////////////
// Function file for [Combined Operations]
// Created by: [Das Attorney]
//////////////////////////////////////////////////////////////////

//waitUntil { !isNull(findDisplay 46); };
waitUntil { !isNull player };

sleep 5;

_min_dist = 60; // The minimum viewdistance which will be used 
_max_dist = 1500; // Shadowdistance will never go higher than this.
_pref_dist = getShadowDistance; // The preferred shadowdistance which will be used. Shadowdistance will go higher than this whenever optics are used. 
_min_framerate = 40; // View distance will be lowered to minimum for frame rates any lower than this 
_preferred_framerate = 52; // A realistic setting for a preferred framerate you know your system can handle
_time_to_take_average_over = 5; // In seconds. Must be > 2
_scope_zoom_factor = 1350; // The factor to increase the viewdistance by when using scopes/binoculars. Set to 1 for no increase
_aircraft_zoom_factor = 1; // The factor to increase the viewdistance by when flying aircraft. Set to 1 for no increase
//waitUntil { !isNull player };

nul = [player,_min_dist,_pref_dist,_max_dist,_min_framerate,_preferred_framerate,_time_to_take_average_over,_scope_zoom_factor,_aircraft_zoom_factor] execVM "\DVD_103\dynamic_view_distance.sqf";