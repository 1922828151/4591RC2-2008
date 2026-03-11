/*
 * func-name: sub_1013F490
 * func-address: 0x1013f490
 * callers: 0x100111e4
 * callees: 0x10012f67, 0x102c9d50
 */

char *__thiscall sub_1013F490(char *this, char a2)
{
  void **v3; // edi

  v3 = (void **)(this + 4);
  *(_DWORD *)this = &ScreenTip::`vftable';
  sub_10012F67();
  operator delete(v3[1]);
  v3[1] = 0;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
