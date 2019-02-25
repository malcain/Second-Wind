JBOY_fnc_DogDisplayEH =
{
    if !(isDedicated) then
    {
        waituntil {!(isNull (findDisplay 46))};
        disableSerialization;
        _display = findDisplay 46;
        //(findDisplay 46) displayAddEventHandler ["KeyDown",' _this call JBOY_fnc_DogOpenUI;'];
        //(findDisplay 46) displayAddEventHandler ["KeyDown",' if !(isNull (player getVariable "vDogAssigned")) then {_this call JBOY_fnc_DogOpenUI;} else {hint "No dog is assigned to you."};'];
        (findDisplay 46) displayAddEventHandler ["KeyDown",' if !(isNull (player getVariable "vDogAssigned")) then {_this call JBOY_fnc_DogOpenUI;};	
			_key = _this select 1;
			if (str _key == "31") then
			{
				JBOY_SKEY_DOWN = true;
			} else {
				JBOY_SKEY_DOWN = false;
			};
		'];
    };
};
JBOY_fnc_DogCommandSel = 
{
	//systemChat format ["%1",_this];
	switch (_this select 1) do
	{
		// Commands Array from JBOY_fnc_DogOpenUI
		//_commands = ["Heel","Sit","Stay","Move There","Attack","Fetch","Detain","Get In","Dismiss"]
		case 0: {_n= [player,"heel"] call JBOY_dogExecuteAction;};
		case 1: {_n= [player,"sit"] call JBOY_dogExecuteAction;};
		case 2: {_n= [player,"stay"] call JBOY_dogExecuteAction;};
		case 3: {_n= [player,"moveThere"] call JBOY_dogExecuteAction;};
		case 4: {_n= [player,"attack"] call JBOY_dogExecuteAction;};
		case 5: {_n= [player,"fetch"] call JBOY_dogExecuteAction;};
		case 6: {_n= [player,"detain"] call JBOY_dogExecuteAction;};
		case 7: {_n= [player,"getin"] call JBOY_dogExecuteAction;};
		case 8: {_n= [player,"getout"] call JBOY_dogExecuteAction;};
		case 9: {_n= [player,"track"] call JBOY_dogExecuteAction;};
		case 10: {_n= [player,"speak"] call JBOY_dogExecuteAction}; 
		case 11: {_n= [player,"dismiss"] call JBOY_dogExecuteAction; 
                // When dismissing dog, we disable T key dog menu, until a dog is re-assigned to player
                 disableSerialization;
                 _display = findDisplay 46;
                 _display displayRemoveAllEventHandlers "KeyDown";};
	};
    disableSerialization;
    _dialog = findDisplay 15501; // Close after command issued.
    _dialog closeDisplay 1;
};

JBOY_fnc_DogOpenUI = 
{
	private['_handled'];
	_handled = false;
	disableSerialization;
	// Use this statement to disable dog menu during cinema scenes:  missionNamespace setVariable ["JBOY_DogMenuEnabled", false, true];
	if (missionNamespace getVariable ["JBOY_DogMenuEnabled", true]) then
	{
//hint str _this;
		switch (_this select 1) do
		{
			//T key
			case 20: 
			{
				_display = findDisplay 15501;
				if (isNull _display) then 
				{
					findDisplay 46 createDisplay "rscDogDialog";
					_commandList = ((findDisplay 15501) displayCtrl (1));
					_commands = ["- "+localize "STR_JBOY_DOG_Heel",
								 "- "+localize "STR_JBOY_DOG_Sit",
								 "- "+localize "STR_JBOY_DOG_Stay",
								 "- "+localize "STR_JBOY_DOG_MoveThere",
								 "- "+localize "STR_JBOY_DOG_Attack",
								 "- "+localize "STR_JBOY_DOG_Fetch",
								 "- "+localize "STR_JBOY_DOG_Detain",
								 "- "+localize "STR_JBOY_DOG_GetInShort", // Enter vehicle
								 "- "+localize "STR_JBOY_DOG_GetOutShort",// Exit vehicle
								 "- "+localize "STR_JBOY_DOG_Track",
								 "- "+localize "STR_JBOY_DOG_SITREP",   //Sitrep is Speak
								 "- "+localize "STR_JBOY_DOG_AtEase"];  //AtEase is Dismiss
					{
						_index = _commandList lbAdd _x;
					} forEach _commands;

					// Using keyup makes you hold "T" to keep the dialog open. Keydown will require you to press it again to close
					
					//(findDisplay 15501) displayAddEventHandler ["KeyUp","_this call JBOY_fnc_DogCloseUI;"];
					(findDisplay 15501) displayAddEventHandler ["KeyDown","_this call JBOY_fnc_DogCloseUI;"];								
				};
				_handled = true;
			};
		};
	};
    if ( (_this select 1) in (actionKeys "ReloadMagazine")) then
    {
        if (!(player getVariable "vReloading")) then 
        {
            _n = [] spawn
            {
               //player sidechat format ["Reloading %1",player getVariable "vReloading"];
               player setVariable ["vReloading",true,true];
               sleep 9;
               player setVariable ["vReloading",false,true];
               //player sidechat format ["Reloading complete. %1",player getVariable "vReloading"];
            };
        };
        //_handled = true;
    };
	_handled;
};
JBOY_fnc_DogCloseUI = 
{
	private['_handled'];
	_handled = false;
	switch (_this select 1) do
	{
		//t key
		case 20: 
		{
			_dialog = findDisplay 15501;
			_dialog displayRemoveAllEventHandlers "KeyUp";
			_dialog displayRemoveAllEventHandlers "KeyDown";
			_dialog closeDisplay 1;
			_handled = true;
		};
	};
	_handled;
};