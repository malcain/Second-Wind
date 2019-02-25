//////////////////////////////////////////////////////////
// featherEffect.sqf 
// Created by: johnnyboy
//
// Puff of feathers spawned around object.  Preferably a bird!!  Or a guy with down vest!
//
// nul = [shooter,_projectile] execVM "JBOY\meatEffect.sqf";
//////////////////////////////////////////////////////////
// Execute this on all clients
params["_shooter","_projectile"];
Private["_effect"];
//hint "In leafEffect";


_heading = [getPosATL _projectile, _projectile modelToWorld [0,5,0]] call BIS_fnc_vectorFromXToY; 
_velocity = [_heading,3] call BIS_fnc_vectorMultiply; 
//_velocity = _velocity vectorAdd [0,0,4];

_effect = "#particlesource" createVehicleLocal [0,0,0]; //(getPos player);
/*  Find these here: configfile >> "CfgCloudlets"   INcludes water tracks, dust, etc 
particleShape = "\A3\Plants_F\_Leafs\leaf_damage_small_green.p3d"; ** Best for sugar cane
particleShape = "\A3\Plants_F\_Leafs\leaf_damage_big_green.p3d";
particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
particleShape = "\A3\Plants_F\_Leafs\leaf_NeriumOleander_D.p3d";
particleShape = "\A3\Plants_F\_Leafs\leaf_damage_bigLong_green_01.p3d";
particleShape = "\A3\Plants_F\_Leafs\leaf_damage_bigLong_green_01.p3d";
particleShape = "\A3\data_f\ParticleEffects\Universal\Meat_ca";
particleShape = "\A3\data_f\ParticleEffects\Universal\Meat_ca";
*/
_effect setParticleParams [["\A3\data_f\ParticleEffects\Universal\Meat_ca",  1, 0, 1],//sprite cl_feathers2, cl_leaf2
    "", // ?
       "SpaceObject", // Type
       0.4, //TimmerPer
       .5, //Lifetime
       [0, 0, 0], //position
       _velocity,  //[0, 0, 2], //MoveVelocity
       0, //Simulation rotationvel
       8, //Simulation weight
       4, //Simulation volumne
       0.075, // Simulation rubbing
       [1.4, 2, 4], //Scale
       [[0, 0.6, 0.3, 1], //Color [0.1, 0.1, 0.1, 1]=white [0, 0.6, 0.3, 1]=green
       [0.25, 0.25, 0.25, 0.5], 
       [1, 1, 1, 0]], //[0.5, 0.5, 0.5, 0]], //AnimSpeed?
       [0.08], //
       .1,//0.9, ////randDirPeriod
       0.6, //randDirIntensity
       "", "", ""];
_effect setParticleRandom [0,  //LifeTime
                           [0.25, 0.25, 0], // Position
                           [0.1, 0.1, 0],  // MoveVelocity
                           0,               //RotationVel
                           0.1, // scale
                           [0, 0, 0, 0.1], //color
                           0,//1, //randDirPeriod
                           1];//1]; //randDirIntensity
_effect setParticleCircle [0, [0, 0, 0]];
_effect setDropInterval 0.02;  
//_effect attachTo [_shooter,eyePos _shooter vectorAdd [0,1.5,0]];
_zPos = (eyepos _shooter select 2) - (getposasl _shooter select 2) - .25;
//_effect attachTo [_shooter,[0,2.5,.8]];
_effect attachTo [_shooter,[0,2.5,_zPos]];
sleep .5;
//_emitterArray = _effect getVariable "effects";
//{deleteVehicle _x} forEach _emitterArray;
deleteVehicle _effect;

/*
https://forums.bistudio.com/forums/topic/202203-smoke-script-not-working-without-any-error/
List of particle effects:  https://forums.bistudio.com/topic/148108-particle-editor/?p=2385330
interval =  0.02;
	 CircleRadius = 0;
	 CircleVelocity[] = {0,0,0};
	 particleShape ="\A3\data_f\cl_feathers2";
	 particleFSNtieth =1;
	 particleFSIndex =0;
	 particleFSFrameCount =1;
	 particleFSLoop =0;
	 angle =0;
	 angleVar =0;
	 animationName = "";
	 particleType = "SpaceObject";	             
     timerPeriod = 0.4 ;			    
     lifeTime = 1;			     
     moveVelocity[] = {0, 0, 2};	             
     rotationVelocity = 0;		   
     weight = 8;			             
     volume = 4;			            
     rubbing = 0.075;			  
     size[] = {1,1};			       
     animationSpeed[] = {1};		    	   
     lifeTimeVar = 0;			     
     positionVar[] = {0.25, 0.25, 0};		   
     positionVarConst[] = {0, 0, 0};	    
     moveVelocityVar[] = {0.1, 0.1, 0};	  
     moveVelocityVarConst[] = {0, 0, 0};     
     rotationVelocityVar = 0;		    
     sizeVar = 0.1;			     
     colorVar[] = {0, 0, 0, 0};		     
     randomDirectionPeriodVar = 1;	   
     randomDirectionIntensityVar = 1;	   
     sizeCoef = 1;                            
     colorCoef[]={0,0,0,0.1};                   
     animationSpeedCoef = 1;                  
     destroyOnWaterSurface = 0;               
     destroyOnWaterSurfaceOffset = 0;        
     onSurface = true;                        
     keepOnSurface = false;                   
     surfaceOffset = 0;                     
     bounceOnSurface = 0.6;                   
     bounceOnSurfaceVar = 0.0;               
     postEffects = "";           
     particleEffects = "";
	 
	 Size[]={1.4, 2, 4};color [] ={{0.1, 0.1, 0.1, 1}, {0.25, 0.25, 0.25, 0.5}, {0.5, 0.5, 0.5, 0}}; randomDirectionPeriod = 0.9;
	 randomDirectionIntensity = 0.6;	
	 onTimerScript = "";	
	 beforeDestroyScript = "";
     
     XXXPARTICLEEFFECTSOURCEXXX setParticleCircle [0, [0, 0, 0]];
     XXXPARTICLEEFFECTSOURCEXXX setParticleRandom [0, [0.25, 0.25, 0], [0.1, 0.1, 0], 0, 0.1, [0, 0, 0, 0.1], 1, 1];
     XXXPARTICLEEFFECTSOURCEXXX setParticleParams [["\A3\data_f\cl_feathers2", 1, 0, 1], "", "SpaceObject", 0.4, 1, [0, 0, 0], [0, 0, 2], 0, 8, 4, 0.075, [1.4, 2, 4], [[0.1, 0.1, 0.1, 1], [0.25, 0.25, 0.25, 0.5], [0.5, 0.5, 0.5, 0]], [0.08], 0.9, 0.6, "", "", XXXOBJECTXXX];
     XXXPARTICLEEFFECTSOURCEXXX setDropInterval 0.02;
     
*/