/*
 * func-name: sub_1011EC50
 * func-address: 0x1011ec50
 * callers: 0x10019f0b
 * callees: 0x1000a4f7, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_1011EC50(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x1C8u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))GameClient::Establishment::~Establishment);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    GameClient::Establishment::~Establishment((GameClient::Establishment *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
