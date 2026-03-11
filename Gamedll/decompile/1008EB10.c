/*
 * func-name: sub_1008EB10
 * func-address: 0x1008eb10
 * callers: 0x1000ca22
 * callees: 0x1001a47e, 0x102c9d98
 */

Effect_MultiTexParticles *__stdcall sub_1008EB10(struct World *a1)
{
  Effect_MultiTexParticles *v1; // eax

  v1 = (Effect_MultiTexParticles *)operator new(0x4F0u);
  if ( v1 )
    return Effect_MultiTexParticles::Effect_MultiTexParticles(v1, a1);
  else
    return 0;
}
