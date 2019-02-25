//////////////////////////////////////////////////////////
// JBOY_assignBulletMagnet.sqf
// Created by: johnnyboy
//
// Create a hidden unit same side as handler and attach to dog.
// Enemy AI will then shoot at dog.  Normally, AI never shoots dogs.
//
// Currently, using Invisible targets is working best for this, but still not perfect.
// Invisible targets block bullets from hitting dog is one problem, so I am rotating the position 
// of the target around the dog to increase chance of bullets getting through.  That rotation
// occurs in JBOY_Command script in Attack section.
// nul = [_dog,  _handler, 3] execVM "JBOY_Dog\JBOY_assignBulletMagnet.sqf";
//
// TODO:  
// 1. The side of target should be enemy of who dog is attacking for feral dogs (no handler).
// 2. Should call this from JBOY_AIFightsDogs instead of JBOY_dogCommand (for setting side).
// 3. Delete target when fight over, and create new ones for next fight.
//////////////////////////////////////////////////////////
if (!isServer)  exitwith {};
params["_critter","_handler","_delay"]; 
_side = independent;
if (!isNull _handler) then
{
    _side = side _handler;   
};
_bulletMagnetUnitType = "";
_critter setVariable ["vBulletMagnetSide", _side, true]; // Human AI attached to dog just below ground, so enemy AI will detect and shoot at dog


switch (_side) do 
{ 	case east:{        _bulletMagnetUnitType = "O_Survivor_F";}; 
    case west:{        _bulletMagnetUnitType = "B_Survivor_F";}; 
    case independent:{ _bulletMagnetUnitType = "I_Survivor_F";}; 
    case civilian:{    _bulletMagnetUnitType = "C_man_p_beggar_F";}; 
 };
_bulletMagnet = createAgent [_bulletMagnetUnitType, [0,0,0], [], 0, "CAN_COLLIDE"];

/*
 switch (_side) do 
{ 	case east:{        _bulletMagnetUnitType = "O_UAV_01_F";}; 
    case west:{        _bulletMagnetUnitType = "B_UAV_01_F";}; 
    case independent:{ _bulletMagnetUnitType = "I_UAV_01_F";}; 
    case civilian:{    _bulletMagnetUnitType = "I_UAV_01_F";}; 
 }; 
 _bulletMagnet = createVehicle [_bulletMagnetUnitType,  [0,0,1000], [], 0, "CAN_COLLIDE"];
*/
/*
 switch (_side) do 
{ 	case east:{        _bulletMagnetUnitType = "O_TargetSoldier";}; 
    case west:{        _bulletMagnetUnitType = "B_TargetSoldier";}; 
    case independent:{ _bulletMagnetUnitType = "I_TargetSoldier";}; 
    case civilian:{    _bulletMagnetUnitType = "I_TargetSoldier";}; 
 };
_bulletMagnet = createVehicle [_bulletMagnetUnitType,  [0,0,1000], [], 0, "CAN_COLLIDE"];
*/
_bulletMagnet setdamage 0;
_bulletMagnet addEventHandler ["HandleDamage", {0}];
_bulletMagnet allowdamage false; 
_bulletMagnet setBehaviour "CARELESS";
_bulletMagnet setUnitPos "UP";
//hideObjectGlobal _bulletMagnet;

 sleep 2+_delay; // may want to delay to give time for dog to approach before ai opens up
_bulletMagnet allowdamage false;
_critter enablecollisionwith _handler;
_bulletMagnet enablecollisionwith _critter; 
_bulletMagnet enablecollisionwith _handler; 

_critter setVariable ["vBulletMagnet", _bulletMagnet, true];
_y=0;
// hide the unit unit.  Unfortunately we can still see the head, so have to attach the target underground
//{_bulletMagnet setObjectTextureGlobal [_y,""]; _y=_y+1} count getObjectTextures _bulletMagnet;  
//{_bulletMagnet hideSelection [_x, true]} forEach selectionNames _bulletMagnet;
_bulletMagnet setdamage 0;
//_bulletMagnet enablesimulation false;
sleep .5;
_bulletMagnet enablesimulation true;
_bulletMagnet allowdamage false; 
_bulletMagnet setdamage 0;

