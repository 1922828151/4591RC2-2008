/*
 * func-name: ??0LaserParticleSystem@@QAE@KMPAVWorld@@MHHAAVVector@@11MMMMMMMM_N2PAVTexture@@W4BlendMode@@@Z_0
 * func-address: 0x100a7a80
 * callers: 0x1000d5cb
 * callees: 0x100074aa
 */

float *__thiscall LaserParticleSystem::LaserParticleSystem(
        float *this,
        int a2,
        float a3,
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
        int a21,
        int a22)
{
  float v23; // ecx
  float v25[2]; // [esp+60h] [ebp-18h] BYREF
  float v26; // [esp+68h] [ebp-10h]

  v25[0] = 0.0;
  v25[1] = 0.0;
  v26 = 0.0;
  ParticleSystem::ParticleSystem(
    a4,
    a2,
    a5,
    a6,
    a7,
    a8,
    a9,
    (int)v25,
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
    a21,
    a22);
  *(_DWORD *)this = &LaserParticleSystem::`vftable';
  this[94] = 0.0;
  this[95] = 0.0;
  this[96] = 0.0;
  this[97] = 0.0;
  this[98] = 0.0;
  this[99] = 0.0;
  this[102] = 0.0;
  this[103] = 0.0;
  this[104] = 0.0;
  *((_BYTE *)this + 372) = 0;
  this[92] = a3;
  *((_BYTE *)this + 400) = 0;
  this[89] = 0.64999998;
  this[90] = 3.0;
  this[91] = 1.4;
  this[101] = 0.0;
  v26 = 0.0;
  this[102] = 0.0;
  v23 = v26;
  this[103] = 0.0;
  this[104] = v23;
  return this;
}
