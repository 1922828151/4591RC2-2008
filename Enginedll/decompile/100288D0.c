/*
 * func-name: sub_100288D0
 * func-address: 0x100288d0
 * callers: none
 * callees: 0x10028840, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_100288D0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(this, 0x16C0u, *((_DWORD *)this - 1), (void (__thiscall *)(void *))Input::~Input);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Input::~Input((Input *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
