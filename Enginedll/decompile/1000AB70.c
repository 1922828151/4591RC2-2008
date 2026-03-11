/*
 * func-name: sub_1000AB70
 * func-address: 0x1000ab70
 * callers: none
 * callees: 0x1000aa70, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_1000AB70(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xB0u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))FXSystem::~FXSystem);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    FXSystem::~FXSystem((FXSystem *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
