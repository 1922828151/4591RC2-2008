/*
 * func-name: sub_1007E020
 * func-address: 0x1007e020
 * callers: 0x10014dd5
 * callees: 0x10005907, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_1007E020(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x110u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))DynamicLasers::~DynamicLasers);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    DynamicLasers::~DynamicLasers((DynamicLasers *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
