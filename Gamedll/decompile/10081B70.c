/*
 * func-name: ??0ParticleSystemEx@@QAE@PAVWorld@@HKMMPAVTexture@@W4BlendMode@@@Z_0
 * func-address: 0x10081b70
 * callers: 0x1000f36c
 * callees: 0x10014155
 */

float *__thiscall ParticleSystemEx::ParticleSystemEx(
        float *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  float *result; // eax

  ParticleSystem::ParticleSystem(a2, a3, a4, a5, a6, a7, a8);
  this[89] = 0.0;
  *((_BYTE *)this + 376) = 0;
  this[90] = 1.0;
  *((_BYTE *)this + 377) = 0;
  *(_DWORD *)this = &ParticleSystemEx::`vftable';
  result = this;
  this[91] = 0.0;
  this[93] = 0.1;
  this[95] = -1.0;
  return result;
}
