bridge = createSimpleObject ["a3\structures_f_exp\infrastructure\bridges\bridgesea_01_f.p3d", [2467.722,3828.24,42.2024]];
bridge setVectorDir [0.85,-0.0156231,0];
oneachframe { 
bridge setVelocityTransformation [getPosASLVisual bridge, getPosASLVisual bridge vectorAdd [0,0,-0.1],[0,0,-0.1],[0,0,0.1],vectorDirVisual bridge, vectorDirVisual bridge, vectorUpVisual bridge, vectorUpVisual bridge, 0.1];
if ((getposasl bridge) select 2 < 15.93) exitWith { 
  onEachFrame {} 
 };
}; 

bridge = createSimpleObject ["a3\structures_f_exp\infrastructure\bridges\bridgesea_01_f.p3d", [2467.722,3828.24,16.8887]]; 
bridge setVectorDir [0.85,-0.0156231,0];
//bridge setVectorDirAndUp [[1,-0.0175,-0.00069],[0,0,1]];
oneachframe {  
bridge setVelocityTransformation [getPosASLVisual bridge, getPosASLVisual bridge vectorAdd [0,0,0.05],[0,0,0.05],[0,0,0.1],vectorDirVisual bridge, vectorDirVisual bridge, vectorUpVisual bridge, vectorUpVisual bridge, 0.1]; 
if ((getposasl bridge) select 2 > 40.2) exitWith {  
  onEachFrame {}  
 }; 
};