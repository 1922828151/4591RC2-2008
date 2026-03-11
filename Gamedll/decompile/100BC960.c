/*
 * func-name: ??4RandomTexturePhysicsParticles@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x100bc960
 * callers: 0x100054ac
 * callees: 0x100018e8, 0x10006a0a, 0x1000b52d
 */

void *__thiscall RandomTexturePhysicsParticles::operator=(void *this, int a2)
{
  PhysicsParticles::operator=(a2);
  sub_1000B52D(a2 + 384);
  sub_10006A0A(a2 + 400);
  return this;
}
