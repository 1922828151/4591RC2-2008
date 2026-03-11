/*
 * func-name: sub_1006B380
 * func-address: 0x1006b380
 * callers: none
 * callees: 0x100c8d30, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_1006B380(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x338u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CPasswordEB::~CPasswordEB);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CPasswordEB::~CPasswordEB((CPasswordEB *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
