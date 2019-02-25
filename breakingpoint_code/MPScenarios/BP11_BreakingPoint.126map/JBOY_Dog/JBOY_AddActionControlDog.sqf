//////////////////////////////////////////////////////////
// JBOY_AddActionControlDog.sqf
// Created by: johnnyboy
// nul = [player] execvm "JBOY_Dog\JBOY_AddActionControlDog.sqf";
//////////////////////////////////////////////////////////

params["_handler"];
// Add action to handler so he can take control of a dog.
if (_handler getVariable ["vTakeControlOfDogActionID", -1] == -1) then 
{
    _ControlAction = _handler addAction ["Take control of Dog", 
    {   _handler   =_this select 3 select 0;
        _id        =_this select 2;
             // assign actions to player taking control
            _obj = cursorObject;
            if (!isnull _obj) then 
            {
                 if (_obj isKindOf "Dog_Base_F" and alive _obj) then 
                 {
                     _dog = _obj;
                     _language = [_handler,false] call JBOY_getSpeakerLanguage;     // need to remember this!  add variable to handler for this.
                     _dog setVariable ["vHandlerLanguageAbbrev", _language, true];  // language commands will be spoken in.
                      _dog setVariable ["vHandler", _handler, true];  // assign dog handler
                     _handler setVariable ["vDogAssigned", _dog,true];
                     // Now that I'm using soolie's menu dialog, I don't call this action menu dialog
                     //_nul = [_dog, _handler] execVM "JBOY_Dog\JBOY_dog_assign_actions.sqf";
                     //_dog setVariable ["vCommand", 'heel', true];
                     _dogMenu = [] spawn {_d=[player] call JBOY_fnc_DogDisplayEH;};  // Add dog menu to player
                     _dog setVariable ["vCommand", 'heel', true];
                     hint "Use 'T' key for Dog Menu";
                     _handler removeAction _id;

                    {_x removeAction (_x getVariable "vTakeControlOfDogActionID");} foreach (_handler getVariable "vOtherHandlers");
                     
                 } else {
                   hint "Point cursor at a dog to take control of it.";
                 };
            } else {
                hint "Point cursor at a dog to take control of it.";
            };
    }, [_handler]];
    _handler setVariable ["vTakeControlOfDogActionID",_ControlAction,true];
};