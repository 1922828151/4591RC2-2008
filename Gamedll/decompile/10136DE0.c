/*
 * func-name: sub_10136DE0
 * func-address: 0x10136de0
 * callers: 0x1000a4c5
 * callees: 0x100059d9, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_10136DE0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x4CCu,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))HookEsbSheild::~HookEsbSheild);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    HookEsbSheild::~HookEsbSheild((HookEsbSheild *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
