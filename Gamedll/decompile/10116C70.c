/*
 * func-name: sub_10116C70
 * func-address: 0x10116c70
 * callers: 0x10017139
 * callees: 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_10116C70(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      8u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))GameClient::RobotAsyncLoaderReport::~RobotAsyncLoaderReport);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    *(_DWORD *)this = &GameClient::RobotAsyncLoaderReport::`vftable';
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
