/*
 * func-name: sub_10067B70
 * func-address: 0x10067b70
 * callers: 0x10001776
 * callees: 0x1000f3a3, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_10067B70(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x24u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))GameClient::ChatManager::~ChatManager);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    GameClient::ChatManager::~ChatManager((GameClient::ChatManager *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
