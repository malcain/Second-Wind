/*
	Breaking Point - New Zombie Animations
				By Deathlyrage
*/

/* can be used by some reasons, but please, keep all anims for Human cfg in one place in breakingpoint_anim
class CfgMovesBasic {
	class ManActions {
	};
	
	class Actions {
		class NoActions : ManActions {
		};
	};
};



class CfgGesturesMale {
	skeletonName = "OFP2_ManSkeleton";
	
	class ManActions {};
	
	class Actions {
		class NoActions {
			turnSpeed = 0;
			upDegree = 0;
			limitFast = 1;
			useFastMove = 0;
		};
	};
	
	class Default {
		actions = "NoActions";
		file = "";
		looped = 1;
		speed = 0.5;
		relSpeedMin = 1;
		relSpeedMax = 1;
		soundEnabled = 0;
		soundOverride = "";
		soundEdge[] = {0.5, 1};
		terminal = 0;
		equivalentTo = "";
		connectAs = "";
		connectFrom[] = {};
		connectTo[] = {};
		interpolateWith[] = {};
		interpolateTo[] = {};
		interpolateFrom[] = {};
		mask = "empty";
		interpolationSpeed = 6;
		interpolationRestart = 0;
		preload = 0;
		disableWeapons = 1;
		enableOptics = 1;
		showWeaponAim = 1;
		enableMissile = 1;
		enableBinocular = 1;
		showItemInHand = 0;
		showItemInRightHand = 0;
		showHandGun = 0;
		canPullTrigger = 1;
		walkcycles = 1;
		headBobMode = 0;
		headBobStrength = 0;
		leftHandIKBeg = 0;
		leftHandIKEnd = 0;
		rightHandIKBeg = 0;
		rightHandIKEnd = 0;
		leftHandIKCurve[] = {1};
		rightHandIKCurve[] = {1};
		forceAim = 0;
	};
	
	class States {

	};
};
*/
/*
class CfgMovesAnimal_Base_F {
	access = ReadAndCreate;
	collisionVertexPattern[] = {};
	collisionGeomCompPattern[] = {1};
	
	class Default {
		access = ReadOnlyVerified;
		file = "";
		looped = true;
		speed = 0.5;
		disableWeapons = true;
		enableOptics = true;
		disableWeaponsLong = false;
		canreload = 1;
		showWeaponAim = true;
		enableMissile = false;
		enableBinocular = false;
		showItemInHand = false;
		showItemInRightHand = false;
		showHandGun = false;
		onLandBeg = false;
		onLandEnd = false;
		onLadder = false;
		canPullTrigger = true;
		duty = -0.51;
		predictSpeedCoef = 1;
		visibleSize = 1;
		aimPrecision = 1;
		relSpeedMin = 1.0;
		relSpeedMax = 1.0;
		soundEnabled = true;
		soundOverride = "";
		soundEdge[] = {0.5, 1};
		soundEdge1 = 0.5;
		soundEdge2 = 1;
		terminal = false;
		limitGunMovement = true;
		variantsPlayer[] = {};
		variantsAI[] = {};
		equivalentTo = "";
		connectAs = "";
		variantAfter[] = {5, 10, 20};
		connectFrom[] = {};
		connectTo[] = {};
		interpolateWith[] = {};
		interpolateTo[] = {};
		interpolateFrom[] = {};
		aiming = "aimingNo";
		leaning = "aimingNo";
		untiltWeapon = "aimingNo";
		aimingBody = "aimingUpDefault";
		legs = "legsNo";
		head = "headDefault";
		leaningFactorBeg = 0;
		leaningFactorEnd = 0;
		leaningFactorZeroPoint = -1;
		leaningCorrectionAngleBeg = 0;
		leaningCorrectionAngleEnd = 0;
		interpolationSpeed = 6;
		interpolationRestart = false;
		hasCollShapeSafe = false;
		collisionShapeSafe = "";
		boundingSphere = true;
		enableDirectControl = 1;
		enableAutoActions = false;
		leftHandIKBeg = false;
		leftHandIKEnd = false;
		leftHandIKCurve = 0;
		rightHandIKCurve = 0;
		rightHandIKBeg = false;
		rightHandIKEnd = false;
		weaponIK = 0;
		preload = false;
		walkcycles = 1;
		forceAim = 0;
		showDisposableGun = 0;
		headBobStrength = 0.5;
		headBobMode = 1;
	};
	
	class StandBase : Default {
		duty = -1;
		head = "headDefault";
		speed = 1e+010;
		relSpeedMin = 0.7;
		relSpeedMax = 1.1;
		looped = true;
		soundEnabled = true;
		enableDirectControl = 0;
		disableWeapons = true;
		disableWeaponsLong = true;
	};
	
	class DefaultDie : Default {
		aiming = "aimingNo";
		legs = "legsNo";
		head = "headNo";
	};
	
	class ManActions {
		Stop = "";
		StopRelaxed = "";
		TurnL = "";
		TurnR = "";
		TurnLRelaxed = "";
		TurnRRelaxed = "";
		Default = "";
		JumpOff = "";
		ReloadMagazine = "";
		ReloadMGun = "";
		ReloadAT = "";
		ReloadMortar = "";
		ThrowGrenade = "";
		WalkF = "";
		WalkLF = "";
		WalkRF = "";
		WalkL = "";
		WalkR = "";
		WalkLB = "";
		WalkRB = "";
		WalkB = "";
		SlowF = "";
		SlowLF = "";
		SlowRF = "";
		SlowL = "";
		SlowR = "";
		SlowLB = "";
		SlowRB = "";
		SlowB = "";
		FastF = "";
		FastLF = "";
		FastRF = "";
		FastL = "";
		FastR = "";
		FastLB = "";
		FastRB = "";
		FastB = "";
		EvasiveForward = "";
		EvasiveLeft = "";
		EvasiveRight = "";
		EvasiveBack = "";
		StartSwim = "";
		StopSwim = "";
		Down = "";
		Up = "";
		PlayerStand = "";
		PlayerCrouch = "";
		PlayerProne = "";
		Lying = "";
		Stand = "";
		Combat = "";
		Crouch = "";
		CanNotMove = "";
		Civil = "";
		CivilLying = "";
		FireNotPossible = "";
		Die = "";
		WeaponOn = "";
		WeaponOff = "";
		StrokeFist = "";
		StrokeGun = "";
		SitDown = "";
		Salute = "";
		BinocOn = "";
		BinocOff = "";
		PutDown = "";
		PutDownEnd = "";
		Medic = "";
		Treated = "";
		LadderOnDown = "";
		LadderOnUp = "";
		LadderOff = "";
		LadderOffTop = "";
		LadderOffBottom = "";
		GetInLow = "";
		GetInMedium = "";
		GetInHigh = "";
		GetOutLow = "";
		GetOutMedium = "";
		GetOutHigh = "";
		TakeFlag = "";
		HandGunOn = "";
		LookAround = "";
		Eat = "";
		StopEat = "";
		Rest = "";
		StopRest = "";
	};
	
	class Actions {
		class NoActions : ManActions {
			turnSpeed = 8;
			limitFast = 5.5;
			useFastMove = 0;
			stance = "ManStanceUndefined";
			upDegree = 0;
		};
	};
	
	class Interpolations {};
	transitionsInterpolated[] = {};
	transitionsSimple[] = {};
	transitionsDisabled[] = {};
	
	class BlendAnims {
		aimingDefault[] = {"head", 1};
		untiltWeaponDefault[] = {};
		legsDefault[] = {};
		headDefault[] = {"Head", 1};
		aimingNo[] = {};
		legsNo[] = {};
		headNo[] = {};
		aimingUpDefault[] = {};
	};
};

class CfgMovesBPZombie : CfgMovesAnimal_Base_F {
	skeletonName = "OFP2_ManSkeleton";
	collisionVertexPattern[] = {"1a","2a","3a","4a","5a","6a","7a","8a","9a","10a","11a","12a","13a","14a","15a","16a","17a","18a","19a","20a","21a","22a","23a","24a","25a","26a","27a","28a","29a","30a","31a","32a","33a","34a","1c","2c","3c","4c","5c","6c","7c","8c"};
	collisionGeomCompPattern[] = {1,3};
	
	class Default : Default {
		GetOutPara = "";
		weaponLowered = 0;
		canBlendStep = 0;
		idle = "idleDefault";
		access = ReadOnlyVerified;
		actions = "BPZombieActions";
		file = "";
		looped = true;
		speed = 0.5;
		disableWeapons = false;
		enableOptics = false;
		disableWeaponsLong = false;
		showWeaponAim = false;
		enableMissile = false;
		enableBinocular = false;
		showItemInHand = false;
		showItemInRightHand = false;
		showHandGun = false;
		onLandBeg = false;
		onLandEnd = false;
		onLadder = false;
		canPullTrigger = true;
		canReload = 1;
		duty = -0.5;
		visibleSize = 0.75012;
		aimPrecision = 1;
		camShakeFire = 1;
		relSpeedMin = 1;
		relSpeedMax = 1;
		soundEnabled = true;
		soundOverride = "";
		soundEdge[] = {0.5, 1};
		terminal = false;
		ragdoll = 0;
		limitGunMovement = true;
		variantsPlayer[] = {};
		variantsAI[] = {""};
		equivalentTo = "";
		connectAs = "";
		variantAfter[] = {5, 10, 20};
		connectFrom[] = {};
		connectTo[] = {};
		interpolateWith[] = {};
		interpolateTo[] = {};
		interpolateFrom[] = {};
		ignoreMinPlayTime[] = {"Zombie_Stop"};
		aiming = "aimingDefault";
		aimingBody = "aimingUpDefault";
		leaning = "leaningDefault";
		legs = "legsDefault";
		head = "headDefault";
		leaningFactorBeg = 0;
		leaningFactorEnd = 0;
		leaningFactorZeroPoint = -1;
		interpolationSpeed = 6;
		interpolationRestart = false;
		enableDirectControl = 1;
		headBobMode = 0;
		headBobStrength = 0;
		collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
		hasCollShapeSafe = false;
		collisionShapeSafe = "";
		boundingSphere = 1.0;
		enableAutoActions = false;
		leftHandIKEnd = false;
		leftHandIKBeg = false;
		rightHandIKBeg = false;
		rightHandIKEnd = false;
		leftHandIKCurve[] = {};
		rightHandIKCurve[] = {};
		weaponIK = 0;
		preload = false;
		Walkcycles = 1;
		forceAim = 0;
		adjstance = "m";
		useIdles = 0;
	};
	
	class StandBase : Default {};
	
	class DefaultDie : Default {};
	
	class States {
		class Zombie_Stop : StandBase {
			duty = -1;
			file = "\breakingpoint_anim\zmb\BPZombie_Idle.rtm";
			connectTo[] = {"Zombie_Walk", 0.1, "Zombie_Run", 0.1, "Zombie_Attack", 0.1};
			connectFrom[] = {"Zombie_Walk", 0.1, "Zombie_Run", 0.1};
			interpolateTo[] = {"Zombie_Die", 0.1, "Zombie_Walk", 0.1, "Zombie_Run", 0.1, "Zombie_Attack", 0.1};
			//looped = 0;
			canPullTrigger = 1;
			speed = 0.06;
			preload = true;
			//New
			looped = true;
			Walkcycles = 1;
			useIdles = 1;
		};

		class Zombie_Eat : StandBase {
			actions = "BPZombieActions";
			speed = -9.0;
			file = "\breakingpoint_anim\zmb\BPZombie_Eating.rtm";
			connectTo[] = {"Zombie_Stop", 0.1};
			connectFrom[] = {"Zombie_Walk", 0.1};
			interpolateTo[] = {"Zombie_Walk", 0.1, "Zombie_Attack", 0.1, "Zombie_Die", 0.1};
		};
		
		class Zombie_Walk : Zombie_Stop {
			actions = "BPZombieActions";
			file = "\breakingpoint_anim\zmb\BPZombie_Walk2.rtm";
			speed = 0.6;
			head = "headDefault";
			connectFrom[] = {"Zombie_Stop", 0.1, "Zombie_Run", 0.1};
			connectTo[] = {"Zombie_Stop", 0.1, "Zombie_Run", 0.1};
			interpolateTo[] = {"Zombie_Run", 0.1, "Zombie_Attack", 0.1};
			soundOverride = "sprint";
			soundEnabled = true;
			canPullTrigger = false;
			duty = 0.6;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.10649;
			walkcycles = 2;
		};
		
		class Zombie_Run : Zombie_Stop {
			actions = "BPZombieActions";
			file = "\breakingpoint_anim\zmb\BPZombie_Walk2.rtm";
			speed = 1.1;
			looped = true;
			connectFrom[] = {"Zombie_Walk", 0.1};
			connectTo[] = {"Zombie_Walk", 0.1};
			interpolateTo[] = {"Zombie_Walk", 0.1, "Zombie_Attack", 0.1, "Zombie_Die", 0.1};
			soundOverride = "sprint";
			soundEnabled = true;
			canPullTrigger = false;
			duty = 0.6;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.10649;
			walkcycles = 2;
		};

		class Zombie_Attack: Zombie_Stop
		{
			actions = "BPZombieActions";
			file = "\breakingpoint_anim\zmb\BPZombie_Attack1.rtm";
			speed = 1;
			soundOverride = "";
			soundEnabled = 0;
			connectTo[] = {"Zombie_Walk", 0.1};
			connectFrom[] = {"Zombie_Die",0.1, "Zombie_Walk", 0.1, "Zombie_Run", 0.1, "Zombie_Attack", 0.1};
			interpolateTo[] = {"Zombie_Die", 0.1};
		};
		
		class Zombie_Die : DefaultDie {
			file = "\A3\anims_f\Data\Anim\Sdr\dth\pne\stp\ras\Rfl\AdthPpneMstpSrasWrflDnon_1";
			speed = 1.67;
			looped = 0;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			ragdoll = 1;
			headBobMode = 2;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			//file = "\breakingpoint_anim\zmb\BPZombie_Death.rtm";
			//speed = 0.666;
			actions = "NoActions";
			//looped = false;
			variantsPlayer[] = {"Zombie_Die", 0.5};
			variantsAI[] = {};
			variantAfter[] = {0, 0, 0};
			terminal = true;
		};
	};
	
	class Actions : Actions {
		class NoActions : NoActions {};
		
		class BPZombieActions : NoActions {
			Stop = "Zombie_Stop";
			StopRelaxed = "Zombie_Stop";
			//StopRelaxed = "Zombie_Eat";
			TurnL = "Zombie_Stop";
			TurnR = "Zombie_Stop";
			TurnLRelaxed = "Zombie_Stop";
			TurnRRelaxed = "Zombie_Stop";
			Default = "Zombie_Stop";
			JumpOff = "Zombie_Stop";
			WalkF = "Zombie_Walk";
			SlowF = "Zombie_Walk";
			FastF = "Zombie_Run";
			EvasiveForward = "Zombie_Run";
			Down = "Zombie_Stop";
			Up = "Zombie_Stop";
			PlayerStand = "Zombie_Stop";
			PlayerCrouch = "";
			PlayerProne = "";
			//PlayerCrouch = "Zombie_Stop";
			//PlayerProne = "Zombie_Stop";
			Lying = "Zombie_Stop";
			Stand = "Zombie_Stop";
			Combat = "Zombie_Stop";
			//Crouch = "Zombie_Stop";
			Crouch = "";
			CanNotMove = "Zombie_Stop";
			Civil = "Zombie_Stop";
			CivilLying = "Zombie_Stop";
			FireNotPossible = "Zombie_Stop";
			Die = "Zombie_Die";
			Eat = "";
			Rest = "";
			//Eat = "Zombie_Eat";
			//Rest = "Zombie_Eat";
			turnSpeed = 1;
			limitFast = 5.5;
			useFastMove = 0;
			upDegree = "ManPosNoWeapon";
		};
	};
	
	class BlendAnims : BlendAnims {
		aimingDefault[] = {"head", 1};
		headDefault[] = {"head", 0.8, "neck2", 0.8, "neck1", 0.7, "neck", 0.5, "headEnd", 0.8, "LeftRearEar1", 0.8, "LeftRearEar2", 0.8, "LeftRearEar3", 0.8, "RightRearEar1", 0.8, "RightRearEar2", 0.8, "RightRearEar3", 0.8, "LeftShoulder", 0.1, "RightShoulder", 0.1, "Spine2", 0.2};
	};
};