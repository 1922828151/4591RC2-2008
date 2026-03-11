/*
 * func-name: ??0ParticleSystemEx@@QAE@PAVWorld@@KMHHAAVVector@@MM11_N1MMMMMMMMMMM2PAVMaterial@@@Z_0
 * func-address: 0x10081a30
 * callers: 0x1001042e
 * callees: 0x1000abb4
 */

ParticleSystemEx *__thiscall ParticleSystemEx::ParticleSystemEx(
        ParticleSystemEx *this,
        struct World *a2,
        float a3,
        float a4,
        int a5,
        int a6,
        struct Vector *a7,
        float a8,
        float a9,
        struct Vector *a10,
        struct Vector *a11,
        bool a12,
        struct Vector *a13,
        float a14,
        float a15,
        float a16,
        float a17,
        float a18,
        float a19,
        float a20,
        float a21,
        float a22,
        float a23,
        float a24,
        bool a25,
        struct Material *a26)
{
  ParticleSystemEx *result; // eax

  ParticleSystem::ParticleSystem(
    this,
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
    a26);
  *((float *)this + 89) = a8;
  *((_BYTE *)this + 376) = 0;
  *((float *)this + 90) = a9;
  *((_BYTE *)this + 377) = 0;
  *(_DWORD *)this = &ParticleSystemEx::`vftable';
  *((float *)this + 91) = a19;
  result = this;
  *((float *)this + 93) = 0.1;
  *((float *)this + 95) = -1.0;
  return result;
}
