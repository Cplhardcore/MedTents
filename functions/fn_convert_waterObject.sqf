//Get the water in the container.
_waterSet = [_target] call ace_field_rations_fnc_getRemainingWater;
//Delete Object.
deleteVehicle _target;
//Add inventory item.
player addItem "4R_jerry_can";