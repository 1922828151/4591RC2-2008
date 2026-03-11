/*
 * func-name: sub_10259AA0
 * func-address: 0x10259aa0
 * callers: 0x1000af6f
 * callees: 0x10008567, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_10259AA0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xF40u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CGroupMemberUI::~CGroupMemberUI);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CGroupMemberUI::~CGroupMemberUI((CGroupMemberUI *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
