/*
 * func-name: sub_100A2E60
 * func-address: 0x100a2e60
 * callers: none
 * callees: 0x10150dc0, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_100A2E60(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(this, 0x2A8u, *((_DWORD *)this - 1), (void (__thiscall *)(void *))CPaster::~CPaster);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CPaster::~CPaster((CPaster *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
