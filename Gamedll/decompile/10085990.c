/*
 * func-name: sub_10085990
 * func-address: 0x10085990
 * callers: 0x1000aa7e
 * callees: 0x1001682e, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_10085990(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x19Cu,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))RandomTextureParticles::~RandomTextureParticles);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    RandomTextureParticles::~RandomTextureParticles((RandomTextureParticles *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
