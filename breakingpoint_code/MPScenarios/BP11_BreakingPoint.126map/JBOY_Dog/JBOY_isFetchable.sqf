//////////////////////////////////////////////////////////
// JBOY_isFetchable.sqf 
// Created by: johnnyboy
//
// Give object a boost when sticks in shallow water
//
// _isFetchable = [object] call JBOY_isFetchable.sqf;
//////////////////////////////////////////////////////////
if (!isServer)  exitwith {};
params["_obj"];
_isFetchable = false;

if (typeOF _obj in ["Rabbit_F","Snake_random_F","Hen_random_F","Cock_random_F","Cock_white_F"]) then
{
    _isFetchable = true;
};
_isFetchable