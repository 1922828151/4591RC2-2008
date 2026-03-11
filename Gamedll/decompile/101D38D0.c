/*
 * func-name: sub_101D38D0
 * func-address: 0x101d38d0
 * callers: 0x100131ce
 * callees: 0x1000240a, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_101D38D0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x2CCu,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))GameClient::FSLock::~FSLock);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    GameClient::FSLock::~FSLock((GameClient::FSLock *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
