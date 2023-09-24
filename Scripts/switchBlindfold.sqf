_goggles = goggles _target;
//Check if already wearing blindfold
if(_goggles == "G_Blindfold_01_black_F") then {
	//Remove Blindfold
	removeGoggles _target;
	player addItem "G_Blindfold_01_black_F";
} else {
	//Add Blindfold
	_existing = goggles _target;
	removeGoggles _target;
	_target addItem _existing;
	_target addGoggles "G_Blindfold_01_black_F";
	player removeItem "G_Blindfold_01_black_F";
};