/*
 * func-name: sub_100348A0
 * func-address: 0x100348a0
 * callers: 0x1000b280
 * callees: 0x1000321f, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_100348A0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x6Cu,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))GameClient::Flyweight::~Flyweight);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    GameClient::Flyweight::~Flyweight((GameClient::Flyweight *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
