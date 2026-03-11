/*
 * func-name: sub_1015EC80
 * func-address: 0x1015ec80
 * callers: 0x10013a07
 * callees: 0x10007298, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_1015EC80(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x9Cu,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))GameClient::RobotBody::~RobotBody);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    GameClient::RobotBody::~RobotBody((GameClient::RobotBody *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
