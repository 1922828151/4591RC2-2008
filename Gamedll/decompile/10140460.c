/*
 * func-name: sub_10140460
 * func-address: 0x10140460
 * callers: 0x1000de72
 * callees: 0x10015cf3, 0x102c9d50
 */

char *__thiscall sub_10140460(char *this, char a2)
{
  void **v3; // edi

  v3 = (void **)(this + 4);
  *(_DWORD *)this = &ScreenTipPoint::`vftable';
  sub_10015CF3();
  operator delete(v3[1]);
  v3[1] = 0;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
