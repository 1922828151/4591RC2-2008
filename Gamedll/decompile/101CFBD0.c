/*
 * func-name: sub_101CFBD0
 * func-address: 0x101cfbd0
 * callers: 0x1000eb74
 * callees: 0x10004246, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_101CFBD0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x9Cu,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))GameClient::AEnergy::~AEnergy);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    *(_DWORD *)this = &GameClient::AEnergy::`vftable';
    GameClient::Aura::~Aura((GameClient::Aura *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
