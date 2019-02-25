// 
/*
_d = [this,"",[]] execvm "JBOY\JBOY_LongBoat.sqf";
_d = [this,"B_HMG_01_F"] execvm "JBOY\JBOY_LongBoat.sqf";
_d = [this,"B_GMG_01_F"] execvm "JBOY\JBOY_LongBoat.sqf";
*/
// B_HMG_01_F  or B_GMG_01_F, B_T_Static_AT_F, B_T_Static_AA_F
params["_zodiac","_mountedWeaponType","_crew"];
_longboat = createVehicle ["Land_Boat_02_abandoned_F", [0,0,0], [], 0, "NONE"];
_zodiac  lockCargo [0, true]; // Lock these positions because they are outside of fishing boat model
_zodiac  lockCargo [1, true]; 
detach _longboat;
_longboat attachto [_zodiac,[.05,1.6,-.8]]; 
_longboat setdir 180;  
_zodiac setObjectTexture [0,""];

_weapon = objNull;
_attachPos = [];
// Attach an MG in the bow
if (_mountedWeaponType != "") then
{
    if (_mountedWeaponType find "Static" >= 0) then 
    {
        _attachPos = [0.11,3.5,.25];
    } else 
    {
       _attachPos = [0.11,3.9,.5];
    };
    _weapon = createVehicle [_mountedWeaponType, [0,0,0], [], 0, "NONE"];
    _weapon attachto [_zodiac, _attachPos]; 
    _box = createVehicle ["Box_Syndicate_Ammo_F", [0,0,0], [], 0, "NONE"];
    //_box enableCollisionWith _zodiac;
    _box enableCollisionWith _longboat;
    _box attachto [_zodiac,[0,3.7,-.95]]; 
    
    //_shade1 = createVehicle ["Land_Sunshade_F", [0,0,0], [], 0, "NONE"];
    //_shade1 attachto [_zodiac,[.3,-2,0]]; 
};
//

sleep 4;

if (count _crew > 0) then
{
//hint format ["GUNNER=%1",_crew select 3];

    _crew select 0 assignAsDriver _zodiac;          _crew select 0 moveInDriver _zodiac;
    _crew select 1 assignAsCargoIndex [_zodiac, 2]; _crew select 1 moveInCargo [_zodiac, 2];
    _crew select 2 assignAsCargoIndex [_zodiac, 3]; _crew select 2 moveInCargo [_zodiac, 3];
 

    if (_mountedWeaponType != "" ) then
    {
        //hint format ["gunner=%1, _weapon=%2",(_crew select 3),typeOf _weapon];
        (_crew select 3) assignAsGunner vehicle _weapon; 
        _crew select 3 moveInGunner vehicle _weapon;
    };

};