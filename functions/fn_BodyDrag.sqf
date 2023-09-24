_DragBody = {
	player playAction "grabDrag";
	a = 0;
	[] spawn
	{
		_body = nearestObjects [ace_player, ["CAManBase"],3] select 1;
		while (a isEqualTo 0) do
		{
			_body setPosATL (player getRelPos [1,0]);
			_body setDir (getDir player +180);
			[_body, "AinjPpneMstpSnonWrflDb_release"] remoteExec ["switchMove",0];
			if (stance player IsNotEqualTo "CROUCH") then
			{
				a=1;
				ace_player switchAction "";
				_body setPos (getPosATL _body);
				hint "Body Released";
			};
			sleep 0.01;
		};
	};
};