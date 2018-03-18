//Blood Lust -- Blood splatter mod.
//Copyright (C) 2016  Gavin N. Alvesteffer

class CfgPatches
{
  class bloodsplatter
  {
    units[] = {};
      weapons[] = {};
        requiredAddons[] = { "CBA_xeh", "A3_UI_F", "A3_Data_F" };
        requiredVersion = 1.0;
        projectName = "BloodLust";
        author = "Gavin N. Alvesteffer";
        url = "http://steamcommunity.com/sharedfiles/filedetails/?id=667953829";
        version = 2.49;
      };
    };

    class Extended_PreInit_EventHandlers
    {
      class bloodsplatter_PreInit
      {
        init = "call compile preprocessFileLineNumbers '\bloodsplatter\scripts\Init.sqf';";
      };
    };

    class Extended_InitPost_EventHandlers
    {
      class CAManBase
      {
        class bloodsplatter_Init
        {
          init = "[_this select 0] call BloodLust_InitUnit;";
        };
      };

      class AllVehicles
      {
        class bloodsplatter_Init
        {
          init = "[_this select 0] call BloodLust_InitVehicle;";
        };
      };
    };

    class Extended_Respawn_EventHandlers
    {
      class CAManBase
      {
        class bloodsplatter_Respawn
        {
          respawn = "_this call BloodLust_OnUnitRespawn;";
        };
      };
    };

    class CfgCoreData
    {
    	slopBlood="bloodsplatter\models\plane\bloodsplatter_plane.p3d";
    	footStepBleeding0="bloodsplatter\models\plane\bloodsplatter_plane.p3d";
    	footStepBleeding1="bloodsplatter\models\plane\bloodsplatter_plane.p3d";
    };

    class CfgVehicles
    {
      class All;
      class AllVehicles : All {};
        class Land : AllVehicles {};
          class Static : All {};
            class Building : Static {};
              class NonStrategic : Building {};
                class Thing : All {};
                  class ThingX : Thing {};

                    class Man : Land
                    {
                      impactEffectsNoBlood = "ImpactEffectsBlood";
                    };

                    class bloodsplatter_plane : NonStrategic
                    {
                      scope = 1;
                      author = "Gavin N. Alvesteffer";
                      destrType = "DestructNo";
                      model = "\bloodsplatter\models\plane\bloodsplatter_plane.p3d";
                      displayName = "Blood Splatter";
                      faction = "Default";
                      vehicleClass = "Misc";
                      hiddenSelections[] = { "bloodsplatter_plane" };
                    };

                    class bloodsplatter_tinyplane : NonStrategic
                    {
                      scope = 1;
                      author = "Gavin N. Alvesteffer";
                      destrType = "DestructNo";
                      model = "\bloodsplatter\models\tinyplane\bloodsplatter_tinyplane.p3d";
                      displayName = "Blood Splatter";
                      faction = "Default";
                      vehicleClass = "Misc";
                      hiddenSelections[] = { "bloodsplatter_plane" };
                    };

                    class bloodsplatter_smallplane : NonStrategic
                    {
                      scope = 1;
                      author = "Gavin N. Alvesteffer";
                      destrType = "DestructNo";
                      model = "\bloodsplatter\models\smallplane\bloodsplatter_smallplane.p3d";
                      displayName = "Blood Splatter";
                      faction = "Default";
                      vehicleClass = "Misc";
                      hiddenSelections[] = { "bloodsplatter_plane" };
                    };

                    class bloodsplatter_mediumplane : NonStrategic
                    {
                      scope = 1;
                      author = "Gavin N. Alvesteffer";
                      destrType = "DestructNo";
                      model = "\bloodsplatter\models\mediumplane\bloodsplatter_mediumplane.p3d";
                      displayName = "Blood Splatter";
                      faction = "Default";
                      vehicleClass = "Misc";
                      hiddenSelections[] = { "bloodsplatter_plane" };
                    };

                    class bloodsplatter_largeplane : NonStrategic
                    {
                      scope = 1;
                      author = "Gavin N. Alvesteffer";
                      destrType = "DestructNo";
                      model = "\bloodsplatter\models\largeplane\bloodsplatter_largeplane.p3d";
                      displayName = "Blood Splatter";
                      faction = "Default";
                      vehicleClass = "Misc";
                      hiddenSelections[] = { "bloodsplatter_plane" };
                    };

                    class bloodsplatter_sprayplane : NonStrategic
                    {
                      scope = 1;
                      author = "Gavin N. Alvesteffer";
                      destrType = "DestructNo";
                      model = "\bloodsplatter\models\sprayplane\bloodsplatter_sprayplane.p3d";
                      displayName = "Blood Spray";
                      faction = "Default";
                      vehicleClass = "Misc";
                      hiddenSelections[] = { "bloodsplatter_sprayplane" };
                    };

                    class bloodsplatter_smallsprayplane : NonStrategic
                    {
                      scope = 1;
                      author = "Gavin N. Alvesteffer";
                      destrType = "DestructNo";
                      model = "\bloodsplatter\models\smallsprayplane\bloodsplatter_smallsprayplane.p3d";
                      displayName = "Blood Spray";
                      faction = "Default";
                      vehicleClass = "Misc";
                      hiddenSelections[] = { "bloodsplatter_sprayplane" };
                    };

                    class bloodsplatter_LeftHand : Thing
                    {
                      scope = 1;
                      author = "Gavin N. Alvesteffer";
                      destrType = "DestructNo";
                      model = "\bloodsplatter\models\gibs\bloodsplatter_LeftHand.p3d";
                      weight = 5;
                    };

                    class bloodsplatter_LeftLowerArm : Thing
                    {
                      scope = 1;
                      author = "Gavin N. Alvesteffer";
                      destrType = "DestructNo";
                      model = "\bloodsplatter\models\gibs\bloodsplatter_LeftLowerArm.p3d";
                      weight = 20;
                    };

                    class bloodsplatter_LeftLowerLegAndFoot : Thing
                    {
                      scope = 1;
                      author = "Gavin N. Alvesteffer";
                      destrType = "DestructNo";
                      model = "\bloodsplatter\models\gibs\bloodsplatter_LeftLowerLegAndFoot.p3d";
                      weight = 40;
                    };

                    class bloodsplatter_LeftUpperArm : Thing
                    {
                      scope = 1;
                      author = "Gavin N. Alvesteffer";
                      destrType = "DestructNo";
                      model = "\bloodsplatter\models\gibs\bloodsplatter_LeftUpperArm.p3d";
                      weight = 15;
                    };

                    class bloodsplatter_LeftUpperLeg : Thing
                    {
                      scope = 1;
                      author = "Gavin N. Alvesteffer";
                      destrType = "DestructNo";
                      model = "\bloodsplatter\models\gibs\bloodsplatter_LeftUpperLeg.p3d";
                      weight = 35;
                    };

                    class bloodsplatter_Pelvis : Thing
                    {
                      scope = 1;
                      author = "Gavin N. Alvesteffer";
                      destrType = "DestructNo";
                      model = "\bloodsplatter\models\gibs\bloodsplatter_Pelvis.p3d";
                      weight = 20;
                    };

                    class bloodsplatter_RightFoot : Thing
                    {
                      scope = 1;
                      author = "Gavin N. Alvesteffer";
                      destrType = "DestructNo";
                      model = "\bloodsplatter\models\gibs\bloodsplatter_RightFoot.p3d";
                      weight = 15;
                    };

                    class bloodsplatter_RightHand : Thing
                    {
                      scope = 1;
                      author = "Gavin N. Alvesteffer";
                      destrType = "DestructNo";
                      model = "\bloodsplatter\models\gibs\bloodsplatter_RightHand.p3d";
                      weight = 10;
                    };

                    class bloodsplatter_RightIndexFinger : Thing
                    {
                      scope = 1;
                      author = "Gavin N. Alvesteffer";
                      destrType = "DestructNo";
                      model = "\bloodsplatter\models\gibs\bloodsplatter_RightIndexFinger.p3d";
                      weight = 3;
                    };

                    class bloodsplatter_RightMiddleFinger : Thing
                    {
                      scope = 1;
                      author = "Gavin N. Alvesteffer";
                      destrType = "DestructNo";
                      model = "\bloodsplatter\models\gibs\bloodsplatter_RightMiddleFinger.p3d";
                      weight = 3;
                    };

                    class bloodsplatter_RightPinkyFinger : Thing
                    {
                      scope = 1;
                      author = "Gavin N. Alvesteffer";
                      destrType = "DestructNo";
                      model = "\bloodsplatter\models\gibs\bloodsplatter_RightPinkyFinger.p3d";
                      weight = 3;
                    };

                    class bloodsplatter_RightRingFinger : Thing
                    {
                      scope = 1;
                      author = "Gavin N. Alvesteffer";
                      destrType = "DestructNo";
                      model = "\bloodsplatter\models\gibs\bloodsplatter_RightRingFinger.p3d";
                      weight = 3;
                    };

                    class bloodsplatter_RightThumb : Thing
                    {
                      scope = 1;
                      author = "Gavin N. Alvesteffer";
                      destrType = "DestructNo";
                      model = "\bloodsplatter\models\gibs\bloodsplatter_RightThumb.p3d";
                      weight = 3;
                    };

                    class bloodsplatter_RightUpperArm : Thing
                    {
                      scope = 1;
                      author = "Gavin N. Alvesteffer";
                      destrType = "DestructNo";
                      model = "\bloodsplatter\models\gibs\bloodsplatter_RightUpperArm.p3d";
                      weight = 15;
                    };

                    class bloodsplatter_RightLowerArm : Thing
                    {
                      scope = 1;
                      author = "Gavin N. Alvesteffer";
                      destrType = "DestructNo";
                      model = "\bloodsplatter\models\gibs\bloodsplatter_RightLowerArm.p3d";
                      weight = 15;
                    };

                    class bloodsplatter_RightUpperLeg : Thing
                    {
                      scope = 1;
                      author = "Gavin N. Alvesteffer";
                      destrType = "DestructNo";
                      model = "\bloodsplatter\models\gibs\bloodsplatter_RightUpperLeg.p3d";
                      weight = 30;
                    };

                    class bloodsplatter_RightLowerLeg : Thing
                    {
                      scope = 1;
                      author = "Gavin N. Alvesteffer";
                      destrType = "DestructNo";
                      model = "\bloodsplatter\models\gibs\bloodsplatter_RightLowerLeg.p3d";
                      weight = 30;
                    };

                    class bloodsplatter_Torso : Thing
                    {
                      scope = 1;
                      author = "Gavin N. Alvesteffer";
                      destrType = "DestructNo";
                      model = "\bloodsplatter\models\gibs\bloodsplatter_Torso.p3d";
                      weight = 50;
                    };
                  };

                  class RscXSliderH;
                  class RscTitle;
                  class RscControlsGroup;
                  class RscButtonMenuCancel;
                  class RscButtonMenuOK;
                  class RscButtonMenu;
                  class RscTextCheckBox;
                  class RscCheckBox;
                  class IGUIBack;
                  class RscSlider;
                  class RscFrame;
                  class RscShortcutButtonMain;
                  class RscShortcutButton;
                  class RscButton;
                  class RscListBox;
                  class RscCombo;
                  class RscEdit;
                  class RscPicture;
                  class RscStructuredText;
                  class RscText;
                  class RscHTML;
                  class VScrollbar;
                  class HScrollbar;
                  #include "dialogs\BloodLust_SettingsManager.h"
                  #include "dialogs\BloodLust_InterruptMenu.h"
