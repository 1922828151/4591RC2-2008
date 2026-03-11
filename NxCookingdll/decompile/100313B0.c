/*
 * func-name: sub_100313B0
 * func-address: 0x100313b0
 * callers: 0x10031470
 * callees: none
 */

float *__thiscall sub_100313B0(float *this, float *a2, float *a3)
{
  double v3; // st7
  double v4; // st6
  float *result; // eax

  v3 = this[2];
  if ( a3[2] >= v3 )
    v3 = a3[2];
  v4 = this[1];
  if ( a3[1] >= v4 )
    v4 = a3[1];
  result = a2;
  if ( *a3 >= (double)*this )
    *a2 = *a3;
  else
    *a2 = *this;
  a2[1] = v4;
  a2[2] = v3;
  return result;
}
