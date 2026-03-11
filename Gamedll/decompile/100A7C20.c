/*
 * func-name: ??0LaserParticleSystem@@QAE@KMPAVWorld@@MHHAAVVector@@11MMMMMMMM_N2PAVMaterial@@@Z_0
 * func-address: 0x100a7c20
 * callers: 0x1000693d
 * callees: 0x1000abb4
 */

LaserParticleSystem *__thiscall LaserParticleSystem::LaserParticleSystem(
        LaserParticleSystem *this,
        float a2,
        float a3,
        struct World *a4,
        float a5,
        int a6,
        int a7,
        struct Vector *a8,
        struct Vector *a9,
        struct Vector *a10,
        float a11,
        float a12,
        float a13,
        float a14,
        float a15,
        float a16,
        float a17,
        float a18,
        bool a19,
        bool a20,
        struct Material *a21)
{
  LaserParticleSystem *result; // eax
  float v23[3]; // [esp+5Ch] [ebp-18h] BYREF

  v23[0] = 0.0;
  v23[1] = 0.0;
  v23[2] = 0.0;
  ParticleSystem::ParticleSystem(
    this,
    a4,
    a2,
    a5,
    a6,
    a7,
    a8,
    a9,
    (struct Vector *)v23,
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
    a21);
  *(_DWORD *)this = &LaserParticleSystem::`vftable';
  *((float *)this + 94) = 0.0;
  *((float *)this + 95) = 0.0;
  *((float *)this + 96) = 0.0;
  *((float *)this + 97) = 0.0;
  *((float *)this + 98) = 0.0;
  *((float *)this + 99) = 0.0;
  *((float *)this + 102) = 0.0;
  *((float *)this + 103) = 0.0;
  *((float *)this + 104) = 0.0;
  *((_BYTE *)this + 372) = 0;
  *((float *)this + 92) = a3;
  *((_BYTE *)this + 400) = 0;
  result = this;
  *((float *)this + 89) = 0.64999998;
  *((float *)this + 90) = 3.0;
  *((float *)this + 91) = 1.4;
  return result;
}
