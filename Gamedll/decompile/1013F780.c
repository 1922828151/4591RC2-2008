/*
 * func-name: sub_1013F780
 * func-address: 0x1013f780
 * callers: 0x1000be38
 * callees: 0x1000675d
 */

_DWORD *__thiscall sub_1013F780(_DWORD *this, float a2, float a3, float a4, float a5, float a6, int a7, int a8)
{
  char *v9; // edi
  _DWORD *result; // eax
  double v11; // st6

  v9 = (char *)(this + 1);
  *this = &ScreenTipPoint::`vftable';
  this[2] = sub_1000675D();
  *((_DWORD *)v9 + 2) = 0;
  *((float *)this + 4) = a2;
  *((float *)this + 6) = a4;
  this[11] = a7;
  *((float *)this + 5) = a3;
  this[12] = a8;
  *((float *)this + 7) = a5;
  result = this;
  *((float *)this + 8) = a6;
  v11 = a5 - a3;
  *((float *)this + 9) = 0.75 * v11 + a3;
  *((float *)this + 10) = a3 + v11 * 0.25;
  return result;
}
