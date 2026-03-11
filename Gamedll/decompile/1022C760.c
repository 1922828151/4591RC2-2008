/*
 * func-name: sub_1022C760
 * func-address: 0x1022c760
 * callers: 0x1000cd10
 * callees: 0x10013381, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_1022C760(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x80u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))GameClient::FFunc_RobotReceive::~FFunc_RobotReceive);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    *(_DWORD *)this = &GameClient::FFunc_RobotReceive::`vftable';
    GameClient::FFunc_Receive::~FFunc_Receive((GameClient::FFunc_Receive *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
