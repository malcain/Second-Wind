		dynLightMinBrightnessAmbientCoef = 0.5;
		dynLightMinBrightnessAbsolute = 0.05;
		class Sea
		{
			seaTexture = "a3\data_f\seatexture_co.paa";
			seaMaterial = "#waterriver";
			shoreMaterial = "#shore";
			shoreFoamMaterial = "#shorefoam";
			shoreWetMaterial = "#shorewet";
			WaterMapScale = 20;
			WaterGrid = 50;
			MaxTide = 0;
			MaxWave = 0.25;
			SeaWaveXScale = "2.0/50";
			SeaWaveZScale = "1.0/50";
			SeaWaveHScale = 1;
			SeaWaveXDuration = 5000;
			SeaWaveZDuration = 10000;
		};
		class Underwater
		{
			noWaterFog = -0.001;
			fullWaterFog = 0.001;
			deepWaterFog = 60;
			waterFogDistanceNear = -10;
			waterFogDistance = 90;
			waterColor[] = {0,0.04,0.03};
			deepWaterColor[] = {0,0.001,0.009};
			surfaceColor[] = {0,0.04,0.03};
			deepSurfaceColor[] = {0,0.001,0.009};
		};
		class SeaWaterShaderPars
		{
			refractionMoveCoef = 0.03;
			minWaterOpacity = 0;
			waterOpacityDistCoef = 0.4;
			underwaterOpacity = 0.5;
			waterOpacityFadeStart = 60;
			waterOpacityFadeLength = 120;
		};
		class WaterExPars: WaterExPars
		{
			fogDensity = 0.25;
			fogColor[] = {"0.197*0.25","0.25*0.25","0.08*0.25"};
			fogColorExtinctionSpeed[] = {0.3,0.3,0.0511};
			ligtExtinctionSpeed[] = {"0.02+0.3","0.02+0.3","0.02+0.0511"};
			diffuseLigtExtinctionSpeed[] = {"0.82+0.3","0.52+0.3","1.32+0.0511"};
			fogGradientCoefs[] = {0.35,1,1.7};
			fogColorLightInfluence[] = {0.8,0.2,1};
			shadowIntensity = 0;
			ssReflectionStrength = 0.85;
			ssReflectionMaxJitter = 1;
			ssReflectionRippleInfluence = 0.2;
			ssReflectionEdgeFadingCoef = 10;
			ssReflectionDistFadingCoef = 4;
			refractionMinCoef = 0.03;
			refractionMaxCoef = 0.14;
			refractionMaxDist = 5.1;
			specularMaxIntensity = 75;
			specularPowerOvercast0 = 300;
			specularPowerOvercast1 = 3;
			specularNormalModifyCoef = 0.001;
			foamAroundObjectsIntensity = 0.2;
			foamAroundObjectsFadeCoef = 8;
			foamColorCoef = 2;
			foamDeformationCoef = 0.02;
			foamTextureCoef = 0.2;
			foamTimeMoveSpeed = 0.2;
			foamTimeMoveAmount = 0.1;
			shoreDarkeningMaxCoef = 0.55;
			shoreDarkeningOffset = 0.02;
			shoreDarkeningGradient = 0.2;
			shoreWaveTimeScale = 0.8;
			shoreWaveShifDerivativeOffset = -0.8;
			shoreFoamIntensity = 0.5;
			shoreMaxWaveHeight = 0.046;
			shoreWetLayerReflectionIntensity = 0.55;
		};
		startFogBase = 250;
		forecastFogBase = 250;
		startFogDecay = 0.018;
		forecastFogDecay = 0.018;
		fogBeta0Min = 0;
		fogBeta0Max = 0.005;
		class HDRNewPars
		{
			minAperture = 1e-005;
			maxAperture = 256;
			apertureRatioMax = 4;
			apertureRatioMin = 10;
			bloomImageScale = 1;
			bloomScale = 0.15;
			bloomExponent = 1.3;
			bloomLuminanceOffset = 0.75;
			bloomLuminanceScale = 0.75;
			bloomLuminanceExponent = 0.75;
			tonemapMethod = 1;
			tonemapShoulderStrength = 0.22;
			tonemapLinearStrength = 0.12;
			tonemapLinearAngle = 0.1;
			tonemapToeStrength = 0.2;
			tonemapToeNumerator = 0.022;
			tonemapToeDenominator = 0.2;
			tonemapLinearWhite = 11.2;
			tonemapExposureBias = 1;
			tonemapLinearWhiteReinhard = 2.5;
			eyeAdaptFactorLight = 3.3;
			eyeAdaptFactorDark = 0.25;
			nvgApertureMin = 10;
			nvgApertureStandard = 12.5;
			nvgApertureMax = 16.5;
			nvgStandardAvgLum = 10;
			nvgLightGain = 320;
			nvgTransition = 1;
			nvgTransitionCoefOn = 40;
			nvgTransitionCoefOff = 0.01;
			nightShiftMinAperture = 0;
			nightShiftMaxAperture = 0.002;
			nightShiftMaxEffect = 0.6;
			nightShiftLuminanceScale = 600;
		};
		skyColorInfluencesFogColor = 0;
		class Lighting: DefaultLighting
		{
			groundReflection[] = {0.06,0.06,0.03};
			moonObjectColorFull[] = {360,340,300,100};
			moonHaloObjectColorFull[] = {15,17,25,50};
			moonsetObjectColor[] = {275,250,225,1};
			moonsetHaloObjectColor[] = {10,10,10,0.25};
			class ThunderBoltLight
			{
				diffuse[] = {2120,2170,8550};
				ambient[] = {0.001,0.001,0.001};
				intensity = 120000;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 0;
					quadratic = 1;
				};
			};
			starEmissivity = 40;
		};
		class DayLightingBrightAlmost: DayLightingBrightAlmost
		{
			deepNight[] = {-15,{0.005,0.01,0.01},{0,0.002,0.003},{0,0,0},{0,0,0},{0,0.002,0.003},{0,0.002,0.003},0};
			fullNight[] = {-15,{0.005,0.01,0.01},{0,0.002,0.003},{0,0,0},{0,0,0},{0,0.002,0.003},{0,0.002,0.003},0};
			sunMoon[] = {-15,{0.005,0.01,0.01},{0,0.002,0.003},{0,0,0},{0,0,0},{0,0.002,0.003},{0,0.002,0.003},0};
			earlySun[] = {-15,{0.005,0.01,0.01},{0,0.002,0.003},{0,0,0},{0,0,0},{0,0.002,0.003},{0,0.002,0.003},0};
			sunrise[] = {-15,{0.005,0.01,0.01},{0,0.002,0.003},{0,0,0},{0,0,0},{0,0.002,0.003},{0,0.002,0.003},0};
			earlyMorning[] = {-15,{0.005,0.01,0.01},{0,0.002,0.003},{0,0,0},{0,0,0},{0,0.002,0.003},{0,0.002,0.003},0};
			midMorning[] = {-15,{0.005,0.01,0.01},{0,0.002,0.003},{0,0,0},{0,0,0},{0,0.002,0.003},{0,0.002,0.003},0};
			morning[] = {-15,{0.005,0.01,0.01},{0,0.002,0.003},{0,0,0},{0,0,0},{0,0.002,0.003},{0,0.002,0.003},0};
			noon[] = {-15,{0.005,0.01,0.01},{0,0.002,0.003},{0,0,0},{0,0,0},{0,0.002,0.003},{0,0.002,0.003},0};
		};
		class DayLightingRainy: DayLightingRainy
		{
			deepNight[] = {-15,{0.005,0.01,0.01},{0,0.002,0.003},{0,0,0},{0,0,0},{0,0.002,0.003},{0,0.002,0.003},0};
			fullNight[] = {-15,{0.005,0.01,0.01},{0,0.002,0.003},{0,0,0},{0,0,0},{0,0.002,0.003},{0,0.002,0.003},0};
			sunMoon[] = {-15,{0.005,0.01,0.01},{0,0.002,0.003},{0,0,0},{0,0,0},{0,0.002,0.003},{0,0.002,0.003},0};
			earlySun[] = {-15,{0.005,0.01,0.01},{0,0.002,0.003},{0,0,0},{0,0,0},{0,0.002,0.003},{0,0.002,0.003},0};
			earlyMorning[] = {-15,{0.005,0.01,0.01},{0,0.002,0.003},{0,0,0},{0,0,0},{0,0.002,0.003},{0,0.002,0.003},0};
			morning[] = {-15,{0.005,0.01,0.01},{0,0.002,0.003},{0,0,0},{0,0,0},{0,0.002,0.003},{0,0.002,0.003},0};
			lateMorning[] = {-15,{0.005,0.01,0.01},{0,0.002,0.003},{0,0,0},{0,0,0},{0,0.002,0.003},{0,0.002,0.003},0};
			noon[] = {-15,{0.005,0.01,0.01},{0,0.002,0.003},{0,0,0},{0,0,0},{0,0.002,0.003},{0,0.002,0.003},0};
		};
		class Weather: Weather
		{
			class LightingNew
			{
				class Lighting0
				{
					height = 0;
					overcast = 0.25;
					sunAngle = -15;
					sunOrMoon = 0;
					diffuse[] = {{0.1,0.14,0.22},5};
					diffuseCloud[] = {0.1,0.1,0.2};
					ambient[] = {{0.52,0.67,1},2};
					ambientCloud[] = {0.52,0.67,1};
					ambientMid[] = {{0.572,0.67,0.9},0.5};
					ambientMidCloud[] = {0.572,0.67,0.9};
					groundReflection[] = {0.572,0.67,0.9};
					groundReflectionCloud[] = {0.572,0.67,0.9};
					bidirect[] = {0.09,0.09,0.09};
					bidirectCloud[] = {0.09,0.09,0.09};
					sky[] = {0.0231,0.314,0.467};
					skyAroundSun[] = {{0.2,0.25,0.45},0.02};
					fogColor[] = {{0.09,0.137,0.22},0.025};
					apertureMin = 6;
					apertureStandard = 6;
					apertureMax = 9;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.052,0.103};
					mie[] = {0.01,0.0075,0.005};
					cloudsColor[] = {{1,1,1},9};
					swBrightness = 3;
				};
				class Lighting1
				{
					height = 0;
					overcast = 0.25;
					sunAngle = -4;
					sunOrMoon = 1;
					diffuse[] = {{0.09,0.09,0.1},1.5};
					diffuseCloud[] = {0.09,0.09,0.2};
					ambient[] = {{0.52,0.67,1},4};
					ambientCloud[] = {0.52,0.67,1};
					ambientMid[] = {{0.572,0.67,0.9},2};
					ambientMidCloud[] = {0.572,0.67,0.9};
					groundReflection[] = {0.572,0.67,0.9};
					groundReflectionCloud[] = {0.572,0.67,0.9};
					bidirect[] = {0.09,0.09,0.09};
					bidirectCloud[] = {0.09,0.09,0.09};
					sky[] = {{0.1,0.15,0.3},4};
					skyAroundSun[] = {{0.4,0.3,0.3},9};
					fogColor[] = {{0.15,0.15,0.175},3};
					apertureMin = 7;
					apertureStandard = 8;
					apertureMax = 9;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.052,0.103};
					mie[] = {0.01,0.0075,0.005};
					cloudsColor[] = {{1,1,1},9};
					swBrightness = 3;
				};
				class Lighting2
				{
					height = 0;
					overcast = 0.25;
					sunAngle = 0;
					sunOrMoon = 1;
					diffuse[] = {{0.8,0.4,0.18},5};
					diffuseCloud[] = {{1,0.35,0.34},2};
					ambient[] = {{0.7,0.5,0.5},7.75};
					ambientCloud[] = {{0.6,0.5,0.5},1};
					ambientMid[] = {{0.55,0.6,0.8},6.5};
					ambientMidCloud[] = {{0.55,0.6,0.8},0.5};
					groundReflection[] = {{0.55,0.6,0.8},6.5};
					groundReflectionCloud[] = {{0.55,0.6,0.9},0.25};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.11,0.2,0.4},6};
					skyAroundSun[] = {{0.25,0.1,0.03},11};
					fogColor[] = {{0.15,0.15,0.175},5.5};
					apertureMin = 8;
					apertureStandard = 10;
					apertureMax = 25;
					standardAvgLum = 50;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.5,0.5};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{0.7,0.7,0.7},9};
					swBrightness = 2;
				};
				class Lighting3
				{
					height = 0;
					overcast = 0.25;
					sunAngle = 4;
					sunOrMoon = 1;
					diffuse[] = {{0.9,0.4,0.16},8};
					diffuseCloud[] = {{0.8,0.4,0.16},9};
					ambient[] = {{0.5,0.39,0.35},9};
					ambientCloud[] = {{0.5,0.39,0.35},9};
					ambientMid[] = {{0.55,0.5,0.45},8.1};
					ambientMidCloud[] = {{0.55,0.5,0.45},7.7};
					groundReflection[] = {{0.55,0.5,0.45},7.1};
					groundReflectionCloud[] = {{0.55,0.5,0.5},6.5};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.11,0.25,0.4},10.5};
					skyAroundSun[] = {{0.3,0.2,0.1},12};
					fogColor[] = {{0.15,0.135,0.13},7};
					apertureMin = 9;
					apertureStandard = 13;
					apertureMax = 30;
					standardAvgLum = 75;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.12,0.05,0.05};
					mie[] = {0.003,0.002,0.003};
					cloudsColor[] = {{0.2,0.2,0.2},11};
					swBrightness = 1;
				};
				class Lighting4
				{
					height = 0;
					overcast = 0.25;
					sunAngle = 8;
					sunOrMoon = 1;
					diffuse[] = {{1,0.5,0.26},10.25};
					diffuseCloud[] = {{1,0.45,0.26},10.25};
					ambient[] = {{0.55,0.4,0.35},9.8};
					ambientCloud[] = {{0.6,0.4,0.4},9.8};
					ambientMid[] = {{0.55,0.5,0.45},8.3};
					ambientMidCloud[] = {{0.55,0.5,0.5},8};
					groundReflection[] = {{0.55,0.5,0.45},7.75};
					groundReflectionCloud[] = {{0.6,0.65,0.768},7};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.11,0.3,0.7},10.5};
					skyAroundSun[] = {{0.15,0.2,0.2},12};
					fogColor[] = {{0.125,0.13,0.14},8.2};
					apertureMin = 10;
					apertureStandard = 15;
					apertureMax = 40;
					standardAvgLum = 100;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.06,0.1,0.09};
					mie[] = {0.002,0.002,0.002};
					cloudsColor[] = {{0.2,0.2,0.15},11};
					swBrightness = 1;
				};
				class Lighting5
				{
					height = 0;
					overcast = 0.25;
					sunAngle = 15;
					sunOrMoon = 1;
					diffuse[] = {{1,0.63,0.4},12};
					diffuseCloud[] = {{1,0.63,0.4},11.5};
					ambient[] = {{0.6,0.6,0.6},10.75};
					ambientCloud[] = {{0.57,0.6,0.7},10.75};
					ambientMid[] = {{0.57,0.5,0.51},9.2};
					ambientMidCloud[] = {{0.57,0.5,0.51},9};
					groundReflection[] = {{0.57,0.5,0.51},9};
					groundReflectionCloud[] = {{0.57,0.612,0.7},8.3};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.11,0.33,0.8},10.75};
					skyAroundSun[] = {{0.1,0.3,0.6},12};
					fogColor[] = {{0.11,0.125,0.14},9.75};
					apertureMin = 18;
					apertureStandard = 20;
					apertureMax = 55;
					standardAvgLum = 175;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.1,0.13,0.2};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{0.5,0.5,0.3},11};
					swBrightness = 1;
				};
				class Lighting6
				{
					height = 0;
					overcast = 0.25;
					sunAngle = 22;
					sunOrMoon = 1;
					diffuse[] = {{1,0.75,0.55},12.4};
					diffuseCloud[] = {{1,0.75,0.55},12.1};
					ambient[] = {{0.58,0.59,0.63},11};
					ambientCloud[] = {{0.57,0.58,0.63},11};
					ambientMid[] = {{0.58,0.51,0.48},10.2};
					ambientMidCloud[] = {{0.57,0.522,0.56},10};
					groundReflection[] = {{0.58,0.51,0.48},10};
					groundReflectionCloud[] = {{0.57,0.522,0.56},9.9};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.11,0.28,0.95},11};
					skyAroundSun[] = {{0.1,0.28,0.8},12};
					fogColor[] = {{0.105,0.13,0.17},10};
					apertureMin = 20;
					apertureStandard = 22;
					apertureMax = 55;
					standardAvgLum = 250;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.00759,0.01388,0.02878};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,0.9,0.7},11};
					swBrightness = 1;
				};
				class Lighting7
				{
					height = 0;
					overcast = 0.25;
					sunAngle = 35;
					sunOrMoon = 1;
					diffuse[] = {{1,0.8,0.65},13.75};
					diffuseCloud[] = {{1,0.8,0.65},13.5};
					ambient[] = {{0.58,0.59,0.68},11.75};
					ambientCloud[] = {{0.57,0.59,0.68},11.7};
					ambientMid[] = {{0.58,0.531,0.476},11};
					ambientMidCloud[] = {{0.57,0.522,0.56},11};
					groundReflection[] = {{0.58,0.531,0.476},10.5};
					groundReflectionCloud[] = {{0.57,0.522,0.56},10.5};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.075,0.2,1},12};
					skyAroundSun[] = {{0.075,0.23,1},12.5};
					fogColor[] = {{0.105,0.14,0.2},11.2};
					apertureMin = 28;
					apertureStandard = 35;
					apertureMax = 60;
					standardAvgLum = 500;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.00759,0.01388,0.02878};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,0.9,0.7},12};
					swBrightness = 1;
				};
				class Lighting8
				{
					height = 0;
					overcast = 0.25;
					sunAngle = 40;
					sunOrMoon = 1;
					diffuse[] = {{1,0.8,0.66},14};
					diffuseCloud[] = {{1,0.8,0.66},13.7};
					ambient[] = {{0.57,0.58,0.7},12.1};
					ambientCloud[] = {{0.57,0.58,0.7},12};
					ambientMid[] = {{0.57,0.522,0.49},12.1};
					ambientMidCloud[] = {{0.57,0.522,0.56},12};
					groundReflection[] = {{0.57,0.522,0.49},11.2};
					groundReflectionCloud[] = {{0.57,0.522,0.56},11};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.075,0.22,1},13};
					skyAroundSun[] = {{0.075,0.22,1},13};
					fogColor[] = {{0.105,0.145,0.2},11.5};
					apertureMin = 33;
					apertureStandard = 36;
					apertureMax = 60;
					standardAvgLum = 500;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.00759,0.01388,0.02878};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,0.9,0.7},12};
					swBrightness = 1;
				};
				class Lighting9
				{
					height = 0;
					overcast = 0.6;
					sunAngle = -15;
					sunOrMoon = 0;
					diffuse[] = {{0.1,0.13,0.2},5};
					diffuseCloud[] = {{0,0,0},5};
					ambient[] = {{0.52,0.67,1},2};
					ambientCloud[] = {{1,1,1},2};
					ambientMid[] = {{0.572,0.67,0.9},1};
					ambientMidCloud[] = {{0.572,0.67,0.9},0.1};
					groundReflection[] = {{0.572,0.67,0.9},0.1};
					groundReflectionCloud[] = {{0.572,0.67,0.9},0.1};
					bidirect[] = {0.09,0.09,0.09};
					bidirectCloud[] = {0.09,0.09,0.09};
					sky[] = {0.0231,0.314,0.467};
					skyAroundSun[] = {{0.2,0.25,0.45},0.02};
					fogColor[] = {{0.09,0.137,0.22},0.025};
					apertureMin = 6;
					apertureStandard = 6;
					apertureMax = 9;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.052,0.103};
					mie[] = {0.01,0.0075,0.005};
					cloudsColor[] = {{1,1,1},4};
					swBrightness = 3;
				};
				class Lighting10
				{
					height = 0;
					overcast = 0.6;
					sunAngle = -4;
					sunOrMoon = 1;
					diffuse[] = {{0.09,0.09,0.2},1};
					diffuseCloud[] = {0,0,0};
					ambient[] = {{0.52,0.67,1},3};
					ambientCloud[] = {1,1,1};
					ambientMid[] = {{0.572,0.67,0.9},2};
					ambientMidCloud[] = {0.572,0.67,0.9};
					groundReflection[] = {0.572,0.67,0.9};
					groundReflectionCloud[] = {0.572,0.67,0.9};
					bidirect[] = {0.09,0.09,0.09};
					bidirectCloud[] = {0.09,0.09,0.09};
					sky[] = {{0.1,0.15,0.3},4};
					skyAroundSun[] = {{0.5,0.3,0.2},8};
					fogColor[] = {{0.15,0.15,0.175},2};
					apertureMin = 7;
					apertureStandard = 8;
					apertureMax = 9;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.052,0.103};
					mie[] = {0.01,0.0075,0.005};
					cloudsColor[] = {{1,1,1},4};
					swBrightness = 3;
				};
				class Lighting11
				{
					height = 0;
					overcast = 0.6;
					sunAngle = 0;
					sunOrMoon = 1;
					diffuse[] = {{0.9,0.35,0.075},4};
					diffuseCloud[] = {0.9,0.35,0.075};
					ambient[] = {{0.7,0.6,0.6},7};
					ambientCloud[] = {{1,1,1},1};
					ambientMid[] = {{0.55,0.6,0.9},4.5};
					ambientMidCloud[] = {{0.55,0.6,0.9},0.5};
					groundReflection[] = {{0.55,0.6,0.8},3};
					groundReflectionCloud[] = {{0.55,0.6,0.8},0.25};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.11,0.2,0.5},6};
					skyAroundSun[] = {{0.5,0.15,0},10};
					fogColor[] = {{0.15,0.15,0.175},5};
					apertureMin = 8;
					apertureStandard = 10;
					apertureMax = 25;
					standardAvgLum = 50;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.05,0.12,0.17};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{0.7,0.7,0.7},4};
					swBrightness = 2;
				};
				class Lighting12
				{
					height = 0;
					overcast = 0.6;
					sunAngle = 4;
					sunOrMoon = 1;
					diffuse[] = {{0.9,0.35,0.1},8};
					diffuseCloud[] = {{0.9,0.3,0.05},4};
					ambient[] = {{0.3,0.23,0.2},8.7};
					ambientCloud[] = {{0.3,0.23,0.2},8.7};
					ambientMid[] = {{0.55,0.5,0.5},8};
					ambientMidCloud[] = {{0.55,0.5,0.5},7.5};
					groundReflection[] = {{0.55,0.5,0.5},7};
					groundReflectionCloud[] = {{0.55,0.5,0.5},6.5};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.2,0.3,0.4},9.5};
					skyAroundSun[] = {{0.5,0.2,0.05},11.5};
					fogColor[] = {{0.15,0.13,0.12},6.5};
					apertureMin = 9;
					apertureStandard = 13;
					apertureMax = 30;
					standardAvgLum = 75;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.05,0.06,0.17};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{0.25,0.25,0.2},8};
					swBrightness = 1;
				};
				class Lighting13
				{
					height = 0;
					overcast = 0.6;
					sunAngle = 8;
					sunOrMoon = 1;
					diffuse[] = {{1,0.45,0.16},10.25};
					diffuseCloud[] = {{1,0.45,0.16},6};
					ambient[] = {{0.7,0.67,0.68},10};
					ambientCloud[] = {{0.7,0.67,0.68},9.6};
					ambientMid[] = {{0.65,0.6,0.6},9.2};
					ambientMidCloud[] = {{0.65,0.6,0.6},9};
					groundReflection[] = {{0.65,0.6,0.6},9};
					groundReflectionCloud[] = {{0.65,0.6,0.6},8.6};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.13,0.3,0.5},11};
					skyAroundSun[] = {{0.5,0.23,0.1},12.5};
					fogColor[] = {{0.13,0.125,0.11},7.5};
					apertureMin = 10;
					apertureStandard = 15;
					apertureMax = 40;
					standardAvgLum = 100;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.06,0.09,0.09};
					mie[] = {0.002,0.002,0.002};
					cloudsColor[] = {{0.25,0.25,0.2},8.5};
					swBrightness = 1;
				};
				class Lighting14
				{
					height = 0;
					overcast = 0.6;
					sunAngle = 15;
					sunOrMoon = 1;
					diffuse[] = {{1,0.675,0.45},12};
					diffuseCloud[] = {{1,0.7,0.45},8};
					ambient[] = {{0.65,0.612,0.7},10.8};
					ambientCloud[] = {{0.65,0.612,0.72},10.9};
					ambientMid[] = {{0.57,0.55,0.6},9.5};
					ambientMidCloud[] = {{0.57,0.55,0.62},9.5};
					groundReflection[] = {{0.57,0.55,0.6},9.3};
					groundReflectionCloud[] = {{0.57,0.612,0.7},8.3};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.11,0.3,0.55},11.5};
					skyAroundSun[] = {{0.2,0.3,0.35},12};
					fogColor[] = {{0.125,0.13,0.135},9.75};
					apertureMin = 18;
					apertureStandard = 20;
					apertureMax = 55;
					standardAvgLum = 175;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.09,0.1,0.1};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{0.25,0.25,0.2},9};
					swBrightness = 1;
				};
				class Lighting15
				{
					height = 0;
					overcast = 0.6;
					sunAngle = 22;
					sunOrMoon = 1;
					diffuse[] = {{1,0.75,0.6},12.4};
					diffuseCloud[] = {{1,0.75,0.68},11};
					ambient[] = {{0.57,0.58,0.63},11.1};
					ambientCloud[] = {{0.57,0.58,0.65},11};
					ambientMid[] = {{0.57,0.522,0.56},10.4};
					ambientMidCloud[] = {{0.57,0.522,0.56},10.3};
					groundReflection[] = {{0.57,0.522,0.56},10};
					groundReflectionCloud[] = {{0.5,0.5,0.5},9.2};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {0.11,0.3,0.65};
					skyAroundSun[] = {{0.11,0.3,0.65},11.7};
					fogColor[] = {{0.105,0.13,0.18},10};
					apertureMin = 20;
					apertureStandard = 22;
					apertureMax = 55;
					standardAvgLum = 250;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.001,0.01388,0.02878};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,0.8},10.5};
					swBrightness = 1;
				};
				class Lighting16
				{
					height = 0;
					overcast = 0.6;
					sunAngle = 35;
					sunOrMoon = 1;
					diffuse[] = {{1,0.8,0.65},13.75};
					diffuseCloud[] = {{1,0.8,0.65},11.8};
					ambient[] = {{0.57,0.58,0.68},11.8};
					ambientCloud[] = {{0.57,0.58,0.68},11.9};
					ambientMid[] = {{0.57,0.522,0.5},11.3};
					ambientMidCloud[] = {{0.57,0.522,0.5},11.1};
					groundReflection[] = {{0.57,0.522,0.5},10.5};
					groundReflectionCloud[] = {{0.5,0.5,0.5},9.3};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.11,0.3,0.8},12};
					skyAroundSun[] = {{0.11,0.3,0.8},12.2};
					fogColor[] = {{0.105,0.13,0.17},10.75};
					apertureMin = 28;
					apertureStandard = 35;
					apertureMax = 60;
					standardAvgLum = 500;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.001,0.01388,0.02878};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,0.8},11};
					swBrightness = 1;
				};
				class Lighting17
				{
					height = 0;
					overcast = 0.6;
					sunAngle = 40;
					sunOrMoon = 1;
					diffuse[] = {{1,0.8,0.66},14.1};
					diffuseCloud[] = {{1,0.8,0.66},12.2};
					ambient[] = {{0.57,0.58,0.7},12.1};
					ambientCloud[] = {{0.57,0.58,0.7},12};
					ambientMid[] = {{0.57,0.522,0.56},11.8};
					ambientMidCloud[] = {{0.57,0.522,0.56},11.6};
					groundReflection[] = {{0.57,0.522,0.56},11.2};
					groundReflectionCloud[] = {{0.5,0.5,0.5},11};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.11,0.3,1},13};
					skyAroundSun[] = {{0.11,0.3,1},13};
					fogColor[] = {{0.105,0.145,0.2},11.2};
					apertureMin = 33;
					apertureStandard = 36;
					apertureMax = 60;
					standardAvgLum = 500;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.001,0.01388,0.02878};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,0.8},12};
					swBrightness = 1;
				};
				class Lighting18
				{
					height = 0;
					overcast = 0.8;
					sunAngle = -15;
					sunOrMoon = 0;
					diffuse[] = {0.1,0.13,0.2};
					diffuseCloud[] = {0,0,0};
					ambient[] = {{0.52,0.67,1},0.05};
					ambientCloud[] = {1,1,1};
					ambientMid[] = {{0.572,0.67,0.9},0.01};
					ambientMidCloud[] = {1,1,1};
					groundReflection[] = {0.572,0.67,0.9};
					groundReflectionCloud[] = {1,1,1};
					bidirect[] = {0.09,0.09,0.09};
					bidirectCloud[] = {0.09,0.09,0.09};
					sky[] = {0.0231,0.314,0.467};
					skyAroundSun[] = {{0.2,0.25,0.45},0.02};
					fogColor[] = {0.09,0.137,0.22};
					apertureMin = 7;
					apertureStandard = 8;
					apertureMax = 9;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.052,0.103};
					mie[] = {0.01,0.0075,0.005};
					cloudsColor[] = {{1,1,1},3};
					swBrightness = 3;
				};
				class Lighting19
				{
					height = 0;
					overcast = 0.8;
					sunAngle = -4;
					sunOrMoon = 1;
					diffuse[] = {0.2,0.2,0.2};
					diffuseCloud[] = {0,0,0};
					ambient[] = {{0.5,0.55,1},2};
					ambientCloud[] = {1,1,1};
					ambientMid[] = {{0.55,0.55,0.85},2};
					ambientMidCloud[] = {1,1,1};
					groundReflection[] = {0.55,0.55,0.85};
					groundReflectionCloud[] = {1,1,1};
					bidirect[] = {0.09,0.09,0.09};
					bidirectCloud[] = {0.09,0.09,0.09};
					sky[] = {{0.1,0.3,0.7},3};
					skyAroundSun[] = {{0.2,0.3,0.6},7};
					fogColor[] = {0.08,0.08,0.095};
					apertureMin = 7;
					apertureStandard = 8;
					apertureMax = 9;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.5,0.5,0.5};
					mie[] = {0.05,0.05,0.05};
					cloudsColor[] = {{0.1,0.1,0.1},3};
					swBrightness = 3;
				};
				class Lighting20
				{
					height = 0;
					overcast = 0.8;
					sunAngle = 0;
					sunOrMoon = 1;
					diffuse[] = {{0.375,0.225,0.04},0.05};
					diffuseCloud[] = {{1,1,1},0.05};
					ambient[] = {{0.5,0.5,0.6},2.5};
					ambientCloud[] = {{1,1,1},1};
					ambientMid[] = {{0.55,0.5,0.8},2};
					ambientMidCloud[] = {{1,1,1},0.5};
					groundReflection[] = {{0.55,0.5,0.8},0.25};
					groundReflectionCloud[] = {{1,1,1},0.25};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.11,0.15,0.2},1};
					skyAroundSun[] = {{0.2,0.25,0.3},1};
					fogColor[] = {{0.08,0.08,0.095},0.25};
					apertureMin = 8;
					apertureStandard = 10;
					apertureMax = 25;
					standardAvgLum = 50;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.5,0.5,0.5};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{0.45,0.22,0.15},3};
					swBrightness = 2;
				};
				class Lighting21
				{
					height = 0;
					overcast = 0.8;
					sunAngle = 4;
					sunOrMoon = 1;
					diffuse[] = {{0.1,0.1,0.1},0.1};
					diffuseCloud[] = {{1,1,1},0.005};
					ambient[] = {{0.6,0.6,0.75},8.2};
					ambientCloud[] = {{1,1,1},8};
					ambientMid[] = {{0.55,0.5,0.62},7.2};
					ambientMidCloud[] = {{1,1,1},7};
					groundReflection[] = {{0.55,0.5,0.62},6.5};
					groundReflectionCloud[] = {{1,1,1},6};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.11,0.15,0.2},9};
					skyAroundSun[] = {{0.2,0.2,0.3},10};
					fogColor[] = {{0.125,0.125,0.14},7.5};
					apertureMin = 9;
					apertureStandard = 13;
					apertureMax = 30;
					standardAvgLum = 75;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.5,0.5,0.3};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{0.45,0.3,0.15},3};
					swBrightness = 1;
				};
				class Lighting22
				{
					height = 0;
					overcast = 0.8;
					sunAngle = 8;
					sunOrMoon = 1;
					diffuse[] = {{0.3,0.3,0.35},0.75};
					diffuseCloud[] = {{1,1,1},1};
					ambient[] = {{0.65,0.65,0.8},9};
					ambientCloud[] = {{1,1,1},9};
					ambientMid[] = {{0.57,0.5,0.62},8};
					ambientMidCloud[] = {{1,1,1},7.8};
					groundReflection[] = {{0.57,0.5,0.62},7.8};
					groundReflectionCloud[] = {{1,1,1},7.6};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.11,0.15,0.2},10};
					skyAroundSun[] = {{0.16,0.18,0.2},10};
					fogColor[] = {{0.125,0.125,0.15},8};
					apertureMin = 10;
					apertureStandard = 15;
					apertureMax = 40;
					standardAvgLum = 100;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.5,0.5,0.3};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{0.6,0.3,0.15},5};
					swBrightness = 1;
				};
				class Lighting23
				{
					height = 0;
					overcast = 0.8;
					sunAngle = 15;
					sunOrMoon = 1;
					diffuse[] = {{0.32,0.3,0.35},1};
					diffuseCloud[] = {{0.1,0.1,0.1},2};
					ambient[] = {{0.7,0.7,0.8},10};
					ambientCloud[] = {{1,1,1},10};
					ambientMid[] = {{0.57,0.5,0.6},9.3};
					ambientMidCloud[] = {{1,1,1},9};
					groundReflection[] = {{0.57,0.5,0.6},8.8};
					groundReflectionCloud[] = {{1,1,1},8.6};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.11,0.15,0.2},10.8};
					skyAroundSun[] = {{0.16,0.18,0.2},11.4};
					fogColor[] = {{0.3,0.34,0.44},9};
					apertureMin = 18;
					apertureStandard = 20;
					apertureMax = 55;
					standardAvgLum = 175;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.00759,0.01388,0.02878};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{0.75,0.6,0.4},5};
					swBrightness = 1;
				};
				class Lighting24
				{
					height = 0;
					overcast = 0.8;
					sunAngle = 22;
					sunOrMoon = 1;
					diffuse[] = {{0.8,0.8,0.8},3.5};
					diffuseCloud[] = {{0.1,0.1,0.1},2.5};
					ambient[] = {{0.7,0.7,0.8},11};
					ambientCloud[] = {{1,1,1},10.8};
					ambientMid[] = {{0.57,0.5,0.57},10};
					ambientMidCloud[] = {{1,1,1},9.8};
					groundReflection[] = {{0.57,0.5,0.57},9.8};
					groundReflectionCloud[] = {{1,1,1},9.6};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.11,0.15,0.2},12.6};
					skyAroundSun[] = {{0.11,0.145,0.19},12.6};
					fogColor[] = {{0.105,0.12,0.16},10};
					apertureMin = 20;
					apertureStandard = 22;
					apertureMax = 55;
					standardAvgLum = 250;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.00759,0.01388,0.02878};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{0.9,1,1},6};
					swBrightness = 1;
				};
				class Lighting25
				{
					height = 0;
					overcast = 0.8;
					sunAngle = 35;
					sunOrMoon = 1;
					diffuse[] = {{0.8,0.8,0.8},9.8};
					diffuseCloud[] = {{0.1,0.1,0.1},6};
					ambient[] = {{0.7,0.7,0.8},11.5};
					ambientCloud[] = {{1,1,1},11.2};
					ambientMid[] = {{0.57,0.5,0.57},11};
					ambientMidCloud[] = {{1,1,1},10.5};
					groundReflection[] = {{0.57,0.5,0.57},10};
					groundReflectionCloud[] = {{1,1,1},9.5};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.11,0.15,0.2},13};
					skyAroundSun[] = {{0.11,0.145,0.188},13};
					fogColor[] = {{0.105,0.12,0.16},10.75};
					apertureMin = 28;
					apertureStandard = 35;
					apertureMax = 60;
					standardAvgLum = 500;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.00759,0.01388,0.02878};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{0.9,1,1},6};
					swBrightness = 1;
				};
				class Lighting26
				{
					height = 0;
					overcast = 0.8;
					sunAngle = 40;
					sunOrMoon = 1;
					diffuse[] = {{0.8,0.8,0.8},10};
					diffuseCloud[] = {{0.1,0.1,0.1},6};
					ambient[] = {{0.7,0.65,0.8},12.5};
					ambientCloud[] = {{1,1,1},12};
					ambientMid[] = {{0.57,0.55,0.57},11.5};
					ambientMidCloud[] = {{1,1,1},11};
					groundReflection[] = {{0.57,0.5,0.57},11};
					groundReflectionCloud[] = {{1,1,1},10};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.11,0.15,0.2},13};
					skyAroundSun[] = {{0.11,0.145,0.188},13};
					fogColor[] = {{0.105,0.12,0.16},11.5};
					apertureMin = 33;
					apertureStandard = 36;
					apertureMax = 60;
					standardAvgLum = 500;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.00759,0.01388,0.02878};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{0.9,1,1},7};
					swBrightness = 1;
				};
			};
			class Lighting: Lighting
			{
				class BrightAlmost: DayLightingBrightAlmost
				{
					overcast = 0;
				};
				class Rainy: DayLightingRainy
				{
					overcast = 1;
				};
			};
			class Overcast: Overcast
			{
				class Weather1: Weather1
				{
					sky = "A3\Map_Enoch\Data\sky_clear_sky.paa";
					skyR = "A3\Map_Enoch\Data\sky_clear_lco.paa";
					horizon = "A3\Map_Enoch\Data\sky_clear_horizont_sky.paa";
				};
				class Weather2: Weather2
				{
					sky = "A3\Map_Enoch\Data\sky_clear_sky.paa";
					skyR = "A3\Map_Enoch\Data\sky_clear_lco.paa";
					horizon = "A3\Map_Enoch\Data\sky_almostclear_horizont_sky.paa";
				};
				class Weather3: Weather3
				{
					sky = "A3\Map_Enoch\Data\sky_clear_sky.paa";
					skyR = "A3\Map_Enoch\Data\sky_cloudy_lco.paa";
					horizon = "A3\Map_Enoch\Data\sky_semicloudy_horizont_sky.paa";
				};
				class Weather4: Weather4
				{
					sky = "A3\Map_Enoch\Data\sky_clear_sky.paa";
					skyR = "A3\Map_Enoch\Data\sky_cloudy_lco.paa";
					horizon = "A3\Map_Enoch\Data\sky_cloudy_horizont_sky.paa";
				};
				class Weather5: Weather5
				{
					sky = "A3\Map_Enoch\Data\sky_clear_sky.paa";
					skyR = "A3\Map_Enoch\Data\sky_overcast_lco.paa";
					horizon = "A3\Map_Enoch\Data\sky_mostlycloudy_horizont_sky.paa";
				};
				class Weather6: Weather6
				{
					sky = "A3\Map_Enoch\Data\sky_clear_sky.paa";
					skyR = "A3\Map_Enoch\Data\sky_overcast_lco.paa";
					horizon = "A3\Map_Enoch\Data\sky_overcast_horizont_sky.paa";
				};
			};
		};
		humidityUpCoef = 0.1;
		humidityDownCoef = 0.05;
		class SimulWeather
		{
			noiseTexture = "a3\data_f\noise_raw.paa";
			numKeyframesPerDay = 48;
			windSpeedCoef = "10.0f";
			moonIrradianceCoef = "10.0f";
			fadeMaxDistanceKm = 1000;
			fadeMaxAltitudeKm = 15;
			fadeNumAltitudes = 8;
			fadeNumElevations = 8;
			fadeNumDistances = 8;
			fadeEarthTest = 1;
			autoBrightness = 1;
			autoBrightnessStrength = 0.1;
			cloudGridWidth = 64;
			cloudGridLength = 64;
			cloudGridHeight = 16;
			helperGridElevationSteps = 24;
			helperGridAzimuthSteps = 15;
			helperEffectiveEarthRadius = 1e+006;
			helperCurvedEarth = 1;
			helperAdjustCurvature = 0;
			helperNumLayers = 120;
			helperMaxDistance = 160000;
			helperNearCloudFade = 0.1;
			helperChurn = 10;
			cloudWidth = 40000;
			cloudLength = 40000;
			wrapClouds = 1;
			noiseResolution = 8;
			noisePeriod = 4;
			opticalDensity = 1.5;
			alphaSharpness = 0.85;
			selfShadowScale = 0.905;
			mieAsymmetry = 0.5087;
			minimumLightElevationDegrees = 6;
			directLightCoef = 1;
			indirectLightCoef = 0.04;
			fogStart = 0;
			fogEnd = 50000;
			fogHeight = 2000;
			class DefaultKeyframe
			{
				rayleigh[] = {0.00749,0.01388,0.02878};
				mie[] = {0.0046,0.0046,0.0046};
				haze = 30;
				hazeBaseKm = 5;
				hazeScaleKm = 1;
				hazeEccentricity = 1;
				brightnessAdjustment = 1;
				cloudiness = 0.6;
				cloudBaseKm = 2.85;
				cloudHeightKm = 6;
				directLight = 1;
				indirectLight = 1;
				ambientLight = 0.2;
				noiseOctaves = 4.3;
				noisePersistence = 0.535;
				fractalAmplitude = 2.3;
				fractalWavelength = 240;
				extinction = 8;
				diffusivity = 0.001;
			};
			class Overcast
			{
				class Weather1: DefaultKeyframe
				{
					overcast = 0;
					cloudiness = 0;
					diffusivity = 0.001;
					seqFileKeyframe = 0;
				};
				class Weather2: DefaultKeyframe
				{
					overcast = 0.2;
					cloudiness = 0.25;
					diffusivity = 0.001;
					seqFileKeyframe = 0;
				};
				class Weather3: DefaultKeyframe
				{
					overcast = 0.4;
					cloudiness = 0.45;
					diffusivity = 0.001;
					seqFileKeyframe = 3;
				};
				class Weather4: DefaultKeyframe
				{
					overcast = 0.5;
					cloudiness = 0.46;
					diffusivity = 0.01;
					seqFileKeyframe = 4;
				};
				class Weather5: DefaultKeyframe
				{
					overcast = 0.8;
					cloudiness = 0.8;
					diffusivity = 0.01;
					extinction = 4.3;
					cloudBaseKm = 1.9;
					cloudHeightKm = 8;
					seqFileKeyframe = 4;
				};
				class Weather6: DefaultKeyframe
				{
					overcast = 1;
					cloudiness = 1;
					diffusivity = 0.001;
					extinction = 4;
					cloudBaseKm = 1.7;
					cloudHeightKm = 10;
					seqFileKeyframe = 4;
				};
			};
		};
		hazeDistCoef = 0.1;
		hazeFogCoef = 0.98;
		fogHeight = 2000;
		hazeBaseHeight = 0;
		hazeBaseBeta0 = 0.00012;
		hazeDensityDecay = 0.0006;
		aroundSunCoefMultiplier = 1.38;
		aroundSunCoefExponent = 8;
		soundMapSizeCoef = 4;
		satelliteNormalBlendStart = 10;
		satelliteNormalBlendEnd = 100;
		skyObject = "A3\Map_Enoch\Data\skydome.p3d";
		horizontObject = "A3\Map_Enoch\Data\horizon.p3d";
		skyTexture = "A3\Map_Enoch\Data\sky_semicloudy_sky.paa";
		skyTextureR = "A3\Map_Enoch\Data\sky_semicloudy_lco.paa";
		terrainBlendMaxDarkenCoef = 1;
		terrainBlendMaxBrightenCoef = 0;
		class EnvMaps
		{
			class EnvMap1
			{
				texture = "A3\Map_Enoch\Data\env_land_ClearSky_ca.paa";
				overcast = 0;
			};
			class EnvMap2
			{
				texture = "A3\Map_Enoch\Data\env_land_SemiCloudySky_ca.paa";
				overcast = 0.4;
			};
			class EnvMap3
			{
				texture = "A3\Map_Enoch\Data\env_land_OvercastSky_ca.paa";
				overcast = 0.8;
			};
		};
		class OutsideTerrain
		{
			satellite = "A3\Map_Enoch\Data\s_satout_co.png";
			enableTerrainSynth = 1;
			class Layers
			{
				class Layer0
				{
					nopx = "A3\Map_Enoch\data\gdt_engrass1_nopx.paa";
					texture = "A3\Map_Enoch\data\gdt_engrass1_co.paa";
				};
			};
			colorOutside[] = {0.227451,0.27451,0.384314,1};
		};
		causticsEnabled = 1;
		causticsTextureMask = "A3\data_f\caustics\caustics_anim_%03d.paa";
		causticsTextureCount = 32;
		causticsDistanceLimit = 200;
		causticsDepthLimit = 80;
		causticsTextureArea = 2;
		causticsTextureAreaDeep = 156;
		causticsTextureChangeInterval = 0.04;
		causticsDepthFadeCoef = 0.05;
		causticsTextureDepthGranularity = 2.5;
		causticsBrightnessCoef = 1;
		class EnvSounds: CfgEnvSounds
		{
			soundSetEnvironment[] = {"Forest_Bg_Morning_01_SoundSet","Forest_Bg_Noon_01_SoundSet","Forest_Bg_AfterNoon_01_SoundSet","Forest_Bg_Night_01_SoundSet","Forest_Meadow_Edge_Birds_Bg_Day_Soundset","Forest_GrassWispyBreeze_01_SoundSet","WindForest_Low_SoundSet","Wind_Forest_Heavy_SoundSet","Rain_Center_Surface_Light_SoundSet","Rain_Center_Surface_Medium_SoundSet","Rain_Center_Surface_Heavy_SoundSet","Rain_Bg_Light_Sparse_SoundSet","Rain_Bg_Forest_Light_SoundSet","Rain_Bg_Forest_Low_SoundSet","Rain_Bg_Forest_Medium_SoundSet","Rain_Bg_Forest_Heavy_SoundSet","Rain_Bg_Forest_Heavy_01_SoundSet","Rain_Bg_Meadow_Heavy_01_SoundSet","Rain_Bg_Meadow_Light_01_SoundSet","Rain_Bg_Meadow_Medium_SoundSet","Rain_Bg_Meadow_Heavy_SoundSet","Meadow_Bg_Day_01_SoundSet","MeadowsNight_SoundSet","Silence_Bg_Night_01_SoundSet","Silence_Bg_Day_01_SoundSet","Wind_Meadows_Medium_SoundSet","Wind_Meadows_Heavy_SoundSet","WindMeadows_Low_SoundSet","Wind_Filler_SoundSet","Wind_Heavy_Filler_SoundSet"};
			class CfgEnvSpatialSounds: CfgEnvSpatialSounds
			{
				class sound_tree_fallen_2
				{
					memPoint = "sound_tree_fallen_2";
					soundSets[] = {"Insect_Day_SoundSet","Insect_Night_SoundSet","Insect_Day_Winged_SoundSet"};
				};
				class sound_tree_stump_1
				{
					memPoint = "sound_tree_stump_1";
					soundSets[] = {"Insect_Day_Winged_SoundSet"};
				};
				class sound_GrassSmall
				{
					memPoint = "sound_GrassSmall";
					soundSets[] = {"Insect_Day_SoundSet","Insect_Night_SoundSet","Insect_Day_Winged_SoundSet"};
				};
				class sound_GrassMedium
				{
					memPoint = "sound_GrassMedium";
					soundSets[] = {"Insect_Day_SoundSet","Insect_Night_SoundSet","Wind_LeavesA_Narrow_SoundSet"};
				};
				class sound_BushSmall
				{
					memPoint = "sound_BushSmall";
					soundSets[] = {"Insect_Day_SoundSet","Insect_Night_SoundSet","Wind_LeavesA_Narrow_SoundSet","Rain_PlantA_Light_SoundSet","Rain_PlantA_Medium_SoundSet","Rain_PlantA_Heavy_SoundSet"};
				};
				class sound_BushMedium
				{
					memPoint = "sound_BushMedium";
					soundSets[] = {"Insect_Day_SoundSet","Rain_PlantB_Light_SoundSet","Rain_PlantB_Medium_SoundSet","Rain_PlantB_Heavy_SoundSet"};
				};
				class sound_TreeLargeSparseEvergreen
				{
					memPoint = "sound_TreeLargeSparseEvergreen";
					soundSets[] = {"Wind_Trees_Creaks_SoundSet"};
				};
				class sound_tree_evergreen_1
				{
					memPoint = "sound_tree_evergreen_1";
					soundSets[] = {"Insect_Night_SoundSet","Rain_Tree_Large_Leaves_Sparse_SoundSet","Rain_Tree_Large_Leaves_Light_SoundSet","Rain_Tree_Large_Leaves_Medium_SoundSet","Rain_Tree_Large_Leaves_Heavy_SoundSet","Rain_Tree_Medium_Pines_Sparse_SoundSet","Rain_Tree_Medium_Pines_Light_SoundSet","Rain_Tree_Medium_Pines_Medium_SoundSet","Rain_Tree_Medium_Pines_Heavy_SoundSet","Rain_Tree_Small_Pines_SoundSet"};
				};
				class sound_TreeSmallEvergreen
				{
					memPoint = "sound_TreeSmallEvergreen";
					soundSets[] = {"Insect_Day_SoundSet","Insect_Night_SoundSet","Rain_Tree_Large_Leaves_Sparse_SoundSet","Rain_Tree_Large_Leaves_Light_SoundSet","Rain_Tree_Large_Leaves_Medium_SoundSet","Rain_Tree_Large_Leaves_Heavy_SoundSet","Rain_Tree_Medium_Pines_Sparse_SoundSet","Rain_Tree_Medium_Pines_Light_SoundSet","Rain_Tree_Medium_Pines_Medium_SoundSet","Rain_Tree_Medium_Pines_Heavy_SoundSet","Rain_Tree_Small_Pines_SoundSet"};
				};
				class sound_TreeMediumEvergreen
				{
					memPoint = "sound_TreeMediumEvergreen";
					soundSets[] = {"Forest_Wrens_Forest_Day_SoundSet","Forest_Birds_All_Day_SoundSet","Forest_Birds_All_Night_SoundSet","Night_Trills_SoundSet","Deercall_Forest_Night_SoundSet","Wolves_Night_SoundSet","Rain_Tree_Large_Leaves_Sparse_SoundSet","Rain_Tree_Large_Leaves_Light_SoundSet","Rain_Tree_Large_Leaves_Medium_SoundSet","Rain_Tree_Large_Leaves_Heavy_SoundSet","Rain_Tree_Medium_Pines_Sparse_SoundSet","Rain_Tree_Medium_Pines_Light_SoundSet","Rain_Tree_Medium_Pines_Medium_SoundSet","Rain_Tree_Medium_Pines_Heavy_SoundSet","Rain_Tree_Small_Pines_SoundSet","Wind_LeavesB_SoundSet"};
				};
				class sound_TreeLargeEvergreen
				{
					memPoint = "sound_TreeLargeEvergreen";
					soundSets[] = {"Forest_Wrens_Forest_Day_SoundSet","Forest_Birds_All_Day_SoundSet","Forest_Woodpecker_SoundSet","Forest_Whippoorwhill_Night_Dawn_SoundSet","Forest_Birds_All_Night_SoundSet","Deercall_Forest_Night_SoundSet","Wolves_Night_SoundSet","Night_Trills_SoundSet","Wind_LeavesC_SoundSet","Wind_Trees_Creaks_SoundSet","Rain_Tree_Large_Leaves_Sparse_SoundSet","Rain_Tree_Large_Leaves_Light_SoundSet","Rain_Tree_Large_Leaves_Medium_SoundSet","Rain_Tree_Large_Leaves_Heavy_SoundSet","Rain_Tree_Medium_Pines_Sparse_SoundSet","Rain_Tree_Medium_Pines_Light_SoundSet","Rain_Tree_Medium_Pines_Medium_SoundSet","Rain_Tree_Medium_Pines_Heavy_SoundSet","Rain_Tree_Small_Pines_SoundSet"};
				};
				class sound_TreeSmallSparseLeaves
				{
					memPoint = "sound_TreeSmallSparseLeaves";
					soundSets[] = {"Insect_Day_Winged_SoundSet"};
				};
				class sound_TreeMediumSparseLeaves
				{
					memPoint = "sound_TreeMediumSparseLeaves";
					soundSets[] = {"Insect_Day_SoundSet","Insect_Night_SoundSet"};
				};
				class sound_TreeSmallLeaves
				{
					memPoint = "sound_TreeSmallLeaves";
					soundSets[] = {"Insect_Day_SoundSet","Insect_Night_SoundSet","Rain_PlantB_Light_SoundSet","Rain_PlantB_Medium_SoundSet","Rain_PlantB_Heavy_SoundSet"};
				};
				class sound_TreeMediumLeaves
				{
					memPoint = "sound_TreeMediumLeaves";
					soundSets[] = {"Insect_Day_SoundSet","Insect_Night_SoundSet","Rain_PlantB_Light_SoundSet","Rain_PlantB_Medium_SoundSet","Rain_PlantB_Heavy_SoundSet","Rain_Tree_Medium_Pines_Sparse_SoundSet","Rain_Tree_Medium_Pines_Light_SoundSet","Rain_Tree_Medium_Pines_Medium_SoundSet","Rain_Tree_Medium_Pines_Heavy_SoundSet","Rain_Tree_Small_Pines_SoundSet","Wind_LeavesA_SoundSet"};
				};
				class sound_TreeLargeLeaves
				{
					memPoint = "sound_TreeLargeLeaves";
					soundSets[] = {"Forest_Wrens_Forest_Day_SoundSet","Forest_Birds_All_Day_SoundSet","Forest_Woodpecker_SoundSet","Forest_Whippoorwhill_Night_Dawn_SoundSet","Forest_Birds_All_Night_SoundSet","Deercall_Forest_Night_SoundSet","Wolves_Night_SoundSet","Night_Trills_SoundSet","Wind_LeavesC_SoundSet","Wind_Trees_Creaks_SoundSet","Rain_Tree_Large_Leaves_Sparse_SoundSet","Rain_Tree_Large_Leaves_Light_SoundSet","Rain_Tree_Large_Leaves_Medium_SoundSet","Rain_Tree_Large_Leaves_Heavy_SoundSet","Rain_Tree_Medium_Pines_Sparse_SoundSet","Rain_Tree_Medium_Pines_Light_SoundSet","Rain_Tree_Medium_Pines_Medium_SoundSet","Rain_Tree_Medium_Pines_Heavy_SoundSet","Rain_Tree_Small_Pines_SoundSet"};
				};
				class sound_TreeSmallLeavesDomestic
				{
					memPoint = "sound_TreeSmallLeaves";
					soundSets[] = {"Insect_Day_SoundSet","Insect_Night_SoundSet","Rain_PlantB_Light_SoundSet","Rain_PlantB_Medium_SoundSet","Rain_PlantB_Heavy_SoundSet"};
				};
				class sound_TreeMediumLeavesDomestic
				{
					memPoint = "sound_TreeMediumLeaves";
					soundSets[] = {"Forest_Birds_All_Day_SoundSet","Rain_Tree_Large_Leaves_Sparse_SoundSet","Rain_Tree_Large_Leaves_Light_SoundSet","Rain_Tree_Large_Leaves_Medium_SoundSet","Rain_Tree_Large_Leaves_Heavy_SoundSet","Rain_Tree_Medium_Pines_Sparse_SoundSet","Rain_Tree_Medium_Pines_Light_SoundSet","Rain_Tree_Medium_Pines_Medium_SoundSet","Rain_Tree_Medium_Pines_Heavy_SoundSet","Rain_Tree_Small_Pines_SoundSet"};
				};
				class sound_TreeLargeLeavesDomestic
				{
					memPoint = "sound_TreeLargeLeaves";
					soundSets[] = {"Forest_Wrens_Forest_Day_SoundSet","Forest_Birds_All_Day_SoundSet","Forest_Birds_All_Night_SoundSet","Rain_Tree_Large_Leaves_Sparse_SoundSet","Rain_Tree_Large_Leaves_Light_SoundSet","Rain_Tree_Large_Leaves_Medium_SoundSet","Rain_Tree_Large_Leaves_Heavy_SoundSet","Rain_Tree_Medium_Pines_Sparse_SoundSet","Rain_Tree_Medium_Pines_Light_SoundSet","Rain_Tree_Medium_Pines_Medium_SoundSet","Rain_Tree_Medium_Pines_Heavy_SoundSet","Rain_Tree_Small_Pines_SoundSet","Wind_LeavesC_SoundSet","Wind_Trees_Creaks_SoundSet"};
				};
				class sound_TreeSmallNoleaves
				{
					memPoint = "sound_TreeSmallNoleaves";
					soundSets[] = {};
				};
				class sound_TreeMediumNoleaves
				{
					memPoint = "sound_TreeMediumNoleaves";
					soundSets[] = {"Wind_Trees_Creaks_SoundSet"};
				};
				class sound_TreeLargeNoleaves
				{
					memPoint = "sound_TreeLargeNoleaves";
					soundSets[] = {"Wind_Trees_Creaks_SoundSet","Deercall_Forest_Night_SoundSet","Wolves_Night_SoundSet","Night_Trills_SoundSet"};
				};
				class Testtone_SoundSet
				{
					memPoint = "sound_Testtone_MemoryPoint";
					soundSets[] = {"Testtone_SoundSet"};
				};
				class sound_rain_metalTin_tiny_1
				{
					memPoint = "sound_rain_metalTin_tiny_1";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Rock_DebrisWind_Small_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_2
				{
					memPoint = "sound_rain_metalTin_tiny_2";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_tiny_3
				{
					memPoint = "sound_rain_metalTin_tiny_3";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_tiny_4
				{
					memPoint = "sound_rain_metalTin_tiny_4";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_tiny_5
				{
					memPoint = "sound_rain_metalTin_tiny_5";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_tiny_6
				{
					memPoint = "sound_rain_metalTin_tiny_6";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_tiny_7
				{
					memPoint = "sound_rain_metalTin_tiny_7";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_tiny_8
				{
					memPoint = "sound_rain_metalTin_tiny_8";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_tiny_9
				{
					memPoint = "sound_rain_metalTin_tiny_9";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_tiny_10
				{
					memPoint = "sound_rain_metalTin_tiny_10";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_tiny_11
				{
					memPoint = "sound_rain_metalTin_tiny_11";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_tiny_12
				{
					memPoint = "sound_rain_metalTin_tiny_12";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_tiny_13
				{
					memPoint = "sound_rain_metalTin_tiny_13";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_tiny_14
				{
					memPoint = "sound_rain_metalTin_tiny_14";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_tiny_15
				{
					memPoint = "sound_rain_metalTin_tiny_15";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_tiny_16
				{
					memPoint = "sound_rain_metalTin_tiny_16";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_tiny_17
				{
					memPoint = "sound_rain_metalTin_tiny_17";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_tiny_18
				{
					memPoint = "sound_rain_metalTin_tiny_18";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_tiny_19
				{
					memPoint = "sound_rain_metalTin_tiny_19";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_tiny_20
				{
					memPoint = "sound_rain_metalTin_tiny_20";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_tiny_21
				{
					memPoint = "sound_rain_metalTin_tiny_21";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_tiny_22
				{
					memPoint = "sound_rain_metalTin_tiny_22";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_tiny_23
				{
					memPoint = "sound_rain_metalTin_tiny_23";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_small_1
				{
					memPoint = "sound_rain_metalTin_small_1";
					soundSets[] = {"Rain_MetalA_Light_SoundSet","Rain_MetalA_Medium_SoundSet","Rain_MetalA_Heavy_SoundSet","Rock_DebrisWind_Small_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_small_2
				{
					memPoint = "sound_rain_metalTin_small_2";
					soundSets[] = {"Rain_MetalA_Light_SoundSet","Rain_MetalA_Medium_SoundSet","Rain_MetalA_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_small_3
				{
					memPoint = "sound_rain_metalTin_small_3";
					soundSets[] = {"Rain_MetalA_Light_SoundSet","Rain_MetalA_Medium_SoundSet","Rain_MetalA_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_small_4
				{
					memPoint = "sound_rain_metalTin_small_4";
					soundSets[] = {"Rain_MetalA_Light_SoundSet","Rain_MetalA_Medium_SoundSet","Rain_MetalA_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_small_5
				{
					memPoint = "sound_rain_metalTin_small_5";
					soundSets[] = {"Rain_MetalA_Light_SoundSet","Rain_MetalA_Medium_SoundSet","Rain_MetalA_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_small_6
				{
					memPoint = "sound_rain_metalTin_small_6";
					soundSets[] = {"Rain_MetalA_Light_SoundSet","Rain_MetalA_Medium_SoundSet","Rain_MetalA_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_small_7
				{
					memPoint = "sound_rain_metalTin_small_7";
					soundSets[] = {"Rain_MetalA_Light_SoundSet","Rain_MetalA_Medium_SoundSet","Rain_MetalA_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_small_8
				{
					memPoint = "sound_rain_metalTin_small_8";
					soundSets[] = {"Rain_MetalA_Light_SoundSet","Rain_MetalA_Medium_SoundSet","Rain_MetalA_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_small_9
				{
					memPoint = "sound_rain_metalTin_small_9";
					soundSets[] = {"Rain_MetalA_Light_SoundSet","Rain_MetalA_Medium_SoundSet","Rain_MetalA_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_small_10
				{
					memPoint = "sound_rain_metalTin_small_10";
					soundSets[] = {"Rain_MetalA_Light_SoundSet","Rain_MetalA_Medium_SoundSet","Rain_MetalA_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_small_11
				{
					memPoint = "sound_rain_metalTin_small_11";
					soundSets[] = {"Rain_MetalA_Light_SoundSet","Rain_MetalA_Medium_SoundSet","Rain_MetalA_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_small_12
				{
					memPoint = "sound_rain_metalTin_small_12";
					soundSets[] = {"Rain_MetalA_Light_SoundSet","Rain_MetalA_Medium_SoundSet","Rain_MetalA_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_small_narrow_1
				{
					memPoint = "sound_rain_metalTin_small_narrow_1";
					soundSets[] = {"Rain_MetalAn_Light_SoundSet","Rain_MetalAn_Medium_SoundSet","Rain_MetalAn_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_small_narrow_2
				{
					memPoint = "sound_rain_metalTin_small_narrow_2";
					soundSets[] = {"Rain_MetalAn_Light_SoundSet","Rain_MetalAn_Medium_SoundSet","Rain_MetalAn_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_small_narrow_3
				{
					memPoint = "sound_rain_metalTin_small_narrow_3";
					soundSets[] = {"Rain_MetalAn_Light_SoundSet","Rain_MetalAn_Medium_SoundSet","Rain_MetalAn_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_small_narrow_4
				{
					memPoint = "sound_rain_metalTin_small_narrow_4";
					soundSets[] = {"Rain_MetalAn_Light_SoundSet","Rain_MetalAn_Medium_SoundSet","Rain_MetalAn_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_medium_1
				{
					memPoint = "sound_rain_metalTin_medium_1";
					soundSets[] = {"Rain_MetalB_Light_SoundSet","Rain_MetalB_Medium_SoundSet","Rain_MetalB_Heavy_SoundSet","Metal_DebrisWind_Medium_SoundSet"};
				};
				class sound_rain_metalTin_medium_2
				{
					memPoint = "sound_rain_metalTin_medium_2";
					soundSets[] = {"Rain_MetalB_Light_SoundSet","Rain_MetalB_Medium_SoundSet","Rain_MetalB_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_medium_3
				{
					memPoint = "sound_rain_metalTin_medium_3";
					soundSets[] = {"Rain_MetalB_Light_SoundSet","Rain_MetalB_Medium_SoundSet","Rain_MetalB_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_medium_4
				{
					memPoint = "sound_rain_metalTin_medium_4";
					soundSets[] = {"Rain_MetalB_Light_SoundSet","Rain_MetalB_Medium_SoundSet","Rain_MetalB_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_medium_5
				{
					memPoint = "sound_rain_metalTin_medium_5";
					soundSets[] = {"Rain_MetalB_Light_SoundSet","Rain_MetalB_Medium_SoundSet","Rain_MetalB_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_medium_narrow_1
				{
					memPoint = "sound_rain_metalTin_medium_narrow_1";
					soundSets[] = {"Rain_MetalBn_Light_SoundSet","Rain_MetalBn_Medium_SoundSet","Rain_MetalBn_Heavy_SoundSet","Metal_DebrisWind_Medium_SoundSet"};
				};
				class sound_rain_metalTin_medium_narrow_2
				{
					memPoint = "sound_rain_metalTin_medium_narrow_2";
					soundSets[] = {"Rain_MetalBn_Light_SoundSet","Rain_MetalBn_Medium_SoundSet","Rain_MetalBn_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_medium_narrow_3
				{
					memPoint = "sound_rain_metalTin_medium_narrow_3";
					soundSets[] = {"Rain_MetalBn_Light_SoundSet","Rain_MetalBn_Medium_SoundSet","Rain_MetalBn_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_medium_narrow_4
				{
					memPoint = "sound_rain_metalTin_medium_narrow_4";
					soundSets[] = {"Rain_MetalBn_Light_SoundSet","Rain_MetalBn_Medium_SoundSet","Rain_MetalBn_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_large_1
				{
					memPoint = "sound_rain_metalTin_large_1";
					soundSets[] = {"Rain_MetalC_Light_SoundSet","Rain_MetalC_Medium_SoundSet","Rain_MetalC_Heavy_SoundSet","Metal_DebrisWind_Large_SoundSet"};
				};
				class sound_rain_metalTin_large_2
				{
					memPoint = "sound_rain_metalTin_large_2";
					soundSets[] = {"Rain_MetalC_Light_SoundSet","Rain_MetalC_Medium_SoundSet","Rain_MetalC_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_large_3
				{
					memPoint = "sound_rain_metalTin_large_3";
					soundSets[] = {"Rain_MetalC_Light_SoundSet","Rain_MetalC_Medium_SoundSet","Rain_MetalC_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_large_4
				{
					memPoint = "sound_rain_metalTin_large_4";
					soundSets[] = {"Rain_MetalC_Light_SoundSet","Rain_MetalC_Medium_SoundSet","Rain_MetalC_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_large_5
				{
					memPoint = "sound_rain_metalTin_large_5";
					soundSets[] = {"Rain_MetalC_Light_SoundSet","Rain_MetalC_Medium_SoundSet","Rain_MetalC_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_large_6
				{
					memPoint = "sound_rain_metalTin_large_6";
					soundSets[] = {"Rain_MetalC_Light_SoundSet","Rain_MetalC_Medium_SoundSet","Rain_MetalC_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_large_7
				{
					memPoint = "sound_rain_metalTin_large_7";
					soundSets[] = {"Rain_MetalC_Light_SoundSet","Rain_MetalC_Medium_SoundSet","Rain_MetalC_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_large_8
				{
					memPoint = "sound_rain_metalTin_large_8";
					soundSets[] = {"Rain_MetalC_Light_SoundSet","Rain_MetalC_Medium_SoundSet","Rain_MetalC_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_large_9
				{
					memPoint = "sound_rain_metalTin_large_9";
					soundSets[] = {"Rain_MetalC_Light_SoundSet","Rain_MetalC_Medium_SoundSet","Rain_MetalC_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_large_10
				{
					memPoint = "sound_rain_metalTin_large_10";
					soundSets[] = {"Rain_MetalC_Light_SoundSet","Rain_MetalC_Medium_SoundSet","Rain_MetalC_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_large_11
				{
					memPoint = "sound_rain_metalTin_large_11";
					soundSets[] = {"Rain_MetalC_Light_SoundSet","Rain_MetalC_Medium_SoundSet","Rain_MetalC_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_large_12
				{
					memPoint = "sound_rain_metalTin_large_12";
					soundSets[] = {"Rain_MetalC_Light_SoundSet","Rain_MetalC_Medium_SoundSet","Rain_MetalC_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_large_narrow_1
				{
					memPoint = "sound_rain_metalTin_large_narrow_1";
					soundSets[] = {"Rain_MetalCn_Light_SoundSet","Rain_MetalCn_Medium_SoundSet","Rain_MetalCn_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_large_narrow_2
				{
					memPoint = "sound_rain_metalTin_large_narrow_2";
					soundSets[] = {"Rain_MetalCn_Light_SoundSet","Rain_MetalCn_Medium_SoundSet","Rain_MetalCn_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_large_narrow_3
				{
					memPoint = "sound_rain_metalTin_large_narrow_3";
					soundSets[] = {"Rain_MetalCn_Light_SoundSet","Rain_MetalCn_Medium_SoundSet","Rain_MetalCn_Heavy_SoundSet"};
				};
				class sound_rain_metalTin_large_narrow_4
				{
					memPoint = "sound_rain_metalTin_large_narrow_4";
					soundSets[] = {"Rain_MetalCn_Light_SoundSet","Rain_MetalCn_Medium_SoundSet","Rain_MetalCn_Heavy_SoundSet"};
				};
				class sound_rain_metalPlate_small_1
				{
					memPoint = "sound_rain_metalPlate_small_1";
					soundSets[] = {"Rain_PlateA_Medium_SoundSet","Rain_PlateA_Heavy_SoundSet"};
				};
				class sound_rain_metalPlate_small_2
				{
					memPoint = "sound_rain_metalPlate_small_2";
					soundSets[] = {"Rain_PlateA_Medium_SoundSet","Rain_PlateA_Heavy_SoundSet"};
				};
				class sound_rain_metalPlate_medium_1
				{
					memPoint = "sound_rain_metalPlate_medium_1";
					soundSets[] = {"Rain_PlateBn_Medium_SoundSet","Rain_PlateBn_Heavy_SoundSet"};
				};
				class sound_rain_metalPlate_medium_2
				{
					memPoint = "sound_rain_metalPlate_medium_2";
					soundSets[] = {"Rain_PlateBn_Medium_SoundSet","Rain_PlateBn_Heavy_SoundSet"};
				};
				class sound_rain_metalPlate_medium_3
				{
					memPoint = "sound_rain_metalPlate_medium_3";
					soundSets[] = {"Rain_PlateBn_Medium_SoundSet","Rain_PlateBn_Heavy_SoundSet"};
				};
				class sound_rain_metalPlate_medium_4
				{
					memPoint = "sound_rain_metalPlate_medium_4";
					soundSets[] = {"Rain_PlateBn_Medium_SoundSet","Rain_PlateBn_Heavy_SoundSet"};
				};
				class sound_rain_metalPlate_medium_5
				{
					memPoint = "sound_rain_metalPlate_medium_5";
					soundSets[] = {"Rain_PlateBn_Medium_SoundSet","Rain_PlateBn_Heavy_SoundSet"};
				};
				class sound_rain_metalPlate_medium_6
				{
					memPoint = "sound_rain_metalPlate_medium_6";
					soundSets[] = {"Rain_PlateBn_Medium_SoundSet","Rain_PlateBn_Heavy_SoundSet"};
				};
				class sound_rain_metalPlate_large_1
				{
					memPoint = "sound_rain_metalPlate_large_1";
					soundSets[] = {"Rain_PlateB_Medium_SoundSet","Rain_PlateB_Heavy_SoundSet"};
				};
				class sound_rain_metalPlate_large_2
				{
					memPoint = "sound_rain_metalPlate_large_2";
					soundSets[] = {"Rain_PlateB_Medium_SoundSet","Rain_PlateB_Heavy_SoundSet"};
				};
				class sound_metal_stairs_1
				{
					memPoint = "sound_metal_stairs_1";
					soundSets[] = {"Rain_PlateA_Medium_SoundSet","Rain_PlateA_Heavy_SoundSet","Metal_Tension_High_SoundSet","Metal_StressWind_High_SoundSet","Rock_DebrisWind_Small_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_metal_stairs_2
				{
					memPoint = "sound_metal_stairs_2";
					soundSets[] = {"Rain_PlateA_Medium_SoundSet","Rain_PlateA_Heavy_SoundSet"};
				};
				class sound_metal_stairs_3
				{
					memPoint = "sound_metal_stairs_3";
					soundSets[] = {"Rain_PlateA_Medium_SoundSet","Rain_PlateA_Heavy_SoundSet"};
				};
				class sound_metal_stairs_4
				{
					memPoint = "sound_metal_stairs_4";
					soundSets[] = {"Rain_PlateA_Medium_SoundSet","Rain_PlateA_Heavy_SoundSet","Metal_Tension_High_SoundSet","Metal_StressWind_High_SoundSet","Rock_DebrisWind_Small_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_metal_stairs_5
				{
					memPoint = "sound_metal_stairs_5";
					soundSets[] = {"Rain_PlateA_Medium_SoundSet","Rain_PlateA_Heavy_SoundSet"};
				};
				class sound_metal_stairs_6
				{
					memPoint = "sound_metal_stairs_6";
					soundSets[] = {"Rain_PlateA_Medium_SoundSet","Rain_PlateA_Heavy_SoundSet","Metal_Tension_High_SoundSet","Metal_StressWind_High_SoundSet"};
				};
				class sound_metal_stairs_solid_1
				{
					memPoint = "sound_metal_stairs_solid_1";
					soundSets[] = {"Rain_PlateA_Medium_SoundSet","Rain_PlateA_Heavy_SoundSet","Metal_Tension_High_SoundSet","Metal_StressWind_High_SoundSet","Rock_DebrisWind_Small_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_tar_soft_small_narrow_1
				{
					memPoint = "sound_rain_tar_soft_small_narrow_1";
					soundSets[] = {"Rain_Tar_Small_01_Light_SoundSet","Rain_Tar_Small_01_Medium_SoundSet","Rain_Tar_Small_01_Heavy_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_tar_soft_small_narrow_2
				{
					memPoint = "sound_rain_tar_soft_small_narrow_2";
					soundSets[] = {"Rain_Tar_Small_01_Light_SoundSet","Rain_Tar_Small_01_Medium_SoundSet","Rain_Tar_Small_01_Heavy_SoundSet"};
				};
				class sound_rain_tar_soft_small_narrow_3
				{
					memPoint = "sound_rain_tar_soft_small_narrow_3";
					soundSets[] = {"Rain_Tar_Small_01_Light_SoundSet","Rain_Tar_Small_01_Medium_SoundSet","Rain_Tar_Small_01_Heavy_SoundSet"};
				};
				class sound_rain_tar_soft_small_narrow_4
				{
					memPoint = "sound_rain_tar_soft_small_narrow_4";
					soundSets[] = {"Rain_Tar_Small_01_Light_SoundSet","Rain_Tar_Small_01_Medium_SoundSet","Rain_Tar_Small_01_Heavy_SoundSet"};
				};
				class sound_rain_tar_soft_small_narrow_5
				{
					memPoint = "sound_rain_tar_soft_small_narrow_5";
					soundSets[] = {"Rain_Tar_Small_01_Light_SoundSet","Rain_Tar_Small_01_Medium_SoundSet","Rain_Tar_Small_01_Heavy_SoundSet"};
				};
				class sound_rain_tar_soft_small_narrow_6
				{
					memPoint = "sound_rain_tar_soft_small_narrow_6";
					soundSets[] = {"Rain_Tar_Small_01_Light_SoundSet","Rain_Tar_Small_01_Medium_SoundSet","Rain_Tar_Small_01_Heavy_SoundSet"};
				};
				class sound_rain_tar_soft_small_narrow_7
				{
					memPoint = "sound_rain_tar_soft_small_narrow_7";
					soundSets[] = {"Rain_Tar_Small_01_Light_SoundSet","Rain_Tar_Small_01_Medium_SoundSet","Rain_Tar_Small_01_Heavy_SoundSet"};
				};
				class sound_rain_tar_soft_small_narrow_8
				{
					memPoint = "sound_rain_tar_soft_small_narrow_8";
					soundSets[] = {"Rain_Tar_Small_01_Light_SoundSet","Rain_Tar_Small_01_Medium_SoundSet","Rain_Tar_Small_01_Heavy_SoundSet"};
				};
				class sound_rain_tar_soft_small_1
				{
					memPoint = "sound_rain_tar_soft_small_1";
					soundSets[] = {"Rain_Tar_Small_02_Light_SoundSet","Rain_Tar_Small_02_Medium_SoundSet","Rain_Tar_Small_02_Heavy_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_tar_soft_small_2
				{
					memPoint = "sound_rain_tar_soft_small_2";
					soundSets[] = {"Rain_Tar_Small_02_Light_SoundSet","Rain_Tar_Small_02_Medium_SoundSet","Rain_Tar_Small_02_Heavy_SoundSet"};
				};
				class sound_rain_tar_soft_small_3
				{
					memPoint = "sound_rain_tar_soft_small_3";
					soundSets[] = {"Rain_Tar_Small_02_Light_SoundSet","Rain_Tar_Small_02_Medium_SoundSet","Rain_Tar_Small_02_Heavy_SoundSet"};
				};
				class sound_rain_tar_soft_small_4
				{
					memPoint = "sound_rain_tar_soft_small_4";
					soundSets[] = {"Rain_Tar_Small_02_Light_SoundSet","Rain_Tar_Small_02_Medium_SoundSet","Rain_Tar_Small_02_Heavy_SoundSet"};
				};
				class sound_rain_tar_soft_small_5
				{
					memPoint = "sound_rain_tar_soft_small_5";
					soundSets[] = {"Rain_Tar_Small_02_Light_SoundSet","Rain_Tar_Small_02_Medium_SoundSet","Rain_Tar_Small_02_Heavy_SoundSet"};
				};
				class sound_rain_tar_soft_small_6
				{
					memPoint = "sound_rain_tar_soft_small_6";
					soundSets[] = {"Rain_Tar_Small_02_Light_SoundSet","Rain_Tar_Small_02_Medium_SoundSet","Rain_Tar_Small_02_Heavy_SoundSet"};
				};
				class sound_rain_tar_soft_small_7
				{
					memPoint = "sound_rain_tar_soft_small_7";
					soundSets[] = {"Rain_Tar_Small_02_Light_SoundSet","Rain_Tar_Small_02_Medium_SoundSet","Rain_Tar_Small_02_Heavy_SoundSet"};
				};
				class sound_rain_tar_soft_small_8
				{
					memPoint = "sound_rain_tar_soft_small_8";
					soundSets[] = {"Rain_Tar_Small_02_Light_SoundSet","Rain_Tar_Small_02_Medium_SoundSet","Rain_Tar_Small_02_Heavy_SoundSet"};
				};
				class sound_rain_tar_soft_medium_1
				{
					memPoint = "sound_rain_tar_soft_medium_1";
					soundSets[] = {"Rain_Tar_Medium_Light_SoundSet","Rain_Tar_Medium_Medium_SoundSet","Rain_Tar_Medium_Heavy_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_tar_soft_medium_2
				{
					memPoint = "sound_rain_tar_soft_medium_2";
					soundSets[] = {"Rain_Tar_Medium_Light_SoundSet","Rain_Tar_Medium_Medium_SoundSet","Rain_Tar_Medium_Heavy_SoundSet"};
				};
				class sound_rain_tar_soft_medium_3
				{
					memPoint = "sound_rain_tar_soft_medium_3";
					soundSets[] = {"Rain_Tar_Medium_Light_SoundSet","Rain_Tar_Medium_Medium_SoundSet","Rain_Tar_Medium_Heavy_SoundSet"};
				};
				class sound_rain_tar_soft_medium_4
				{
					memPoint = "sound_rain_tar_soft_medium_4";
					soundSets[] = {"Rain_Tar_Medium_Light_SoundSet","Rain_Tar_Medium_Medium_SoundSet","Rain_Tar_Medium_Heavy_SoundSet"};
				};
				class sound_rain_tar_soft_medium_5
				{
					memPoint = "sound_rain_tar_soft_medium_5";
					soundSets[] = {"Rain_Tar_Medium_Light_SoundSet","Rain_Tar_Medium_Medium_SoundSet","Rain_Tar_Medium_Heavy_SoundSet"};
				};
				class sound_rain_tar_soft_medium_6
				{
					memPoint = "sound_rain_tar_soft_medium_6";
					soundSets[] = {"Rain_Tar_Medium_Light_SoundSet","Rain_Tar_Medium_Medium_SoundSet","Rain_Tar_Medium_Heavy_SoundSet"};
				};
				class sound_rain_tar_soft_medium_7
				{
					memPoint = "sound_rain_tar_soft_medium_7";
					soundSets[] = {"Rain_Tar_Medium_Light_SoundSet","Rain_Tar_Medium_Medium_SoundSet","Rain_Tar_Medium_Heavy_SoundSet"};
				};
				class sound_rain_tar_soft_medium_8
				{
					memPoint = "sound_rain_tar_soft_medium_8";
					soundSets[] = {"Rain_Tar_Medium_Light_SoundSet","Rain_Tar_Medium_Medium_SoundSet","Rain_Tar_Medium_Heavy_SoundSet"};
				};
				class sound_rain_tar_soft_medium_9
				{
					memPoint = "sound_rain_tar_soft_medium_9";
					soundSets[] = {"Rain_Tar_Medium_Light_SoundSet","Rain_Tar_Medium_Medium_SoundSet","Rain_Tar_Medium_Heavy_SoundSet"};
				};
				class sound_rain_tar_soft_large_1
				{
					memPoint = "sound_rain_tar_soft_large_1";
					soundSets[] = {"Rain_Tar_Large_Light_SoundSet","Rain_Tar_Large_Medium_SoundSet","Rain_Tar_Large_Heavy_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_tar_soft_large_2
				{
					memPoint = "sound_rain_tar_soft_large_2";
					soundSets[] = {"Rain_Tar_Large_Light_SoundSet","Rain_Tar_Large_Medium_SoundSet","Rain_Tar_Large_Heavy_SoundSet"};
				};
				class sound_rain_tar_soft_large_3
				{
					memPoint = "sound_rain_tar_soft_large_3";
					soundSets[] = {"Rain_Tar_Large_Light_SoundSet","Rain_Tar_Large_Medium_SoundSet","Rain_Tar_Large_Heavy_SoundSet"};
				};
				class sound_rain_tar_soft_large_4
				{
					memPoint = "sound_rain_tar_soft_large_4";
					soundSets[] = {"Rain_Tar_Large_Light_SoundSet","Rain_Tar_Large_Medium_SoundSet","Rain_Tar_Large_Heavy_SoundSet"};
				};
				class sound_rain_tar_soft_large_5
				{
					memPoint = "sound_rain_tar_soft_large_5";
					soundSets[] = {"Rain_Tar_Large_Light_SoundSet","Rain_Tar_Large_Medium_SoundSet","Rain_Tar_Large_Heavy_SoundSet"};
				};
				class sound_rain_tar_soft_large_6
				{
					memPoint = "sound_rain_tar_soft_large_6";
					soundSets[] = {"Rain_Tar_Large_Light_SoundSet","Rain_Tar_Large_Medium_SoundSet","Rain_Tar_Large_Heavy_SoundSet"};
				};
				class sound_rain_tar_soft_large_7
				{
					memPoint = "sound_rain_tar_soft_large_7";
					soundSets[] = {"Rain_Tar_Large_Light_SoundSet","Rain_Tar_Large_Medium_SoundSet","Rain_Tar_Large_Heavy_SoundSet"};
				};
				class sound_rain_tar_soft_large_8
				{
					memPoint = "sound_rain_tar_soft_large_8";
					soundSets[] = {"Rain_Tar_Large_Light_SoundSet","Rain_Tar_Large_Medium_SoundSet","Rain_Tar_Large_Heavy_SoundSet"};
				};
				class sound_rain_tiles_tiny_1
				{
					memPoint = "sound_rain_tiles_tiny_1";
					soundSets[] = {"Rain_Tiles_Small_01_Light_SoundSet","Rain_Tiles_Small_01_Medium_SoundSet","Rain_Tiles_Small_01_Heavy_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_tiles_tiny_2
				{
					memPoint = "sound_rain_tiles_tiny_2";
					soundSets[] = {"Rain_Tiles_Small_01_Light_SoundSet","Rain_Tiles_Small_01_Medium_SoundSet","Rain_Tiles_Small_01_Heavy_SoundSet"};
				};
				class sound_rain_tiles_tiny_3
				{
					memPoint = "sound_rain_tiles_tiny_3";
					soundSets[] = {"Rain_Tiles_Small_01_Light_SoundSet","Rain_Tiles_Small_01_Medium_SoundSet","Rain_Tiles_Small_01_Heavy_SoundSet"};
				};
				class sound_rain_tiles_tiny_4
				{
					memPoint = "sound_rain_tiles_tiny_4";
					soundSets[] = {"Rain_Tiles_Small_01_Light_SoundSet","Rain_Tiles_Small_01_Medium_SoundSet","Rain_Tiles_Small_01_Heavy_SoundSet"};
				};
				class sound_rain_tiles_small_1
				{
					memPoint = "sound_rain_tiles_small_1";
					soundSets[] = {"Rain_Tiles_Small_02_Light_SoundSet","Rain_Tiles_Small_02_Medium_SoundSet","Rain_Tiles_Small_02_Heavy_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_tiles_small_2
				{
					memPoint = "sound_rain_tiles_small_2";
					soundSets[] = {"Rain_Tiles_Small_02_Light_SoundSet","Rain_Tiles_Small_02_Medium_SoundSet","Rain_Tiles_Small_02_Heavy_SoundSet"};
				};
				class sound_rain_tiles_small_3
				{
					memPoint = "sound_rain_tiles_small_3";
					soundSets[] = {"Rain_Tiles_Small_02_Light_SoundSet","Rain_Tiles_Small_02_Medium_SoundSet","Rain_Tiles_Small_02_Heavy_SoundSet"};
				};
				class sound_rain_tiles_small_4
				{
					memPoint = "sound_rain_tiles_small_4";
					soundSets[] = {"Rain_Tiles_Small_02_Light_SoundSet","Rain_Tiles_Small_02_Medium_SoundSet","Rain_Tiles_Small_02_Heavy_SoundSet"};
				};
				class sound_rain_tiles_small_5
				{
					memPoint = "sound_rain_tiles_small_5";
					soundSets[] = {"Rain_Tiles_Small_02_Light_SoundSet","Rain_Tiles_Small_02_Medium_SoundSet","Rain_Tiles_Small_02_Heavy_SoundSet"};
				};
				class sound_rain_tiles_small_6
				{
					memPoint = "sound_rain_tiles_small_6";
					soundSets[] = {"Rain_Tiles_Small_02_Light_SoundSet","Rain_Tiles_Small_02_Medium_SoundSet","Rain_Tiles_Small_02_Heavy_SoundSet"};
				};
				class sound_rain_tiles_medium_1
				{
					memPoint = "sound_rain_tiles_medium_1";
					soundSets[] = {"Rain_Tiles_Medium_Light_SoundSet","Rain_Tiles_Medium_Medium_SoundSet","Rain_Tiles_Medium_Heavy_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_tiles_medium_2
				{
					memPoint = "sound_rain_tiles_medium_2";
					soundSets[] = {"Rain_Tiles_Medium_Light_SoundSet","Rain_Tiles_Medium_Medium_SoundSet","Rain_Tiles_Medium_Heavy_SoundSet"};
				};
				class sound_rain_tiles_medium_3
				{
					memPoint = "sound_rain_tiles_medium_3";
					soundSets[] = {"Rain_Tiles_Medium_Light_SoundSet","Rain_Tiles_Medium_Medium_SoundSet","Rain_Tiles_Medium_Heavy_SoundSet"};
				};
				class sound_rain_tiles_medium_4
				{
					memPoint = "sound_rain_tiles_medium_4";
					soundSets[] = {"Rain_Tiles_Medium_Light_SoundSet","Rain_Tiles_Medium_Medium_SoundSet","Rain_Tiles_Medium_Heavy_SoundSet"};
				};
				class sound_rain_tiles_medium_5
				{
					memPoint = "sound_rain_tiles_medium_5";
					soundSets[] = {"Rain_Tiles_Medium_Light_SoundSet","Rain_Tiles_Medium_Medium_SoundSet","Rain_Tiles_Medium_Heavy_SoundSet"};
				};
				class sound_rain_tiles_medium_6
				{
					memPoint = "sound_rain_tiles_medium_6";
					soundSets[] = {"Rain_Tiles_Medium_Light_SoundSet","Rain_Tiles_Medium_Medium_SoundSet","Rain_Tiles_Medium_Heavy_SoundSet"};
				};
				class sound_rain_tiles_large_1
				{
					memPoint = "sound_rain_tiles_large_1";
					soundSets[] = {"Rain_Tiles_Large_Light_SoundSet","Rain_Tiles_Large_Medium_SoundSet","Rain_Tiles_Large_Heavy_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_tiles_large_2
				{
					memPoint = "sound_rain_tiles_large_2";
					soundSets[] = {"Rain_Tiles_Large_Light_SoundSet","Rain_Tiles_Large_Medium_SoundSet","Rain_Tiles_Large_Heavy_SoundSet"};
				};
				class sound_rain_tiles_large_3
				{
					memPoint = "sound_rain_tiles_large_3";
					soundSets[] = {"Rain_Tiles_Large_Light_SoundSet","Rain_Tiles_Large_Medium_SoundSet","Rain_Tiles_Large_Heavy_SoundSet"};
				};
				class sound_rain_tiles_large_4
				{
					memPoint = "sound_rain_tiles_large_4";
					soundSets[] = {"Rain_Tiles_Large_Light_SoundSet","Rain_Tiles_Large_Medium_SoundSet","Rain_Tiles_Large_Heavy_SoundSet"};
				};
				class sound_rain_tiles_large_5
				{
					memPoint = "sound_rain_tiles_large_5";
					soundSets[] = {"Rain_Tiles_Large_Light_SoundSet","Rain_Tiles_Large_Medium_SoundSet","Rain_Tiles_Large_Heavy_SoundSet"};
				};
				class sound_rain_tiles_large_6
				{
					memPoint = "sound_rain_tiles_large_6";
					soundSets[] = {"Rain_Tiles_Large_Light_SoundSet","Rain_Tiles_Large_Medium_SoundSet","Rain_Tiles_Large_Heavy_SoundSet"};
				};
				class sound_rain_haybale
				{
					memPoint = "sound_rain_haybale_01";
					soundSets[] = {"Rain_Haybale_Light_SoundSet","Rain_Haybale_Heavy_SoundSet"};
				};
				class sound_rain_strawstack_1
				{
					memPoint = "sound_rain_strawstack_1";
					soundSets[] = {"Rain_Strawstack_Light_SoundSet","Rain_Strawstack_Heavy_SoundSet"};
				};
				class sound_rain_strawstack_2
				{
					memPoint = "sound_rain_strawstack_2";
					soundSets[] = {"Rain_Strawstack_Light_SoundSet","Rain_Strawstack_Heavy_SoundSet"};
				};
				class sound_rain_strawstack_3
				{
					memPoint = "sound_rain_strawstack_3";
					soundSets[] = {"Rain_Strawstack_Light_SoundSet","Rain_Strawstack_Heavy_SoundSet"};
				};
				class sound_rain_strawstack_4
				{
					memPoint = "sound_rain_strawstack_4";
					soundSets[] = {"Rain_Strawstack_Light_SoundSet","Rain_Strawstack_Heavy_SoundSet"};
				};
				class sound_rain_strawstack_5
				{
					memPoint = "sound_rain_strawstack_5";
					soundSets[] = {"Rain_Strawstack_Light_SoundSet","Rain_Strawstack_Heavy_SoundSet"};
				};
				class sound_rain_strawstack_6
				{
					memPoint = "sound_rain_strawstack_6";
					soundSets[] = {"Rain_Strawstack_Light_SoundSet","Rain_Strawstack_Heavy_SoundSet"};
				};
				class sound_rain_wood_surface_tiny_01
				{
					memPoint = "sound_rain_wood_surface_tiny_01";
					soundSets[] = {"Rain_Wood_Surface_Light_SoundSet","Rain_Wood_Surface_Medium_SoundSet","Rain_Wood_Surface_Heavy_SoundSet"};
				};
				class sound_rain_wood_surface_tiny_02
				{
					memPoint = "sound_rain_wood_surface_tiny_02";
					soundSets[] = {"Rain_Wood_Surface_Light_SoundSet","Rain_Wood_Surface_Medium_SoundSet","Rain_Wood_Surface_Heavy_SoundSet"};
				};
				class sound_rain_wood_surface_tiny_03
				{
					memPoint = "sound_rain_wood_surface_tiny_03";
					soundSets[] = {"Rain_Wood_Surface_Light_SoundSet","Rain_Wood_Surface_Medium_SoundSet","Rain_Wood_Surface_Heavy_SoundSet"};
				};
				class sound_rain_wood_surface_tiny_04
				{
					memPoint = "sound_rain_wood_surface_tiny_04";
					soundSets[] = {"Rain_Wood_Surface_Light_SoundSet","Rain_Wood_Surface_Medium_SoundSet","Rain_Wood_Surface_Heavy_SoundSet"};
				};
				class sound_rain_wood_surface_small_01
				{
					memPoint = "sound_rain_wood_surface_small_01";
					soundSets[] = {"Rain_Wood_Surface_Light_SoundSet","Rain_Wood_Surface_Medium_SoundSet","Rain_Wood_Surface_Heavy_SoundSet"};
				};
				class sound_rain_wood_surface_small_02
				{
					memPoint = "sound_rain_wood_surface_small_02";
					soundSets[] = {"Rain_Wood_Surface_Light_SoundSet","Rain_Wood_Surface_Medium_SoundSet","Rain_Wood_Surface_Heavy_SoundSet"};
				};
				class sound_rain_wood_surface_large_01
				{
					memPoint = "sound_rain_wood_surface_large_01";
					soundSets[] = {"Rain_Wood_Surface_Light_SoundSet","Rain_Wood_Surface_Medium_SoundSet","Rain_Wood_Surface_Heavy_SoundSet"};
				};
				class sound_rain_wood_surface_large_02
				{
					memPoint = "sound_rain_wood_surface_large_02";
					soundSets[] = {"Rain_Wood_Surface_Light_SoundSet","Rain_Wood_Surface_Medium_SoundSet","Rain_Wood_Surface_Heavy_SoundSet"};
				};
				class sound_rain_wood_surface_large_03
				{
					memPoint = "sound_rain_wood_surface_large_03";
					soundSets[] = {"Rain_Wood_Surface_Light_SoundSet","Rain_Wood_Surface_Medium_SoundSet","Rain_Wood_Surface_Heavy_SoundSet"};
				};
				class sound_rain_wood_surface_large_04
				{
					memPoint = "sound_rain_wood_surface_large_04";
					soundSets[] = {"Rain_Wood_Surface_Light_SoundSet","Rain_Wood_Surface_Medium_SoundSet","Rain_Wood_Surface_Heavy_SoundSet"};
				};
				class sound_rain_wood_surface_large_05
				{
					memPoint = "sound_rain_wood_surface_large_05";
					soundSets[] = {"Rain_Wood_Surface_Light_SoundSet","Rain_Wood_Surface_Medium_SoundSet","Rain_Wood_Surface_Heavy_SoundSet"};
				};
				class sound_rain_wood_surface_large_06
				{
					memPoint = "sound_rain_wood_surface_large_06";
					soundSets[] = {"Rain_Wood_Surface_Light_SoundSet","Rain_Wood_Surface_Medium_SoundSet","Rain_Wood_Surface_Heavy_SoundSet"};
				};
				class sound_rain_timberpile
				{
					memPoint = "sound_rain_timberpile";
					soundSets[] = {"Rain_TimberPile_Light_SoundSet","Rain_TimberPile_Medium_SoundSet","Rain_TimberPile_Heavy_SoundSet"};
				};
				class sound_rain_woodpile
				{
					memPoint = "sound_rain_woodpile";
					soundSets[] = {"Rain_TimberPile_Light_SoundSet","Rain_TimberPile_Medium_SoundSet","Rain_TimberPile_Heavy_SoundSet"};
				};
				class sound_rain_wreck_rust_tiny_01
				{
					memPoint = "sound_rain_wreck_rust_tiny_01";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet","Rock_DebrisWind_Small_SoundShader"};
				};
				class sound_rain_wreck_rust_tiny_02
				{
					memPoint = "sound_rain_wreck_rust_tiny_02";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet"};
				};
				class sound_rain_wreck_rust_01
				{
					memPoint = "sound_rain_wreck_rust_01";
					soundSets[] = {"Rain_PlateA_Medium_SoundSet","Rain_PlateA_Heavy_SoundSet","Metal_StressWind_High_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_wreck_rust_02
				{
					memPoint = "sound_rain_wreck_rust_02";
					soundSets[] = {"Rain_PlateA_Medium_SoundSet","Rain_PlateA_Heavy_SoundSet","Metal_StressWind_High_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_wreck_rust_03
				{
					memPoint = "sound_rain_wreck_rust_03";
					soundSets[] = {"Rain_PlateA_Medium_SoundSet","Rain_PlateA_Heavy_SoundSet","Metal_StressWind_High_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_mi8_wreck_front_01
				{
					memPoint = "sound_mi8_wreck_front_01";
					soundSets[] = {"Rain_PlateA_Medium_SoundSet","Rain_PlateA_Heavy_SoundSet"};
				};
				class sound_mi8_wreck_center_01
				{
					memPoint = "sound_mi8_wreck_center_01 ";
					soundSets[] = {"Rain_MetalC_Light_SoundSet","Rain_MetalC_Medium_SoundSet","Rain_MetalC_Heavy_SoundSet"};
				};
				class sound_mi8_wreck_tail_01
				{
					memPoint = "sound_mi8_wreck_tail_01";
					soundSets[] = {"Rain_PlateA_Medium_SoundSet","Rain_PlateA_Heavy_SoundSet"};
				};
				class sound_mi8_wreck_tail_02
				{
					memPoint = "sound_mi8_wreck_tail_02";
					soundSets[] = {"Rain_PlateA_Medium_SoundSet","Rain_PlateA_Heavy_SoundSet"};
				};
				class sound_mi8_wreck_blade_01
				{
					memPoint = "sound_mi8_wreck_blade_01";
					soundSets[] = {"Metal_StressWind_SoundSet"};
				};
				class sound_mi8_wreck_blade_02
				{
					memPoint = "sound_mi8_wreck_blade_02";
					soundSets[] = {"Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_gutter_broken_1
				{
					memPoint = "sound_gutter_broken_1";
					soundSets[] = {"Water_Gutter_SoundSet","Rock_DebrisWind_Small_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_gutter_broken_2
				{
					memPoint = "sound_gutter_broken_2";
					soundSets[] = {"Water_Gutter_SoundSet","Rock_DebrisWind_Small_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_gutter_1
				{
					memPoint = "sound_gutter_1";
					soundSets[] = {"Water_Gutter_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_gutter_2
				{
					memPoint = "sound_gutter_2";
					soundSets[] = {"Water_Gutter_SoundSet"};
				};
				class sound_gutter_3
				{
					memPoint = "sound_gutter_3";
					soundSets[] = {"Water_Gutter_SoundSet"};
				};
				class sound_gutter_4
				{
					memPoint = "sound_gutter_4";
					soundSets[] = {"Water_Gutter_SoundSet"};
				};
				class sound_gutter_5
				{
					memPoint = "sound_gutter_5";
					soundSets[] = {"Water_Gutter_SoundSet"};
				};
				class sound_gutter_6
				{
					memPoint = "sound_gutter_6";
					soundSets[] = {"Water_Gutter_SoundSet"};
				};
				class sound_gutter_7
				{
					memPoint = "sound_gutter_7";
					soundSets[] = {"Water_Gutter_SoundSet"};
				};
				class sound_gutter_8
				{
					memPoint = "sound_gutter_8";
					soundSets[] = {"Water_Gutter_SoundSet"};
				};
				class sound_air_condition_1
				{
					memPoint = "sound_air_condition_1";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Air_Condition_SoundSet"};
				};
				class sound_air_condition_2
				{
					memPoint = "sound_air_condition_2";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Air_Condition_SoundSet"};
				};
				class sound_air_condition_3
				{
					memPoint = "sound_air_condition_3";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Air_Condition_SoundSet"};
				};
				class sound_air_condition_4
				{
					memPoint = "sound_air_condition_4";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Air_Condition_SoundSet"};
				};
				class sound_air_condition_5
				{
					memPoint = "sound_air_condition_5";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Air_Condition_SoundSet"};
				};
				class sound_electric_box_1
				{
					memPoint = "sound_electric_box_1";
					soundSets[] = {"Electric_Box_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_electric_box_2
				{
					memPoint = "sound_electric_box_2";
					soundSets[] = {"Electric_Box_SoundSet"};
				};
				class sound_electric_box_3
				{
					memPoint = "sound_electric_box_3";
					soundSets[] = {"Electric_Box_SoundSet"};
				};
				class sound_electric_box_4
				{
					memPoint = "sound_electric_box_4";
					soundSets[] = {"Electric_Box_SoundSet"};
				};
				class sound_electric_box_5
				{
					memPoint = "sound_electric_box_5";
					soundSets[] = {"Electric_Box_SoundSet"};
				};
				class sound_metal_tension_1
				{
					memPoint = "sound_metal_tension_1";
					soundSets[] = {"Metal_Tension_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_2
				{
					memPoint = "sound_metal_tension_2";
					soundSets[] = {"Metal_Tension_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_3
				{
					memPoint = "sound_metal_tension_3";
					soundSets[] = {"Metal_Tension_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_4
				{
					memPoint = "sound_metal_tension_4";
					soundSets[] = {"Metal_Tension_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_5
				{
					memPoint = "sound_metal_tension_5";
					soundSets[] = {"Metal_Tension_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_6
				{
					memPoint = "sound_metal_tension_6";
					soundSets[] = {"Metal_Tension_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_7
				{
					memPoint = "sound_metal_tension_7";
					soundSets[] = {"Metal_Tension_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_8
				{
					memPoint = "sound_metal_tension_8";
					soundSets[] = {"Metal_Tension_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_9
				{
					memPoint = "sound_metal_tension_9";
					soundSets[] = {"Metal_Tension_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_10
				{
					memPoint = "sound_metal_tension_10";
					soundSets[] = {"Metal_Tension_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_11
				{
					memPoint = "sound_metal_tension_11";
					soundSets[] = {"Metal_Tension_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_light_1
				{
					memPoint = "sound_metal_tension_light_1";
					soundSets[] = {"Metal_Tension_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_cables_tension_1
				{
					memPoint = "sound_metal_cables_tension_1";
					soundSets[] = {"Metal_Tension_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_cables_tension_2
				{
					memPoint = "sound_metal_cables_tension_2";
					soundSets[] = {"Metal_Tension_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_cables_tension_3
				{
					memPoint = "sound_metal_cables_tension_3";
					soundSets[] = {"Metal_Tension_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_wind_wood_light_01
				{
					memPoint = "sound_wind_wood_light_01";
					soundSets[] = {"Wind_Wood_Tension_SoundSet"};
				};
				class sound_wind_wood_light_02
				{
					memPoint = "sound_wind_wood_light_02";
					soundSets[] = {"Wind_Wood_Tension_SoundSet"};
				};
				class sound_wood_tension_light_01
				{
					memPoint = "sound_wood_tension_light_01";
					soundSets[] = {"Wind_Wood_Tension_SoundSet"};
				};
				class sound_wood_tension_light_02
				{
					memPoint = "sound_wood_tension_light_02";
					soundSets[] = {"Wind_Wood_Tension_SoundSet"};
				};
				class sound_wood_tension_heavy_01
				{
					memPoint = "sound_wood_tension_heavy_01";
					soundSets[] = {"Wind_Wood_Tension_Heavy_SoundSet","Wind_Wood_Tension_SoundSet"};
				};
				class sound_wood_tension_heavy_02
				{
					memPoint = "sound_wood_tension_heavy_02";
					soundSets[] = {"Wind_Wood_Tension_Heavy_SoundSet","Wind_Wood_Tension_SoundSet"};
				};
				class sound_wind_gate_metal
				{
					memPoint = "sound_wind_gate_metal";
					soundSets[] = {"Wind_Gate_Metal_SoundSet"};
				};
				class sound_wind_gate_wood
				{
					memPoint = "sound_wind_gate_wood";
					soundSets[] = {"Wind_Gate_Wood_SoundSet"};
				};
				class sound_wind_window_wood_small_01
				{
					memPoint = "sound_wind_window_wood_small_01";
					soundSets[] = {"Wind_Wood_Window_Tension_SoundSet"};
				};
				class sound_wind_window_wood_small_02
				{
					memPoint = "sound_wind_window_wood_small_02";
					soundSets[] = {"Wind_Wood_Window_Tension_SoundSet"};
				};
				class sound_wind_window_wood_small_03
				{
					memPoint = "sound_wind_window_wood_small_03";
					soundSets[] = {"Wind_Wood_Window_Tension_SoundSet"};
				};
				class sound_wind_window_wood_small_04
				{
					memPoint = "sound_wind_window_wood_small_03";
					soundSets[] = {"Wind_Wood_Window_Tension_SoundSet"};
				};
				class sound_rain_stone_tiny_1
				{
					memPoint = "sound_rain_stone_tiny_1";
					soundSets[] = {"Rain_Stone_Small_Light_SoundSet","Rain_Stone_Small_Heavy_SoundSet"};
				};
				class sound_rain_stone_tiny_2
				{
					memPoint = "sound_rain_stone_tiny_2";
					soundSets[] = {"Rain_Stone_Small_Light_SoundSet","Rain_Stone_Small_Heavy_SoundSet"};
				};
				class sound_rain_stone_small_1
				{
					memPoint = "sound_rain_stone_small_1";
					soundSets[] = {"Rain_Stone_Small_Light_SoundSet","Rain_Stone_Small_Heavy_SoundSet"};
				};
				class sound_rain_stone_small_2
				{
					memPoint = "sound_rain_stone_small_2";
					soundSets[] = {"Rain_Stone_Small_Light_SoundSet","Rain_Stone_Small_Heavy_SoundSet"};
				};
				class sound_rain_stone_medium_1
				{
					memPoint = "sound_rain_stone_medium_1";
					soundSets[] = {"Rain_Stone_Small_Light_SoundSet","Rain_Stone_Small_Heavy_SoundSet"};
				};
				class sound_rain_stone_large_1
				{
					memPoint = "sound_rain_stone_large";
					soundSets[] = {"Rain_Stone_Large_Light_SoundSet","Rain_Stone_Large_Heavy_SoundSet"};
				};
				class sound_rain_stone_large_2
				{
					memPoint = "sound_rain_stone_large_2";
					soundSets[] = {"Rain_Stone_Large_Light_SoundSet","Rain_Stone_Large_Heavy_SoundSet"};
				};
				class sound_rain_stone_large_3
				{
					memPoint = "sound_rain_stone_large_3";
					soundSets[] = {"Rain_Stone_Large_Light_SoundSet","Rain_Stone_Large_Heavy_SoundSet"};
				};
				class sound_rain_concrete_tiny_01
				{
					memPoint = "sound_rain_concrete_tiny_01";
					soundSets[] = {"Rain_Concrete_Small_01_Light_SoundSet","Rain_Concrete_Small_01_Medium_SoundSet","Rain_Concrete_Small_01_Heavy_SoundSet"};
				};
				class sound_rain_concrete_tiny_02
				{
					memPoint = "sound_rain_concrete_tiny_02";
					soundSets[] = {"Rain_Concrete_Small_01_Light_SoundSet","Rain_Concrete_Small_01_Medium_SoundSet","Rain_Concrete_Small_01_Heavy_SoundSet"};
				};
				class sound_rain_concrete_tiny_03
				{
					memPoint = "sound_rain_concrete_tiny_03";
					soundSets[] = {"Rain_Concrete_Small_01_Light_SoundSet","Rain_Concrete_Small_01_Medium_SoundSet","Rain_Concrete_Small_01_Heavy_SoundSet"};
				};
				class sound_rain_concrete_tiny_04
				{
					memPoint = "sound_rain_concrete_tiny_04";
					soundSets[] = {"Rain_Concrete_Small_01_Light_SoundSet","Rain_Concrete_Small_01_Medium_SoundSet","Rain_Concrete_Small_01_Heavy_SoundSet"};
				};
				class sound_rain_concrete_small_01
				{
					memPoint = "sound_rain_concrete_small_01";
					soundSets[] = {"Rain_Concrete_Small_02_Light_SoundSet","Rain_Concrete_Small_02_Medium_SoundSet","Rain_Concrete_Small_02_Heavy_SoundSet"};
				};
				class sound_rain_concrete_small_02
				{
					memPoint = "sound_rain_concrete_small_02";
					soundSets[] = {"Rain_Concrete_Small_02_Light_SoundSet","Rain_Concrete_Small_02_Medium_SoundSet","Rain_Concrete_Small_02_Heavy_SoundSet"};
				};
				class sound_rain_concrete_small_03
				{
					memPoint = "sound_rain_concrete_small_03";
					soundSets[] = {"Rain_Concrete_Small_02_Light_SoundSet","Rain_Concrete_Small_02_Medium_SoundSet","Rain_Concrete_Small_02_Heavy_SoundSet"};
				};
				class sound_rain_concrete_small_04
				{
					memPoint = "sound_rain_concrete_small_04";
					soundSets[] = {"Rain_Concrete_Small_02_Light_SoundSet","Rain_Concrete_Small_02_Medium_SoundSet","Rain_Concrete_Small_02_Heavy_SoundSet"};
				};
				class sound_rain_concrete_small_05
				{
					memPoint = "sound_rain_concrete_small_05";
					soundSets[] = {"Rain_Concrete_Small_02_Light_SoundSet","Rain_Concrete_Small_02_Medium_SoundSet","Rain_Concrete_Small_02_Heavy_SoundSet"};
				};
				class sound_rain_concrete_small_06
				{
					memPoint = "sound_rain_concrete_small_06";
					soundSets[] = {"Rain_Concrete_Small_02_Light_SoundSet","Rain_Concrete_Small_02_Medium_SoundSet","Rain_Concrete_Small_02_Heavy_SoundSet"};
				};
				class sound_rain_concrete_medium_01
				{
					memPoint = "sound_rain_concrete_medium_01";
					soundSets[] = {"Rain_Concrete_Medium_Light_SoundSet","Rain_Concrete_Large_Medium_SoundSet","Rain_Concrete_Medium_Heavy_SoundSet"};
				};
				class sound_rain_concrete_medium_02
				{
					memPoint = "sound_rain_concrete_medium_02";
					soundSets[] = {"Rain_Concrete_Medium_Light_SoundSet","Rain_Concrete_Large_Medium_SoundSet","Rain_Concrete_Medium_Heavy_SoundSet"};
				};
				class sound_rain_concrete_medium_03
				{
					memPoint = "sound_rain_concrete_medium_03";
					soundSets[] = {"Rain_Concrete_Medium_Light_SoundSet","Rain_Concrete_Large_Medium_SoundSet","Rain_Concrete_Medium_Heavy_SoundSet"};
				};
				class sound_rain_concrete_medium_04
				{
					memPoint = "sound_rain_concrete_medium_04";
					soundSets[] = {"Rain_Concrete_Medium_Light_SoundSet","Rain_Concrete_Large_Medium_SoundSet","Rain_Concrete_Medium_Heavy_SoundSet"};
				};
				class sound_rain_concrete_large_01
				{
					memPoint = "sound_rain_concrete_large_01";
					soundSets[] = {"Rain_Concrete_Large_Light_SoundSet","Rain_Concrete_Large_Medium_SoundSet","Rain_Concrete_Large_Heavy_SoundSet"};
				};
				class sound_rain_concrete_large_02
				{
					memPoint = "sound_rain_concrete_large_02";
					soundSets[] = {"Rain_Concrete_Large_Light_SoundSet","Rain_Concrete_Large_Medium_SoundSet","Rain_Concrete_Large_Heavy_SoundSet"};
				};
				class sound_rain_concrete_large_03
				{
					memPoint = "sound_rain_concrete_large_03";
					soundSets[] = {"Rain_Concrete_Large_Light_SoundSet","Rain_Concrete_Large_Medium_SoundSet","Rain_Concrete_Large_Heavy_SoundSet"};
				};
				class sound_rain_concrete_large_04
				{
					memPoint = "sound_rain_concrete_large_04";
					soundSets[] = {"Rain_Concrete_Large_Light_SoundSet","Rain_Concrete_Large_Medium_SoundSet","Rain_Concrete_Large_Heavy_SoundSet"};
				};
				class sound_rain_concrete_large_05
				{
					memPoint = "sound_rain_concrete_large_05";
					soundSets[] = {"Rain_Concrete_Large_Light_SoundSet","Rain_Concrete_Large_Medium_SoundSet","Rain_Concrete_Large_Heavy_SoundSet"};
				};
				class sound_rain_concrete_large_06
				{
					memPoint = "sound_rain_concrete_large_06";
					soundSets[] = {"Rain_Concrete_Large_Light_SoundSet","Rain_Concrete_Large_Medium_SoundSet","Rain_Concrete_Large_Heavy_SoundSet"};
				};
				class sound_rain_concrete_large_07
				{
					memPoint = "sound_rain_concrete_large_07";
					soundSets[] = {"Rain_Concrete_Large_Light_SoundSet","Rain_Concrete_Large_Medium_SoundSet","Rain_Concrete_Large_Heavy_SoundSet"};
				};
				class sound_rain_concrete_large_08
				{
					memPoint = "sound_rain_concrete_large_08";
					soundSets[] = {"Rain_Concrete_Large_Light_SoundSet","Rain_Concrete_Large_Medium_SoundSet","Rain_Concrete_Large_Heavy_SoundSet"};
				};
				class sound_rain_concrete_large_09
				{
					memPoint = "sound_rain_concrete_large_09";
					soundSets[] = {"Rain_Concrete_Large_Light_SoundSet","Rain_Concrete_Large_Medium_SoundSet","Rain_Concrete_Large_Heavy_SoundSet"};
				};
				class sound_rain_concrete_large_10
				{
					memPoint = "sound_rain_concrete_large_10";
					soundSets[] = {"Rain_Concrete_Large_Light_SoundSet","Rain_Concrete_Large_Medium_SoundSet","Rain_Concrete_Large_Heavy_SoundSet"};
				};
				class sound_rain_concrete_large_11
				{
					memPoint = "sound_rain_concrete_large_11";
					soundSets[] = {"Rain_Concrete_Large_Light_SoundSet","Rain_Concrete_Large_Medium_SoundSet","Rain_Concrete_Large_Heavy_SoundSet"};
				};
				class sound_rain_concrete_large_12
				{
					memPoint = "sound_rain_concrete_large_12";
					soundSets[] = {"Rain_Concrete_Large_Light_SoundSet","Rain_Concrete_Large_Medium_SoundSet","Rain_Concrete_Large_Heavy_SoundSet"};
				};
				class sound_rain_plastic_cover_spot_01
				{
					memPoint = "sound_rain_plastic_cover_spot_01";
					soundSets[] = {"Rain_Plastic_Cover_Spot_Sparse_SoundSet","Rain_Plastic_Cover_Spot_Light_SoundSet","Rain_Plastic_Cover_Spot_Heavy_SoundSet"};
				};
				class sound_rain_plastic_cover_spot_02
				{
					memPoint = "sound_rain_plastic_cover_spot_02";
					soundSets[] = {"Rain_Plastic_Cover_Spot_Sparse_SoundSet","Rain_Plastic_Cover_Spot_Light_SoundSet","Rain_Plastic_Cover_Spot_Heavy_SoundSet"};
				};
				class sound_rain_plastic_cover_spot_03
				{
					memPoint = "sound_rain_plastic_cover_spot_03";
					soundSets[] = {"Rain_Plastic_Cover_Spot_Sparse_SoundSet","Rain_Plastic_Cover_Spot_Light_SoundSet","Rain_Plastic_Cover_Spot_Heavy_SoundSet"};
				};
				class sound_rain_plastic_cover_small_01
				{
					memPoint = "sound_rain_plastic_cover_small_01";
					soundSets[] = {"Rain_Plastic_Cover_Small_Sparse_SoundSet","Rain_Plastic_Cover_Small_Light_SoundSet","Rain_Plastic_Cover_Small_Heavy_SoundSet"};
				};
				class sound_rain_plastic_cover_small_02
				{
					memPoint = "sound_rain_plastic_cover_small_02";
					soundSets[] = {"Rain_Plastic_Cover_Small_Sparse_SoundSet","Rain_Plastic_Cover_Small_Light_SoundSet","Rain_Plastic_Cover_Small_Heavy_SoundSet"};
				};
				class sound_rain_plastic_cover_small_03
				{
					memPoint = "sound_rain_plastic_cover_small_03";
					soundSets[] = {"Rain_Plastic_Cover_Small_Sparse_SoundSet","Rain_Plastic_Cover_Small_Light_SoundSet","Rain_Plastic_Cover_Small_Heavy_SoundSet"};
				};
				class sound_ruins_1
				{
					memPoint = "sound_ruins_1";
					soundSets[] = {"Rock_Debris_High_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_ruins_2
				{
					memPoint = "sound_ruins_2";
					soundSets[] = {"Rock_Debris_High_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_ruins_3
				{
					memPoint = "sound_ruins_3";
					soundSets[] = {"Rock_Debris_High_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_ruins_small_01
				{
					memPoint = "sound_rain_ruins_small_01";
					soundSets[] = {"Rain_Debris_Small_Light_SoundSet","Rain_Debris_Small_Medium_SoundSet","Rain_Debris_Small_Heavy_SoundSet"};
				};
				class sound_rain_ruins_small_02
				{
					memPoint = "sound_rain_ruins_small_02";
					soundSets[] = {"Rain_Debris_Small_Light_SoundSet","Rain_Debris_Small_Medium_SoundSet","Rain_Debris_Small_Heavy_SoundSet"};
				};
				class sound_rain_ruins_small_03
				{
					memPoint = "sound_rain_ruins_small_03";
					soundSets[] = {"Rain_Debris_Small_Light_SoundSet","Rain_Debris_Small_Medium_SoundSet","Rain_Debris_Small_Heavy_SoundSet"};
				};
				class sound_rain_ruins_small_04
				{
					memPoint = "sound_rain_ruins_small_04";
					soundSets[] = {"Rain_Debris_Small_Light_SoundSet","Rain_Debris_Small_Medium_SoundSet","Rain_Debris_Small_Heavy_SoundSet"};
				};
				class sound_rain_ruins_large_01
				{
					memPoint = "sound_rain_ruins_large_01";
					soundSets[] = {"Rain_Debris_Large_Light_SoundSet","Rain_Debris_Large_Medium_SoundSet","Rain_Debris_Large_Heavy_SoundSet"};
				};
				class sound_rain_ruins_large_02
				{
					memPoint = "sound_rain_ruins_large_02";
					soundSets[] = {"Rain_Debris_Large_Light_SoundSet","Rain_Debris_Large_Medium_SoundSet","Rain_Debris_Large_Heavy_SoundSet"};
				};
				class sound_rain_ruins_large_03
				{
					memPoint = "sound_rain_ruins_large_03";
					soundSets[] = {"Rain_Debris_Large_Light_SoundSet","Rain_Debris_Large_Medium_SoundSet","Rain_Debris_Large_Heavy_SoundSet"};
				};
				class sound_rain_ruins_large_04
				{
					memPoint = "sound_rain_ruins_large_04";
					soundSets[] = {"Rain_Debris_Large_Light_SoundSet","Rain_Debris_Large_Medium_SoundSet","Rain_Debris_Large_Heavy_SoundSet"};
				};
				class sound_rain_bridge_asphalt_large_01
				{
					memPoint = "sound_rain_bridge_asphalt_large_01";
					soundSets[] = {"Rain_Concrete_Large_Light_SoundSet","Rain_Concrete_Large_Medium_SoundSet","Rain_Concrete_Large_Heavy_SoundSet"};
				};
				class sound_rain_bridge_asphalt_large_02
				{
					memPoint = "sound_rain_bridge_asphalt_large_02";
					soundSets[] = {"Rain_Concrete_Large_Light_SoundSet","Rain_Concrete_Large_Medium_SoundSet","Rain_Concrete_Large_Heavy_SoundSet"};
				};
				class sound_rain_bridge_asphalt_large_03
				{
					memPoint = "sound_rain_bridge_asphalt_large_03";
					soundSets[] = {"Rain_Concrete_Large_Light_SoundSet","Rain_Concrete_Large_Medium_SoundSet","Rain_Concrete_Large_Heavy_SoundSet"};
				};
				class sound_rain_bridge_asphalt_large_04
				{
					memPoint = "sound_rain_bridge_asphalt_large_04";
					soundSets[] = {"Rain_Concrete_Large_Light_SoundSet","Rain_Concrete_Large_Medium_SoundSet","Rain_Concrete_Large_Heavy_SoundSet"};
				};
				class sound_rain_bridge_asphalt_large_05
				{
					memPoint = "sound_rain_bridge_asphalt_large_05";
					soundSets[] = {"Rain_Concrete_Large_Light_SoundSet","Rain_Concrete_Large_Medium_SoundSet","Rain_Concrete_Large_Heavy_SoundSet"};
				};
				class sound_rain_bridge_asphalt_large_06
				{
					memPoint = "sound_rain_bridge_asphalt_large_06";
					soundSets[] = {"Rain_Concrete_Large_Light_SoundSet","Rain_Concrete_Large_Medium_SoundSet","Rain_Concrete_Large_Heavy_SoundSet"};
				};
				class sound_rain_tent_tiny_01
				{
					memPoint = "sound_rain_tent_tiny_01";
					soundSets[] = {"Rain_Tent_Small_01_Light_SoundSet","Rain_Tent_Small_01_Medium_SoundSet","Rain_Tent_Small_01_Heavy_SoundSet"};
				};
				class sound_rain_tent_tiny_02
				{
					memPoint = "sound_rain_tent_tiny_02";
					soundSets[] = {"Rain_Tent_Small_01_Light_SoundSet","Rain_Tent_Small_01_Medium_SoundSet","Rain_Tent_Small_01_Heavy_SoundSet"};
				};
				class sound_rain_tent_small_01
				{
					memPoint = "sound_rain_tent_small_01";
					soundSets[] = {"Rain_Tent_Small_02_Light_SoundSet","Rain_Tent_Small_02_Medium_SoundSet","Rain_Tent_Small_02_Heavy_SoundSet"};
				};
				class sound_rain_tent_small_02
				{
					memPoint = "sound_rain_tent_small_02";
					soundSets[] = {"Rain_Tent_Small_02_Light_SoundSet","Rain_Tent_Small_02_Medium_SoundSet","Rain_Tent_Small_02_Heavy_SoundSet"};
				};
				class sound_rain_tent_medium_01
				{
					memPoint = "sound_rain_tent_medium_01";
					soundSets[] = {"Rain_Tent_Medium_Light_SoundSet","Rain_Tent_Medium_Medium_SoundSet","Rain_Tent_Medium_Heavy_SoundSet"};
				};
				class sound_rain_tent_medium_02
				{
					memPoint = "sound_rain_tent_medium_02";
					soundSets[] = {"Rain_Tent_Medium_Light_SoundSet","Rain_Tent_Medium_Medium_SoundSet","Rain_Tent_Medium_Heavy_SoundSet"};
				};
				class sound_clothes_1
				{
					memPoint = "sound_clothes_1";
					soundSets[] = {"ClothesWind_SoundSet"};
				};
				class sound_clothes_2
				{
					memPoint = "sound_clothes_2";
					soundSets[] = {"ClothesWind_SoundSet"};
				};
				class sound_net_fence_1
				{
					memPoint = "sound_net_fence_1";
					soundSets[] = {"MetalFenceWind_SoundSet"};
				};
				class sound_shed_1
				{
					memPoint = "sound_shed_1";
					soundSets[] = {"Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_slum_1
				{
					memPoint = "sound_slum_1";
					soundSets[] = {"Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_wind_debris_light_01
				{
					memPoint = "sound_wind_debris_light_01";
					soundSets[] = {"Wind_Debris_Light_01_SoundSet"};
				};
				class sound_wind_debris_light_02
				{
					memPoint = "sound_wind_debris_light_02";
					soundSets[] = {"Wind_Debris_Light_02_SoundSet"};
				};
				class sound_wind_tent_large_01
				{
					memPoint = "sound_wind_tent_large_01";
					soundSets[] = {"Wind_Tent_Large_SoundSet"};
				};
				class sound_wind_tent_small_01
				{
					memPoint = "sound_wind_tent_small_01";
					soundSets[] = {"Wind_Tent_Small_SoundSet"};
				};
			};
		};
