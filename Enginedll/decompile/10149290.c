/*
 * func-name: sub_10149290
 * func-address: 0x10149290
 * callers: none
 * callees: none
 */

double __thiscall sub_10149290(_DWORD *this)
{
  float *v1; // eax
  double result; // st7

  v1 = (float *)this[1];
  result = *v1;
  this[1] = v1 + 1;
  return result;
}
