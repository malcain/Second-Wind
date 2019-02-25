//////////////////////////////////////////////////////////
// addBirdDamageEHs.sqf 
// Created by: johnnyboy
//
// Find all near chickens and assign EventHandler
// Put this in animal module init for hens: 
//    nul = [this,20,true] execVM "JBOY_Dog\addBirdDamageEHs.sqf";
//////////////////////////////////////////////////////////
if (!isServer)  exitwith {};
params ["_obj","_radius","_animalBanterOn"];
sleep 3;
_pos = getpos _obj;
_birds = nearestObjects [ _pos,["Fowl_Base_F"],_radius];  
//diag_log ["near birds",_birds, _pos, _radius, _pos distance (getpos player)];
if(count _birds > 0) then
{
   {
        _x setVariable ["vBoostRunning", false, true]; 
        nul = [_x] execVM "JBOY\addBirdDamageEH.sqf";
        nul = [_x, _animalBanterOn] execVM "JBOY\JBOY_animalScatter.sqf";
   } foreach _birds;
};
//hintc format ["near birds %1, %2, %3, %4",_birds, _pos, _radius, _pos distance (getpos player)];
