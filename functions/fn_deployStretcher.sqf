[5,[],
	{
		createVehicle['kat_stretcher', getPos Player,[],0,'CAN_COLLIDE'];
		private _loadout = call compile preprocessFileLineNumbers "\FourRBG\Scripts\util_cleanLoadout.sqf";
		_loadout#5 set [0,'UK3CB_BAF_B_Bergen_MTP_Rifleman_H_C'];
		player setUnitLoadout _loadout;
	},
	{
		hint 'Action Cancelled!'
	},'Setting up Stretcher'
] call ace_common_fnc_progressBar