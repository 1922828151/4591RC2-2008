/*
 * func-name: sub_10033AD0
 * func-address: 0x10033ad0
 * callers: 0x10009ade
 * callees: 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_10033AD0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      4u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))GameClient::RobotSuicideConfirmCallback::~RobotSuicideConfirmCallback);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    *(_DWORD *)this = &CMsgDlgHandler::`vftable';
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
