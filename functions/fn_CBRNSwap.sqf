switch (uniform player) do {
	case "5RIFLES_UBACS": {
		player playAction 'medic';
		[40,[],
			{
				private _loadout = call compile preprocessFileLineNumbers "\FourRBG\Scripts\util_cleanLoadout.sqf";
				_loadout#3 set [0,"afuk_cbrn_dpm"];
				player setUnitLoadout _loadout;
				player removeItem "afuk_cbrn_dpm";
			},
			{
				hint "Action Cancelled!"
			},"Putting CBRN Overgarment on."
		] call ace_common_fnc_progressBar;
	};
	case "5RIFLES_UBACS_R": {
		player playAction 'medic';
		[40,[],
			{
				private _loadout = call compile preprocessFileLineNumbers "\FourRBG\Scripts\util_cleanLoadout.sqf";
				_loadout#3 set [0,"afuk_cbrn_dpm"];
				player setUnitLoadout _loadout;
				player removeItem "afuk_cbrn_dpm";
			},
			{
				hint "Action cancelled!"
			},"Putting CBRN Overgarment on."
		] call ace_common_fnc_progressBar
	};
	case "afuk_cbrn_dpm": {
		player playAction 'medic';
		[40,[],
			{
				private _loadout = call compile preprocessFileLineNumbers "\FourRBG\Scripts\util_cleanLoadout.sqf";
				_loadout#3 set [0,"5RIFLES_UBACS"];
				player setUnitLoadout _loadout;
				_backpack = backpackContainer player;
				_backpack addItemCargoGlobal ["afuk_cbrn_dpm",1];
			},
			{
				hint "Action cancelled!"
			},"Taking CBRN Overgarment off."
		] call ace_common_fnc_progressBar
	};
};