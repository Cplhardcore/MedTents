//Africa First Militia
class 4R_AFM_RifleLizard : O_Soldier_base_F
{
    author="4 Rifles Milsim S4";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    identityTypes[]= {"LanguageENG_F","Head_African","G_NATO_default"};
    displayName = "Africa First Lizard I";
    cost = 200000;
    camouflage = 1.5;
    sensitivity = 2.5;
    threat[] = {1,1,0.8};
	model = "\A3\Characters_F\OPFOR\o_soldier_01.p3d";
    uniformClass = "";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {};
    canDeactivateMines = 0;
    engineer = 0;
    attendant = 0;
    icon = "";                  // If a character has a special role, a special icon shall be used.
    picture = "";               // The same as above, but for the squad picture.
    backpack = "";              // Which backpack the character is wearing.
    faction = "AFM";
    weapons[] =
    {
        "Throw",
        "Put",
        "Binocular"
    };   // Which weapons the character has equipped.
    respawnWeapons[] =
    {
        "Throw",
        "Put",
        "Binocular"
    }; // Which weapons the Character respawns with.
    magazines[] =
    {
        MAG_10(30Rnd_65x39_caseless_mag),
        MAG_3(16Rnd_9x21_Mag),
        "SmokeShell",
        "SmokeShellGreen",
        MAG_2(HandGrenade)
    };	// What ammunition the character has.
    respawnMagazines[] =
    {
        MAG_10(30Rnd_65x39_caseless_mag),
        MAG_3(16Rnd_9x21_Mag),
        "SmokeShell",
        "SmokeShellGreen",
        MAG_2(HandGrenade)
    };	// What ammunition the character respawns with.
    linkedItems[] =
    {
        "V_PlateCarrier1_rgr",
        "H_HelmetB",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };	// Which items the character has.
    respawnLinkedItems[] =
    {
        "V_PlateCarrier1_rgr",
        "H_HelmetB",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };		// Which items the character respawns with.
    Items[] =
    {
        "FirstAidKit"
    };	// Which items the character has.
	RespawnItems[] =
    {
        FirstAidKit
    }; // Which items the character respawns with.
};