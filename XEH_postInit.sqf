if (!hasInterface) exitWith {};

//-Hornets ["JS_JC_FA18E","JS_JC_FA18F"]

["Air", "Engine", {
  params["_veh","_engine_State"];

  if ((typeof cameraOn) in ["Peral_A10C"]) exitWith {};
  if (!(APU_Activation_H_ch) && (_veh isKindOf "Helicopter")) exitWith {};
  if (!(APU_Activation_P_ch) && (_veh isKindOf "PLane")) exitWith {};

  _driver = driver _veh;
  _turret = _veh unitTurret player;

  if ((_engine_State) && ((_turret isEqualTo [-1]) or (_turret isEqualTo [0] && isCopilotEnabled _veh))) then {
    if !(_veh getVariable ["APU_Process",false]) then {
      _veh engineOn false;
    } else {

      if (_veh isKindOf "Helicopter") then {
        //-Heli
        [{
          params["_veh"];

          ((_veh getSoundController "RotorSpeed") == 1) or !(alive _veh)
          }, {
            params["_veh"];

            if !(alive _veh) exitWith {};
            _initiating = ((_veh getVariable ["APU_Process_Initiating",[false,objNull]]) # 1);
            if !(_initiating isEqualTo objNull) then {
              _initiating apply {deleteVehicle _x};
              _veh setVariable ["APU_Process_Initiating",[false,objNull],true];
            };
            _veh setVariable ["APU_Process",false,true];

            if ((_turret isEqualTo [-1]) or (_turret isEqualTo [0] && isCopilotEnabled _veh)) then {
              playSound3D ["MG8\APU_Mod\Sounds\Swich_On.wss", _veh, true, getPosASL player, 3];
            };
            _apuSound_dummy = "#dynamicsound" createVehicleLocal [0,0,0];
            _offset = _veh worldToModel (ASLToAGL (eyePos player));
            _apuSound_dummy attachTo [_veh,_offset];
            _apuSound_Stop = _apuSound_dummy say3d ["Stop_APU_H", 800, 1];

            _veh setVariable ["APU_Sound_Stop",[_apuSound_dummy, _apuSound_Stop],true];
            _veh vehicleChat "APU Off";
            [[_apuSound_dummy,_apuSound_Stop],_veh] spawn {
              uisleep 7.398;
              (_this # 0) apply {deleteVehicle _x};
              (_this # 1) setVariable ["APU_Sound_Stop",[],true];
            };
          }, [_veh]
        ] call CBA_fnc_waitUntilAndExecute;
      } else {
        //-Plane
        [{
          params["_veh"];
          _veh setAirplaneThrottle 0;
          ((_veh getSoundController "rpm") == 1) or !(alive _veh)
          }, {
            params["_veh"];

            if !(alive _veh) exitWith {};
            _initiating = ((_veh getVariable ["APU_Process_Initiating",[false,objNull]]) # 1);
            if !(_initiating isEqualTo objNull) then {
              _initiating apply {deleteVehicle _x};
              _veh setVariable ["APU_Process_Initiating",[false,objNull],true];
            };

            if !(alive _veh) exitWith {};

            _veh setVariable ["APU_Process",false,true];

            if ((_turret isEqualTo [-1]) or (_turret isEqualTo [0] && isCopilotEnabled _veh)) then {
              playSound3D ["MG8\APU_Mod\Sounds\Swich_On.wss", _veh, true, getPosASL player, 3];
            };

            _apuSound_dummy = "#dynamicsound" createVehicleLocal [0,0,0];
            _offset = _veh worldToModel (ASLToAGL (eyePos player));
            _apuSound_dummy attachTo [_veh,_offset];
            _apuSound_Stop = _apuSound_dummy say3d ["Stop_APU", 800, 1];

            _veh setVariable ["APU_Sound_Stop",[_apuSound_dummy, _apuSound_Stop],true];
            _veh vehicleChat "APU Off";

          }, [_veh]
        ] call CBA_fnc_waitUntilAndExecute;
      };

    };
  };
}] call CBA_fnc_addClassEventHandler;

[
  "APU Activation Settings","APU_Activation",
  "Toggle APU",
  {
    if ((typeof cameraOn) in ["Peral_A10C"]) exitWith {};
    if (_veh isKindOf "Car") exitWith {};
    if (_veh isKindOf "Boat") exitWith {};

    //Current Controlling Unit
    _veh = cameraOn;
    _turret = _veh unitTurret player;

    //Must be the Pilot
    if ((_veh isKindOf "Air") && !(isEngineOn _veh) && ((_turret isEqualTo [-1]) or (_turret isEqualTo [0] && isCopilotEnabled _veh))) then {
      _soundtype = if (_veh isKindOf "Helicopter") then {"_H"} else {""};

      //-Toggle Off
      if ((_veh getVariable ["APU_Process",false]) or ((_veh getVariable ["APU_Process_Initiating",[false,objNull]]) # 0)) exitWith {
        ((_veh getVariable ["APU_Process_Initiating",[false,objNull]]) # 1) apply {deleteVehicle _x};
        _veh setVariable ["APU_Process_Initiating",[false,objNull],true];
        _veh setVariable ["APU_Process",false,true];

        playSound3D ["MG8\APU_Mod\Sounds\Swich_On.wss", _veh, true, getPosASL player, 3];
        private _apuSound_dummy = "#dynamicsound" createVehicleLocal [0,0,0];
        private _offset = _veh worldToModel (ASLToAGL (eyePos player));
        _apuSound_dummy attachTo [_veh,_offset];
        private _apuSound_Stop = _apuSound_dummy say3d ["Stop_APU"+_soundtype, 800, 1];

        _veh setVariable ["APU_Sound_Stop",[_apuSound_dummy, _apuSound_Stop],true];
        _veh vehicleChat "APU Off";
      };

      //Delete Stop Sound
      if !(_veh getVariable ["APU_Sound_Stop",[]] isEqualTo []) then {
        (_veh getVariable "APU_Sound_Stop") apply {deleteVehicle _x};
        _veh setVariable ["APU_Sound_Stop",[],true];
      };

      _veh vehicleChat "Engine Initiating...";

      //-Play Sound
      playSound3D ["MG8\APU_Mod\Sounds\Swich_On.wss", _veh, true, getPosASL player, 3];
      private _apuSound_dummy = "#dynamicsound" createVehicleLocal [0,0,0];
      private _apuSound_Start = _apuSound_dummy say3d ["Start_APU"+_soundtype, 800, 1];
      private _offset = _veh worldToModel (ASLToAGL (eyePos player));
      _apuSound_dummy attachTo [_veh,_offset];

      private _delay = 8;
      _veh setVariable ["APU_Process_Initiating",[true,[_apuSound_dummy,_apuSound_Start]],true];

      //Loop
      [{
        params["_veh","_delay"];

        (time > _delay) or !(alive _veh) or !((_veh getVariable ["APU_Process_Initiating",[false,objNull]]) # 0)
        }, {
          params["_veh","_delay"];
          _initiating = _veh getVariable ["APU_Process_Initiating",[false,objNull]];
          if (!(alive _veh) or !(_initiating # 0)) then {
            if !((_initiating # 1) isEqualTo objNull) then {
              (_initiating # 1) apply {deleteVehicle _x};
              _veh setVariable ["APU_Process_Initiating",[false,objNull],true];
            };
          } else {
            _veh vehicleChat "Engine Ready";
            _veh setVariable ["APU_Process",true,true];
          };
        }, [_veh,time + _delay]
      ] call CBA_fnc_waitUntilAndExecute;
    };
  },
  "",
  [0x30, [false, false, false]]
] call cba_fnc_addKeybind;
