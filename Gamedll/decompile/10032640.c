/*
 * func-name: sub_10032640
 * func-address: 0x10032640
 * callers: 0x1000eafc
 * callees: 0x102c9db6
 */

double __thiscall sub_10032640(float *this, float *a2)
{
  float v3; // [esp+4h] [ebp+4h]

  v3 = a2[1] * this[1] + *a2 * *this + a2[2] * this[2];
  return (float)acos(v3);
}
