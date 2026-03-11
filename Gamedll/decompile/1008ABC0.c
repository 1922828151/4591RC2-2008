/*
 * func-name: sub_1008ABC0
 * func-address: 0x1008abc0
 * callers: 0x10009723
 * callees: 0x1001aa0a, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_1008ABC0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x498u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Effect_LightDizzy::~Effect_LightDizzy);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Effect_LightDizzy::~Effect_LightDizzy((Effect_LightDizzy *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
