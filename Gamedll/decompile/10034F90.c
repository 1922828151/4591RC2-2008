/*
 * func-name: sub_10034F90
 * func-address: 0x10034f90
 * callers: 0x100062bc
 * callees: 0x10017cd3, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_10034F90(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x3F8u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))GameClient::FRobotBody::~FRobotBody);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    GameClient::FRobotBody::~FRobotBody((GameClient::FRobotBody *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
