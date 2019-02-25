//////////////////////////////////////////////////////////
// JBOY_AIFightsDogs.sqf
// Created by: johnnyboy
// nul = [_targetObj,_dog] execvm "JBOY_Dog\JBOY_AIFightsDogs.sqf";
//
//////////////////////////////////////////////////////////
if (!isServer)  exitwith {};
params ["_dude","_dog"];
if (isPlayer _dude) exitwith {};
//*************************************************
// Execute this on each Unit being attacked by dog(s)
// First assign unit a "pack attack variable"
// If already has variable, then exit, so script only executing once per unit
//*************************************************
if !(isnil {_dude getvariable "vAttackedByDogs"} )  exitwith {};
_dude setvariable ["vAttackedByDogs",true,true];

// delayed reaction to dog attack
_reactionDistance = 5 + random 15;
waituntil {sleep .5; (_dog distance _dude) <= _reactionDistance or !alive _dog or !alive _dude };
//sleep 3+random 10;
// **********************************************
// Get dude ready to fight and reveal all near dogs to him.
// **********************************************
_dude setUnitPos "UP"; 
_dude setBehaviour "COMBAT"; 

_assignedDog = _dog;
_nearDogs = [];
{
   if (alive _x) then
   {
        _nearDogs pushBack _x;    // add dog to enemy dog list that dude knowsabout
   };
} foreach ((getpos _dude) nearObjects ["Dog_Base_F", 200]);  // all near dogs
  
// **********************************************
// Initially target assigned dog
// **********************************************
_targetDog = _assignedDog;
sleep 1;
dostop _dude;
// **********************************************
// Create an invisible target for AI to shoot at (aka bullet magnet). For debugging, attach a sphere so we can see where target is.
// **********************************************
//_bulletMagnetUnitType = "B_Survivor_F";
_bulletMagnetUnitType = "B_TargetSoldier";
_bulletMagnet = createVehicle [_bulletMagnetUnitType, [0,0,0], [], 0, "CAN_COLLIDE"];
//_sphere = createVehicle ['Sign_Sphere25cm_F', [0,0,0], [], 0, "CAN_COLLIDE"];
//_sphere attachTo [_bulletMagnet,[0,0,0]];
//_bulletMagnet setunitPOS "DOWN";
_bulletMagnet lockTurret [[0],true]; // target object has a gunner position, so lock it so player isn't offered "get in gunner" option when near dog
createVehicleCrew _bulletMagnet;
_bulletMagnet enableCollisionWith _dog;
_bulletMagnet attachTo [_dog,[0,-1,.3]];//[_dog,[0,-1,.3]];

_enemy = _bulletMagnet;
_enemy allowdamage false;

_cnt = 0;
_dude reveal _enemy;
_dude doTarget _enemy;
_dude dofire _enemy;
_dude setVariable ["vTargetDog", _enemy, true];
 sleep 2;
 // *****************************************************************************
 // Spawn separate loop for targeting with different sleep timing. Less frequent 
 // target changing will hopefully reduce rifle raising/lowering retardation.
 // *****************************************************************************
_nul= [_dude, _nearDogs, _bulletMagnet]
spawn
{
    params["_dude", "_nearDogs","_bulletMagnet"];
  
    // **********************************************
    // Loop until all dogs dead, or dude dead, or no dogs left with an assigned target (i.e., attack called off)
    // **********************************************
    _prevTarget = objNull;
    while {alive _dude and ({alive _x and (_x distance _dude)<100} count _nearDogs) > 0} do
    {
        //_nearDogs deleteAt (_nearDogs find _targetDog);
        _targetDog = [_dude, _nearDogs] call JBOY_getClosestObjFromArray; // target closest dog
        _enemy = _targetDog;
        if (_prevTarget != _targetDog) then  // assign new target.
        {
        _prevTarget = _targetDog;
             _dude dowatch objnull;
            _enemy = _bulletMagnet;
            _dude setVariable ["vTargetDog", _enemy, true];
            //_enemy = (_targetDog getVariable "vBulletMagnet");
            _bulletMagnet enableCollisionWith _targetDog;
            _dude reveal _enemy;
            if ((_dude distance _targetDog) > 15) then
            {
                detach _bulletMagnet;
                _bulletMagnet attachTo [_targetDog,[0,-1.5,.5]]; //[_targetDog,[0,-1.5,.5]];
                _dude reveal _bulletMagnet;
                // watch only when far
                //_dude doWatch  _targetDog;
            _dude doTarget _enemy;
            _dude dofire _enemy;
            } else
            {
               detach _bulletMagnet;
               _bulletMagnet attachTo [_targetDog,[0,-.3,.5]]; // set target back further so shooter adjusts shooting angle
               _dude reveal _bulletMagnet;
               // target and fire when close
            _dude doTarget _enemy;
            _dude dofire _enemy;
            };
            /*
            _dude doWatch  _targetDog;
            _dude doTarget _enemy;
            _dude dofire _enemy;
            */
       };
        //_dude doWatch ([_dude, (_dude distance _targetDog)-4, ([_dude, _targetDog] call BIS_fnc_dirTo)] call BIS_fnc_relPos);
        sleep .2;
    };
};  // End spawn.
// *****************************************************************************
// This loop for firing.  It sleeps less to fire more often.
// *****************************************************************************
while {alive _dude and ({alive _x and (_x distance _dude)<100} count _nearDogs) > 0} do
{
    if (isPlayer _dude) exitwith {}; // In case player spawns into AI during group respawn.
    _cnt = _cnt + 1;
    if (count _nearDogs >0) then
    {        
       //if (abs(getdir _dude - ([_dude, _enemy] call BIS_fnc_dirTo)) < 80 and ((_dude distance _enemy)) <100) then
       if (abs(getdir _dude - ([_dude, (_dude getVariable "vTargetDog")] call BIS_fnc_dirTo)) < 45 and ((_dude distance (_dude getVariable "vTargetDog"))) <100) then
       {
            for "_i" from 0 to (3+random 5) do
            {
                 JBOYDogGameLogic action ["useWeapon",_dude,_dude,0];
                 // _dude forceWeaponFire [ weaponState _dude select 1, weaponState _dude select 2];
                 sleep .01;
            };
        };
        sleep .3;
    };
}; // End While
_dude setvariable ["vAttackedByDogs",false,true];

if (alive _dude) then
{
    _dude setUnitPos "AUTO"; 
    _dude doWatch objNull;
    _dude setBehaviour "SAFE";
} else 
{
    deleteVehicle _bulletMagnet;
};

// News Scroll:
// http://www.kylania.com/ex/?p=79

// Building Cam Rotate script:  https://forums.bistudio.com/topic/165631-release-gom-cb-carpet-bombing-script/?p=2650449