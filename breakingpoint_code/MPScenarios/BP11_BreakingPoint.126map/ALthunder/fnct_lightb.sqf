// by ALIAS

fnc_lit = {
private ["_poz_sky","_intens_vf","_lum_fulg_w"];
_poz_sky = _this select 0;

_lum_fulg_w = "#lightpoint" createvehiclelocal _poz_sky;_lum_fulg_w setLightDayLight true;_lum_fulg_w setLightUseFlare false;_lum_fulg_w setLightFlareSize 100;	_lum_fulg_w setLightFlareMaxDistance 2000;	
_lum_fulg_w setLightAmbient[0.5,0.5,1];	_lum_fulg_w setLightColor[0.8,0.8,1];_lum_fulg_w setLightAttenuation [0,0,0,0,0,4000];  _lum_fulg_w setLightIntensity	2000;
_lum_fulg_w setLightBrightness	300+random 100;	sleep 0.1+random 0.1;	_lum_fulg_w setLightBrightness 50+ random 100;	sleep 0.1;	_lum_fulg_w setLightBrightness	300+random 300;
sleep 0.2;	_lum_fulg_w setLightBrightness 50;	_lum_fulg_w setLightIntensity 2500 + random 1000;_intens_vf = 700+random 110;_lum_fulg_w setLightBrightness	_intens_vf;
	while {_intens_vf>0} do 
	{
	_intens_vf = _intens_vf-20;
	_lum_fulg_w setLightIntensity 0;
	_lum_fulg_w setLightBrightness _intens_vf;
	sleep 0.001;
	};	
	_lum_fulg_w setLightBrightness 0;	_lum_fulg_w setLightIntensity  0;	deleteVehicle _lum_fulg_w;
};

fnc_branched_light_1 = {
private ["_poz_sky","_branch_1","_branch_2","_branch_3","_branch_4","_branch_5","_branch_51","_branch_52","_branch_6","_branch_7","_branch_8","_branch_81","_branch_82","_branch_83","_branch_84","_branch_85","_branch_86","_branch_9","_branch_10","_branch_11","_branch_12","_branch_13"];
_poz_sky = _this select 0;
[_poz_sky] spawn fnc_lit;
_branch_1 = createSimpleObject ["A3\data_f\blesk1.p3d", _poz_sky];
sleep 0.001;_branch_2 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+45, (_poz_sky select 1)-9, (_poz_sky select 2)-120]];
sleep 0.001;_branch_2 setdir 90;_branch_3 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+47, (_poz_sky select 1), (_poz_sky select 2)-240]];
sleep 0.001;_branch_3 setdir 180;_branch_4 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+41, (_poz_sky select 1), (_poz_sky select 2)-360]];
_branch_4 setdir 90;sleep 0.001;_branch_5 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+50, (_poz_sky select 1)+45, (_poz_sky select 2)-480]];
sleep 0.01;_branch_51 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0), (_poz_sky select 1)+8, (_poz_sky select 2)-480]];  
_branch_51 setVectorUp [0.5, 0.5, 0.5];sleep 0.01;_branch_52 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)-50, (_poz_sky select 1)-60, (_poz_sky select 2)-550]];    
sleep 0.01;_branch_52 setVectorUp [0.6,0.3,0.5];_branch_6 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+55, (_poz_sky select 2)-600]]; 
_branch_6 setdir 270;sleep 0.001;_branch_7 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+92, (_poz_sky select 1)+60, (_poz_sky select 2)-720]];  
_branch_7 setdir 180;sleep 0.001;_branch_8 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+50, (_poz_sky select 2)-840]];   
_branch_8 setdir 60;sleep 0.01;_branch_81 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+110, (_poz_sky select 1)+110, (_poz_sky select 2)-840]];    
_branch_81 setVectorUp [0,-1,0.5];sleep 0.001;_branch_82 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+60, (_poz_sky select 1)+180, (_poz_sky select 2)-920]]; 
sleep 0.001;_branch_82 setVectorUp [0.5,-1,0.8];_branch_83 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)-30, (_poz_sky select 1)+260, (_poz_sky select 2)-970]];    
_branch_83 setVectorUp [0.3,-0.5,0.1];sleep 0.001;_branch_84 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)-70, (_poz_sky select 1)+370, (_poz_sky select 2)-980]];      
_branch_84 setVectorUp [0.3,-0.5,0.1];sleep 0.001;_branch_85 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+5, (_poz_sky select 1)+200, (_poz_sky select 2)-1010]];        
_branch_85 setVectorUp [0.3,-0.5,0.1];sleep 0.01;_branch_85 setdir 180;_branch_86 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)-37, (_poz_sky select 1)+191, (_poz_sky select 2)-1130]];          
_branch_86 setVectorUp [0.3,-0.5,0.1];_branch_86 setdir 90;sleep 0.001;_branch_9 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+50, (_poz_sky select 1)+80, (_poz_sky select 2)-960]]; 
_branch_9 setdir 270;sleep 0.001;_branch_10 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+48,(_poz_sky select 1)+72,(_poz_sky select 2)-1080]];
sleep 0.001;_branch_11 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+47,(_poz_sky select 1)+50,(_poz_sky select 2)-1200]];
_branch_11 setdir 320;sleep 0.001;_branch_12 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+50, (_poz_sky select 1)+60, (_poz_sky select 2)-1320]];
sleep 0.001;_branch_13 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+47,(_poz_sky select 1)+49,(_poz_sky select 2)-1440]]; _branch_13 setdir 60;
sleep 0.2;
deleteVehicle _branch_1;sleep 0.001;deleteVehicle _branch_2;sleep 0.001;deleteVehicle _branch_3;sleep 0.001;deleteVehicle _branch_4;sleep 0.001;deleteVehicle _branch_5;
sleep 0.001;deleteVehicle _branch_51;sleep 0.001;deleteVehicle _branch_52;sleep 0.001;deleteVehicle _branch_6;sleep 0.001;deleteVehicle _branch_7;sleep 0.001;
deleteVehicle _branch_8;sleep 0.001;deleteVehicle _branch_81;sleep 0.001;deleteVehicle _branch_82;sleep 0.001;deleteVehicle _branch_83;sleep 0.001;deleteVehicle _branch_84;
sleep 0.001;deleteVehicle _branch_85;sleep 0.001;deleteVehicle _branch_86;sleep 0.001;deleteVehicle _branch_9;sleep 0.001;deleteVehicle _branch_10;sleep 0.001;
deleteVehicle _branch_11;sleep 0.001;deleteVehicle _branch_12;sleep 0.001;deleteVehicle _branch_13;
};

fnc_branched_light_11 = {
private ["_poz_sky","_branch_1","_branch_2","_branch_3","_branch_4","_branch_5","_branch_51","_branch_52","_branch_6","_branch_7","_branch_8","_branch_81","_branch_82","_branch_83","_branch_84","_branch_85","_branch_86","_branch_9","_branch_10","_branch_11","_branch_12","_branch_13"];
_poz_sky = _this select 0;
[_poz_sky] spawn fnc_lit;
_branch_1 = createSimpleObject ["A3\data_f\blesk1.p3d", _poz_sky];
_branch_2 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+45, (_poz_sky select 1)-9, (_poz_sky select 2)-120]];_branch_3 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+47, (_poz_sky select 1), (_poz_sky select 2)-240]];
_branch_4 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+41, (_poz_sky select 1), (_poz_sky select 2)-360]];_branch_4 setdir 90;
_branch_5 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+50, (_poz_sky select 1)+45, (_poz_sky select 2)-480]];_branch_51 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0), (_poz_sky select 1)+8, (_poz_sky select 2)-480]];  
_branch_51 setVectorUp [0.5, 0.5, 0.5];_branch_52 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)-50, (_poz_sky select 1)-60, (_poz_sky select 2)-550]];    
_branch_52 setVectorUp [0.6,0.3,0.5];_branch_6 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+55, (_poz_sky select 2)-600]]; 
_branch_6 setdir 270;_branch_7 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+92, (_poz_sky select 1)+60, (_poz_sky select 2)-720]];  
_branch_7 setdir 180;_branch_8 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+50, (_poz_sky select 2)-840]];   
_branch_8 setdir 60;_branch_81 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+110, (_poz_sky select 1)+110, (_poz_sky select 2)-840]];    
_branch_81 setVectorUp [0,-1,0.5];_branch_82 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+60, (_poz_sky select 1)+180, (_poz_sky select 2)-920]]; 
_branch_82 setVectorUp [0.5,-1,0.8];_branch_83 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)-30, (_poz_sky select 1)+260, (_poz_sky select 2)-970]];    
_branch_83 setVectorUp [0.3,-0.5,0.1];_branch_84 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)-70, (_poz_sky select 1)+370, (_poz_sky select 2)-980]];      
_branch_84 setVectorUp [0.3,-0.5,0.1];_branch_85 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+5, (_poz_sky select 1)+200, (_poz_sky select 2)-1010]];        
_branch_85 setVectorUp [0.3,-0.5,0.1];_branch_85 setdir 180;_branch_86 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)-37, (_poz_sky select 1)+191, (_poz_sky select 2)-1130]];          
_branch_86 setVectorUp [0.3,-0.5,0.1];_branch_86 setdir 90;_branch_9 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+50, (_poz_sky select 1)+80, (_poz_sky select 2)-960]]; 
_branch_9 setdir 270;_branch_10 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+48,(_poz_sky select 1)+72,(_poz_sky select 2)-1080]];
_branch_11 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+47,(_poz_sky select 1)+50,(_poz_sky select 2)-1200]];_branch_11 setdir 320;
_branch_12 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+50, (_poz_sky select 1)+60, (_poz_sky select 2)-1320]];
_branch_13 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+47,(_poz_sky select 1)+49,(_poz_sky select 2)-1440]]; _branch_13 setdir 60;
sleep 0.01;
deleteVehicle _branch_1;deleteVehicle _branch_2;deleteVehicle _branch_3;deleteVehicle _branch_4;deleteVehicle _branch_5;deleteVehicle _branch_51;deleteVehicle _branch_52;
deleteVehicle _branch_6;deleteVehicle _branch_7;deleteVehicle _branch_8;deleteVehicle _branch_81;deleteVehicle _branch_82;deleteVehicle _branch_83;deleteVehicle _branch_84;
deleteVehicle _branch_85;deleteVehicle _branch_86;deleteVehicle _branch_9;deleteVehicle _branch_10;deleteVehicle _branch_11;deleteVehicle _branch_12;deleteVehicle _branch_13;
sleep 0.1;
_branch_1 = createSimpleObject ["A3\data_f\blesk1.p3d", _poz_sky];_branch_2 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+45, (_poz_sky select 1)-9, (_poz_sky select 2)-120]];
_branch_3 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+47, (_poz_sky select 1), (_poz_sky select 2)-240]];_branch_4 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+41, (_poz_sky select 1), (_poz_sky select 2)-360]];
_branch_4 setdir 90;_branch_5 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+50, (_poz_sky select 1)+45, (_poz_sky select 2)-480]];
_branch_51 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0), (_poz_sky select 1)+8, (_poz_sky select 2)-480]];  _branch_51 setVectorUp [0.5, 0.5, 0.5];
_branch_52 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)-50, (_poz_sky select 1)-60, (_poz_sky select 2)-550]];_branch_52 setVectorUp [0.6,0.3,0.5];
_branch_6 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+55, (_poz_sky select 2)-600]]; _branch_6 setdir 270;
_branch_7 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+92, (_poz_sky select 1)+60, (_poz_sky select 2)-720]]; _branch_7 setdir 180;
_branch_8 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+50, (_poz_sky select 2)-840]]; _branch_8 setdir 60;
_branch_81 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+110, (_poz_sky select 1)+110, (_poz_sky select 2)-840]];_branch_81 setVectorUp [0,-1,0.5];
_branch_82 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+60, (_poz_sky select 1)+180, (_poz_sky select 2)-920]]; _branch_82 setVectorUp [0.5,-1,0.8];
_branch_83 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)-30, (_poz_sky select 1)+260, (_poz_sky select 2)-970]]; _branch_83 setVectorUp [0.3,-0.5,0.1];
_branch_84 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)-70, (_poz_sky select 1)+370, (_poz_sky select 2)-980]]; _branch_84 setVectorUp [0.3,-0.5,0.1];
_branch_85 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+5, (_poz_sky select 1)+200, (_poz_sky select 2)-1010]]; _branch_85 setVectorUp [0.3,-0.5,0.1];  
_branch_85 setdir 180;_branch_86 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)-37, (_poz_sky select 1)+191, (_poz_sky select 2)-1130]];          
_branch_86 setVectorUp [0.3,-0.5,0.1];_branch_86 setdir 90;_branch_9 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+50, (_poz_sky select 1)+80, (_poz_sky select 2)-960]]; 
_branch_9 setdir 270;_branch_10 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+48,(_poz_sky select 1)+72,(_poz_sky select 2)-1080]];
_branch_11 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+47,(_poz_sky select 1)+50,(_poz_sky select 2)-1200]];_branch_11 setdir 320;
_branch_12 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+50, (_poz_sky select 1)+60, (_poz_sky select 2)-1320]];_branch_13 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+47,(_poz_sky select 1)+49,(_poz_sky select 2)-1440]]; _branch_13 setdir 60;
sleep 0.2;
deleteVehicle _branch_1;deleteVehicle _branch_2;deleteVehicle _branch_3;deleteVehicle _branch_4;deleteVehicle _branch_5;deleteVehicle _branch_51;deleteVehicle _branch_52;
deleteVehicle _branch_6;deleteVehicle _branch_7;deleteVehicle _branch_8;deleteVehicle _branch_81;deleteVehicle _branch_82;deleteVehicle _branch_83;deleteVehicle _branch_84;
deleteVehicle _branch_85;deleteVehicle _branch_86;deleteVehicle _branch_9;deleteVehicle _branch_10;deleteVehicle _branch_11;deleteVehicle _branch_12;deleteVehicle _branch_13;
};

fnc_branched_light_2 = {
private ["_poz_sky","_branch_1","_branch_2","_branch_3","_branch_4","_branch_5","_branch_51","_branch_52","_branch_6","_branch_7","_branch_8","_branch_81","_branch_82","_branch_83","_branch_84","_branch_85","_branch_86","_branch_9","_branch_10","_branch_11","_branch_12","_branch_13"];
_poz_sky = _this select 0;
[_poz_sky] spawn fnc_lit;
_branch_1 = createSimpleObject ["A3\data_f\blesk1.p3d", _poz_sky];sleep 0.001;_branch_2 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+45, (_poz_sky select 1)-9, (_poz_sky select 2)-120]];
sleep 0.001;_branch_2 setdir 90;_branch_3 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+47, (_poz_sky select 1), (_poz_sky select 2)-240]];
sleep 0.001;_branch_3 setdir 180;_branch_4 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+41, (_poz_sky select 1), (_poz_sky select 2)-360]];
_branch_4 setdir 90;sleep 0.001;_branch_5 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+50, (_poz_sky select 1)+45, (_poz_sky select 2)-480]];
sleep 0.001;_branch_6 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+55, (_poz_sky select 2)-600]]; _branch_6 setdir 270;
sleep 0.001;_branch_7 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+92, (_poz_sky select 1)+60, (_poz_sky select 2)-720]];  _branch_7 setdir 180;
sleep 0.001;_branch_8 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+50, (_poz_sky select 2)-840]];   _branch_8 setdir 60;
sleep 0.001;_branch_9 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+50, (_poz_sky select 1)+80, (_poz_sky select 2)-960]]; _branch_9 setdir 270;
sleep 0.001;_branch_10 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+48,(_poz_sky select 1)+72,(_poz_sky select 2)-1080]];sleep 0.001;
_branch_11 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+47,(_poz_sky select 1)+50,(_poz_sky select 2)-1200]];_branch_11 setdir 320;
sleep 0.001;_branch_12 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+50, (_poz_sky select 1)+60, (_poz_sky select 2)-1320]];
sleep 0.001;_branch_13 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+47,(_poz_sky select 1)+49,(_poz_sky select 2)-1440]]; _branch_13 setdir 60;
sleep 0.2;
deleteVehicle _branch_1;sleep 0.001;deleteVehicle _branch_2;sleep 0.001;deleteVehicle _branch_3;sleep 0.001;deleteVehicle _branch_4;sleep 0.001;deleteVehicle _branch_5;
sleep 0.001;deleteVehicle _branch_6;sleep 0.001;deleteVehicle _branch_7;sleep 0.001;deleteVehicle _branch_8;sleep 0.001;deleteVehicle _branch_9;sleep 0.001;deleteVehicle _branch_10;
sleep 0.001;deleteVehicle _branch_11;sleep 0.001;deleteVehicle _branch_12;sleep 0.001;deleteVehicle _branch_13;
};

fnc_branched_light_21 = {
private ["_poz_sky","_branch_1","_branch_2","_branch_3","_branch_4","_branch_5","_branch_51","_branch_52","_branch_6","_branch_7","_branch_8","_branch_81","_branch_82","_branch_83","_branch_84","_branch_85","_branch_86","_branch_9","_branch_10","_branch_11","_branch_12","_branch_13"];
_poz_sky = _this select 0;
[_poz_sky] spawn fnc_lit;
_branch_1 = createSimpleObject ["A3\data_f\blesk1.p3d", _poz_sky];_branch_2 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+45, (_poz_sky select 1)-9, (_poz_sky select 2)-120]];
_branch_2 setdir 90;_branch_3 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+47, (_poz_sky select 1), (_poz_sky select 2)-240]];
_branch_3 setdir 180;_branch_4 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+41, (_poz_sky select 1), (_poz_sky select 2)-360]];
_branch_4 setdir 90;_branch_5 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+50, (_poz_sky select 1)+45, (_poz_sky select 2)-480]];
_branch_6 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+55, (_poz_sky select 2)-600]]; 
_branch_6 setdir 270;_branch_7 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+92, (_poz_sky select 1)+60, (_poz_sky select 2)-720]];  
_branch_7 setdir 180;_branch_8 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+50, (_poz_sky select 2)-840]];   
_branch_8 setdir 60;_branch_9 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+50, (_poz_sky select 1)+80, (_poz_sky select 2)-960]]; 
_branch_9 setdir 270;_branch_10 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+48,(_poz_sky select 1)+72,(_poz_sky select 2)-1080]];
_branch_11 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+47,(_poz_sky select 1)+50,(_poz_sky select 2)-1200]];
_branch_11 setdir 320;_branch_12 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+50, (_poz_sky select 1)+60, (_poz_sky select 2)-1320]];
_branch_13 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+47,(_poz_sky select 1)+49,(_poz_sky select 2)-1440]]; _branch_13 setdir 60;
sleep 0.01;
deleteVehicle _branch_1;deleteVehicle _branch_2;deleteVehicle _branch_3;deleteVehicle _branch_4;deleteVehicle _branch_5;deleteVehicle _branch_6;deleteVehicle _branch_7;
deleteVehicle _branch_8;deleteVehicle _branch_9;deleteVehicle _branch_10;deleteVehicle _branch_11;deleteVehicle _branch_12;deleteVehicle _branch_13;
sleep 0.1;
_branch_1 = createSimpleObject ["A3\data_f\blesk1.p3d", _poz_sky];_branch_2 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+45, (_poz_sky select 1)-9, (_poz_sky select 2)-120]];
_branch_2 setdir 90;_branch_3 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+47, (_poz_sky select 1), (_poz_sky select 2)-240]];
_branch_3 setdir 180;_branch_4 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+41, (_poz_sky select 1), (_poz_sky select 2)-360]];
_branch_4 setdir 90;_branch_5 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+50, (_poz_sky select 1)+45, (_poz_sky select 2)-480]];
_branch_6 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+55, (_poz_sky select 2)-600]]; 
_branch_6 setdir 270;_branch_7 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+92, (_poz_sky select 1)+60, (_poz_sky select 2)-720]];  
_branch_7 setdir 180;_branch_8 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+50, (_poz_sky select 2)-840]];   
_branch_8 setdir 60;_branch_9 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+50, (_poz_sky select 1)+80, (_poz_sky select 2)-960]]; 
_branch_9 setdir 270;_branch_10 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+48,(_poz_sky select 1)+72,(_poz_sky select 2)-1080]];
_branch_11 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+47,(_poz_sky select 1)+50,(_poz_sky select 2)-1200]];
_branch_11 setdir 320;_branch_12 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+50, (_poz_sky select 1)+60, (_poz_sky select 2)-1320]];
_branch_13 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+47,(_poz_sky select 1)+49,(_poz_sky select 2)-1440]]; _branch_13 setdir 60;
sleep 0.2;
deleteVehicle _branch_1;deleteVehicle _branch_2;deleteVehicle _branch_3;deleteVehicle _branch_4;deleteVehicle _branch_5;deleteVehicle _branch_6;deleteVehicle _branch_7;
deleteVehicle _branch_8;deleteVehicle _branch_9;deleteVehicle _branch_10;deleteVehicle _branch_11;deleteVehicle _branch_12;deleteVehicle _branch_13;
};

fnc_branched_light_3 = {
private ["_poz_sky","_branch_1","_branch_2","_branch_3","_branch_4","_branch_5","_branch_51","_branch_52","_branch_6","_branch_7","_branch_8","_branch_81","_branch_82","_branch_83","_branch_84","_branch_85","_branch_86","_branch_9","_branch_10","_branch_11","_branch_12","_branch_13"];
_poz_sky = _this select 0;[_poz_sky] spawn fnc_lit;
_branch_1 = createSimpleObject ["A3\data_f\blesk1.p3d", _poz_sky];sleep 0.001;
_branch_2 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+45, (_poz_sky select 1)-9, (_poz_sky select 2)-120]];sleep 0.001;_branch_2 setdir 90;
_branch_3 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+47, (_poz_sky select 1), (_poz_sky select 2)-240]];sleep 0.001;
_branch_3 setdir 180;_branch_4 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+41, (_poz_sky select 1), (_poz_sky select 2)-360]];
_branch_4 setdir 90;sleep 0.001;_branch_5 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+50, (_poz_sky select 1)+45, (_poz_sky select 2)-480]];
sleep 0.01;_branch_51 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0), (_poz_sky select 1)+8, (_poz_sky select 2)-480]];  _branch_51 setVectorUp [0.5, 0.5, 0.5];
sleep 0.01;_branch_52 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)-50, (_poz_sky select 1)-60, (_poz_sky select 2)-550]];    sleep 0.01;_branch_52 setVectorUp [0.6,0.3,0.5];
sleep 0.2;
deleteVehicle _branch_1;sleep 0.001;deleteVehicle _branch_2;sleep 0.001;deleteVehicle _branch_3;sleep 0.001;deleteVehicle _branch_4;sleep 0.001;deleteVehicle _branch_5;
sleep 0.001;deleteVehicle _branch_51;sleep 0.001;deleteVehicle _branch_52;
};

fnc_branched_light_31 = {
private ["_poz_sky","_branch_1","_branch_2","_branch_3","_branch_4","_branch_5","_branch_51","_branch_52","_branch_6","_branch_7","_branch_8","_branch_81","_branch_82","_branch_83","_branch_84","_branch_85","_branch_86","_branch_9","_branch_10","_branch_11","_branch_12","_branch_13"];
_poz_sky = _this select 0;[_poz_sky] spawn fnc_lit;
_branch_1 = createSimpleObject ["A3\data_f\blesk1.p3d", _poz_sky];_branch_2 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+45, (_poz_sky select 1)-9, (_poz_sky select 2)-120]];
_branch_2 setdir 90;_branch_3 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+47, (_poz_sky select 1), (_poz_sky select 2)-240]];_branch_3 setdir 180;
_branch_4 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+41, (_poz_sky select 1), (_poz_sky select 2)-360]];_branch_4 setdir 90;
_branch_5 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+50, (_poz_sky select 1)+45, (_poz_sky select 2)-480]];_branch_51 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0), (_poz_sky select 1)+8, (_poz_sky select 2)-480]];  
_branch_51 setVectorUp [0.5, 0.5, 0.5];_branch_52 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)-50, (_poz_sky select 1)-60, (_poz_sky select 2)-550]];    _branch_52 setVectorUp [0.6,0.3,0.5];
sleep 0.01;
deleteVehicle _branch_1;deleteVehicle _branch_2;deleteVehicle _branch_3;deleteVehicle _branch_4;deleteVehicle _branch_5;deleteVehicle _branch_51;deleteVehicle _branch_52;
sleep 0.1;
_branch_1 = createSimpleObject ["A3\data_f\blesk1.p3d", _poz_sky];_branch_2 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+45, (_poz_sky select 1)-9, (_poz_sky select 2)-120]];
_branch_2 setdir 90;_branch_3 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+47, (_poz_sky select 1), (_poz_sky select 2)-240]];_branch_3 setdir 180;
_branch_4 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+41, (_poz_sky select 1), (_poz_sky select 2)-360]];_branch_4 setdir 90;
_branch_5 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+50, (_poz_sky select 1)+45, (_poz_sky select 2)-480]];_branch_51 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0), (_poz_sky select 1)+8, (_poz_sky select 2)-480]];  
_branch_51 setVectorUp [0.5, 0.5, 0.5];_branch_52 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)-50, (_poz_sky select 1)-60, (_poz_sky select 2)-550]];    _branch_52 setVectorUp [0.6,0.3,0.5];
sleep 0.2;
deleteVehicle _branch_1;deleteVehicle _branch_2;deleteVehicle _branch_3;deleteVehicle _branch_4;deleteVehicle _branch_5;deleteVehicle _branch_51;deleteVehicle _branch_52;
};


fnc_branched_light_4 = {
private ["_poz_sky","_branch_1","_branch_2","_branch_3","_branch_4","_branch_5","_branch_51","_branch_52","_branch_6","_branch_7","_branch_8","_branch_81","_branch_82","_branch_83","_branch_84","_branch_85","_branch_86","_branch_9","_branch_10","_branch_11","_branch_12","_branch_13"];
_poz_sky = _this select 0;[_poz_sky] spawn fnc_lit;_branch_1 = createSimpleObject ["A3\data_f\blesk1.p3d", _poz_sky];sleep 0.001;
_branch_2 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+45, (_poz_sky select 1)-9, (_poz_sky select 2)-120]];sleep 0.001;
_branch_2 setdir 90;_branch_3 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+47, (_poz_sky select 1), (_poz_sky select 2)-240]];sleep 0.001;
_branch_3 setdir 180;_branch_4 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+41, (_poz_sky select 1), (_poz_sky select 2)-360]];_branch_4 setdir 90;
sleep 0.001;_branch_5 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+50, (_poz_sky select 1)+45, (_poz_sky select 2)-480]];sleep 0.01;
_branch_6 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+55, (_poz_sky select 2)-600]]; _branch_6 setdir 270;
sleep 0.001;_branch_7 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+92, (_poz_sky select 1)+60, (_poz_sky select 2)-720]];  _branch_7 setdir 180;
sleep 0.001;_branch_8 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+50, (_poz_sky select 2)-840]];   _branch_8 setdir 60;
sleep 0.01;_branch_81 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+110, (_poz_sky select 1)+110, (_poz_sky select 2)-840]];    _branch_81 setVectorUp [0,-1,0.5];
sleep 0.001;_branch_82 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+60, (_poz_sky select 1)+180, (_poz_sky select 2)-920]]; sleep 0.001;
_branch_82 setVectorUp [0.5,-1,0.8];_branch_83 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)-30, (_poz_sky select 1)+260, (_poz_sky select 2)-970]];    
_branch_83 setVectorUp [0.3,-0.5,0.1];sleep 0.001;_branch_84 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)-70, (_poz_sky select 1)+370, (_poz_sky select 2)-980]];      
_branch_84 setVectorUp [0.3,-0.5,0.1];sleep 0.001;_branch_85 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+5, (_poz_sky select 1)+200, (_poz_sky select 2)-1010]];        
_branch_85 setVectorUp [0.3,-0.5,0.1];  sleep 0.01;_branch_85 setdir 180;_branch_86 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)-37, (_poz_sky select 1)+191, (_poz_sky select 2)-1130]];          
_branch_86 setVectorUp [0.3,-0.5,0.1];    _branch_86 setdir 90;
sleep 0.2;
deleteVehicle _branch_1;sleep 0.001;deleteVehicle _branch_2;sleep 0.001;deleteVehicle _branch_3;sleep 0.001;deleteVehicle _branch_4;sleep 0.001;deleteVehicle _branch_5;
sleep 0.001;deleteVehicle _branch_6;sleep 0.001;deleteVehicle _branch_7;sleep 0.001;deleteVehicle _branch_8;sleep 0.001;deleteVehicle _branch_81;sleep 0.001;deleteVehicle _branch_82;
sleep 0.001;deleteVehicle _branch_83;sleep 0.001;deleteVehicle _branch_84;sleep 0.001;deleteVehicle _branch_85;sleep 0.001;deleteVehicle _branch_86;
};

fnc_branched_light_41 = {
private ["_poz_sky","_branch_1","_branch_2","_branch_3","_branch_4","_branch_5","_branch_51","_branch_52","_branch_6","_branch_7","_branch_8","_branch_81","_branch_82","_branch_83","_branch_84","_branch_85","_branch_86","_branch_9","_branch_10","_branch_11","_branch_12","_branch_13"];
_poz_sky = _this select 0;[_poz_sky] spawn fnc_lit;
_branch_1 = createSimpleObject ["A3\data_f\blesk1.p3d", _poz_sky];_branch_2 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+45, (_poz_sky select 1)-9, (_poz_sky select 2)-120]];
_branch_2 setdir 90;_branch_3 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+47, (_poz_sky select 1), (_poz_sky select 2)-240]];
_branch_3 setdir 180;_branch_4 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+41, (_poz_sky select 1), (_poz_sky select 2)-360]];_branch_4 setdir 90;
_branch_5 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+50, (_poz_sky select 1)+45, (_poz_sky select 2)-480]];
_branch_6 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+55, (_poz_sky select 2)-600]]; _branch_6 setdir 270;
_branch_7 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+92, (_poz_sky select 1)+60, (_poz_sky select 2)-720]];  _branch_7 setdir 180;
_branch_8 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+50, (_poz_sky select 2)-840]];   _branch_8 setdir 60;
_branch_81 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+110, (_poz_sky select 1)+110, (_poz_sky select 2)-840]];    _branch_81 setVectorUp [0,-1,0.5];
_branch_82 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+60, (_poz_sky select 1)+180, (_poz_sky select 2)-920]]; _branch_82 setVectorUp [0.5,-1,0.8];
_branch_83 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)-30, (_poz_sky select 1)+260, (_poz_sky select 2)-970]];    _branch_83 setVectorUp [0.3,-0.5,0.1];
_branch_84 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)-70, (_poz_sky select 1)+370, (_poz_sky select 2)-980]]; _branch_84 setVectorUp [0.3,-0.5,0.1];
_branch_85 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+5, (_poz_sky select 1)+200, (_poz_sky select 2)-1010]]; _branch_85 setVectorUp [0.3,-0.5,0.1];  
_branch_85 setdir 180;_branch_86 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)-37, (_poz_sky select 1)+191, (_poz_sky select 2)-1130]];          
_branch_86 setVectorUp [0.3,-0.5,0.1];    _branch_86 setdir 90;
sleep 0.01;
deleteVehicle _branch_1;deleteVehicle _branch_2;deleteVehicle _branch_3;deleteVehicle _branch_4;deleteVehicle _branch_5;deleteVehicle _branch_6;deleteVehicle _branch_7;
deleteVehicle _branch_8;deleteVehicle _branch_81;deleteVehicle _branch_82;deleteVehicle _branch_83;deleteVehicle _branch_84;deleteVehicle _branch_85;deleteVehicle _branch_86;
sleep 0.1;
_branch_1 = createSimpleObject ["A3\data_f\blesk1.p3d", _poz_sky];_branch_2 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+45, (_poz_sky select 1)-9, (_poz_sky select 2)-120]];
_branch_2 setdir 90;_branch_3 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+47, (_poz_sky select 1), (_poz_sky select 2)-240]];
_branch_3 setdir 180;_branch_4 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+41, (_poz_sky select 1), (_poz_sky select 2)-360]];_branch_4 setdir 90;
_branch_5 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+50, (_poz_sky select 1)+45, (_poz_sky select 2)-480]];
_branch_6 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+55, (_poz_sky select 2)-600]]; _branch_6 setdir 270;
_branch_7 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+92, (_poz_sky select 1)+60, (_poz_sky select 2)-720]];  _branch_7 setdir 180;
_branch_8 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+50, (_poz_sky select 2)-840]];   _branch_8 setdir 60;
_branch_81 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+110, (_poz_sky select 1)+110, (_poz_sky select 2)-840]];    _branch_81 setVectorUp [0,-1,0.5];
_branch_82 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+60, (_poz_sky select 1)+180, (_poz_sky select 2)-920]]; _branch_82 setVectorUp [0.5,-1,0.8];
_branch_83 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)-30, (_poz_sky select 1)+260, (_poz_sky select 2)-970]];    _branch_83 setVectorUp [0.3,-0.5,0.1];
_branch_84 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)-70, (_poz_sky select 1)+370, (_poz_sky select 2)-980]]; _branch_84 setVectorUp [0.3,-0.5,0.1];
_branch_85 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+5, (_poz_sky select 1)+200, (_poz_sky select 2)-1010]]; _branch_85 setVectorUp [0.3,-0.5,0.1];  
_branch_85 setdir 180;_branch_86 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)-37, (_poz_sky select 1)+191, (_poz_sky select 2)-1130]];          
_branch_86 setVectorUp [0.3,-0.5,0.1];    _branch_86 setdir 90;
sleep 0.2;
deleteVehicle _branch_1;deleteVehicle _branch_2;deleteVehicle _branch_3;deleteVehicle _branch_4;deleteVehicle _branch_5;deleteVehicle _branch_6;deleteVehicle _branch_7;
deleteVehicle _branch_8;deleteVehicle _branch_81;deleteVehicle _branch_82;deleteVehicle _branch_83;deleteVehicle _branch_84;deleteVehicle _branch_85;deleteVehicle _branch_86;
};

fnc_branched_light_5 = {
private ["_poz_sky","_branch_1","_branch_2","_branch_3","_branch_4","_branch_5","_branch_51","_branch_52","_branch_6","_branch_7","_branch_8","_branch_81","_branch_82","_branch_83","_branch_84","_branch_85","_branch_86","_branch_9","_branch_10","_branch_11","_branch_12","_branch_13"];
_poz_sky = _this select 0;[_poz_sky] spawn fnc_lit;
_branch_1 = createSimpleObject ["A3\data_f\blesk1.p3d", _poz_sky];sleep 0.001;_branch_2 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+45, (_poz_sky select 1)-9, (_poz_sky select 2)-120]];
sleep 0.001;_branch_2 setdir 90;_branch_3 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+47, (_poz_sky select 1), (_poz_sky select 2)-240]];
sleep 0.001;_branch_3 setdir 180;_branch_4 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+41, (_poz_sky select 1), (_poz_sky select 2)-360]];
_branch_4 setdir 90;sleep 0.001;_branch_5 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+50, (_poz_sky select 1)+45, (_poz_sky select 2)-480]];
sleep 0.01;_branch_6 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+55, (_poz_sky select 2)-600]]; _branch_6 setdir 270;
sleep 0.001;_branch_7 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+92, (_poz_sky select 1)+60, (_poz_sky select 2)-720]];  _branch_7 setdir 180;
sleep 0.001;_branch_8 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+50, (_poz_sky select 2)-840]];   _branch_8 setdir 60;
sleep 0.01;_branch_81 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+110, (_poz_sky select 1)+110, (_poz_sky select 2)-840]];    _branch_81 setVectorUp [0,-1,0.5];
sleep 0.2;
deleteVehicle _branch_1;sleep 0.001;deleteVehicle _branch_2;sleep 0.001;deleteVehicle _branch_3;sleep 0.001;deleteVehicle _branch_4;sleep 0.001;deleteVehicle _branch_5;
sleep 0.001;deleteVehicle _branch_6;sleep 0.001;deleteVehicle _branch_7;sleep 0.001;deleteVehicle _branch_8;sleep 0.001;deleteVehicle _branch_81;
};

fnc_branched_light_51 = {
private ["_poz_sky","_branch_1","_branch_2","_branch_3","_branch_4","_branch_5","_branch_51","_branch_52","_branch_6","_branch_7","_branch_8","_branch_81","_branch_82","_branch_83","_branch_84","_branch_85","_branch_86","_branch_9","_branch_10","_branch_11","_branch_12","_branch_13"];
_poz_sky = _this select 0;[_poz_sky] spawn fnc_lit;
_branch_1 = createSimpleObject ["A3\data_f\blesk1.p3d", _poz_sky];_branch_2 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+45, (_poz_sky select 1)-9, (_poz_sky select 2)-120]];
_branch_2 setdir 90;_branch_3 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+47, (_poz_sky select 1), (_poz_sky select 2)-240]];_branch_3 setdir 180;
_branch_4 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+41, (_poz_sky select 1), (_poz_sky select 2)-360]];_branch_4 setdir 90;
_branch_5 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+50, (_poz_sky select 1)+45, (_poz_sky select 2)-480]];
_branch_6 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+55, (_poz_sky select 2)-600]]; 
_branch_6 setdir 270;_branch_7 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+92, (_poz_sky select 1)+60, (_poz_sky select 2)-720]];  _branch_7 setdir 180;
_branch_8 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+50, (_poz_sky select 2)-840]];   _branch_8 setdir 60;
_branch_81 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+110, (_poz_sky select 1)+110, (_poz_sky select 2)-840]];    _branch_81 setVectorUp [0,-1,0.5];
sleep 0.01;
deleteVehicle _branch_1;deleteVehicle _branch_2;deleteVehicle _branch_3;deleteVehicle _branch_4;deleteVehicle _branch_5;deleteVehicle _branch_6;deleteVehicle _branch_7;
deleteVehicle _branch_8;deleteVehicle _branch_81;
sleep 0.1;
_branch_1 = createSimpleObject ["A3\data_f\blesk1.p3d", _poz_sky];_branch_2 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+45, (_poz_sky select 1)-9, (_poz_sky select 2)-120]];
_branch_2 setdir 90;_branch_3 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+47, (_poz_sky select 1), (_poz_sky select 2)-240]];_branch_3 setdir 180;
_branch_4 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+41, (_poz_sky select 1), (_poz_sky select 2)-360]];_branch_4 setdir 90;
_branch_5 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+50, (_poz_sky select 1)+45, (_poz_sky select 2)-480]];
_branch_6 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+55, (_poz_sky select 2)-600]]; 
_branch_6 setdir 270;_branch_7 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+92, (_poz_sky select 1)+60, (_poz_sky select 2)-720]];  _branch_7 setdir 180;
_branch_8 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+50, (_poz_sky select 2)-840]];   _branch_8 setdir 60;
_branch_81 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+110, (_poz_sky select 1)+110, (_poz_sky select 2)-840]];    _branch_81 setVectorUp [0,-1,0.5];
sleep 0.2;
deleteVehicle _branch_1;deleteVehicle _branch_2;deleteVehicle _branch_3;deleteVehicle _branch_4;deleteVehicle _branch_5;deleteVehicle _branch_6;deleteVehicle _branch_7;
deleteVehicle _branch_8;deleteVehicle _branch_81;
};

fnc_branched_light_6 = {
private ["_poz_sky","_branch_1","_branch_2","_branch_3","_branch_4","_branch_5","_branch_51","_branch_52","_branch_6","_branch_7","_branch_8","_branch_81","_branch_82","_branch_83","_branch_84","_branch_85","_branch_86","_branch_9","_branch_10","_branch_11","_branch_12","_branch_13"];
_poz_sky = _this select 0;[_poz_sky] spawn fnc_lit;
_branch_1 = createSimpleObject ["A3\data_f\blesk1.p3d", _poz_sky];sleep 0.001;_branch_2 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+45, (_poz_sky select 1)-9, (_poz_sky select 2)-120]];
sleep 0.001;_branch_2 setdir 90;_branch_3 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+47, (_poz_sky select 1), (_poz_sky select 2)-240]];
sleep 0.001;_branch_3 setdir 180;_branch_4 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+41, (_poz_sky select 1), (_poz_sky select 2)-360]];
_branch_4 setdir 90;sleep 0.001;_branch_5 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+50, (_poz_sky select 1)+45, (_poz_sky select 2)-480]];
sleep 0.01;_branch_6 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+55, (_poz_sky select 2)-600]]; _branch_6 setdir 270;
sleep 0.001;_branch_7 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+92, (_poz_sky select 1)+60, (_poz_sky select 2)-720]];  _branch_7 setdir 180;
sleep 0.001;_branch_8 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+50, (_poz_sky select 2)-840]];   _branch_8 setdir 60;
sleep 0.01;_branch_81 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+110, (_poz_sky select 1)+110, (_poz_sky select 2)-840]];    _branch_81 setVectorUp [0,-1,0.5];
sleep 0.001;_branch_82 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+60, (_poz_sky select 1)+180, (_poz_sky select 2)-920]]; sleep 0.001;_branch_82 setVectorUp [0.5,-1,0.8];
sleep 0.2;
deleteVehicle _branch_1;sleep 0.001;deleteVehicle _branch_2;sleep 0.001;deleteVehicle _branch_3;sleep 0.001;deleteVehicle _branch_4;sleep 0.001;deleteVehicle _branch_5;
sleep 0.001;deleteVehicle _branch_6;sleep 0.001;deleteVehicle _branch_7;sleep 0.001;deleteVehicle _branch_8;sleep 0.001;deleteVehicle _branch_81;sleep 0.001;deleteVehicle _branch_82;
};

fnc_branched_light_61 = {
private ["_poz_sky","_branch_1","_branch_2","_branch_3","_branch_4","_branch_5","_branch_51","_branch_52","_branch_6","_branch_7","_branch_8","_branch_81","_branch_82","_branch_83","_branch_84","_branch_85","_branch_86","_branch_9","_branch_10","_branch_11","_branch_12","_branch_13"];
_poz_sky = _this select 0;[_poz_sky] spawn fnc_lit;
_branch_1 = createSimpleObject ["A3\data_f\blesk1.p3d", _poz_sky];_branch_2 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+45, (_poz_sky select 1)-9, (_poz_sky select 2)-120]];
_branch_2 setdir 90;_branch_3 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+47, (_poz_sky select 1), (_poz_sky select 2)-240]];_branch_3 setdir 180;
_branch_4 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+41, (_poz_sky select 1), (_poz_sky select 2)-360]];_branch_4 setdir 90;
_branch_5 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+50, (_poz_sky select 1)+45, (_poz_sky select 2)-480]];_branch_6 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+55, (_poz_sky select 2)-600]]; 
_branch_6 setdir 270;_branch_7 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+92, (_poz_sky select 1)+60, (_poz_sky select 2)-720]];  _branch_7 setdir 180;
_branch_8 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+50, (_poz_sky select 2)-840]];   _branch_8 setdir 60;
_branch_81 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+110, (_poz_sky select 1)+110, (_poz_sky select 2)-840]];    
_branch_81 setVectorUp [0,-1,0.5];_branch_82 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+60, (_poz_sky select 1)+180, (_poz_sky select 2)-920]]; _branch_82 setVectorUp [0.5,-1,0.8];
sleep 0.01;
deleteVehicle _branch_1;deleteVehicle _branch_2;deleteVehicle _branch_3;deleteVehicle _branch_4;deleteVehicle _branch_5;deleteVehicle _branch_6;deleteVehicle _branch_7;
deleteVehicle _branch_8;deleteVehicle _branch_81;deleteVehicle _branch_82;
sleep 0.1;
_branch_1 = createSimpleObject ["A3\data_f\blesk1.p3d", _poz_sky];_branch_2 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+45, (_poz_sky select 1)-9, (_poz_sky select 2)-120]];
_branch_2 setdir 90;_branch_3 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+47, (_poz_sky select 1), (_poz_sky select 2)-240]];_branch_3 setdir 180;
_branch_4 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+41, (_poz_sky select 1), (_poz_sky select 2)-360]];_branch_4 setdir 90;
_branch_5 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+50, (_poz_sky select 1)+45, (_poz_sky select 2)-480]];_branch_6 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+55, (_poz_sky select 2)-600]]; 
_branch_6 setdir 270;_branch_7 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+92, (_poz_sky select 1)+60, (_poz_sky select 2)-720]];  _branch_7 setdir 180;
_branch_8 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+50, (_poz_sky select 2)-840]];   _branch_8 setdir 60;
_branch_81 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+110, (_poz_sky select 1)+110, (_poz_sky select 2)-840]];    
_branch_81 setVectorUp [0,-1,0.5];_branch_82 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+60, (_poz_sky select 1)+180, (_poz_sky select 2)-920]]; _branch_82 setVectorUp [0.5,-1,0.8];
sleep 0.2;
deleteVehicle _branch_1;deleteVehicle _branch_2;deleteVehicle _branch_3;deleteVehicle _branch_4;deleteVehicle _branch_5;deleteVehicle _branch_6;deleteVehicle _branch_7;
deleteVehicle _branch_8;deleteVehicle _branch_81;deleteVehicle _branch_82;
};

fnc_branched_light_7 = {
private ["_poz_sky","_branch_1","_branch_2","_branch_3","_branch_4","_branch_5","_branch_51","_branch_52","_branch_6","_branch_7","_branch_8","_branch_81","_branch_82","_branch_83","_branch_84","_branch_85","_branch_86","_branch_9","_branch_10","_branch_11","_branch_12","_branch_13"];
_poz_sky = _this select 0;[_poz_sky] spawn fnc_lit;
_branch_1 = createSimpleObject ["A3\data_f\blesk1.p3d", _poz_sky];sleep 0.001;_branch_2 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+45, (_poz_sky select 1)-9, (_poz_sky select 2)-120]];
sleep 0.001;_branch_2 setdir 90;_branch_3 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+47, (_poz_sky select 1), (_poz_sky select 2)-240]];
sleep 0.001;_branch_3 setdir 180;_branch_4 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+41, (_poz_sky select 1), (_poz_sky select 2)-360]];
_branch_4 setdir 90;sleep 0.001;_branch_5 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+50, (_poz_sky select 1)+45, (_poz_sky select 2)-480]];
sleep 0.01;_branch_6 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+55, (_poz_sky select 2)-600]]; _branch_6 setdir 270;
sleep 0.001;_branch_7 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+92, (_poz_sky select 1)+60, (_poz_sky select 2)-720]];  _branch_7 setdir 180;
sleep 0.001;_branch_8 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+50, (_poz_sky select 2)-840]];   _branch_8 setdir 60;
sleep 0.01;_branch_81 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+110, (_poz_sky select 1)+110, (_poz_sky select 2)-840]];    _branch_81 setVectorUp [0,-1,0.5];
sleep 0.001;_branch_82 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+60, (_poz_sky select 1)+180, (_poz_sky select 2)-920]]; sleep 0.001;
_branch_82 setVectorUp [0.5,-1,0.8];_branch_83 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)-30, (_poz_sky select 1)+260, (_poz_sky select 2)-970]];    
_branch_83 setVectorUp [0.3,-0.5,0.1];
sleep 0.2;
deleteVehicle _branch_1;sleep 0.001;deleteVehicle _branch_2;sleep 0.001;deleteVehicle _branch_3;sleep 0.001;deleteVehicle _branch_4;sleep 0.001;deleteVehicle _branch_5;
sleep 0.001;deleteVehicle _branch_6;sleep 0.001;deleteVehicle _branch_7;sleep 0.001;deleteVehicle _branch_8;sleep 0.001;deleteVehicle _branch_81;sleep 0.001;deleteVehicle _branch_82;
sleep 0.001;deleteVehicle _branch_83;
};

fnc_branched_light_71 = {
private ["_poz_sky","_branch_1","_branch_2","_branch_3","_branch_4","_branch_5","_branch_51","_branch_52","_branch_6","_branch_7","_branch_8","_branch_81","_branch_82","_branch_83","_branch_84","_branch_85","_branch_86","_branch_9","_branch_10","_branch_11","_branch_12","_branch_13"];
_poz_sky = _this select 0;[_poz_sky] spawn fnc_lit;
_branch_1 = createSimpleObject ["A3\data_f\blesk1.p3d", _poz_sky];_branch_2 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+45, (_poz_sky select 1)-9, (_poz_sky select 2)-120]];
_branch_2 setdir 90;_branch_3 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+47, (_poz_sky select 1), (_poz_sky select 2)-240]];_branch_3 setdir 180;
_branch_4 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+41, (_poz_sky select 1), (_poz_sky select 2)-360]];_branch_4 setdir 90;
_branch_5 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+50, (_poz_sky select 1)+45, (_poz_sky select 2)-480]];
_branch_6 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+55, (_poz_sky select 2)-600]]; _branch_6 setdir 270;
_branch_7 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+92, (_poz_sky select 1)+60, (_poz_sky select 2)-720]];  _branch_7 setdir 180;
_branch_8 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+50, (_poz_sky select 2)-840]];   _branch_8 setdir 60;
_branch_81 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+110, (_poz_sky select 1)+110, (_poz_sky select 2)-840]];    _branch_81 setVectorUp [0,-1,0.5];
_branch_82 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+60, (_poz_sky select 1)+180, (_poz_sky select 2)-920]];
_branch_82 setVectorUp [0.5,-1,0.8];_branch_83 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)-30, (_poz_sky select 1)+260, (_poz_sky select 2)-970]];    
_branch_83 setVectorUp [0.3,-0.5,0.1];
sleep 0.01;
deleteVehicle _branch_1;deleteVehicle _branch_2;deleteVehicle _branch_3;deleteVehicle _branch_4;deleteVehicle _branch_5;deleteVehicle _branch_6;deleteVehicle _branch_7;
deleteVehicle _branch_8;deleteVehicle _branch_81;deleteVehicle _branch_82;deleteVehicle _branch_83;
sleep 0.1;
_branch_1 = createSimpleObject ["A3\data_f\blesk1.p3d", _poz_sky];_branch_2 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+45, (_poz_sky select 1)-9, (_poz_sky select 2)-120]];
_branch_2 setdir 90;_branch_3 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+47, (_poz_sky select 1), (_poz_sky select 2)-240]];_branch_3 setdir 180;
_branch_4 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+41, (_poz_sky select 1), (_poz_sky select 2)-360]];_branch_4 setdir 90;
_branch_5 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+50, (_poz_sky select 1)+45, (_poz_sky select 2)-480]];
_branch_6 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+55, (_poz_sky select 2)-600]]; _branch_6 setdir 270;
_branch_7 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+92, (_poz_sky select 1)+60, (_poz_sky select 2)-720]];  _branch_7 setdir 180;
_branch_8 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+50, (_poz_sky select 2)-840]];   _branch_8 setdir 60;
_branch_81 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+110, (_poz_sky select 1)+110, (_poz_sky select 2)-840]];    _branch_81 setVectorUp [0,-1,0.5];
_branch_82 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+60, (_poz_sky select 1)+180, (_poz_sky select 2)-920]];
_branch_82 setVectorUp [0.5,-1,0.8];_branch_83 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)-30, (_poz_sky select 1)+260, (_poz_sky select 2)-970]];    
_branch_83 setVectorUp [0.3,-0.5,0.1];
sleep 0.2;
deleteVehicle _branch_1;deleteVehicle _branch_2;deleteVehicle _branch_3;deleteVehicle _branch_4;deleteVehicle _branch_5;deleteVehicle _branch_6;deleteVehicle _branch_7;
deleteVehicle _branch_8;deleteVehicle _branch_81;deleteVehicle _branch_82;deleteVehicle _branch_83;
};

fnc_branched_light_8 = {
private ["_poz_sky","_branch_1","_branch_2","_branch_3","_branch_4","_branch_5","_branch_51","_branch_52","_branch_6","_branch_7","_branch_8","_branch_81","_branch_82","_branch_83","_branch_84","_branch_85","_branch_86","_branch_9","_branch_10","_branch_11","_branch_12","_branch_13"];
_poz_sky = _this select 0;[_poz_sky] spawn fnc_lit;
_branch_1 = createSimpleObject ["A3\data_f\blesk1.p3d", _poz_sky];sleep 0.001;_branch_2 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+45, (_poz_sky select 1)-9, (_poz_sky select 2)-120]];
sleep 0.001;_branch_2 setdir 90;_branch_3 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+47, (_poz_sky select 1), (_poz_sky select 2)-240]];sleep 0.001;
_branch_3 setdir 180;_branch_4 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+41, (_poz_sky select 1), (_poz_sky select 2)-360]];_branch_4 setdir 90;
sleep 0.001;_branch_5 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+50, (_poz_sky select 1)+45, (_poz_sky select 2)-480]];sleep 0.01;
_branch_6 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+55, (_poz_sky select 2)-600]]; _branch_6 setdir 270;sleep 0.001;
_branch_7 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+92, (_poz_sky select 1)+60, (_poz_sky select 2)-720]];  _branch_7 setdir 180;sleep 0.001;
_branch_8 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+50, (_poz_sky select 2)-840]];   _branch_8 setdir 60;sleep 0.01;
_branch_81 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+110, (_poz_sky select 1)+110, (_poz_sky select 2)-840]];    _branch_81 setVectorUp [0,-1,0.5];
sleep 0.001;_branch_82 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+60, (_poz_sky select 1)+180, (_poz_sky select 2)-920]]; sleep 0.001;
_branch_82 setVectorUp [0.5,-1,0.8];_branch_83 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)-30, (_poz_sky select 1)+260, (_poz_sky select 2)-970]];    
_branch_83 setVectorUp [0.3,-0.5,0.1];sleep 0.001;_branch_84 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)-70, (_poz_sky select 1)+370, (_poz_sky select 2)-980]];      _branch_84 setVectorUp [0.3,-0.5,0.1];
sleep 0.2;
deleteVehicle _branch_1;sleep 0.001;deleteVehicle _branch_2;sleep 0.001;deleteVehicle _branch_3;sleep 0.001;deleteVehicle _branch_4;sleep 0.001;deleteVehicle _branch_5;
sleep 0.001;deleteVehicle _branch_6;sleep 0.001;deleteVehicle _branch_7;sleep 0.001;deleteVehicle _branch_8;sleep 0.001;deleteVehicle _branch_81;sleep 0.001;deleteVehicle _branch_82;
sleep 0.001;deleteVehicle _branch_83;sleep 0.001;deleteVehicle _branch_84;
};

fnc_branched_light_81 = {
private ["_poz_sky","_branch_1","_branch_2","_branch_3","_branch_4","_branch_5","_branch_51","_branch_52","_branch_6","_branch_7","_branch_8","_branch_81","_branch_82","_branch_83","_branch_84","_branch_85","_branch_86","_branch_9","_branch_10","_branch_11","_branch_12","_branch_13"];
_poz_sky = _this select 0;[_poz_sky] spawn fnc_lit;
_branch_1 = createSimpleObject ["A3\data_f\blesk1.p3d", _poz_sky];_branch_2 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+45, (_poz_sky select 1)-9, (_poz_sky select 2)-120]];
_branch_2 setdir 90;_branch_3 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+47, (_poz_sky select 1), (_poz_sky select 2)-240]];_branch_3 setdir 180;
_branch_4 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+41, (_poz_sky select 1), (_poz_sky select 2)-360]];_branch_4 setdir 90;
_branch_5 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+50, (_poz_sky select 1)+45, (_poz_sky select 2)-480]];
_branch_6 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+55, (_poz_sky select 2)-600]]; _branch_6 setdir 270;
_branch_7 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+92, (_poz_sky select 1)+60, (_poz_sky select 2)-720]];  _branch_7 setdir 180;
_branch_8 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+50, (_poz_sky select 2)-840]];   _branch_8 setdir 60;
_branch_81 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+110, (_poz_sky select 1)+110, (_poz_sky select 2)-840]];    
_branch_81 setVectorUp [0,-1,0.5];_branch_82 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+60, (_poz_sky select 1)+180, (_poz_sky select 2)-920]]; 
_branch_82 setVectorUp [0.5,-1,0.8];_branch_83 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)-30, (_poz_sky select 1)+260, (_poz_sky select 2)-970]];    
_branch_83 setVectorUp [0.3,-0.5,0.1];_branch_84 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)-70, (_poz_sky select 1)+370, (_poz_sky select 2)-980]];      _branch_84 setVectorUp [0.3,-0.5,0.1];
sleep 0.01;
deleteVehicle _branch_1;deleteVehicle _branch_2;deleteVehicle _branch_3;deleteVehicle _branch_4;deleteVehicle _branch_5;deleteVehicle _branch_6;deleteVehicle _branch_7;
deleteVehicle _branch_8;deleteVehicle _branch_81;deleteVehicle _branch_82;deleteVehicle _branch_83;deleteVehicle _branch_84;
sleep 0.1;
_branch_1 = createSimpleObject ["A3\data_f\blesk1.p3d", _poz_sky];_branch_2 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+45, (_poz_sky select 1)-9, (_poz_sky select 2)-120]];
_branch_2 setdir 90;_branch_3 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+47, (_poz_sky select 1), (_poz_sky select 2)-240]];_branch_3 setdir 180;
_branch_4 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+41, (_poz_sky select 1), (_poz_sky select 2)-360]];_branch_4 setdir 90;
_branch_5 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+50, (_poz_sky select 1)+45, (_poz_sky select 2)-480]];
_branch_6 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+55, (_poz_sky select 2)-600]]; _branch_6 setdir 270;
_branch_7 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+92, (_poz_sky select 1)+60, (_poz_sky select 2)-720]];  _branch_7 setdir 180;
_branch_8 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+90, (_poz_sky select 1)+50, (_poz_sky select 2)-840]];   _branch_8 setdir 60;
_branch_81 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+110, (_poz_sky select 1)+110, (_poz_sky select 2)-840]];    
_branch_81 setVectorUp [0,-1,0.5];_branch_82 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+60, (_poz_sky select 1)+180, (_poz_sky select 2)-920]]; 
_branch_82 setVectorUp [0.5,-1,0.8];_branch_83 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)-30, (_poz_sky select 1)+260, (_poz_sky select 2)-970]];    
_branch_83 setVectorUp [0.3,-0.5,0.1];_branch_84 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)-70, (_poz_sky select 1)+370, (_poz_sky select 2)-980]];      _branch_84 setVectorUp [0.3,-0.5,0.1];
sleep 0.2;
deleteVehicle _branch_1;deleteVehicle _branch_2;deleteVehicle _branch_3;deleteVehicle _branch_4;deleteVehicle _branch_5;deleteVehicle _branch_6;deleteVehicle _branch_7;
deleteVehicle _branch_8;deleteVehicle _branch_81;deleteVehicle _branch_82;deleteVehicle _branch_83;deleteVehicle _branch_84;
};

fnc_branched_light_9_left_simplu= {
private ["_poz_sky","_branch_1","_branch_2","_branch_3","_branch_4","_branch_11","_branch_111","_branch_1111","_branch_112","_branch_113","_branch_114","_branch_115","_branch_12",
"_branch_13","_branch_1301","_branch_1302","_branch_1303","_branch_131","_branch_132","_branch_1321","_branch_133","_branch_134","_branch_14","_branch_15",
"_branch_16","_branch_17","_branch_21","_branch_211","_branch_212","_branch_213","_branch_2131","_branch_2132","_branch_2133","_branch_2134","_branch_2133",
"_branch_214","_branch_215","_branch_22","_branch_23","_branch_231","_branch_232","_branch_2321","_branch_2322","_branch_23221","_branch_23222","_branch_23223",
"_branch_23224","_branch_2323","_branch_2324","_branch_233","_branch_234","_branch_2341","_branch_2342","_branch_24","_branch_241","_branch_242","_branch_25",
"_branch_26","_branch_27","_branch_31","_branch_32","_branch_321","_branch_3211","_branch_3212","_branch_3213","_branch_3214","_branch_322","_branch_33",
"_branch_34","_branch_35","_branch_36","_branch_37"];
_poz_sky = _this select 0; [_poz_sky] spawn fnc_lit;
_branch_1 = createSimpleObject ["A3\data_f\blesk1.p3d", _poz_sky];_branch_1 setVectorUp [1,1,0];sleep 0.01;_branch_11 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky select 0)-105, (_poz_sky select 1)-63, (_poz_sky select 2)-19]]; 
_branch_11 setVectorUp [0.5,0,0];sleep 0.01;_branch_12 = createSimpleObject ["A3\data_f\blesk1.p3d",[(_poz_sky select 0)-225, (_poz_sky select 1)-74, (_poz_sky select 2)-17]];   
_branch_12 setVectorUp [-0.5,0,0];sleep 0.01;_branch_13 = createSimpleObject ["A3\data_f\blesk1.p3d",[(_poz_sky select 0)-345, (_poz_sky select 1)-105, (_poz_sky select 2)-48]];     
_branch_13 setVectorUp [-0.5,0,0];sleep 0.01;_branch_14 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky select 0)-465, (_poz_sky select 1)-125, (_poz_sky select 2)-46]];      _branch_14 setVectorUp [-0.5,0,0];
sleep 0.01;_branch_15 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky select 0)-585, (_poz_sky select 1)-125, (_poz_sky select 2)-51]];       _branch_15 setVectorUp [0.5,0,0];sleep 0.01;
_branch_16 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky select 0)-710, (_poz_sky select 1)-155, (_poz_sky select 2)-35]]; _branch_16 setVectorUp [0.5,0,0];sleep 0.01;
_branch_17 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky select 0)-835, (_poz_sky select 1)-155, (_poz_sky select 2)+3]]; _branch_17 setVectorUp [-0.5,0,0];
sleep 0.01;
deleteVehicle _branch_1;sleep 0.01;deleteVehicle _branch_11;sleep 0.01;deleteVehicle _branch_12;sleep 0.01;deleteVehicle _branch_13;sleep 0.01;deleteVehicle _branch_14;sleep 0.01;deleteVehicle _branch_15;sleep 0.01;deleteVehicle _branch_16;sleep 0.01;deleteVehicle _branch_17;
sleep 0.1;
_branch_1 = createSimpleObject ["A3\data_f\blesk1.p3d", _poz_sky];_branch_1 setVectorUp [1,1,0];_branch_11 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky select 0)-105, (_poz_sky select 1)-63, (_poz_sky select 2)-19]]; 
_branch_11 setVectorUp [0.5,0,0];_branch_12 = createSimpleObject ["A3\data_f\blesk1.p3d",[(_poz_sky select 0)-225, (_poz_sky select 1)-74, (_poz_sky select 2)-17]];   _branch_12 setVectorUp [-0.5,0,0];
_branch_13 = createSimpleObject ["A3\data_f\blesk1.p3d",[(_poz_sky select 0)-345, (_poz_sky select 1)-105, (_poz_sky select 2)-48]]; _branch_13 setVectorUp [-0.5,0,0];
_branch_14 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky select 0)-465, (_poz_sky select 1)-125, (_poz_sky select 2)-46]]; _branch_14 setVectorUp [-0.5,0,0];
_branch_15 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky select 0)-585, (_poz_sky select 1)-125, (_poz_sky select 2)-51]]; _branch_15 setVectorUp [0.5,0,0];
_branch_16 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky select 0)-710, (_poz_sky select 1)-155, (_poz_sky select 2)-35]]; _branch_16 setVectorUp [0.5,0,0];
_branch_17 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky select 0)-835, (_poz_sky select 1)-155, (_poz_sky select 2)+3]]; _branch_17 setVectorUp [-0.5,0,0];
sleep 0.2;
deleteVehicle _branch_1;deleteVehicle _branch_11;deleteVehicle _branch_12;deleteVehicle _branch_13;deleteVehicle _branch_14;deleteVehicle _branch_15;deleteVehicle _branch_16;deleteVehicle _branch_17;
};

fnc_branched_light_9_left_complicat = {
private ["_poz_sky","_branch_1","_branch_2","_branch_3","_branch_4","_branch_11","_branch_111","_branch_1111","_branch_112","_branch_113","_branch_114","_branch_115","_branch_12",
"_branch_13","_branch_1301","_branch_1302","_branch_1303","_branch_131","_branch_132","_branch_1321","_branch_133","_branch_134","_branch_14","_branch_15",
"_branch_16","_branch_17","_branch_21","_branch_211","_branch_212","_branch_213","_branch_2131","_branch_2132","_branch_2133","_branch_2134","_branch_2133",
"_branch_214","_branch_215","_branch_22","_branch_23","_branch_231","_branch_232","_branch_2321","_branch_2322","_branch_23221","_branch_23222","_branch_23223",
"_branch_23224","_branch_2323","_branch_2324","_branch_233","_branch_234","_branch_2341","_branch_2342","_branch_24","_branch_241","_branch_242","_branch_25",
"_branch_26","_branch_27","_branch_31","_branch_32","_branch_321","_branch_3211","_branch_3212","_branch_3213","_branch_3214","_branch_322","_branch_33",
"_branch_34","_branch_35","_branch_36","_branch_37"];
_poz_sky = _this select 0;[_poz_sky] spawn fnc_lit;
_branch_1 = createSimpleObject ["A3\data_f\blesk1.p3d", _poz_sky]; _branch_1 setVectorUp [1,1,0];sleep 0.01;
_branch_11 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky select 0)-105, (_poz_sky select 1)-63, (_poz_sky select 2)-19]]; _branch_11 setVectorUp [0.5,0,0];sleep 0.01;
_branch_12 = createSimpleObject ["A3\data_f\blesk1.p3d",[(_poz_sky select 0)-225, (_poz_sky select 1)-74, (_poz_sky select 2)-17]]; _branch_12 setVectorUp [-0.5,0,0];sleep 0.01;
_branch_13 = createSimpleObject ["A3\data_f\blesk1.p3d",[(_poz_sky select 0)-345, (_poz_sky select 1)-105, (_poz_sky select 2)-48]]; _branch_13 setVectorUp [-0.5,0,0];sleep 0.01;	
	[_poz_sky] spawn 
		{
		private ["_poz_sky_sec"];
		_poz_sky_sec=_this select 0;
		_branch_111 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky_sec select 0)-75, (_poz_sky_sec select 1)-103, (_poz_sky_sec select 2)-19]]; _branch_111 setVectorUp [0.5,0.6,0]; sleep 0.01;
		_branch_1111 = createSimpleObject ["A3\data_f\blesk1.p3d",[(_poz_sky_sec select 0)-79, (_poz_sky_sec select 1)-217, (_poz_sky_sec select 2)+11]]; _branch_1111 setVectorUp [0.5,-0.6,-0.1]; sleep 0.01;
		_branch_112 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky_sec select 0)-130, (_poz_sky_sec select 1)-215, (_poz_sky_sec select 2)+1]]; _branch_112 setVectorUp [0.5,0.6,-0.1]; sleep 0.01;
		_branch_113 = createSimpleObject ["A3\data_f\blesk1.p3d",[(_poz_sky_sec select 0)-222, (_poz_sky_sec select 1)-292, (_poz_sky_sec select 2)+24]]; _branch_113 setVectorUp [0.5,0.6,-0.1]; sleep 0.01;
		_branch_114 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky_sec select 0)-290, (_poz_sky_sec select 1)-398, (_poz_sky_sec select 2)+19]]; _branch_114 setVectorUp [-1,25,0]; sleep 0.01;
		_branch_115 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky_sec select 0)-330, (_poz_sky_sec select 1)-360, (_poz_sky_sec select 2)+12]]; _branch_115 setVectorUp [40,1,0];
		sleep 0.03;
		deleteVehicle _branch_111; sleep 0.01; deleteVehicle _branch_1111; sleep 0.01; deleteVehicle _branch_112; sleep 0.01; deleteVehicle _branch_113; sleep 0.01; deleteVehicle _branch_114; sleep 0.01; deleteVehicle _branch_115;
		};
sleep 0.01;
_branch_14 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky select 0)-465, (_poz_sky select 1)-125, (_poz_sky select 2)-46]]; _branch_14 setVectorUp [-0.5,0,0];
	[_poz_sky] spawn 
		{
		private ["_poz_sky_sec"];	
		_poz_sky_sec=_this select 0;
		_branch_1301 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky_sec select 0)-310, (_poz_sky_sec select 1)-165, (_poz_sky_sec select 2)-30]]; _branch_1301 setVectorUp [-0.5,5,0]; sleep 0.01;
		_branch_1302 = createSimpleObject ["A3\data_f\blesk1.p3d",[(_poz_sky_sec select 0)-275, (_poz_sky_sec select 1)-285, (_poz_sky_sec select 2)-35]]; _branch_1302 setVectorUp [-0.5,5,0]; sleep 0.01;
		_branch_1303 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky_sec select 0)-335, (_poz_sky_sec select 1)-290, (_poz_sky_sec select 2)-52]]; _branch_1303 setVectorUp [0.5,0.5,0]; sleep 0.01;
		_branch_131 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky_sec select 0)-425, (_poz_sky_sec select 1)-195, (_poz_sky_sec select 2)-67]]; _branch_131 setVectorUp [0.5,0.6,0]; sleep 0.01;
		_branch_132 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky_sec select 0)-455, (_poz_sky_sec select 1)-313.5, (_poz_sky_sec select 2)-45]]; _branch_132 setVectorUp [-0.5,1,0]; sleep 0.01;
		_branch_1321 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky_sec select 0)-428, (_poz_sky_sec select 1)-435, (_poz_sky_sec select 2)-60]]; _branch_1321 setVectorUp [-0.5,1,0]; sleep 0.01;
		_branch_133 = createSimpleObject ["A3\data_f\blesk1.p3d",[(_poz_sky_sec select 0)-524, (_poz_sky_sec select 1)-270, (_poz_sky_sec select 2)-62]]; _branch_133 setVectorUp [0.5,0.5,0]; sleep 0.01;
		_branch_134 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky_sec select 0)-630, (_poz_sky_sec select 1)-335, (_poz_sky_sec select 2)-83]]; _branch_134 setVectorUp [0.5,0.001,0];
		sleep 0.02;
		deleteVehicle _branch_1301; sleep 0.01; deleteVehicle _branch_1302; sleep 0.01; deleteVehicle _branch_1303; sleep 0.01; deleteVehicle _branch_131; sleep 0.01; deleteVehicle _branch_132;
		sleep 0.01; deleteVehicle _branch_1321; sleep 0.01; deleteVehicle _branch_133; sleep 0.01; deleteVehicle _branch_134;
		};
sleep 0.01;
_branch_15 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky select 0)-585, (_poz_sky select 1)-125, (_poz_sky select 2)-51]]; _branch_15 setVectorUp [0.5,0,0];sleep 0.01;
_branch_16 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky select 0)-710, (_poz_sky select 1)-155, (_poz_sky select 2)-35]]; _branch_16 setVectorUp [0.5,0,0];sleep 0.01;
_branch_17 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky select 0)-835, (_poz_sky select 1)-155, (_poz_sky select 2)+3]]; _branch_17 setVectorUp [-0.5,0,0];
sleep 0.01;
deleteVehicle _branch_1;sleep 0.01;deleteVehicle _branch_11;sleep 0.01;deleteVehicle _branch_12;sleep 0.01;deleteVehicle _branch_13;sleep 0.01;deleteVehicle _branch_14;sleep 0.01;deleteVehicle _branch_15;
sleep 0.01;deleteVehicle _branch_16;sleep 0.01;deleteVehicle _branch_17;
sleep 0.1;
_branch_1 = createSimpleObject ["A3\data_f\blesk1.p3d", _poz_sky]; _branch_1 setVectorUp [1,1,0];_branch_11 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky select 0)-105, (_poz_sky select 1)-63, (_poz_sky select 2)-19]]; _branch_11 setVectorUp [0.5,0,0];
_branch_111 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky select 0)-75, (_poz_sky select 1)-103, (_poz_sky select 2)-19]]; _branch_111 setVectorUp [0.5,0.6,0];_branch_1111 = createSimpleObject ["A3\data_f\blesk1.p3d",[(_poz_sky select 0)-79, (_poz_sky select 1)-217, (_poz_sky select 2)+11]]; _branch_1111 setVectorUp [0.5,-0.6,-0.1];
_branch_112 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky select 0)-130, (_poz_sky select 1)-215, (_poz_sky select 2)+1]]; _branch_112 setVectorUp [0.5,0.6,-0.1];_branch_113 = createSimpleObject ["A3\data_f\blesk1.p3d",[(_poz_sky select 0)-222, (_poz_sky select 1)-292, (_poz_sky select 2)+24]]; _branch_113 setVectorUp [0.5,0.6,-0.1];
_branch_114 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky select 0)-290, (_poz_sky select 1)-398, (_poz_sky select 2)+19]]; _branch_114 setVectorUp [-1,25,0];_branch_115 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky select 0)-330, (_poz_sky select 1)-360, (_poz_sky select 2)+12]]; _branch_115 setVectorUp [40,1,0];
_branch_12 = createSimpleObject ["A3\data_f\blesk1.p3d",[(_poz_sky select 0)-225, (_poz_sky select 1)-74, (_poz_sky select 2)-17]]; _branch_12 setVectorUp [-0.5,0,0];_branch_13 = createSimpleObject ["A3\data_f\blesk1.p3d",[(_poz_sky select 0)-345, (_poz_sky select 1)-105, (_poz_sky select 2)-48]]; _branch_13 setVectorUp [-0.5,0,0];
_branch_1301 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky select 0)-310, (_poz_sky select 1)-165, (_poz_sky select 2)-30]]; _branch_1301 setVectorUp [-0.5,5,0];_branch_1302 = createSimpleObject ["A3\data_f\blesk1.p3d",[(_poz_sky select 0)-275, (_poz_sky select 1)-285, (_poz_sky select 2)-35]]; _branch_1302 setVectorUp [-0.5,5,0];
_branch_1303 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky select 0)-335, (_poz_sky select 1)-290, (_poz_sky select 2)-52]]; _branch_1303 setVectorUp [0.5,0.5,0];_branch_131 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky select 0)-425, (_poz_sky select 1)-195, (_poz_sky select 2)-67]]; _branch_131 setVectorUp [0.5,0.6,0];
_branch_132 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky select 0)-455, (_poz_sky select 1)-313.5, (_poz_sky select 2)-45]]; _branch_132 setVectorUp [-0.5,1,0];_branch_1321 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky select 0)-428, (_poz_sky select 1)-435, (_poz_sky select 2)-60]]; _branch_1321 setVectorUp [-0.5,1,0];
_branch_133 = createSimpleObject ["A3\data_f\blesk1.p3d",[(_poz_sky select 0)-524, (_poz_sky select 1)-270, (_poz_sky select 2)-62]]; _branch_133 setVectorUp [0.5,0.5,0];_branch_134 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky select 0)-630, (_poz_sky select 1)-335, (_poz_sky select 2)-83]]; _branch_134 setVectorUp [0.5,0.001,0];
_branch_14 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky select 0)-465, (_poz_sky select 1)-125, (_poz_sky select 2)-46]]; _branch_14 setVectorUp [-0.5,0,0];_branch_15 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky select 0)-585, (_poz_sky select 1)-125, (_poz_sky select 2)-51]]; _branch_15 setVectorUp [0.5,0,0];
_branch_16 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky select 0)-710, (_poz_sky select 1)-155, (_poz_sky select 2)-35]]; _branch_16 setVectorUp [0.5,0,0];_branch_17 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky select 0)-835, (_poz_sky select 1)-155, (_poz_sky select 2)+3]]; _branch_17 setVectorUp [-0.5,0,0];
sleep 0.2;
deleteVehicle _branch_1;deleteVehicle _branch_11;deleteVehicle _branch_111;deleteVehicle _branch_1111;deleteVehicle _branch_112;deleteVehicle _branch_113;deleteVehicle _branch_114;deleteVehicle _branch_115;
deleteVehicle _branch_12;deleteVehicle _branch_13;deleteVehicle _branch_1301;deleteVehicle _branch_1302;deleteVehicle _branch_1303;deleteVehicle _branch_131;deleteVehicle _branch_132;deleteVehicle _branch_1321;
deleteVehicle _branch_133;deleteVehicle _branch_134;deleteVehicle _branch_14;deleteVehicle _branch_15;deleteVehicle _branch_16;deleteVehicle _branch_17;
};

fnc_branched_light_10_mijloc_simplu= {
private ["_poz_sky","_branch_1","_branch_2","_branch_3","_branch_4","_branch_11","_branch_111","_branch_1111","_branch_112","_branch_113","_branch_114","_branch_115","_branch_12",
"_branch_13","_branch_1301","_branch_1302","_branch_1303","_branch_131","_branch_132","_branch_1321","_branch_133","_branch_134","_branch_14","_branch_15",
"_branch_16","_branch_17","_branch_21","_branch_211","_branch_212","_branch_213","_branch_2131","_branch_2132","_branch_2133","_branch_2134","_branch_2133",
"_branch_214","_branch_215","_branch_22","_branch_23","_branch_231","_branch_232","_branch_2321","_branch_2322","_branch_23221","_branch_23222","_branch_23223",
"_branch_23224","_branch_2323","_branch_2324","_branch_233","_branch_234","_branch_2341","_branch_2342","_branch_24","_branch_241","_branch_242","_branch_25",
"_branch_26","_branch_27","_branch_31","_branch_32","_branch_321","_branch_3211","_branch_3212","_branch_3213","_branch_3214","_branch_322","_branch_33",
"_branch_34","_branch_35","_branch_36","_branch_37"];
_poz_sky = _this select 0; [_poz_sky] spawn fnc_lit;
_branch_2 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+80, (_poz_sky select 1)-40, (_poz_sky select 2)+10]]; _branch_2 setVectorUp [0.1,1,0];sleep 0.01;
_branch_21 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+55, (_poz_sky select 1)-155, (_poz_sky select 2)+12.5]]; _branch_21 setVectorUp [-0.5,-0.9,0];sleep 0.01;
_branch_22 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+60, (_poz_sky select 1)-275, (_poz_sky select 2)+2]]; _branch_22 setVectorUp [-0.5,0.7,0];sleep 0.01;
_branch_23 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+100, (_poz_sky select 1)-390, (_poz_sky select 2)-6]]; _branch_23 setVectorUp [-0.5,1,-0.5];sleep 0.01;
_branch_24 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+173, (_poz_sky select 1)-495, (_poz_sky select 2)-5]]; _branch_24 setVectorUp [0.6,-1,-0.5];sleep 0.01;
_branch_25 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+203, (_poz_sky select 1)-626, (_poz_sky select 2)-8]]; _branch_25 setVectorUp [0.2,0.8,0];sleep 0.01;
_branch_26 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+201, (_poz_sky select 1)-755, (_poz_sky select 2)+8]]; _branch_26 setVectorUp [0.2,0.8,0];sleep 0.01;
_branch_27 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+207, (_poz_sky select 1)-875, (_poz_sky select 2)+39]]; _branch_27 setVectorUp [0.3,-1,-0.1];
sleep 0.01;
deleteVehicle _branch_2;sleep 0.01;deleteVehicle _branch_21;sleep 0.01;deleteVehicle _branch_22;sleep 0.01;deleteVehicle _branch_23;sleep 0.01;deleteVehicle _branch_24;sleep 0.01;deleteVehicle _branch_25;
sleep 0.01;deleteVehicle _branch_26;sleep 0.01;deleteVehicle _branch_27;
sleep 0.1;
_branch_2 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+80, (_poz_sky select 1)-40, (_poz_sky select 2)+10]]; _branch_2 setVectorUp [0.1,1,0];_branch_21 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+55, (_poz_sky select 1)-155, (_poz_sky select 2)+12.5]]; _branch_21 setVectorUp [-0.5,-0.9,0];
_branch_22 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+60, (_poz_sky select 1)-275, (_poz_sky select 2)+2]]; _branch_22 setVectorUp [-0.5,0.7,0];_branch_23 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+100, (_poz_sky select 1)-390, (_poz_sky select 2)-6]]; _branch_23 setVectorUp [-0.5,1,-0.5];
_branch_24 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+173, (_poz_sky select 1)-495, (_poz_sky select 2)-5]]; _branch_24 setVectorUp [0.6,-1,-0.5];_branch_25 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+203, (_poz_sky select 1)-626, (_poz_sky select 2)-8]]; _branch_25 setVectorUp [0.2,0.8,0];
_branch_26 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+201, (_poz_sky select 1)-755, (_poz_sky select 2)+8]]; _branch_26 setVectorUp [0.2,0.8,0];_branch_27 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+207, (_poz_sky select 1)-875, (_poz_sky select 2)+39]]; _branch_27 setVectorUp [0.3,-1,-0.1];
sleep 0.2;
deleteVehicle _branch_2;deleteVehicle _branch_21;deleteVehicle _branch_22;deleteVehicle _branch_23;deleteVehicle _branch_24;deleteVehicle _branch_25;deleteVehicle _branch_26;deleteVehicle _branch_27;
};


fnc_branched_light_10_mijloc_complicat= {
private ["_poz_sky","_branch_1","_branch_2","_branch_3","_branch_4","_branch_11","_branch_111","_branch_1111","_branch_112","_branch_113","_branch_114","_branch_115","_branch_12",
"_branch_13","_branch_1301","_branch_1302","_branch_1303","_branch_131","_branch_132","_branch_1321","_branch_133","_branch_134","_branch_14","_branch_15",
"_branch_16","_branch_17","_branch_21","_branch_211","_branch_212","_branch_213","_branch_2131","_branch_2132","_branch_2133","_branch_2134","_branch_2133",
"_branch_214","_branch_215","_branch_22","_branch_23","_branch_231","_branch_232","_branch_2321","_branch_2322","_branch_23221","_branch_23222","_branch_23223",
"_branch_23224","_branch_2323","_branch_2324","_branch_233","_branch_234","_branch_2341","_branch_2342","_branch_24","_branch_241","_branch_242","_branch_25",
"_branch_26","_branch_27","_branch_31","_branch_32","_branch_321","_branch_3211","_branch_3212","_branch_3213","_branch_3214","_branch_322","_branch_33",
"_branch_34","_branch_35","_branch_36","_branch_37"];
_poz_sky = _this select 0; [_poz_sky] spawn fnc_lit;
_branch_2 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+80, (_poz_sky select 1)-40, (_poz_sky select 2)+10]]; _branch_2 setVectorUp [0.1,1,0]; sleep 0.01;
_branch_21 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+55, (_poz_sky select 1)-155, (_poz_sky select 2)+12.5]]; _branch_21 setVectorUp [-0.5,-0.9,0];sleep 0.01;
_branch_22 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+60, (_poz_sky select 1)-275, (_poz_sky select 2)+2]]; _branch_22 setVectorUp [-0.5,0.7,0];
sleep 0.01;
	[_poz_sky] spawn 
		{
		private ["_poz_sky_sec"];	
		_poz_sky_sec=_this select 0;
		_branch_211 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky_sec select 0)+99, (_poz_sky_sec select 1)-255, (_poz_sky_sec select 2)-3]]; _branch_211 setVectorUp [-0.5,0.2,0];		sleep 0.01;
		_branch_212 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky_sec select 0)+220, (_poz_sky_sec select 1)-280, (_poz_sky_sec select 2)-7]]; _branch_212 setVectorUp [-0.5,0.2,0];		sleep 0.01;
		_branch_213 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky_sec select 0)+335, (_poz_sky_sec select 1)-315, (_poz_sky_sec select 2)-6]]; _branch_213 setdir 90; _branch_213 setVectorUp [-1,-0.1,0];		sleep 0.01;
		_branch_214 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky_sec select 0)+421, (_poz_sky_sec select 1)-374, (_poz_sky_sec select 2)-27]]; _branch_214 setVectorUp [0.001,0.8,0];		sleep 0.01;
		_branch_2131 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky_sec select 0)+455, (_poz_sky_sec select 1)-340, (_poz_sky_sec select 2)-20]]; _branch_2131 setVectorUp [-0.5,0,0];		sleep 0.01;
		_branch_215 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky_sec select 0)+453, (_poz_sky_sec select 1)-495, (_poz_sky_sec select 2)+5.9]]; _branch_215 setVectorUp [-0.0001,0.5,0];		sleep 0.01;
		_branch_2132 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky_sec select 0)+580, (_poz_sky_sec select 1)-370, (_poz_sky_sec select 2)-36]]; _branch_2132 setVectorUp [-0.5,0,0];		sleep 0.01;
		_branch_2133 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky_sec select 0)+573, (_poz_sky_sec select 1)-313, (_poz_sky_sec select 2)-36]]; _branch_2133 setVectorUp [-0.5,-0.6,0];		sleep 0.01;
		_branch_2134 = createSimpleObject ["A3\data_f\blesk1.p3d",[(_poz_sky_sec select 0)+676, (_poz_sky_sec select 1)-297, (_poz_sky_sec select 2)-41]]; _branch_2134 setVectorUp [-0.5,0.6,0];		sleep 0.01;
		_branch_2135 = createSimpleObject ["A3\data_f\blesk1.p3d",[(_poz_sky_sec select 0)+700, (_poz_sky_sec select 1)-374, (_poz_sky_sec select 2)-39.5]]; _branch_2135 setVectorUp [-0.5,0.2,0];		
		sleep 0.03;
		deleteVehicle _branch_211;sleep 0.01; deleteVehicle _branch_212;sleep 0.01; deleteVehicle _branch_213; sleep 0.01; deleteVehicle _branch_2131;sleep 0.01; deleteVehicle _branch_2132;sleep 0.01;
		deleteVehicle _branch_2133;sleep 0.01; deleteVehicle _branch_2134;sleep 0.01; deleteVehicle _branch_2135;sleep 0.01; deleteVehicle _branch_214;sleep 0.01; deleteVehicle _branch_215;
		};
		sleep 0.01;
_branch_23 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+100, (_poz_sky select 1)-390, (_poz_sky select 2)-6]]; _branch_23 setVectorUp [-0.5,1,-0.5];sleep 0.01;
_branch_24 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+173, (_poz_sky select 1)-495, (_poz_sky select 2)-5]]; _branch_24 setVectorUp [0.6,-1,-0.5];
	[_poz_sky] spawn 
		{
		private ["_poz_sky_sec"];
		_poz_sky_sec=_this select 0;
		_branch_231 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky_sec select 0)+80, (_poz_sky_sec select 1)-390, (_poz_sky_sec select 2)-6]]; _branch_231 setdir 90; _branch_231 setVectorUp [-0.1,-0.8,-0.1];		sleep 0.01;
		_branch_232 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky_sec select 0)+33.5, (_poz_sky_sec select 1)-509, (_poz_sky_sec select 2)-23]]; _branch_232 setdir 180; _branch_232 setVectorUp [-0.3,-0.8,-0.1];		sleep 0.01;
		_branch_2321 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky_sec select 0)-26, (_poz_sky_sec select 1)-509, (_poz_sky_sec select 2)-10]]; _branch_2321 setVectorUp [-0.3,-0.1,-0.1]; sleep 0.01;
		_branch_2322 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky_sec select 0)-150, (_poz_sky_sec select 1)-518, (_poz_sky_sec select 2)-35]]; _branch_2322 setVectorUp [-0.3,-0.1,-0.1];sleep 0.01;
		_branch_23221 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky_sec select 0)-150, (_poz_sky_sec select 1)-572, (_poz_sky_sec select 2)-72]]; _branch_23221 setVectorUp [0.1,1,1];sleep 0.01;
		_branch_23222 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky_sec select 0)-30, (_poz_sky_sec select 1)-860, (_poz_sky_sec select 2)-72]]; _branch_23222 setVectorUp [-0.5,1,0.5]; sleep 0.01;
		_branch_23223 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky_sec select 0)-160, (_poz_sky_sec select 1)-682, (_poz_sky_sec select 2)-117]]; _branch_23223 setVectorUp [-0.5,1,0.5];sleep 0.01;
		_branch_23224 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky_sec select 0)-145, (_poz_sky_sec select 1)-800, (_poz_sky_sec select 2)-150]]; _branch_23224 setVectorUp [-0.5,1,0.1];sleep 0.01;
		_branch_2323 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky_sec select 0)-250, (_poz_sky_sec select 1)-533, (_poz_sky_sec select 2)-89]]; _branch_2323 setVectorUp [-0.3,-0.1,-0.1];sleep 0.01;
		_branch_2324 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky_sec select 0)-353, (_poz_sky_sec select 1)-588, (_poz_sky_sec select 2)-135]]; _branch_2324 setVectorUp [-1,-0.1,0];sleep 0.01;
		_branch_233 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky_sec select 0)+23, (_poz_sky_sec select 1)-629, (_poz_sky_sec select 2)-42]]; _branch_233 setVectorUp [-0.3,-0.8,-0.1];	sleep 0.01;
		_branch_234 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky_sec select 0)-1, (_poz_sky_sec select 1)-748, (_poz_sky_sec select 2)-47]]; _branch_234 setVectorUp [-0.3,-0.8,-0.1];sleep 0.01;
		_branch_2341 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky_sec select 0)+70, (_poz_sky_sec select 1)-748, (_poz_sky_sec select 2)-47]]; _branch_2341 setVectorUp [-1,0.6,-0.1];sleep 0.01;
		_branch_2342 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky_sec select 0)+145, (_poz_sky_sec select 1)-840, (_poz_sky_sec select 2)-45]]; _branch_2342 setVectorUp [-1,30,-0.1];
		sleep 0.02;
		deleteVehicle _branch_231; sleep 0.01; deleteVehicle _branch_232; sleep 0.01; deleteVehicle _branch_2321; sleep 0.01; deleteVehicle _branch_2322; sleep 0.01; deleteVehicle _branch_23221; sleep 0.01;
		deleteVehicle _branch_23222; sleep 0.01; deleteVehicle _branch_23223; sleep 0.01; deleteVehicle _branch_23224; sleep 0.01; deleteVehicle _branch_2323; sleep 0.01; deleteVehicle _branch_2324; sleep 0.01;
		deleteVehicle _branch_233; sleep 0.01; deleteVehicle _branch_234; sleep 0.01; deleteVehicle _branch_2341; sleep 0.01; deleteVehicle _branch_2342;
		};
sleep 0.01;
_branch_25 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+203, (_poz_sky select 1)-626, (_poz_sky select 2)-8]]; _branch_25 setVectorUp [0.2,0.8,0];
	[_poz_sky] spawn 
		{
		private ["_poz_sky_sec"];
		_poz_sky_sec=_this select 0;
		_branch_241 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky_sec select 0)+243, (_poz_sky_sec select 1)-495, (_poz_sky_sec select 2)+17]]; _branch_241 setVectorUp [-0.5,0.2,0];
		_branch_242 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky_sec select 0)+343, (_poz_sky_sec select 1)-555, (_poz_sky_sec select 2)+35]]; _branch_242 setVectorUp [-0.5,0.2,0];
		sleep 0.02;
		deleteVehicle _branch_241;sleep 0.01; deleteVehicle _branch_242;
		};
sleep 0.01;
_branch_26 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+201, (_poz_sky select 1)-755, (_poz_sky select 2)+8]]; _branch_26 setVectorUp [0.2,0.8,0];sleep 0.01;
_branch_27 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+207, (_poz_sky select 1)-875, (_poz_sky select 2)+39]]; _branch_27 setVectorUp [0.3,-1,-0.1];
sleep 0.1;
deleteVehicle _branch_2;deleteVehicle _branch_21;deleteVehicle _branch_22;deleteVehicle _branch_23;deleteVehicle _branch_24;deleteVehicle _branch_25;deleteVehicle _branch_26;deleteVehicle _branch_27;
sleep 0.1;
_branch_2 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+80, (_poz_sky select 1)-40, (_poz_sky select 2)+10]]; _branch_2 setVectorUp [0.1,1,0];
_branch_21 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+55, (_poz_sky select 1)-155, (_poz_sky select 2)+12.5]]; _branch_21 setVectorUp [-0.5,-0.9,0];
_branch_22 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+60, (_poz_sky select 1)-275, (_poz_sky select 2)+2]]; _branch_22 setVectorUp [-0.5,0.7,0];
_branch_211 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+99, (_poz_sky select 1)-255, (_poz_sky select 2)-3]]; _branch_211 setVectorUp [-0.5,0.2,0];
_branch_212 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+220, (_poz_sky select 1)-280, (_poz_sky select 2)-7]]; _branch_212 setVectorUp [-0.5,0.2,0];
_branch_213 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+335, (_poz_sky select 1)-315, (_poz_sky select 2)-6]]; _branch_213 setdir 90; _branch_213 setVectorUp [-1,-0.1,0];
_branch_2131 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky select 0)+455, (_poz_sky select 1)-340, (_poz_sky select 2)-20]]; _branch_2131 setVectorUp [-0.5,0,0];
_branch_2132 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky select 0)+580, (_poz_sky select 1)-370, (_poz_sky select 2)-36]]; _branch_2132 setVectorUp [-0.5,0,0];
_branch_2133 = createSimpleObject ["A3\data_f\blesk2.p3d",[(_poz_sky select 0)+573, (_poz_sky select 1)-313, (_poz_sky select 2)-36]]; _branch_2133 setVectorUp [-0.5,-0.6,0];
_branch_2134 = createSimpleObject ["A3\data_f\blesk1.p3d",[(_poz_sky select 0)+676, (_poz_sky select 1)-297, (_poz_sky select 2)-41]]; _branch_2134 setVectorUp [-0.5,0.6,0];
_branch_2135 = createSimpleObject ["A3\data_f\blesk1.p3d",[(_poz_sky select 0)+700, (_poz_sky select 1)-374, (_poz_sky select 2)-39.5]]; _branch_2135 setVectorUp [-0.5,0.2,0];
_branch_214 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+421, (_poz_sky select 1)-374, (_poz_sky select 2)-27]]; _branch_214 setVectorUp [0.001,0.8,0];
_branch_215 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+453, (_poz_sky select 1)-495, (_poz_sky select 2)+5.9]]; _branch_215 setVectorUp [-0.0001,0.5,0];
_branch_23 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+100, (_poz_sky select 1)-390, (_poz_sky select 2)-6]]; _branch_23 setVectorUp [-0.5,1,-0.5];
_branch_24 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+173, (_poz_sky select 1)-495, (_poz_sky select 2)-5]]; _branch_24 setVectorUp [0.6,-1,-0.5];
_branch_231 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+80, (_poz_sky select 1)-390, (_poz_sky select 2)-6]]; _branch_231 setdir 90; _branch_231 setVectorUp [-0.1,-0.8,-0.1];
_branch_232 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+33.5, (_poz_sky select 1)-509, (_poz_sky select 2)-23]]; _branch_232 setdir 180; _branch_232 setVectorUp [-0.3,-0.8,-0.1];
_branch_2321 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)-26, (_poz_sky select 1)-509, (_poz_sky select 2)-10]]; _branch_2321 setVectorUp [-0.3,-0.1,-0.1];
_branch_2322 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)-150, (_poz_sky select 1)-518, (_poz_sky select 2)-35]]; _branch_2322 setVectorUp [-0.3,-0.1,-0.1];
_branch_23221 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)-150, (_poz_sky select 1)-572, (_poz_sky select 2)-72]]; _branch_23221 setVectorUp [0.1,1,1];
_branch_23222 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)-30, (_poz_sky select 1)-860, (_poz_sky select 2)-72]]; _branch_23222 setVectorUp [-0.5,1,0.5];
_branch_23223 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)-160, (_poz_sky select 1)-682, (_poz_sky select 2)-117]]; _branch_23223 setVectorUp [-0.5,1,0.5];
_branch_23224 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)-145, (_poz_sky select 1)-800, (_poz_sky select 2)-150]]; _branch_23224 setVectorUp [-0.5,1,0.1];
_branch_2323 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)-250, (_poz_sky select 1)-533, (_poz_sky select 2)-89]]; _branch_2323 setVectorUp [-0.3,-0.1,-0.1];
_branch_2324 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)-353, (_poz_sky select 1)-588, (_poz_sky select 2)-135]]; _branch_2324 setVectorUp [-1,-0.1,0];
_branch_233 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+23, (_poz_sky select 1)-629, (_poz_sky select 2)-42]]; _branch_233 setVectorUp [-0.3,-0.8,-0.1];
_branch_234 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)-1, (_poz_sky select 1)-748, (_poz_sky select 2)-47]]; _branch_234 setVectorUp [-0.3,-0.8,-0.1];
_branch_2341 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+70, (_poz_sky select 1)-748, (_poz_sky select 2)-47]]; _branch_2341 setVectorUp [-1,0.6,-0.1];
_branch_2342 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+145, (_poz_sky select 1)-840, (_poz_sky select 2)-45]]; _branch_2342 setVectorUp [-1,30,-0.1];
_branch_25 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+203, (_poz_sky select 1)-626, (_poz_sky select 2)-8]]; _branch_25 setVectorUp [0.2,0.8,0];
_branch_241 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+243, (_poz_sky select 1)-495, (_poz_sky select 2)+17]]; _branch_241 setVectorUp [-0.5,0.2,0];
_branch_242 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+343, (_poz_sky select 1)-555, (_poz_sky select 2)+35]]; _branch_242 setVectorUp [-0.5,0.2,0];
_branch_26 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+201, (_poz_sky select 1)-755, (_poz_sky select 2)+8]]; _branch_26 setVectorUp [0.2,0.8,0];
_branch_27 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+207, (_poz_sky select 1)-875, (_poz_sky select 2)+39]]; _branch_27 setVectorUp [0.3,-1,-0.1];
sleep 0.2;
deleteVehicle _branch_2;deleteVehicle _branch_21;deleteVehicle _branch_22;deleteVehicle _branch_23;deleteVehicle _branch_231;deleteVehicle _branch_232;deleteVehicle _branch_2321;deleteVehicle _branch_2322;
deleteVehicle _branch_23221;deleteVehicle _branch_23222;deleteVehicle _branch_23223;deleteVehicle _branch_23224;deleteVehicle _branch_2323;deleteVehicle _branch_2324;deleteVehicle _branch_233;
deleteVehicle _branch_234;deleteVehicle _branch_2341;deleteVehicle _branch_2342;deleteVehicle _branch_24;deleteVehicle _branch_241;deleteVehicle _branch_242;deleteVehicle _branch_25;deleteVehicle _branch_26;deleteVehicle _branch_27;
deleteVehicle _branch_211;deleteVehicle _branch_212;deleteVehicle _branch_213;deleteVehicle _branch_2131;deleteVehicle _branch_2132;deleteVehicle _branch_2133;deleteVehicle _branch_2134;
deleteVehicle _branch_2135;deleteVehicle _branch_214;deleteVehicle _branch_215;
};

fnc_branched_light_10_mijloc_centru= {
private ["_poz_sky","_branch_1","_branch_2","_branch_3","_branch_4","_branch_11","_branch_111","_branch_1111","_branch_112","_branch_113","_branch_114","_branch_115","_branch_12",
"_branch_13","_branch_1301","_branch_1302","_branch_1303","_branch_131","_branch_132","_branch_1321","_branch_133","_branch_134","_branch_14","_branch_15",
"_branch_16","_branch_17","_branch_21","_branch_211","_branch_212","_branch_213","_branch_2131","_branch_2132","_branch_2133","_branch_2134","_branch_2133",
"_branch_214","_branch_215","_branch_22","_branch_23","_branch_231","_branch_232","_branch_2321","_branch_2322","_branch_23221","_branch_23222","_branch_23223",
"_branch_23224","_branch_2323","_branch_2324","_branch_233","_branch_234","_branch_2341","_branch_2342","_branch_24","_branch_241","_branch_242","_branch_25",
"_branch_26","_branch_27","_branch_31","_branch_32","_branch_321","_branch_3211","_branch_3212","_branch_3213","_branch_3214","_branch_322","_branch_33",
"_branch_34","_branch_35","_branch_36","_branch_37"];
_poz_sky = _this select 0; [_poz_sky] spawn fnc_lit;
_branch_2 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+80, (_poz_sky select 1)-40, (_poz_sky select 2)+10]]; _branch_2 setVectorUp [0.1,1,0]; sleep 0.01;
_branch_21 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+55, (_poz_sky select 1)-155, (_poz_sky select 2)+12.5]]; _branch_21 setVectorUp [-0.5,-0.9,0]; sleep 0.01;
_branch_22 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+60, (_poz_sky select 1)-275, (_poz_sky select 2)+2]]; _branch_22 setVectorUp [-0.5,0.7,0]; sleep 0.01;
_branch_23 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+100, (_poz_sky select 1)-390, (_poz_sky select 2)-6]]; _branch_23 setVectorUp [-0.5,1,-0.5]; sleep 0.01;
_branch_24 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+173, (_poz_sky select 1)-495, (_poz_sky select 2)-5]]; _branch_24 setVectorUp [0.6,-1,-0.5]; sleep 0.01;
_branch_25 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+203, (_poz_sky select 1)-626, (_poz_sky select 2)-8]]; _branch_25 setVectorUp [0.2,0.8,0];
	[_poz_sky] spawn 
		{
		private ["_poz_sky_sec"];
		_poz_sky_sec=_this select 0;
		_branch_241 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky_sec select 0)+243, (_poz_sky_sec select 1)-495, (_poz_sky_sec select 2)+17]]; _branch_241 setVectorUp [-0.5,0.2,0];sleep 0.01;
		_branch_242 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky_sec select 0)+343, (_poz_sky_sec select 1)-555, (_poz_sky_sec select 2)+35]]; _branch_242 setVectorUp [-0.5,0.2,0];
		sleep 0.02;
		deleteVehicle _branch_241;sleep 0.01; deleteVehicle _branch_242;
		};
sleep 0.01;
_branch_26 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+201, (_poz_sky select 1)-755, (_poz_sky select 2)+8]]; _branch_26 setVectorUp [0.2,0.8,0];sleep 0.01;
_branch_27 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+207, (_poz_sky select 1)-875, (_poz_sky select 2)+39]]; _branch_27 setVectorUp [0.3,-1,-0.1];
sleep 0.1;
deleteVehicle _branch_2;sleep 0.01;deleteVehicle _branch_21;sleep 0.01;deleteVehicle _branch_22;sleep 0.01;deleteVehicle _branch_23;sleep 0.01;
deleteVehicle _branch_24;sleep 0.01;deleteVehicle _branch_25;sleep 0.01;deleteVehicle _branch_26;sleep 0.01;deleteVehicle _branch_27;
sleep 0.01;
_branch_2 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+80, (_poz_sky select 1)-40, (_poz_sky select 2)+10]]; _branch_2 setVectorUp [0.1,1,0];
_branch_21 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+55, (_poz_sky select 1)-155, (_poz_sky select 2)+12.5]]; _branch_21 setVectorUp [-0.5,-0.9,0];
_branch_22 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+60, (_poz_sky select 1)-275, (_poz_sky select 2)+2]]; _branch_22 setVectorUp [-0.5,0.7,0];
_branch_23 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+100, (_poz_sky select 1)-390, (_poz_sky select 2)-6]]; _branch_23 setVectorUp [-0.5,1,-0.5];
_branch_24 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+173, (_poz_sky select 1)-495, (_poz_sky select 2)-5]]; _branch_24 setVectorUp [0.6,-1,-0.5];
_branch_25 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+203, (_poz_sky select 1)-626, (_poz_sky select 2)-8]]; _branch_25 setVectorUp [0.2,0.8,0];
_branch_241 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+243, (_poz_sky select 1)-495, (_poz_sky select 2)+17]]; _branch_241 setVectorUp [-0.5,0.2,0];
_branch_242 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+343, (_poz_sky select 1)-555, (_poz_sky select 2)+35]]; _branch_242 setVectorUp [-0.5,0.2,0];
_branch_26 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+201, (_poz_sky select 1)-755, (_poz_sky select 2)+8]]; _branch_26 setVectorUp [0.2,0.8,0];
_branch_27 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+207, (_poz_sky select 1)-875, (_poz_sky select 2)+39]]; _branch_27 setVectorUp [0.3,-1,-0.1];
sleep 0.02;
deleteVehicle _branch_2;deleteVehicle _branch_21;deleteVehicle _branch_22;deleteVehicle _branch_23;
deleteVehicle _branch_24;deleteVehicle _branch_241;deleteVehicle _branch_242;deleteVehicle _branch_25;deleteVehicle _branch_26;deleteVehicle _branch_27;
};

fnc_branched_light_10_mijloc_stanga= {
private ["_poz_sky","_branch_1","_branch_2","_branch_3","_branch_4","_branch_11","_branch_111","_branch_1111","_branch_112","_branch_113","_branch_114","_branch_115","_branch_12",
"_branch_13","_branch_1301","_branch_1302","_branch_1303","_branch_131","_branch_132","_branch_1321","_branch_133","_branch_134","_branch_14","_branch_15",
"_branch_16","_branch_17","_branch_21","_branch_211","_branch_212","_branch_213","_branch_2131","_branch_2132","_branch_2133","_branch_2134","_branch_2133",
"_branch_214","_branch_215","_branch_22","_branch_23","_branch_231","_branch_232","_branch_2321","_branch_2322","_branch_23221","_branch_23222","_branch_23223",
"_branch_23224","_branch_2323","_branch_2324","_branch_233","_branch_234","_branch_2341","_branch_2342","_branch_24","_branch_241","_branch_242","_branch_25",
"_branch_26","_branch_27","_branch_31","_branch_32","_branch_321","_branch_3211","_branch_3212","_branch_3213","_branch_3214","_branch_322","_branch_33",
"_branch_34","_branch_35","_branch_36","_branch_37","_branch_23411"];
_poz_sky = _this select 0; [_poz_sky] spawn fnc_lit;
_branch_2 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+80, (_poz_sky select 1)-40, (_poz_sky select 2)+10]]; _branch_2 setVectorUp [0.1,1,0]; sleep 0.01;
_branch_21 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+55, (_poz_sky select 1)-155, (_poz_sky select 2)+12.5]]; _branch_21 setVectorUp [-0.5,-0.9,0]; sleep 0.01;
_branch_22 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+60, (_poz_sky select 1)-275, (_poz_sky select 2)+2]]; _branch_22 setVectorUp [-0.5,0.7,0]; sleep 0.01;
	[_poz_sky] spawn 
		{
		private ["_poz_sky_sec"];
		_poz_sky_sec=_this select 0;
		_branch_231 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky_sec select 0)+80, (_poz_sky_sec select 1)-390, (_poz_sky_sec select 2)-6]]; _branch_231 setdir 90; _branch_231 setVectorUp [-0.1,-0.8,-0.1]; sleep 0.01;
		_branch_232 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky_sec select 0)+33.5, (_poz_sky_sec select 1)-509, (_poz_sky_sec select 2)-23]]; _branch_232 setdir 180; _branch_232 setVectorUp [-0.3,-0.8,-0.1]; sleep 0.01;
		_branch_2321 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky_sec select 0)-26, (_poz_sky_sec select 1)-509, (_poz_sky_sec select 2)-10]]; _branch_2321 setVectorUp [-0.3,-0.1,-0.1]; sleep 0.01;
		_branch_2322 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky_sec select 0)-150, (_poz_sky_sec select 1)-518, (_poz_sky_sec select 2)-35]]; _branch_2322 setVectorUp [-0.3,-0.1,-0.1];sleep 0.01;
		_branch_23221 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky_sec select 0)-150, (_poz_sky_sec select 1)-572, (_poz_sky_sec select 2)-72]]; _branch_23221 setVectorUp [0.1,1,1];sleep 0.01;
		_branch_23223 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky_sec select 0)-160, (_poz_sky_sec select 1)-682, (_poz_sky_sec select 2)-117]]; _branch_23223 setVectorUp [-0.5,1,0.5];sleep 0.01;
		_branch_23224 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky_sec select 0)-145, (_poz_sky_sec select 1)-800, (_poz_sky_sec select 2)-150]]; _branch_23224 setVectorUp [-0.5,1,0.1];sleep 0.01;
		_branch_2323 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky_sec select 0)-250, (_poz_sky_sec select 1)-533, (_poz_sky_sec select 2)-89]]; _branch_2323 setVectorUp [-0.3,-0.1,-0.1];sleep 0.01;
		_branch_2324 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky_sec select 0)-353, (_poz_sky_sec select 1)-588, (_poz_sky_sec select 2)-135]]; _branch_2324 setVectorUp [-1,-0.1,0];
		sleep 0.04;
		deleteVehicle _branch_231; sleep 0.01; deleteVehicle _branch_232; sleep 0.01; deleteVehicle _branch_2321; sleep 0.01; deleteVehicle _branch_2322; sleep 0.01; deleteVehicle _branch_23221; sleep 0.01;
		deleteVehicle _branch_23223; sleep 0.01; deleteVehicle _branch_23224; sleep 0.01; deleteVehicle _branch_2323; sleep 0.01; deleteVehicle _branch_2324; sleep 0.01;
		};
sleep 0.01;
_branch_233 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+23, (_poz_sky select 1)-629, (_poz_sky select 2)-42]]; _branch_233 setVectorUp [-0.3,-0.8,-0.1];	sleep 0.01;
_branch_234 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)-1, (_poz_sky select 1)-748, (_poz_sky select 2)-47]]; _branch_234 setVectorUp [-0.3,-0.8,-0.1];sleep 0.01;
_branch_2341 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+70, (_poz_sky select 1)-748, (_poz_sky select 2)-47]]; _branch_2341 setVectorUp [-1,0.6,-0.1];sleep 0.01;
_branch_23411 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)-30, (_poz_sky select 1)-860, (_poz_sky select 2)-72]]; _branch_23411 setVectorUp [-0.5,1,0.5]; sleep 0.01;
_branch_2342 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+145, (_poz_sky select 1)-840, (_poz_sky select 2)-45]]; _branch_2342 setVectorUp [-1,30,-0.1];
sleep 0.1;
deleteVehicle _branch_2;sleep 0.01;deleteVehicle _branch_21;sleep 0.01;deleteVehicle _branch_22;sleep 0.01;deleteVehicle _branch_233;sleep 0.01;deleteVehicle _branch_234;sleep 0.01;deleteVehicle _branch_2341;sleep 0.01;
deleteVehicle _branch_23411;sleep 0.01;deleteVehicle _branch_2342;
sleep 0.1;
_branch_2 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+80, (_poz_sky select 1)-40, (_poz_sky select 2)+10]]; _branch_2 setVectorUp [0.1,1,0];
_branch_21 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+55, (_poz_sky select 1)-155, (_poz_sky select 2)+12.5]]; _branch_21 setVectorUp [-0.5,-0.9,0];
_branch_22 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+60, (_poz_sky select 1)-275, (_poz_sky select 2)+2]]; _branch_22 setVectorUp [-0.5,0.7,0];
_branch_231 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+80, (_poz_sky select 1)-390, (_poz_sky select 2)-6]]; _branch_231 setdir 90; _branch_231 setVectorUp [-0.1,-0.8,-0.1];
_branch_232 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+33.5, (_poz_sky select 1)-509, (_poz_sky select 2)-23]]; _branch_232 setdir 180; _branch_232 setVectorUp [-0.3,-0.8,-0.1];
_branch_2321 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)-26, (_poz_sky select 1)-509, (_poz_sky select 2)-10]]; _branch_2321 setVectorUp [-0.3,-0.1,-0.1];
_branch_2322 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)-150, (_poz_sky select 1)-518, (_poz_sky select 2)-35]]; _branch_2322 setVectorUp [-0.3,-0.1,-0.1];
_branch_23221 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)-150, (_poz_sky select 1)-572, (_poz_sky select 2)-72]]; _branch_23221 setVectorUp [0.1,1,1];
_branch_23223 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)-160, (_poz_sky select 1)-682, (_poz_sky select 2)-117]]; _branch_23223 setVectorUp [-0.5,1,0.5];
_branch_23224 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)-145, (_poz_sky select 1)-800, (_poz_sky select 2)-150]]; _branch_23224 setVectorUp [-0.5,1,0.1];
_branch_2323 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)-250, (_poz_sky select 1)-533, (_poz_sky select 2)-89]]; _branch_2323 setVectorUp [-0.3,-0.1,-0.1];
_branch_2324 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)-353, (_poz_sky select 1)-588, (_poz_sky select 2)-135]]; _branch_2324 setVectorUp [-1,-0.1,0];
_branch_233 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+23, (_poz_sky select 1)-629, (_poz_sky select 2)-42]]; _branch_233 setVectorUp [-0.3,-0.8,-0.1];
_branch_234 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)-1, (_poz_sky select 1)-748, (_poz_sky select 2)-47]]; _branch_234 setVectorUp [-0.3,-0.8,-0.1];
_branch_2341 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+70, (_poz_sky select 1)-748, (_poz_sky select 2)-47]]; _branch_2341 setVectorUp [-1,0.6,-0.1];
_branch_23411 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)-30, (_poz_sky select 1)-860, (_poz_sky select 2)-72]]; _branch_23411 setVectorUp [-0.5,1,0.5];
_branch_2342 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+145, (_poz_sky select 1)-840, (_poz_sky select 2)-45]]; _branch_2342 setVectorUp [-1,30,-0.1];
sleep 0.2;
deleteVehicle _branch_231; deleteVehicle _branch_232; deleteVehicle _branch_2321; deleteVehicle _branch_2322; deleteVehicle _branch_23221; deleteVehicle _branch_23223; deleteVehicle _branch_23224; deleteVehicle _branch_2323;
deleteVehicle _branch_2324; deleteVehicle _branch_2; deleteVehicle _branch_21; deleteVehicle _branch_22; deleteVehicle _branch_233; deleteVehicle _branch_234; deleteVehicle _branch_2341;deleteVehicle _branch_23411; deleteVehicle _branch_2342;
};

fnc_branched_light_11_right_simplu= {
private ["_poz_sky","_branch_1","_branch_2","_branch_3","_branch_4","_branch_11","_branch_111","_branch_1111","_branch_112","_branch_113","_branch_114","_branch_115","_branch_12",
"_branch_13","_branch_1301","_branch_1302","_branch_1303","_branch_131","_branch_132","_branch_1321","_branch_133","_branch_134","_branch_14","_branch_15",
"_branch_16","_branch_17","_branch_21","_branch_211","_branch_212","_branch_213","_branch_2131","_branch_2132","_branch_2133","_branch_2134","_branch_2133",
"_branch_214","_branch_215","_branch_22","_branch_23","_branch_231","_branch_232","_branch_2321","_branch_2322","_branch_23221","_branch_23222","_branch_23223",
"_branch_23224","_branch_2323","_branch_2324","_branch_233","_branch_234","_branch_2341","_branch_2342","_branch_24","_branch_241","_branch_242","_branch_25",
"_branch_26","_branch_27","_branch_31","_branch_32","_branch_321","_branch_3211","_branch_3212","_branch_3213","_branch_3214","_branch_322","_branch_33",
"_branch_34","_branch_35","_branch_36","_branch_37"];
_poz_sky = _this select 0; [_poz_sky] spawn fnc_lit;
_branch_3 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+120, (_poz_sky select 1)+5, (_poz_sky select 2)+15]]; _branch_3 setVectorUp [-1,-0.1,0];sleep 0.01;
_branch_31 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+240, (_poz_sky select 1)+36, (_poz_sky select 2)-8]]; _branch_31 setdir 90; _branch_31 setVectorUp [-1,-0.1,0];sleep 0.01;
_branch_32 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+366, (_poz_sky select 1)+25, (_poz_sky select 2)-3]]; _branch_32 setdir 90; _branch_32 setVectorUp [-1,-0.1,0];sleep 0.01;
_branch_33 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+480, (_poz_sky select 1)+56, (_poz_sky select 2)-21]]; _branch_33 setdir 90; _branch_33 setVectorUp [-1,-0.1,0];sleep 0.01;
_branch_34 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+605, (_poz_sky select 1)+44, (_poz_sky select 2)]]; _branch_34 setdir 0; _branch_34 setVectorUp [-1,0,0];sleep 0.01;
_branch_35 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+725, (_poz_sky select 1)+13, (_poz_sky select 2)-14]]; _branch_35 setVectorUp [-1,0,0];sleep 0.01;
_branch_36 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+850, (_poz_sky select 1)+36, (_poz_sky select 2)-20]]; _branch_36 setVectorUp [-0.5,0,0];sleep 0.01;
_branch_37 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+970, (_poz_sky select 1)+73, (_poz_sky select 2)-7]]; _branch_37 setdir 90; _branch_37 setVectorUp [-1,-0.1,0];
sleep 0.02;
deleteVehicle _branch_3; sleep 0.01;deleteVehicle _branch_31; sleep 0.01;deleteVehicle _branch_32; sleep 0.01;deleteVehicle _branch_33; sleep 0.01;deleteVehicle _branch_34; sleep 0.01;
deleteVehicle _branch_35; sleep 0.01;deleteVehicle _branch_36; sleep 0.01;deleteVehicle _branch_37;
sleep 0.1;
_branch_3 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+120, (_poz_sky select 1)+5, (_poz_sky select 2)+15]]; _branch_3 setVectorUp [-1,-0.1,0];
_branch_31 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+240, (_poz_sky select 1)+36, (_poz_sky select 2)-8]]; _branch_31 setdir 90; _branch_31 setVectorUp [-1,-0.1,0];
_branch_32 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+366, (_poz_sky select 1)+25, (_poz_sky select 2)-3]]; _branch_32 setdir 90; _branch_32 setVectorUp [-1,-0.1,0];
_branch_33 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+480, (_poz_sky select 1)+56, (_poz_sky select 2)-21]]; _branch_33 setdir 90; _branch_33 setVectorUp [-1,-0.1,0];
_branch_34 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+605, (_poz_sky select 1)+44, (_poz_sky select 2)]]; _branch_34 setdir 0; _branch_34 setVectorUp [-1,0,0];
_branch_35 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+725, (_poz_sky select 1)+13, (_poz_sky select 2)-14]]; _branch_35 setVectorUp [-1,0,0];
_branch_36 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+850, (_poz_sky select 1)+36, (_poz_sky select 2)-20]]; _branch_36 setVectorUp [-0.5,0,0];
_branch_37 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+970, (_poz_sky select 1)+73, (_poz_sky select 2)-7]]; _branch_37 setdir 90; _branch_37 setVectorUp [-1,-0.1,0];
sleep 0.1;
deleteVehicle _branch_3;
deleteVehicle _branch_31;
deleteVehicle _branch_32;
deleteVehicle _branch_33;
deleteVehicle _branch_34;
deleteVehicle _branch_35;
deleteVehicle _branch_36;
deleteVehicle _branch_37;
};

fnc_branched_light_11_right_complicat= {
private ["_poz_sky","_branch_1","_branch_2","_branch_3","_branch_4","_branch_11","_branch_111","_branch_1111","_branch_112","_branch_113","_branch_114","_branch_115","_branch_12",
"_branch_13","_branch_1301","_branch_1302","_branch_1303","_branch_131","_branch_132","_branch_1321","_branch_133","_branch_134","_branch_14","_branch_15",
"_branch_16","_branch_17","_branch_21","_branch_211","_branch_212","_branch_213","_branch_2131","_branch_2132","_branch_2133","_branch_2134","_branch_2133",
"_branch_214","_branch_215","_branch_22","_branch_23","_branch_231","_branch_232","_branch_2321","_branch_2322","_branch_23221","_branch_23222","_branch_23223",
"_branch_23224","_branch_2323","_branch_2324","_branch_233","_branch_234","_branch_2341","_branch_2342","_branch_24","_branch_241","_branch_242","_branch_25",
"_branch_26","_branch_27","_branch_31","_branch_32","_branch_321","_branch_3211","_branch_3212","_branch_3213","_branch_3214","_branch_322","_branch_33",
"_branch_34","_branch_35","_branch_36","_branch_37"];
_poz_sky = _this select 0; [_poz_sky] spawn fnc_lit;
_branch_3 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+120, (_poz_sky select 1)+5, (_poz_sky select 2)+15]]; _branch_3 setVectorUp [-1,-0.1,0];sleep 0.01;
_branch_31 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+240, (_poz_sky select 1)+36, (_poz_sky select 2)-8]]; _branch_31 setdir 90; _branch_31 setVectorUp [-1,-0.1,0];sleep 0.01;
_branch_32 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+366, (_poz_sky select 1)+25, (_poz_sky select 2)-3]]; _branch_32 setdir 90; _branch_32 setVectorUp [-1,-0.1,0];sleep 0.01;
_branch_33 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+480, (_poz_sky select 1)+56, (_poz_sky select 2)-21]]; _branch_33 setdir 90; _branch_33 setVectorUp [-1,-0.1,0];
	[_poz_sky] spawn 
	{
	private ["_poz_sky_sec"];_poz_sky_sec=_this select 0;
	_branch_321 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky_sec select 0)+200, (_poz_sky_sec select 1)-55, (_poz_sky_sec select 2)-2]]; _branch_321 setVectorUp [-1,1,0]; sleep 0.01;
	_branch_3211 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky_sec select 0)+302, (_poz_sky_sec select 1)-71, (_poz_sky_sec select 2)-25]]; _branch_3211 setdir 90; _branch_3211 setVectorUp [-1,-0.1,0]; sleep 0.01;
	_branch_322 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky_sec select 0)+240, (_poz_sky_sec select 1)-165, (_poz_sky_sec select 2)-38]]; _branch_322 setVectorUp [-1,-9,0]; sleep 0.01;
	_branch_3212 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky_sec select 0)+423, (_poz_sky_sec select 1)-79, (_poz_sky_sec select 2)-23]]; _branch_3212 setdir 90; _branch_3212 setVectorUp [-1,-0.1,0]; sleep 0.01;
	_branch_3213 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky_sec select 0)+511, (_poz_sky_sec select 1)-140, (_poz_sky_sec select 2)-39]]; _branch_3213 setVectorUp [-1,1,0.1]; sleep 0.01;
	_branch_3214 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky_sec select 0)+609, (_poz_sky_sec select 1)-158, (_poz_sky_sec select 2)-66]]; _branch_3214 setdir 90; _branch_3214 setVectorUp [-1,-0.1,0];	
	sleep 0.03;
	deleteVehicle _branch_321; sleep 0.01; deleteVehicle _branch_3211; sleep 0.01; deleteVehicle _branch_322; sleep 0.01; deleteVehicle _branch_3212; sleep 0.01; deleteVehicle _branch_3213; sleep 0.01; deleteVehicle _branch_3214;	
	};
sleep 0.01;
_branch_34 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+605, (_poz_sky select 1)+44, (_poz_sky select 2)]]; _branch_34 setdir 0; _branch_34 setVectorUp [-1,0,0];sleep 0.01;
_branch_35 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+725, (_poz_sky select 1)+13, (_poz_sky select 2)-14]]; _branch_35 setVectorUp [-1,0,0];sleep 0.01;
_branch_36 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+850, (_poz_sky select 1)+36, (_poz_sky select 2)-20]]; _branch_36 setVectorUp [-0.5,0,0];sleep 0.01;
_branch_37 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+970, (_poz_sky select 1)+73, (_poz_sky select 2)-7]]; _branch_37 setdir 90; _branch_37 setVectorUp [-1,-0.1,0];
sleep 0.1;
deleteVehicle _branch_3;deleteVehicle _branch_31;deleteVehicle _branch_32;deleteVehicle _branch_33;deleteVehicle _branch_34;deleteVehicle _branch_35;deleteVehicle _branch_36;deleteVehicle _branch_37;
sleep 0.1;
_branch_3 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+120, (_poz_sky select 1)+5, (_poz_sky select 2)+15]]; _branch_3 setVectorUp [-1,-0.1,0];
_branch_31 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+240, (_poz_sky select 1)+36, (_poz_sky select 2)-8]]; _branch_31 setdir 90; _branch_31 setVectorUp [-1,-0.1,0];
_branch_32 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+366, (_poz_sky select 1)+25, (_poz_sky select 2)-3]]; _branch_32 setdir 90; _branch_32 setVectorUp [-1,-0.1,0];
_branch_33 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+480, (_poz_sky select 1)+56, (_poz_sky select 2)-21]]; _branch_33 setdir 90; _branch_33 setVectorUp [-1,-0.1,0];
_branch_321 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+200, (_poz_sky select 1)-55, (_poz_sky select 2)-2]]; _branch_321 setVectorUp [-1,1,0];
_branch_3211 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+302, (_poz_sky select 1)-71, (_poz_sky select 2)-25]]; _branch_3211 setdir 90; _branch_3211 setVectorUp [-1,-0.1,0];
_branch_3212 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+423, (_poz_sky select 1)-79, (_poz_sky select 2)-23]]; _branch_3212 setdir 90; _branch_3212 setVectorUp [-1,-0.1,0];
_branch_3213 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+511, (_poz_sky select 1)-140, (_poz_sky select 2)-39]]; _branch_3213 setVectorUp [-1,1,0.1];
_branch_3214 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+609, (_poz_sky select 1)-158, (_poz_sky select 2)-66]]; _branch_3214 setdir 90; _branch_3214 setVectorUp [-1,-0.1,0];
_branch_322 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+240, (_poz_sky select 1)-165, (_poz_sky select 2)-38]]; _branch_322 setVectorUp [-1,-9,0];
_branch_34 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+605, (_poz_sky select 1)+44, (_poz_sky select 2)]]; _branch_34 setdir 0; _branch_34 setVectorUp [-1,0,0];
_branch_35 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+725, (_poz_sky select 1)+13, (_poz_sky select 2)-14]]; _branch_35 setVectorUp [-1,0,0];
_branch_36 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+850, (_poz_sky select 1)+36, (_poz_sky select 2)-20]]; _branch_36 setVectorUp [-0.5,0,0];
_branch_37 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+970, (_poz_sky select 1)+73, (_poz_sky select 2)-7]]; _branch_37 setdir 90; _branch_37 setVectorUp [-1,-0.1,0];
sleep 0.1;
deleteVehicle _branch_3;deleteVehicle _branch_31;deleteVehicle _branch_32;deleteVehicle _branch_321;deleteVehicle _branch_3211;deleteVehicle _branch_3212;deleteVehicle _branch_3213;deleteVehicle _branch_3214;
deleteVehicle _branch_322;deleteVehicle _branch_33;deleteVehicle _branch_34;deleteVehicle _branch_35;deleteVehicle _branch_36;deleteVehicle _branch_37;
};

fnc_branched_light_11_right_sec_1= {
private ["_poz_sky","_branch_1","_branch_2","_branch_3","_branch_4","_branch_11","_branch_111","_branch_1111","_branch_112","_branch_113","_branch_114","_branch_115","_branch_12",
"_branch_13","_branch_1301","_branch_1302","_branch_1303","_branch_131","_branch_132","_branch_1321","_branch_133","_branch_134","_branch_14","_branch_15",
"_branch_16","_branch_17","_branch_21","_branch_211","_branch_212","_branch_213","_branch_2131","_branch_2132","_branch_2133","_branch_2134","_branch_2133",
"_branch_214","_branch_215","_branch_22","_branch_23","_branch_231","_branch_232","_branch_2321","_branch_2322","_branch_23221","_branch_23222","_branch_23223",
"_branch_23224","_branch_2323","_branch_2324","_branch_233","_branch_234","_branch_2341","_branch_2342","_branch_24","_branch_241","_branch_242","_branch_25",
"_branch_26","_branch_27","_branch_31","_branch_32","_branch_321","_branch_3211","_branch_3212","_branch_3213","_branch_3214","_branch_322","_branch_33",
"_branch_34","_branch_35","_branch_36","_branch_37"];
_poz_sky = _this select 0; [_poz_sky] spawn fnc_lit;
_branch_321 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+200, (_poz_sky select 1)-55, (_poz_sky select 2)-2]]; _branch_321 setVectorUp [-1,1,0]; sleep 0.01;
_branch_3211 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+302, (_poz_sky select 1)-71, (_poz_sky select 2)-25]]; _branch_3211 setdir 90; _branch_3211 setVectorUp [-1,-0.1,0]; sleep 0.01;
_branch_322 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+240, (_poz_sky select 1)-165, (_poz_sky select 2)-38]]; _branch_322 setVectorUp [-1,-9,0]; sleep 0.01;
_branch_3212 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+423, (_poz_sky select 1)-79, (_poz_sky select 2)-23]]; _branch_3212 setdir 90; _branch_3212 setVectorUp [-1,-0.1,0]; sleep 0.01;
_branch_3213 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+511, (_poz_sky select 1)-140, (_poz_sky select 2)-39]]; _branch_3213 setVectorUp [-1,1,0.1]; sleep 0.01;
_branch_3214 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+609, (_poz_sky select 1)-158, (_poz_sky select 2)-66]]; _branch_3214 setdir 90; _branch_3214 setVectorUp [-1,-0.1,0];	
sleep 0.02;
deleteVehicle _branch_321;sleep 0.01; deleteVehicle _branch_3211; sleep 0.01; deleteVehicle _branch_322; sleep 0.01; deleteVehicle _branch_3212; sleep 0.01; deleteVehicle _branch_3213; sleep 0.01; deleteVehicle _branch_3214;
sleep 0.1;
_branch_321 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+200, (_poz_sky select 1)-55, (_poz_sky select 2)-2]]; _branch_321 setVectorUp [-1,1,0];
_branch_3211 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+302, (_poz_sky select 1)-71, (_poz_sky select 2)-25]]; _branch_3211 setdir 90; _branch_3211 setVectorUp [-1,-0.1,0];
_branch_322 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+240, (_poz_sky select 1)-165, (_poz_sky select 2)-38]]; _branch_322 setVectorUp [-1,-9,0];
_branch_3212 = createSimpleObject ["A3\data_f\blesk1.p3d", [(_poz_sky select 0)+423, (_poz_sky select 1)-79, (_poz_sky select 2)-23]]; _branch_3212 setdir 90; _branch_3212 setVectorUp [-1,-0.1,0];
_branch_3213 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+511, (_poz_sky select 1)-140, (_poz_sky select 2)-39]]; _branch_3213 setVectorUp [-1,1,0.1];
_branch_3214 = createSimpleObject ["A3\data_f\blesk2.p3d", [(_poz_sky select 0)+609, (_poz_sky select 1)-158, (_poz_sky select 2)-66]]; _branch_3214 setdir 90; _branch_3214 setVectorUp [-1,-0.1,0];	
sleep 0.2;
deleteVehicle _branch_321; deleteVehicle _branch_3211; deleteVehicle _branch_322; deleteVehicle _branch_3212; deleteVehicle _branch_3213; deleteVehicle _branch_3214;
};

fnc_spider_tot= {
	private ["_poz_sky"];
	_poz_sky = _this select 0; [_poz_sky] spawn fnc_lit;
	[_poz_sky] spawn fnc_branched_light_9_left_complicat;
	[_poz_sky] spawn fnc_branched_light_10_mijloc_complicat;
	[_poz_sky] spawn fnc_branched_light_11_right_complicat;
};