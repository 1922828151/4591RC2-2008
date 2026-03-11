/*
 * func-name: sub_10035370
 * func-address: 0x10035370
 * callers: 0x100038cd
 * callees: 0x10018d2c, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_10035370(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x5CCu,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))GameClient::Weapon::~Weapon);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    GameClient::Weapon::~Weapon((GameClient::Weapon *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
