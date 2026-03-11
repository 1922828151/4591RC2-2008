/*
 * func-name: sub_10210370
 * func-address: 0x10210370
 * callers: 0x10001ffa
 * callees: 0x100098c2, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_10210370(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xF48u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CControlCenterListUI::~CControlCenterListUI);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CControlCenterListUI::~CControlCenterListUI((CControlCenterListUI *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
