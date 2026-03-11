/*
 * func-name: sub_10118BB0
 * func-address: 0x10118bb0
 * callers: none
 * callees: 0x10118a80, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_10118BB0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x6B4u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))RenderDevice::~RenderDevice);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    RenderDevice::~RenderDevice((void **)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
