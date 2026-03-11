/*
 * func-name: ??0ParticleSystem@@QAE@PAVWorld@@KMHHAAVVector@@11_N1MMMMMMMMMM2PAVMaterial@@@Z_0
 * func-address: 0x100b1d70
 * callers: 0x1000abb4
 * callees: 0x1000a41b, 0x10013b06, 0x10014966
 */

ParticleSystem *__thiscall ParticleSystem::ParticleSystem(
        ParticleSystem *this,
        struct World *a2,
        float a3,
        float a4,
        int a5,
        int a6,
        struct Vector *a7,
        struct Vector *a8,
        struct Vector *a9,
        bool a10,
        struct Vector *a11,
        float a12,
        float a13,
        float a14,
        float a15,
        float a16,
        float a17,
        float a18,
        float a19,
        float a20,
        float a21,
        bool a22,
        struct Material *a23)
{
  int v24; // eax
  ParticleSystem *result; // eax

  FXSystem::FXSystem(this, a2);
  *(_DWORD *)this = &ParticleSystem::`vftable';
  *((_DWORD *)this + 48) = 0;
  *((_DWORD *)this + 49) = 0;
  *((_DWORD *)this + 50) = 0;
  *((float *)this + 58) = 0.0;
  *((float *)this + 59) = 0.0;
  *((float *)this + 60) = 0.0;
  *((float *)this + 66) = 0.0;
  *((float *)this + 67) = 0.0;
  *((float *)this + 68) = 0.0;
  *((float *)this + 76) = 0.0;
  *((float *)this + 77) = 0.0;
  *((float *)this + 78) = 0.0;
  *((float *)this + 86) = 0.0;
  *((float *)this + 87) = 0.0;
  *((float *)this + 88) = 0.0;
  *((_DWORD *)this + 45) = a23;
  *((float *)this + 76) = 0.050000001;
  *((float *)this + 78) = 0.050000001;
  *((_BYTE *)this + 212) = 0;
  *((_BYTE *)this + 316) = 0;
  *((_DWORD *)this + 44) = 0;
  *((float *)this + 75) = 0.0;
  *((float *)this + 70) = a19;
  *((float *)this + 71) = 0.0;
  *((_DWORD *)this + 5) = *(_DWORD *)a7;
  *((_DWORD *)this + 6) = *((_DWORD *)a7 + 1);
  *((_DWORD *)this + 7) = *((_DWORD *)a7 + 2);
  *((float *)this + 80) = a3;
  *((_DWORD *)this + 58) = *(_DWORD *)a8;
  *((_DWORD *)this + 59) = *((_DWORD *)a8 + 1);
  *((_DWORD *)this + 60) = *((_DWORD *)a8 + 2);
  *((_DWORD *)this + 86) = *(_DWORD *)a9;
  *((_DWORD *)this + 87) = *((_DWORD *)a9 + 1);
  v24 = *((_DWORD *)a9 + 2);
  *((float *)this + 64) = a20;
  *((_DWORD *)this + 88) = v24;
  *((float *)this + 65) = a21;
  *((_BYTE *)this + 340) = a10;
  *((_DWORD *)this + 51) = a5;
  *((_DWORD *)this + 56) = 6;
  *((_DWORD *)this + 54) = a6;
  *((_DWORD *)this + 66) = *(_DWORD *)a11;
  *((_DWORD *)this + 67) = *((_DWORD *)a11 + 1);
  *((_DWORD *)this + 68) = *((_DWORD *)a11 + 2);
  *((float *)this + 61) = a13;
  *((_DWORD *)this + 82) = 0;
  *((float *)this + 62) = a14;
  *((_BYTE *)this + 317) = 1;
  *((float *)this + 63) = a15;
  *((float *)this + 74) = a16;
  *((float *)this + 72) = a17;
  *((float *)this + 73) = a18;
  *((float *)this + 81) = 1.0;
  *((float *)this + 69) = a12;
  *((float *)this + 84) = 0.0;
  sub_10014966((char *)this + 188, a6);
  if ( a22 )
    ParticleSystem::SetDefaultsMoving(this);
  else
    ParticleSystem::SetDefaults(this);
  *((_DWORD *)this + 46) = 0;
  *((float *)this + 57) = a4;
  result = this;
  *((float *)this + 52) = 0.0;
  return result;
}
