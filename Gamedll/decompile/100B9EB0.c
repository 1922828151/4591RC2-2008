/*
 * func-name: ??1PhysicsParticles@@UAE@XZ_0
 * func-address: 0x100b9eb0
 * callers: 0x10017ca1
 * callees: 0x1000ab32, 0x1000b8ca
 */

void __thiscall PhysicsParticles::~PhysicsParticles(PhysicsParticles *this)
{
  *(_DWORD *)this = &PhysicsParticles::`vftable';
  PhysicsParticles::DestroyPhysics(this);
  ParticleSystem::~ParticleSystem(this);
}
