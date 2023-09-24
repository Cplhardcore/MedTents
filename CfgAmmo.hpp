class CfgAmmo
{
    class Sh_120mm_HE;
    class CR2_MPAT_Rnd:Sh_120mm_HE
    {
        hit=850;
        indirectHit=145;
        typicalSpeed=1000;
        explosive=0.80000001;
        cost=200;
		airFriction=-4.9999999e-005;
        caliber=21.67;
        timeToLive=15;
        whistleDist=14;
        tracerScale=2;
        tracerStartTime=0.1;
        tracerEndTime=2.3;
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
    };
    class CR2_TRG_Rnd:Sh_120mm_HE
    {
        hit=0;
        indirectHit=0;
        typicalSpeed=1000;
        explosive=0;
        cost=5000;
		airFriction=-4.9999999e-005;
        caliber=80;
        timeToLive=15;
        whistleDist=14;
        tracerScale=2;
        tracerStartTime=0.1;
        tracerEndTime=2.3;
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
    };
    class Sh_125mm_APFSDS;
    class CR2_SABOT_Rnd: Sh_125mm_APFSDS
    {
        hit=850;
        indirectHit=11;
        indirectHitRange=1;
        typicalSpeed=2000;
        cost=1000;
        deflecting=15;
		airFriction=-3.9999999e-005;
        caliber=10;
        timeToLive=15;
        whistleOnFire=1;
        whistleDist=14;
        tracerScale=2;
        tracerStartTime=0.1;
        tracerEndTime=2.3;
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
    };
    class Smoke_120mm_AMOS_White;
    class CR2_WP_Rnd: Smoke_120mm_AMOS_White
    {
        hit=100;
        indirectHit=11;
        indirectHitRange=25;
        caliber=23.67;
        typicalSpeed=600;
        deflecting=0;
    };
    class B_30mm_APFSDS;
    class 4R_30mm_AP : B_30mm_APFSDS
    {
        typicalSpeed = 1175;
    };
    class B_30mm_HE;
    class 4R_30mm_HE : B_30mm_HE
    {
        typicalSpeed = 1070;
		airFriction = -0.00050;
    };
    class BulletBase;
    class 4R_9x19 : BulletBase
    {
        hit=8;
        indirectHit=0;
        indirectHitRange=0;
        supressionRadiusBulletClose=2;
   		cartridge = "FxCartridge_9mm";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		caliber = 0.674;
		deflecting = 29;
		visibleFire = 1.5;
		audibleFire = 3;
		typicalSpeed = 390.1;
		airFriction = -0.0027667;
        ACE_caliber=9.017;
        ACE_bulletLength=15.494;
        ACE_bulletMass=8.0352;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.165};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={340, 370, 400};
        ACE_barrelLengths[]={101.6, 127.0, 228.6};
    };
    class 4R_9x19_B : 4R_9x19
    {
        hit=0;
    };
}