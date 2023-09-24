[12,[_target],
	{
		deleteVehicle _target;
		private _loadout = call compile preprocessFileLineNumbers "util_cleanLoadout.sqf";
		_loadout#5 set [0,"UK3CB_BAF_B_Bergen_MTP_Medic_H_A"];
		ace_player setUnitLoadout _loadout;
	},
	{
		hint "Pickup Failed!"
	},"Picking Up Stretcher"
] call ace_common_fnc_progressBar
