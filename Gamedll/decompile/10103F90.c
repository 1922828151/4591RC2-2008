/*
 * func-name: sub_10103F90
 * func-address: 0x10103f90
 * callers: 0x10008aa8
 * callees: 0x1000512d, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_10103F90(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x8ECu,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))GameClient::AEquip::~AEquip);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    GameClient::AEquip::~AEquip((GameClient::AEquip *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
