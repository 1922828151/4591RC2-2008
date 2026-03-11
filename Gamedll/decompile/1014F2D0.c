/*
 * func-name: sub_1014F2D0
 * func-address: 0x1014f2d0
 * callers: 0x100110e0
 * callees: 0x100188a9, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_1014F2D0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x388u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))GameClient::DamageEquip::~DamageEquip);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    GameClient::DamageEquip::~DamageEquip((GameClient::DamageEquip *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
