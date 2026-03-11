/*
 * func-name: sub_102C6F80
 * func-address: 0x102c6f80
 * callers: 0x10063780, 0x101a3800, 0x102812e0
 * callees: none
 */

BOOL __thiscall sub_102C6F80(float *this, float *a2)
{
  double v2; // st4
  double v3; // st6
  double v4; // st4
  double v5; // st5
  BOOL result; // eax

  v2 = *a2 - *this;
  v3 = v2 * v2;
  v4 = a2[2] - this[2];
  result = 0;
  if ( this[3] * this[3] >= v4 * v4 + v3 )
  {
    v5 = a2[1] - this[1];
    if ( this[4] * this[4] >= v5 * v5 )
      return 1;
  }
  return result;
}
