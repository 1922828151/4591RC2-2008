/*
 * func-name: sub_101F2160
 * func-address: 0x101f2160
 * callers: 0x10018a61
 * callees: 0x10005de4, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_101F2160(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xF28u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CChatMessageUI::~CChatMessageUI);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CChatMessageUI::~CChatMessageUI((CChatMessageUI *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
