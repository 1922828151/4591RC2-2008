/*
 * func-name: sub_1010FAB0
 * func-address: 0x1010fab0
 * callers: 0x1000f10f
 * callees: 0x100122b5, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_1010FAB0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x570u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))GameClient::CombinActor::~CombinActor);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    GameClient::CombinActor::~CombinActor((GameClient::CombinActor *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
