/*
 * func-name: sub_10032210
 * func-address: 0x10032210
 * callers: 0x1000a984
 * callees: 0x102c9dbc
 */

double __thiscall sub_10032210(float *this)
{
  float v2; // [esp+0h] [ebp-4h]

  v2 = this[1] * this[1] + *this * *this + this[2] * this[2];
  return (float)sqrt(v2);
}
