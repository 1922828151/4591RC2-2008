/*
 * func-name: sub_10070A30
 * func-address: 0x10070a30
 * callers: none
 * callees: 0x1006f170, 0x100c7390, 0x101a2500, 0x101a253a, 0x101a259e
 */

CREControl *__thiscall sub_10070A30(CREControl *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x22Cu,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CRETabPages::~CRETabPages);
    if ( (a2 & 1) != 0 )
      operator delete[]((char *)this - 4);
    return (CREControl *)((char *)this - 4);
  }
  else
  {
    sub_1006F170((_DWORD *)this + 133, 0);
    CREControl::~CREControl(this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
