/*
 * func-name: sub_1006A020
 * func-address: 0x1006a020
 * callers: none
 * callees: 0x10069fa0, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_1006A020(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x2B8u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CREStatic::~CREStatic);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CREStatic::~CREStatic((CREStatic *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
