/*
 * func-name: sub_10214D10
 * func-address: 0x10214d10
 * callers: 0x10015aff
 * callees: 0x1000fc36, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_10214D10(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xFA8u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CBattleFieldDetailUI::~CBattleFieldDetailUI);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CBattleFieldDetailUI::~CBattleFieldDetailUI((CBattleFieldDetailUI *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
