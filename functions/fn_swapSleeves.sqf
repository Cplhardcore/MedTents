switch (uniform player) do {
	case "mpx_mtp_rifles_uniform_k": {
		[20,[],
			{
				private _loadout = call compile preprocessFileLineNumbers "\FourRBG\Scripts\util_cleanLoadout.sqf";
				_loadout#3 set [0,"mpx_mtp_rifles_uniform_kr"];
				player setUnitLoadout _loadout;
			},
			{
				hint "Action Cancelled!"
			},"Rolling sleeves Up."
		] call ace_common_fnc_progressBar;
	};
	case "mpx_mtp_rifles_uniform_kr": {
		[20,[],
			{
				private _loadout = call compile preprocessFileLineNumbers "\FourRBG\Scripts\util_cleanLoadout.sqf";
				_loadout#3 set [0,"mpx_mtp_rifles_uniform_k"];
				player setUnitLoadout _loadout;
			},
			{
				hint "Action Cancelled!"
			},"Rolling sleeves Up."
		] call ace_common_fnc_progressBar;
	};
	case "mpx_mtp_ramc_uniform": {
		[20,[],
			{
				private _loadout = call compile preprocessFileLineNumbers "\FourRBG\Scripts\util_cleanLoadout.sqf";
				_loadout#3 set [0,"mpx_mtp_ramc_uniform_r"];
				player setUnitLoadout _loadout;
			},
			{
				hint "Action Cancelled!"
			},"Rolling sleeves Up."
		] call ace_common_fnc_progressBar;
	};
	case "mpx_mtp_ramc_uniform_r": {
		[20,[],
			{
				private _loadout = call compile preprocessFileLineNumbers "\FourRBG\Scripts\util_cleanLoadout.sqf";
				_loadout#3 set [0,"mpx_mtp_ramc_uniform"];
				player setUnitLoadout _loadout;
			},
			{
				hint "Action Cancelled!"
			},"Rolling sleeves Up."
		] call ace_common_fnc_progressBar;
	};
	case "mpx_mtp_full_uniform": {
		[20,[],
			{
				private _loadout = call compile preprocessFileLineNumbers "\FourRBG\Scripts\util_cleanLoadout.sqf";
				_loadout#3 set [0,"mpx_mtp_full_uniform_r"];
				player setUnitLoadout _loadout;
			},
			{
				hint "Action Cancelled!"
			},"Rolling sleeves Up."
		] call ace_common_fnc_progressBar;
	};
	case "mpx_mtp_full_uniform_r": {
		[20,[],
			{
				private _loadout = call compile preprocessFileLineNumbers "\FourRBG\Scripts\util_cleanLoadout.sqf";
				_loadout#3 set [0,"mpx_mtp_full_uniform"];
				player setUnitLoadout _loadout;
			},
			{
				hint "Action Cancelled!"
			},"Rolling sleeves Up."
		] call ace_common_fnc_progressBar;
	};
};
