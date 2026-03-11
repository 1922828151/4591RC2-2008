/*
 * func-name: sub_100969E0
 * func-address: 0x100969e0
 * callers: 0x10015ee2
 * callees: 0x1000addf, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_100969E0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x588u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Effect_Precipitation::~Effect_Precipitation);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Effect_Precipitation::~Effect_Precipitation((Effect_Precipitation *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
