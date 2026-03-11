/*
 * func-name: sub_1004D120
 * func-address: 0x1004d120
 * callers: 0x1004d160
 * callees: none
 */

BOOL __thiscall sub_1004D120(float *this, float *a2)
{
  return *a2 == *this && a2[1] == this[1] && a2[2] == this[2];
}
