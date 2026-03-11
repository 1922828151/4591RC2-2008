/*
 * func-name: sub_1023FC50
 * func-address: 0x1023fc50
 * callers: 0x10010c1c
 * callees: 0x1000f5f6, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_1023FC50(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x20u,
      *((_DWORD *)this - 1),
      GameClient::ProductorTemplate<GameClient::FSeat>::~ProductorTemplate<GameClient::FSeat>);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    *(_DWORD *)this = &GameClient::ProductorTemplate<GameClient::FSeat>::`vftable';
    GameClient::Productor::~Productor((GameClient::Productor *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
