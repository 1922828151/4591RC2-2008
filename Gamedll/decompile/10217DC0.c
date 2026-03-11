/*
 * func-name: sub_10217DC0
 * func-address: 0x10217dc0
 * callers: 0x10018403
 * callees: 0x1000e0ed, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_10217DC0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xF28u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CLoginUI::~CLoginUI);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CLoginUI::~CLoginUI((CLoginUI *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
