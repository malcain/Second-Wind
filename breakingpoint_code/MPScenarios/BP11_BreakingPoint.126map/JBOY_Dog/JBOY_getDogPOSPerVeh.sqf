// _arr = [vehicle] call JBOY_getDogPOSPerVeh.sqf;
// returns:  [_attachPos,_cargoIndexToLock,_occupied]
params[_veh];
_attachPos = [];
_cargoIndexToLock = -1;
_occupied = false;
switch true do // Put this into an array []
{ 	case ((_veh isKindOf "Offroad_01_unarmed_base_F" or _veh isKindOf "Offroad_01_repair_base_F") 
           and !(_veh isKindOf "Offroad_01_military_base_F") ):
        {_attachPos = [.45,-1.6,-.67];
        _cargoIndexToLock = 1;
        //_veh  lockCargo [1, true];  // prevent AI from boarding into same spot and clipping
         //hintc "c1";
        };
    case (_veh isKindOf "Offroad_02_unarmed_base_F"  ):
    {//_attachPos = [.3,-.27,-.58]; //back right seat, cargo position 1
     //_veh  lockCargo [, true];  // prevent AI from boarding into same spot and clipping
     _attachPos = [.3,.75,-.58]; //front right seat, cargo position 0
     _cargoIndexToLock = 0;
     //_veh  lockCargo [0, true];  // prevent AI from boarding into same spot and clipping
        //hintc "c2";
    };
    //case (typeOf _veh == "I_G_Offroad_01_armed_F"):  {_attachPos = [.45, -.8, -1.1]};
    case (_veh isKindOf "Offroad_01_military_base_F" and ((typeOf _veh) find "_armed")<0):   // unarmed military offroads
        {_attachPos = [.45, -1.6, -.67]; // Right rear cargo position 1
         _cargoIndexToLock = 1;
        //_veh  lockCargo [1, true];  // prevent AI from boarding into same spot and clipping
        //hintc "c3";
        };
    case (_veh isKindOf "Offroad_01_military_base_F"):   // armed military offroads
    {_attachPos = [.45, -.8, -1.2];                         
    };
    case (_veh isKindOf "Rubber_duck_base_F"):   // zodiac rescue/assault boats
    {_attachPos = [0,.3,-1.04];                         
    };
    case (_veh isKindOf "Heli_Light_01_unarmed_base_F"):   // zodiac rescue/assault boats
    {_attachPos = [.95,1.7,-.46];     
     _veh  lockCargo [2, true];  // prevent AI from boarding into same spot and clipping                 
    };         
    
    if (_cargoIndexToLock >= 0) then
    {
        {
          if (_x select 2 == _cargoIndexToLock and !(_x select 1==objNull)) then // este silla esta ocupado motherfucker
          {
diag_log ["index to lock for crew slot",_x];
            _occupied = true;
          };
        } foreach fullCrew [_veh,"",true];
        
    };
 };
[_attachPos,_cargoIndexToLock,_occupied]

 /*
fullCrew [vehicle player, "", true]

offroad: 
[[car1D,"driver",-1,[],false],
 [buddy2,"cargo",0,[],false],
 [<NULL-object>,"Turret",1,[0],true],  <<-- preferred position
 [<NULL-object>,"Turret",2,[1],true],
 [me,"Turret",3,[2],true],
 [<NULL-object>,"Turret",4,[3],true]]
zodiac:
[[<NULL-object>,"driver",-1,[],false],
 [<NULL-object>,"Turret",0,[0],true],
 [<NULL-object>,"Turret",1,[1],true],
 [<NULL-object>,"Turret",2,[2],true],
 [<NULL-object>,"Turret",3,[3],true]]
jeep:
[[<NULL-object>,"driver",-1,[],false],
[<NULL-object>,"Turret",0,[0],true],
[<NULL-object>,"Turret",1,[1],true],
[<NULL-object>,"Turret",2,[2],true]]
*/