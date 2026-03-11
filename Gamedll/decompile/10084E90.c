/*
 * func-name: sub_10084E90
 * func-address: 0x10084e90
 * callers: 0x10011d5b
 * callees: 0x10003de6, 0x102c9d98
 */

Effect_LaserParticle *__stdcall sub_10084E90(struct World *a1)
{
  Effect_LaserParticle *v1; // eax

  v1 = (Effect_LaserParticle *)operator new(0x4E4u);
  if ( v1 )
    return Effect_LaserParticle::Effect_LaserParticle(v1, a1);
  else
    return 0;
}
