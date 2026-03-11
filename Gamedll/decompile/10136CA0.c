/*
 * func-name: sub_10136CA0
 * func-address: 0x10136ca0
 * callers: 0x100104d8
 * callees: 0x10009c87, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_10136CA0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x474u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))HookEsbStore::~HookEsbStore);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    HookEsbStore::~HookEsbStore((HookEsbStore *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
