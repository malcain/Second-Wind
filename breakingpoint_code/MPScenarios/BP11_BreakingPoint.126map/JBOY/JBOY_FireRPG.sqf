// JBOY_FireRPG.sqf
/*
[] spawn 
{ 
    [heistRPGShooter,policeVan] call JBOY_FireRPG; 
};
*/
params["_rpgShooter","_targetUnit"]; 
vanCop setcaptive true;
_invisibleTarget = "B_TargetSoldier" createVehicle [10,10000,0]; 
_invisibleTarget allowdamage false; 
createVehicleCrew _invisibleTarget; 
_invisibleTarget attachTo [_targetUnit,[-3,0,0]]; 

_rpgShooter disableai "TARGET";
_rpgShooter dowatch _invisibleTarget;
dostop _rpgShooter;

_weapon = primaryWeapon _rpgShooter; 
_magType = magazines _rpgShooter select 0; 
_rpgShooter removeMagazines _magType; 
_rpgShooter removeWeapon _weapon; 
_rpgShooter doTarget _invisibleTarget; 
_rpgShooter reveal _invisibleTarget; 
_rpgShooter addWeapon _weapon; 
sleep 1;
    //playSound3D [ "fuckYouPoPo", heistRPGDude];    // Take Cover!
    dummy= [heistRPGDude, 0,"fuckYouPoPo", "Fuck you PoPo!!!"] execVM "JBOY_Dog\delaySay.sqf";

sleep 15; 
_rpgShooter domove getpos _rpgShooter;
_rpgShooter enableai "TARGET";

_rpgShooter addMagazines [_magType,3]; 
_rpgShooter doTarget _targetUnit;
deleteVehicle _invisibleTarget; 
vanCop setcaptive false;