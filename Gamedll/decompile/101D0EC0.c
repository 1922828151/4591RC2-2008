/*
 * func-name: sub_101D0EC0
 * func-address: 0x101d0ec0
 * callers: 0x1000a0d3
 * callees: 0x10004246, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_101D0EC0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xA4u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))GameClient::ASummon::~ASummon);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    *(_DWORD *)this = &GameClient::ASummon::`vftable';
    GameClient::Aura::~Aura((GameClient::Aura *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
