/*
 * func-name: ??1LightBeam@@UAE@XZ_0
 * func-address: 0x10088ef0
 * callers: 0x10002955
 * callees: 0x102c0750, 0x102c9d50
 */

void __thiscall LightBeam::~LightBeam(void **this)
{
  sub_102C0750(this + 51);
  if ( this[47] )
    operator delete(this[47]);
  this[47] = 0;
  this[48] = 0;
  this[49] = 0;
  FXSystem::~FXSystem((FXSystem *)this);
}
