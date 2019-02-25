//JBOY_HandlerSpeak.sqf
if (!isServer)  exitwith {};
params["_dog","_handler","_command"];
// Exit without saying a voice command if commands set to silent, or dog has no handler
if ((_dog getVariable "vSilentCommand") or !(_handler isKindOf "CAManBase")) exitwith {};
//if (!alive _handler or !alive _dog) exitwith {};
//if (_handler ==objNull)  exitwith {};
_language = (_dog getVariable "vHandlerLanguageAbbrev");
_dogName = (_dog getVariable "vDogName");
if (_dogName != "") then {_dogname = _dogName + ", ";};
//if (_language=="none") exitwith {};

_fnc_assembleSoundPath = {
    params["_speaker", "_language", "_behaviour,","_soundFileName","_lastSubDir"];
    _s = "";
    switch _language do 
    { 	
        case "ENG":
        {
            _s = "A3\Dubbing_Radio_F\data\ENG\Male01ENG\RadioProtocolENG\"+_behaviour+"\"+_lastSubDir+"\" + _soundFileName + ".ogg";
        };
        case "GRE":
        {
            _s = "A3\Dubbing_Radio_F\data\GRE\Male01GRE\RadioProtocolGRE\"+_behaviour+"\"+_lastSubDir+"\" + _soundFileName + ".ogg";
         };
        case "ENGB":
        {
            _s = "A3\Dubbing_Radio_F\data\ENGB\Male01ENGB\RadioProtocolENG\"+_behaviour+"\"+_lastSubDir+"\" + _soundFileName + ".ogg";
         };
        case "PER":
        {
            _s = "A3\Dubbing_Radio_F\data\PER\Male01PER\RadioProtocolPER\"+_behaviour+"\"+_lastSubDir+"\" + _soundFileName + ".ogg";
         };
        case "FRE":
        {
            _s = "A3\Dubbing_Radio_F_EXP\data\FRE\Male01FRE\RadioProtocolFRE\"+_behaviour+"\"+_lastSubDir+"\" + _soundFileName + ".ogg";
         };
        case "ENGFRE":
        {
            _s = "A3\Dubbing_Radio_F_EXP\data\ENGFRE\Male01ENGFRE\RadioProtocolENG\"+_behaviour+"\"+_lastSubDir+"\" + _soundFileName + ".ogg";
         };
        case "CHI":
        {
            _s = "A3\Dubbing_Radio_F_EXP\data\CHI\Male01CHI\RadioProtocolCHI\"+_behaviour+"\"+_lastSubDir+"\" + _soundFileName + ".ogg";
         };
        case "PERVR":
        {
            _s = "A3\Dubbing_Radio_F\data\VR\Male01PERVR\RadioProtocolPER\"+_behaviour+"\"+_lastSubDir+"\" + _soundFileName + ".ogg";
         };
        case "GREVR":
        {
            _s = "A3\Dubbing_Radio_F\data\VR\Male01GREVR\RadioProtocolGRE\"+_behaviour+"\"+_lastSubDir+"\" + _soundFileName + ".ogg";
         };
        case "ENGVR":
        {
            _s = "A3\Dubbing_Radio_F\data\VR\Male01ENGVR\RadioProtocolENG\"+_behaviour+"\"+_lastSubDir+"\" + _soundFileName + ".ogg";
         };
    };
    //diag_log _s;
    playSound3D [_s, _speaker];
};

_behaviour = "Normal";
switch (behaviour _handler) do 
{ 	
    case "COMBAT": { _behaviour = "Combat";
                     if (_command == "Guard") then //"WatchThatTarget" only has voice files for normal and stealth, not combat.
                     { _behaviour = "Normal";} ; 
                   };
    case "STEALTH":{ _behaviour = "Stealth";};
    default        { _behaviour = "Normal";};
};
switch _command do 
{ 	
    case "heel":
    {
        if (_language=="boomer") then {
            dummy= [_handler, 0, "boomerHeel","Boomer, "+localize "STR_JBOY_DOG_Heel"] execVM "JBOY_Dog\delaySay.sqf";
        } else {
            [_handler, _language, _behaviour, "FormOnMe","100_Commands"] call _fnc_assembleSoundPath;  // 3rd parameter is internal sound file name
             _handler sidechat _dogName +  localize "STR_JBOY_DOG_Heel";
        };
    };
    case "sit":
    {
        if (_language=="boomer") then {
            dummy= [_handler, 0, "boomerSit","Boomer, "+localize "STR_JBOY_DOG_Sit"] execVM "JBOY_Dog\delaySay.sqf";
        } else {
            [_handler, _language, _behaviour, "StayLow","100_Commands"] call _fnc_assembleSoundPath;  // 3rd parameter is internal sound file name
            _handler sidechat _dogName +  localize "STR_JBOY_DOG_Sit";
        };        
    };
    case "stay":
    {
        if (_language=="boomer") then {
            dummy= [_handler, 0, "boomerStay","Boomer, "+localize "STR_JBOY_DOG_Stay"] execVM "JBOY_Dog\delaySay.sqf";
        } else {
            [_handler, _language, _behaviour, "Halt","100_Commands"] call _fnc_assembleSoundPath;  // 3rd parameter is internal sound file name
             _handler sidechat _dogName +  localize "STR_JBOY_DOG_Stay";
        };               
    };
     case "stop":
    {
        if (_language=="boomer") then {
            dummy= [_handler, 0, "boomerStay","Boomer, "+localize "STR_JBOY_DOG_Disengage"] execVM "JBOY_Dog\delaySay.sqf";
        } else {
            [_handler, _language, "Combat", "Disengage","100_Commands"] call _fnc_assembleSoundPath;  // 3rd parameter is internal sound file name
            _handler sidechat _dogName +  localize "STR_JBOY_DOG_Disengage";
        };               
    };
    case "moveThere":
    {
        if (_language=="boomer") then {
            dummy= [_handler, 0, "boomerMoveThere","Boomer, Move there."] execVM "JBOY_Dog\delaySay.sqf";
        } else {
            [_handler, _language, _behaviour, "moveUp_1","070_MoveDirectionRelative1"] call _fnc_assembleSoundPath;  // 3rd parameter is internal sound file name
             _handler sidechat _dogName +  localize "STR_JBOY_DOG_MoveThere";
        };               
    };
    case "attack":
    {
        if (_language=="boomer") then {
            dummy= [_handler, 0, "boomerAttack","Boomer, "+localize "STR_JBOY_DOG_Attack"+"!"] execVM "JBOY_Dog\delaySay.sqf";
        } else {
            [_handler, _language, "Combat", "Attack_1","015_Targeting"] call _fnc_assembleSoundPath;  // 3rd parameter is internal sound file name
            _handler sidechat _dogName +  localize "STR_JBOY_DOG_Attack"+"!";
        };               
    };
    case "fetch":
    {
       switch _language do 
      
      { 	
            case "boomer":
            {
                 dummy= [_handler, 0, "boomerFetch","Boomer, "+localize "STR_JBOY_DOG_Fetch"] execVM "JBOY_Dog\delaySay.sqf";
            };
            case "ENG":    { dummy= [_handler, 0, ("Eng"+"Fetch"),"Fetch!"] execVM "JBOY_Dog\delaySay.sqf"; };
            case "GRE":    { dummy= [_handler, 0, ("Eng"+"Fetch"),"Fetch!"] execVM "JBOY_Dog\delaySay.sqf"; };
            case "ENGB":   { dummy= [_handler, 0, ("Eng"+"Fetch"),"Fetch!"] execVM "JBOY_Dog\delaySay.sqf"; };
            case "PER":    { dummy= [_handler, 0, ("Per"+"Fetch"),"Fetch!"] execVM "JBOY_Dog\delaySay.sqf"; };
            case "FRE":    { dummy= [_handler, 0, ("Fre"+"Fetch"),"Fetch!"] execVM "JBOY_Dog\delaySay.sqf"; };
            case "ENGFRE": { dummy= [_handler, 0, ("Eng"+"Fetch"),"Fetch!"] execVM "JBOY_Dog\delaySay.sqf"; };
            case "CHI":    { dummy= [_handler, 0, ("Chi"+"Fetch"),"Fetch!"] execVM "JBOY_Dog\delaySay.sqf"; };
            case "PERVR":  { dummy= [_handler, 0, ("Per"+"Fetch"),"Fetch!"] execVM "JBOY_Dog\delaySay.sqf"; };
            case "GREVR":  { dummy= [_handler, 0, ("Eng"+"Fetch"),"Fetch!"] execVM "JBOY_Dog\delaySay.sqf"; };
            case "ENGVR":  { dummy= [_handler, 0, ("Eng"+"Fetch"),"Fetch!"] execVM "JBOY_Dog\delaySay.sqf"; };
        };
            if (_language != "boomer") then {_handler sidechat _dogName +  localize "STR_JBOY_DOG_Fetch"};
    };
    case "detain":
    {
        switch _language do 
        { 	
            case "boomer":
            {
                 _phrases = [ "boomerDetain", "boomerGuardThisPrick", "boomerGuardThisJoker"] call BIS_fnc_arrayShuffle;
                dummy= [_handler, 0, (_phrases select 0),"Boomer, "+localize "STR_JBOY_DOG_Detain"] execVM "JBOY_Dog\delaySay.sqf";
            };
            case "ENG":    { dummy= [_handler, 0, ("Eng"+"Detain"),"Detain!"] execVM "JBOY_Dog\delaySay.sqf"; };
            case "GRE":    { dummy= [_handler, 0, ("Eng"+"Detain"),"Detain!"] execVM "JBOY_Dog\delaySay.sqf"; };
            case "ENGB":   { dummy= [_handler, 0, ("Eng"+"Detain"),"Detain!"] execVM "JBOY_Dog\delaySay.sqf"; };
            case "PER":    { dummy= [_handler, 0, ("Per"+"Detain"),"Detain!"] execVM "JBOY_Dog\delaySay.sqf"; };
            case "FRE":    { dummy= [_handler, 0, ("Fre"+"Detain"),"Detain!"] execVM "JBOY_Dog\delaySay.sqf"; };
            case "ENGFRE": { dummy= [_handler, 0, ("Eng"+"Detain"),"Detain!"] execVM "JBOY_Dog\delaySay.sqf"; };
            case "CHI":    { dummy= [_handler, 0, ("Chi"+"Detain"),"Detain!"] execVM "JBOY_Dog\delaySay.sqf"; };
            case "PERVR":  { dummy= [_handler, 0, ("Per"+"Detain"),"Detain!"] execVM "JBOY_Dog\delaySay.sqf"; };
            case "GREVR":  { dummy= [_handler, 0, ("Eng"+"Detain"),"Detain!"] execVM "JBOY_Dog\delaySay.sqf"; };
            case "ENGVR":  { dummy= [_handler, 0, ("Eng"+"Detain"),"Detain!"] execVM "JBOY_Dog\delaySay.sqf"; };
        };
             _handler sidechat _dogName +  localize "STR_JBOY_DOG_Detain";
   };
    case "track":
    {
        switch _language do 
        { 	
            case "boomer":
            {
                 dummy= [_handler, 0, "boomerTrack","Boomer, "+localize "STR_JBOY_DOG_TrackTheScent"] execVM "JBOY_Dog\delaySay.sqf";
            };
            case "ENG":    { dummy= [_handler, 0, ("Eng"+"Track"),localize "STR_JBOY_DOG_TrackTheScent"] execVM "JBOY_Dog\delaySay.sqf"; };
            case "GRE":    { dummy= [_handler, 0, ("Eng"+"Track"),localize "STR_JBOY_DOG_TrackTheScent"] execVM "JBOY_Dog\delaySay.sqf"; };
            case "ENGB":   { dummy= [_handler, 0, ("Eng"+"Track"),localize "STR_JBOY_DOG_TrackTheScent"] execVM "JBOY_Dog\delaySay.sqf"; };
            case "PER":    { dummy= [_handler, 0, ("Per"+"Track"),localize "STR_JBOY_DOG_TrackTheScent"] execVM "JBOY_Dog\delaySay.sqf"; };
            case "FRE":    { dummy= [_handler, 0, ("Fre"+"Track"),localize "STR_JBOY_DOG_TrackTheScent"] execVM "JBOY_Dog\delaySay.sqf"; };
            case "ENGFRE": { dummy= [_handler, 0, ("Eng"+"Track"),localize "STR_JBOY_DOG_TrackTheScent"] execVM "JBOY_Dog\delaySay.sqf"; };
            case "CHI":    { dummy= [_handler, 0, ("Chi"+"Track"),localize "STR_JBOY_DOG_TrackTheScent"] execVM "JBOY_Dog\delaySay.sqf"; };
            case "PERVR":  { dummy= [_handler, 0, ("Per"+"Track"),localize "STR_JBOY_DOG_TrackTheScent"] execVM "JBOY_Dog\delaySay.sqf"; };
            case "GREVR":  { dummy= [_handler, 0, ("Eng"+"Track"),localize "STR_JBOY_DOG_TrackTheScent"] execVM "JBOY_Dog\delaySay.sqf"; };
            case "ENGVR":  { dummy= [_handler, 0, ("Eng"+"Track"),localize "STR_JBOY_DOG_TrackTheScent"] execVM "JBOY_Dog\delaySay.sqf"; };
        };
            _handler sidechat _dogName +  localize "STR_JBOY_DOG_TrackTheScent";
    };
     case "dropit":
    {
        switch _language do 
        { 	
            case "boomer":
            {
                 dummy= [_handler, 0, "boomerDropIt","Boomer, "+localize "STR_JBOY_DOG_DropIt"] execVM "JBOY_Dog\delaySay.sqf";
            };
            case "ENG":    { dummy= [_handler, 0, ("Eng"+"DropIt"),localize "STR_JBOY_DOG_DropIt"] execVM "JBOY_Dog\delaySay.sqf"; };
            case "GRE":    { dummy= [_handler, 0, ("Eng"+"DropIt"),localize "STR_JBOY_DOG_DropIt"] execVM "JBOY_Dog\delaySay.sqf"; };
            case "ENGB":   { dummy= [_handler, 0, ("Eng"+"DropIt"),localize "STR_JBOY_DOG_DropIt"] execVM "JBOY_Dog\delaySay.sqf"; };
            case "PER":    { dummy= [_handler, 0, ("Per"+"DropIt"),localize "STR_JBOY_DOG_DropIt"] execVM "JBOY_Dog\delaySay.sqf"; };
            case "FRE":    { dummy= [_handler, 0, ("Fre"+"DropIt"),localize "STR_JBOY_DOG_DropIt"] execVM "JBOY_Dog\delaySay.sqf"; };
            case "ENGFRE": { dummy= [_handler, 0, ("Eng"+"DropIt"),localize "STR_JBOY_DOG_DropIt"] execVM "JBOY_Dog\delaySay.sqf"; };
            case "CHI":    { dummy= [_handler, 0, ("Chi"+"DropIt"),localize "STR_JBOY_DOG_DropIt"] execVM "JBOY_Dog\delaySay.sqf"; };
            case "PERVR":  { dummy= [_handler, 0, ("Per"+"DropIt"),localize "STR_JBOY_DOG_DropIt"] execVM "JBOY_Dog\delaySay.sqf"; };
            case "GREVR":  { dummy= [_handler, 0, ("Eng"+"DropIt"),localize "STR_JBOY_DOG_DropIt"] execVM "JBOY_Dog\delaySay.sqf"; };
            case "ENGVR":  { dummy= [_handler, 0, ("Eng"+"DropIt"),localize "STR_JBOY_DOG_DropIt"] execVM "JBOY_Dog\delaySay.sqf"; };
        };
            _handler sidechat _dogName +  localize "STR_JBOY_DOG_DropIt";
    };
    case "atEase":
    {
        if (_language=="boomer") then {
            dummy= [_handler, 0, "boomerAtEase","Boomer, "+localize "STR_JBOY_DOG_AtEase"] execVM "JBOY_Dog\delaySay.sqf";
        } else {
            [_handler, _language, _behaviour,( ["Safe_2", "Relax"] call BIS_fnc_selectRandom),"100_Commands"] call _fnc_assembleSoundPath;  // 3rd parameter is internal sound file name
            _handler sidechat _dogName +  localize "STR_JBOY_DOG_AtEase";
       };               
    };
    case "scout": // SCOUT NOT IMPLMEMENTED YET
    {
        if (_language=="boomer") then {
            dummy= [_handler, 0, "boomerScout","Boomer, Scout."] execVM "JBOY_Dog\delaySay.sqf";
        } else {
            [_handler, _language, _behaviour,"Dismount_1","100_Commands"] call _fnc_assembleSoundPath;  // 3rd parameter is internal sound file name
            _handler sidechat "Scout.";
        };               
    };
    // TODO: Need to add boomer voice files for these ones!
    case "getin":
    {
        if (_language=="boomer") then {
            dummy= [_handler, 0, "boomerGetin","Boomer, "+localize "STR_JBOY_DOG_GetIn"] execVM "JBOY_Dog\delaySay.sqf";
        } else {
            [_handler, _language, "Normal","BoardThatVehicle","100_Commands"] call _fnc_assembleSoundPath;  // 3rd parameter is internal sound file name
            _handler sidechat _dogName +  localize "STR_JBOY_DOG_GetIn";
        };               
    };
    case "getout":
    {
        if (_language=="boomer") then {
            dummy= [_handler, 0, "boomerGetout","Boomer, "+localize "STR_JBOY_DOG_GetOut"] execVM "JBOY_Dog\delaySay.sqf";
        } else {
            [_handler, _language, "Normal", "Dismount_1","100_Commands"] call _fnc_assembleSoundPath;  // 3rd parameter is internal sound file name
            _handler sidechat _dogName +  localize "STR_JBOY_DOG_GetOut";
        };               
    };
    case "speak":
    {
        if (_language=="boomer") then {
            dummy= [_handler, 0, "BoomerSitrep","Boomer, "+localize "STR_JBOY_DOG_Sitrep"] execVM "JBOY_Dog\delaySay.sqf";
        } else {
            [_handler, _language, _behaviour, "Sitrep","120_Com_Ask"] call _fnc_assembleSoundPath;  // 3rd parameter is internal sound file name
            _handler sidechat (localize "STR_JBOY_DOG_Sitrep");
        };               
    };
 };
 
/*
        { 	case (_speaker find 'ENGFRE' > 0):{_language = 'ENGFRE'};
            case (_speaker find 'ENGB' > 0):  {_language = 'ENGB'};
            case (_speaker find 'ENGVR' > 0): {_language = 'ENGVR'};
            case (_speaker find 'ENG' > 0):   {_language = 'ENG'};
            case (_speaker find 'GREVR' > 0): {_language = 'GREVR'};
            case (_speaker find 'GRE' > 0):   {_language = 'GRE'};
            case (_speaker find 'PERVR' > 0): {_language = 'PERVR'};
            case (_speaker find 'PER' > 0):   {_language = 'PER'};
            case (_speaker find 'FRE' > 0):   {_language = 'FRE'};
            case (_speaker find 'CHI' > 0):   {_language = 'CHI'};
            case (_speaker find 'ENG' > 0):   {_language = 'ENG'};
            default                           {_language = 'boomer'};

Here's the different variations per Language for saying sound snipper "Attack_1.ogg": 
 
 "A3\Dubbing_Radio_F\data\ENG\Male01ENG\RadioProtocolENG\Normal\015_Targeting\Attack_1.ogg"
 "A3\Dubbing_Radio_F\data\PER\Male01PER\RadioProtocolPER\Normal\015_Targeting\Attack_1.ogg"
 "A3\Dubbing_Radio_F\data\GRE\Male01GRE\RadioProtocolGRE\Normal\015_Targeting\Attack_1.ogg"
 "A3\Dubbing_Radio_F\data\ENGB\Male01ENGB\RadioProtocolENG\Normal\015_Targeting\Attack_1.ogg"   <<-- PROTOCOL IS ENG,NOT ENGB
        
 "A3\Dubbing_Radio_F_EXP\data\FRE\Male01FRE\RadioProtocolFRE\Normal\015_Targeting\Attack_1.ogg" <<-- _EXP is on Dubbing_Radio_F
 "A3\Dubbing_Radio_F_EXP\data\CHI\Male01CHI\RadioProtocolCHI\Normal\015_Targeting\Attack_1.ogg" <<-- _EXP is on Dubbing_Radio_F
 "A3\Dubbing_Radio_F_EXP\data\ENGFRE\Male01ENGFRE\RadioProtocolENG\Normal\015_Targeting\Attack_1.ogg"  <<-- PROTOCOL IS ENG NOT ENGFRE, EXP is on Dubbing_Radio_F

 "A3\Dubbing_Radio_F\data\VR\Male01PERVR\RadioProtocolPER\Normal\015_Targeting\Attack_1.ogg"  <-- fuck the VR dudes, make them normal their own language
 "A3\Dubbing_Radio_F\data\VR\Male01GREVR\RadioProtocolGRE\Normal\015_Targeting\Attack_1.ogg"
 "A3\Dubbing_Radio_F\data\VR\Male01ENGVR\RadioProtocolENG\Normal\015_Targeting\Attack_1.ogg" 

 "A3\Dubbing_Radio_F\data\ENGB\Male01ENGB\RadioProtocolENG\Normal\015_Targeting\Attack_1.ogg.ogg"
        
Heel/Form On Me:  "A3\Dubbing_Radio_F\data\ENG\Male01ENG\RadioProtocolENG\Normal\100_Commands\FormOnMe.ogg"
Sit/Stay Low :  "A3\Dubbing_Radio_F\data\ENG\Male01ENG\RadioProtocolENG\Normal\100_Commands\StayLow.ogg"
Stay/Halt:Halt:    "A3\Dubbing_Radio_F\data\ENG\Male01ENG\RadioProtocolENG\Normal\100_Commands\Halt.ogg"
MoveThere / Move Up: "A3\Dubbing_Radio_F\data\ENG\Male01ENG\RadioProtocolENG\Normal\070_MoveDirectionRelative1\moveUp_2.ogg"
                     "A3\Dubbing_Radio_F_EXP\data\FRE\Male01FRE\RadioProtocolFRE\Normal\070_MoveDirectionRelative1\moveUp_2.ogg"
Attack:   "A3\Dubbing_Radio_F\data\ENG\Male01ENG\RadioProtocolENG\Normal\015_Targeting\Attack_1.ogg"
Guard/WatchThatTarget:  "A3\Dubbing_Radio_F\data\ENG\Male01ENG\RadioProtocolENG\Normal\100_Commands\WatchThatTarget.ogg"
Stop:             "A3\Dubbing_Radio_F\data\ENG\Male01ENG\RadioProtocolENG\Normal\100_Commands\Stop.ogg"
At Ease:          "A3\Dubbing_Radio_F\data\ENG\Male01ENG\RadioProtocolENG\Normal\100_Commands\Safe_2.ogg"
AtEase/Relax:            "A3\Dubbing_Radio_F\data\ENG\Male01ENG\RadioProtocolENG\Normal\100_Commands\Relax.ogg"

Dismount:         "A3\Dubbing_Radio_F\data\ENG\Male01ENG\RadioProtocolENG\Normal\100_Commands\Dismount_1.ogg"
Board Vehicle:    "A3\Dubbing_Radio_F\data\ENG\Male01ENG\RadioProtocolENG\Normal\100_Commands\BoardThatVehicle.ogg"
Engage:    "A3\Dubbing_Radio_F\data\ENG\Male01ENG\RadioProtocolENG\Normal\015_Targeting\Engage_1.ogg"
Disengage:        "A3\Dubbing_Radio_F\data\ENG\Male01ENG\RadioProtocolENG\Normal\100_Commands\Disengage.ogg"

Advance/Scout?:   "A3\Dubbing_Radio_F\data\ENG\Male01ENG\RadioProtocolENG\Normal\100_Commands\Advance.ogg"
Engage:    "A3\Dubbing_Radio_F\data\ENG\Male01ENG\RadioProtocolENG\Normal\015_Targeting\Engage_1.ogg"
"A3\Dubbing_Radio_F\data\ENGB\Male01ENGB\RadioProtocolENG\Normal\015_Targeting\Engage_1.ogg" <<-- PROTOCOL IS ENG,NOT ENGB
"A3\Dubbing_Radio_F\data\PER\Male01PER\RadioProtocolPER\Normal\015_Targeting\Engage_1.ogg"

Cease Fire: "A3\Dubbing_Radio_F\data\ENG\Male01ENG\RadioProtocolENG\Normal\100_Commands\CeaseFire_1.ogg"
Danger: "A3\Dubbing_Radio_F\data\ENG\Male01ENG\RadioProtocolENG\Normal\100_Commands\Danger.ogg"
Silence: "A3\Dubbing_Radio_F\data\ENG\Male01ENG\RadioProtocolENG\Normal\100_Commands\Silence.ogg"
Stealth: "A3\Dubbing_Radio_F\data\ENG\Male01ENG\RadioProtocolENG\Normal\100_Commands\CommStealth.ogg"
Taking Command: "A3\Dubbing_Radio_F\data\ENG\Male01ENG\RadioProtocolENG\Normal\110_Com_Announce\TakingCommand.ogg"

Wait:  "a3\dubbing_f_beta\firing_drills\Timing\firing_drills_timing_ROF_2.ogg"
Stay Put:  "a3\dubbing_f_beta\firing_drills\Timing\firing_drills_timing_ROF_3.ogg"
Go: "a3\dubbing_f_beta\firing_drills\Timing\firing_drills_timing_ROF_4.ogg"

Snake: "A3\Dubbing_Radio_F\data\ENG\Male01ENG\RadioProtocolENG\Normal\020_Names\Snake.ogg"
Loop of radio static:  "A3\Dubbing_Radio_F\Sfx\radionoise1.ogg"
Mic in:  "A3\Dubbing_Radio_F\Sfx\in2a.ogg"
Mic out: "A3\Dubbing_Radio_F\Sfx\out2c.ogg"
wounded:
"A3\Missions_F_EPA\data\sounds\WoundedGuyA_01.wss"
"A3\Missions_F_EPA\data\sounds\WoundedGuyA_02.wss"
"A3\Missions_F_EPA\data\sounds\WoundedGuyA_03.wss"
"A3\Missions_F_EPA\data\sounds\WoundedGuyA_04.wss"
"A3\Missions_F_EPA\data\sounds\WoundedGuyA_05.wss"
"A3\Missions_F_EPA\data\sounds\WoundedGuyA_06.wss"
"A3\Missions_F_EPA\data\sounds\WoundedGuyA_07.wss"
"A3\Missions_F_EPA\data\sounds\WoundedGuyA_08.wss"

"A3\Missions_F_EPA\data\sounds\WoundedGuyB_01.wss"
"A3\Missions_F_EPA\data\sounds\WoundedGuyB_02.wss"
"A3\Missions_F_EPA\data\sounds\WoundedGuyB_03.wss"
"A3\Missions_F_EPA\data\sounds\WoundedGuyB_04.wss"
"A3\Missions_F_EPA\data\sounds\WoundedGuyB_05.wss"
"A3\Missions_F_EPA\data\sounds\WoundedGuyB_06.wss"
"A3\Missions_F_EPA\data\sounds\WoundedGuyB_07.wss"
"A3\Missions_F_EPA\data\sounds\WoundedGuyB_08.wss"

"A3\Missions_F_EPA\data\sounds\WoundedGuyC_01.wss"
"A3\Missions_F_EPA\data\sounds\WoundedGuyC_02.wss"
"A3\Missions_F_EPA\data\sounds\WoundedGuyC_03.wss"
"A3\Missions_F_EPA\data\sounds\WoundedGuyC_04.wss"
"A3\Missions_F_EPA\data\sounds\WoundedGuyC_05.wss"

"A3\Missions_F_EPA\data\sounds\crowd2.wss" 
"A3\Missions_F_EPA\data\sounds\combat_deafness.wss" 

n= [] spawn {
sleep 1;
{playSound3D [_x, player]; hint _x;} 
foreach [
"A3\Missions_F_EPA\data\sounds\falls_into_water.wss"
];  
};
*/