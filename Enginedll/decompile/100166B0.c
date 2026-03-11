/*
 * func-name: sub_100166B0
 * func-address: 0x100166b0
 * callers: 0x1001b780
 * callees: none
 */

BOOL __thiscall sub_100166B0(float *this, float *a2)
{
  return this[3] != a2[3] || *this != *a2 || this[1] != a2[1] || this[2] != a2[2];
}
