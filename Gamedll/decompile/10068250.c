/*
 * func-name: sub_10068250
 * func-address: 0x10068250
 * callers: 0x10015db1
 * callees: 0x1000d594, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_10068250(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xF48u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CGroupQuickCallUI::~CGroupQuickCallUI);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CGroupQuickCallUI::~CGroupQuickCallUI((CGroupQuickCallUI *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
