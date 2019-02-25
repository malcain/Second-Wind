// JBOY_DogScentDetectionLoop.sqf
if (!isServer)  exitwith {};
// dmy = [_prey, _trackingInterval, _markerDistance] call JBOY_DogScentDetectionLoop;
params["_dog"];

// *************************************************************************************************
/*
To Do:
- Run one of these per tracking dog
- Start this loop if dog.scentTrailDetectionOn
- When do we restart this loop once tracking started?  After tracked prey is dead?
- How do we tell player trail split (two different prey to track)?
- What if handler choose to not Track this trail at this time?   When do we restart this loop?
   We don't want the dog to keep back into scentDetected mode for same trail when player chooses not to track...but player may want to track later?
   Maybe Track whimpers if no known ScentMarker for dog, or resumes tracking on Track if there is one.
   If encounters new trail (different prey), then option given to switch who to track (by direction), so maybe detection can keep running
   looking for new prey trail...

*/
_dog setVariable ["vScentTrailDetectionOn", true, true]; // Default is dog will not be scanning for scentMarkers to track.
_scentTrailDetectDistance = _dog getVariable "vScentTrailDetectDistance";
_scentFound = false;
_yy = 0;
//diag_log "JBOY_DogScentDetectionLoop START";
//while {(_dog getVariable "vCommand") in ["heel","moveThere"] and alive _dog and !_scentFound} do
_scentMarker = objNull;
while { alive _dog and !_scentFound } do
{
    _yy = _yy + 1;
    sleep 1;
//diag_log [vehicle _dog, vehicle _dog ==_dog, surfaceIsWater (getpos _dog)];
    if ((_dog getVariable "vCommand") in ["heel","moveThere"]
         and isnull (attachedTo _dog)  // i.e., not attached to a vehicle
         and !(surfaceIsWater (getpos _dog))) then 
    {
        _scentMarkers = nearestObjects [_dog, ["Sign_Arrow_Large_Cyan_F"], _scentTrailDetectDistance] ;
        //_scentMarker = [_dog, (_scentMarkders select 0), _scentMarkders] call JBOY_getFreshestScentMarker;
        if ((count _scentMarkers) > 0) then
        {
        // trail needs at least 2 markers...this sometimes happens when attacking prey, previous markers deleted, and only one new marker created for prey survivor
            _preyTrackingObj = (_scentMarkers select 0) getvariable "prey";
            _trail = _preyTrackingObj getVariable "trail";
            if ((count _trail) > 1) then             
            {
                _scentMarker = _scentMarkers select 0;
                _scentFound = true;
            };
        };
    };
};
// *********************************************************************************************
// if intercept trial midway, delete all scentmarkers older than current marker just found.
// Currently not supporting back-tracking, so delete previous scent markers so we're not
// later confused by this trail fragment.
// *********************************************************************************************
if (_scentFound) then 
{  
    // remove older scent markers
    _dummy= [_scentMarker] execVM "JBOY_Dog\JBOY_DogScentDeleteOlderScent.sqf";
    /*
    _preyTrackingObj = _scentMarker getvariable "prey";
    _trail = _preyTrackingObj getVariable "trail";
    _dropTime = _scentMarker getvariable "dropTime";
    _tmpTrail = _trail;
    {
        if ((_x getVariable "dropTime") < _dropTime) then
        {
            _trail = _trail - [_x];
            deleteVehicle _x;
        };
    } foreach _tmpTrail;
    */
    _preyTrackingObj = _scentMarker getvariable "prey";
    _trail = _preyTrackingObj getVariable "trail";
    _preyTrackingObj setVariable ["trail",_trail,true];
    // Set dog's behaviour mode to "scentDetected".  This tells main dog loop in JBOY_dogCommand.sqf to have dog move to scent marker and alert handler to trail.
    _dog setVariable ["vCurrentScentMarker",_scentMarker,true];
    _dog setVariable ["vMoveToPos", getpos _scentMarker, true]; 
    _dog setVariable ["vCommand","scentDetected",true];
};
//diag_log "JBOY_DogScentDetectionLoop END";
