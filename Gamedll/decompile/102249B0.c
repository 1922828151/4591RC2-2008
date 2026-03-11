/*
 * func-name: sub_102249B0
 * func-address: 0x102249b0
 * callers: 0x10004b4c
 * callees: 0x1000f5f6, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_102249B0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x20u,
      *((_DWORD *)this - 1),
      GameClient::ProductorTemplate<GameClient::FBullet>::~ProductorTemplate<GameClient::FBullet>);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    *(_DWORD *)this = &GameClient::ProductorTemplate<GameClient::FBullet>::`vftable';
    GameClient::Productor::~Productor((GameClient::Productor *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
