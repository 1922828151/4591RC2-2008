/*
 * func-name: sub_100B83B0
 * func-address: 0x100b83b0
 * callers: 0x10014e20
 * callees: 0x1001981c, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_100B83B0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x174u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))ParticleTrail::~ParticleTrail);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    ParticleTrail::~ParticleTrail((ParticleTrail *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
