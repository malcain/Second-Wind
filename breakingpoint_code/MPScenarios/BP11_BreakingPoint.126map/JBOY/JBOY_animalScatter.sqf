//////////////////////////////////////////////////////////
// JBOY_animalScatter.sqf 
// Created by: johnnyboy
//
// nul = [critter, true] execVM "JBOY_Dog\JBOY_animalScatter.sqf";
//////////////////////////////////////////////////////////
if (!isServer)  exitwith {};
params["_critter","_animalBanterOn"];
_dogs = [];
_men = [];
_startleDistance = 8 + random 8;

// **************************************************************
// spawn loop to play occasional animal noises.
// **************************************************************
if (_animalBanterOn and ((typeOf _critter) in ["Hen_random_F","Cock_random_F","Cock_white_F"])) then
{
    _nul= [_critter] spawn
    {
        params["_critter"];
        _sounds = [];
        _sleepTime = 0;
        switch (typeOf _critter) do 
        { 	case "Hen_random_F": { _sleepTime=20;  _sounds = ["cluck1","cluck2","cluck3","cluck4","cluck5","cluck6"];}; 
            case "Cock_random_F":{ _sleepTime=40;  _sounds = ["crow1","crow2","crow3","crow4","crow5"];}; 
            case "Cock_white_F": { _sleepTime=40;  _sounds = ["crow1","crow2","crow3","crow4","crow5"];}; 
        }; 
        sleep (random 30); // initial sleep to stagger their loops better.
        while {alive _critter} do
        {
            //if (attachedTo _critter == objNull) then // if not flying
            if (getpos _critter select 2 < .5) then // if not flying
            {
                _sfx = selectRandom _sounds;
                dummy= [_critter, 0, _sfx,""] execVM "JBOY\delaySay.sqf"; 
            };
            sleep (_sleepTime + floor(random 5));
        };
    };
};
// **************************************************************
// when man or dog near critter, critter will scatter
// **************************************************************
while {alive _critter} do
{
    sleep 1;
    if (isnull (attachedTo _critter)) then  // if boost not already running on this critter
    {
        _men = nearestObjects [ getpos _critter,["CAManBase"],_startleDistance]; 
        if (count _men == 0) then
        {
            _dogs = nearestObjects [ getpos _critter,["Dog_Base_F"],_startleDistance]; 
        }; 
        if (count _dogs > 0 or count _men > 0) then
        {
    //hint format ["Scatter, type of %1",typeOf _critter];
            _threat = (_men + _dogs) select 0;
            switch (typeOf _critter) do 
            { 	case "Rabbit_F":{       _critter playmove "Rabbit_Hop";}; // Run Rabbit Run!
                case "Hen_random_F":{   _critter playmove "Hen_Walk";}; // Only a walk animation for hen.
                case "Cock_random_F":{  _critter playmove "Cock_Run";}; // Run cock Run!
                case "Cock_white_F":{   _critter playmove "Cock_Run";}; // Run cock Run!
             };
            
            // alter critter path away from threat if facing its general direction
            _angleDiff = abs(getdir _critter - ([_critter, _threat] call BIS_fnc_dirTo));
            _dir = getdir _critter;
            if (_angleDiff <=35  ) then
            {
                _dir = _dir + (35 -_angleDiff) + random 50;
                _critter setDir _dir;
            };
            _critter moveTo ([_critter, 30, _dir] call BIS_fnc_relPos);
            if (isnull (attachedTo _critter)) then // if boost not already running on this critter
            {
                nul = [_critter, _threat] spawn
                {
                    params["_critter","_threat"];
                    nul =  [_critter, 1.65, 10, _threat] call JBOY_turboChicken;  // chicken will fly
                };
            };
        };
    };
};