/*
 * func-name: sub_1007E950
 * func-address: 0x1007e950
 * callers: 0x10080c60
 * callees: 0x101a28da
 */

double __thiscall sub_1007E950(float *this, float *a2)
{
  float v3; // [esp+4h] [ebp+4h]

  v3 = a2[1] * this[1] + *a2 * *this + a2[2] * this[2];
  return (float)acos(v3);
}
