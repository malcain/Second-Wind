class CfgVideoOptions {
  class ShadowsVisibility {
    maxValue = 1500.0;
    minValue = 60.0;
  };
  class ShadowQuality {
    class VeryHigh {
      cascadeLayers = 6;
      shaderQuality = 3;
      shadowType = 2;
      text = "$STR_A3_OPTIONS_ULTRA";
      textureSize = 24576;
    };
    class High {
      cascadeLayers = 6;
      shaderQuality = 2;
      shadowType = 2;
      text = "$STR_A3_OPTIONS_VERYHIGH";
      textureSize = 20480;
    };
    class Normal {
      cascadeLayers = 6;
      shaderQuality = 2;
      shadowType = 2;
      text = "$STR_A3_OPTIONS_HIGH";
      textureSize = 16384;
    };
    class Low {
      cascadeLayers = 5;
      shaderQuality = 1;
      shadowType = 2;
      text = "$STR_A3_OPTIONS_STANDARD";
      textureSize = 14336;
    };
    class VeryLow {
      cascadeLayers = 4;
      shaderQuality = 0;
      shadowType = 2;
      text = "$STR_A3_OPTIONS_LOW";
      textureSize = 12288;
    };
    delete Disabled;
  };
};
