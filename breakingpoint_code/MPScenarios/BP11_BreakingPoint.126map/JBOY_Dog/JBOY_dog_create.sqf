// JBOY_dog_create.sqf
if (!isServer)  exitwith {};
params ["_handler","_dogType","_pos", "_useCustomBoomerVoiceCommands"];
/* dog classes:
    Fin_blackwhite_F 	 //Dog (Blackwhite)         dog_black_white_co.paa
	Fin_ocherwhite_F 	 //Dog (Ocherwhite)         dog_white_ocher_co.paa
	Fin_tricolour_F 	 //Dog (Tricolour)          dog_tricolor_co.paa
	Fin_random_F 	     //Dog
	Alsatian_Sand_F 	 //Alsatian (Sand)           pastor_sand_co.paa
	Alsatian_Black_F 	 //Alsatian (Black)          pastor_black_co.paa
	Alsatian_Sandblack_F //Alsatian (Sandblack)      pastor_co.paa
	Alsatian_Random_F 	 //Alsatian
*/

// *************************************************************************)
// Create dog and have him follow leader
// **************************************************************************
_side = resistance;
if !(_handler == objnull) then
{
    _side = side _handler;
};
_grp = createGroup _side;
_dog = _grp createUnit [_dogType, _pos, [], 0, "CAN_COLLIDE"];
[_dog] join _grp;
_dog setSpeaker "NoVoice";  // If dog is a Unit, need to stop him talking!  If dog is an Agent, you don't need this.
_dog setBehaviour "CARELESS";

//_dog disableAI "FSM";

//_dog = createAgent [_dogType, _pos, [], 0, "CAN_COLLIDE"];
_dog setAnimSpeedCoef 2;
_dog setVariable ["vHandlerLanguageAbbrev", "none", true];  // language commands will be spoken in.
if !(_handler == objnull) then
{
    _n=[_handler, _dog, _useCustomBoomerVoiceCommands] spawn 
    { params["_handler","_dog","_useCustomBoomerVoiceCommands"];
      sleep 2; // speaker returns null during init, so we wait to give time for speaker to be initialized
      //systemchat format ["_useCustomBoomerVoiceCommands=%1",_useCustomBoomerVoiceCommands];
      _language = [_handler,_useCustomBoomerVoiceCommands] call JBOY_getSpeakerLanguage;
      _dog setVariable ["vHandlerLanguageAbbrev", _language, true]; 
    };
};

if !(_handler == objnull) then
{
    _dog setdir getdir _handler;
    _dog enablecollisionwith _handler;
    _dog setVariable ["vHandler", _handler , true];  // dog has no handler
    _handler setVariable ["vDog", _dog, true];    
} else 
{
    _dog setVariable ["vHandler", objNull, true];  // assign dog handler
    _handler setVariable ["vHealActionID", -1,true]; // Indicates no heal action currently active
    _handler setVariable ["vDog", objNull, true];    
};
//diag_log format ["created dog=%1, dogtype=%2, handler=%3, use Boomer Commands=%4",_dog, typeof _dog, _handler, _useCustomBoomerVoiceCommands];

// **************************************************************************
// Initialize dog properities
// **************************************************************************
_dog setVariable ["BIS_fnc_animalBehaviour_disable", true];
_dog setVariable ["vSilentCommand",false,true]; // Toggles whether or not you hear the handler's voice commands for dog.  False=Commands heard, true=Commands not heard
0=[_dog] spawn
{   params["_dog"];
    _dog setVariable ["vSilentCommand",true,true];
    _dog setVariable ["vCommand", 'sit', true];  // Current active command from handler to dog.
    sleep 4;
    _dog setVariable ["vSilentCommand",false,true];
};
_dogSide = [_dog] call JBOY_Dog_getDogSide;
_dog setVariable ["vSide", _dogSide, true];  // Side of dog will determine what enemies he will detect
_dog setVariable ["vTarget", objNull, true];  // Target unit for dog to focus on. Applies only to "attack" and "guard" commands.
_dog setVariable ["vMoveToPos", [], true];    // Position for dog to move to.  Applies only to "moveThere" command.
//_dog setVariable ["vBreadcrumbArray", [], true];   // Array of scent marker positions left by object being tracked.
//_dog setVariable ["vBreadcrumbCurrent", 0, true];  // Position of current scent marker dog is moving toward.
_dog setVariable ["vIsSwimming", false, true];  // count of times dog hit or damaged
_dog setVariable ["vHits", 0, true];  // count of times dog hit or damaged
_dog setVariable ["vVehicle", objNull, true];  // Vehicle dog is attached to. Only applies to "getin" and "getout" commands
_dog setVariable ["vBulletMagnet", objNull, true]; // Invisible target attached to dog just below ground, so enemy AI will detect and shoot at dog
_dog setVariable ["vPack", objNull, true]; // Pack object dog belongs to, will be null if dog is solo or has human handler
_dog setVariable ["vScentTrailDetectionOn", false, true]; // Default is dog will not be scanning for scentMarkers to track.
_dog setVariable ["vScentTrailDetectDistance", 40, true]; // Distance at which dog can detect a scent trail marker
_dog setVariable ["vEnemyDetectDistance", 70, true]; // Distance at which dog can detect an ememy 
_dog setVariable ["vCurrentScentMarker", objNull, true]; // Dog has no knowledge of scent trail markers when created
_dog setVariable ["vOriginalTexture", getObjectTextures _dog select 0, true]; // Dog has no knowledge of scent trail markers when created
_dog setVariable ["vOtherHandlers",[],true]; // Array of units that may become the dog's handler if this handler killed.
_dog setVariable ["vWhoHurtDog", objNull, true]; // Tracks last unit to hurt the dog.
_dog setVariable ["vAutoGetin", true, true]; // If true, dog automatically boards vehicle when handler boards vehicle.
_dog setVariable ["vAllowDamage", true, true]; // If true, dog automatically boards vehicle when handler boards vehicle.
_dog setVariable ["vDogName", "", true]; // If true, dog automatically boards vehicle when handler boards vehicle.

_dog setBehaviour "CARELESS";
//_dog disableAI "FSM";
//_dog disableAI "TARGET";
_dog setSkill 1;

// **************************************************************************
// Add damage eventhandler to dog so it takes X shots to kill it.  And apply
// Bullet hole textures to dog when hit.  One shot by a 9mm causes 2 this
// event handler to fire twice, so I'm using 2 hits to show 1 bullet hole,
// and 4 hits to show 2 bullet holes.  5 or more hits the dog dies.
// **************************************************************************
_dog allowdamage false;
_dog  setVariable ["vOriginalTexture", (getObjectTextures _dog select 0), true];
_dog addEventHandler ["HandleDamage", 
{
    private ["_return"];
    _dog = _this select 0; 
    _selection = _this select 1; 
    _passedDamage = _this select 2; 
    _source	= _this select 3; 
    _projectile = _this select 4; 
  //diag_log["damage",_dog,_selection,_passedDamage,_source,_projectile];
    // log who hurt the dog
	if (_dog getVariable "vAllowDamage") then 
	{
		if (_source isKindOf "Man") then
		{
			_dog setVariable ["vWhoHurtDog", _source, true];
		};
		// Do not damage dog if source of damage is dog itself (which appears to be collision damage when dog pushed at target),
		// or projectile is empty string (fall damage).
		if ((_projectile != '') and !(isnull _source )) then  
		{
			_hits = _dog getVariable "vHits";
			//diag_log [_dog, "Dog hits:",_hits];
			 
			
			if (_hits == 0) then 
			{
				// Add action to heal dog
				//player sidechat "b4 add heal action";
				// You can't create actions on animals, so create an object and attach it to the dog
				//_dogProxy =  "Steel_Plate_S_F" createVehicle [0,0,0];
				//_dogProxy attachTo [_dog, [0,0,.5]];
				//_dogProxy setposatl getposatl _dog;
				_handler = _dog getVariable "vHandler";

			//object addAction [title, script, arguments, priority, showWindow, hideOnUse, shortcut, condition, radius, unconscious, selection]     
				//waitUntil {sleep 2; isNull attachedTo _dog or !alive _dog};
				if (alive _dog) then
				{
				_HealAction      = _handler addAction ["Heal dog",   // action title
					{   _dog=_this select 3 select 0;   
						_healer = _this select 3 select 1; 
						if ((_healer distance _dog) < 2.5 and 
							 ("Medikit" in (items _healer + assignedItems _healer)  or
							  "FirstAidKit" in (items _healer + assignedItems _healer) ) 
						   ) then
						{
							_dog playMove "Dog_Stop";
							_healer playActionNow "MedicOther";  
							sleep 4.5;  
							_dog setVariable ["vHits", 0, true];
							_dog setObjectTextureGlobal [0,_dog getVariable "vOriginalTexture"];
							//hint format ["_HealAction=%1",_healer getVariable "vHealActionID"];
							_healer removeAction (_healer getVariable "vHealActionID");
							_healer setVariable ["vHealActionID", -1,true];
							if !("Medikit" in (items _healer + assignedItems _healer)) then { _healer removeItem "FirstAidKit"};
						} else
						{
							hint "You must have a medkit or first aid kit to heal dog";
							sleep 4;
							hint "";
						};
					}, // script
					[_dog,_handler], //arguments
					6, // priority
					true, //showWindow
					true, //hideOnUse
					"",//shortcut
					"(player distance (player getVariable ""vDog"")) < 2.5 and isNull attachedTo (player getVariable ""vDog"")",//condition player is close and dog not in vehicle
					20 //radius
					];  
					
				_handler setVariable ["vHealActionID", _HealAction,true];
				};
			};
			_hits = _hits + 1;
		   _dog setVariable ["vHits", _hits, true];

			if (typeOf _dog in ["Fin_tricolour_F","Fin_blackwhite_F","Fin_ocherwhite_F","Alsatian_Sandblack_F","Alsatian_Sand_F","Alsatian_Black_F"]) then 
			{
				if (_hits <= 5) then {dummy= [_dog, 0, ([ "boomerYelp", "boomerYelp2"] call BIS_fnc_arrayShuffle) select 0, ""] execVM "JBOY_Dog\delaySay.sqf";};
					if (_hits <= 4) then
					{
						if (((getObjectTextures _dog select 0) find "dogBloodNeck2Hole")==-1) then
						{
							if (((getObjectTextures _dog select 0) find "dogbloodneck")>=0) then
							{
								_dog setobjecttextureGlobal [0,"JBOY_Dog\Textures\dogBloodNeck2Hole" + (typeOf _dog)+".jpg"]; // neck blood + bullet holes
							} else {
								_dog setobjecttextureGlobal [0,"JBOY_Dog\Textures\dogBulletHole2" + (typeOf _dog)+".jpg"]; // bullet holes only
							};
						};
					};
			 };
			 if (_hits > 5) then {
			   _dog setdamage 1;
			   // Delete attached enemy dude that draws fire (
			   _n=[_dog] spawn 
			   {   params["_dog"];
				   sleep 5;
					{
					  detach _x;
					  deleteVehicle _x;
					} forEach attachedObjects _dog;
			   };
			 };
		};
	};
    _return = 0;
   _return
}];
// ***********************************************************************
// Continually loop if dog hit and yelp until healed.
// ***********************************************************************
_n=[_dog] spawn
{
    params["_dog"];
    while {alive _dog} do
    {
        if (_dog getVariable "vHits" > 0) then
        {
            dummy= [_dog, 0, ([ "boomerYelp", "boomerYelp2"] call BIS_fnc_arrayShuffle) select 0, ""] execVM "JBOY_Dog\delaySay.sqf";
            sleep (3 + random 7);
        };
    };
};
// ***********************************************************************
// Delete attached bullet magnet when killed
// ***********************************************************************
_dog addEventHandler ["Killed", 
{ 
    private ["_return"];
    _dog = _this select 0; 
    _killer = _this select 1; 
    _obj = (_dog getVariable "vBulletMagnet");
    detach _obj;
    deleteVehicle _obj;
}];
/*
gDogAnims = ["Dog_Growl","Dog_Run","Dog_Sprint","Dog_Stop","Dog_TurnL","Dog_TurnR","Dog_Walk","Dog_Sitting","Dog_Idling",
  "Dog_Sit_01","Dog_Sit_02","Dog_Sit_03","Dog_Sit_04","Dog_Sit_05","Dog_Sit_06","Dog_Sit_07","Dog_Sit_08",
  "Dog_Idle_01","Dog_Idle_02","Dog_Idle_03","Dog_Idle_04","Dog_Idle_05","Dog_Idle_06","Dog_Idle_07","Dog_Idle_08","Dog_Idle_09","Dog_Idle_10"];
*/
_dog
