//////////////////////////////////////////////////////////
// JBOY_isFetchable.sqf 
// Created by: johnnyboy
//
// Determine if object is fetchable by a dog.
//
// _isFetchable = [object] call JBOY_isFetchable.sqf;
//////////////////////////////////////////////////////////
if (!isServer)  exitwith {};
params["_obj"];
_isFetchable = false;

if (typeOF _obj in ["Rabbit_F","Hen_random_F","Cock_random_F","Cock_white_F"]) then
{
    _isFetchable = true;
};
_isFetchable