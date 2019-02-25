// Called by init.sqf
// dmy=[] execvm "\JBOY_Dog\JBOY_DogInit.sqf";
if (!isServer)  exitwith {};

JBOY_say3d =              compile preprocessFileLineNumbers "JBOY_Dog\JBOY_say3d.sqf";
JBOY_dog_create =         compile preprocessFileLineNumbers "JBOY_Dog\JBOY_dog_create.sqf";
JBOY_getSpeakerLanguage = compile preprocessFileLineNumbers "JBOY_Dog\JBOY_getSpeakerLanguage.sqf";
JBOY_getDogPOSPerVeh =    compile preprocessFileLineNumbers "JBOY_Dog\JBOY_getDogPOSPerVeh.sqf";
JBOY_watchNextWP =        compile preprocessFileLineNumbers "JBOY_Dog\JBOY_watchNextWP.sqf";
JBOY_isFetchable =        compile preprocessFileLineNumbers "JBOY_Dog\JBOY_isFetchable.sqf";
JBOY_dogPackCreate =      compile preprocessFileLineNumbers "JBOY_Dog\JBOY_dogPackCreate.sqf";
JBOY_dogPackLoop =        compile preprocessFileLineNumbers "JBOY_Dog\JBOY_dogPackLoop.sqf";
JBOY_turboChicken =       compile preprocessFileLineNumbers "JBOY\JBOY_turboChicken.sqf";
JBOY_dogExecuteAction =   compile preprocessFileLineNumbers "JBOY_Dog\JBOY_dogExecuteAction.sqf";
//CALC_INTERMEDIATE_POS   = compile preprocessFileLineNumbers "JBOY_Dog\CALC_INTERMEDIATE_POS.sqf";
JBOY_dogPackMemberAttack= compile preprocessFileLineNumbers "JBOY_Dog\JBOY_dogPackMemberAttack.sqf";
JBOY_getNearTargets     = compile preprocessFileLineNumbers "JBOY_Dog\JBOY_getNearTargets.sqf";
JBOY_Dog_getDogSide     = compile preprocessFileLineNumbers "JBOY_Dog\JBOY_Dog_getDogSide.sqf";

JBOY_getClosestObjFromArray       = compile preprocessFileLineNumbers "JBOY_Dog\JBOY_getClosestObjFromArray.sqf";
JBOY_getTargetDesignatedByHandler = compile preprocessFileLineNumbers "JBOY_Dog\JBOY_getTargetDesignatedByHandler.sqf";
JBOY_Dog_getEnemyFromArray = compile preprocessFileLineNumbers "JBOY_Dog\JBOY_Dog_getEnemyFromArray.sqf";

_dogDialog = [] spawn compile PreprocessFileLineNumbers "JBOY_Dog\Dialog\JBOY_fnc_DogDialog.sqf";
//JBOY_fnc_DogDialog = [] spawn compile PreprocessFileLineNumbers "Dialog\JBOY_fnc_DogDialog.sqf";

// New scritps added for Tracking
JBOY_dogPreyInit = compile preprocessFileLineNumbers "JBOY_Dog\JBOY_dogPreyInit.sqf";
JBOY_DogScentDropLoop = compile preprocessFileLineNumbers "JBOY_Dog\JBOY_DogScentDropLoop.sqf";
JBOY_getFreshestScentMarker = compile preprocessFileLineNumbers "JBOY_Dog\JBOY_getFreshestScentMarker.sqf";
JBOY_DogScentDetectionLoop = compile preprocessFileLineNumbers "JBOY_Dog\JBOY_DogScentDetectionLoop.sqf";
JBOY_DogEnemyDetectionLoop = compile preprocessFileLineNumbers "JBOY_Dog\JBOY_DogEnemyDetectionLoop.sqf";
JBOY_DogSmashGrassLoop = compile preprocessFileLineNumbers "JBOY_Dog\JBOY_DogSmashGrassLoop.sqf";
JBOY_getNearEnemies = compile preprocessFileLineNumbers "JBOY_Dog\JBOY_getNearEnemies.sqf";
JBOY_DogScentDeleteOlderScent = compile preprocessFileLineNumbers "JBOY_Dog\JBOY_DogScentDeleteOlderScent.sqf";

// **************************************************************************
// Enable hints and chats for debugging, and places yellow sphere above dog pack leader
// **************************************************************************
JBOY_DEBUG = False;
JBOY_preyArray = [];

// **************************************************************************
// Create game logic used by JBOY_AIFightsDogs.sqf to force AI to fire weapons.
// **************************************************************************
JBOYDogLogicCenter = createCenter sideLogic;
JBOYDogLogicGroup = createGroup JBOYDogLogicCenter;
JBOYDogGameLogic = JBOYDogLogicGroup createUnit ["Logic", [0,0,0], [], 0, "NONE"];
