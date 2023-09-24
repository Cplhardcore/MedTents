class CfgITNCompat
{
    class accessories
    {
        class UK3CB_BAF_LLM_IR_Tan
        {
            gjb_itn_controls[]=
				{
					{33,34},
					{33,22},
					{1,1}
				};
				gjb_itn_interface[]=
				{
					"gjb_itn_fnc_deviceLLMmk3",
					"Rsc_gjb_itn_llmMk3_cup",
					"\gjb_itn\addons\gjb_itn_compat_cup\ui\llm3"
				};
				gjb_itn_deviceModes[]=
				{
					{4,0,9,"IR Marker 1 + Lamp 1"},	// 0
					{5,0,9,"IR Marker 2 + Lamp 1"},	// 1
					{6,0,9,"IR Marker 3 + Lamp 1"},	// 2
					{4,0,10,"IR Marker 1 + Lamp 2"},	// 3
					{5,0,10,"IR Marker 2 + Lamp 2"},	// 4
					{6,0,10,"IR Marker 3 + Lamp 2"},	// 5
					{0,7,9,"IR Illuminator 1 + Lamp 1"},	// 6
					{0,8,9,"IR Illuminator 2 + Lamp 1"},	// 7
					{0,7,10,"IR Illuminator 1 + Lamp 2"},	// 8
					{0,8,10,"IR Illuminator 2 + Lamp 2"},	// 9
					{4,7,9,"IR Marker 1 + Illuminator 1  + Lamp 1"},	// 10
					{5,7,9,"IR Marker 2 + Illuminator 1 + Lamp 1"},	// 11
					{6,7,9,"IR Marker 3 + Illuminator 1 + Lamp 1"},	// 12
					{4,8,9,"IR Marker 1 + Illuminator 2 + Lamp 1"},	// 13
					{5,8,9,"IR Marker 2 + Illuminator 2 + Lamp 1"},	// 14
					{6,8,9,"IR Marker 3 + Illuminator 2 + Lamp 1"},	// 15
					{4,7,10,"IR Marker 1 + Illuminator 1  + Lamp 2"},	// 16
					{5,7,10,"IR Marker 2 + Illuminator 1 + Lamp 2"},	// 17
					{6,7,10,"IR Marker 3 + Illuminator 1 + Lamp 2"},	// 18
					{4,8,10,"IR Marker 1 + Illuminator 2 + Lamp 2"},	// 19
					{5,8,10,"IR Marker 2 + Illuminator 2 + Lamp 2"},	// 20
					{6,8,10,"IR Marker 3 + Illuminator 2 + Lamp 2"},	// 21
					//
					{3,0,10,"VIS Marker 3 + Lamp 2"},		// 22
					{2,0,10,"VIS Marker 2 + Lamp 2"},		// 23
					{1,0,10,"VIS Marker 1 + Lamp 2"},		// 24
					{3,0,9,"VIS Marker 3 + Lamp 1"},		// 25
					{2,0,9,"VIS Marker 2 + Lamp 1"},		// 26
					{1,0,9,"VIS Marker 1 + Lamp 1"},		// 27
					{0,0,10,"VIS Lamp 2"},		// 28
					{0,0,9,"VIS Lamp 1"},		// 29
					{3,0,0,"VIS Marker 3"},		// 30
					{2,0,0,"VIS Marker 2"},		// 31
					{1,0,0,"VIS Marker 1"},		// 32
					{0,0,0,"OFF"},		// 33
					{4,0,0,"IR Marker 1"},	// 34
					{5,0,0,"IR Marker 2"},	// 35
					{6,0,0,"IR Marker 3"},	// 36
					{0,7,0,"IR Illuminator 1"},	// 37
					{0,8,0,"IR Illuminator 2"},	// 38
					{4,7,0,"IR Marker 1 + Illuminator 1"},	// 39
					{5,7,0,"IR Marker 2 + Illuminator 1"},	// 40
					{6,7,0,"IR Marker 3 + Illuminator 1"},	// 41
					{4,8,0,"IR Marker 1 + Illuminator 2"},	// 42
					{5,8,0,"IR Marker 2 + Illuminator 2"},	// 43
					{6,8,0,"IR Marker 3 + Illuminator 2"}	// 44
				};
				gjb_itn_deviceSpecs[]=
				{
					"MT/LT",						// 0 NULL entry to sidestep complicated fix
					{{2500,0,0},0.03,0.00005,50,0},	// 1 vis laser red 1
					{{25000,0,0},0.03,0.00005,50,0},// 2 vis laser red 2
					{{250000,0,0},0.03,0.00005,50,0},// 3 vis laser red 3
					{{100,0,0},0.02,0.001,200,1},	// 4 ir laser 1
					{{55,0,0},0.2,0.01,200,1},	// 5 ir laser 2
					{{10,0,0},1,0.1,-1,1},	// 6 ir laser 3
					"gjb_itn_illum_dbal_a2_w_Lo",		// 7 ir illuminator 1
					"gjb_itn_illum_dbal_a2_w_Hi",		// 8 ir illuminator 2
					"gjb_itn_flash_m952_lo_vis",			// 9 vis flashlight 1
					"gjb_itn_flash_m952_vis"			// 10 vis flashlight 2
				};
        };
		class UK3CB_BAF_LLM_IR_Black: UK3CB_BAF_LLM_IR_Tan
		{
			gjb_itn_interface[]=
			{
				"gjb_itn_fnc_deviceLLMmk3",
				"Rsc_gjb_itn_llmMk3_cup",
				"\gjb_itn\addons\gjb_itn_compat_cup\ui\llm3_b"
			};
		};
		class UK3CB_BAF_LLM_Flashlight_Tan: UK3CB_BAF_LLM_IR_Tan
		{
		};
		class UK3CB_BAF_LLM_Flashlight_Black : UK3CB_BAF_LLM_IR_Black
		{
			gjb_itn_interface[]=
			{
				"gjb_itn_fnc_deviceLLMmk3",
				"Rsc_gjb_itn_llmMk3_cup",
				"\gjb_itn\addons\gjb_itn_compat_cup\ui\llm3_b"
			};
		};
    };
};