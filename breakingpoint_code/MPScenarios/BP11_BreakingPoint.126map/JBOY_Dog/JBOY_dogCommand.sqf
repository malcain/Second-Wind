/* 
Usage: dummy = [Dog,DogHandler] execVM "JBOY_Dog\JBOY_dogCommand.sqf"
*/ 
if (!isServer)  exitwith {};
params["_dog","_handler","_SecondsToSleep"];

sleep _SecondsToSleep;
_last_command = "";
_last_anim = "";
_objects = [];
//_dog disableAI "FSM";
//_dog disableAI "PATH";
_dog disableAI "TARGET";
// create a small object and make it invisible.  When attacking,
// we attach dog to this object, and setvelocity the object to get a 
// lunging effect.  setvelocity does not work on dog (that was created
// via createUnit), which is why we do this workaround. 
_biteObj =  "Land_CanOpener_F" createVehicle [0,0,0];
_biteObj allowdamage false;
// physics object is for attaching to weaponholder when attacked ai loses rifle
_physicsObj =  "Land_CanOpener_F" createVehicle [0,0,1];
_targetObj = objNull;
sleep .1;
_moveToPos = [0,0,0];
_dog setSpeaker "NoVoice";

if (!isNull _handler) then
{
    _handler setVariable ["vDogAssigned",_dog,true];
    _handler setVariable ["vReloading",false,true];
    // **************************************************************************
    // Run enemy detection loop for dog.  Run this for handled dogs only?
    // **************************************************************************
    _dmy= [_dog] spawn {params["_dog"]; _n = [_dog] call JBOY_DogEnemyDetectionLoop;};
}; 

_firstTime = false;
_moveToPOS = [];
_dirToRun = 0;
_dir = 0;
_weapon = objNull;
_weaponHolder = objNull;
_surfaceNormal = surfaceNormal getposatl _dog;            
_dog setVectorUp _surfaceNormal;  

// Start dogCommand script with default command of idle.
//_dog setVariable ["vCommand", 'idle', true];
//_heelMarker = "FlagSmall_F" createVehicle [0,0,0];
while {(alive _dog)} do
{ //main loop
   _handler = _dog getVariable "vHandler";
   //*******************************************************************************************************************
   //********** FOLLOW/HEEL *********** FOLLOW/HEEL ************** FOLLOW/HEEL ************** FOLLOW/HEEL *************
   //*******************************************************************************************************************
   if ((_dog getVariable "vCommand") == "follow" or (_dog getVariable "vCommand") == "heel" and (alive _handler)) then
   {
        //_dog disableAI "PATH";
        _dog enableAI "PATH";
        if (not (_last_command in ["heel","swim","getout"]) ) then
        {
            if (!(player getVariable "vReloading")) then {_handler playActionNow "gestureFollow"; };   // Hand signal animation
            //dummy= [_handler, 0, "boomerHeel","Boomer, heel."] execVM "JBOY_Dog\delaySay.sqf";
            dummy= [_dog, _handler, "heel"] execVM "JBOY_Dog\JBOY_HandlerSpeak.sqf";
            
            dummy= [_dog, 2, "boomerWoof1",""] execVM "JBOY_Dog\delaySay.sqf";
            _last_command = "heel";
            if !(_last_anim == "Dog_Stop") then {_dog playMove "Dog_Stop"; _last_anim = "Dog_Stop";};

        };
        if (vehicle _handler != _handler and (_dog getVariable "vAutoGetin") ) then
        {   // When in heel mode, if handler gets in a vehicle, then dog will get in also
            _dog setVariable ["vSilentCommand",true,true];
            _dog setVariable ["vVehicle",vehicle _handler,true];
            _dog setVariable ["vCommand","getin", true];
            sleep 2;
            dog1 setVariable ["vSilentCommand",false,true];
        };
_dog doFollow _handler;
        _dog setVariable ["vBoostRuning", false, true];

        _heelPos = (_handler modelToWorld [.5, 10, 0.0]); // best
        //_heelMarker setpos  _heelPos;
        
        //if ((_dog distance _handler) > 20) then 
       // {
        //    _dog disableAI "PATH";
        //} else
        //{
            _dog enableAI "PATH";
        //};
        
        switch true do 
        { 	
            if (!(_dog getVariable "vIsSwimming")) then
            {
            //case (( speed _handler <3 ) AND (_dog distance _heelPos) < 4): 
                // ******************************************************************************************
                // STOP when: speed handler < 3 AND dog distance heelPos < 4 AND 
                // ******************************************************************************************
                case ((_dog distance _heelPos) < 3 and speed _handler < 5): 
                {   
//_dog disableAI "PATH";  // commented out to try createUnit instead of createagent
                    _dog doWatch (_handler modelToWorld [.5, 16, 0.0]); // watch forward from heel pos
                    //[_dog, "Dog_Stop"] remoteExec ["switchMove", 0];  _dog switchmove "";
                     if !(_last_anim == "Dog_Stop") then { _dog playMove "Dog_Stop"; _last_anim = "Dog_Stop";};
    //player globalchat format ["stopped, distace to heelpos=%1, speed dog=%2, speed _handler=%3, dir dog=%4, dir handler=%5",(_dog distance _heelPos), speed _dog, speed _handler, getdir _dog, getdir _handler];
                };
                // ******************************************************************************************
                // WALK when: dog distance heelpos >= 4 and dog distance heelpos <8 or when dir diff > 10
                // ******************************************************************************************
                case (((_dog distance _heelPos) >= 1 and (_dog distance _heelPos) < 7 and speed _handler < 6) 
                       // following condition keeps dog from straying too far when his direction not aligned with handler
//or (abs(getdir _dog - ([_dog, _heelPos] call BIS_fnc_dirTo)) > 50  and _dog distance _handler >10)    // commented out to try createUnit instead of createagent
                       //or (abs(getdir _dog - ([_dog, _handler modelToWorld [2, 300, 0.0]] call BIS_fnc_dirTo)) > 20  and _dog distance _handler <10)
                       )
                       : 
                {   
                    _dog doWatch (_handler modelToWorld [.5, 6, 0.0]); // watch forward from heel pos
                    if !(_last_anim == "Dog_Walk") then { _dog playMove "Dog_Walk"; _last_anim = "Dog_Walk";};
    //player globalchat format ["walk, distace to heelpos=%1, speed dog=%2, speed _handler=%3, dir dog=%4, dir handler=%5",(_dog distance _heelPos), speed _dog, speed _handler, getdir _dog, getdir _handler];
                };
                // ******************************************************************************************
                // RUN when: dog distance heelpos >= 8 and dog distance heelpos <13
                // ******************************************************************************************
                case ((_dog distance _heelPos) >= 3 and (_dog distance _heelPos) < 4): 
                {   
                    _dog doWatch (_handler modelToWorld [.5, 6, 0.0]); // watch forward from heel pos
                    if !(_last_anim == "Dog_Run") then { _dog playMove "Dog_Run"; _last_anim = "Dog_Run";};
    //player globalchat format ["run, distace to heelpos=%1, speed dog=%2, speed _handler=%3, dir dog=%4, dir handler=%5",(_dog distance _heelPos), speed _dog, speed _handler, getdir _dog, getdir _handler];
                };
                // ******************************************************************************************
                // ELSE SPRINT
                // ******************************************************************************************
                default 
                {   
                    _dog doWatch (_handler modelToWorld [.5, 6, 0.0]); // watch forward from heel pos
                    if !(_last_anim == "Dog_Sprint") then { _dog playMove "Dog_Sprint"; _last_anim = "Dog_Sprint";};
    //player globalchat format ["sprint, distace to heelpos=%1, speed dog=%2, speed _handler=%3, dir dog=%4, dir handler=%5",(_dog distance _heelPos), speed _dog, speed _handler, getdir _dog, getdir _handler];
               };
            }; // end if not swimming
        };
        // Keep dog in front of handler so he can see him. True heeling by handler's side is impossible.
        if (speed _handler > 12) then {_moveToPOS = (_handler modelToWorld [1, 8, 0.0]);} else {_moveToPOS = (_handler modelToWorld [1, 5, 0.0]);};
        // 12/11/17 added if statement to reduce how often moveTo is issued in hopes it improves dog's ability to heel
        // also considering adding shuko's intercept logic to calculate handlers move direction and use that for moveToPos instead of dir handler facing.
/*  // commented out to try createUnit instead of createagent, using doFollow instead of frequent doMoves.
        if (_dog distance2d _moveToPOS > 4) then
        {
            _dog moveTo _moveToPOS;
        };
*/
        _dog setVariable ["vMoveToPos",_moveToPOs,true];
         // Swim to vMoveToPos if in water
        if (surfaceIsWater (getpos _dog) and (getposasl _dog select 2) <=-.5 and !(_dog getVariable "vIsSwimming")) then // if dog in water, then swim til he's not
        {
            dmy = [_dog] execvm "JBOY_Dog\JBOY_DogSwim.sqf";
            _last_command = "swim";
        };
        sleep 1;  // sleeping less than 1 seems to cause to many moves to stack up, so dog overshoots heel position too much when handler stops.
    };
   //*******************************************************************************************************************
   //********** scentDetected *********** scentDetected ************** scentDetected ************** scentDetected **************
   //*******************************************************************************************************************
   if ((_dog getVariable "vCommand") == "scentDetected" and alive _handler) then
   {
        _dog enableAI "PATH";
        _scentMarker = _dog getVariable "vCurrentScentMarker";
        _moveToPos = getpos _scentMarker;
        if !(_last_anim == "Dog_Sprint") then { _dog playMove "Dog_Sprint"; _last_anim = "Dog_Sprint";};
        _dog moveTo _moveToPos;
        _dog doWatch _moveToPos;
        _dummy= [_dog, 1, "bark1",""] execVM "JBOY_Dog\delaySay.sqf";  // woofs to announce scent trail found
        _dummy= [_dog, 2, "bark1",""] execVM "JBOY_Dog\delaySay.sqf";  // woofs to announce scent trail found
        _dummy= [_dog, 2, "bark1",""] execVM "JBOY_Dog\delaySay.sqf";  // woofs to announce scent trail found
        while {(alive _dog) and (_dog getVariable "vCommand") == "scentDetected" and ((_moveToPos distance _dog) > 3)} do
        {
            sleep .3;
            _surfaceNormal = surfaceNormal getposatl _dog;            
            _dog setVectorUp _surfaceNormal;  

        };
        _dummy= [_dog, 1, "boomerWoof1",""] execVM "JBOY_Dog\delaySay.sqf";  // woofs to announce scent trail found
        _dummy= [_dog, 2, selectRandom ["dogSniff1","dogSniff2","dogPant1","dogPant2", "bark1"],""] execVM "JBOY_Dog\delaySay.sqf";
        _dummy= [_dog, 2, "bark1",""] execVM "JBOY_Dog\delaySay.sqf"; 
        _dummy= [_dog, 3, selectRandom ["dogSniff1","dogSniff2","dogPant1","dogPant2", "bark1"],""] execVM "JBOY_Dog\delaySay.sqf";
        _dummy= [_dog, 3, selectRandom ["dogSniff1","dogSniff2","dogPant1","dogPant2", "bark1"],""] execVM "JBOY_Dog\delaySay.sqf";
        _dummy= [_dog, 2, "bark1",""] execVM "JBOY_Dog\delaySay.sqf";
        _surfaceNormal = surfaceNormal getposatl _dog;            
        _dog setVectorUp _surfaceNormal;  

        // Add happy dance here.
        //if !(_last_anim == "Dog_Stop") then {_dog playMoveNow "Dog_Stop"; _last_anim = "Dog_Stop";};
        //hint "Dog detects a scent trail.  Give Track command to follow trail, or another command to ignore the trail for now.";
        [["JBOYDogCommandHints", "CommandTrack"],0,"",25,"",false,true,false,true] call BIS_fnc_advHint;
        _last_command = "scentDetected";
        waitUntil {sleep .3; !(alive _dog) or !((_dog getVariable "vCommand") == "scentDetected" ) or (!alive _handler and !isNull _handler)};
   };
   //*******************************************************************************************************************
   //********** TRACK *********** TRACK ************** TRACK ************** TRACK **************
   //*******************************************************************************************************************
   if ((_dog getVariable "vCommand") == "track" and (alive _handler or isNull _handler )) then
   {
        _dog enableAI "PATH"; // helps prevent dog clipping thru objects
        if !(_last_command == "track" and !isNull _handler) then
        {
            _handler playActionNow "GestureGoB";  // Hand signal animation
            //dummy= [_handler, 0, "boomerTrack","Boomer, track."] execVM "JBOY_Dog\delaySay.sqf";
            dummy= [_dog, _handler, "track"] execVM "JBOY_Dog\JBOY_HandlerSpeak.sqf";
            dummy= [_dog, 2, "boomerWoof1",""] execVM "JBOY_Dog\delaySay.sqf";
            _last_command = "track";
        };
        _scentTrailDetectDistance = _dog getVariable "vScentTrailDetectDistance";
        _scentMarker = _dog getVariable "vCurrentScentMarker";
        _moveToPos   = getpos _scentMarker;
        _dog moveTo  _moveToPos;
        _dog doWatch _moveToPos;
        _trailEnd = false;
        if !(_last_anim == "Dog_Sprint") then { _dog playMove "Dog_Sprint"; _last_anim = "Dog_Sprint";};
        _preyTrackingObj = _scentMarker getvariable "prey";
        if !(isNil "_preyTrackingObj") then 
        { // hail mary for undefined variable _preyTrackingObj at while loop test
            _preyIsFriendly = true;
            if ([side _handler, (_preyTrackingObj getvariable "side")] call BIS_fnc_sideIsEnemy) then
            //if ((side _handler)==(_preyTrackingObj getvariable "side")) then
            {
                _preyIsFriendly = false;
            };
    //_preyIsFriendly = false;
            _trail = _preyTrackingObj getVariable "trail";
            _trailEnd = false;
    diag_log ["trail=",_trail];
            //_lastScentMarker = _trail select ((count _trail) -1); // can't do this, because moving prey always adding to this array
            _zz = 0;
            while {(alive _dog) and (_dog getVariable "vCommand") == "track" and (_dog distance _preyTrackingObj) > 50 
                   and !_trailEnd } do
            {
            
                _zz = _zz + 1;
                _moveToPos =  getpos _scentMarker;
                if ((_moveToPos distance _dog) < 3) then
                {
                    //if !(_last_anim == "Dog_Sprint") then { _dog playMove "Dog_Sprint"; _last_anim = "Dog_Sprint";};
                    if !(_last_anim == "Dog_Run") then { _dog playMove "Dog_Run"; _last_anim = "Dog_Run";};
                    //_scentMarkers = nearestObjects [_dog, ["Sign_Arrow_Large_Cyan_F"], _scentTrailDetectDistance] ;
                    //_scentMarker = [_dog, _scentMarker, _scentMarkers] call JBOY_getFreshestScentMarker;
                    _trail = _preyTrackingObj getVariable "trail";
                   // get next FRESHEST marker (rather than next one in trail array becuz AI sometimes doubles back causing dog to waste time tracking back)
                   _nextScentMarker = _trail select ((_trail find (_scentMarker)) +1);
                    _scentMarkers = nearestObjects [_dog, ["Sign_Arrow_Large_Cyan_F"], _scentTrailDetectDistance] ;
    /*  MAYBE DELETE OLD SCENT MARKER CODE IS CAUSING _preyTrackingObj TO BE NULL????????????????????????????????????????
    // ?????????????????
                    if ((count _scentMarkers) > 0) then
                    {
                        _preyTrackingObj = (_scentMarkers select 0) getvariable "prey";
                        //if ((count _trail) > 1) then             
                        //{
                       //systemchat format ["_scentMarkers select 0=%1,_scentMarker=%2",_scentMarkers select 0,_scentMarker];
                            if ((_scentMarkers select 0) != _scentMarker) then 
                            {
                                _nextScentMarker = _scentMarkers select 0;
                                _dummy= [_scentMarker] execVM "JBOY_Dog\JBOY_DogScentDeleteOlderScent.sqf";
                           };
                        //};  
                    };
    */               
                   if (isNil "_nextScentMarker") then {_nextScentMarker = objNull;};
                   if (isNull _nextScentMarker) then {_nextScentMarker = objNull;};
                   deleteVehicle _scentMarker; // Remove each marker once reached.  This will keep us from finding trails again that we already followed.
                   _trail = _trail - [_scentMarker];
                   _preyTrackingObj setVariable ["trail",_trail,true];
                   _scentMarker = _nextScentMarker;
                   _preyTrackingObj = _scentMarker getvariable "prey";
                    if ((count _scentMarkers) > 0 and !isNull _scentMarker) then
                    //if (true) then
                    {
                        _dog setVariable ["vCurrentScentMarker",_scentMarker,true];
                        _dog setVariable ["vMoveToPos", getpos _scentMarker, true]; 
                        _moveToPos = getpos _scentMarker;
                        _dog moveTo  _moveToPos;
                        _dog doWatch _moveToPos;
                    };
                } else {
                    //if ((_moveToPos distance _dog) < 7 and (_zz mod 2)==0) then
                    //{
                       // if !(_last_anim == "Dog_Run") then { _dog playMove "Dog_Run"; _last_anim = "Dog_Run";};
                       if !(_last_anim == "Dog_Sprint") then { _dog playMove "Dog_Sprint"; _last_anim = "Dog_Sprint";};
                    //};
                };
                _surfaceNormal = surfaceNormal getposatl _dog;            
                _dog setVectorUp _surfaceNormal;  

                if ((_zz mod 30)==0) then  // dog pants and sniffs periodically
                {
                    dummy= [_dog, 1, selectRandom ["dogSniff1","dogSniff2","dogPant1","dogPant2"],""] execVM "JBOY_Dog\delaySay.sqf";
                };
                // if this marker is end of path segment due to prey boarding vehicle or crossing water, or last marker, then TrailEnd true
                if (((_scentMarker getVariable "trailEndVehicle") 
                  or (_scentMarker getVariable "trailEndWater")
    or count _trail <=1
    //or _scentMarker == (_trail select ((count _trail) - 1))
                  )
                    and (_dog distance _scentMarker) <5
                    and (_dog getVariable "vCommand") == "track") then
                {
                    _trailEnd = true;
                    deleteVehicle _scentMarker; // Remove each marker once reached.  This will keep us from finding trails again that we already followed.
                    _dog setVariable ["vCurrentScentMarker",objnull,true];
                };
                // if dog senses prey, then no longer follow markers.  Stop and indicate prey presence (growl, doWatch)
                // Dog senses prey before handler gets to last marker and stops and warns handler.  This allows
                // handler/player to decide how to move to final position.
    // WHAT ABOUT IF PREY IS STILL MOVING, IF WE STOP, HOW DO WE START TRACKING AGAIN????????????????????????????????????????????????????????????????????????????????????
    /* Remove this now that we have spearate DogEnemyDetectionLoop
                if (!_preyIsFriendly and (_dog distance (_preyTrackingObj getvariable "quarry")) <= 75) then
                {
                    _trailEnd = true;
                    //{deleteVehicle _x} foreach (_preyTrackingObj getVariable "trail"); // Remove entire trail
                    _dog setVariable ["vCurrentScentMarker",objnull,true];
                    _dog setVariable ["vTarget",(_preyTrackingObj getvariable "quarry"),true]; 
                    _dog setVariable ["vCommand","contact",true];                      // change command to CONTACT
                };
                */
               sleep .3;
               if (isNil "_preyTrackingObj") then {_preyTrackingObj = _dog};  // hail mary for undefined variable _preyTrackingObj at while loop test
               
            }; // end while
        };
        // If current leg of scent trail has ended (ie., prey got in vehicle or crossed water), then _scentMarker == objNull
        // If we want to find the next leg, we need to kick off detection again, and only look for markers whose time > 
        // time on (_dog getVariable "vCurrentScentMarker")
        //if ((_scentMarker == _lastScentMarker or isnull _scentMarker) and (_dog getVariable "vCommand") == "track") then // End of trail reached
//if ((_dog getVariable "vCommand") == "track") then // End of trail reached
        if ((_dog getVariable "vCommand") == "track" and _trailEnd) then // End of trail reached
        {
            // End of trail behaviour
            if !(_last_anim == "Dog_Stop") then {_dog playMoveNow "Dog_Stop"; _last_anim = "Dog_Stop";};
            _dog dowatch _handler;
            _dmy = [_dog,_handler] spawn
            {   params["_dog","_handler"];
                waitUntil {sleep .5; !(alive _dog) or !(alive _handler) or (_dog distance _handler) < 10 };
                dummy= [_dog, 1, "whimper1",""] execVM "JBOY_Dog\delaySay.sqf";
                dummy= [_dog, 2, "whimper1",""] execVM "JBOY_Dog\delaySay.sqf";
                dummy= [_dog, 2, "whimper1",""] execVM "JBOY_Dog\delaySay.sqf";
                //hint "Dog: End of current scent trail.";
                [["JBOYDogCommandHints", "EndOfTrail"],0,"",25,"",false,true,false,true] call BIS_fnc_advHint;
//{deleteVehicle _x} foreach _trail;
            };
            _dog setVariable ["vCurrentScentMarker",objNull,true];
            _dog setVariable ["vCommand","idle",true];
            // restart trail scent detection loop so dog might find another trail segment
            //if (alive (_preyTrackingObj getvariable "quarry") and (_dog distance (_preyTrackingObj getvariable "quarry")) > 50) then
            //{
                _dmy = [_dog] spawn {params["_dog"]; _d=[_dog] call JBOY_DogScentDetectionLoop;};
            //};
        };
        waitUntil {sleep .5; !(alive _dog) or !((_dog getVariable "vCommand") == "track" ) or (!alive _handler and !isNull _handler)};
   };

   //*******************************************************************************************************************
   //********** TRACK *********** TRACK ************** TRACK ************** TRACK **************
   //*******************************************************************************************************************
 /*  if ((_dog getVariable "vCommand") == "track" and (alive _handler or isNull _handler )) then
   {
        _dog enableAI "PATH"; // helps prevent dog clipping thru objects
        if !(_last_command == "track" and !isNull _handler) then
        {
            if (!(player getVariable "vReloading")) then {_handler playActionNow "GestureGoB"; };   // Hand signal animation
            //dummy= [_handler, 0, "boomerTrack","Boomer, track."] execVM "JBOY_Dog\delaySay.sqf";
            dummy= [_dog, _handler, "track"] execVM "JBOY_Dog\JBOY_HandlerSpeak.sqf";
            dummy= [_dog, 2, "boomerWoof1",""] execVM "JBOY_Dog\delaySay.sqf";
            _last_command = "track";
        };
        _scentTrailDetectDistance = _dog getVariable "vScentTrailDetectDistance";
        _scentMarker = _dog getVariable "vCurrentScentMarker";
        if (_scentMarker != objNull) then //  Another freakin' hail mary to fix null value problem
        {
            _moveToPos   = getpos _scentMarker;
            _dog moveTo  _moveToPos;
            _dog doWatch _moveToPos;
            if !(_last_anim == "Dog_Sprint") then { _dog playMove "Dog_Sprint"; _last_anim = "Dog_Sprint";};
            _preyTrackingObj = _scentMarker getvariable ["prey",objNull];
        if (_preyTrackingObj == objNull) exitWith{_trailEnd = true;  hintc "Exit 3";};
    diag_log ["aaa", _preyTrackingObj, _scentMarker];
            _preyIsFriendly = true;
            if ([side _handler, (_preyTrackingObj getvariable "side")] call BIS_fnc_sideIsEnemy) then
            //if ((side _handler)==(_preyTrackingObj getvariable "side")) then
            {
                _preyIsFriendly = false;
            };
    //_preyIsFriendly = false;
            _trail = _preyTrackingObj getVariable "trail";
            _trailEnd = false;
    diag_log ["trail",_trail,"preyisfriendly",_preyIsFriendly];
            //_lastScentMarker = _trail select ((count _trail) -1); // can't do this, because moving prey always adding to this array
            _zz = 0;
            _scentMarkers = [];
            //while {(alive _dog) and (_dog getVariable "vCommand") == "track" and (_dog distance _preyTrackingObj) > 50 // why > 50?  shouldn't we still track?
            while {!_trailEnd and (alive _dog) and (_dog getVariable "vCommand") == "track" and (_dog distance _preyTrackingObj) > 20
                   } do
            {
            
                _zz = _zz + 1;
                _moveToPos =  getpos _scentMarker;
                if ((_moveToPos distance _dog) < 4) then
                {
                    if !(_last_anim == "Dog_Sprint") then { _dog playMove "Dog_Sprint"; _last_anim = "Dog_Sprint";};
                    //_scentMarkers = nearestObjects [_dog, ["Sign_Arrow_Large_Cyan_F"], _scentTrailDetectDistance] ;
                    //_scentMarker = [_dog, _scentMarker, _scentMarkers] call JBOY_getFreshestScentMarker;
                    _trail = _preyTrackingObj getVariable "trail";
                   // get next FRESHEST marker (rather than next one in trail array becuz AI sometimes doubles back causing dog to waste time tracking back)
// Can the FIND be getting an index past length of _trail array?
diag_log ["qqq",_trail, (_trail find (_scentMarker))];
                   _nextScentMarker = _trail select ((_trail find (_scentMarker)) +1);
                    _scentMarkers = nearestObjects [_dog, ["Sign_Arrow_Large_Cyan_F"], _scentTrailDetectDistance] ;
                    if ((count _scentMarkers) > 0) then
                    {
                        _preyTrackingObj = (_scentMarkers select 0) getvariable "prey";
    diag_log ["bbb",_preyTrackingObj,_scentMarker,_scentMarkers];
                        //if ((count _trail) > 1) then             
                        //{
                       //systemchat format ["_scentMarkers select 0=%1,_scentMarker=%2",_scentMarkers select 0,_scentMarker];
                            if ((_scentMarkers select 0) != _scentMarker) then 
                            {
                                _nextScentMarker = _scentMarkers select 0;
                                _dummy= [_scentMarker] execVM "JBOY_Dog\JBOY_DogScentDeleteOlderScent.sqf";
                           };
                        //};  
                    };
                   
                   if (isNil "_nextScentMarker") then {_nextScentMarker = objNull;};
                   if (isNull _nextScentMarker) then {_nextScentMarker = objNull;};
                   deleteVehicle _scentMarker; // Remove each marker once reached.  This will keep us from finding trails again that we already followed.
                   _trail = _trail - [_scentMarker];
                   _preyTrackingObj setVariable ["trail",_trail,true];
                   _scentMarker = _nextScentMarker;
                   _preyTrackingObj = _scentMarker getvariable "prey";
    // Hail mary to fix this error:  Error Undefined variable in expression: _preytrackingobj
    if (isNil "_preyTrackingObj") exitWith
    {
                    _trailEnd = true;
                    //deleteVehicle _scentMarker; // Remove each marker once reached.  This will keep us from finding trails again that we already followed.
                    //_dog setVariable ["vCurrentScentMarker",objnull,true];
               hintc "Exit 1";
    };
    if (isNull _preyTrackingObj) exitWith{_trailEnd = true;  hintc "Exit 2";};
    if (_preyTrackingObj == objNull) exitWith{_trailEnd = true;  hintc "Exit 3";};
    diag_log ["ccc",_preyTrackingObj,_scentMarker, _scentMarkers];
    //if (isNull _preyTrackingObj) then {_trailEnd = true;};
                    if ((count _scentMarkers) > 0 and !isNull _scentMarker  and not _trailEnd) then
                    //if (true) then
                    {
                        _dog setVariable ["vCurrentScentMarker",_scentMarker,true];
                        _dog setVariable ["vMoveToPos", getpos _scentMarker, true]; 
                        _moveToPos = getpos _scentMarker;
                        _dog moveTo  _moveToPos;
                        _dog doWatch _moveToPos;
                    };
                } else {
                    if ((_moveToPos distance _dog) < 10 and (_zz mod 2)==0  and (_dog distance _handler > 25)) then
                    {
                        if !(_last_anim == "Dog_Run") then { _dog playMove "Dog_Run"; _last_anim = "Dog_Run";};
                    };
                };
    if (isNil "_preyTrackingObj") exitWith
    {
                    _trailEnd = true;
                    deleteVehicle _scentMarker; // Remove each marker once reached.  This will keep us from finding trails again that we already followed.
                    _dog setVariable ["vCurrentScentMarker",objnull,true];
               hintc "Exit 1";
    };
    if (isNull _preyTrackingObj) exitWith{_trailEnd = true;  hintc "Exit 2";};
    if (_preyTrackingObj == objNull) exitWith{_trailEnd = true;  hintc "Exit 3";};
                _surfaceNormal = surfaceNormal getposatl _dog;            
                _dog setVectorUp _surfaceNormal;  

                if ((_zz mod 30)==0) then  // dog pants and sniffs periodically
                {
                    dummy= [_dog, 1, selectRandom ["dogSniff1","dogSniff2","dogPant1","dogPant2"],""] execVM "JBOY_Dog\delaySay.sqf";
                };
                // if this marker is end of path segment due to prey boarding vehicle or crossing water, or last marker, then TrailEnd true
    //diag_log ["ddd",_preyTrackingObj,_scentMarker,(_scentMarker getVariable "trailEndVehicle"), (_scentMarker getVariable "trailEndWater"),_trail, _scentMarkers];
                if (((_scentMarker getVariable "trailEndVehicle") 
                  or (_scentMarker getVariable "trailEndWater")
                  or _scentMarker == (_trail select ((count _trail) - 1)))
                    and (_dog distance _scentMarker) <5
                    and (_dog getVariable "vCommand") == "track") then
                {
                    _trailEnd = true;
                    deleteVehicle _scentMarker; // Remove each marker once reached.  This will keep us from finding trails again that we already followed.
                    _dog setVariable ["vCurrentScentMarker",objnull,true];
                };
                // if dog senses prey, then no longer follow markers.  Stop and indicate prey presence (growl, doWatch)
                // Dog senses prey before handler gets to last marker and stops and warns handler.  This allows
                // handler/player to decide how to move to final position.
    // WHAT ABOUT IF PREY IS STILL MOVING, IF WE STOP, HOW DO WE START TRACKING AGAIN????????????????????????????????????????????????????????????????????????????????????
               sleep .3;
            }; // end while
        }; // end if scentMarker != objNull
        // If current leg of scent trail has ended (ie., prey got in vehicle or crossed water), then _scentMarker == objNull
        // If we want to find the next leg, we need to kick off detection again, and only look for markers whose time > 
        // time on (_dog getVariable "vCurrentScentMarker")
        //if ((_scentMarker == _lastScentMarker or isnull _scentMarker) and (_dog getVariable "vCommand") == "track") then // End of trail reached
        if ((_dog getVariable "vCommand") == "track") then // End of trail reached
        {
            // End of trail behaviour
            if !(_last_anim == "Dog_Stop") then {_dog playMoveNow "Dog_Stop"; _last_anim = "Dog_Stop";};

// if (alive _preyTrackingObj and _dog distance _preyTrackingObj < 25) then
// {
            // _dog setVariable ["vCommand","attack",true];
            // _dog setVariable ["vTarget","_preyTrackingObj",true];
            // _lastCommand = "track";
// } else
// {

            _dog dowatch _handler;
            _dmy = [_dog,_handler] spawn
            {   params["_dog","_handler"];
                waitUntil {sleep .5; !(alive _dog) or !(alive _handler) or (_dog distance _handler) < 10 };
                dummy= [_dog, 1, "whimper1",""] execVM "JBOY_Dog\delaySay.sqf";
                dummy= [_dog, 2, "whimper1",""] execVM "JBOY_Dog\delaySay.sqf";
                dummy= [_dog, 2, "whimper1",""] execVM "JBOY_Dog\delaySay.sqf";
                //hint "Dog: End of current scent trail.";
                [["JBOYDogCommandHints", "EndOfTrail"],0,"",25,"",false,true,false,true] call BIS_fnc_advHint;

            };
            _dog setVariable ["vCurrentScentMarker",objNull,true];
            _dog setVariable ["vCommand","idle",true];
//};
            // restart trail scent detection loop so dog might find another trail segment
            //if (alive (_preyTrackingObj getvariable "quarry") and (_dog distance (_preyTrackingObj getvariable "quarry")) > 50) then
            //{
                _dmy = [_dog] spawn {params["_dog"]; _d=[_dog] call JBOY_DogScentDetectionLoop;};
            //};
        };
        waitUntil {sleep .5; !(alive _dog) or !((_dog getVariable "vCommand") == "track" ) or (!alive _handler and !isNull _handler)};
   };
  */
   //*******************************************************************************************************************
   //********** CONTACT *********** CONTACT ************** CONTACT ************** CONTACT **************
   //*******************************************************************************************************************
   if ((_dog getVariable "vCommand") == "contact" and alive _handler and alive _dog) then
   {
        _dog enableAI "PATH";
        if !(_last_anim == "Dog_Stop") then { _dog playMove "Dog_Stop"; _last_anim = "Dog_Stop";};
        _contact = _dog getVariable "vTarget";
        _dog doWatch getpos _contact;
        if ((side _handler)==(side _contact) and _contact isKindOf "CAManBase" ) then
        {
            // friendly contact, so woof and do happy dance
            dummy= [_dog, 1, "boomerWoof1",""] execVM "JBOY_Dog\delaySay.sqf";
            dummy= [_dog, 1, "boomerWoof1",""] execVM "JBOY_Dog\delaySay.sqf";
            dummy= [_dog, 4, "boomerWoof1",""] execVM "JBOY_Dog\delaySay.sqf";
            dummy= [_dog, 4, "boomerWoof1",""] execVM "JBOY_Dog\delaySay.sqf";
            //hint "Dog:  Contact";
        } else
        {
            // enemy contact, so growl
            dummy= [_dog, 3, "dog_growl_vicious",""] execVM "JBOY_Dog\delaySay.sqf";
            //hint "Dog:  Contact";
       };
        if !(_last_anim == "Dog_Stop") then { _dog playMove "Dog_Stop"; _last_anim = "Dog_Stop";};
        sleep .5;
        if !(_last_anim == "Dog_Walk") then { _dog playMove "Dog_Walk"; _last_anim = "Dog_Walk";};
       _moveToPos = ([_dog, 8, ([_dog,_contact] call BIS_fnc_dirTo)] call BIS_fnc_relPos);
       _dog moveTo _moveToPos;
       //waitUntil {sleep .3; !(alive _dog) or !alive _handler or !((_dog getVariable "vCommand") == "contact" ) or (_dog distance _moveToPos) < 2};
       waitUntil {sleep .3; !(alive _dog) or !alive _handler or !((_dog getVariable "vCommand") == "contact" ) or abs(getdir _dog - ([_dog, _contact] call BIS_fnc_dirTo)) < 20};
       //_dog doWatch getpos _contact;
       
       //sleep 2;
       if !(_last_anim == "Dog_Stop") then { _dog playMove "Dog_Stop"; _last_anim = "Dog_Stop";};
       //_dog switchmove "Dog_Stop";
       _dog disableAI "PATH";
       //_dog doWatch _contact;
       dummy= [_dog, 1, "dog_growl_vicious",""] execVM "JBOY_Dog\delaySay.sqf";
        _last_command = "contact";
        _handler setBehaviour "STEALTH";
        waitUntil {sleep .3; !(alive _dog) or !alive _handler or !((_dog getVariable "vCommand") == "contact" )};
        //_dog enableAI "MOVE";
   };
   //*******************************************************************************************************************
   //********** SCOUT *********** SCOUT ************** SCOUT ************** SCOUT **************
   //*******************************************************************************************************************
   if ((_dog getVariable "vCommand") == "scout" and alive _handler) then
   {
        _dog enableAI "PATH";
        if !(_last_command == "scout") then
        {
            if (!(player getVariable "vReloading")) then {_handler playActionNow "GestureGoB";  };  // Hand signal animation
            //dummy= [_handler, 0, "boomerScout","Boomer, scout."] execVM "JBOY_Dog\delaySay.sqf";
            dummy= [_dog, _handler, "scout"] execVM "JBOY_Dog\JBOY_HandlerSpeak.sqf";
            dummy= [_dog, 2, "boomerWoof1",""] execVM "JBOY_Dog\delaySay.sqf";
            _last_command = "scout";
        };
        waitUntil {sleep .3; !(alive _dog) or !((_dog getVariable "vCommand") == "scout" )};
   };
   //*******************************************************************************************************************
   //********** At Ease *********** At Ease ************** At Ease ************** At Ease **************
   //*******************************************************************************************************************
   // Using At Ease to dismiss dog, so setting handler to objnull
   if ((_dog getVariable "vCommand") == "atEase" and (alive _handler  or isNull _handler)) then
   {
        _dog enableAI "PATH"; // helps prevent dog clipping thru objects
        if (!(_last_command == "atEase") and !isNull _handler) then
        {
            if (!(player getVariable "vReloading")) then {_handler playActionNow "GestureUp"; };   // Hand signal animation
            dummy= [_dog, _handler, "atEase"] execVM "JBOY_Dog\JBOY_HandlerSpeak.sqf";
            _last_command = "atEase";
            dummy= [_dog, 2, "boomerWoof1",""] execVM "JBOY_Dog\delaySay.sqf";
            //dummy= [_handler, 5, "goodBoy","Good boy."] execVM "JBOY_Dog\delaySay.sqf";
            _dog setVariable ["BIS_fnc_animalBehaviour_disable", false];  // NEED THIS?????????????????????
            //_dog enableAI "FSM";
            _dog setVariable ["vHandler", objNull, true];  // unassign handler
        };
        _dog setVariable ["vBoostRuning", false, true];
        if !(_last_anim == "Dog_Idle_Stop") then {_dog playMove "Dog_Idle_Stop"; _last_anim = "Dog_Idle_Stop";};
        _last_command = "atEase";
        if !(isnull (attachedTo _dog)) then  // If in vehicle, have him dismount.
        {
            detach _dog;
            _dog doWatch (_dog modelToWorld [0,-3.2,0]);
            sleep .3;
            _dog setpos (_dog modelToWorld [2.1,0,0]);
        };
        waitUntil {sleep .3; !(alive _dog) or !((_dog getVariable "vCommand") == "atEase" )};
        _dog setVariable ["BIS_fnc_animalBehaviour_disable", true];
        //_dog disableAI "FSM";
   };
   //*******************************************************************************************************************
   //********** STAY *********** STAY ************** STAY ************** STAY **************
   //*******************************************************************************************************************
   if ((_dog getVariable "vCommand") in ["stay","stayAfterAttack","stop"] and (alive _handler or isNull _handler)) then
   {
   //   systemchat "in stay";
        //_dog enableAI "Anim";
        _dog enableAI "PATH";
        if !(_last_command in ["stayAfterAttack","stayAfterSwim"]) then // if just attacked and killed a unit, attack section sets last command to stay and command to stay (so don't order dog to stay in this case)
        {
            if ((_dog getVariable "vCommand") == "stay" and !(_last_command == "attack") and !isNull _handler) then
            {
                if (!(player getVariable "vReloading")) then {_handler playActionNow "GestureHi";};  
                 dummy= [_dog, _handler, "stay"] execVM "JBOY_Dog\JBOY_HandlerSpeak.sqf";

            } else {  // Aborting attack so yell cease fire
               if (!(player getVariable "vReloading")) then {_handler playActionNow "gestureCeaseFire";};  
                //dummy= [_handler, 0, "boomerStop","Boomer, Stop! Down boy!"] execVM "JBOY_Dog\delaySay.sqf";
                dummy= [_dog, _handler, "stop"] execVM "JBOY_Dog\JBOY_HandlerSpeak.sqf";
            };
        };
        dummy= [_dog, 2, "boomerWoof1",""] execVM "JBOY_Dog\delaySay.sqf";
        _dog setVariable ["vBoostRuning", false, true];
        if !(_last_anim == "Dog_Sit") then {_dog playMoveNow "Dog_Sit"; _last_anim = "Dog_Sit";};
        if !(_last_anim == "Dog_Stop") then {_dog playMoveNow "Dog_Stop"; _last_anim = "Dog_Stop";};
        if (!isNull (_dog getVariable ["vTarget",objNull])) then 
        //if ("" != (_dog getVariable ["vTarget",""])) then 
        {
            _dog doWatch (_dog getVariable "vTarget");
        };
        sleep .2;
        _last_command = "stay";
        //_handler removeAction gStayAction;
        waitUntil {sleep .3; !(alive _dog) or !((_dog getVariable "vCommand") in ["stay","stop"]) or (!alive _handler and !isNull _handler)};
   };
   //*******************************************************************************************************************
   //********** ATTACK *********** ATTACK ************** ATTACK ************** ATTACK **************
   //*******************************************************************************************************************
   if ((_dog getVariable "vCommand") == "attack" and (alive _handler or isNull _handler)) then
   {
        _dog enableAI "PATH";
        //*********************************
        // If dog carrying something already, then drop it for new attack
        //*********************************
        if (count attachedObjects _dog > 0) then
        {
            {
                if !(_x isKindOf "CAManBase" or _x isKindOf "TargetSoldierBase" or _x isKindOf "Sign_Sphere25cm_F") THEN
                {
                     detach _x; 
                    _biteObj disableCollisionWith _x; 
                    _pos = getposasl _x;
                    _x attachTo [_biteObj, [0,0,0]];
                    _biteObj setposasl _pos;
                    _biteObj setvelocity [0,0,-10];
                    _n = [_biteObj, _x] spawn {params["_biteObj","_preyObj"]; sleep 1; detach _preyObj; _biteObj setpos [0,0,0];};
                };
            } foreach attachedObjects _dog;
        };
        _targetObj = (_dog getVariable "vTarget");  // (_dog getVariable "vTarget") set in INIT.sqf
        if (typeName (_dog getVariable "vTarget")=='STRING') then {_targetObj =objNull;};
        //*********************************
        // Spawn func so attacked men will target hidden target and fire on dog.
        //********************************
        _units = units group _targetObj;
 
        if (_targetObj isKindOf "CAManBase" ) then
        {
            _n = [_dog,_targetObj] 
            spawn 
            {
                params["_dog","_target"];
                _units = units group _target; 
                sleep 2;
                    {
                       if ((currentWeapon _x) in [(primaryWeapon _x), (handGunWeapon _x)]) then // call aiFightsDogs if unit has a weapon.
                       {
                        nul = [_x,_dog] execvm "JBOY_Dog\JBOY_AIFightsDogs.sqf";
                       };
                    } foreach _units;
             }; // end spawn
        };
       
        _dog enableAI "PATH"; // helps prevent dog clipping thru objects
        if !(_last_anim == "Dog_Sprint") then {_dog playMove "Dog_Sprint"; _last_anim = "Dog_Sprint";};
        if (!isNull _handler) then
        {
            _sfx = "";
            //if (!(alive _targetObj) and (typeOf _targetObj) in ["Rabbit_F","Snake_random_F","Hen_random_F","Cock_random_F","Cock_white_F"]) then 
            if ( (typeOf _targetObj) in ["Rabbit_F","Snake_random_F","Hen_random_F","Cock_random_F","Cock_white_F"]) then 
            {
                _sfx = (["bark2","bark1"] call BIS_fnc_arrayShuffle) select 0;
                dummy= [_dog, _handler, "fetch"] execVM "JBOY_Dog\JBOY_HandlerSpeak.sqf";
            } else {
                if (!(_last_command == "attack") ) then
                {
                    if (!(player getVariable "vReloading")) then {_handler playActionNow "GesturePoint"; };   // Hand signal animation, point is fist punch forward
                    _sfx = (["barkmean2","barkmean1","barkmean3","growls3","bark1","bark2"] call BIS_fnc_arrayShuffle) select 0;
                     dummy= [_dog, _handler, "attack"] execVM "JBOY_Dog\JBOY_HandlerSpeak.sqf";
 //player sidechat "bark here"; 
// titleText ["bark here", "PLAIN"];
               };                 
            };
            if ((_dog distance (_dog getVariable "vTarget")) > 5 and _sfx != "") then
            {
              dummy= [_dog, 2, _sfx,""] execVM "JBOY_Dog\delaySay.sqf";
            };

             _firstTime = true;
            _last_command = "attack";
        };

        // Sometimes attacked units panic and run
        if ((!isPlayer _targetObj) and (((floor (random 100)) > 90) or (primaryWeapon _targetObj=="" and handgunWeapon _targetObj==""))) then
        {
            _targetObj forceSpeed -1;
            _dirToRun = ([_targetObj, _dog] call BIS_fnc_dirTo) - 180;
            _targetObj doMove ([_targetObj, 100, _dirToRun] call BIS_fnc_relPos);
            _targetObj allowFleeing 1;
            _targetObj SetSpeedMode "FULL";
            _targetObj SetUnitPOS "UP";
        };
        switch (typeOf _targetObj) do 
        { 	case "Rabbit_F":{           _targetObj playmove "Rabbit_Hop";}; // Run Rabbit Run!
            case "Hen_random_F":{nul =  _targetObj playmove "Hen_Walk";}; // Only a walk animation for hen.
            case "Cock_random_F":{nul = _targetObj playmove "Cock_Run";}; // Run cock Run!
            case "Cock_white_F":{nul =  _targetObj playmove "Cock_Run";}; // Run cock Run!
        };

        if (_targetObj isKindOf "Animal" ) then  // if an animal, make it run faster for more interesting chase
        {
            if (alive _targetObj) then
            {
                _null = [_targetObj, _dog] 
                spawn
                {   params ["_targetObj", "_dog"];
                    sleep 1;
                    //waitUntil {sleep .3; !(alive _targetObj) or };
                    switch (typeOf _targetObj) do 
                    { 	case "Rabbit_F":{    nul =  [_targetObj,1.5, 2000,_dog] call JBOY_turboChicken;}; // Run Rabbit Run!
                        case "Hen_random_F":{nul =  [_targetObj,1.3, 2000,_dog] call JBOY_turboChicken;}; // Run Hen Run!
                        case "Cock_random_F":{nul = [_targetObj,1.3, 2000,_dog] call JBOY_turboChicken;}; // Run Cock Run!
                        case "Cock_white_F":{nul =  [_targetObj,1.3, 2000,_dog] call JBOY_turboChicken;}; // Run Cock Run!
                     };  
                };
            };
        };
        _jj = 0;
        while {( (alive _dog) and !isNull _targetObj
                and (alive _handler or isNull _handler) 
                and ( ((_targetObj distance _dog) > 4 and alive _targetObj AND !isNull _targetObj) 
                        or ((_targetObj distance _dog) >2 and (!(alive _targetObj) or (typeOf _targetObj!="Man")) and isNull(_dog getVariable "vPack")) 
                    )
                and ((_dog getVariable "vCommand") == "attack" ) )} do
        {
            _jj = _jj + 1;
            // *********************************************
            // bark while chasing
            // *********************************************
            if ( (_jj mod 9)==0 and (random 100) > 30 and !(({_x isKindOf "Animal"} count attachedObjects _dog) > 0) ) then // if no prey in mouth, then bark & growl
            {
                _sfx = (["barkmean2","barkmean1","barkmean3","growls3","bark2","bark1"] call BIS_fnc_arrayShuffle) select 0;
                dummy= [_dog, 0, _sfx,""] execVM "JBOY_Dog\delaySay.sqf";
            };
            
            // *********************************************
            // Keep moving to target pos, and check for change of target
            // *********************************************
            if (typeName (_dog getVariable "vTarget")=='STRING') then
            {
                _targetObj = objNull;
            } else
            {
                _targetObj = (_dog getVariable "vTarget");
                if (speed _targetObj < 1) then
                {
                    _moveToPos = getposatl _targetObj;
                } else
                {
                    _moveToPos = _targetObj modelToWorld [0, 0, 1.5];
                };
                _dog doWatch  (_targetObj modelToWorld [0, 0, 1]);
                //sleep .1;
                _surfaceNormal = surfaceNormal getposatl _dog;            
                _dog setVectorUp _surfaceNormal;  

                _dog moveTo _moveToPos;        
            };
            sleep .3;                
        };
        if (typeof _targetObj in ["Animal"]) then 
        {
            _targetObj setdamage 1;  // kill animal when close to it.
        }
        else
        {
            // *********************************************
            // If close enough, use setpos and setvelocity to simulate bite attacks
            // *********************************************
            if ((getposatl _targetObj distance _dog) <= 2.5 and !isNull _targetObj and alive(_targetObj)) then
            {  
                _vel = velocity _dog;
                _vel = [10,1,1];
                // put dog x meters from enemy
                //if (typeName (_dog getVariable "vTarget")!='STRING') then // if target killed, the setpos would move dog to pos 0,0,0, this hopefully prevents that
                
                if (alive _targetObj and !isNull _targetObj) then // if target killed, the setpos would move dog to pos 0,0,0, this hopefully prevents that
                {
                    _dog setpos ([_targetObj, 1.5, ([getpos _targetObj, getpos _dog] call BIS_fnc_dirTo)] call BIS_fnc_relPos);
                    _dog setDir ([getposatl _dog, getposatl _targetObj] call BIS_fnc_dirTo);
                };
                
                _xx = 0;
                while {_xx < 3 and alive _dog and alive _targetObj and !isNull _targetObj and (_dog distance _targetObj) < 1.7} do
                { 
                    _xx = _xx + 1;
                    // only bite small animals (rabbits, chickens) once in loop.  Larger ones get hit 3 times in a row by this foreach loop
                   if ( alive _targetObj) then
                   {
                        // **********************************************************************
                        // attacked dude loses primary weapon during attack X% of the time.
                        // **********************************************************************
                        if ((primaryweapon _targetObj != "") and (floor (random 100)) > 85 ) then
                        {
                            if (_xx ==3 and ((currentWeapon _targetObj) in [(primaryWeapon _targetObj)])) then
                            {
                                _weapon = currentWeapon _targetObj;       
                                _targetObj removeWeapon (currentWeapon _targetObj);
                                sleep .1;
                                _weaponHolder = "WeaponHolderSimulated" createVehicle [0,0,0];
                                _weaponHolder addWeaponCargoGlobal [_weapon,1];
                                _weaponHolder setPos (_targetObj modelToWorld [0,.2,1.2]);
                                _weaponHolder disableCollisionWith _physicsObj;
                                _weaponHolder disableCollisionWith _targetObj;
                                _dir = random(360);
                                _speed = 1.5;
                                _weaponHolder setVelocity [_speed * sin(_dir), _speed * cos(_dir),4];  
                                _targetObj setVelocity [1 * sin(_dir), 1 * cos(_dir),2];  
                                if ((random 100) > 40) then {_targetObj allowFleeing .9;};
                           };
                        };
                        _dog setDir ([getposatl _dog, getposatl _targetObj] call BIS_fnc_dirTo);
                        if (alive _targetObj and !isNull _targetObj) then // if target killed, the setpos would move dog to pos 0,0,0, this hopefully prevents that
                        {
    /*                        
                            _dog setDir ([_dog, _targetObj] call BIS_fnc_dirTo);
                            _dir = direction _dog;
                            _attackPos = ([_targetObj, 1.5, ([getposatl _targetObj, getposatl _dog] call BIS_fnc_dirTo)] call BIS_fnc_relPos);
                            _biteObj setpos _attackPos;
                            //_dog setpos _attackPos;
                            _dog setpos (_dog modelToWorld[0,-1,0]);
                             _biteObj setdir _dir;
     */                        
                             
                            //_dog setpos _attackPos;
                            _dog setpos (_dog modelToWorld[0,-1,0]);
                            _dog setDir ([_dog, _targetObj] call BIS_fnc_dirTo);
                            _dir = direction _dog;
                            //_attackPos = ([_targetObj, 1.5, ([getposatl _targetObj, getposatl _dog] call BIS_fnc_dirTo)] call BIS_fnc_relPos);
                            _attackPos = getpos _dog;
                            _biteObj setpos _attackPos;
                            _biteObj setdir _dir;
                     
                            _speed = 4.5; //3.5;
                            //_dog allowdamage false;
                            // setvelocity and create bullets to attack target if dog is near and target is not flying
    //                        if ((_dog distance _targetObj) < 1.5 and (getposatl _targetObj select 2) < .1) then
                           if ((_dog distance _targetObj) >.5 and (abs(getdir _dog - ([getpos _dog, getpos _targetObj] call BIS_fnc_dirTo))) < 20) then
                            {
                                _zVel = 1;
                                if (isTouchingGround _dog) then 
                                {
                                  _zVel = 2.5;
                                };
                                _bulletHeight = .06; // good height for man and large animals
                                //if (typeof _targetObj in ["Hen_random_F","Rabbit_F","Cock_random_F","Cock_white_F"]) then 
                                if ([_targetObj] call JBOY_isFetchable) then
                                {
                                    _bulletHeight = .02;  // lower trajectory to hit small animal
                                    _zVel = 0;            // don't jump to attack small animal
                                    _targetObj setDamage 1;
                                };
                                //if ((( getposatl _dog) select 2) < .2) then {_zVel = 0;};  // keeps dog vs. dog fight from occurring in air!
                                _biteObj setVelocity [_speed * sin(_dir), _speed * cos(_dir),_zVel];  
                                _dog setVelocity [_speed * sin(_dir), _speed * cos(_dir),_zVel];  
                                //_dog attachto [_biteObj,[0,0,0]];
                                //_bullet = "B_556x45_dual" createVehicle [10,10,1000];
                                _bullet = "B_9x21_Ball" createVehicle [10,10,1000];
                                _bullet disableCollisionWith _biteObj;
                                _bullet disableCollisionWith _dog;
                                _bullet disableCollisionWith (_dog getVariable "vTargetDog");
                                _bullet setMass 10;
                                _bullet setVelocity [0,0,0];
                                _dir =  [_dog, _targetObj] call BIS_fnc_dirTo;
                                _bullet setdir _dir;
                                //_bullet setVelocity (velocity _biteobj); 
                                _pos = getposatl _targetObj;
                                _pos = [_pos select 0, _pos select 1, _bulletHeight];
                                _bullet setVelocity [0, 0, 10]; 
                                //_bullet setpos (_dog modelToWorld [0,.5,1.3]);
                                _bullet setposatl _pos;

                                sleep .2;
                                detach _dog;
                                _targetObj setUnitPos "MIDDLE";
                            };
                        };
                        //_dog allowdamage true;
                        if (_xx ==1) then 
                        {
                            if ((typeOf _dog) in ["Fin_tricolour_F","Fin_ocherwhite_F","Fin_blackwhite_F","Alsatian_Sandblack_F","Alsatian_Sand_F","Alsatian_Black_F"]) then
                            {                        
                                if (((getObjectTextures _dog select 0) find "dogBloodNeck2Hole")==-1) then
                                {
                                    if (((getObjectTextures _dog select 0) find "dogbullethole2")>=0) then
                                    {
                                        _dog setobjecttextureGlobal [0,"JBOY_Dog\Textures\dogBloodNeck2Hole" + (typeOf _dog)+".jpg"]; // neck blood + bullet holes
                                    } else {
                                        _dog setobjecttextureGlobal [0,"JBOY_Dog\Textures\dogBloodNeck" + (typeOf _dog)+".jpg"]; // neck blood only
                                    };
                                };
                            };
                        };
                        if (_xx ==2) then 
                        {
                            _sfx = (["barkmean2","barkmean1","barkmean3","growls3","bark2","bark1"] call BIS_fnc_arrayShuffle) select 0;
                            dummy= [_dog, 0, _sfx,""] execVM "JBOY_Dog\delaySay.sqf";
                            //player sidechat "line 737...barking";
                        };
                        if (alive _targetObj and !isNull _targetObj) then {sleep .3;};
                    };
                };  // end attack 3 times loop
           };
       };
        _last_command = "attack";
        _dog setVectorUP [0,0,1];  // sometimes if dog attacks bird in flight his vector gets weird, so this set him back level
        if ((!alive _targetObj or isNull _targetObj) and alive _dog ) then 
        {
            _isFetchable = [_targetObj] call JBOY_isFetchable;
            if (_isFetchable and  isNull(_dog getVariable "vPack")) then
            {
                _targetObj disableCollisionWith _dog;
                if (typeOF _targetObj in ["Rabbit_F"]) then
                {
                    _targetObj attachTo [_dog,[-.45,.15,-.15],"Head"];
                    _targetObj setVectorDirAndUp [[1,1,0],[0,0,1]];
                };
                if (typeOF _targetObj in ["Hen_random_F","Cock_random_F","Cock_white_F"]) then
                {
                    _targetObj attachTo [_dog,[-.25,.15,-.15],"Head"];
                    _targetObj setVectorDirAndUp [[1,1,0],[0,0,1]];
                };
                if (typeOF _targetObj in ["Snake_random_F"]) then
                {
                    _targetObj attachTo [_dog,[-.1,.19,-.1],"Head"];
                    _targetObj setVectorDirAndUp [[1,1,0],[0,0,1]];
                };
                //************************************************************************************************
                // If dog has dead small animal, he runs around a bit, then brings it to handler.
                //************************************************************************************************
                if  (!isNull _handler) then 
                {
                    _dog setVariable ["vMoveToPos", _handler modelToWorld [0,2,0], true];
                    _dog setVariable ["vCommand", 'moveThere', true];
                    _last_command = 'fetch';
                } else {
                    _dog setVariable ["vMoveToPos", _dog modelToWorld [(random 30) -10, (random 30)-10,0], true];
                    _dog setVariable ["vCommand", 'moveThere', true];
                    //if ((_dog getVariable "vCommand") == "attack") then {_dog setVariable ["vCommand", 'idle', true];};
                };
            } ELSE 
            {
                if ( isNull(_dog getVariable "vPack") ) then
                {
                    _nearEnemies = [_handler, 50] call JBOY_getNearEnemies; // check for another enemy
                    if (count _nearEnemies > 0) then
                    {
                        _targetObj = _nearEnemies select 0;
                        _dog setVariable ["vTarget", _targetObj, true];
                        //_moveToPos = getpos _targetObj;
                        //_dog moveTo _moveToPos;
                         _dog setVariable ["vCommand", 'attack', true];
                    } else
                    {
                        _dog setVariable ["vCommand", 'stay', true];
                        _last_command = "stayAfterAttack"; // with last command = current command,handler won't say "stay" out loud again.
                    };
                } else
                {
//hint "in dogCommand Attack, target dead, switching vCommand to idle or followLeader";
                    if ( ((_dog getVariable "vPack") getVariable "vPackLeader") ==_dog) then
                    {
                        _dog setVariable ["vCommand", 'idle', true];
                        _last_command = "attack";
                    } else
                    {
                        _dog setVariable ["vCommand", 'followLeader', true];
                        _last_command = "attack";  
                    };
                };
            };
            if (_dog getVariable "vCommand" != "attack") then 
            {
                _dog setVariable ["vTarget", objNull, true];
            };
//if !(_last_anim == "Dog_Stop") then {_dog playMove "Dog_Stop"; _last_anim = "Dog_Stop";};    
      };
      sleep .1;
   };
   //*******************************************************************************************************************
   //********** SIT *********** SIT ************** SIT ************** SIT **************
   //*******************************************************************************************************************
   if ((_dog getVariable "vCommand") == "sit" and (alive _handler or isNull _handler)) then
   {
        _dog enableAI "PATH"; // helps prevent dog clipping thru objects
        if (!(player getVariable "vReloading")) then {_handler playActionNow "GestureHiC";};  
        //dummy= [_handler, 0, "boomerSit","Boomer, sit."] execVM "JBOY_Dog\delaySay.sqf";
        if ( !isNull _handler) then
        {
            dummy= [_dog, _handler, "sit"] execVM "JBOY_Dog\JBOY_HandlerSpeak.sqf";
            dummy= [_dog, 2, "boomerWoof1",""] execVM "JBOY_Dog\delaySay.sqf";
        };
        sleep .2;
        if !(_last_anim == "Dog_Sit") then {_dog playMove "Dog_Sit"; _last_anim = "Dog_Sit";};
        _last_command = "sit";
        //_dog sidechat "Woof. (sitting)";
        if !(_last_anim == "Dog_Sit") then {_dog playMove "Dog_Sit"; _last_anim = "Dog_Sit";};
        if (!isNull (_dog getVariable "vTarget")) then 
        {
            _dog doWatch (_dog getVariable "vTarget");
        };

        waitUntil {sleep .3; !(alive _dog) or !((_dog getVariable "vCommand") == "sit" ) or (!alive _handler and !isNull _handler)};
   };
   //*******************************************************************************************************************
   //********** GET IN *********** GET IN ************** GET IN ************** GET IN **************
   //*******************************************************************************************************************
   if ((_dog getVariable "vCommand") == "getin" and (alive _handler or isNull _handler)) then
   {
        _dog enableAI "PATH";
        _dog disableAI "PATH"; // helps prevent dog clipping thru objects
        if ( !isNull _handler) then 
        {
            dummy= [_dog, _handler, "getin"] execVM "JBOY_Dog\JBOY_HandlerSpeak.sqf";
            dummy= [_dog, 2, "boomerWoof1",""] execVM "JBOY_Dog\delaySay.sqf";
        };
        sleep .2;
        //_moveToPos =  ((_dog getVariable "vVehicle") modelToWorld [0,-3,0]);
        if !(_last_anim == "Dog_Sprint") then {_dog playMove "Dog_Sprint"; _last_anim = "Dog_Sprint";};
        //_dog moveTo _moveToPos; 
        // Dog sprints to vehicle
        while {(alive _dog and (alive _handler or isNull _handler) and ((_dog getVariable "vVehicle") distance _dog) > 4) and ((_dog getVariable "vCommand") == "getin" ) and isnull (attachedTo _dog)} do
        {
            //_moveToPos = getposatl (_dog getVariable "vTarget");
            //_dog doWatch  ((_dog getVariable "vVehicle") modelToWorld [0, 0, 1]);  // for some reason need to watch modeltoworld or dog runs in circles alot
           // sleep .1;                
            //_dog moveTo _moveToPos; 
            //_moveToPos = getposatl (_dog getVariable "vTarget");
            _dist = (_dog distance (_dog getVariable "vVehicle"))-3;
            _dir = [_dog, (_dog getVariable "vVehicle")] call BIS_fnc_dirTo;
            //systemchat format ["getin while 1, _dist=%1, _dir=%2",_dist,_dir];
            _moveToPos =  [_dog, _dist, _dir] call BIS_fnc_relPos;
            _dog doWatch _moveToPos;
            sleep .4;
            _dog moveTo _moveToPos;
        };
        if ((_dog getVariable "vCommand") == "getin" ) then
        {
            _dog enableCollisionWith (_dog getVariable "vVehicle");
            _veh = (_dog getVariable "vVehicle");
            _attachPos = [];
            _attachDir = 0;
            //[_dog, "Dog_Stop"] remoteExec ["switchMove", 0];
            //if !(_last_anim == "Dog_Stop") then {_dog playMove "Dog_Stop"; _last_anim = "Dog_Stop";};
            switch true do // Put this into an array []
            { 	case ((_veh isKindOf "Offroad_01_repair_base_F") 
                       and !(_veh isKindOf "Offroad_01_military_base_F") ):
                    {_attachPos = [.45,-1.6,-.67]; //[.45,-1.6,-.67];
                     _veh  lockCargo [1, true];  // prevent AI from boarding into same spot and clipping
                     //hintc "c1";
                    };
                case ((_veh isKindOf "Offroad_01_unarmed_base_F" or _veh isKindOf "Offroad_01_repair_base_F") 
                       and !(_veh isKindOf "Offroad_01_military_base_F") ):
                    {_attachPos = [0, -1.25, -.67]; //[.45,-1.6,-.67];
                     //_veh  lockCargo [1, true];  // prevent AI from boarding into same spot and clipping
                     //hintc "c1";
                    };
                case (_veh isKindOf "Offroad_02_unarmed_base_F"  ): // MTP Tanoa jeep. 
                    {                     //_veh  lockCargo [, true];  // prevent AI from boarding into same spot and clipping
                     _attachPos = [.3,.71,-.58]; //front right seat, cargo position 0
                     _veh  lockCargo [0, true];  // prevent AI from boarding into same spot and clipping
                     [_dog, "Dog_Sit"] remoteExec ["switchMove", 0]; 
                    };
                case (_veh isKindOf "Offroad_01_military_base_F" and ((typeOf _veh) find "_armed")<0):   // unarmed military offroads
                    {_attachPos = [0, -1.25, -.67]; // Right rear cargo position 1 [.45, -1.6, -.67]
                     };
                case (_veh isKindOf "Offroad_01_military_base_F"):   // armed military offroads
                    {_attachPos = [.45, -.8, -1.2];      // [.45, -.8, -1.2];                     
                    };
                case (_veh isKindOf "Rubber_duck_base_F"):   // zodiac rescue/assault boats
                    {_attachPos = [0,.3,-1.04];
                    [_dog, "Dog_Sit"] remoteExec ["switchMove", 0]; 
                    _attachDir = 8;
                    };
                case (_veh isKindOf "Heli_Light_01_unarmed_base_F"):   // zodiac rescue/assault boats
                    {_attachPos = [.95,1.7,-.86];     
                     _veh lockCargo [2, true];  // prevent AI from boarding into same spot and clipping   
                    [_dog, "Dog_Sit"] remoteExec ["switchMove", 0];                     
                    };                   
            };
            [_dog, ""] remoteExec ["switchMove", 0];     
            [_dog, "Dog_Sit"] remoteExec ["switchMove", 0];   
            _dog setVariable ["visSwimming",false, true];            
            //hintc format ["vehtype=%1, pos=%2",typeof (_dog getVariable "vVehicle"), _attachPos];
            _dog attachto [_veh,_attachPos];
            _dog setdir _attachDir;
             _last_command = "getin";
            //_dog doWatch (_dog modelToWorld [0,-10,3]);
            //sleep .5;
            _dog playMove "Dog_Sit";
            if !(_last_anim == "Dog_Sit") then {_dog playMove "Dog_Sit"; _last_anim = "Dog_Sit";};
        };
        // kill dog if vehicle destroyed while he's attached
        _n = [_dog,_handler] spawn
        {
            params["_dog","_handler"];
            _veh = (_dog getVariable "vVehicle");
            while {alive _dog and alive _veh and !(isNull attachedTo _dog)} do
            {
                sleep 1;
                if (!alive _veh and !(isNull attachedTo _dog)) then {_dog setdamage 1};  
            };
            //waitUntil {sleep .5; !(alive _dog) or !((_dog getVariable "vCommand") == "getin" ) or  (!alive _handler and !isNull _handler)};
        };
       //hintc "getin b4 waituntil";
       waitUntil {sleep .3; !(alive _dog) or !((_dog getVariable "vCommand") == "getin" ) or  (!alive _handler and !isNull _handler)};
        _dog disableCollisionWith (_dog getVariable "vVehicle");
       //(_dog getVariable "vVehicle")  lockCargo [1, false];
   };
   //*******************************************************************************************************************
   //********** GET OUT *********** GET OUT ************** GET OUT ************** GET OUT **************
   //*******************************************************************************************************************
   if ((_dog getVariable "vCommand") == "getout" and (alive _handler or isNull _handler)) then
   {
        _dog enableAI "PATH";
        _dog enableAI "PATH"; // helps prevent dog clipping thru objects
        if ( !isNull _handler) then
        {
            dummy= [_dog, _handler, "getout"] execVM "JBOY_Dog\JBOY_HandlerSpeak.sqf";
            dummy= [_dog, 2, "boomerWoof1",""] execVM "JBOY_Dog\delaySay.sqf";
        };
        sleep .2;
        //_dog enableCollisionWith (_dog getVariable "vVehicle");
        //_dog attachto [(_dog getVariable "vVehicle"),[.45,-1.6,-.67]];
        detach _dog;
        _dog doWatch (_dog modelToWorld [0,-3.2,0]);
        sleep .3;
        if !(_last_anim == "Dog_Run") then {_dog playMove "Dog_Run"; _last_anim = "Dog_Run";};
        //sleep 1;
        //_dog setpos (_dog modelToWorld [0,-3.2,0]);
       // _dog setpos ((_dog getVariable "vVehicle") modelToWorld [3,-1.2,0]);
       _dog setpos (_dog modelToWorld [1.5,0,0]);
        _dog setVariable ["vVehicle",objnull];
        _last_command = "getout";
        sleep .1;
        if !(_last_anim == "Dog_Stop") then {_dog playMove "Dog_Stop"; _last_anim = "Dog_Stop";};
_dog setVariable ["vCommand","heel"];
        waitUntil {sleep .3; !(alive _dog) or !((_dog getVariable "vCommand") == "getout" ) or (!alive _handler and !isNull _handler)};
        _dog disableCollisionWith (_dog getVariable "vVehicle");
       (_dog getVariable "vVehicle")  lockCargo [1, false];
   };
   //*******************************************************************************************************************
   //**********  move There *********** move There  ************** move There  ************** move There  **************
   //*******************************************************************************************************************
   if ((_dog getVariable "vCommand") == "moveThere" and (alive _handler or isNull _handler)) then
   {
         _dog disableAI "PATH"; // helps prevent dog clipping thru objects
        if !(_last_anim == "Dog_Stop") then {_dog playMove "Dog_Stop"; _last_anim = "Dog_Stop";};
        sleep .2;
 //LEFT OFF HERE:  dONT SAY MOVE THERE IF MOVETOPOS = GETVAR MOVETOPOS
        //if (count attachedObjects _dog == 0 and !isNull _handler) then   // don't say command if dog is bringing back prey from attack command
       // if (({!(_x isKindOf "CAManBase" or _x isKindOf "TargetSoldierBase" or _x isKindOf "Sign_Sphere25cm_F")} count attachedObjects _dog)==0 and !isNull _handler) then
        if (_last_command != "fetch"  and !isNull _handler and ({_x isKindOf "Animal"} count attachedObjects _dog)==0) then
        {
            if (!(player getVariable "vReloading")) then {_handler playActionNow "GestureGo";};    // Hand signal animation GestureAdvance, GesturePoint, GestureGo (hand swipe forward)
            dummy= [_dog, _handler, "moveThere"] execVM "JBOY_Dog\JBOY_HandlerSpeak.sqf";
        };
        _moveToPos = (_dog getVariable "vMoveToPos");
        
        _dog dowatch _moveToPos;
        sleep .2;
        dummy= [_dog, 2, "boomerWoof1",""] execVM "JBOY_Dog\delaySay.sqf";
        if ((_moveToPos distance _dog) >20 ) then
        {
            if !(_last_anim == "Dog_Sprint") then {_dog playMove "Dog_Sprint"; _last_anim = "Dog_Sprint";};
        } else {
            if !(_last_anim == "Dog_Run") then {_dog playMove "Dog_Run"; _last_anim = "Dog_Run";};     
        };
        _dog moveTo _moveToPos;
        _stopInWater = false;
         while {(alive _dog) and (_dog getVariable "vCommand") == "moveThere" and ((_moveToPos distance _dog) > 3) and !_stopInWater} do
        {
            if (!((_dog getVariable "vMoveToPos") isEqualTo _moveToPos) and ({_x isKindOf "Animal"} count attachedObjects _dog)==0) then  // If new move command given before previous move command completed
            {
                if (!(player getVariable "vReloading")) then {_handler playActionNow "GestureGo";};    // Hand signal animation GestureAdvance, GesturePoint, GestureGo (hand swipe forward)
                dummy= [_dog, _handler, "moveThere"] execVM "JBOY_Dog\JBOY_HandlerSpeak.sqf";
            };            
            _moveToPos = (_dog getVariable "vMoveToPos");
            _dog doWatch _moveToPos;
            _surfaceNormal = surfaceNormal getposatl _dog;            
            _dog setVectorUp _surfaceNormal;  

            sleep .4;
            _dog moveTo _moveToPos;
            // Dog will not swim using moveThere command
            if (surfaceIsWater (getpos _dog) and (getposasl _dog select 2) <= -.3 and surfaceIsWater _moveToPos) then // if dog in water, then swim til he's not
            {
                //dmy = [_dog] execvm "JBOY_Dog\JBOY_DogSwim.sqf";
                _stopInWater = true;
                hint "Dog will only swim when following you using Heel command.";
                _dummy= [_dog, 2, "whimper1",""] execVM "JBOY_Dog\delaySay.sqf";
            };
       };
        _last_command = "moveThere";
        
        if !(_last_anim == "Dog_Stop") then {_dog playMove "Dog_Stop"; _last_anim = "Dog_Stop";};
        _dog doWatch objNull; //so doesn't spazz about watching position he is on.
        //************************************************************************************************
        // If dog has dead small animal, Dog drops it near handler
        //************************************************************************************************
        if (({(_x isKindOf "Animal")} count attachedObjects _dog)>0) then
        {
            _handlerPos = getPos _dog; // doing this for case where _handler is objnull, so we don't want subsequent distance check to be on handler which causes an error
            if (!isNull _handler) then {
                _handlerPos = getPos _handler;
            };
            if ((_handlerPos distance _dog)<5) then
            {
 if !(_last_anim == "Dog_Stop") then {_dog playMove "Dog_Stop"; _last_anim = "Dog_Stop";};
                waituntil {sleep .1; speed _dog < 1 or !alive _dog};
                if (!isNull _handler and !(_dog getVariable "vSilentCommand")) then 
                {
                    dummy= [_dog, _handler, "dropit"] execVM "JBOY_Dog\JBOY_HandlerSpeak.sqf";
                };
                sleep 1.2;
                // dead chickens don't have physics, so we attach an object that has physics.
                {
                    if (_x isKindOf "Animal") THEN
                    {
                        detach _x; 
                        _dog setVariable ["vTarget", "", true];
                        _biteObj disableCollisionWith _x; 
                        _biteObj disableCollisionWith _dog;
                        _pos = getposasl _x;
       _pos = _dog modelToWorld [0,.6,.4];
       /*
                        _x attachTo [_biteObj, [0,0,0]];
                        _biteObj setposasl _pos;
                        _biteObj setvelocity [0,0,-10];
                        _n = [_biteObj, _x, _pos] spawn {params["_biteObj","_preyObj","_pos"]; sleep 1; detach _preyObj; _preyObj setposatl _pos vectorAdd [0,0,-.4]; _biteObj setpos [0,0,0];};
                        */
            // detach _x; 
             _x setpos (_dog modelToWorld [0,0.6,0] );
                    };
                } foreach attachedObjects _dog;
                _dog setVariable ["vTarget", objNull, true];  // added 3/25/18
                // Dog does the "Happy Dance"
                {
                   _dog playMove "Dog_TurnR"; 
                } foreach [1,2];
                if ((_dog getVariable "vHandlerLanguageAbbrev") IN ["boomer","ENG","ENGB","GRE","ENGFRE","ENGVR","GREVR"]
                    and (_handler isKindOf "CAManBase") and !(_dog getVariable "vSilentCommand")) then
                {
                    dummy= [_handler, .5, "goodDog","Good dog!"] execVM "JBOY_Dog\delaySay.sqf";
                };

                if !(_last_anim == "Dog_Sit") then {_dog playMove "Dog_Sit"; _last_anim = "Dog_Sit";};
                _dog setVariable ["vCommand", 'idle', true];
                sleep 2;
                if (isNull _handler) then { // Dog with handler set back idle after dropping prey
                    if !(_last_anim == "Dog_Idle_Stop") then {_dog playMove "Dog_Idle_Stop"; _last_anim = "Dog_Idle_Stop";};
                    if ((_dog getVariable "vCommand") == "moveThere") then {_dog setVariable ["vCommand", 'idle', true];};
                };
            } else {
                _dog setVariable ["vMoveToPos", _handler modelToWorld [0,2,0], true];
                _dog setVariable ["vCommand", 'moveThere', true];
            };
        } else {
            if ((_dog getVariable "vCommand") == "moveThere") then {_dog setVariable ["vCommand", 'idle', true];};
        };
        sleep .3;

   };
   //*******************************************************************************************************************
   //**********  followLeader *********** followLeader  ************** followLeader  ************** followLeader  ******
   //*******************************************************************************************************************
//   if ((_dog getVariable "vCommand") == "followLeader" and (_dog getVariable "vPackLeader") != _dog) then
   if ((_dog getVariable "vCommand") == "followLeader" ) then
   {
        _dog enableAI "PATH"; // helps prevent dog clipping thru objects
        if !(_last_anim == "Dog_Stop") then {_dog playMove "Dog_Stop"; _last_anim = "Dog_Stop";};
        _last_command = "followLeader";
        _pack = _dog getVariable "vPack";
        
        _xOffset = 20 - (random 40);
        _yOffset = 20- (random 30);
        _moveToPos = (_pack getVariable "vPackLeader") modelToWorld [_xOffset,_yOffset, 0];
        _dog dowatch _moveToPos;
        sleep .2;
        if ((_moveToPos distance _dog) >20) then
        {
            if !(_last_anim == "Dog_Sprint") then {_dog playMove "Dog_Sprint"; _last_anim = "Dog_Sprint";};
        } else {
            if !(_last_anim == "Dog_Run") then {_dog playMove "Dog_Run"; _last_anim = "Dog_Run";};     
        };
        _dog moveTo _moveToPos;
        _i = 0;
         while {(alive _dog) and ((_dog getVariable "vCommand") == "followLeader" ) and ((_moveToPos distance _dog) > 3)} do
        {
            if (((_i mod 5) == 0)) then
            {
                _xOffset = 20 - (random 40);
                _yOffset = 60 - (random 40);
                _moveToPos = (_pack getVariable "vPackLeader") modelToWorld [_xOffset,_yOffset, 0];
            };
            _dog doWatch _moveToPos;
            _surfaceNormal = surfaceNormal getposatl _dog;            
            _dog setVectorUp _surfaceNormal;  

            sleep .4;
            _dog moveTo _moveToPos;
        };
        
        if !(_last_anim == "Dog_Stop") then {_dog playMove "Dog_Stop"; _last_anim = "Dog_Stop";};
        _dog doWatch objNull; //so doesn't spazz about watching position he is on.
        /*
        //************************************************************************************************
        // If dog has dead small animal, sleep awhile in separate spawn thread then drop it.  Will carry for awhile.
        //************************************************************************************************
        if (({!(_x isKindOf "CAManBase") and !(_x isKindOf "TargetSoldierBase") and !(_x isKindOf "Sign_Sphere25cm_F")} count attachedObjects _dog)>0) then
        //if (count attachedObjects _dog > 0) then
        {
            _dmy = [_dog, _biteObj] 
            spawn
            {
                params["_dog", "_biteObj"] ;
                sleep 5 + random 5;
                //waituntil {sleep .1; speed _dog < 1 or !alive _dog};
                // dead chickens don't have physics, so we attach an object that has physics.
                {
                    if !(_x isKindOf "CAManBase" or _x isKindOf "TargetSoldierBase" or _x isKindOf "Sign_Sphere25cm_F") THEN
                    {
                        detach _x; 
                        _dog setVariable ["vTarget", "", true];
                        _biteObj disableCollisionWith _x; 
                        _pos = getposasl _x;
                        //_pos = _dog modelToWorld [0,.6,.4];
                        _x attachTo [_biteObj, [0,0,0]];
                        _biteObj setposasl _pos;
                        _biteObj setvelocity [0,0,-10];
                        _n = [_biteObj, _x] spawn {params["_biteObj","_preyObj"]; sleep 1; detach _preyObj; _biteObj setpos [0,0,0];};
                    };
                } foreach attachedObjects _dog;
                // Dog does the "Happy Dance"
                {
                   _dog playMove "Dog_TurnR"; 
                } foreach [1,2];
            };
        };
        */
        sleep .4;
   };

   //*******************************************************************************************************************
   //********** Detain *********** Detain  ************** Detain  ************** Detain  ************** Detain  ********
   // Detain is not used by dogs with no handler.  Unless they're shaking people down for hamburgers!  Hmmm...good idea.
   //***************************************************s***************************************************************
   if ((_dog getVariable "vCommand") == "detain" and (alive _handler )) then
   {
        //_dog enableAI "PATH";  // helps prevent dog clipping thru objects     
        _dog disableAI "PATH";   // player and dog likely to have unobstructed path when close for detaining, so disable aipath to get dog there directly
        (_dog getVariable "vTarget") dowatch _dog;
        _dog doWatch (_dog getVariable "vTarget");
        if (!(player getVariable "vReloading")) then {_handler playActionNow "gestureAttack";};  // Hand signal animation GestureAdvance, GesturePoint, GestureGo (hand swipe forward)
        sleep .3;
        dummy= [_dog, _handler, "detain"] execVM "JBOY_Dog\JBOY_HandlerSpeak.sqf";

        sleep .5;
        _last_command = _dog getVariable "vCommand";
        _targetObj = (_dog getVariable "vTarget");
        _moveToPos = ([_targetObj, 2.5, ([_targetObj, _dog] call BIS_fnc_dirTo)] call BIS_fnc_relPos);
        if (((_dog getVariable "vTarget") distance _handler) <= 50) then
        {
            _pos = getposatl _handler;
            dummy= [_dog, 2, "boomerWoof1",""] execVM "JBOY_Dog\delaySay.sqf";
        } else {
            dummy= [_dog, 2, "whimper1",""] execVM "JBOY_Dog\delaySay.sqf";
        };
        (_dog getVariable "vTarget") dowatch _dog;

        if (((_dog getVariable "vTarget") distance _dog) >= 8) then
        {
            if !(_last_anim == "Dog_Sprint") then {_dog playMove "Dog_Sprint"; _last_anim = "Dog_Sprint";};
        };
        // ****************************************************************
        // Loop until dog moves within 5 meters of detainee
        // ****************************************************************
        while {(alive _dog and alive _handler and (_dog getVariable "vHandler") == _handler and ((_dog getVariable "vTarget") distance _dog) > 6.5) and ((_dog getVariable "vCommand") == "detain" )} do
        {
            _targetObj = (_dog getVariable "vTarget");
            if ((_targetObj distance _dog) < 8) then
            {
                 if !(_last_anim == "Dog_Walk") then {_dog playMove "Dog_Walk"; _last_anim = "Dog_Walk";};
            };
            //_moveToPos = getposatl (_dog getVariable "vTarget");
            _moveToPos = ([_targetObj, 2, ([_targetObj, _dog] call BIS_fnc_dirTo)] call BIS_fnc_relPos);
            _dog doWatch  (_targetObj modelToWorld [0, 0, 1]);  // for some reason need to watch modeltoworld or dog runs in circles alot
            _dog moveTo _moveToPos; 
            sleep .1;
        };
        // ****************************************************************
        // sleep a bit, so dog is looking at detainee before growling.
        // ****************************************************************
        nul = [_dog] spawn
        {
            params["_dog"];
            sleep 1;
            if ((_dog getVariable "vCommand") == "detain" ) then
            {
                dummy= [_dog, 2, "dog_growl_vicious",""] execVM "JBOY_Dog\delaySay.sqf";
            };
        };
        // ****************************************************************
        // stop dog and detainee, make them look at each other, and detainee plays surrender animation.
        // ****************************************************************
        if !(_last_anim == "Dog_Stop") then {_dog playMove "Dog_Stop"; _last_anim = "Dog_Stop";};
        _targetObj forceSpeed 0;
        _dog doWatch ([_dog, 20, ([_dog, _targetObj] call BIS_fnc_dirTo)] call BIS_fnc_relPos);
        //_targetObj dowatch ([_targetObj, 20, ([_targetObj,_dog] call BIS_fnc_dirTo)] call BIS_fnc_relPos);
        _targetObj doWatch _dog;
        sleep .3;
        _animState = animationState _targetObj;
        _targetObj action ["Surrender", _targetObj];
        _targetObj glanceAt _dog;
        _targetObj doWatch _dog;

        sleep .3;
        waitUntil {sleep .1; !(alive _dog) or !((_dog getVariable "vCommand") == "detain") or (speed _dog) < 1 or (!alive _handler and !isNull _handler)};
        _dog doWatch ([_dog, 20, ([_dog, _targetObj] call BIS_fnc_dirTo)] call BIS_fnc_relPos);  // dog needs to look thru dude, else he spins in circles
        _targetObj dowatch ([_targetObj, 20, ([_targetObj,_dog] call BIS_fnc_dirTo)] call BIS_fnc_relPos);
        waitUntil {sleep .3; !(alive _dog) or !((_dog getVariable "vCommand") == "detain" ) or (!alive _handler and !isNull _handler)};
        // ****************************************************************
        // sleep a bit, then let detained unit resume his normal behaviour
        // ****************************************************************
        nul = [_targetObj, _dog, _animState] spawn
        {
            params ["_man","_dog","_animState"];
            sleep 1.5;
            waituntil {sleep .2; (_man distance _dog) > 5 or !alive _man or !alive _dog or !((_dog getVariable "vCommand") == "detain")};
            [_man, _animState] remoteExec ["switchMove", 0];
            _man forceSpeed -1;
            _man dofollow leader group _man;
            _man moveto getpos _man;
        };
        if (!alive (_dog getVariable "vTarget")) then {(_dog getVariable "vCommand") == "idle";};
    };
    //******************************************************************************
    // When handler killed, dog moves to dead handler and whimpers until new unit takes control of him
    //******************************************************************************
    if ((!alive _handler ) and !(isnull _handler)) then
    {
        _dog setVariable ["vHandler", objNull, true]; // dismisses dog so someone else can take him.
        if !(isnull _handler) then
        {
            if !(alive _handler) then
            {
                //systemchat "handler dead, assign new one";
                {
                    if (alive _x ) then 
                    {
                        nul = [_x] execvm "JBOY_Dog\JBOY_AddActionControlDog.sqf";
                    };
                } foreach (_dog getVariable "vOtherHandlers");
            };
              _dog enableAI "PATH";
             _moveToPos = (getPos _handler) vectorAdd [0,1,0];
             _dog doWatch _moveToPos;
             _dog moveTo _moveToPos;
             if ((_dog distance _moveToPos) < 300 and !(surfaceIsWater _moveToPos)) then
            {
                  if !(_last_anim == "Dog_Sprint") then {_dog playMove "Dog_Sprint"; _last_anim = "Dog_Sprint";};  
                _dog moveTo _moveToPos;
                 waitUntil {sleep .3; !(alive _dog) or  (!isNull (_dog getVariable "vHandler")) or (_dog distance _moveToPos) < 3};
               _dog doWatch ([_dog, 8, ([_dog,_handler] call BIS_fnc_dirTo)] call BIS_fnc_relPos);  // look at dead handler

              if !(_last_anim == "Dog_Stop") then {_dog playMove "Dog_Stop"; _last_anim = "Dog_Stop";};  
              _d = [_dog] spawn  // Dog cries until new handler takes him
              {
                    params["_dog"];
                    while {(alive _dog) and isNull (_dog getVariable "vHandler")} do
                    {
                        sleep (1+random 10);
                        dummy= [_dog, 1, ([ "boomerYelp", "boomerYelp2","Whimper1"] call BIS_fnc_arrayShuffle) select 0,""] execVM "JBOY_Dog\delaySay.sqf";
                    };
              };
           };
        };    
    };
    _surfaceNormal = surfaceNormal getposatl _dog;            
    _dog setVectorUp _surfaceNormal;  
 
    sleep .1;
}; // end main loop


deleteVehicle _biteObj;
if (!alive _dog) then
{
    if ((_handler getVariable "vHealActionID") > -1) then
    {
        _handler removeAction (_handler getVariable "vHealActionID");
    };
    _handler setVariable ["vDogAssigned", objNull, true];  // this removes dog menu from handler
};


/*
// Time to execute one playmove, and distance traveled.  Using lowest time of collected values.
// Idea is sleep long enough for one move only, so a series of playmoves don't stack up.
// Fact is switchmove and playmove on a dog runs the one move forever, until new move encountered. 
// My hope is internally, the AI checks for path change between moves in internal loop.
"Dog_Walk"   5.05 ( 5.16, 5.05, 5.13,5.17)  -- distance traveled: 2.89
"Dog_Run"    3.43 (3.47,3.51,3.43,3.5)      -- distance traveled: 5.12
"Dog_Sprint" 3.29 ( 3.29,3.31,3.35,3.39)    -- distance traveled: 7.85
*/



