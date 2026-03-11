/*
 * func-name: sub_101B0AD0
 * func-address: 0x101b0ad0
 * callers: 0x1000f092
 * callees: 0x10011aa4, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_101B0AD0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x2Cu,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))GameClient::EstabControllerManager::~EstabControllerManager);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    GameClient::EstabControllerManager::~EstabControllerManager((GameClient::EstabControllerManager *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
