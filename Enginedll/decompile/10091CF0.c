/*
 * func-name: sub_10091CF0
 * func-address: 0x10091cf0
 * callers: 0x10092c60
 * callees: 0x101a2516
 */

char __thiscall sub_10091CF0(float *this)
{
  char result; // al
  float v2; // [esp+4h] [ebp-4h]
  float v3; // [esp+4h] [ebp-4h]
  float v4; // [esp+4h] [ebp-4h]

  v2 = this[1] * this[1] + *this * *this;
  if ( v2 < 0.0000000099999999 )
    return 0;
  v3 = sqrt(v2);
  result = 1;
  v4 = 1.0 / v3;
  *this = *this * v4;
  this[1] = v4 * this[1];
  return result;
}
