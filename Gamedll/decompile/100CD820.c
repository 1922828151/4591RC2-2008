/*
 * func-name: ??0TraceLineSystem@@QAE@PAVWorld@@KMHHAAVVector@@11MMMMMMMM_NPAVMaterial@@@Z_0
 * func-address: 0x100cd820
 * callers: 0x10003f4e
 * callees: 0x10004b60, 0x1000f75e, 0x1000fd53, 0x10015f0f
 */

TraceLineSystem *__thiscall TraceLineSystem::TraceLineSystem(
        TraceLineSystem *this,
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
  int v20; // eax
  TraceLineSystem *result; // eax
  int v22; // [esp-B8h] [ebp-E8h]
  int v23; // [esp-B4h] [ebp-E4h]
  int v24; // [esp-B0h] [ebp-E0h]
  int v25; // [esp-ACh] [ebp-DCh]
  int v26; // [esp-A8h] [ebp-D8h]
  int v27; // [esp-A4h] [ebp-D4h]
  int v28; // [esp-A0h] [ebp-D0h]
  int v29; // [esp-9Ch] [ebp-CCh]
  int v30; // [esp-98h] [ebp-C8h]
  int v31; // [esp-94h] [ebp-C4h]
  int v32; // [esp-90h] [ebp-C0h]
  int v33; // [esp-8Ch] [ebp-BCh]
  int v34; // [esp-88h] [ebp-B8h]
  int v35; // [esp-84h] [ebp-B4h]
  int v36; // [esp-80h] [ebp-B0h]
  int v37; // [esp-7Ch] [ebp-ACh]
  int v38; // [esp-78h] [ebp-A8h]
  int v39; // [esp-74h] [ebp-A4h]
  int v40; // [esp-70h] [ebp-A0h]
  int v41; // [esp-6Ch] [ebp-9Ch]
  int v42; // [esp-68h] [ebp-98h]
  int v43; // [esp-64h] [ebp-94h]
  int v44; // [esp-60h] [ebp-90h]
  int v45; // [esp-5Ch] [ebp-8Ch]
  int v46; // [esp-58h] [ebp-88h]
  int v47; // [esp-54h] [ebp-84h]
  void *v48; // [esp-50h] [ebp-80h]
  int v49; // [esp-4Ch] [ebp-7Ch]
  int v50; // [esp-48h] [ebp-78h]
  int v51; // [esp-44h] [ebp-74h]
  int v52; // [esp-40h] [ebp-70h]
  int v53; // [esp-3Ch] [ebp-6Ch]
  int v54; // [esp-38h] [ebp-68h]
  int v55; // [esp-34h] [ebp-64h]
  int v56; // [esp-30h] [ebp-60h]
  int v57; // [esp-2Ch] [ebp-5Ch]
  int v58; // [esp-28h] [ebp-58h]
  int v59; // [esp-24h] [ebp-54h]
  int v60; // [esp-20h] [ebp-50h]
  int v61; // [esp-1Ch] [ebp-4Ch]
  int v62; // [esp-18h] [ebp-48h]
  int v63; // [esp-14h] [ebp-44h]
  int v64; // [esp-10h] [ebp-40h]
  int v65; // [esp-Ch] [ebp-3Ch]
  int v66; // [esp-8h] [ebp-38h]
  int v67; // [esp-4h] [ebp-34h]

  FXSystem::FXSystem(this, a2);
  *(_DWORD *)this = &TraceLineSystem::`vftable';
  *((_DWORD *)this + 45) = 0;
  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 47) = 0;
  *((float *)this + 54) = 0.0;
  *((float *)this + 55) = 0.0;
  *((float *)this + 56) = 0.0;
  *((float *)this + 60) = 0.0;
  *((float *)this + 61) = 0.0;
  *((float *)this + 62) = 0.0;
  *((float *)this + 69) = 0.0;
  *((float *)this + 70) = 0.0;
  *((float *)this + 71) = 0.0;
  *((float *)this + 82) = 0.0;
  *((float *)this + 83) = 0.0;
  *((float *)this + 84) = 0.0;
  *((_BYTE *)this + 200) = 0;
  *((float *)this + 77) = 0.0099999998;
  *((_BYTE *)this + 288) = 0;
  *((_BYTE *)this + 304) = 0;
  *((float *)this + 78) = 2.0;
  *((_BYTE *)this + 8) = 0;
  *((_BYTE *)this + 113) = 1;
  *((float *)this + 80) = 1.0;
  *((_BYTE *)this + 316) = 1;
  *((_BYTE *)this + 317) = 0;
  *((float *)this + 81) = 0.0;
  *((_DWORD *)this + 85) = 1;
  *((_DWORD *)this + 86) = 0;
  *((float *)this + 69) = 0.050000001;
  *((float *)this + 82) = 0.0;
  *((float *)this + 71) = 0.050000001;
  *((float *)this + 83) = 0.0;
  *((_DWORD *)this + 87) = a19;
  *((float *)this + 68) = 0.0;
  *((float *)this + 84) = 0.0;
  *((float *)this + 64) = a15;
  *((_DWORD *)this + 5) = *(_DWORD *)a7;
  *((_DWORD *)this + 6) = *((_DWORD *)a7 + 1);
  *((_DWORD *)this + 7) = *((_DWORD *)a7 + 2);
  *((float *)this + 73) = a3;
  *((_DWORD *)this + 54) = *(_DWORD *)a8;
  *((_DWORD *)this + 55) = *((_DWORD *)a8 + 1);
  *((_DWORD *)this + 56) = *((_DWORD *)a8 + 2);
  *((_DWORD *)this + 52) = 6;
  *((_DWORD *)this + 48) = a5;
  *((float *)this + 58) = a16;
  *((_DWORD *)this + 51) = a6;
  *((float *)this + 59) = a17;
  *((_DWORD *)this + 60) = *(_DWORD *)a9;
  *((_DWORD *)this + 61) = *((_DWORD *)a9 + 1);
  v20 = *((_DWORD *)a9 + 2);
  *((float *)this + 57) = a11;
  *((_BYTE *)this + 289) = 1;
  *((float *)this + 67) = a12;
  *((_DWORD *)this + 62) = v20;
  *((float *)this + 65) = a13;
  *((_DWORD *)this + 75) = 0;
  *((float *)this + 66) = a14;
  *((float *)this + 74) = 1.0;
  *((float *)this + 63) = a10;
  sub_1000FD53();
  sub_1000F75E(
    (char *)this + 176,
    a6,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  if ( a18 )
    TraceLineSystem::SetDefaultsMoving(this);
  else
    TraceLineSystem::SetDefaults(this);
  result = this;
  *((float *)this + 53) = a4;
  *((float *)this + 49) = 0.0;
  return result;
}
