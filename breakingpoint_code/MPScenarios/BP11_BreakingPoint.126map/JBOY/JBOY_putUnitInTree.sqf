//JBOY_putUnitInTree.sqf
params["_unit","_treeProxy","_unitStance","_unitDir"];
_tree = _treeProxy getVariable "tree";
_pallet = _treeProxy getVariable "pallet";

_unit enableCollisionWith _tree;
_unit enableSimulation false;
_unit setpos [getpos _pallet select 0, getpos _pallet select 1, (getpos _pallet select 2) +.1];
if (!isPlayer _unit) then
{
    dostop _unit;
    _unit forceSpeed 0;
    _unit setUnitPos _unitStance;
    _unit setdir _unitDir;
};
sleep .1;
_unit enableSimulation true;  
_unit setVariable ["jboyTreeProxy", _treeProxy, true];
_d = [_unit] execvm "JBOY\JBOY_climbDownAddAction.sqf";
_d = [_unit] execvm "JBOY\JBOY_ropeDownAddAction.sqf";
