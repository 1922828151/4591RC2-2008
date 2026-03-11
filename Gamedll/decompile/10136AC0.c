/*
 * func-name: sub_10136AC0
 * func-address: 0x10136ac0
 * callers: 0x100107a8
 * callees: 0x10005ef2, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_10136AC0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x5A0u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))HookEstablishment::~HookEstablishment);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    HookEstablishment::~HookEstablishment((HookEstablishment *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
