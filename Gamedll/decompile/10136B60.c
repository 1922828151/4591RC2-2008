/*
 * func-name: sub_10136B60
 * func-address: 0x10136b60
 * callers: 0x10003292
 * callees: 0x10015e7e, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_10136B60(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x4BCu,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))HookEsbEnergy::~HookEsbEnergy);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    HookEsbEnergy::~HookEsbEnergy((HookEsbEnergy *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
