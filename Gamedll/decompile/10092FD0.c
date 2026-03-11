/*
 * func-name: sub_10092FD0
 * func-address: 0x10092fd0
 * callers: 0x10012260
 * callees: 0x1000e174, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_10092FD0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x500u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Effect_ParticleSystem::~Effect_ParticleSystem);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Effect_ParticleSystem::~Effect_ParticleSystem((Effect_ParticleSystem *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
