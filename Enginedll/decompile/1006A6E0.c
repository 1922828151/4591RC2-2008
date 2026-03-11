/*
 * func-name: sub_1006A6E0
 * func-address: 0x1006a6e0
 * callers: none
 * callees: 0x100c7f10, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_1006A6E0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x4D0u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CREPropertiesList::~CREPropertiesList);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CREPropertiesList::~CREPropertiesList((CREPropertiesList *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
