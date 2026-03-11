/*
 * func-name: sub_1002D280
 * func-address: 0x1002d280
 * callers: none
 * callees: 0x10026e00, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_1002D280(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(this, 0x54u, *((_DWORD *)this - 1), (void (__thiscall *)(void *))Canvas::~Canvas);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    *(_DWORD *)this = &Canvas::`vftable';
    sub_10026E00((int)(this + 32));
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
