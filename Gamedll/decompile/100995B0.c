/*
 * func-name: sub_100995B0
 * func-address: 0x100995b0
 * callers: 0x100159ce
 * callees: 0x10017a71, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_100995B0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x4CCu,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Effect_ShadedParticles::~Effect_ShadedParticles);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Effect_ShadedParticles::~Effect_ShadedParticles((Effect_ShadedParticles *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
