/*
 * func-name: sub_102C0C40
 * func-address: 0x102c0c40
 * callers: 0x1002f8e0
 * callees: 0x102c9dbc, 0x102ca4e0
 */

double __thiscall sub_102C0C40(float *this)
{
  float v2; // [esp+0h] [ebp-4h]
  float v3; // [esp+0h] [ebp-4h]

  v2 = this[1] * this[1] + *this * *this;
  v3 = sqrt(v2);
  return atan(v3) * 57.2957763671875;
}
