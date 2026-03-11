/*
 * func-name: sub_10093200
 * func-address: 0x10093200
 * callers: 0x1000ad7b
 * callees: 0x1000f7f9, 0x102c9d98
 */

Effect_ParticleSystemEx *__stdcall sub_10093200(struct World *a1)
{
  Effect_ParticleSystemEx *v1; // eax

  v1 = (Effect_ParticleSystemEx *)operator new(0x514u);
  if ( v1 )
    return Effect_ParticleSystemEx::Effect_ParticleSystemEx(v1, a1);
  else
    return 0;
}
