#define true	1
#define false	0

#define private		0
#define private		0
#define protected		1
#define public		2

#define VSoft		0
#define VArmor		1
#define VAir		2

#define ReadAndWrite		0
#define ReadAndCreate		1
#define ReadOnly		2
#define ReadOnlyVerified		3

#define TEast		0
#define TWest		1
#define TGuerrila		2
#define TCivilian		3
#define TSideUnknown		4
#define TEnemy		5
#define TFriendly		6
#define TLogic		7

#include "basicDefines.hpp"

class CfgPatches 
{
	class CoverInCars
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};


class CfgMovesBasic 
{
	class ManActions 
	{
		CiC_Act_Driver_Cover_Down = "";
		CiC_Act_Driver_Cover_Up = "";
		CiC_Act_Driver_Cover_Idle = "";
	};
	
	class StandBase;  //extern
	
	class Actions 
	{
		class NoActions : ManActions 
		{
			//access = 1;
			//Action to anim here
			//
		};
		class CargoActions: NoActions
		{
			CiC_Act_Driver_Cover_Down = "CiC_Driver_Cover_Down";
			CiC_Act_Driver_Cover_Up = "CiC_Driver_Cover_Up";
			CiC_Act_Driver_Cover_Idle = "CiC_Driver_Cover_Idle";
		};
		
	};
};

class CfgMovesMaleSdr: CfgMovesBasic 
{
	skeletonName = "OFP2_ManSkeleton";
	gestures = "CfgGesturesMale";
	
	class States  
	{	
		class TransAnimBase; //extern
		class TransAnimBase_noIK;  //extern
		class AidlPknlMstpSrasWlnrDnon_G0S; //extern
		class AidlPpneMstpSrasWrflDnon_G0S;  //extern
		class AidlPercMstpSrasWlnrDnon_G0S; //extern
		class AidlPpneMstpSrasWpstDnon_G0S;  //extern
		class AadjPpneMstpSrasWpstDup;  //extern


		class AmovPercMstpSlowWrflDnon; //stay weap low
		class AmovPercMstpSrasWrflDnon; //stay weap up
		//class AmovPknlMstpSlowWrflDnon; //kneel weap low
		class AmovPknlMstpSrasWrflDnon; //kneel weap up
		class AmovPsitMstpSrasWrflDnon; //sit weap
		class AmovPercMstpSrasWrflDnon_Salute; //salute weap up
		class AmovPercMstpSlowWrflDnon_Salute; //salute weap low
		class AmovPercMstpSlowWpstDnon; //stay pistol low
		class AmovPercMstpSrasWpstDnon; //stay pistol up
		class AmovPknlMstpSlowWpstDnon; //kneel pistol low
		class AmovPknlMstpSrasWpstDnon; //kneel pistol up
		class amovpsitmstpsnonwpstdnon_ground; //sit pistol
		class AmovPercMstpSrasWpstDnon_Salute; //salute pistol up
		class AmovPercMstpSnonWnonDnon; //stay no weapon
		class AmovPknlMstpSnonWnonDnon; //kneel no weapon
		class AmovPpneMstpSnonWnonDnon; //prone no weapon
		class AmovPsitMstpSnonWnonDnon_ground; //sit no weapon
		class amovpercmstpsnonwnondnon_salute; //salute no weapon
		class AmovPercMstpSsurWnonDnon; //Surrender no weapon
		//class AmovPercMstpSrasWlnrDnon; //stay launcher up
		class AmovPercMstpSlowWlnrDnon; //stay launcher low
		class AmovPknlMstpSrasWlnrDnon; //kneel launcher
		//class AmovPknlMstpSnonWnonDf; 	//kneel no weapon forward
		class AmovPercMstpSlowWrflDnon_gear;
		class AovrPercMstpSnonWnonDf; //vault from object

		class DeadState;
		class Crew;

		class CiC_Driver_Cover_Down : Crew
		{
            file = "\CoverInCars\anim\CiC_Driver_Cover_Down.rtm";
            looped = 0;
            speed = 0.7;
			duty = 0.2;
            mask = "BodyFull";
            leftHandIKBeg = true;
            leftHandIKCurve[] = {1};
            leftHandIKEnd = true;
            rightHandIKBeg = false;
            rightHandIKCurve[] = {};
            rightHandIKEnd = false;
            weaponIK = 1;
            enableOptics = false;
            showWeaponAim = false;
            disableWeapons = false;
            disableWeaponsLong = false;
			leaning = "empty";
			aimingBody = "empty";
			aiming = "empty";
            forceAim = 1;
            limitGunMovement = 0.8;
            headBobMode = 2;
            headBobStrength = 0;
			canPullTrigger = 0;
			enableDirectControl = 0;
			weaponLowered = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			//ConnectFrom[] = {"driver_offroad01", 9.020000, "driver_low01", 9.020000}; //Crew? 0,9
			ConnectTo[] = {"CiC_Driver_Cover_Idle", 0.020000};
			InterpolateTo[] = {"DeadState",0.01, "Unconscious",0.1};
			//soundOverride = "rifle_to_handgun";
			soundEnabled = 1;
			showHandGun = 0;
			showItemInRightHand = 0;
		};
		class CiC_Driver_Cover_Idle : Crew
		{
            file = "\CoverInCars\anim\CiC_Driver_Cover_Idle.rtm";
            looped = 0;
            speed = 0.7;
			duty = 0.2;
            mask = "BodyFull";
            leftHandIKBeg = true;
            leftHandIKCurve[] = {};//1
            leftHandIKEnd = true;
            rightHandIKBeg = false;
            rightHandIKCurve[] = {};
            rightHandIKEnd = false;
            weaponIK = 1;
            enableOptics = false;
            showWeaponAim = false;
            disableWeapons = false;
            disableWeaponsLong = false;
			leaning = "empty";
			aimingBody = "empty";
			aiming = "empty";
            forceAim = 1;
            limitGunMovement = 0.8;
            headBobMode = 2;
            headBobStrength = 0;
			canPullTrigger = 0;
			enableDirectControl = 0;
			weaponLowered = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			ConnectFrom[] = {"CiC_Driver_Cover_Down", 1}; //Crew?
			ConnectTo[] = {"CiC_Driver_Cover_Up", 1};
			InterpolateTo[] = {"DeadState",0.01, "Unconscious",0.1};
			//soundOverride = "rifle_to_handgun";
			soundEnabled = 1;
			showHandGun = 0;
			showItemInRightHand = 0;
		};
		class CiC_Driver_Cover_Up : Crew //BasicDriver? Crew!
		{
            file = "\CoverInCars\anim\CiC_Driver_Cover_Up.rtm";
            looped = 0;
            speed = 0.7;
			duty = 0.2;
            mask = "BodyFull";
            leftHandIKBeg = true;
            leftHandIKCurve[] = {1};
            leftHandIKEnd = true;
            rightHandIKBeg = false;
            rightHandIKCurve[] = {};
            rightHandIKEnd = false;
            weaponIK = 1;
            enableOptics = false;
            showWeaponAim = false;
            disableWeapons = false;
            disableWeaponsLong = false;
			leaning = "empty";
			aimingBody = "empty";
			aiming = "empty";
            forceAim = 1;
            limitGunMovement = 0.8;
            headBobMode = 2;
            headBobStrength = 0;
			canPullTrigger = 0;
			enableDirectControl = 0;
			weaponLowered = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			ConnectFrom[] = {"CiC_Driver_Cover_Idle", 0.020000};
			ConnectTo[] = {"driver_offroad01", 9.020000, "driver_low01", 9.020000};
			InterpolateTo[] = {"DeadState",0.01, "Unconscious",0.1};
			//soundOverride = "rifle_to_handgun";
			soundEnabled = 1;
			showHandGun = 0;
			showItemInRightHand = 0;
		};

	};	
};

class CfgGesturesMale 
{
	skeletonName = "OFP2_ManSkeleton";
	
	class ManActions {};
	
	class Actions 
	{
		class NoActions 
		{
			turnSpeed = 0;
			upDegree = 0;
			limitFast = 1;
			useFastMove = 0;
		};
	};
	
	class Default 
	{
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
	
	class States 
	{
		
		class GestureSwingHatchet: Default
		{
			file = "";
			looped = 0;
			speed = 1.1; //1.2
			mask = "handsWeapon2";
			headBobStrength = 0.2;
			headBobMode = 2;
			disableWeapons = 0;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
		};

		class BP_Jump : Default {
			variantsPlayer[] = {};
			variantsAI[] = {};
			canBlendStep = 0;
			looped = false;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wovr.p3d";
			relSpeedMin = 1;
			relSpeedMax = 1;
			limitGunMovement = 1.0;
			headBobStrength = 0.23;
			interpolationspeed = 10.0;
			interpolationrestart = true;
			forceAim = 1;
			minPlayTime = 0.9;
			duty = 10.0;
			file = "\A3\anims_f\Data\Anim\Sdr\ovr\erc\stp\ras\rfl\AovrPercMrunSrasWrflDf";
			speed = 1.25849;
			disableWeapons = false;
			mask = "BodyFullReal";
			//actions = "RifleStandActionsRunF";
			adjstance = "m";
			soundOverride = "adjust_stand_side";
			soundEnabled = true;
			soundEdge[] = {0.01};
		};
	};
	
	class BlendAnims 
	{
		wholeBody[] = {"Pelvis",1,"Spine",1,"Spine1",1,"Spine2",1,"Spine3",1,"Camera",1,"weapon",1,"launcher",1,"neck",1,"neck1",1,"head",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"LeftUpLeg",1,"LeftUpLegRoll",1,"LeftLeg",1,"LeftLegRoll",1,"LeftFoot",1,"LeftToeBase",1,"RightUpLeg",1,"RightUpLegRoll",1,"RightLeg",1,"RightLegRoll",1,"RightFoot",1,"RightToeBase",1};
		crewShake_half[] = {"weapon",0.5,"Camera",0.5,"launcher",0.5,"Head",0.5,"Neck",0.5,"Neck1",0.5,"LeftShoulder",0.45,"LeftArm",0.35,"LeftArmRoll",0.25,"LeftForeArm",0.15,"RightShoulder",0.45,"RightArm",0.35,"RightArmRoll",0.25,"RightForeArm",0.315,"spine3",0.475,"spine2",0.45,"spine1",0.4,"spine",0.35,"pelvis",0.2,"LeftUpLeg",0.1,"LeftUpLegRoll",0.25,"LeftLeg",0.1,"RightUpLeg",0.1,"RightUpLegRoll",0.25,"RightLeg",0.1};
		crewShake[] = {"weapon",1,"Camera",1,"launcher",1,"Head",1,"Neck",1,"Neck1",1,"LeftShoulder",0.9,"LeftArm",0.7,"LeftArmRoll",0.5,"LeftForeArm",0.3,"RightShoulder",0.9,"RightArm",0.7,"RightArmRoll",0.5,"RightForeArm",0.3,"spine3",0.95,"spine2",0.9,"spine1",0.8,"spine",0.7,"pelvis",0.4,"LeftUpLeg",0.2,"LeftUpLegRoll",0.5,"LeftLeg",0.2,"RightUpLeg",0.2,"RightUpLegRoll",0.5,"RightLeg",0.2};
		legsDefault[] = {"LeftUpLeg",0.9,"LeftUpLegRoll",0.9,"LeftLeg",0.95,"LeftLegRoll",0.95,"LeftFoot",1,"LeftToeBase",1,"RightUpLeg",0.9,"RightUpLegRoll",0.9,"RightLeg",0.95,"RightLegRoll",0.95,"RightFoot",1,"RightToeBase",1};
		idleDefault[] = {"Pelvis",1,"Spine",1,"Spine1",1,"Spine2",1,"Spine3",1,"Camera",1,"weapon",1,"launcher",1,"neck",1,"neck1",1,"head",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"LeftUpLeg",1,"LeftUpLegRoll",1,"LeftLeg",1,"LeftLegRoll",1,"LeftFoot",1,"LeftToeBase",1,"RightUpLeg",1,"RightUpLegRoll",1,"RightLeg",1,"RightLegRoll",1,"RightFoot",1,"RightToeBase",1};
		head[] = {"head",1,"neck1",0.8,"neck",0.5};
		upperTorso[] = {"head",1,"neck1",1,"neck",1,"weapon",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",1,"Spine1",1,"Spine2",1,"Spine3",1};
		BodyFullReal[] = {"head",1,"neck1",1,"neck",1,"weapon",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine1",1,"Spine2",1,"Spine3",1,"Spine",1,"Pelvis",1,"LeftLeg",1,"LeftLegRoll",1,"LeftUpLeg",1,"LeftUpLegRoll",1,"LeftFoot",1,"LeftToeBase",1,"RightLeg",1,"RightLegRoll",1,"RightUpLeg",1,"RightUpLegRoll",1,"RightFoot",1,"RightToeBase",1};
		BodyFull[] = {"head",1,"neck1",1,"neck",1,"weapon",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"Spine1",1,"Spine2",1,"Spine3",1,"Spine",1,"Pelvis",1,"LeftLeg",1,"LeftLegRoll",1,"LeftUpLeg",1,"LeftUpLegRoll",1,"LeftFoot",1,"LeftToeBase",1,"RightLeg",1,"RightLegRoll",1,"RightUpLeg",1,"RightUpLegRoll",1,"RightFoot",1,"RightToeBase",1};
		BodyHalf[] = {"head",0.01,"neck1",0.01,"neck",0.01,"weapon",0.01,"LeftShoulder",0.01,"LeftArm",0.01,"LeftArmRoll",0.01,"LeftForeArm",0.01,"LeftForeArmRoll",0.01,"LeftHand",0.01,"LeftHandRing",0.01,"LeftHandPinky1",0.01,"LeftHandPinky2",0.01,"LeftHandPinky3",0.01,"LeftHandRing1",0.01,"LeftHandRing2",0.01,"LeftHandRing3",0.01,"LeftHandMiddle1",0.01,"LeftHandMiddle2",0.01,"LeftHandMiddle3",0.01,"LeftHandIndex1",0.01,"LeftHandIndex2",0.01,"LeftHandIndex3",0.01,"LeftHandThumb1",0.01,"LeftHandThumb2",0.01,"LeftHandThumb3",0.01,"Spine1",0.01,"Spine2",0.01,"Spine3",0.01,"Spine",0.01,"Pelvis",0.01,"LeftLeg",0.01,"LeftLegRoll",0.01,"LeftUpLeg",0.01,"LeftUpLegRoll",0.01,"LeftFoot",0.01,"LeftToeBase",0.01,"RightLeg",0.01,"RightLegRoll",0.01,"RightUpLeg",0.01,"RightUpLegRoll",0.01,"RightFoot",0.01,"RightToeBase",0.01};
		ReloadMask[] = {"LeftShoulder",0.3,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"RightShoulder",0.3,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"weapon",1};
	};  
};
