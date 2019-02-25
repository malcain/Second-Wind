// JBOY_berserkerMeleeCane.sqf
// _dmy = [jojo, repairDude] execVM "JBOY\JBOY_berserkerMeleeCane.sqf";
 params["_slasher","_victim"];
_n = [_slasher, _victim] spawn {
    params["_slasher","_victim"];
    _slasher setvariable ["victim",_victim,true];
    _pos = getpos _victim;
    _future = 0;
    _slasherSpeaker=createVehicle["Land_HelipadEmpty_F",getPos _victim,[],0,"NONE"]; // create empty helipad to play the sound...Thanks Phronk!
    while {alive _slasher and (animationState _slasher find "unconscious") == -1 //and alive _victim
	} do  
    {
		if (!alive _victim) then 
		{
			_victim = _slasher findNearestEnemy _slasher;
		};
    /*
        if (_slasher distance _victim > 8) then
        {
            _slasher setdir ([_slasher, _victim] call BIS_fnc_dirTo);
            _slasher playaction "dooraction";  // This moves him 8 feet but must wait until completed else dude walks in place.  shit.
        } else
        {
        */
            if (_slasher distance _victim > 5.5) then
            {
                _slasher stop false;
                _pos = (_victim modelToWorld [0,1,0]);
                _slasher doMove  _pos;
                //_slasher setSpeedMode "FULL";
                //_slasher forceSpeed (_slasher getSpeed "FAST");
                _future = time + 20;
//systemchat "wait after doMove";
               waituntil {sleep .5; _slasher distance _pos <  5.5 or !alive _slasher or !alive _victim or (animationState _victim find "unconscious") > -1 or time >= _future};
            } else 
            {
 //player sidechat "else";
                if (_slasher distance _victim > 1.9) then
                {
                    _slasher setdir ([_slasher, _victim] call BIS_fnc_dirTo);
                    _slasher playActionNow "PlayerSlowF";
//systemchat "_slasher playActionNow PlayerSlowF";
                };
            };
       // };
        if (_slasher distance _victim <= 2 and alive _slasher and alive _victim and (animationState _slasher find "unconscious") < 0) then
        {
//player sidechat "distance < 2";
             _slasher stop true;
            _slasher setUnitPos  "UP";
            if (unitPos _victim != "UP") then
            {
                _slasher setUnitPos  "UP";
            };
            if ((eyepos _victim select 2) - (getposasl _victim select 2) < .5) then // if target is prone, then slasher crouches and looks down
            {
                _slasher setUnitPOS "MIDDLE";
                _slasher dowatch getpos _victim;
            };
            _slasherSpeaker setpos getpos _slasher;
            _slasherSpeaker say3D[selectRandom ["slash1","slash2","slash3","slash4"],15,1];
            _slasher setdir ([_slasher,_victim] call BIS_fnc_dirTo);
            _slasher playActionNow "ThrowGrenade";
			
			// If cane nearby, cut it down
            { 
                if (getModelInfo _x select 0 in ["b_sugarcane_mature_row_f.p3d"]) then 
                {
                    if (damage _x < 1) then {nul = [_slasher,"none"] execVM "JBOY\leafEffect.sqf";};
                    //nul = [_unit,_projectile] execVM "JBOY\leafEffect.sqf";
                    _x setdamage 1;
                }
            } foreach nearestTerrainObjects [_slasher modelToWorld [0,1.5,0], [], 2.5];  
            //if (unitPos _slasher == "UP") then {_slasher switchMove "AwopPercMstpSgthWrflDnon_End1"; } else {_slasher switchMove "AwopPknlMstpSgthWrflDnon_throw"};
            sleep .2;
            
            _slasherSpeaker say3D["slashHit",15,1];
            [_victim] call JBOY_PainGrunt;
            _victim setDamage((damage _victim)+(0.1));
                               //_bullet = "B_556x45_dual" createVehicle [10,10,1000];
                                _bullet = "B_9x21_Ball" createVehicle [10,10,1000];
                                _bullet disableCollisionWith _slasher;
                                _bullet setMass 10;
                                _bullet setVelocity [0,0,0];
                                _dir =  [_slasher, _victim] call BIS_fnc_dirTo;
                                _bullet setdir _dir;
                                //_bullet setVelocity (velocity _biteobj); 
                                _pos = getposatl _victim;
                                _pos = [_pos select 0, _pos select 1, .6];
                                _bullet setVelocity [0, 0, 10]; 
                                //_bullet setpos (_dog modelToWorld [0,.5,1.3]);
                                _bullet setposatl _pos;
            if (damage _victim > .6 and !hospitalActComplete and _victim in [booger2, doc]) then // Don't let booger or doc die in opening sequence
            {
                _victim setdamage .5;
            };




            sleep .3;
        } else
        {
            if (_slasher distance _victim <= 20) then
            {
                _slasherSpeaker setpos getpos _slasher;
                _slasherSpeaker say3D[selectRandom ["slash1","slash2","slash3","slash4"],15,1];
                _slasher setdir ([_slasher,_victim] call BIS_fnc_dirTo);
                _slasher playActionNow "ThrowGrenade";
			// If cane nearby, cut it down
            { 
                if (getModelInfo _x select 0 in ["b_sugarcane_mature_row_f.p3d"]) then 
                {
                    if (damage _x < 1) then {nul = [_slasher,"none"] execVM "JBOY\leafEffect.sqf";};
                    //nul = [_unit,_projectile] execVM "JBOY\leafEffect.sqf";
                    _x setdamage 1;
                }
            } foreach nearestTerrainObjects [_slasher modelToWorld [0,1.5,0], [], 2.5];  
                //if (unitPos _slasher == "UP") then {_slasher switchMove "AwopPercMstpSgthWrflDnon_End1"} else {_slasher switchMove "AwopPknlMstpSgthWrflDnon_End"};
                sleep .3;            
            };
        }; 
        _victim = _slasher getvariable "victim";
     };
     deleteVehicle _slasherSpeaker;
};
