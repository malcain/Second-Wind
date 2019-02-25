//////////////////////////////////////////////////////////
// addBirdDamageEHContest.sqf 
// Created by: johnnyboy
//
// Give object a boost when sticks in shallow water
//
// nul = [bird, false] execVM "JBOY_Dog\addBirdDamageEHContest.sqf";
//////////////////////////////////////////////////////////
if (!isServer)  exitwith {};
params["_bird",["_keepBirdScore",false]];

if (_keepBirdScore) then 
{_bird setVariable ["vKeepScore", true, true]; }
else
{_bird setVariable ["vKeepScore", false, true];};
if (_bird isKindOf "Fowl_Base_F") then                       
{
        _bird removeAllEventHandlers "HandleDamage";
        _bird addEventHandler ["HandleDamage", 
        { 
            private ["_return","_score"];
            _bird = _this select 0; 
            _selection = _this select 1; 
            _passedDamage = _this select 2; 
            _source	= _this select 3; 
            _projectile = _this select 4; 
            //systemchat format ["damage %1, %2, %3",_this, _source, typeOf _source];
            if (((_projectile != '') and !(isnull _source )) ) then  
            {
                // Remote exect to run all clients
                [[_bird],"JBOY\featherEffect.sqf"] remoteExec ["execVM",2];
                if (!alive _bird) then {
                    detach _bird;
                    // if shooter has a dog, set current target to the dead bird, so if handler issues Fetch command, dog will go for it
                    _dog = _source getVariable "vDog";
                    if !(isNil "vDog") then
                    {
                        if (!(_dog == objNull)) then
                        {
                            _dog setVariable ["vTarget",_bird,true];
                        };
                    };
                };
            };
            _return = _passedDamage;
           _return
        }];
        _bird removeAllEventHandlers "Killed";
        if (_keepBirdScore) then
        {
            _bird addEventHandler ["Killed", 
            { 
                private ["_return","_score"];
                
                _bird = _this select 0; 
                _source	= _this select 1; 
                _instigator = _this select 2; 
                [[_bird],"JBOY\featherEffect.sqf"] remoteExec ["execVM",2];
                //player groupchat format ["killed eh %1, %2, %3, %4, %5",_this, _bird, _source, typeOf _source, _instigator];
                if (!(isnull _source ) and !BirdContestCompleted) then  
                {
                    
                    if ( _source isKindOf "Man") then
                    {
                        _score = _source getVariable "vBirdScore";
                        if (getposatl _bird select 2 > .01) then 
                        {
                            if (_source in [cojon,valdez]) then
                            {
								_source setVariable ["vBirdScore", (_score + 1), true];
                                hint format ["Bob Valdez Jr.: %1 bird(s) --- El Cojon: %2 bird(s)",valdez getVariable "vBirdScore", cojon  getVariable "vBirdScore"];
                            };
                            if (_source == valdez) then
                            {
                                //_sound = ["Bueno!","Buen Disparo!", "Muy bueno mi hiho."];hParaGoodDayBob
                                _sound = selectRandom ["Bueno","BuenDisparo", "VeryGoodMiHijo"];

                                //cojon say3d _sound; 
                                //sleep .5;
								_dmy= [cojon, .5, _sound,"Good shot son!"] execVM "JBOY\delaySay.sqf";
                                [cojon, 2] call JBOY_Lip;
                                //cojon customRadio [JBOY_Channel,_sound]; // 2.2
                                //cojon sidechat selectRandom ["Bueno!","Buen Disparo!", "Muy bueno mi hiho."];
                            } else 
                            {
								if (_source == cojon) then
								{
									//valdez sidechat selectRandom ["Nice one Pops.","Good shot!","Damn you're good","Not bad for an old man."];
									_sound = selectRandom ["NiceOnePops","GoodShot", "DamnYourGood","NotBadOldMan"];
									_dmy= [valdez, .5, _sound,"Good shot old man."] execVM "JBOY\delaySay.sqf";
									//sleep .5;
									[valdez, 2] call JBOY_Lip;
								};

                            };
                        } else
                        {
							_dmy= [cojon, .5, "cojonThatIsCheating","That is cheating.  They must be flying to count."] execVM "JBOY\delaySay.sqf";
							//sleep .5;
							[cojon, 3.5] call JBOY_Lip;
							//valdez customRadio [JBOY_Channel,"cojonThatIsCheating"];
                        };
                        deleteVehicle attachedTo _bird;
                    };
                };
                //_return = _passedDamage;
               //_return
            }];
        }
};
