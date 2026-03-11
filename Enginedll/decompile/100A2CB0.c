/*
 * func-name: sub_100A2CB0
 * func-address: 0x100a2cb0
 * callers: none
 * callees: 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_100A2CB0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      4u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CTYMenuHandler::~CTYMenuHandler);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    *(_DWORD *)this = &CTYMenuHandler::`vftable';
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
