switch (uniform player) do {
	case "UK3CB_BAF_U_CrewmanCoveralls_RTR": {
		player playAction 'medic';
		[20,[],
			{
				private _loadout = call compile preprocessFileLineNumbers "\FourRBG\Scripts\util_cleanLoadout.sqf";
				_loadout#3 set [0,"UK3CB_BAF_U_CombatUniform_MTP_TShirt"];
				player setUnitLoadout _loadout;
				player removeItem "UK3CB_BAF_U_CombatUniform_MTP_TShirt";
				_backpack = backpackContainer player;
				_backpack addItemCargoGlobal ["UK3CB_BAF_U_CrewmanCoveralls_RTR",1];
			},
			{
				hint "Action Cancelled!"
			},"Taking Overalls Off."
		] call ace_common_fnc_progressBar;
	};
	case "UK3CB_BAF_U_CombatUniform_MTP_TShirt": {
		player playAction 'medic';
		[20,[],
			{
				private _loadout = call compile preprocessFileLineNumbers "\FourRBG\Scripts\util_cleanLoadout.sqf";
				_loadout#3 set [0,"UK3CB_BAF_U_CrewmanCoveralls_RTR"];
				player setUnitLoadout _loadout;
				player removeItem "UK3CB_BAF_U_CrewmanCoveralls_RTR";
				_backpack = backpackContainer player;
				_backpack addItemCargoGlobal ["UK3CB_BAF_U_CombatUniform_MTP_TShirt",1];
			},
			{
				hint "Action cancelled!"
			},"Putting Overalls on."
		] call ace_common_fnc_progressBar
	};
};