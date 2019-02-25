// ******************************************************************
// JBOY_Berserker.sqf
// ******************************************************************
// ******************************************************************

// http://killzonekid.com/arma-scripting-tutorials-agents-how-to/
bob = createAgent ["O_crew_F", [player, 60, (random 360)] call BIS_fnc_relPos, [], 0, "NONE"]; //C_man_1
removeAllWeapons bob;
removeUniform bob;
bob disableAI "FSM";
bob setBehaviour "CARELESS";
_axe = "Land_Axe_F"  createVehicle [0,0,0];
_axe attachTo[bob,[-0.01,0.12,0.005],"rightHandMiddle1"];
_axe setDir 90;
_axe setVectorUp[-12,-0.0,1];
bob setVariable ["attack",false,true];
[bob] call JBOY_addBeanbagHandleDamageEH;
bob setCaptive true;
bob setVariable ["attack",true,true]; // put a waituntil attack here
bob setVariable ["hasMeleeWeapon",true,true]; // put a waituntil attack here
bob setCaptive false;
_victim = selectRandom units group player;
_n = [bob, _victim] spawn {
    params["_slasher","_victim"];
    
    _pos = getpos _victim;
    _future = 0;
    _slasherSpeaker=createVehicle["Land_HelipadEmpty_F",getPos _victim,[],0,"NONE"]; // create empty helipad to play the sound...Thanks Phronk!
                // **********************************************************************************
                _n = [_slasher, _slasherSpeaker] spawn
                {
                    params["_slasher", "_slasherSpeaker"];
                    while {alive _slasher and (bob getVariable "hasMeleeWeapon")} do  
                    {
                      _caneFound = false;
                      { 
                            if (getModelInfo _x select 0 in ["b_sugarcane_mature_row_f.p3d"]) then 
                            {
player sidechat format ["damage _x=%1, _x=%2",damage _x,_x];
                                if (damage _x == 0 ) then 
                                {
                                    _slasher playActionNow "ThrowGrenade";
                                    sleep .3;
                                    if (_slasher distance _x < 1.5) then {nul = [_slasher,"none"] execVM "JBOY\leafEffect.sqf";};
                                    _x setdamage 1;
                                    _caneFound = true;
                                    _slasherSpeaker say3D[selectRandom ["slashBrush1","slashBrush2","slashBrush3"],30,1];
                                };
                            };
                      } foreach nearestTerrainObjects [_slasher modelToWorld [0,.5,0], [], 2.5];  
                      sleep 4;
                      if (!_caneFound and (bob getVariable "hasMeleeWeapon")) then
                      {
                            _slasher playActionNow "ThrowGrenade";
                            sleep .3;
                            _slasherSpeaker say3D[selectRandom ["slash1","slash2","slash3","slash4"],15,1];
                      };
                    };
                };
                // **********************************************************************************
    while {alive _slasher and ({alive _x} count units group _victim) > 0 and (bob getVariable "hasMeleeWeapon")} do  
    {
              
        _slasher doWatch _victim;
        while {alive _slasher and (animationState _slasher find "unconscious") == -1 and alive _victim and (bob getVariable "hasMeleeWeapon")} do  
        {
            if (_slasher distance _victim > 1.5) then
            {
                _slasher stop false;
                _pos = (_victim modelToWorld [0,0,0]);
                _slasher moveTo  _pos;
                //_slasher forceSpeed (_slasher getSpeed "FAST");
                //_slasher forceSpeed 15;
                if (_slasher distance _victim > 25) then
                {
                    _slasher forceSpeed (bob getSpeed (selectRandom ["SLOW","NORMAL","SLOW"]));
                } else
                {
                    _slasher forceSpeed (bob getSpeed "NORMAL");
                };
                _future = time + 4;
                waituntil {sleep .5; _slasher distance _pos <=  2 or !alive _slasher or !alive _victim or (animationState _victim find "unconscious") > -1 or time >= _future};
            };
            if (_slasher distance _victim <= 2.1 and alive _slasher and alive _victim and (animationState _slasher find "unconscious") < 0 and (bob getVariable "hasMeleeWeapon")) then
            {
                _slasher stop true;
                //doStop _slasher;
                if ((eyepos _victim select 2) - (getposasl _victim select 2) < .5) then // if target is prone, then slasher crouches and looks down
                {
                    _slasher setUnitPOS "MIDDLE";
                    _slasher dowatch getpos _victim;
                };
                _slasherSpeaker setpos getpos _slasher;
                _slasherSpeaker say3D[selectRandom ["slash1","slash2","slash3","slash4"],15,1];
                _slasher setdir ([_slasher,_victim] call BIS_fnc_dirTo);
                _slasher playActionNow "ThrowGrenade";
                sleep .3;
                
                _slasherSpeaker say3D["slashHit",15,1];
                [_victim] call JBOY_PainGrunt;
                _victim setDamage((damage _victim)+(0.1));
                //nul = [_victim] execVM "JBOY\bloodEffectMan.sqf";
                sleep .7;
            }; 
         };
         _victim = selectRandom (units group _victim);
     };
     deleteVehicle _slasherSpeaker;
     if (!alive _slasher) then {{detach _x} foreach attachedObjects _slasher;};
};

waituntil {sleep 1; bob getVariable "attack" == true};
