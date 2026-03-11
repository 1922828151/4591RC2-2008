/*
 * func-name: sub_1009F5D0
 * func-address: 0x1009f5d0
 * callers: 0x1000a9ed
 * callees: 0x10009ad9, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_1009F5D0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x478u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Effect_Light::~Effect_Light);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Effect_Light::~Effect_Light((Effect_Light *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
