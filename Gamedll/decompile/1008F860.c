/*
 * func-name: sub_1008F860
 * func-address: 0x1008f860
 * callers: 0x10018309
 * callees: 0x100071c6, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_1008F860(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x4FCu,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Effect_MultiTexParticlesEx::~Effect_MultiTexParticlesEx);
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
