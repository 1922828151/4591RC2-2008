/*
 * func-name: ??1SurfaceDecal@@UAE@XZ_0
 * func-address: 0x100a54e0
 * callers: 0x10003f62
 * callees: 0x102c9d50
 */

void __thiscall SurfaceDecal::~SurfaceDecal(void **this)
{
  if ( this[68] )
    operator delete(this[68]);
  this[68] = 0;
  this[69] = 0;
  this[70] = 0;
  FXSystem::~FXSystem((FXSystem *)this);
}
