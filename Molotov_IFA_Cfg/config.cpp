class LIB_Molotov_Ammo: BulletBase{
		craterEffects = "";
		soundHit[] = {"\a3\sounds_f\sfx\fire1_loop.wss",0.01,1};
		hit = 1;
		indirectHit = 0.5;
		indirectHitRange = 0.8;
		cartridge = "";
		cost = 2;
		visibleFire = 32;
		audibleFire = 12;
		visibleFireTime = 20;
		airFriction = 0;
		timetolive = 5;
		typicalSpeed = 30;
		deflecting = 90;
        deflectionSlowDown = 0.01;
		explosive = 0.5;
		fuseDistance = 2;
		caliber = 1.5;
		explosionEffects = "LIB_Moltov_Impact_Flame";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale = 1;
		tracerStartTime = 0;
		tracerEndTime = 5;
		soundEmpty[] = {"",1,1,1};
		/*hitGroundSoft[] = {"\a3\sounds_f\sfx\fire1_loop.wss",0.01,1};
		hitGroundHard[] = {"\a3\sounds_f\sfx\fire1_loop.wss",0.01,1};
		hitMan[] = {"\a3\sounds_f\sfx\fire1_loop.wss",0.01,1};
		hitArmor[] = {"\a3\sounds_f\sfx\fire1_loop.wss",0.01,1};
		hitIron[] = {"\a3\sounds_f\sfx\fire1_loop.wss",0.01,1};
		hitBuilding[] = {"\a3\sounds_f\sfx\fire1_loop.wss",0.01,1};
		hitFoliage[] = {"\a3\sounds_f\sfx\fire1_loop.wss",0.01,1};
		hitWood[] = {"\a3\sounds_f\sfx\fire1_loop.wss",0.01,1};
		hitGlass[] = {"\a3\sounds_f\sfx\fire1_loop.wss",0.01,1};
		hitGlassArmored[] = {"\a3\sounds_f\sfx\fire1_loop.wss",0.01,1};
		hitConcrete[] = {"\a3\sounds_f\sfx\fire1_loop.wss",0.01,1};
		hitRubber[] = {"\a3\sounds_f\sfx\fire1_loop.wss",0.01,1};
		hitPlastic[] = {"\a3\sounds_f\sfx\fire1_loop.wss",0.01,1};
		hitDefault[] = {"\a3\sounds_f\sfx\fire1_loop.wss",0.01,1};
		hitMetal[] = {"\a3\sounds_f\sfx\fire1_loop.wss",0.01,1};
		hitMetalplate[] = {"\a3\sounds_f\sfx\fire1_loop.wss",0.01,1};*/
	};




-02394-92384092380

class CfgCloudlets {
    class Default;
    class LIB_MolotovExp: Default {
        interval = 1;
        circleRadius = 0;
        circleVelocity[] = {0,0,0};
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal.p3d";
        particleFSNtieth = 16;
        particleFSIndex = 1;
        particleFSFrameCount = 1;
        particleFSLoop = 0;
        angleVar = 1;
        animationName = "";
        particleType = "Billboard";
        timerPeriod = 1;
        lifeTime = 0.05;
        moveVelocity[] = {0,0,0};
        rotationVelocity = 0;
        weight = 10;
        volume = 7.9;
        rubbing = 0.1;
        size[] = {1,1};
        color[] = {{1,1,1,0},{1,1,1,0}};
        animationSpeed[] = {1};
        randomDirectionPeriod = 0;
        randomDirectionIntensity = 0;
        onTimerScript = "";
        beforeDestroyScript = "\pr\frl\addons\ifa_compat\effects\molotov3.sqf";
        lifeTimeVar = 0;
        positionVar[] = {0,0,0};
        MoveVelocityVar[] = {0,0,0};
        rotationVelocityVar = 0;
        sizeVar = 0.2;
        colorVar[] = {0,0,0,0};
        randomDirectionPeriodVar = 0;
        randomDirectionIntensityVar = 0;
    };
    class MolotovFlameF: Default
    {
        interval = 0.03;
        circleRadius = 0;
        circleVelocity[] = {0,0,0};
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        particleFSNtieth = 16;
        particleFSIndex = 10;
        particleFSFrameCount = 32;
        particleFSLoop = 1;
        angleVar = 1;
        animationName = "";
        particleType = "Billboard";
        timerPeriod = 3;
        lifeTime = 0.3;
        moveVelocity[] = {0,0.15,0};
        rotationVelocity = 0;
        weight = 0.05;
        volume = 0.04;
        rubbing = 0.16;
        size[] = {0.8,0};//size[] = {0.3,0};
        sizeCoef = 1;
        color[] = {{1,0.6,0.6,-80},{1,0.6,0.6,-80},{0,0,0,0}};
        colorCoef[] = {1,1,1,1};
        animationSpeed[] = {1};
        animationSpeedCoef = 1;
        randomDirectionPeriod = 0;
        randomDirectionIntensity = 0;
        onTimerScript = "";
        beforeDestroyScript = "";
        lifeTimeVar = 0.15;
        position[] = {0,0,0};
        positionVar[] = {0.018,0.08,0.018};
        moveVelocityVar[] = {0.03,0.09,0.03};
        rotationVelocityVar = 0;
        sizeVar = 0.06;
        colorVar[] = {0.1,0.1,0.1,0};
        randomDirectionPeriodVar = 0;
        randomDirectionIntensityVar = 0;
    };
    class MolotovFlameS: Default
    {
        interval = 0.01;
        circleRadius = 0;
        circleVelocity[] = {0,0,0};
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        particleFSNtieth = 16;
        particleFSIndex = 7;
        particleFSFrameCount = 48;
        particleFSLoop = 1;
        angleVar = 1;
        animationName = "";
        particleType = "Billboard";
        timerPeriod = 1;
        lifeTime = 1.2;
        moveVelocity[] = {0,0.6,0};
        rotationVelocity = 0;
        weight = 0.05;
        volume = 0.04;
        rubbing = 0.22;
        size[] = {0.54,1.4};//size[] = {0.14,0.4};
        sizeCoef = 1;
        color[] = {{0.1,0.1,0.1,0.03},{0.2,0.2,0.2,0.05},{0.2,0.2,0.2,0.025},{0.3,0.3,0.3,0.01},{0.4,0.4,0.4,0.005}};
        colorCoef[] = {1,1,1,1};
        animationSpeed[] = {1.5,0.5};
        animationSpeedCoef = 1;
        randomDirectionPeriod = 0.4;
        randomDirectionIntensity = 0.02;
        onTimerScript = "";
        beforeDestroyScript = "";
        lifeTimeVar = 0.5;
        position[] = {0,0,0};
        positionVar[] = {0.03,0.03,0.03};
        MoveVelocityVar[] = {0.25,0.5,0.25};
        rotationVelocityVar = 0;
        sizeVar = 0.1;
        colorVar[] = {0,0,0,0};
        randomDirectionPeriodVar = 0.1;
        randomDirectionIntensityVar = 0.01;
    };
    class MolotovFlameZ: Default
    {
        interval = 0.01;
        circleRadius = 0;
        circleVelocity[] = {0,0,0};
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        particleFSNtieth = 16;
        particleFSIndex = 7;
        particleFSFrameCount = 48;
        particleFSLoop = 1;
        angleVar = 1;
        animationName = "";
        particleType = "Billboard";
        timerPeriod = 1;
        lifeTime = 1.2;
        moveVelocity[] = {0,0.6,0};
        rotationVelocity = 1;
        weight = 0.3;
        volume = 0.25;
        rubbing = 0.25;
        size[] = {0.54,1.4};//size[] = {0.14,0.4};
        sizeCoef = 1;
        color[] = {{1,1,1,-1},{1,1,1,-0.8},{1,1,1,-1},{1,1,1,-0.2},{1,1,1,-0.1}};
        colorCoef[] = {1,1,1,1};
        animationSpeed[] = {1.5,0.5};
        animationSpeedCoef = 1;
        randomDirectionPeriod = 0.1;
        randomDirectionIntensity = 0.1;
        onTimerScript = "";
        beforeDestroyScript = "";
        lifeTimeVar = 0.5;
        position[] = {0,0,0};
        positionVar[] = {0.03,0.03,0.03};
        MoveVelocityVar[] = {0.25,0.5,0.25};
        rotationVelocityVar = 0;
        sizeVar = 0.1;
        colorVar[] = {0,0,0,0};
        randomDirectionPeriodVar = 0.1;
        randomDirectionIntensityVar = 0.01;
    };
    class FireBallBrightSmallMolotov: Default
    {
        interval = "0.05 * interval + 0.05";
        circleRadius = 0;
        circleVelocity[] = {0,0,0};
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        particleFSNtieth = 16;
        particleFSIndex = 0;
        particleFSFrameCount = 32;
        particleFSLoop = 0;
        angleVar = 360;
        animationName = "";
        particleType = "Billboard";
        timerPeriod = 1;
        lifeTime = 20.8;
        moveVelocity[] = {0,0.5,0};
        rotationVelocity = 0;
        weight = 0.04;
        volume = 0.04;
        rubbing = 0.1;
        size[] = {"0.0125 * intensity + 2","0.0125 * intensity + 6"};
        color[] = {{1,1,1,-4},{1,1,1,-3},{1,1,1,-2},{1,1,1,-1},{1,1,1,0}};
        animationSpeed[] = {0.5};
        randomDirectionPeriod = 0.2;
        randomDirectionIntensity = 0.2;
        onTimerScript = "";
        beforeDestroyScript = "";
        lifeTimeVar = 0.5;
        positionVar[] = {0.6,1,0.6};
        MoveVelocityVar[] = {1,1,1};
        rotationVelocityVar = 0;
        sizeVar = 0.2;
        colorVar[] = {0,0,0,2};
        randomDirectionPeriodVar = 0;
        randomDirectionIntensityVar = 0;
    };
    class MolotovDestructionSmokeSmall: Default
    {
        interval=0.1;
        circleRadius=0;
        circleVelocity[]={0,0,0};
        particleShape="warfxpe\ParticleEffects\Universal\Smoke_01";
        particleFSNtieth=1;
        particleFSIndex=0;
        particleFSFrameCount=1;
        particleFSLoop=0;
        angleVar=360;
        animationName="";
        particleType="Billboard";
        timerPeriod=1;
        lifeTime=12;//30
        moveVelocity[]={0,1.5,0};
        rotationVelocity=0;
        weight=10;
        volume=7.9000001;
        rubbing=0.075000003;
        size[]={1,5};//size[]={3,15};
        color[]=
        {
            {0.009,0.009,0.009,0.1},
            {0.009,0.009,0.009,0.05},
            {0.009,0.009,0.009,0.01}
        };
        animationSpeed[]={1};
        randomDirectionPeriod=5.5;
        randomDirectionIntensity=0.30000001;
        onTimerScript="";
        beforeDestroyScript="";
        lifeTimeVar=1;
        positionVar[]={0,0,0};
        MoveVelocityVar[]={0.25,0.25,0.25};
        rotationVelocityVar=50;
        sizeVar=0.25;
        colorVar[]={0,0,0,0.5};
        randomDirectionPeriodVar=0;
        randomDirectionIntensityVar=0;
    };
    class ObjectDestructionFire1Molotov: Default
    {
        interval=0.1;
        circleRadius=0;
        circleVelocity[]={0,0,0};
        particleFSNtieth=8;
        particleFSIndex=0;
        particleFSFrameCount=64;
        particleFSLoop=1;
        angleVar=0;
        particleShape="warfxpe\ParticleEffects\Universal\largefire_01";
        animationName="";
        particleType="Billboard";
        timerPeriod=1;
        lifeTime=18;
        moveVelocity[]={0,0.5,0};
        rotationVelocity=0;
        weight=10.5;
        volume=7.9000001;
        rubbing=0.075000003;
        size[]={5,7};
        color[]=
        {
            {1,1,1,0},
            {1,1,1,-4},
            {1,1,1,0}
        };
        animationSpeed[]={0.40000001};
        randomDirectionPeriod=1;
        randomDirectionIntensity=0.4;
        onTimerScript="";
        beforeDestroyScript="";
        lifeTimeVar=0.5;
        positionVar[]={0.5,0.5,0.5};
        moveVelocityVar[]={0,0.5,0};
        rotationVelocityVar=0;
        sizeVar=0.25;
        colorVar[]={0,0,0,0};
        randomDirectionPeriodVar=0;
        randomDirectionIntensityVar=0;
    };
    class ObjectDestructionFire2Molotov: Default
    {
        interval=0.1;
        circleRadius=0;
        circleVelocity[]={0,0,0};
        particleFSNtieth=8;
        particleFSIndex=0;
        particleFSFrameCount=64;
        particleFSLoop=1;
        angleVar=0;
        particleShape="warfxpe\ParticleEffects\Universal\largefire_01";
        animationName="";
        particleType="Billboard";
        timerPeriod=1;
        lifeTime=20;
        moveVelocity[]={0,0.5,0};
        rotationVelocity=0;
        weight=10;
        volume=7.9000001;
        rubbing=0.075000003;
        size[]={2};
        color[]=
        {
            {1,1,1,0},
            {1,1,1,-2},
            {1,1,1,0}
        };
        animationSpeed[]={0.40000001};
        randomDirectionPeriod=0;
        randomDirectionIntensity=0;
        onTimerScript="";
        beforeDestroyScript="";
        lifeTimeVar=0.5;
        positionVar[]={0.5,0.5,0.5};
        moveVelocityVar[]={0,0.5,0};
        rotationVelocityVar=0;
        sizeVar=0.25;
        colorVar[]={0,0,0,0};
        randomDirectionPeriodVar=0;
        randomDirectionIntensityVar=0;
    };
    class MolotovObjectDestructionFire1Small: Default
    {
        interval=0.1;
        circleRadius=0;
        circleVelocity[]={0,0,0};
        particleFSNtieth=8;
        particleFSIndex=0;
        particleFSFrameCount=64;
        particleFSLoop=1;
        angleVar=0;
        particleShape="warfxpe\ParticleEffects\Universal\largefire_01";
        animationName="";
        particleType="Billboard";
        timerPeriod=1;
        lifeTime=2;//
        moveVelocity[]={0,0.5,0};
        rotationVelocity=0;
        weight=11;
        volume=7.9000001;
        rubbing=0.075000003;
        size[]={1.6};
        color[]=
        {
            {1,1,1,0},
            {1,1,1,-4},
            {1,1,1,0}
        };
        animationSpeed[]={0.40000001};
        randomDirectionPeriod=1;
        randomDirectionIntensity=0.4;
        onTimerScript="";
        beforeDestroyScript="";
        lifeTimeVar=0.5;
        positionVar[]={0.5,0.5,0.5};
        moveVelocityVar[]={0,0.5,0};
        rotationVelocityVar=0;
        sizeVar=0.25;
        colorVar[]={0,0,0,0};
        randomDirectionPeriodVar=0;
        randomDirectionIntensityVar=0;
        damageType="Fire";                       //damage type, only available option is "Fire" so far
        coreIntensity = 0.15;                    //damage coeficient in the center of fire
        coreDistance = 2.0;                      //how far can unit get damage
        damageTime = 0.5;                        //how often is unit getting damage
    };
    class MolotovObjectDestructionFireTrail: Default
    {
        interval=0.09;//
        circleRadius=0;
        circleVelocity[]={0,0,0};
        particleShape="A3\data_f\ParticleEffects\Universal\Universal";
        particleFSNtieth=16;
        particleFSIndex=4;
        particleFSFrameCount=16;
        particleFSLoop=0;
        angle=0;
        angleVar=360;
        animationName="";
        particleType="Billboard";
        timerPeriod=1;
        lifeTime=0.9;
        moveVelocity[]={0,0,0};
        rotationVelocity=0;
        weight=10.1;
        volume=7.9;
        rubbing=0.2;
        size[]={0,3,2,1,0.8,0.5,0.2,0};
        color[]=
        {
            {1,1,1,-10},
            {1,1,1,-1},
            {1,1,1,-1},
            {1,1,1,-1},
            {1,1,1,-1},
            {1,1,1,-1},
            {1,1,1,-1}
        };
        animationSpeed[]={1.5};
        randomDirectionPeriod=0.2;
        randomDirectionIntensity=0.6;
        onTimerScript="";
        beforeDestroyScript="";
        lifeTimeVar=0;
        positionVar[]={0,0,0};
        MoveVelocityVar[]={0,0,0};
        rotationVelocityVar=0;
        sizeVar=0;
        colorVar[]={0,0,0,0};
        randomDirectionPeriodVar=0;
        randomDirectionIntensityVar=0;
        emissiveColor[]=
        {
            {1000,1000,1000,1}
        };
    };
};
class MolotovExplosionEffects
{
    class GrenadeExp1
    {
        simulation = "particles";
        type = "LIB_MolotovExp";
        position[] = {0,0,0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.5;
    };
    class ExpSparks
    {
        simulation = "particles";
        type = "ExpSparks";
        position[] = {0,0,0};
        intensity = 1;
        interval = 1;
        lifeTime = 1;
    };
    class FireBall
    {
        simulation="particles";
        type="ObjectDestructionFire1Molotov";
        intensity=1;
        interval=1;
        position[]={0,0,0};
        lifeTime=30;
        enabled="distToWater interpolate [0,0.0001,-1,1]";
    };
    class LightExp
    {
        simulation = "light";
        type = "ExploLight";
        position[] = {0,1.5,0};
        intensity = 0.001;
        interval = 1;
        lifeTime = 0.5;
    };
    class Explosion1
    {
        simulation = "particles";
        type = "ObjectDestructionFire2Molotov";
        position[] = {0,0,0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.2;
    };
    class Explosion2
    {
        simulation = "particles";
        type = "FireBallBrightSmallMolotov";
        position[] = {0,0,0};
        intensity = 10;
        interval = 1;
        lifeTime = 0.3;
    };
    class Smoke1
    {
        simulation = "particles";
        type = "VehExpSmokeSmall";
        position[] = {0,0,0};
        intensity = 1;
        interval = 1;
        lifeTime = 1;
    };
    class SmallSmoke1
    {
        simulation = "particles";
        type = "VehExpSmoke2Small";
        position[] = {0,0,0};
        intensity = 1;
        interval = 1;
        lifeTime = 1;
    };
    class Trail
    {
        simulation="particles";
        type="Hellfire_Explosion_02";
        intensity=1;
        interval=1;
        position[]={0,0,0};
        lifeTime=5;
        qualityLevel=2;
        enabled="distToWater interpolate [0,0.0001,-1,1]";
    };
    class Trail2
    {
        simulation="particles";
        type="hellfire_smoke_01";
        intensity=1;
        interval=1;
        position[]={0,0,0};
        lifeTime=5;
        qualityLevel=2;
        enabled="distToWater interpolate [0,0.0001,-1,1]";
    };
    class Trail3
    {
        simulation="particles";
        type="hellfire_smoke_02";
        intensity=1;
        interval=1;
        position[]={0,0,0};
        lifeTime=5;
        qualityLevel=2;
        enabled="distToWater interpolate [0,0.0001,-1,1]";
    };
};

class LIB_Moltov_Impact_Flame
{
    class Light1
    {
        simulation = "light";
        type = "ObjectDestructionLight";
        position[] = {0,0,0};
        intensity = 1;
        interval = 1;
        lifeTime = 30;
    };
    class Fire1
    {
        simulation = "particles";
        type = "MolotovObjectDestructionFire1Small";//real fire particle
        position[] = {0,0,0};
        intensity = 1;
        interval = 1;
        lifeTime = 50;
    };

    class Fire2
    {
        simulation = "particles";
        type = "MolotovObjectDestructionFireTrail";//fireball
        position[] = {0,0,0};
        intensity = 1;
        interval = 1;
        lifeTime = 50;
    };
    class Fire3
    {
        simulation = "particles";
        type = "MolotovDestructionSmokeSmall";
        position[] = {0,0,0};
        intensity = 1;
        interval = 1;
        lifeTime = 50;
    };
};


9348123470129378401293840

if (local player) then
{
	_pos = [(_this select 0),(_this select 1),((_this select 2)+1)];
    //_pos set [2, (_pos select 2) + 0.1];
	_number1 = 10;
	_number2 = 4;
	_speed = (_number1 + (random _number2));

	_pc = ((playersNumber east)+(playersNumber west)+(playersNumber resistance)+(playersNumber civilian)+(playersNumber sideEnemy));
	if (_pc == 0) then {_pc = 1;};

	for "_i" from 1 to (24/_pc) do
    {
        private _posOffset = _pos apply { _x - 0.075 + random 0.15 };
        _bullet = "Molotov_Fire" createVehicleLocal _posOffset;
        _bullet setPos _posOffset;
        _ugol = (random 360);
        _height = 2;//???? ???????
        _bullet setVelocity [(_speed*(sin _ugol)),(_speed*(cos _ugol)),(random _height)];
    };
};
//LIB_Molotov_Ammo
//_number1 = 13;
//_number2 = 1;