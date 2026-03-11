/*
 * func-name: sub_10033A20
 * func-address: 0x10033a20
 * callers: 0x1000d1fc
 * callees: 0x1001a94c, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_10033A20(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      8u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))GameClient::RobotCallback::~RobotCallback);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    GameClient::RobotCallback::~RobotCallback((GameClient::RobotCallback *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
