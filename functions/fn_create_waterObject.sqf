_jerryCan = "rhsusf_props_ScepterMWC_OD" createVehicle position player; //Create Object.
[_jerryCan,WaterCan] call BIS_fnc_objectVar; //Set unique variable name.
player removeItem "4R_jerry_can";
//[_target, _variable] call ace_field_rations_fnc_setRemainingWater; //Set water level.
