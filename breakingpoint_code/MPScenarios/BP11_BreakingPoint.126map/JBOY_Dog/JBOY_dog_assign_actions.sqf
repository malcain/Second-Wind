// -- OBSOLETE NOW THAT WE USE DIALOG MENU
if (!isServer)  exitwith {};
_dog = _this select 0;
_handler = _this select 1;
// **************************************************************************
// Assign dog to handler, and start dog command program that will loop 
// and monitor for new commands.
// **************************************************************************
_dog disableCollisionWith _handler;
_handler setVariable ["vDogAssigned", _dog,true];

// if dog handler is a player, then assign Actions to him.
// if not a player, then AI handler will need scripts to manage dog.
if ( isPlayer _handler) then
{
    _handler setVariable ["vActionIDs", [],true];
// **************************************************************************************************************       
// ****** HEEL ****** HEEL ****** HEEL ****** HEEL ****** HEEL ****** HEEL ****** HEEL
// **************************************************************************************************************       
	//_HeelAction      = _handler addAction ["<t color = '#00AA00'>Dog: Heel", 
	_HeelAction      = _handler addAction ["Dog: Heel", 
    {   _dog=_this select 3 select 0; 
         if (isnull (attachedTo _dog)) then  // can't move if dog in vehicle 
        {
            _dog setVariable ["vCommand", 'heel', true];
        };
    }, [_dog]];
    _handler setVariable ["vActionIDs", (_handler getVariable "vActionIDs")+[_HeelAction],true];
// **************************************************************************************************************       
// ****** SIT ****** SIT ****** SIT ****** SIT ****** SIT ****** SIT ****** SIT
// **************************************************************************************************************       
	//_SitAction       = _handler addAction ["<t color = '#AAAAAA'>Dog: Sit",  
	_SitAction       = _handler addAction ["Dog: Sit",  
    {   _dog=_this select 3 select 0; 
          if (isnull (attachedTo _dog)) then  // can't move if dog in vehicle 
        {
            (_dog getVariable "vBulletMagnet") hideObject true; 
           _dog setVariable ["vCommand", 'sit', true];
        };
    }, [_dog]];
    _handler setVariable ["vActionIDs", (_handler getVariable "vActionIDs")+[_SitAction],true];
 // **************************************************************************************************************       
// ****** STAY ****** STAY ****** STAY ****** STAY ****** STAY ****** STAY ****** STAY
// **************************************************************************************************************       
	_StayAction      = _handler addAction ["Dog: Stay", 
    {   _dog=_this select 3 select 0; 
         if (isnull (attachedTo _dog)) then  // can't move if dog in vehicle 
        {
           _dog setVariable ["vCommand", 'stay', true];
        };
    }, [_dog]];
    _handler setVariable ["vActionIDs", (_handler getVariable "vActionIDs")+[_StayAction],true];
// **************************************************************************************************************       
// ****** MOVE THERE ****** MOVE THERE ****** MOVE THERE ****** MOVE THERE ****** MOVE THERE ****** MOVE THERE ****** MOVE THERE
// **************************************************************************************************************       
	_MoveThereAction = _handler addAction ["Dog: Move there", 
	  {_dog = (_this select 3) select 0;
        _handler = (_this select 3) select 1;
         if (isnull (attachedTo _dog)) then  // can't move if dog in vehicle 
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
            if ((_dog distance _MoveToPos)<31) then 
            {
                _dog setVariable ["vMoveToPos", _MoveToPos, true];
                _dog setVariable ["vCommand", 'moveThere', true];
            } else {
                _handler playActionNow "GestureGo";  // Hand signal animation GestureAdvance, GesturePoint, GestureGo (hand swipe forward)
                 dummy= [_dog, _handler, "moveThere"] execVM "JBOY_Dog\JBOY_HandlerSpeak.sqf";
                 dummy= [_dog, 2, "whimper1","Whimper"] execVM "JBOY_Dog\delaySay.sqf";
            };
        };
       }, [_dog,_handler]];
     _handler setVariable ["vActionIDs", (_handler getVariable "vActionIDs")+[_MoveThereAction],true];
// **************************************************************************************************************       
// ****** ATTACK ****** ATTACK ****** ATTACK ****** ATTACK ****** ATTACK ****** ATTACK ****** ATTACK
// **************************************************************************************************************       
 	_AttackAction = _handler addAction ["Dog: Attack", 
	  { _dog = (_this select 3) select 0;
        _handler = (_this select 3) select 1;
         if (isnull (attachedTo _dog)) then  // dog can't move if dog in vehicle 
        {
           _obj = cursorObject;
           diag_log ["cursorTarget",cursorTarget,"cursorObject",cursorObject];
           if (!isnull _obj) then 
           {
             if ((_obj isKindOf "Animal_Base_F" or _obj isKindOf "Man") and ( _dog distance _obj) < 51) then 
             {
               //gDOG_TARGET = _obj;
               //gMoveToPos =  ([_obj, 2, ([_obj, _dog] call BIS_fnc_dirTo)] call BIS_fnc_relPos);
               _dog setVariable ["vCommand", 'attack', true];
               _dog setVariable ["vTarget", _obj, true];
             } else {
                     _nearEnemies = [_handler, 50] call JBOY_getNearEnemies;  // if can't find enemy in direction handler looking, then get nearest known enemy.  Best for combat situations.
                    if (count _nearEnemies > 0) then 
                    {
                        _dog setVariable ["vCommand", 'attack', true];
                        _dog setVariable ["vTarget", _nearEnemies select 0, true];  
                    } else
                    {
                        _handler playActionNow "GesturePoint";  // Hand signal animation, point is fist punch forward
                        dummy= [_dog, _handler, "attack"] execVM "JBOY_Dog\JBOY_HandlerSpeak.sqf";
                        dummy= [_dog, 2, "whimper1","Whimper"] execVM "JBOY_Dog\delaySay.sqf";
                    };
              //dummy= [_dog, 2, "whimper1","Whimper"] execVM "JBOY_Dog\delaySay.sqf";
             };
           } else {
               _pos = screenToWorld[0.5,0.5];
               _nearDudes = nearestObjects [ _pos,["Animal"],5];  //hard to cursor target small animals directly...this makes it easier
               if(count _nearDudes > 0) then
               {
                   _dog setVariable ["vCommand", 'attack', true];
                   _dog setVariable ["vTarget", _nearDudes select 0, true];  
               } else {
                    _nearEnemies = [_handler, 50] call JBOY_getNearEnemies;  // if can't find enemy in direction handler looking, then get nearest known enemy.  Best for combat situations.
                    if (count _nearEnemies > 0) then 
                    {
                        _dog setVariable ["vCommand", 'attack', true];
                        _dog setVariable ["vTarget", _nearEnemies select 0, true];  
                    } else
                    {
                        _handler playActionNow "GesturePoint";  // Hand signal animation, point is fist punch forward
                        dummy= [_dog, _handler, "attack"] execVM "JBOY_Dog\JBOY_HandlerSpeak.sqf";
                        dummy= [_dog, 2, "whimper1","Whimper"] execVM "JBOY_Dog\delaySay.sqf";
                    };
               };
           };
       };
	   }, [_dog, _handler]];
     _handler setVariable ["vActionIDs", (_handler getVariable "vActionIDs")+[_AttackAction],true];
// **************************************************************************************************************       
// ****** FETCH ****** FETCH ****** FETCH ****** FETCH ****** FETCH ****** FETCH ****** FETCH
// **************************************************************************************************************       
 	_AttackAction = _handler addAction ["Dog: Fetch", 
	  {     _dog = (_this select 3) select 0;
            _handler = (_this select 3) select 1;
            _isFetchable = false;
            _obj = objNull;
             if (isnull (attachedTo _dog)) then  // dog can't move if dog in vehicle 
            {
               _obj = cursorObject;
               diag_log ["cursorTarget",cursorTarget,"cursorObject",cursorObject];
               if (!isnull _obj) then 
               {
                    _isFetchable = [_obj] call JBOY_isFetchable;
                    /*
                    switch (typeOf _obj) do 
                    { 	case "Rabbit_F":{       _isFetchable = true;};
                        case "Hen_random_F":{   _isFetchable = true;};
                        case "Cock_random_F":{  _isFetchable = true;};
                        case "Cock_white_F":{   _isFetchable = true;};
                     };  
*/                     
               } else {
                   _pos = screenToWorld[0.5,0.5];
                   _nearDudes = nearestObjects [ _pos,["Animal"],5];  //hard to cursor target small animals directly...this makes it easier
                   if(count _nearDudes > 0) then
                   {
                        _obj = _nearDudes select 0;
                        _isFetchable = [_obj] call JBOY_isFetchable;
                    /*
                        switch (typeOf (_obj)) do 
                        { 	case "Rabbit_F":{      _isFetchable = true;};
                            case "Hen_random_F":{  _isFetchable = true;};
                            case "Cock_random_F":{ _isFetchable = true;};
                            case "Cock_white_F":{  _isFetchable = true;};
                        };
                        */
                   };
               };
            };
            if (_isFetchable) then 
            {
diag_log ["_obj",_obj,typeOf _obj];
                if ((_dog distance _obj) < 101) then 
                {
                   _dog setVariable ["vCommand", 'attack', true];
                   _dog setVariable ["vTarget", _obj, true];
                } else {
                    _handler playActionNow "GesturePoint";  // Hand signal animation, point is fist punch forward
                    dummy= [_dog, _handler, "fetch"] execVM "JBOY_Dog\JBOY_HandlerSpeak.sqf";
                    dummy= [_dog, 2, "whimper1","Whimper"] execVM "JBOY_Dog\delaySay.sqf";
                };
            } else {
                _handler playActionNow "GesturePoint";  // Hand signal animation, point is fist punch forward
                dummy= [_dog, _handler, "fetch"] execVM "JBOY_Dog\JBOY_HandlerSpeak.sqf";
                dummy= [_dog, 2, "whimper1","Whimper"] execVM "JBOY_Dog\delaySay.sqf";
            };

	   }, [_dog, _handler]];
     _handler setVariable ["vActionIDs", (_handler getVariable "vActionIDs")+[_AttackAction],true];

// **************************************************************************************************************       
// ****** DETAIN ****** DETAIN ****** DETAIN ****** DETAIN ****** DETAIN ****** DETAIN ****** DETAIN
// **************************************************************************************************************       
	_DetainAction = _handler addAction ["Dog: Detain", 
	  {
        _dog = (_this select 3) select 0;
        _handler = (_this select 3) select 1;
         if (isnull (attachedTo _dog)) then  // can't move if dog in vehicle 
        {
           _obj = cursorTarget;
           if (!isnull _obj) then 
           {
             if (_obj isKindOf "Man" and ( _dog distance _obj) < 26) then 
             {
               //gDOG_TARGET = _obj;
               //gMoveToPos =  ([_obj, 2, ([_obj, _dog] call BIS_fnc_dirTo)] call BIS_fnc_relPos);
               _dog setVariable ["vCommand", 'detain', true];
               _dog setVariable ["vTarget", _obj, true];
             } else {
                _handler playActionNow "gestureAttack";  // Hand signal animation GestureAdvance, GesturePoint, GestureGo (hand swipe forward)
                sleep .3;
                dummy= [_dog, _handler, "detain"] execVM "JBOY_Dog\JBOY_HandlerSpeak.sqf";
                dummy= [_dog, 2, "whimper1","Whimper"] execVM "JBOY_Dog\delaySay.sqf";
             };
           } else {
                _handler playActionNow "gestureAttack";  // Hand signal animation GestureAdvance, GesturePoint, GestureGo (hand swipe forward)
                sleep .3;
                dummy= [_dog, _handler, "detain"] execVM "JBOY_Dog\JBOY_HandlerSpeak.sqf";
                dummy= [_dog, 2, "whimper1","Whimper"] execVM "JBOY_Dog\delaySay.sqf";
           };
        };
	   }, [_dog, _handler]];
     _handler setVariable ["vActionIDs", (_handler getVariable "vActionIDs")+[_DetainAction],true];
// **************************************************************************************************************       
// ****** AT EASE ****** AT EASE ****** AT EASE ****** AT EASE ****** AT EASE ****** AT EASE ****** AT EASE
// **************************************************************************************************************   
/*    Now using At Ease for Dismissed.
	_AtEaseAction  = _handler addAction ["Dog: At ease", 
    {   
        _dog=_this select 3 select 0; 
        if (isNull (_dog getVariable "vVehicle")) then  // can't move if dog in vehicle 
        {
            _dog setVariable ["vCommand", 'atEase', true];
        };
    }, [_dog]];
     _handler setVariable ["vActionIDs", (_handler getVariable "vActionIDs")+[_AtEaseAction],true];
*/   
// **************************************************************************************************************       
// ****** GET IN ****** GET IN ****** GET IN ****** GET IN ****** GET IN ****** GET IN ****** GET IN
// **************************************************************************************************************       
	_GetinAction  = _handler addAction ["Dog: Get in", 
    {
        _handler = (_this select 3) select 1;
        _dog=_this select 3 select 0; 
        //if (isNull (_dog getVariable "vVehicle")) then  // can't move if dog in vehicle 
        if (isnull (attachedTo _dog)) then  // if dog not already in (i.e., attached) to a vehicle.
        {
           _obj = cursorObject;
           diag_log ["cursorTarget",cursorTarget,"cursorObject",cursorObject];
           if (!(isnull _obj) and (_obj isKindOf "Offroad_01_unarmed_base_F" 
                                or _obj isKindOf "Offroad_01_base_F"
                                or _obj isKindOf "Offroad_02_unarmed_base_F"
                                or _obj isKindOf "Rubber_duck_base_F"
                                or _obj isKindOf "Heli_Light_01_unarmed_base_F"
                                )) then 
           {
             if ((_handler distance _obj) < 31) then 
             {
               (_dog getVariable "vBulletMagnet") hideObject true; 
               _dog setVariable ["vCommand", 'getin', true];
               _dog setVariable ["vVehicle", _obj, true];
             } else {
               dummy= [_dog, _handler, "getin"] execVM "JBOY_Dog\JBOY_HandlerSpeak.sqf";
               dummy= [_dog, 2, "whimper1","Whimper"] execVM "JBOY_Dog\delaySay.sqf";
               hint "You must point at a vehicle within 30 meters for dog to understand.";
             };
           } else {
               if (isnull _obj) then {
                   dummy= [_dog, _handler, "getin"] execVM "JBOY_Dog\JBOY_HandlerSpeak.sqf";
                   dummy= [_dog, 2, "whimper1","Whimper"] execVM "JBOY_Dog\delaySay.sqf";
                   hint "You must point at a vehicle within 30 meters for dog to understand.";
               } else {
                   dummy= [_dog, _handler, "getin"] execVM "JBOY_Dog\JBOY_HandlerSpeak.sqf";
                   dummy= [_dog, 2, "whimper1","Whimper"] execVM "JBOY_Dog\delaySay.sqf";
                   hint format ["Dog has not been trained for this vehicle type: %1.",typeOf _obj];               
               };
           };
        };
    }, [_dog,_handler]];
     _handler setVariable ["vActionIDs", (_handler getVariable "vActionIDs")+[_GetinAction],true];
// **************************************************************************************************************       
// ****** GET OUT ****** GET OUT ****** GET OUT ****** GET OUT ****** GET OUT ****** GET OUT ****** GET OUT
// **************************************************************************************************************       
	_GetoutAction  = _handler addAction ["Dog: Get out", 
    {
         _dog=_this select 3 select 0; 
         if !(isnull (attachedTo _dog)) then  // Must be in/attached to vehicle
        {
            _dog setVariable ["vVehicle", objNull, true];
             if !(attachedTo (_dog) == objNull) then 
             {
               _dog setVariable ["vCommand", 'getout', true];
             } else {
               dummy= [_dog, .3, "whimper1","Whimper"] execVM "JBOY_Dog\delaySay.sqf";
             };
		 };
    }, [_dog]];
     _handler setVariable ["vActionIDs", (_handler getVariable "vActionIDs")+[_GetoutAction],true];
// **************************************************************************************************************       
// ****** DISMISS ****** DISMISS ****** DISMISS ****** DISMISS ****** DISMISS ****** DISMISS ****** DISMISS
// **************************************************************************************************************       
	_DismissAction      = _handler addAction ["Dog: Dismiss", 
    {   _dog    =_this select 3 select 0; 
        _handler=_this select 3 select 1; 
        _handler sidechat "Dismiss dog.";
        _dog setVariable ["vCommand", 'atEase', true];
       (_dog getVariable "vBulletMagnet") hideObject true; 
        waitUntil {sleep .2; !(alive _dog) or isNull(_dog getVariable "vHandler")};
        _dog setVariable ["vHandler", objNull, true];  // unassign handler
        _handler setVariable ["vDogAssigned", objNull, true];  // unassign handler
        //_n=[_dog] spawn {sleep 2; _dog=_this select 0; _dog setVariable ["vCommand", 'atEase', true]};
        // Remove all dog control actions from _handler
        {_handler removeAction _x;} foreach (_handler getVariable "vActionIDs");
// **************************************************************************************************************       
// ****** TAKE CONTROL OF DOG ***** TAKE CONTROL OF DOG ***** TAKE CONTROL OF DOG ***** TAKE CONTROL OF DOG ***** 
// **************************************************************************************************************       
        // Add action to dog so someone else can take control of him
        nul = [_handler] execvm "JBOY_Dog\JBOY_AddActionControlDog.sqf";
        /*
        _ControlAction      = _handler addAction ["Take control of Dog", 
        {   _handler    =_this select 3 select 0;
            _id      =_this select 2;
             
            // assign actions to player taking control
            _obj = cursorObject;
            if (!isnull _obj) then 
            {
                 if (_obj isKindOf "Dog_Base_F" and alive _obj) then 
                 {
                     _dog = _obj;
                     _language = [_handler,false] call JBOY_getSpeakerLanguage; // need to remember this!  add variable to handler for this.
                     _dog setVariable ["vHandlerLanguageAbbrev", _language, true];  // language commands will be spoken in.
         diag_log ["obj",_obj, "_dog",_dog, _obj isKindOF "Dog_Base_F", _handler];
                     _dog setVariable ["vHandler", _handler, true];  // assign dog handler
                     _handler setVariable ["vDogAssigned", _dog,true];
                     _nul = [_dog, _handler] execVM "JBOY_Dog\JBOY_dog_assign_actions.sqf";
                     _dog setVariable ["vCommand", 'heel', true];
                     _handler removeAction _id;
                 } else {
                   hint "Point cursor at a dog to take control of it.";
                 };
            } else {
                hint "Point cursor at a dog to take control of it.";
            };
        }, [_handler]];
        */
     }, [_dog,_handler]];
     _handler setVariable ["vActionIDs", (_handler getVariable "vActionIDs")+[_DismissAction],true];
};
