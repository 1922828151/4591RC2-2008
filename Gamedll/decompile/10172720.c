/*
 * func-name: sub_10172720
 * func-address: 0x10172720
 * callers: 0x10011e8c
 * callees: 0x100023dd, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_10172720(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xFF8u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CStatusUI::~CStatusUI);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CStatusUI::~CStatusUI((CStatusUI *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
