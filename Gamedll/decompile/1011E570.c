/*
 * func-name: sub_1011E570
 * func-address: 0x1011e570
 * callers: 0x10003e72
 * callees: 0x10004bd8, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_1011E570(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x714u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))GameClient::CombinRobot::~CombinRobot);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    GameClient::CombinRobot::~CombinRobot((GameClient::CombinRobot *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
