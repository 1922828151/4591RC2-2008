/*
 * func-name: ??0ParticleSystemEx@@QAE@ABV0@@Z_0
 * func-address: 0x10086460
 * callers: 0x10007dce
 * callees: 0x1001a933
 */

ParticleSystemEx *__thiscall ParticleSystemEx::ParticleSystemEx(
        ParticleSystemEx *this,
        const struct ParticleSystemEx *a2)
{
  ParticleSystem::ParticleSystem(this, a2);
  *(_DWORD *)this = &ParticleSystemEx::`vftable';
  *((float *)this + 89) = *((float *)a2 + 89);
  *((float *)this + 90) = *((float *)a2 + 90);
  *((float *)this + 91) = *((float *)a2 + 91);
  *((_BYTE *)this + 368) = *((_BYTE *)a2 + 368);
  *((float *)this + 93) = *((float *)a2 + 93);
  *((_BYTE *)this + 376) = *((_BYTE *)a2 + 376);
  *((_BYTE *)this + 377) = *((_BYTE *)a2 + 377);
  *((float *)this + 95) = *((float *)a2 + 95);
  return this;
}
