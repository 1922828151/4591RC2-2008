/*
 * func-name: sub_10136D40
 * func-address: 0x10136d40
 * callers: 0x10017e6d
 * callees: 0x1000e3fe, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_10136D40(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x4DCu,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))HookEsbTake::~HookEsbTake);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    HookEsbTake::~HookEsbTake((HookEsbTake *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
