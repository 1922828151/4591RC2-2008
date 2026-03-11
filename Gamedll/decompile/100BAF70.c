/*
 * func-name: ?InitParticlePhysics@PhysicsParticles@@UAEXAAVParticle@@@Z_0
 * func-address: 0x100baf70
 * callers: 0x1000fc09
 * callees: 0x102c9ea2
 */

void __thiscall PhysicsParticles::InitParticlePhysics(PhysicsParticles *this, struct Particle *a2)
{
  __int16 v3; // cx
  __int16 v4; // dx
  void *v5; // esi
  _DWORD *v6; // ecx
  _DWORD *v7; // ebx
  _DWORD v8[15]; // [esp+8h] [ebp-160h] BYREF
  __int16 v9; // [esp+44h] [ebp-124h]
  __int16 v10; // [esp+46h] [ebp-122h]
  int v11; // [esp+48h] [ebp-120h]
  float v12; // [esp+4Ch] [ebp-11Ch]
  float v13; // [esp+50h] [ebp-118h]
  float v14; // [esp+54h] [ebp-114h]
  int v15; // [esp+58h] [ebp-110h]
  int v16; // [esp+5Ch] [ebp-10Ch]
  int v17; // [esp+60h] [ebp-108h]
  int v18; // [esp+64h] [ebp-104h]
  int v19; // [esp+68h] [ebp-100h]
  int v20; // [esp+6Ch] [ebp-FCh]
  int v21; // [esp+70h] [ebp-F8h]
  float v22; // [esp+74h] [ebp-F4h]
  float v23; // [esp+78h] [ebp-F0h]
  float v24; // [esp+7Ch] [ebp-ECh]
  float v25; // [esp+80h] [ebp-E8h]
  float v26; // [esp+84h] [ebp-E4h]
  float v27; // [esp+88h] [ebp-E0h]
  float v28; // [esp+8Ch] [ebp-DCh]
  float v29; // [esp+90h] [ebp-D8h]
  float v30; // [esp+94h] [ebp-D4h]
  float v31; // [esp+98h] [ebp-D0h]
  float v32; // [esp+9Ch] [ebp-CCh]
  float v33; // [esp+A0h] [ebp-C8h]
  float v34; // [esp+A4h] [ebp-C4h]
  float v35; // [esp+A8h] [ebp-C0h]
  float v36; // [esp+ACh] [ebp-BCh]
  float v37; // [esp+B0h] [ebp-B8h]
  float v38; // [esp+B4h] [ebp-B4h]
  float v39; // [esp+B8h] [ebp-B0h]
  float v40; // [esp+BCh] [ebp-ACh]
  float v41; // [esp+C0h] [ebp-A8h]
  float v42; // [esp+C4h] [ebp-A4h]
  float v43; // [esp+C8h] [ebp-A0h]
  float v44; // [esp+CCh] [ebp-9Ch]
  float v45; // [esp+D0h] [ebp-98h]
  float v46; // [esp+D4h] [ebp-94h]
  float v47; // [esp+D8h] [ebp-90h]
  float v48; // [esp+DCh] [ebp-8Ch]
  float v49; // [esp+E0h] [ebp-88h]
  int v50; // [esp+E4h] [ebp-84h]
  float v51; // [esp+E8h] [ebp-80h]
  float v52; // [esp+ECh] [ebp-7Ch]
  int v53; // [esp+F0h] [ebp-78h]
  float v54; // [esp+F4h] [ebp-74h]
  float v55; // [esp+F8h] [ebp-70h]
  float v56; // [esp+FCh] [ebp-6Ch]
  void *v57[26]; // [esp+100h] [ebp-68h] BYREF

  if ( !*((_DWORD *)a2 + 23) )
  {
    v3 = *((_WORD *)this + 188);
    v23 = 1.0;
    v4 = *((_WORD *)this + 180);
    v24 = 0.0;
    v53 = 4;
    v25 = 0.0;
    v50 = 2305;
    v26 = 0.0;
    v8[1] = 1;
    v28 = 0.0;
    v8[0] = &NxSphereShapeDesc::`vftable';
    v29 = 0.0;
    v8[14] = 1179656;
    v30 = 0.0;
    v11 = 0;
    v34 = 0.0;
    v15 = 0;
    v33 = 0.0;
    v16 = 0;
    v32 = 0.0;
    v17 = 0;
    v37 = 0.0;
    v18 = 0;
    v36 = 0.0;
    v19 = 0;
    v35 = 0.0;
    v20 = 0;
    v41 = 0.0;
    v21 = 0;
    v40 = 0.0;
    v10 = v3;
    v39 = 0.0;
    v9 = v4;
    v44 = 0.0;
    v43 = 0.0;
    v42 = 0.0;
    v27 = 1.0;
    v31 = 1.0;
    v45 = 0.39999998;
    v46 = 0.0;
    v47 = 0.050000001;
    v48 = -1.0;
    v51 = -1.0;
    v52 = -1.0;
    v49 = 0.0;
    v54 = -1.0;
    v55 = 0.0;
    v56 = 3.4028235e38;
    v38 = *((float *)this + 95);
    *(float *)&v8[2] = 1.0;
    *(float *)&v8[6] = 1.0;
    *(float *)&v8[10] = 1.0;
    *(float *)&v8[3] = 0.0;
    *(float *)&v8[4] = 0.0;
    *(float *)&v8[5] = 0.0;
    *(float *)&v8[7] = 0.0;
    *(float *)&v8[8] = 0.0;
    *(float *)&v8[9] = 0.0;
    *(float *)&v8[13] = 0.0;
    *(float *)&v8[12] = 0.0;
    *(float *)&v8[11] = 0.0;
    v14 = -1.0;
    v13 = -1.0;
    v12 = 1.0;
    v22 = *((float *)this + 92);
    memset(v57, 0, sizeof(v57));
    v5 = v57[22];
    v6 = v57[22];
    if ( v57[24] <= v57[22] && (!v57[22] || (unsigned int)(((char *)v57[24] - (char *)v57[22]) >> 2) < 2) )
    {
      v7 = malloc(8u);
      if ( v5 )
        free(v5);
      v6 = v7;
      v5 = v7;
    }
    *v6 = v8;
    *((_BYTE *)this + 357) = 1;
    if ( v5 )
      free(v5);
  }
}
