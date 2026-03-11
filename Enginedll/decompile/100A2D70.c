/*
 * func-name: sub_100A2D70
 * func-address: 0x100a2d70
 * callers: none
 * callees: 0x10155b90, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_100A2D70(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(this, 0xF58u, *((_DWORD *)this - 1), (void (__thiscall *)(void *))CTYMenu::~CTYMenu);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CTYMenu::~CTYMenu((CTYMenu *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
