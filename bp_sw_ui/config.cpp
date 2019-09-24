class CfgPatches
{
	class BP_SW_UI
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_UI_f"
		};
	};
};
class CfgVideoOptions
{
	class ShadowsVisibility
	{
		minValue=40;
		maxValue=1500;
	};
	class Particles
	{
		delete Low;
		delete Normal;
		class VeryHigh
		{
			text="Ultra";
			particlesSoftLimit=16000;
			particlesHardLimit=18000;
			smokeGenMinDist=400;
			smokeGenMaxDist=1600;
			smokeSizeCoef=2.6;
			smokeIntervalCoef=4;
			smokeZoomCoef=1.42857;
			highQualityShader=1;
			numFullSizeParticles=420;
		};
	};
	class DynamicLights
	{
		class Extreme
		{
			text="Extreme";
			value=24;
		};
	};
	class TextureQuality
	{
		class Extreme
		{
			text="Extreme";
			mipBias=-1;
			vramNeeded=796;
		};
	};
	/*class ObjectsQuality
	{
		class Extreme
		{
			text="Extreme";
			value=2400000;
		};
	};*/
	/*class TerrainQuality
	{
		class Extreme
		{
			text="Extreme";
			terrainGrid=2.5999999;
		};
	};*/
	class CloudQuality
	{
		delete VeryLow;
		delete Low;
		class Normal
		{
			text="$STR_A3_OPTIONS_STANDARD";
			value=96;
		};
		class High
		{
			text="$STR_A3_OPTIONS_HIGH";
			value=128;
		};
		class VeryHigh
		{
			text="$STR_A3_OPTIONS_VERYHIGH";
			value=128;
		};
	};
	class ShadowQuality
	{
		//delete Disabled;
		class VeryLow
		{
			text="$STR_A3_OPTIONS_LOW";
			shadowType=2;
			textureSize=2048;
			shaderQuality=0;
			cascadeLayers=1;
		};
		class Low
		{
			text="$STR_A3_OPTIONS_STANDARD";
			shadowType=2;
			textureSize=4096;
			shaderQuality=1;
			cascadeLayers=3;
		};
		class Normal
		{
			text="$STR_A3_OPTIONS_HIGH";
			shadowType=2;
			textureSize=4096;
			shaderQuality=2;
			cascadeLayers=3;
		};
		class High
		{
			text="$STR_A3_OPTIONS_VERYHIGH";
			shadowType=2;
			textureSize=4096;
			shaderQuality=2;
			cascadeLayers=4;
		};
		class VeryHigh
		{
			text="$STR_A3_OPTIONS_ULTRA";
			shadowType=2;
			textureSize=4096;
			shaderQuality=3;
			cascadeLayers=4;
		};
		class Ultra
		{
			text="Extreme";
			shadowType=2;
			textureSize=4096;
			shaderQuality=3;
			cascadeLayers=6;
		};
	};
	class PPBloom
	{
		minValue=0;
		maxValue=3;
	};
	class PPDOF
	{
		minValue=0;
		maxValue=5;
	};
	class PPRotBlur
	{
		minValue=0;
		maxValue=2;
	};
	class PPRadialBlur
	{
		minValue=0;
		maxValue=2;
	};
	class PPSharpen
	{
		minValue=0;
		maxValue=4;
	};
	class PPBrightness
	{
		minValue=0;
		maxValue=2;
	};
	class PPContrast
	{
		minValue=0;
		maxValue=2;
	};
	class PPSaturation
	{
		minValue=0;
		maxValue=2;
	};
	/*class PPColorPresets
	{
		class Altis
		{
			text="Altis";
			brightness=1.01;
			contrast=1.08;
			saturation=1.1;
		};
		class Tanoa
		{
			text="Tanoa";
			brightness=1.02;
			contrast=1.03;
			saturation=0.94999999;
		};
	};*/
	class DefaultSettings;
	class OverallSettings
	{
		class Extreme: DefaultSettings
		{
			text="Extreme";
			visibility=3800;
			objectVisibility=2300;
			shadowVisibility=200;
			hdr="Normal";
			ppaa="SMAAVeryHigh";
			ppaaAlternative="SMAAVeryHigh";
			particles="VeryHigh";
			dynamicLights="Extreme";
			anisotropicFiltering="VeryHigh";
			pip="VeryHigh";
			textureQuality="Extreme";
			objectsQuality="Extreme";
			terrainQuality="VeryHigh";
			cloudQuality="Extreme";
			waterSSReflectionsQuality="High";
			shadowQuality="Ultra";
			atocQuality="Disabled";
			ppSSAOQuality="HBAOPlusStrong";
			ppSSAOQualityAlternative="HDAOHigh";
			ppCausticsQuality="Enabled";
			ppBloom=0.2;
			ppDOF=0.30000001;
			ppRotBlur=0;
			ppRadialBlur=0;
			ppSharpen=0.1;
			postProcessQuality=8;
			multiSampleCount=4;
		};
	};
};
class RscControlsGroup;
class RscText;

class cfgMods
{
	author="Malcain";
	timepacked="1535741003";
};
