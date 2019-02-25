// JBOY_Dog_getDogSide.sqf
// **********************************************
// Determine dog's side.  Used by JBOY_DogEnemyDetectionLoop to determine if near units are enemy or not.
// **********************************************
if (!isServer)  exitwith {};
params["_dog"];

_handler = _dog getVariable "vHandler";
_dogSide = civilian;
_pack = objNull;
if (isNull _handler) then 
{
    _pack = _dog getVariable "vPack";
    if (isNull _pack) then 
    {
        _dogSide = civilian;
    } else
    {
        _dogSide = sideEnemy;
    };
} else 
{
    _dogSide = side _handler;
};
//hint format ["_dogSide=%1",_dogSide];
_dogSide
