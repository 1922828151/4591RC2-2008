/*
 * func-name: sub_10084E20
 * func-address: 0x10084e20
 * callers: 0x10002a09
 * callees: 0x100097a5, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_10084E20(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x4E4u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Effect_LaserParticle::~Effect_LaserParticle);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Effect_LaserParticle::~Effect_LaserParticle((Effect_LaserParticle *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
