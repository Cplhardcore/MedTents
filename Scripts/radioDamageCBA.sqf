// AN/PRC-343 PRR
[
    "FourRBG_ACRE_RadioDamage_SRR", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "AN/PRC-343 PRR", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["ACRE2 Radio Damage Settings","Damage Chance"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
   [0, 100, 4, 0], // data for this setting: [min, max, default, number of shown trailing decimals]
    true // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
] call CBA_fnc_addSetting;
// AN/PRC-152
[
    "FourRBG_ACRE_RadioDamage_MRR", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "AN/PRC-152", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["ACRE2 Radio Damage Settings","Damage Chance"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
   [0, 100, 4, 0], // data for this setting: [min, max, default, number of shown trailing decimals]
    true // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
] call CBA_fnc_addSetting;
// AN/PRC-117F
[
    "FourRBG_ACRE_RadioDamage_LRR", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "AN/PRC-117F", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["ACRE2 Radio Damage Settings","Damage Chance"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
   [0, 100, 6, 0], // data for this setting: [min, max, default, number of shown trailing decimals]
    true // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
] call CBA_fnc_addSetting;