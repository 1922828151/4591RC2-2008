/*
 * func-name: sub_101CEEF0
 * func-address: 0x101ceef0
 * callers: 0x10003797
 * callees: 0x100055d8, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_101CEEF0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xF28u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CAlarmMessageUI::~CAlarmMessageUI);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CAlarmMessageUI::~CAlarmMessageUI((CAlarmMessageUI *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
