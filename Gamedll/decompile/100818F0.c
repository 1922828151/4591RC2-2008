/*
 * func-name: ??0ParticleSystemEx@@QAE@PAVWorld@@KMHHAAVVector@@MM11_N1MMMMMMMMMMM2PAVTexture@@W4BlendMode@@@Z_0
 * func-address: 0x100818f0
 * callers: 0x10003477
 * callees: 0x100074aa
 */

float *__thiscall ParticleSystemEx::ParticleSystemEx(
        float *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        float a8,
        float a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        float a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27)
{
  float *result; // eax

  ParticleSystem::ParticleSystem(
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a10,
    a11,
    a12,
    a13,
    a14,
    a15,
    a16,
    a17,
    a18,
    a20,
    a21,
    a22,
    a23,
    a24,
    a25,
    a26,
    a27);
  this[89] = a8;
  *((_BYTE *)this + 376) = 0;
  this[90] = a9;
  *((_BYTE *)this + 377) = 0;
  *(_DWORD *)this = &ParticleSystemEx::`vftable';
  this[91] = a19;
  result = this;
  this[93] = 0.1;
  this[95] = -1.0;
  return result;
}
