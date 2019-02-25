// "delaySay.sqf";
// dummy= [man, 3, "sound","chat text"] execVM "delaySay.sqf"
// "Man will say sound after delay (in seconds)";

private ["_man", "_delay","_sound","_text"];

_man =   _this select 0;
_delay = _this select 1;
_sound = _this select 2;
_text  = _this select 3;

_n=[_man,_delay,_sound,_text] spawn
{
	params["_man","_delay","_sound","_text"];
	//_str_sound = "STR_" + _sound;
	sleep _delay;
	//_man say3d _sound;
	[_man, _sound] remoteExec ["say3D", 0];
	if (side _man == side player) then 
	{
		if (_text != "") then {_man sidechat _text;};
	} else
	{
		if (_text != "") then {_man globalchat _text;};	
	};
	//[name _man, _text] spawn BIS_fnc_showSubtitle
	//hintsilent composeText [parsetext format["<t size='1' align='center' color='#00FF00'>%1</t>",_text]]; 
};

