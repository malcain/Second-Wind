//////////////////////////////////////////////////////////
// JBOY_DogDismiss.sqf -- OBSOLETE NOW THAT WE USE DIALOG MENU
// Created by: johnnyboy
//
// Dismiss dog (remove dog actions, and add a take control of dog action)
// nul = [_dog, _handler] execVM "JBOY_Dog\JBOY_DogDismiss.sqf";
//////////////////////////////////////////////////////////
if (!isServer)  exitwith {};
params["_dog","_handler"];  

if (alive _dog) then {_handler sidechat "Dismiss dog.";};          
_dog setVariable ["vCommand", 'atEase', true];
_n=[_dog] spawn {params["_dog"]; sleep 1; (_dog getVariable "vBulletMagnet") hideObject true; }; //hide bullet magnet
//?? waitUntil {sleep .2; !(alive _dog) or isNull(_dog getVariable "vHandler")};
_dog setVariable ["vHandler", objNull, true];  // unassign handler
_handler setVariable ["vDogAssigned", objNull, true];  // unassign handler
// Remove all dog control actions from _handler
{_handler removeAction _x;} foreach (_handler getVariable "vActionIDs");
// **************************************************************************************************************       
// ****** TAKE CONTROL OF DOG ***** TAKE CONTROL OF DOG ***** TAKE CONTROL OF DOG ***** TAKE CONTROL OF DOG ***** 
// **************************************************************************************************************       
// Add action to handler so he can take control of another dog.
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
    // diag_log ["obj",_obj, "_dog",_dog, _obj isKindOF "Dog_Base_F", _handler];
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