//Name:  JBOY_say3d.sqf 
//Compile in Init:   JBOY_say3d = compile preprocessFileLineNumbers "JBOY\JBOY_say3d.sqf";
//Example call:   nul = [_dude,2,u_suck,"you suck", "groupchat"] call JBOY_say3d;  
private ["_dude", "_delay", "_soundFile", "_text","_textmode", "_soundmode"];
_dude      = _this select 0;   
_delay     = _this select 1;   
_soundFile = _this select 2;    
_text      = _this select 3;
_textmode  = _this select 4;
_soundmode = _this select 5;

//diag_log format ["_dude=%1, _delay=%2, _soundFile=%3, _text=%4, _textmode=%5",_dude,_delay,_soundFile, _text, _textmode];
// PV this so it runs on all other clients
PVEH_delaySay3D = [_dude, _delay ,_soundFile, _text, _textmode, _soundmode];
publicVariable "PVEH_delaySay3D";

// run locally
if (not isDedicated) then {
	// Spawn to prevent "Suspending not allowed in this context" error where sleep not allowed.
	[_dude, _delay ,_soundFile, _text, _textmode, _soundmode] 
	spawn 
	{
		_dude      = _this select 0;   
		_delay     = _this select 1;   
		_soundFile = _this select 2;    
		_text      = _this select 3;
		_textmode  = _this select 4;
		_soundmode = _this select 5;
		sleep _delay;
				
		switch (_soundmode) do 
		{ 	case "say3d":        {_dude say3D _soundFile;};
			case "sideradio":    {_dude sideradio _soundFile;};
			case "groupradio":   {_dude groupradio _soundFile;};
			case "vehicleradio": {_dude vehicleradio _soundFile;};
			case "globalradio":  {_dude globalradio _soundFile;};
		};
		if (_text != "") then 
		{
			switch (_textmode) do 
			{ 	case "groupchat":   {_dude groupchat _text;};
				case "sidechat":    {_dude sidechat _text;};
				case "globalchat":  {_dude globalchat _text;};
				case "vehiclechat": {_dude vehiclechat _text;};
				case "titletext":   {titleText [_text, "PLAIN"];};
				case "hintsilent":  {hintsilent _text;};
			};
		};
	};
};

true  