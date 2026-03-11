/*
 * func-name: sub_100994F0
 * func-address: 0x100994f0
 * callers: 0x100180ca
 * callees: 0x10012ac6, 0x102c9d98
 */

Effect_ShadedParticles *__stdcall sub_100994F0(struct World *a1)
{
  Effect_ShadedParticles *v1; // eax

  v1 = (Effect_ShadedParticles *)operator new(0x4CCu);
  if ( v1 )
    return Effect_ShadedParticles::Effect_ShadedParticles(v1, a1);
  else
    return 0;
}
