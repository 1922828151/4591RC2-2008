/*
 * func-name: sub_10093170
 * func-address: 0x10093170
 * callers: 0x10012193
 * callees: 0x10005187, 0x102c9d98
 */

Effect_ParticleSystem *__stdcall sub_10093170(struct World *a1)
{
  Effect_ParticleSystem *v1; // eax

  v1 = (Effect_ParticleSystem *)operator new(0x500u);
  if ( v1 )
    return Effect_ParticleSystem::Effect_ParticleSystem(v1, a1);
  else
    return 0;
}
