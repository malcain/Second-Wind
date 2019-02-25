//JBOY_dogExecuteAction.sqf
// called by Soolie's menu
if (!isServer)  exitwith {};
params["_handler","_command"];
//_handler = player;

// **************************************************************************
// Assign dog to handler, and start dog command program that will loop 
// and monitor for new commands.
// **************************************************************************
_dog = _handler getVariable "vDogAssigned";
_dog disableCollisionWith _handler;

switch (_command) do
{
    // Commands Array from JBOY_fnc_DogOpenUI
    //_commands = ["Heel","Sit","Stay","Move There","Attack","Fetch","Detain","Get In","Dismiss"]
    
    //Heel 
    case "heel": 
    {
         if (isnull (attachedTo _dog) or typeOF (attachedTo _dog) == "B_diver_exp_F") then  // can't move if dog in vehicle 
        {
            _dog setVariable ["vCommand", 'heel', true];
        };
    };
    case "sit": 
    {
        if (isnull (attachedTo _dog)) then  // can't move if dog in vehicle 
        {
            //(_dog getVariable "vBulletMagnet") hideObject true; 
           _dog setVariable ["vCommand", 'sit', true];
        };    
    };
    case "stay": 
    {
        if (isnull (attachedTo _dog)) then  // can't move if dog in vehicle 
        {
           _dog setVariable ["vCommand", 'stay', true];
        };    
    };
    case "moveThere": 
    {
        if (isnull (attachedTo _dog) or typeOF (attachedTo _dog) == "B_diver_exp_F") then  // can't move if dog in vehicle 
        {
           _pos = screenToWorld[0.5,0.5];
           _MoveToPos = _pos;
           _obj = cursorTarget;
           if (!isnull _obj) then 
           { _pos = getpos _obj; 
                 if (_obj isKindOf "Man") then 
                 {
                   _dog dowatch ([_obj,-20, ([_obj, _dog] call BIS_fnc_dirTo)] call BIS_fnc_relPos);
                 };
                 _MoveToPos =  ([_obj, 2, ([_obj, _dog] call BIS_fnc_dirTo)] call BIS_fnc_relPos);
            } else {
                _MoveToPos =  _pos;
            };
            if ((_dog distance _MoveToPos)>30) then   // if handler pointed more than 30m away, dog only moves 30m
            {
                _MoveToPos =  ([_dog, 30, ([_dog, _MoveToPos] call BIS_fnc_dirTo)] call BIS_fnc_relPos);
            };
            if ((_dog distance _MoveToPos)<40) then 
            {
                _dog setVariable ["vMoveToPos", _MoveToPos, true];
                _dog setVariable ["vCommand", 'moveThere', true];
            } else {
                _handler playActionNow "GestureGo";  // Hand signal animation GestureAdvance, GesturePoint, GestureGo (hand swipe forward)
                _dummy= [_dog, _handler, "moveThere"] execVM "JBOY_Dog\JBOY_HandlerSpeak.sqf";
                _dummy= [_dog, 2, "whimper1","Whimper"] execVM "JBOY_Dog\delaySay.sqf";
            };
        };
    };  
    case "attack": 
    {
        if (isnull (attachedTo _dog)) then  // dog can't move if dog in vehicle 
        {
           _obj = [_handler, _dog, 50] call JBOY_getTargetDesignatedByHandler;
           //systemChat format ["obj=%1",_obj];
           if (!isnull _obj) then 
           {
               _dog setVariable ["vCommand", 'attack', true];
               _dog setVariable ["vTarget", _obj, true];
           } else 
           {
                    _handler playActionNow "GesturePoint";  // Hand signal animation, point is fist punch forward
                    _dummy= [_dog, _handler, "attack"] execVM "JBOY_Dog\JBOY_HandlerSpeak.sqf";
                    _dummy= [_dog, 2, "whimper1","Whimper"] execVM "JBOY_Dog\delaySay.sqf";
           };
        };   
    };
    case "fetch": 
    {
        _isFetchable = false;
        _obj = objNull;
         if (isnull (attachedTo _dog)) then  // dog can't move if dog in vehicle 
        {
           _obj = cursorObject;
           //diag_log ["cursorTarget",cursorTarget,"cursorObject",cursorObject];
           if (!isnull _obj) then 
           {
                _isFetchable = [_obj] call JBOY_isFetchable;
                  
           } else {
               _pos = screenToWorld[0.5,0.5];
               _nearDudes = nearestObjects [ _pos,["Animal"],5];  //hard to cursor target small animals directly...this makes it easier
               if(count _nearDudes > 0) then
               {
                    _obj = _nearDudes select 0;
                    _isFetchable = [_obj] call JBOY_isFetchable;
               };
           };
        };
        if (_isFetchable) then 
        {
            if ((_dog distance _obj) < 101) then 
            {
               _dog setVariable ["vCommand", 'attack', true];
               _dog setVariable ["vTarget", _obj, true];
            } else {
                _handler playActionNow "GesturePoint";  // Hand signal animation, point is fist punch forward
                _dummy= [_dog, _handler, "fetch"] execVM "JBOY_Dog\JBOY_HandlerSpeak.sqf";
                _dummy= [_dog, 2, "whimper1","Whimper"] execVM "JBOY_Dog\delaySay.sqf";
            };
        } else {
            _handler playActionNow "GesturePoint";  // Hand signal animation, point is fist punch forward
            _dummy= [_dog, _handler, "fetch"] execVM "JBOY_Dog\JBOY_HandlerSpeak.sqf";
            _dummy= [_dog, 2, "whimper1","Whimper"] execVM "JBOY_Dog\delaySay.sqf";
        };
    };
    case "detain": 
    {
        if (isnull (attachedTo _dog)) then  // can't move if dog in vehicle 
        {
           _obj = [_handler, _dog, 50] call JBOY_getTargetDesignatedByHandler;
           if (!isnull _obj) then 
           {
               _dog setVariable ["vCommand", 'detain', true];
               _dog setVariable ["vTarget", _obj, true];
           } else 
           {
                    _handler playActionNow "gestureAttack";  // Hand signal animation, point is fist punch forward
                    _dummy= [_dog, _handler, "detain"] execVM "JBOY_Dog\JBOY_HandlerSpeak.sqf";
                    _dummy= [_dog, 2, "whimper1","Whimper"] execVM "JBOY_Dog\delaySay.sqf";
           };
        };
    };
    case "getin": 
    {
        if (isnull (attachedTo _dog)) then  // if dog not already in (i.e., attached) to a vehicle.
        {
           _obj = objNull;
           if (vehicle _handler == _handler) then
           {
                _obj = cursorObject;
           } else
           {
                _obj = vehicle _handler;
           };
           //diag_log ["cursorTarget",cursorTarget,"cursorObject",cursorObject];
           if (!(isnull _obj) and (_obj isKindOf "Offroad_01_unarmed_base_F" 
                                or _obj isKindOf "Offroad_01_base_F"
                                or _obj isKindOf "Offroad_02_unarmed_base_F"
                                or _obj isKindOf "Rubber_duck_base_F"
                                or _obj isKindOf "Heli_Light_01_unarmed_base_F"
                                )) then 
           {
                 if ((_handler distance _obj) < 31) then 
                 {
                   _dog setVariable ["vCommand", 'getin', true];
                   _dog setVariable ["vVehicle", _obj, true];
                 } else {
                   _dummy= [_dog, _handler, "getin"] execVM "JBOY_Dog\JBOY_HandlerSpeak.sqf";
                   _dummy= [_dog, 2, "whimper1","Whimper"] execVM "JBOY_Dog\delaySay.sqf";
                   hint localize "STR_JBOY_DOG_PointAtVehicle";
                 };
           } else {
               if (isnull _obj) then {
                   _dummy= [_dog, _handler, "getin"] execVM "JBOY_Dog\JBOY_HandlerSpeak.sqf";
                   _dummy= [_dog, 2, "whimper1","Whimper"] execVM "JBOY_Dog\delaySay.sqf";
                   hint localize "STR_JBOY_DOG_PointAtVehicle";
               } else {
                   _dummy= [_dog, _handler, "getin"] execVM "JBOY_Dog\JBOY_HandlerSpeak.sqf";
                   _dummy= [_dog, 2, "whimper1","Whimper"] execVM "JBOY_Dog\delaySay.sqf";
                   hint format [localize "STR_JBOY_DOG_NotTrainedForVehicle"+" %1.",typeOf _obj];               
               };
           };
        };
    };
    case "getout": 
    {
        if !(isnull (attachedTo _dog)) then  // Must be in/attached to vehicle
        {
            _dog setVariable ["vVehicle", objNull, true];
             if !(attachedTo (_dog) == objNull) then 
             {
               _dog setVariable ["vCommand", 'getout', true];
             } else {
               _dummy= [_dog, .3, "whimper1","Whimper"] execVM "JBOY_Dog\delaySay.sqf";
             };
        };
    };
    case "track": 
    {
         if (isnull (attachedTo _dog)) then  // can't track if dog in vehicle 
        {
            _scentTrailDetectDistance = _dog getVariable "vScentTrailDetectDistance";
            _scentMarkers = nearestObjects [_dog, ["Sign_Arrow_Large_Cyan_F"], _scentTrailDetectDistance] ;
            if ((count _scentMarkers) > 0) then
            {
            // trail needs at least 2 markers...this sometimes happens when attacking prey, previous markers deleted, and only one new marker created for prey survivor
                _preyTrackingObj = (_scentMarkers select 0) getvariable "prey";
                _trail = _preyTrackingObj getVariable "trail";
                if ((count _trail) > 1) then             
                {
                    _scentMarker = _scentMarkers select 0;
                    _dog setVariable ["vCurrentScentMarker",_scentMarker,true];
                    _dog setVariable ["vMoveToPos", getpos _scentMarker, true]; 
                    _dummy= [_scentMarker] execVM "JBOY_Dog\JBOY_DogScentDeleteOlderScent.sqf";
                };  
            };
            // if above does not find a new closer scentmarker, there still may be an older scentmarker known to dog that causes next if to be true.
            if !(isnull (_dog getVariable "vCurrentScentMarker")) then
            {
                _dog setVariable ["vCommand", 'track', true];
            } else
            {
                _dummy= [_dog, .3, "whimper1","Whimper"] execVM "JBOY_Dog\delaySay.sqf";
            };
        };
    };
    case "speak": 
    {
       _dummy= [_dog, _handler, "speak"] execVM "JBOY_Dog\JBOY_HandlerSpeak.sqf";
       if (  ((getObjectTextures _dog select 0) find "dogBulletHole2")>=0 or ((getObjectTextures _dog select 0) find "dogBloodNeck2Hole")>=0) then
        {
            _dummy= [_dog, 2, selectRandom [ "boomerYelp", "boomerYelp2"], "Yelp"] execVM "JBOY_Dog\delaySay.sqf";
        } else {
            _dummy= [_dog, 2,  "bark1", "bark"] execVM "JBOY_Dog\delaySay.sqf";
         };
    };
    case "dismiss": 
    {
        _dog setVariable ["vCommand", 'atEase', true];
        waitUntil {sleep .2; !(alive _dog) or isNull(_dog getVariable "vHandler")};
        _dog setVariable ["vHandler", objNull, true];  // unassign handler
        _handler setVariable ["vDogAssigned", objNull, true];  // unassign handler
        // Add action to dog so someone else can take control of him
        nul = [_handler] execvm "JBOY_Dog\JBOY_AddActionControlDog.sqf";
    };
}; // end _command switch
