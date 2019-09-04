#define private     0
#define protected   1
#define public      2

#define true 1
#define false 0

class CfgPatches {
    class BP_SW_Anims {
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Anims_F"};
        version = 0.1;
    };
};

class CfgMovesBasic;
class CfgMovesMaleSdr: CfgMovesBasic
{
	skeletonName="OFP2_ManSkeleton";
	gestures="CfgGesturesMale";
	class StandBase;
	class States
	{
		class prkr_animBase: StandBase
		{
			actions="RifleStandActions";
			adjstance="m";
			aiming="Empty";
			aimingBody="Empty";
			aimPrecision=1;
			boundingSphere=1;
			camShakeFire=1;
			canBlendStep=0;
			canPullTrigger=1;
			canReload=1;
			//collisionShape="A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
			//collisionShape = "A3\anims_f\Data\Geom\Sdr\geom_empty.p3d";
			collisionShape="A3\anims_f\Data\Geom\Sdr\Perc_Wovr.p3d";
			collisionShapeSafe="";
			connectAs="";
			connectFrom[]={};
			ConnectTo[]={};
			disableWeapons=0;
			disableWeaponsLong=0;
			duty=1;
			enableAutoActions=0;
			enableBinocular=1;
			enableDirectControl=1;
			enableMissile=0;
			enableOptics=1;
			equivalentTo="";
			file="\A3\anims_f\Data\Anim\Sdr\ovr\erc\stp\ras\rfl\AovrPercMstpSrasWrflDf";
			forceAim=1;
			GetOutPara="";
			hasCollShapeSafe=0;
			head="headDefault";
			headBobMode=2;
			headBobStrength=-0.5;
			idle="idleDefault";
			ignoreMinPlayTime[]=
			{
				"Unconscious"
			};
			interpolateFrom[]={};
			InterpolateTo[]={};
			interpolateWith[]={};
			interpolationrestart=1;
			interpolationspeed=200;
			leaning="Empty";
			leaningFactorBeg=1;
			leaningFactorEnd=1;
			leaningFactorZeroPoint=-1;
			leftHandIKBeg=1;
			leftHandIKCurve[]={1};
			leftHandIKEnd=1;
			legs="Empty";
			limitGunMovement=1;
			looped=0;
			minPlayTime=0.69;
			onLadder=0;
			onLandBeg=0;
			onLandEnd=0;
			preload=0;
			ragdoll=0;
			relSpeedMax=1;
			relSpeedMin=0.5;
			rightHandIKBeg=1;
			rightHandIKCurve[]={1};
			rightHandIKEnd=1;
			showHandGun=0;
			showItemInHand=0;
			showItemInRightHand=0;
			showWeaponAim=1;
			soundEdge[]={0.40000001,0.75,0.89999998};
			soundOverride="crawl";
			soundEnabled=1;
			speed=0.60000002;
			static=1;
			terminal=0;
			useIdles=1;
			variantAfter[]={30,30,30};
			variantsAI[]={};
			variantsPlayer[]={};
			visibleSize=0.70012099;
			Walkcycles=1;
			weaponIK=1;
			weaponLowered=0;
		};
		class prkr_animBase_rfl: prkr_animBase
		{
			weaponIK=0;
			disableWeapons=1;
			leftHandIKCurve[]={0,0,0.5,1};
			rightHandIKCurve[]={1,1,0.5,1};
			connectTo[]={};
			connectFrom[]={};
			InterpolateTo[]=
			{
				"amovpercmstpsraswrfldnon",
				0.02,
				"amovpercmrunsraswrfldf",
				0.02,
				"amovpercmevasraswrfldf",
				0.02,
				"amovpercmtacsraswrfldf",
				0.02,
				"amovpercmwlksraswrfldf",
				0.02,
				"asswpercmstpsnonwnondnon",
				0.2
			};
			interpolatefrom[]=
			{
				"amovpercmstpsraswrfldnon",
				0.02,
				"amovpercmrunsraswrfldf",
				0.02,
				"amovpercmevasraswrfldf",
				0.02,
				"amovpercmtacsraswrfldf",
				0.02,
				"amovpercmwlksraswrfldf",
				0.02,
				"asswpercmstpsnonwnondnon",
				0.2
			};
		};
		class prkr_animBase_pst: prkr_animBase
		{
			actions="PistolStandActions";
			weaponIK=0;
			disableWeapons=1;
			forceAim=1;
			showHandGun=1;
			leftHandIKCurve[]={0,0,0.5,1};
			rightHandIKCurve[]={1,1,0.5,1};
			connectTo[]={};
			connectFrom[]={};
			InterpolateTo[]=
			{
				"amovpercmstpsraswpstdnon",
				0.02,
				"amovpercmrunsraswpstdf",
				0.02,
				"amovpercmevasraswpstdf",
				0.02,
				"amovpercmtacsraswpstdf",
				0.02,
				"amovpercmwlksraswpstdf",
				0.02,
				"asswpercmstpsnonwnondnon",
				0.2
			};
			interpolatefrom[]=
			{
				"amovpercmstpsraswpstdnon",
				0.02,
				"amovpercmrunsraswpstdf",
				0.02,
				"amovpercmevasraswpstdf",
				0.02,
				"amovpercmtacsraswpstdf",
				0.02,
				"amovpercmwlksraswpstdf",
				0.02,
				"asswpercmstpsnonwnondnon",
				0.2
			};
		};
		class prkr_animBase_hlr: prkr_animBase
		{
			actions="CivilStandActions";
			weaponIK=0;
			disableWeapons=1;
			showHandGun=0;
			leftHandIKCurve[]={0,0,0.5,1};
			rightHandIKCurve[]={1,1,0.5,1};
			connectTo[]={};
			connectFrom[]={};
			InterpolateTo[]=
			{
				"amovpercmstpsnonwnondnon",
				0.2,
				"amovpercmrunsnonwnondf",
				0.2,
				"amovpercmevasnonwnondf",
				0.2,
				"amovpercmwlksnonwnondf",
				0.2,
				"asswpercmstpsnonwnondnon",
				0.2
			};
			interpolatefrom[]=
			{
				"amovpercmstpsnonwnondnon",
				0.2,
				"amovpercmrunsnonwnondf",
				0.2,
				"amovpercmevasnonwnondf",
				0.2,
				"amovpercmwlksnonwnondf",
				0.2,
				"asswpercmstpsnonwnondnon",
				0.2
			};
		};
		class climbOverHigh_hlr: prkr_animBase_hlr
		{
			file="\bp_sw_anims\Moves\climbOverH.rtm";
			speed = 0.2;  //0.1657
		};
		class climbOverHigh_rfl: prkr_animBase_rfl
		{
			file="\bp_sw_anims\Moves\climbOverH.rtm";
			speed = 0.2;  //0.1657
		};
		class climbOverHigh_pst: prkr_animBase_pst
		{
			file="\bp_sw_anims\Moves\climbOverH.rtm";
			speed = 0.2;  //0.1657
		};
		class climbOverMedium_hlr: prkr_animBase_hlr
		{
			file="\bp_sw_anims\Moves\climbOverM.rtm";
			speed = 0.3529; //0.3529
		};
		class climbOverMedium_rfl: prkr_animBase_rfl
		{
			file="\bp_sw_anims\Moves\climbOverM.rtm";
			speed = 0.3529; //0.3529
		};
		class climbOverMedium_pst: prkr_animBase_pst
		{
			file="\bp_sw_anims\Moves\climbOverM.rtm";
			speed = 0.3529; //0.3529
		};
		class climbOverLow_hlr: prkr_animBase_hlr
		{
			file="\bp_sw_anims\Moves\climbOverL.rtm";
			speed = 0.65000002;
		};
		class climbOverLow_rfl: prkr_animBase_rfl
		{
			file="\bp_sw_anims\Moves\climbOverL.rtm";
			speed = 0.65000002;
		};
		class climbOverLow_pst: prkr_animBase_pst
		{
			file="\bp_sw_anims\Moves\climbOverL.rtm";
			speed = 0.65000002;
		};
		class climbOnHigh_hlr: prkr_animBase_hlr
		{
			file="\bp_sw_anims\Moves\climbOnH.rtm";
			speed = 0.3; //0.2654 - base
		};
		class climbOnHigh_rfl: prkr_animBase_rfl
		{
			file="\bp_sw_anims\Moves\climbOnH.rtm";
			speed = 0.3; //0.2654 - base
		};
		class climbOnHigh_pst: prkr_animBase_pst
		{
			file="\bp_sw_anims\Moves\climbOnH.rtm";
			speed = 0.3; //0.2654 - base
		};
		class climbOnMedium_hlr: prkr_animBase_hlr
		{
			file="\bp_sw_anims\Moves\climbOnM.rtm";
			speed = 0.54;
		};
		class climbOnMedium_rfl: prkr_animBase_rfl
		{
			file="\bp_sw_anims\Moves\climbOnM.rtm";
			speed = 0.54;
		};
		class climbOnMedium_pst: prkr_animBase_pst
		{
			file="\bp_sw_anims\Moves\climbOnM.rtm";
			speed = 0.54;
		};
		class climbOnLow_hlr: prkr_animBase_hlr
		{
			file="\bp_sw_anims\Moves\climbOnL.rtm";
			speed = 0.65; //speed 0.3448
		};
		class climbOnLow_rfl: prkr_animBase_rfl
		{
			file="\bp_sw_anims\Moves\climbOnL.rtm";
			speed = 0.65; //speed 0.3448
		};
		class climbOnLow_pst: prkr_animBase_pst
		{
			file="\bp_sw_anims\Moves\climbOnL.rtm";
			speed = 0.65; //speed 0.3448
		};
		class stepOn_hlr: prkr_animBase_hlr
		{
			file="\bp_sw_anims\Moves\stepOn.rtm";
			speed = 1.1;
		};
		class stepOn_rfl: prkr_animBase_rfl
		{
			file="\bp_sw_anims\Moves\stepOn.rtm";
			speed = 1.1;
		};
		class stepOn_pst: prkr_animBase_pst
		{
			file="\bp_sw_anims\Moves\stepOn.rtm";
			speed = 1.1;
		};
		class vaultOver_hlr: prkr_animBase_hlr
		{
			file="\bp_sw_anims\Moves\vaultOver.rtm";
			speed = 0.75;
		};
		class vaultOver_rfl: prkr_animBase_rfl
		{
			file="\bp_sw_anims\Moves\vaultOver.rtm";
			speed = 0.75;
		};
		class vaultOver_pst: prkr_animBase_pst
		{
			file="\bp_sw_anims\Moves\vaultOver.rtm";
			speed = 0.75;
		};
		class jumpDown_hlr: prkr_animBase_hlr
		{
			file="\bp_sw_anims\Moves\jumpDown.rtm";
			speed = 0.84;
		};
		class jumpDown_rfl: prkr_animBase_rfl
		{
			file="\bp_sw_anims\Moves\jumpDown.rtm";
			speed = 0.84;
		};
		class jumpDown_pst: prkr_animBase_pst
		{
			file="\bp_sw_anims\Moves\jumpDown.rtm";
			speed = 0.84;
		};
	};
};

/*
class CfgMovesBasic {
	access = 1;
	skeletonName = "";

	//class Default;
	class StandBase;
	//class DefaultDie;

	class ManActions {
	};
	class Actions {
		class RifleStandActions {
		};
		class RifleCrouchActions {
		};
		class RifleKneelActions {
		};
		class RifleLowStandActions {
		};
		class RifleAdjustStandBaseActions {
		};
		class RifleProneActions {
		};
	};
};
class CfgMovesMaleSdr : CfgMovesBasic {
	skeletonName = "OFP2_ManSkeleton";
	//skeletonName = "";
	gestures = "CfgGesturesMale";
	access = 1;

	class States {
		class AmovPercMstpSlowWrflDnon; //stay weap low
		class AmovPercMstpSrasWrflDnon; //stay weap up
		class AmovPknlMstpSlowWrflDnon; //kneel weap low
		class AmovPknlMstpSrasWrflDnon; //kneel weap up
		class AmovPercMstpSlowWpstDnon; //stay pistol low
		class AmovPercMstpSrasWpstDnon; //stay pistol up
		class AmovPknlMstpSlowWpstDnon; //kneel pistol low
		class AmovPknlMstpSrasWpstDnon; //kneel pistol up
		class AmovPercMstpSnonWnonDnon; //stay no weapon
		class AmovPknlMstpSnonWnonDnon; //kneel no weapon
		class AmovPpneMstpSnonWnonDnon; //prone no weapon
		class AmovPercMstpSrasWlnrDnon; //stay launcher up
		class AmovPercMstpSlowWlnrDnon; //stay launcher low
		class AmovPknlMstpSrasWlnrDnon; //kneel launcher
		//class AmovPknlMstpSnonWnonDf; 	//kneel no weapon forward
		class AmovPercMstpSlowWrflDnon_gear;
		class AovrPercMstpSnonWnonDf; //vault from object
		//class AinvPknlMstpSnonWnonDnon_medic;

	};
};

class CfgGesturesMale {
	class ManActions;
	class Actions;
	class Default;

	class States;
	class BlendAnims;
};
*/