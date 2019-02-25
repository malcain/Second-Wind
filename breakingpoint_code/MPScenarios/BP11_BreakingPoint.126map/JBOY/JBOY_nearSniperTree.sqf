//JBOY_nearSniperTree
// _isNearTree = [_tree] call JBOY_nearSniperTree.sqf;
// Returns true if..
//   non-player unit is within 8 meters of tree, or, player unit is within 30 meters of tree.
params["_tree"];
_isNear = false;
//_treeProxy = objNull;
//_treeProxy = (missionNameSpace getVariable "jboySniperTreeProxies") select ((missionNameSpace getVariable "jboySniperTrees") find _tree);
//diag_log ["_tree",_tree,player distance2d _tree,missionNameSpace getVariable "jboySniperTrees"];

if ((count (missionNameSpace getVariable "jboySniperTrees")) > 0) then
{
    if (_tree in (missionNameSpace getVariable "jboySniperTrees")) then
    {
        if ( (({(getposatl _x select 2) < 1  // unit not in tree
              and alive _x 
              and (_x distance2d _tree) < 8} count units group player) >0) // some unit in group near tree
             and  (player distance2d _tree) < 30) then
        {
            _isNear = true;
        };
    };
};
//diag_log ["exit",_isNear];

_isNear
