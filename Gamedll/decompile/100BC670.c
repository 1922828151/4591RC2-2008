/*
 * func-name: ??1RandomTexturePhysicsParticles@@UAE@XZ_0
 * func-address: 0x100bc670
 * callers: 0x1000da4e
 * callees: 0x102c9d50
 */

void __thiscall RandomTexturePhysicsParticles::~RandomTexturePhysicsParticles(void **this)
{
  if ( this[101] )
    operator delete(this[101]);
  this[101] = 0;
  this[102] = 0;
  this[103] = 0;
  if ( this[97] )
    operator delete(this[97]);
  this[97] = 0;
  this[98] = 0;
  this[99] = 0;
  PhysicsParticles::~PhysicsParticles((PhysicsParticles *)this);
}
