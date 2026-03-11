/*
 * func-name: sub_100A57A0
 * func-address: 0x100a57a0
 * callers: 0x10008a12
 * callees: 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

void **__thiscall sub_100A57A0(void **this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x120u,
      (int)*(this - 1),
      (void (__thiscall *)(void *))SurfaceDecal::~SurfaceDecal);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 1);
    return this - 1;
  }
  else
  {
    if ( this[68] )
      operator delete(this[68]);
    this[68] = 0;
    this[69] = 0;
    this[70] = 0;
    FXSystem::~FXSystem((FXSystem *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
