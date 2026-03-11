/*
 * func-name: sub_10136E80
 * func-address: 0x10136e80
 * callers: 0x100093a4
 * callees: 0x10015591, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_10136E80(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x4B8u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))HookEsbAirDrop::~HookEsbAirDrop);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    HookEsbAirDrop::~HookEsbAirDrop((HookEsbAirDrop *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
