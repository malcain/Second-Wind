//JBOY_getSpeakerLanguage
_handler = _this select 0;
_useCustomBoomerVoiceCommands = _this select 1;
 
_language = "none";
_speaker = speaker _handler;
//player sidechat format ["JBOY_getSpeakerLanguage _useCustomBoomerVoiceCommands=%1, speaker=%2",_useCustomBoomerVoiceCommands, _speaker];
if (_useCustomBoomerVoiceCommands ) then
{
   _language = 'boomer';
} else {
    switch true do 
    { 	case (toUpper(_speaker) find 'ENGFRE' > 0):{_language = 'ENGFRE'; [player, "Male02FRE"]  remoteExecCall ["setSpeaker", 0];};
        case (toUpper(_speaker) find 'ENGB' > 0):  {_language = 'ENGB';   [player, "Male02ENGB"] remoteExecCall ["setSpeaker", 0];};
        case (toUpper(_speaker) find 'ENGVR' > 0): {_language = 'ENGVR';  [player, "Male02ENG"]  remoteExecCall ["setSpeaker", 0];};
        case (toUpper(_speaker) find 'ENG' > 0):   {_language = 'ENG';    [player, "Male02ENG"]  remoteExecCall ["setSpeaker", 0];};
        case (toUpper(_speaker) find 'GREVR' > 0): {_language = 'GREVR';  [player, "Male02GRE"]  remoteExecCall ["setSpeaker", 0]; };
        case (toUpper(_speaker) find 'GRE' > 0):   {_language = 'GRE';    [player, "Male02GRE"]  remoteExecCall ["setSpeaker", 0];};
        case (toUpper(_speaker) find 'PERVR' > 0): {_language = 'PERVR';  [player, "Male02PER"]  remoteExecCall ["setSpeaker", 0];};
        case (toUpper(_speaker) find 'PER' > 0):   {_language = 'PER';    [player, "Male02PER"]  remoteExecCall ["setSpeaker", 0];};
        case (toUpper(_speaker) find 'FRE' > 0):   {_language = 'FRE';    [player, "Male02FRE"]  remoteExecCall ["setSpeaker", 0]; };
        case (toUpper(_speaker) find 'CHI' > 0):   {_language = 'CHI';   [player, "Male02CHI"]  remoteExecCall ["setSpeaker", 0];};
        default                           {_language = 'boomer'; };
    };
};

diag_log("speaker _handler ="+ (speaker _handler) + ", vSpeakerLanguage is "+(_dog getVariable "vSpeakerLanguage"));
//_dog setVariable ["vHandler", _handler, true]; // Current handler human assigned to dog. May be player or AI.
_language