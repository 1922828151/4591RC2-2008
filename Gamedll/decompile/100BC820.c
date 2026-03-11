/*
 * func-name: ??0RandomTexturePhysicsParticles@@QAE@ABV0@@Z_0
 * func-address: 0x100bc820
 * callers: 0x100064d3
 * callees: 0x10002347, 0x100056c8, 0x100065e1
 */

RandomTexturePhysicsParticles *__thiscall RandomTexturePhysicsParticles::RandomTexturePhysicsParticles(
        RandomTexturePhysicsParticles *this,
        const struct RandomTexturePhysicsParticles *a2)
{
  PhysicsParticles::PhysicsParticles(this, a2);
  *(_DWORD *)this = &RandomTexturePhysicsParticles::`vftable';
  sub_100056C8((int)a2 + 384);
  sub_100065E1((int)a2 + 400);
  return this;
}
