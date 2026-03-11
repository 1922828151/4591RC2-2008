/*
 * func-name: sub_100D5990
 * func-address: 0x100d5990
 * callers: 0x10010159
 * callees: 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_100D5990(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(this, 0x78u, *((_DWORD *)this - 1), sub_10013F25);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    *(_DWORD *)this = &NxShapeDesc::`vftable';
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
