[15,[],
	{
		createVehicle["ACE_Track", getPos Player,[],0,'CAN_COLLIDE'];
		player removeItem "4R_ACETrack";
	},
	{
		hint 'Action Cancelled!'
	},'Dropping Track Pad'
] call ace_common_fnc_progressBar