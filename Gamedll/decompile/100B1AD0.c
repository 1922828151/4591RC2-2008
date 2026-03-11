/*
 * func-name: ??1ParticleSystem@@UAE@XZ_0
 * func-address: 0x100b1ad0
 * callers: 0x1000b8ca
 * callees: 0x102c9d50
 */

void __thiscall ParticleSystem::~ParticleSystem(void **this)
{
  *this = &ParticleSystem::`vftable';
  if ( this[48] )
    operator delete(this[48]);
  this[48] = 0;
  this[49] = 0;
  this[50] = 0;
  FXSystem::~FXSystem((FXSystem *)this);
}
