//_dmy = [dude] execvm "JBOY\addCaneCutterFiredEH.sqf";
// This script destroys Tall Sugar Cane and Big Ferns when shot by Buckshot/Pellets
// {_d=[_x] execvm "JBOY\addCaneCutterFiredEH.sqf"} foreach units group this; 
/*
"b_sugarcane_mature_row_f.p3d"                                                                 // big sugar cane row
"b_calochlaena_f.p3d"                                                                         // "b_calochlaena_f.p3d" big fern
"t_cocosnucifera3s_tall_f.p3d","a3\vegetation_f_exp\tree\t_cocosnucifera3s_tall_f.p3d",false], //tall coco palm tree
"b_cestrum_f.p3d","a3\vegetation_f_exp\shrub\b_cestrum_f.p3d",false]                           // small dense bush
"t_cyathea_f.p3d","a3\vegetation_f_exp\tree\t_cyathea_f.p3d",false]                            //small palm tree
"b_cycas_f.p3d","a3\vegetation_f_exp\shrub\b_cycas_f.p3d",false]                               // Big based fern
b_cestrum_f  shrub

*/
params["_unit"];
_done = false;
_unit addEventHandler ["Fired", 
{
    params["_unit","_weapon","_muzzle","_mode","_ammo","_magazine","_projectile","_gunner"];
    //diag_log ["fired",_this];
    //hint format ["fired %1, %2",_magazine, str _magazine, _projectile, str _projectile];
    if ( toLower(str _magazine) find  "buck" >= 0 or toLower(str _magazine) find  "pellet" >= 0) then
    {
        //player sideChat "buckshot!";
        { 
            if (getModelInfo _x select 0 in ["b_sugarcane_mature_row_f.p3d","b_calochlaena_f.p3d","t_cyathea_f.p3d","b_cycas_f.p3d","b_leucaena_f.p3d"]) then 
            {
                if (damage _x < 1) then {nul = [_unit,_projectile] execVM "JBOY\leafEffect.sqf";};
                //nul = [_unit,_projectile] execVM "JBOY\leafEffect.sqf";
                _x setdamage 1;
            }
        } foreach nearestTerrainObjects [_unit modelToWorld [0,1.5,0], [], 1.9];  
    //};
    //if ((str _magazine) find  "buck" >= 0 ) then
    //{
        //hint "buckshot!";
        { 
            if (getModelInfo _x select 0 in ["b_sugarcane_mature_row_f.p3d","b_calochlaena_f.p3d","t_cyathea_f.p3d","b_cycas_f.p3d","b_leucaena_f.p3d"]) then 
            {
                if (damage _x < 1) then {nul = [_unit,_projectile] execVM "JBOY\leafEffect.sqf";};
                //nul = [_unit,_projectile] execVM "JBOY\leafEffect.sqf";
                _x setdamage 1;
             }
        } foreach nearestTerrainObjects [_unit modelToWorld [0,3,0], [], 1.9];  
    //};
    //if ((str _magazine) find  "buck" >= 0 ) then
    //{
        //hint "buckshot!";
        { 
            if (getModelInfo _x select 0 in ["b_sugarcane_mature_row_f.p3d","b_calochlaena_f.p3d","t_cyathea_f.p3d","b_cycas_f.p3d","b_leucaena_f.p3d"]) then 
            {
                if (damage _x <= .5) then {nul = [_unit,_projectile] execVM "JBOY\leafEffect.sqf";};
                //nul = [_unit,_projectile] execVM "JBOY\leafEffect.sqf";
                _x setdamage 1;
            }
        } foreach nearestTerrainObjects [_unit modelToWorld [0,4,0], [], 1.9];  
        { 
            if (getModelInfo _x select 0 in ["b_calochlaena_f.p3d","t_cyathea_f.p3d","b_cycas_f.p3d","b_leucaena_f.p3d"]) then 
            {
                if (damage _x <= .5) then {nul = [_unit,_projectile] execVM "JBOY\leafEffect.sqf";};
                //nul = [_unit,_projectile] execVM "JBOY\leafEffect.sqf";
                _x setdamage 1;
            }
        } foreach nearestTerrainObjects [_unit modelToWorld [0,5,0], [], 1.9];  
		
		// Drop small trees if cursor on them and they are close.  inocarpus can't be destroyed though...
		if !(isNull cursorObject) then
		{
			_tree = cursorObject;
			if (getModelInfo _tree select 0 in ["t_cyathea_f.p3d","t_inocarpus_f.p3d","t_leucaena_f.p3d","b_sugarcane_sapling_row_f.p3d"] and _unit distance _tree < 5.2) then 
			{
					if (damage _tree <= 9) then {nul = [_unit,_projectile] execVM "JBOY\leafEffect.sqf";};
					//nul = [_unit,_projectile] execVM "JBOY\leafEffect.sqf";
					_tree setdamage 1;
			};
		};
    };
    if ((str _projectile) find  "grenade" >= 0 or (str _projectile) find  "mini" >= 0) then
    {
        NADE = _projectile;
        //systemchat format ["_projectile=%1",_projectile];
        dmy=[_projectile] spawn 
        {
            params["_nade"];
            _pos =  getpos _nade;
            _explodePos = _pos;
            //hint format ["init _pos=%1",str _pos];
            while {alive _nade and (getpos _nade select 0) > 0} do
            {
               _explodePos = _pos;
               sleep .1;
               _pos = getpos  _nade;
            };
            sleep .1;
            //systemchat format ["_explodePos=%1",_explodePos];
            { 
                if (getModelInfo _x select 0 in ["b_sugarcane_mature_row_f.p3d","b_calochlaena_f.p3d","t_cyathea_f.p3d"]) then 
                {
                    //if (damage _x <= .5) then {nul = [_unit,_projectile] execVM "JBOY\leafEffect.sqf";};
                    //nul = [_unit,_projectile] execVM "JBOY\leafEffect.sqf";
                    _x setdamage 1;
                    _crater = createSimpleObject ["a3\data_f\krater.p3d", getpos _x]; 
                    _crater setpos _explodePos;

                }
            } foreach nearestTerrainObjects [_explodePos, [], 3.5];
        };
                //player setposatl _explodepos;
    };
}];
