/*
 * func-name: sub_1006AC30
 * func-address: 0x1006ac30
 * callers: none
 * callees: 0x100c8630, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_1006AC30(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x318u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CREEditBox::~CREEditBox);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CREEditBox::~CREEditBox((CREEditBox *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
