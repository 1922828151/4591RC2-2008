/*
 * func-name: sub_1008F760
 * func-address: 0x1008f760
 * callers: 0x10008c6f
 * callees: 0x100071c6, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_1008F760(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x4F0u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Effect_MultiTexParticles::~Effect_MultiTexParticles);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Effect_MultiTexParticles::~Effect_MultiTexParticles((Effect_MultiTexParticles *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
