/*
 * func-name: sub_10014490
 * func-address: 0x10014490
 * callers: none
 * callees: none
 */

float *__thiscall sub_10014490(float *this, float *a2)
{
  float *v2; // edx
  float *result; // eax

  v2 = this + 52;
  if ( this[52] < 0.0 )
    v2 = 0;
  result = a2;
  *a2 = *v2;
  qmemcpy(a2 + 1, v2 + 1, 0x30u);
  return result;
}
