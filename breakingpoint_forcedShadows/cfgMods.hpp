class CfgMods {
  class Mod_Base;

  class HA_forcedShadows: Mod_Base {
    author = "$STR_HA_forcedShadowsAuthor";
    action = "$STR_HA_forcedShadowsURL";

    dir = "HA-ForcedShadows";
    requiresRestart = HA_TRUE;

    name = "$STR_HA_forcedShadowsName";
    nameShort = "$STR_HA_forcedShadowsNameShort";
    logo = "\HA\forcedShadows\img\logo_ca.paa";
    logoOver = "\HA\forcedShadows\img\logoOver_ca.paa";
    logoSmall = "\HA\forcedShadows\img\logoSmall_ca.paa";
    logoTitle = "\HA\forcedShadows\img\logoTitle_ca.paa";
    picture = "\HA\forcedShadows\img\picture_ca.paa";
    overview = "$STR_HA_forcedShadowsOverview";
    overviewPicture = "\HA\forcedShadows\img\overviewPicture_ca.paa";
    overviewText = "$STR_HA_forcedShadowsOverviewText";
    tooltip = "$STR_HA_forcedShadowsTooltip";
    tooltipOwned = "$STR_HA_forcedShadowsTooltipOwned";
    artwork = "\HA\forcedShadows\img\artwork.jpg";

    dlcColor[] = {1.0, 0.0, 0.0, 1.0};
    fieldManualTopicAndHint[] = {};

    hideName = HA_TRUE;
    hidePicture = HA_FALSE;
  };
};
