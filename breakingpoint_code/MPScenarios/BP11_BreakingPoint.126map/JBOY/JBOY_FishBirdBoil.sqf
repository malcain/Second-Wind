/* JBOY_FishBirdBoil.sqf

Call:  nul = [seagullModule, 20] execVM "JBOY\JBOY_FishBirdBoil.sqf";  
*/
params ["_seagullModule","_diameter"];
_n=[_seagullModule,_diameter] spawn
{
    params ["_seagullModule","_diameter"];
    _fishPosObj = "Land_WaterBottle_01_cap_F" createVehicle (getpos _seagullModule);
    _preySpot = getPos _fishPosObj;
    fishPosObj = _fishPosObj;
    while {true} do
    {
        _preySpot = [(_preySpot select 0)-_diameter + random (_diameter*2), (_preySpot select 1)-_diameter + random (_diameter*2), 0];
        _fishPosObj setpos _preySpot;
        dmy = ["Random",_fishPosObj] execvm "JBOY\JBOY_BirdAttack.sqf"; 
        sleep random 10;
    };
};