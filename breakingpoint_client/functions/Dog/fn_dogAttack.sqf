/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/

params ["_dog","_target"];

if (isNull _dog) exitWith {};
if (!alive _dog) exitWith {};

//Get FSM Data
//_fsmID = _dog getVariable ["fsm_handle",0];

["_dog","_target"] spawn {
//_dog = createAgent ["BP_Dog_5", getposATL player, [], 5, "CAN_COLLIDE"];
_biteObj = "Land_CanOpener_F" createVehicle [0,0,0];
_biteObj allowdamage false;
detach _dog; 
_dog setDir ([_dog, _target] call BIS_fnc_dirTo);
_dir = direction _dog;
_attackPos = getpos _dog;
_dog disablecollisionWith _biteObj; 
_speed = 6.5;
_dog DisablecollisionWith _target;
_biteObj setpos _attackPos; 
_biteObj setdir _dir;
sleep 0.2;

_dog attachTo [_biteObj, [0,0,0]];

//_dog switchmove "";
//_dog playmoveNow "Dog_Sit";
//sleep 1.2;
_dog playmoveNow "Dog_Idle_Growl";
_dog switchmove "Dog_Idle_Growl";
sleep .3;
_biteObj setVelocity [_speed * sin(_dir), _speed * cos(_dir),4];   
_dog setVelocity [_speed * sin(_dir), _speed * cos(_dir),4];
sleep 0.7;
detach _dog;
sleep 1.6;
//_dog playmovenow "dog_sprint"
};

