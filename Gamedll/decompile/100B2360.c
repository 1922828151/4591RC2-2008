/*
 * func-name: ??0BouncyParticles@@QAE@PAVWorld@@KMHHAAVVector@@11MMMMMMMM_NPAVTexture@@W4BlendMode@@@Z_0
 * func-address: 0x100b2360
 * callers: 0x100029eb
 * callees: 0x100029cd, 0x100074aa
 */

int __fastcall BouncyParticles::BouncyParticles(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21)
{
  float v22; // edx
  float v23; // eax
  double v24; // st7
  float v25; // edx
  float v26; // eax
  int v27; // ecx
  _DWORD *v28; // ecx
  _DWORD *v29; // ecx
  float v31; // [esp+60h] [ebp-B4h]
  float v32; // [esp+60h] [ebp-B4h]
  float v33; // [esp+60h] [ebp-B4h]
  float v34; // [esp+60h] [ebp-B4h]
  float v35; // [esp+64h] [ebp-B0h]
  float v36; // [esp+64h] [ebp-B0h]
  float v37; // [esp+64h] [ebp-B0h]
  float v38; // [esp+64h] [ebp-B0h]
  float v39; // [esp+64h] [ebp-B0h]
  float v40; // [esp+68h] [ebp-ACh]
  float v41; // [esp+68h] [ebp-ACh]
  float v42; // [esp+68h] [ebp-ACh]
  float v43; // [esp+68h] [ebp-ACh]
  float v44; // [esp+6Ch] [ebp-A8h]
  float v45; // [esp+6Ch] [ebp-A8h]
  float v46; // [esp+6Ch] [ebp-A8h]
  float v47; // [esp+6Ch] [ebp-A8h]
  float v48; // [esp+70h] [ebp-A4h]
  float v49; // [esp+70h] [ebp-A4h]
  float v50; // [esp+70h] [ebp-A4h]
  float v51; // [esp+70h] [ebp-A4h]
  float v52; // [esp+74h] [ebp-A0h]
  float v53; // [esp+74h] [ebp-A0h]
  float v54; // [esp+74h] [ebp-A0h]
  float v55; // [esp+74h] [ebp-A0h]
  float v56; // [esp+78h] [ebp-9Ch] BYREF
  float v57; // [esp+7Ch] [ebp-98h]
  float v58; // [esp+80h] [ebp-94h]
  float v59[3]; // [esp+84h] [ebp-90h] BYREF
  float v60[4]; // [esp+90h] [ebp-84h] BYREF
  _BYTE v61[20]; // [esp+A0h] [ebp-74h] BYREF
  _DWORD *v62; // [esp+B4h] [ebp-60h]
  int v63; // [esp+B8h] [ebp-5Ch]
  _DWORD *v64; // [esp+C4h] [ebp-50h]
  int v65; // [esp+C8h] [ebp-4Ch]
  int v66; // [esp+110h] [ebp-4h]

  LODWORD(v60[3]) = a1;
  v56 = 0.0;
  v57 = 0.0;
  v58 = 0.0;
  ParticleSystem::ParticleSystem(
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    (int)&v56,
    1,
    a10,
    a11,
    a12,
    a12,
    a12,
    a13,
    a14,
    a15,
    a16,
    a17,
    a18,
    a19,
    a20,
    a21);
  *(_DWORD *)a1 = &BouncyParticles::`vftable';
  *(float *)(a1 + 356) = 0.0;
  *(float *)(a1 + 360) = 0.0;
  v66 = 0;
  *(float *)(a1 + 364) = 0.0;
  *(float *)(a1 + 368) = 0.0;
  *(float *)(a1 + 372) = 0.0;
  *(float *)(a1 + 376) = 0.0;
  *(_BYTE *)(a1 + 380) = 0;
  *(float *)(a1 + 384) = 0.75;
  *(float *)(a1 + 388) = 4.0;
  *(float *)(a1 + 392) = 1.0;
  v40 = *(float *)(a1 + 264) * 0.5;
  v44 = *(float *)(a1 + 268) * 0.5;
  v35 = 0.5 * *(float *)(a1 + 272);
  v22 = *(float *)(a1 + 232);
  v48 = v40 * 5.289999961853027;
  v23 = *(float *)(a1 + 236);
  v58 = *(float *)(a1 + 240);
  v56 = v22;
  v52 = v44 * 5.289999961853027;
  v57 = v23;
  v31 = 5.289999961853027 * v35;
  sub_100029CD();
  v36 = *(float *)(a1 + 296) * 0.4 + *(float *)(a1 + 276);
  v24 = v36;
  v37 = v56 * v36;
  v45 = v57 * v24;
  v41 = v24 * v58;
  v38 = v37 * 2.400000095367432;
  v46 = v45 * 2.400000095367432;
  v42 = 2.400000095367432 * v41;
  v39 = *(float *)(a1 + 20) + v38;
  v47 = *(float *)(a1 + 24) + v46;
  v43 = *(float *)(a1 + 28) + v42;
  v49 = v39 + v48;
  v53 = v47 + v52;
  v32 = v43 + v31;
  v60[0] = v49;
  v60[1] = v53;
  v60[2] = v32;
  CollisionInfo::CollisionInfo((CollisionInfo *)v61);
  v25 = *(float *)(a1 + 232);
  v26 = *(float *)(a1 + 236);
  v58 = *(float *)(a1 + 240);
  LOBYTE(v66) = 1;
  v56 = v25;
  v57 = v26;
  sub_100029CD();
  v33 = v56 * 0.625;
  v54 = v57 * 0.625;
  v50 = 0.625 * v58;
  v27 = *(_DWORD *)(a1 + 116);
  v34 = *(float *)(a1 + 20) + v33;
  v55 = *(float *)(a1 + 24) + v54;
  v51 = *(float *)(a1 + 28) + v50;
  v59[0] = v34;
  v59[1] = v55;
  v59[2] = v51;
  if ( (unsigned __int8)World::CollisionCheckRay(v27, 0, v59, v60, 1, v61, 0, 0) )
  {
    v28 = v62;
    if ( !v62 || !((v63 - (int)v62) / 12) )
    {
      _invalid_parameter_noinfo();
      v28 = v62;
    }
    *(_DWORD *)(a1 + 356) = *v28;
    *(_DWORD *)(a1 + 360) = v28[1];
    *(_DWORD *)(a1 + 364) = v28[2];
    v29 = v64;
    if ( !v64 || !((v65 - (int)v64) / 12) )
    {
      _invalid_parameter_noinfo();
      v29 = v64;
    }
    *(_DWORD *)(a1 + 368) = *v29;
    *(_DWORD *)(a1 + 372) = v29[1];
    *(_DWORD *)(a1 + 376) = v29[2];
    *(_BYTE *)(a1 + 380) = 1;
  }
  LOBYTE(v66) = 0;
  CollisionInfo::~CollisionInfo((CollisionInfo *)v61);
  return a1;
}
