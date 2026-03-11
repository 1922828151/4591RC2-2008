/*
 * func-name: sub_101492B0
 * func-address: 0x101492b0
 * callers: none
 * callees: none
 */

double __thiscall sub_101492B0(_DWORD *this)
{
  double *v1; // eax
  double result; // st7

  v1 = (double *)this[1];
  result = *v1;
  this[1] = v1 + 1;
  return result;
}
