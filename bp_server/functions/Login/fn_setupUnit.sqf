scriptName "BP_setupUnit";

params ["_playerID","_oldBodyID","_bodyID"];

_player = objectFromNetID _playerID;
_oldBody = objectFromNetID _oldBodyID;
_body = objectFromNetID _bodyID;
_clientID = (owner _player);

_playerID = getPlayerUID _player;
_playerName = (name _player);

_allVars = allVariables _oldBody;

//diag_log text format ["allvars %1",_allVars];

{
_tempVar = _oldBody getVariable _x;
_body setVariable [_x,_tempVar];
} count _allVars;

//Send Login Result
bpSetupUnit = true;
_clientID publicVariableClient "bpSetupUnit";


//_allNewVars = allVariables _Body;
//diag_log text format ["allvarsNew %1",_allNewVars];

