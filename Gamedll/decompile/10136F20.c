/*
 * func-name: sub_10136F20
 * func-address: 0x10136f20
 * callers: 0x10002b17
 * callees: 0x100118d3, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_10136F20(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x4F8u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))HookEsbTransport::~HookEsbTransport);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    HookEsbTransport::~HookEsbTransport((HookEsbTransport *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
