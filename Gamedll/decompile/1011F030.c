/*
 * func-name: sub_1011F030
 * func-address: 0x1011f030
 * callers: 0x1001636f
 * callees: 0x10007e37, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_1011F030(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x218u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))GameClient::ControlledEstab::~ControlledEstab);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    GameClient::ControlledEstab::~ControlledEstab((GameClient::ControlledEstab *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
