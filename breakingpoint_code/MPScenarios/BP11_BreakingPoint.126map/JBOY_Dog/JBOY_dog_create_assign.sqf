if(!isServer) then {waitUntil{!isNull player}};
// DoFollowUnit = compile preprocessFileLineNumbers "Scripts\DoFollowUnit.sqf";
JBOY_say3d = compile preprocessFileLineNumbers "Scripts\JBOY_say3d.sqf";
JBOY_dogCommand = compile preprocessFileLineNumbers "JBOY_Dog\JBOY_dogCommand.sqf";

nul = [[topcop],'SMG_02_ARCO_pointg_F',6,'hgun_P07_F',6] execVM "cop_loadout.sqf";
// nul = [[cop_1,cop_2,cop_3,cop_4,cop_5,cop_6,cop_7],'none',0,'hgun_P07_F',6] execVM "cop_loadout.sqf";
// nul = [[copcar1, copcar2]] execVM "skinPoliceCar.sqf";  

// **************************************************************************
// Create dog and have him follow leader
// **************************************************************************

boomGrp = createGroup resistance;
"Fin_tricolour_F" createUnit [position topcop, boomGrp, "boomer=this;"]; 
GBOOMER = boomer;
GBOOMER setSkill 1;
GBOOMER disableCollisionWith player;
diag_log GBOOMER;
diag_log (typeof GBOOMER);
gHeelAction = 0;
gFollowAction = 0;
gHerdAction = 0;
gAttackAction = 0;
gDetainAction = 0;
// Start dogCommand script with default command of heel.
gDOG_COMMAND = "idle";
gDOG_TARGET = "none";
nul = [GBOOMER, topcop, 2.5] execVM "JBOY_Dog\JBOY_dogCommand.sqf";

gHeelAction      = player addAction ["Boomer: Heel", {gDOG_COMMAND = "heel";}];
gSitAction       = player addAction ["Boomer: Sit", {gDOG_COMMAND = "sit";}];
gStayAction      = player addAction ["Boomer: Stay", {gDOG_COMMAND = "stay";}];
gScoutAction     = player addAction ["Boomer: Scout ahead", {gDOG_COMMAND = "scout";}];
gMoveThereAction = player addAction ["Boomer: Move there", 
  {_pos = screenToWorld[0.5,0.5];
   _obj = cursorTarget;
   if (!isnull _obj) then 
   { _pos = getpos _obj; 
	 if (_obj isKindOf "Man") then 
	 {
 	   GBOOMER dowatch ([_obj,-20, ([_obj, GBOOMER] call BIS_fnc_dirTo)] call BIS_fnc_relPos);
 	 };
    };
	gMoveToPos =  ([_obj, 2, ([_obj, GBOOMER] call BIS_fnc_dirTo)] call BIS_fnc_relPos);
    gDOG_COMMAND = "moveThere";
   }];
// gAttackAction    = player addAction ["Boomer: Attack", {gDOG_COMMAND = "attack";}];
gAttackAction = player addAction ["Boomer: Attack", 
  {_obj = cursorTarget;
   if (!isnull _obj) then 
   {
	 if (_obj isKindOf "Man" and ( GBOOMER distance _obj) < 50) then 
	 {
	   gDOG_TARGET = _obj;
	   gMoveToPos =  ([_obj, 2, ([_obj, GBOOMER] call BIS_fnc_dirTo)] call BIS_fnc_relPos);
       gDOG_COMMAND = "attack";
	 } else {
	   //GBOOMER sidechat "whimper";
	   dummy= [GBOOMER, 2, "whimper1","Whimper"] execVM "JBOY_Dog\delaySay.sqf";
     };
   } else {
 	   //GBOOMER sidechat "whimper";
	   dummy= [GBOOMER, 2, "whimper1","Whimper"] execVM "JBOY_Dog\delaySay.sqf";
   };
   }];

gGuardAction = player addAction ["Boomer: Guard", 
  {_obj = cursorTarget;
   if (!isnull _obj) then 
   {
	 if (_obj isKindOf "Man" and ( GBOOMER distance _obj) < 25) then 
	 {
	   gDOG_TARGET = _obj;
	   gMoveToPos =  ([_obj, 2, ([_obj, GBOOMER] call BIS_fnc_dirTo)] call BIS_fnc_relPos);
       gDOG_COMMAND = "guard";
	 } else {
	   GBOOMER sidechat "whimper";
     };
   } else {
 	   GBOOMER sidechat "whimper";
   };
   }];

gDogAnims = ["Dog_Growl","Dog_Run","Dog_Sprint","Dog_Stop","Dog_TurnL","Dog_TurnR","Dog_Walk","Dog_Sitting","Dog_Idling",
  "Dog_Sit_01","Dog_Sit_02","Dog_Sit_03","Dog_Sit_04","Dog_Sit_05","Dog_Sit_06","Dog_Sit_07","Dog_Sit_08",
  "Dog_Idle_01","Dog_Idle_02","Dog_Idle_03","Dog_Idle_04","Dog_Idle_05","Dog_Idle_06","Dog_Idle_07","Dog_Idle_08","Dog_Idle_09","Dog_Idle_10"];
/*
  [] spawn {
  "Fin_ocherwhite_F" createUnit [position topcop, boomGrp, "rocco=this;"]; 
  sleep 4;
  player sidechat "start anims";
   player sidechat (gDogAnims select 0);
   dostop rocco;
  {player sidechat _x; rocco switchmove ""; rocco playmove _x; sleep 10;} foreach gDogAnims;
};
*/
// Dog_Stop freezes him, good for pointing.
// Dog_Idling is playing

//can1 attachTo [player,[0,3,1]];
// gEffect = player addAction ["Effect: CannonFlash", 
// {_source = "#particlesource" createVehicleLocal (getpos can1);_source attachTo [can1,[0,0,.2]];  _source setParticleClass "CannonFlash";  }];

// gEffect2 = player addAction ["Effect2: FireSparksSmall3", 
// {_source2 = "#particlesource" createVehicleLocal (getpos can1); _source2 attachTo [can1,[0,0,.2]];_source2 setParticleClass "FireSparksSmall3"; }];
// FireBallBrightSmall, FireSparksSmall,1,2,3, AmmoExpSparks (small light ball), CannonFlash
// gEffect2 = player addAction ["Effect2: ObjectDestructionFire1Smallx", 
// {_source2 = "#particlesource" createVehicleLocal (getpos can1); _source2 setParticleClass "ObjectDestructionFire1Smallx"; _source2 attachTo [can1,[0,0,0]];}];

//_source01 attachTo [_object,[0,1,0]];
// nul = [copcar1] execVM "policeOffroad.sqf";  
[] spawn {
    if (!isServer)  exitwith {};
	sleep 1;
//	waitUntil {sleep 1; taskState tskobj_0 == "Succeeded" || !(alive s7)};
//	if (!Gs7Rescued) then
//	{
//		["tskobj_1", "Failed"] call BIS_fnc_taskSetState;
//	};
};