//Blood Lust -- Blood splatter mod.
//Copyright (C) 2016  Gavin N. Alvesteffer

BloodLust_IsInitialized = false;

//Core.
call compile preprocessFileLineNumbers "bloodsplatter\scripts\Configurables.sqf";
call compile preprocessFileLineNumbers "bloodsplatter\scripts\Helpers.sqf";
call compile preprocessFileLineNumbers "bloodsplatter\scripts\EventHooks.sqf";
call compile preprocessFileLineNumbers "bloodsplatter\scripts\Core.sqf";
if(isMultiplayer || BloodLust_IsMultiplayerCoreEnabledInSingleplayer) then
{
    call compile preprocessFileLineNumbers "bloodsplatter\scripts\CoreMultiplayer.sqf";
    call compile preprocessFileLineNumbers "bloodsplatter\scripts\ConfigurablesMultiplayer.sqf"; //Server can override client settings in this script.
};

//Effects.
call compile preprocessFileLineNumbers "bloodsplatter\scripts\Effects\GoreMist.sqf";
call compile preprocessFileLineNumbers "bloodsplatter\scripts\Effects\Refraction.sqf";

//dialogs.
call compile preprocessFileLineNumbers "bloodsplatter\dialogs\BloodLust_SettingsManager.sqf";

//Preload textures.
if(BloodLust_IsTexturePreloadingEnabled) then
{
    execVM "bloodsplatter\scripts\Preload.sqf";
};

//BloodLust Clean-up.
execVM "bloodsplatter\scripts\Cleanup.sqf";

//A flag that BloodLust is ready for others to add their event handlers and stuff.
BloodLust_IsInitialized = true;
