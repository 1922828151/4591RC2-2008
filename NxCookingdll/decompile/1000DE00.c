/*
 * func-name: sub_1000DE00
 * func-address: 0x1000de00
 * callers: none
 * callees: none
 */

float *__thiscall sub_1000DE00(float *this, float *a2)
{
  float *v2; // edx
  float *result; // eax

  v2 = this + 73;
  if ( this[73] < 0.0 )
    v2 = 0;
  result = a2;
  *a2 = *v2;
  qmemcpy(a2 + 1, v2 + 1, 0x30u);
  return result;
}
