/*
 * func-name: sub_10069F30
 * func-address: 0x10069f30
 * callers: none
 * callees: 0x100c7390, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_10069F30(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x214u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CREControl::~CREControl);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CREControl::~CREControl((CREControl *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
