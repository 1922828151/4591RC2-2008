/*
 * func-name: sub_1006A4E0
 * func-address: 0x1006a4e0
 * callers: none
 * callees: 0x100c7c70, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_1006A4E0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x268u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CREHScrollBar::~CREHScrollBar);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CREHScrollBar::~CREHScrollBar((CREHScrollBar *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
