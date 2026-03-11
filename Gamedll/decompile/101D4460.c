/*
 * func-name: sub_101D4460
 * func-address: 0x101d4460
 * callers: 0x1000247d
 * callees: 0x1000e8e5, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_101D4460(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x2BCu,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))GameClient::SLock::~SLock);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    GameClient::SLock::~SLock((GameClient::SLock *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
