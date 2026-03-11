/*
 * func-name: ??1WaterDecal@@UAE@XZ_0
 * func-address: 0x100a5840
 * callers: 0x1000e69c
 * callees: 0x102c9d50
 */

void __thiscall WaterDecal::~WaterDecal(void **this)
{
  if ( this[45] )
    operator delete(this[45]);
  this[45] = 0;
  this[46] = 0;
  this[47] = 0;
  FXSystem::~FXSystem((FXSystem *)this);
}
