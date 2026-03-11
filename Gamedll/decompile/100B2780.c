/*
 * func-name: ??0BouncyParticles@@QAE@PAVWorld@@KMHHAAVVector@@11MMMMMMMM_NPAVMaterial@@@Z_0
 * func-address: 0x100b2780
 * callers: 0x10004647
 * callees: 0x100029cd, 0x1000abb4
 */

BouncyParticles *__thiscall BouncyParticles::BouncyParticles(
        BouncyParticles *this,
        struct World *a2,
        float a3,
        float a4,
        int a5,
        int a6,
        struct Vector *a7,
        struct Vector *a8,
        struct Vector *a9,
        float a10,
        float a11,
        float a12,
        float a13,
        float a14,
        float a15,
        float a16,
        float a17,
        bool a18,
        struct Material *a19)
{
  float v20; // edx
  float v21; // eax
  double v22; // st7
  float v23; // edx
  float v24; // eax
  int v25; // ecx
  _DWORD *v26; // ecx
  _DWORD *v27; // ecx
  float v29; // [esp+5Ch] [ebp-B4h]
  float v30; // [esp+5Ch] [ebp-B4h]
  float v31; // [esp+5Ch] [ebp-B4h]
  float v32; // [esp+5Ch] [ebp-B4h]
  float v33; // [esp+60h] [ebp-B0h]
  float v34; // [esp+60h] [ebp-B0h]
  float v35; // [esp+60h] [ebp-B0h]
  float v36; // [esp+60h] [ebp-B0h]
  float v37; // [esp+60h] [ebp-B0h]
  float v38; // [esp+64h] [ebp-ACh]
  float v39; // [esp+64h] [ebp-ACh]
  float v40; // [esp+64h] [ebp-ACh]
  float v41; // [esp+64h] [ebp-ACh]
  float v42; // [esp+68h] [ebp-A8h]
  float v43; // [esp+68h] [ebp-A8h]
  float v44; // [esp+68h] [ebp-A8h]
  float v45; // [esp+68h] [ebp-A8h]
  float v46; // [esp+6Ch] [ebp-A4h]
  float v47; // [esp+6Ch] [ebp-A4h]
  float v48; // [esp+6Ch] [ebp-A4h]
  float v49; // [esp+6Ch] [ebp-A4h]
  float v50; // [esp+70h] [ebp-A0h]
  float v51; // [esp+70h] [ebp-A0h]
  float v52; // [esp+70h] [ebp-A0h]
  float v53; // [esp+70h] [ebp-A0h]
  float v54; // [esp+74h] [ebp-9Ch] BYREF
  float v55; // [esp+78h] [ebp-98h]
  float v56; // [esp+7Ch] [ebp-94h]
  float v57[3]; // [esp+80h] [ebp-90h] BYREF
  float v58[4]; // [esp+8Ch] [ebp-84h] BYREF
  _BYTE v59[20]; // [esp+9Ch] [ebp-74h] BYREF
  _DWORD *v60; // [esp+B0h] [ebp-60h]
  int v61; // [esp+B4h] [ebp-5Ch]
  _DWORD *v62; // [esp+C0h] [ebp-50h]
  int v63; // [esp+C4h] [ebp-4Ch]
  int v64; // [esp+10Ch] [ebp-4h]

  LODWORD(v58[3]) = this;
  v54 = 0.0;
  v55 = 0.0;
  v56 = 0.0;
  ParticleSystem::ParticleSystem(
    this,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    (struct Vector *)&v54,
    1,
    a9,
    a10,
    a11,
    a11,
    a11,
    a12,
    a13,
    a14,
    a15,
    a16,
    a17,
    a18,
    a19);
  *(_DWORD *)this = &BouncyParticles::`vftable';
  *((float *)this + 89) = 0.0;
  *((float *)this + 90) = 0.0;
  v64 = 0;
  *((float *)this + 91) = 0.0;
  *((float *)this + 92) = 0.0;
  *((float *)this + 93) = 0.0;
  *((float *)this + 94) = 0.0;
  *((_BYTE *)this + 380) = 0;
  *((float *)this + 96) = 0.75;
  *((float *)this + 97) = 4.0;
  *((float *)this + 98) = 1.0;
  v38 = *((float *)this + 66) * 0.5;
  v42 = *((float *)this + 67) * 0.5;
  v33 = 0.5 * *((float *)this + 68);
  v46 = v38 * 5.289999961853027;
  v20 = *((float *)this + 59);
  v21 = *((float *)this + 60);
  v54 = *((float *)this + 58);
  v50 = v42 * 5.289999961853027;
  v55 = v20;
  v56 = v21;
  v29 = 5.289999961853027 * v33;
  sub_100029CD();
  v34 = *((float *)this + 74) * 0.4 + *((float *)this + 69);
  v22 = v34;
  v35 = v54 * v34;
  v43 = v55 * v22;
  v39 = v22 * v56;
  v36 = v35 * 2.400000095367432;
  v44 = v43 * 2.400000095367432;
  v40 = 2.400000095367432 * v39;
  v37 = v36 + *((float *)this + 5);
  v45 = *((float *)this + 6) + v44;
  v41 = *((float *)this + 7) + v40;
  v47 = v37 + v46;
  v51 = v45 + v50;
  v30 = v41 + v29;
  v58[0] = v47;
  v58[1] = v51;
  v58[2] = v30;
  CollisionInfo::CollisionInfo((CollisionInfo *)v59);
  v23 = *((float *)this + 59);
  v24 = *((float *)this + 60);
  v54 = *((float *)this + 58);
  LOBYTE(v64) = 1;
  v55 = v23;
  v56 = v24;
  sub_100029CD();
  v31 = v54 * 0.625;
  v52 = v55 * 0.625;
  v25 = *((_DWORD *)this + 29);
  v48 = 0.625 * v56;
  v32 = *((float *)this + 5) + v31;
  v53 = *((float *)this + 6) + v52;
  v49 = *((float *)this + 7) + v48;
  v57[0] = v32;
  v57[1] = v53;
  v57[2] = v49;
  if ( (unsigned __int8)World::CollisionCheckRay(v25, 0, v57, v58, 1, v59, 0, 0) )
  {
    v26 = v60;
    if ( !v60 || !((v61 - (int)v60) / 12) )
    {
      _invalid_parameter_noinfo();
      v26 = v60;
    }
    *((_DWORD *)this + 89) = *v26;
    *((_DWORD *)this + 90) = v26[1];
    *((_DWORD *)this + 91) = v26[2];
    v27 = v62;
    if ( !v62 || !((v63 - (int)v62) / 12) )
    {
      _invalid_parameter_noinfo();
      v27 = v62;
    }
    *((_DWORD *)this + 92) = *v27;
    *((_DWORD *)this + 93) = v27[1];
    *((_DWORD *)this + 94) = v27[2];
    *((_BYTE *)this + 380) = 1;
  }
  LOBYTE(v64) = 0;
  CollisionInfo::~CollisionInfo((CollisionInfo *)v59);
  return this;
}
