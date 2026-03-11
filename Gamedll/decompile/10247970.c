/*
 * func-name: sub_10247970
 * func-address: 0x10247970
 * callers: 0x100193ee
 * callees: 0x1000f5f6, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_10247970(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x20u,
      *((_DWORD *)this - 1),
      GameClient::ProductorTemplate<GameClient::FACapability>::~ProductorTemplate<GameClient::FACapability>);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    *(_DWORD *)this = &GameClient::ProductorTemplate<GameClient::FACapability>::`vftable';
    GameClient::Productor::~Productor((GameClient::Productor *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
