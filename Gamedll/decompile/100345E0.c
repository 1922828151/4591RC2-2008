/*
 * func-name: sub_100345E0
 * func-address: 0x100345e0
 * callers: 0x1000da44
 * callees: 0x100048a9, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_100345E0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x90u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))GameClient::Func_RobotReceive::~Func_RobotReceive);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    GameClient::Func_RobotReceive::~Func_RobotReceive((GameClient::Func_RobotReceive *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
