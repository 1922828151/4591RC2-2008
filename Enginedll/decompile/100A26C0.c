/*
 * func-name: sub_100A26C0
 * func-address: 0x100a26c0
 * callers: none
 * callees: 0x10155430, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_100A26C0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x240u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CControlBoxList::~CControlBoxList);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CControlBoxList::~CControlBoxList((CControlBoxList *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
