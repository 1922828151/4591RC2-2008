/*
 * func-name: sub_100E0290
 * func-address: 0x100e0290
 * callers: 0x100df7d0
 * callees: none
 */

BOOL __thiscall sub_100E0290(float *this, float *a2)
{
  return *a2 != *this || a2[1] != this[1] || a2[2] != this[2];
}
