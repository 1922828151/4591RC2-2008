/*
 * func-name: sub_1013F020
 * func-address: 0x1013f020
 * callers: 0x10002eb4
 * callees: 0x1000a1a0
 */

_DWORD *__thiscall sub_1013F020(_DWORD *this, float a2, float a3, float a4, float a5, float a6, int a7, int a8)
{
  char *v9; // edi
  _DWORD *result; // eax

  v9 = (char *)(this + 1);
  *this = &ScreenTip::`vftable';
  this[2] = sub_1000A1A0();
  *((_DWORD *)v9 + 2) = 0;
  *((float *)this + 4) = a2;
  this[9] = a7;
  *((float *)this + 6) = a4;
  this[10] = a8;
  *((float *)this + 5) = a3;
  result = this;
  *((float *)this + 7) = a5;
  *((float *)this + 8) = a6;
  return result;
}
