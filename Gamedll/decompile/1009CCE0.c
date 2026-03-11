/*
 * func-name: sub_1009CCE0
 * func-address: 0x1009cce0
 * callers: 0x1000e9e9
 * callees: 0x1001004b, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_1009CCE0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x4D0u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Effect_TraceLineSystem::~Effect_TraceLineSystem);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Effect_TraceLineSystem::~Effect_TraceLineSystem((Effect_TraceLineSystem *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
