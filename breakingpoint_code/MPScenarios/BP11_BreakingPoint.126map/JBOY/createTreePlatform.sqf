// null=[treeProxyObject, 90, true, "B_sniper_F", 1, "MIDDLE", group player] execvm "Scripts\createPlatform.sqf" ;
/* To do:
- Litter at base of tree.  Cartridges.  Stuff on pallet (cartridges, litter, radio, small ammobox)
Sample Call:
dmy=[tire1, 90, false, "B_sniper_F", 270, "AUTO", group player] execvm "Scripts\createPlatform.sqf" ;

*/
if (! isServer) exitwith {}; 
params["_treeProxy","_treeDir","_ropeDeployed","_unitClass","_unitDir","_unitStance","_unitGroup"];

sleep .5;
if (isNull _treeProxy) exitwith {};
//_vectorDir = vectorDir _placeholder;
//deleteVehicle _placeholder;

// **************************************************************************************
// Using or replacing existing terrainObject trees didn't work...
// **************************************************************************************
/*
_nearTrees = nearestTerrainObjects [player modelToWorld [0,0,30], ["TREE"], 10];
_terrainTreeFound = false;
_terrainTree = objNull;
{
    if (getModelInfo (_nearTrees select _x select 0) == "t_ficus_big_f.p3d") then 
    {
        _terrainTreeFound = true;
        _terrainTree = _x;
        //hint ["tree=%1",_tree];
    };
} foreach _nearTrees;
if (_terrainTreeFound) then 
{
    hideObjectGlobal _terrainTree;
};
// getModelInfo (nearestTerrainObjects [player modelToWorld [0,0,30], ["TREE"], 10] select 0)
// returns:   ["t_ficus_big_f.p3d","a3\vegetation_f_exp\tree\t_ficus_big_f.p3d",false]
*/
// **************************************************************************************
// At placeholder pos, use near existing tree, or create a new tree if one not near
// **************************************************************************************
_tree = createSimpleObject ["a3\vegetation_f_exp\tree\t_ficus_big_f.p3d", [0,0,0]];
_tree enableCollisionWith _treeProxy;
_treeProxy setDir _treeDir;
_tree setdir _treeDir;
_tree setposatl getposATL _treeProxy;
hideObjectGlobal _treeProxy;

missionNameSpace setVariable ["jboySniperTrees", ((missionNameSpace getVariable "jboySniperTrees") + [_tree]), true];
missionNameSpace setVariable ["jboySniperTreeProxies", ((missionNameSpace getVariable "jboySniperTreeProxies") + [_treeProxy]), true];
_treeProxy setVariable ["tree", _tree, true];
//_pos = getposATL _treeProxy;
//_proxyPos = _tree modelToWorld [0,-10,0];
_treeProxy enableSimulation false;
_treeProxy setVariable ["climbers",[],true];  // list of near units that had climb action added
// **************************************************************************************
// Create platform nest 
// **************************************************************************************
_pallet = createVehicle ["Land_Pallet_F", [2,0,0], [], 0, "CAN_COLLIDE"];
_treeProxy setVariable ["pallet", _pallet, true];

_pallet enableCollisionWith _tree;
_pallet attachTo [_tree,[1, -.8, 6.5]];
_pallet setdir 345;
/*
// **************************************************************************************
// Add coil of rope to pallet (using wire because no coil of rope object exists)  Land_Rope_01_F
// **************************************************************************************
_ropeCoil1 = createVehicle ["Land_Rope_01_F", [2,0,0], [], 0, "CAN_COLLIDE"];
_ropeCoil1 attachTo [_pallet,[.75,0,.1]];
_ropeCoil2 = createVehicle ["Land_Rope_01_F", [2,0,0], [], 0, "CAN_COLLIDE"];
_ropeCoil2 attachTo [_pallet,[.7,0.05,.1]];
_ropeCoil3 = createVehicle ["Land_Rope_01_F", [2,0,0], [], 0, "CAN_COLLIDE"];
_ropeCoil3 attachTo [_pallet,[.64,0,.1]];
{_x enableSimulation false;} foreach [_ropeCoil1,_ropeCoil2,_ropeCoil3];
_tree setVariable ["ropeCoil1", false, true];
_tree setVariable ["ropeDeployed", false, true];
*/
// **************************************************************************************
// Create UAVs as rope anchor points
// **************************************************************************************
_ropeTopObj = createVehicle ["O_UAV_01_F", [2,0,0], [], 0, "CAN_COLLIDE"];
_treeProxy setVariable ["ropeTopObj", _ropeTopObj, true];
_ropeTopObj  attachTo [_pallet,[2.55,0,.85]];
_ropeTopObj enableCollisionWith _tree;
_ropeTopObj allowdamage false;
hideObjectGlobal _ropeTopObj;
_ropeBottomObj = createVehicle ["B_UAV_01_F", [2,0,0], [], 0, "CAN_COLLIDE"];
_treeProxy setVariable ["ropeBottomObj", _ropeBottomObj, true];
_ropeBottomObj  setposATL [getposatl _ropeTopObj select 0, getposatl _ropeTopObj select 1,-1];
_ropeBottomObj enableCollisionWith _tree;
_ropeBottomObj allowdamage false;
hideObjectGlobal _ropeBottomObj;

if (_ropeDeployed) then {
    _treeProxy setVariable ["ropeDeployed",true, true];
    _rope = ropeCreate [_ropeBottomObj, [0,0,0],_ropeTopObj, [0,0,0]];
    _rope allowDamage false;
} else {  // ROPE is NOT deployed, so create rope objects and DEPLOY action to the rope object
// **************************************************************************************
// Add coil of rope to pallet (using wire because no coil of rope object exists)
// **************************************************************************************
//     _ropeCoil1 = createVehicle ["Land_Ammobox_rounds_F", [2,0,0], [], 0, "CAN_COLLIDE"];

    _treeProxy setVariable ["ropeDeployed",false, true];
    //_ropeCoil1 = createVehicle ["Land_Rope_01_F", [2,0,0], [], 0, "CAN_COLLIDE"];
    _ropeCoil1 = createSimpleObject ["Land_Rope_01_F", [0,0,0]];
    //_ropeCoil1 attachTo [_pallet,[.75,0,.1]];   
    _ropeCoil1 setpos (_pallet modelToWorld [.75,0,.1]);
    _ropeCoil2 = createVehicle ["Land_Rope_01_F", [2,0,0], [], 0, "CAN_COLLIDE"];
    _ropeCoil2 attachTo [_pallet,[.7,0.05,.1]];
    _ropeCoil3 = createVehicle ["Land_Rope_01_F", [2,0,0], [], 0, "CAN_COLLIDE"];
    _ropeCoil3 attachTo [_pallet,[.64,0,.1]];
    //{_x enableSimulation false;} foreach [_ropeCoil1,_ropeCoil2,_ropeCoil3];
    _treeProxy setVariable ["ropeCoils", [_ropeCoil1,_ropeCoil2,_ropeCoil3], true];
    //_d = [_treeProxy] execvm "JBOY\JBOY_deployRopeAddAction.sqf"; // 
};

// **************************************************************************************
// Attach bush to platform to camoflage it
// **************************************************************************************
_bush = createSimpleObject ["a3\vegetation_f_exp\shrub\b_calochlaena_f.p3d", [0,0,0]];
_bush enableCollisionWith _tree;
_bush setdamage 1;
_bush attachTo [_pallet,[0, 0, 0-((random 3)/10)]];
_bush setdir (random 360);

// **************************************************************************************
// (Optional) Create sniper on platform
// **************************************************************************************
if (_unitClass != '') then
{
    _sniper = _unitGroup createUnit [_unitClass, [0,0,0], [], 0, "NONE"];
    _sniper enableCollisionWith _bush;
    _d = [_sniper, _treeProxy, _unitStance, _unitDir] execvm "JBOY\JBOY_putUnitInTree.sqf";
 /*
    _sniper enableCollisionWith _tree;
    _sniper enableSimulation false;
    _sniper setpos [getpos _pallet select 0, getpos _pallet select 1, (getpos _pallet select 2) +.1];
    dostop _sniper;
    _sniper forceSpeed 0;
    _sniper setUnitPos _unitStance;
    _sniper setdir _unitDir;
    sleep .1;
    _sniper enableSimulation true;  
    _sniper setVariable ["jboyTreeProxy", _treeProxy, true];
    _d = [_sniper] execvm "JBOY\JBOY_climbDownAddAction.sqf";
    _d = [_sniper] execvm "JBOY\JBOY_ropeDownAddAction.sqf";
 */
};

// Spawn loop to add climb up action to near units.
// Climb up action is removed if units die, move away from tree, or climb the tree.
_d = [_treeProxy,_pallet] spawn
{
    params["_treeProxy","_pallet"];
    _tree = _treeProxy getVariable "tree";
    // Get 
    getUnitPositionId = {
         private["_vvn", "_str"];
        _vvn = vehicleVarName _this;
        _this setVehicleVarName "";
        _str = str _this;
        _this setVehicleVarName _vvn;
        parseNumber (_str select [(_str find ":") + 1])
    };
 
    while {damage _tree < 1} do
    {
        sleep 1;
        private _nearDudes = [];
        _nearDudes = nearestObjects [getposatl _tree, ["Man"],15];
        {
            _dude = _x;
            _hasClimbAction = _dude getVariable "hasClimbAction";
            
            if (isNil "_hasClimbAction") then
            {
                _hasClimbAction = "no";
                _dude setVariable ["hasClimbAction", "no", true];
            };
            if (alive _dude and getposatl _dude select 2 < .3 and (_hasClimbAction == "no" or _hasClimbAction == "") and (_dude distance2d _tree) < 8) then 
            {
                _treeProxy setVariable ["climbers",(_treeProxy getVariable "climbers")+[_dude],true];
                _dude setVariable ["hasClimbAction","yes",true];
                _dude setVariable ["nearTreeProxy",_treeProxy,true];
 
                _actionTitle = 'Climb up tree';
                if (!isPlayer _dude) then 
                {
                    _actionTitle = (name _dude)+'('+ str(_dude call getUnitPositionId) + '): Climb up tree';
                };   

                _climbUpActionID = _dude addAction 
                   [_actionTitle, 
                    {
                        _dude = _this select 0;
                        _id = _this select 2;
                        _tree = _this select 3 select 0;
                        _pallet = _this select 3 select 1;
                        _dude removeAction (_dude getVariable "ClimbUpActionID");
                        private _pos = getPosASLVisual _tree;
                        _d = [_dude,_pallet,_tree] execvm "JBOY\JBOY_climbUp.sqf";
                    }, 
                    [_tree,_pallet], 10, true, true, '', '',
                    5, false
                ];   
                _dude setVariable["ClimbUpActionID",_climbUpActionID,true];                
            } else
            {
                if ( !alive _dude or
                    (_dude in (_treeProxy getVariable "climbers") 
                    and _hasClimbAction == "yes" 
                    and ((_dude distance2d _tree) > 8 or getposatl _dude select 2 > .3))) then
                {
                    _dude removeAction (_dude getVariable "ClimbUpActionID");
                    if ( !alive _dude) then {removeAllActions _dude;};
                     _dude setVariable ["hasClimbAction", "no", true];
                    _treeProxy setVariable ["climbers",(_treeProxy getVariable "climbers")-[_dude],true];
                };
            };
        } foreach _nearDudes;
    };
};