/*
 * func-name: sub_1006B520
 * func-address: 0x1006b520
 * callers: none
 * callees: 0x100cd9c0, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_1006B520(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x30Cu,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CREListCtrl::~CREListCtrl);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CREListCtrl::~CREListCtrl((CREListCtrl *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
