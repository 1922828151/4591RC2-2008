/*
 * func-name: ??0PhysicsParticles@@QAE@_NMMHPAVWorld@@KMHHAAVVector@@22MMMMMMMM0PAVTexture@@W4BlendMode@@@Z_0
 * func-address: 0x100b95f0
 * callers: 0x1000eb4c
 * callees: 0x100074aa
 */

float *__thiscall PhysicsParticles::PhysicsParticles(
        float *this,
        char a2,
        float a3,
        float a4,
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
        int a21,
        int a22,
        int a23,
        int a24)
{
  float v26[3]; // [esp+58h] [ebp-Ch] BYREF

  v26[0] = 0.0;
  v26[1] = 0.0;
  v26[2] = 0.0;
  ParticleSystem::ParticleSystem(
    a6,
    a7,
    a8,
    a9,
    a10,
    a11,
    a12,
    (int)v26,
    1,
    a13,
    a14,
    a15,
    a15,
    a15,
    a16,
    a17,
    a18,
    a19,
    a20,
    a21,
    a22,
    a23,
    a24);
  this[92] = a4;
  this[95] = a3;
  *((_BYTE *)this + 357) = 0;
  this[90] = 0.0;
  this[93] = 1.0;
  this[91] = 0.0;
  *(_DWORD *)this = &PhysicsParticles::`vftable';
  *((_DWORD *)this + 94) = a5;
  *((_BYTE *)this + 356) = a2;
  return this;
}
