/*
 * func-name: sub_1019C330
 * func-address: 0x1019c330
 * callers: 0x1000b4ce
 * callees: 0x10007054, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_1019C330(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x430u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))GameClient::FControlledEstab::~FControlledEstab);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    GameClient::FControlledEstab::~FControlledEstab((GameClient::FControlledEstab *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
