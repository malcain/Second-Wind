// JBOY_getTargetDesignatedByHandler.sqf
// **********************************************
// For Detain and Attack, get object player is looking at.  This is the sequence:
// 1. Get exact cursorObject cursor is on.
// 2. If cursor not found, get nearest objects on the ground at position.
// 3. If not found, find closest man or animal within a plus or minus dir of dir handler is looking, with a max of X meters away
// 
// **********************************************
if (!isServer)  exitwith {};
params["_handler","_dog","_maxDistanceToTarget"];
_attackableObjectTypes = ["Rabbit_F","Hen_random_F","Cock_random_F","Cock_white_F","Man"];
//_attackableObjectTypes = ["Animal","Man"];
_returnTarget = objNull;
_obj = objNull;
_obj = cursorObject;
_nearDudes = [];
if (!isnull _obj) then 
{
     //if ((_obj isKindOf "Animal_Base_F" or _obj isKindOf "Man") and ( _dog distance _obj) < 51) then 
     if ({_obj isKindOf _x} count _attackableObjectTypes > 0 and _obj != _dog) then
     {
       //_dog setVariable ["vCommand", 'attack', true];
       //_dog setVariable ["vTarget", _obj, true];
       _returnTarget = _obj;
     };
} else 
{
   _pos = screenToWorld[0.5,0.5];
   _nearDudes = nearestObjects [ _pos,_attackableObjectTypes,5];  //hard to cursor target small animals directly...this makes it easier
   _nearDudes deleteAt (_nearDudes find _handler);
   _nearDudes deleteAt (_nearDudes find _dog);
   //_nearDudes = _nearDudes - [_handler];
   //_nearDudes = _nearDudes - [_dog];
   if(count _nearDudes > 0) then
   {
       //_dog setVariable ["vCommand", 'attack', true];
       //_dog setVariable ["vTarget", _nearDudes select 0, true];  
       _returnTarget =  _nearDudes select 0;
   } else {
        _nearDudes = nearestObjects [ _handler,_attackableObjectTypes,_maxDistanceToTarget];
        _nearDudes deleteAt (_nearDudes find _handler);
        _nearDudes deleteAt (_nearDudes find _dog);
        _y = 0;
        _objFound = false;
        _returnTarget = objNull;
        while {(_y < count _nearDudes) and not _objFound} do
        {
//systemchat format ["near dude=%1, dirto _x=%2", _handler, (abs(getdir _handler - ([_handler, ( _nearDudes select _y)] call BIS_fnc_dirTo)))];
            if (abs(getdir _handler - ([_handler, _nearDudes select _y] call BIS_fnc_dirTo)) < 60 
                and (_nearDudes select _y) != _handler
                and (_nearDudes select _y) != _dog
                and typeOf(_nearDudes select _y) in _attackableObjectTypes) then  // find nearest target plus or minus 45 degrees of handler's dir
            {
                _objFound = True;
                _returnTarget = _nearDudes select _y;
            };
            _y = _y +1;
        };
   };
};
if (isNull _returnTarget) then
{
    _nearEnemies = [_handler, 50] call JBOY_getNearEnemies;  // if can't find enemy in direction handler looking, then get nearest known enemy.  Best for combat situations.
    if (count _nearEnemies > 0) then 
    {
        _returnTarget = _nearEnemies select 0;  
    };
}; 
if ( _returnTarget == _handler) then
{
    _returnTarget = objNull;  
}; 
//systemChat format ["_nearDudes=%1",_nearDudes];
//systemChat format ["_returnTarget=%1,typeof%2,inheritsFrom=%3",_returnTarget,(typeOf _returnTarget),(inheritsFrom (configFile >> "CfgVehicles" >> typeOf (_returnTarget)))];
_returnTarget
