/*
 * func-name: ??0Effect_ParticleSystemEx@@QAE@ABV0@@Z_0
 * func-address: 0x10093040
 * callers: 0x10017878
 * callees: 0x1000e403
 */

Effect_ParticleSystemEx *__thiscall Effect_ParticleSystemEx::Effect_ParticleSystemEx(
        Effect_ParticleSystemEx *this,
        const struct Effect_ParticleSystemEx *a2)
{
  Effect_ParticleSystem::Effect_ParticleSystem(this, a2);
  *(_DWORD *)this = &Effect_ParticleSystemEx::`vftable';
  *((float *)this + 320) = *((float *)a2 + 320);
  *((float *)this + 321) = *((float *)a2 + 321);
  *((float *)this + 322) = *((float *)a2 + 322);
  *((_BYTE *)this + 1292) = *((_BYTE *)a2 + 1292);
  *((_BYTE *)this + 1293) = *((_BYTE *)a2 + 1293);
  *((float *)this + 324) = *((float *)a2 + 324);
  return this;
}
