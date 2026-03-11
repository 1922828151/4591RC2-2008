/*
 * func-name: sub_10034CC0
 * func-address: 0x10034cc0
 * callers: 0x10002e1e
 * callees: 0x1000943f, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_10034CC0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x7Cu,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))GameClient::ProductManager::~ProductManager);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    GameClient::ProductManager::~ProductManager((GameClient::ProductManager *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
