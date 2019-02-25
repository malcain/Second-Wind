// JBOY_DogEnemyDetectionLoop.sqf
if (!isServer)  exitwith {};
// dmy = [_dog] execVM JBOY_DogEnemyDetectionLoop;
params["_dog"];

/* ************************************************************************************************
Loop checks for enemies near dog.  If detected, switches vCommand to type Contact.
*/
_dogSide = _dog getVariable "vSide";
_dog setVariable ["vScentTrailDetectionOn", true, true]; // Default is dog will not be scanning for scentMarkers to track.
_EnemyDetectDistance = _dog getVariable "vEnemyDetectDistance";
_enemyFound = false;
_enemies = [];
_target = objNull;
_prevTarget = objNull;
_targetPos = [0,0,0];

while { alive _dog  } do
{
    sleep 3;
    _handler = _dog getVariable "vHandler";
    _command = _dog getVariable "vCommand";
	_EnemyDetectDistance = _dog getVariable "vEnemyDetectDistance";

    if (!(_command  in ["attack"]) and (isnull (attachedTo _dog)) and (_dog distance _handler <= 40)) then  // don't bother detecting enemy if handler not close to dog
    
    {
        _nearTargets = [];
        _nearTargets = [getpos _dog, ["CAManBase","Hen_random_F","Cock_random_F","Cock_white_F"], _EnemyDetectDistance] call JBOY_getNearTargets;
        _enemies = [_dogSide, _nearTargets] call JBOY_Dog_getEnemyFromArray; // Get only enemies from near tearget array.
        if (count _enemies > 0) then
        {
            //diag_log "JBOY_DogEnemyDetectionLoop.sqf", _nearTargets, _enemies;
            //hint format ["JBOY_DogEnemyDetectionLoop.sqf _enemies=%1", _enemies];
            _enemyFound = True;
            _target = _enemies select 0;
            if (_target != _prevTarget or (_targetPos distance _target) > 10) then
            {
                _dog setVariable ["vCurrentScentMarker",objnull,true];
                _dog setVariable ["vTarget",_target,true]; 
                _dog setVariable ["vCommand","contact",true];                      // change command to CONTACT
                sleep .5;
                waitUntil {sleep 1; !(alive _dog) or !alive _handler or !(alive _target) or (_targetPos distance _target) > 10 
                                    or !((_dog getVariable "vCommand") in ['contact','attack','detain'])};
                _prevTarget = _target;
            };
            _targetPos = getPos _target;
        };
   };
};

