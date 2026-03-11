/*
 * func-name: sub_10219BF0
 * func-address: 0x10219bf0
 * callers: 0x1000f4ca
 * callees: 0x10010c21, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_10219BF0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xF40u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CHallMapUI::~CHallMapUI);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CHallMapUI::~CHallMapUI((CHallMapUI *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
