/*
 * func-name: sub_10136C00
 * func-address: 0x10136c00
 * callers: 0x100032d8
 * callees: 0x1000421e, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_10136C00(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x4F4u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))HookEsbProduce::~HookEsbProduce);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    HookEsbProduce::~HookEsbProduce((HookEsbProduce *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
