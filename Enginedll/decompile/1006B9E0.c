/*
 * func-name: sub_1006B9E0
 * func-address: 0x1006b9e0
 * callers: none
 * callees: 0x100cd060, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_1006B9E0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x324u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CMultiLineStatic::~CMultiLineStatic);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CMultiLineStatic::~CMultiLineStatic((CMultiLineStatic *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
