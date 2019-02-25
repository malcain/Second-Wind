// JBOY_DogScentDropLoop.sqf
if (!isServer)  exitwith {};
// dmy = [_prey, _trackingInterval, _markerDistance] call JBOY_DogScentDropLoop;
params ["_prey","_trackingInterval","_markerDistance"];

// *************************************************************************************************
// Is spawning potentially thousands of scent markers a performance problem?
// Since I use hideObject and enableSimulatioFalse on the dumb Arrow object, I'm hoping not.
// This object has no physics and no AI.  And this link implies this will be ok:
// https://forums.bistudio.com/topic/166517-enablesimulation-false-and-hideobject-true-what-else-is-simulating/
// *************************************************************************************************
_quarry = _prey getVariable "quarry";
_quarryGroup = group _quarry;
_lastScentPos = _prey getVariable "lastScentPos";
_lastScentTime = time;
_trail = _prey getVariable "trail";
_trailIndex = 0;
_durationAtPos = 1;
_scentMarker = objNull;
_lastDropPos = [0,50,0];
_continue = true;
_yy = 0;
// predefine and shuffle types of objects tracked prey will drop.
_droppedObjTypes =  ["Land_BottlePlastic_V1_F","Land_Can_Dented_F","Land_Can_V1_F","Land_Can_V3_F","Land_PencilBlue_F","Land_CanOpener_F",
                     "Land_PencilRed_F","Land_Canteen_F","Land_BottlePlastic_V2_F","Land_Bandage_F","Land_Matches_F","Land_Compass_F",
                     "FxCartridge_slug","FxCartridge_762","FxCartridge_556","Land_DuctTape_F","Land_Screwdriver_V1_F","Land_PenBlack_F","Land_PowderedMilk_F"] call BIS_fnc_arrayShuffle;

// drop something at first pos
_droppedObj = (_droppedObjTypes select 0) createVehicle getPos (_quarry);
_droppedObj setDir (random 360);
if (!(typeOf _droppedObj in ["Land_Can_Dented_F","Land_WaterPurificationTablets_F","Land_Bandage_F"])) 
then {_droppedObj setVectorUp [0,.7,0];};  // dropped objects shouldn't stand upright

_droppedObjIndex = 1;
while {_continue} do
{
//systemchat format ["000 quarry=%1, vehicle _quarry=%2, _lastscentpos=%3",_quarry,vehicle _quarry,_lastScentPos];
    _currPos = getposatl _quarry;
    _yy = _yy + 1;
    // ****************************************************************
    // Trail ends if prey in vehicle or in the water.  So increment index and start new trail
    // ****************************************************************
    if (vehicle _quarry == _quarry and  !surfaceIsWater _currPos) then 
    {
    // ****************************************************************
    // Record current position as a scent position using Arrow Object.
    // ****************************************************************
        if ((_lastScentPos distance _currPos) >= _markerDistance or !alive _quarry) then
        {
            _scentMarker = "Sign_Arrow_Large_Cyan_F" createVehicle [0,0,0];
            if (!JBOY_DEBUG) then {hideObjectGlobal _scentMarker;};  // if in debug mode, scentMarker is visible
            _scentMarker enableSimulation false;
            _scentMarker setPos _currPos;
            _scentMarker setDir getdir _quarry;
            _scentMarker setVariable ["prey",_prey,true];
            _scentMarker setVariable ["dropTime",time,true];
            _scentMarker setVariable ["trailEndWater",false,true];
            _scentMarker setVariable ["trailEndVehicle",false,true];
            _durationAtPos = 1;
            _scentMarker setVariable ["durationAtPos",_durationAtPos,true];
            _scentMarker setVariable ["droppedObject",objNull,true];
            //_scentMarker setVariable ["dropStrength",1];
            // Add sniff point to current trail
            _trail = _prey getVariable "trail";
            _trail pushBack _scentMarker;
            _prey setVariable ["trail",_trail,true];
            _trailIndex = _trailIndex + 1;
            _lastScentPos = _currPos;
            _lastTime = time;
            if (!alive _quarry) then 
            {
                _continue = false;
            };
        } else
        {
            _durationAtPos = _durationAtPos + _trackingInterval;
            //(_trail select _trailIndex ) setVariable ["durationAtPos",_durationAtPos,true];
            _scentMarker setVariable ["durationAtPos",_durationAtPos,true];
        };
        // ****************************************************************
        // Occasionally unit drops something
        // ****************************************************************
        if (_quarry isKindOf "Man" and _durationAtPos > 10 or (random 100) > 70 ) then
        {
            if ((_lastDropPos distance _lastScentPos)>5) then 
            {
                // Todo: Also drop hats, glasses, shemags, bandanas, face scarf, mags
                _droppedObjType = _droppedObjTypes select _droppedObjIndex;
                _droppedObj = _droppedObjType createVehicle _lastScentPos;
                if (_droppedObjIndex == (count _droppedObjTypes) - 1) then
                {
                    _droppedObjIndex = 0;
                } else
                {
                    _droppedObjIndex = _droppedObjIndex + 1;
                };
                _z = 0;
                if (_droppedObjType in ["FxCartridge_slug","FxCartridge_762","FxCartridge_556"]) then 
                {
                    _droppedObj enableSimulation false;
                    _z = .01;
                };
                _scentMarker setVariable ["droppedObject",_droppedObj,true];
//systemChat format ["dropped %1",(_scentMarker getVariable "droppedObject")];
                _droppedObj setpos [(_lastScentPos select 0)+.3, (_lastScentPos select 1)-.4, _z];
                _droppedObj setDir (random 360);
                if (!(_droppedObj in ["Land_DuctTape_F","Land_Can_Dented_F","Land_WaterPurificationTablets_F","Land_Bandage_F","Land_PowderedMilk_F"])) 
                then {_droppedObj setVectorUp [0,.7,0];};
                
                //_dmy = [_droppedObj] spawn {params["_droppedObj"];sleep 2; _droppedObj enablesimulation false;}; // disable sim so engine doesn't waste resources on it
                
                _lastDropPos = _lastScentPos;
                // cut the grass
                //_grassCutter = "Land_ClutterCutter_medium_F" createVehicle [(_currPos select 0)+1, (_currPos select 1)+1, 0];
           };
        };
    };
    // ****************************************************************
    // If current pos is in water, then mark previous pos as "trailEndWater". 
    // We may add different search behavior when trail dead ends at water edge.
    // ****************************************************************
    if (surfaceIsWater _currPos) then 
    {
        //(_trail select (_trailIndex - 1)) setVariable ["trailEndWater",true,true]; // can't do this if prey dropping markers while tracker deleting markers from trail
        (_trail select (_trail find _scentMarker)) setVariable ["trailEndWater",true,true];
    };
    // ****************************************************************
    // If quarry in Vehicle, trail ends
    // ****************************************************************
    if !(vehicle _quarry == _quarry) then 
    {
        //(_trail select (_trailIndex - 1)) setVariable ["trailEndVehicle",true,true];
        (_trail select (_trail find _scentMarker)) setVariable ["trailEndVehicle",true,true];
    };
    // ****************************************************************
    // End dropping markers if all members of prey group dead.
    // **************************************************************** 
    _continue = true;
    if (_quarry isKindOf "Man") then
    {
        if (({alive _x} count units _quarryGroup)==0) then
        {
            _continue = false;
        } else {
            if (!alive _quarry) then
            {
                _newQuarry = objNull;
                { // assign an alive unit to be quarry that is tracked
                    if (alive _x) then
                    {
                        _newQuarry = _x;
                    };
                } forEach units _quarryGroup;
                _quarry = _newQuarry;
                _prey setVariable ["quarry", _newQuarry, true];
                _continue = true;
            };
        };
   } else 
    {
        if (!alive _quarry) then 
        {
            _continue = false;
        };
    };
    sleep _trackingInterval;
};
