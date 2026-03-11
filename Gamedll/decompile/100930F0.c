/*
 * func-name: sub_100930F0
 * func-address: 0x100930f0
 * callers: 0x1001541a
 * callees: 0x1000e174, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_100930F0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x514u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Effect_ParticleSystemEx::~Effect_ParticleSystemEx);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    *(_DWORD *)this = &Effect_ParticleSystemEx::`vftable';
    Effect_ParticleSystem::~Effect_ParticleSystem((Effect_ParticleSystem *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
