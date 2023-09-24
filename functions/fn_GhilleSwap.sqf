/*
Ghille Swap Function
1-Remove Camouflage Materials from Unit.
2-Get Clean Uniform.
3-Detect surroundings.
4-Swap Uniform to Ghillie.
5-Add old uniform into backpack.
*/

switch (uniform player) do {
	case "mpx_mtp_rifles_uniform_k": {
		player playAction 'medic';
		[30,[],
			{
				private _loadout = call compile preprocessFileLineNumbers "\FourRBG\Scripts\util_cleanLoadout.sqf";
				_loadout#3 set [0,"U_B_GhillieSuit"];
				player setUnitLoadout _loadout;
				player removeItem "U_B_GhillieSuit";
			},
			{
				hint "Action Cancelled!"
			},"Putting Ghillie Suit On."
		] call ace_common_fnc_progressBar;
	};
	case "mpx_mtp_rifles_uniform_kr": {
		player playAction 'medic';
		[30,[],
			{
				private _loadout = call compile preprocessFileLineNumbers "\FourRBG\Scripts\util_cleanLoadout.sqf";
				_loadout#3 set [0,"U_B_GhillieSuit"];
				player setUnitLoadout _loadout;
				player removeItem "U_B_GhillieSuit";
			},
			{
				hint "Action cancelled!"
			},"Putting Ghillie Suit On."
		] call ace_common_fnc_progressBar
	};
	case "U_B_GhillieSuit": {
		player playAction 'medic';
		[30,[],
			{
				_backpack = backpackContainer player;
				private _loadout = call compile preprocessFileLineNumbers "\FourRBG\Scripts\util_cleanLoadout.sqf";
				_loadout#3 set [0,"mpx_mtp_rifles_uniform_k"];
				player setUnitLoadout _loadout;
				_backpack addItemCargoGlobal ["U_B_GhillieSuit",1];
			},
			{
				hint "Action cancelled!"
			},"Taking Ghillie Suit off."
		] call ace_common_fnc_progressBar
	};
};
